/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/lakeformation/LakeFormationClient.h>
#include <aws/lakeformation/LakeFormationErrorMarshaller.h>
#include <aws/lakeformation/LakeFormationEndpointProvider.h>
#include <aws/lakeformation/model/AddLFTagsToResourceRequest.h>
#include <aws/lakeformation/model/AssumeDecoratedRoleWithSAMLRequest.h>
#include <aws/lakeformation/model/BatchGrantPermissionsRequest.h>
#include <aws/lakeformation/model/BatchRevokePermissionsRequest.h>
#include <aws/lakeformation/model/CancelTransactionRequest.h>
#include <aws/lakeformation/model/CommitTransactionRequest.h>
#include <aws/lakeformation/model/CreateDataCellsFilterRequest.h>
#include <aws/lakeformation/model/CreateLFTagRequest.h>
#include <aws/lakeformation/model/DeleteDataCellsFilterRequest.h>
#include <aws/lakeformation/model/DeleteLFTagRequest.h>
#include <aws/lakeformation/model/DeleteObjectsOnCancelRequest.h>
#include <aws/lakeformation/model/DeregisterResourceRequest.h>
#include <aws/lakeformation/model/DescribeResourceRequest.h>
#include <aws/lakeformation/model/DescribeTransactionRequest.h>
#include <aws/lakeformation/model/ExtendTransactionRequest.h>
#include <aws/lakeformation/model/GetDataCellsFilterRequest.h>
#include <aws/lakeformation/model/GetDataLakeSettingsRequest.h>
#include <aws/lakeformation/model/GetEffectivePermissionsForPathRequest.h>
#include <aws/lakeformation/model/GetLFTagRequest.h>
#include <aws/lakeformation/model/GetQueryStateRequest.h>
#include <aws/lakeformation/model/GetQueryStatisticsRequest.h>
#include <aws/lakeformation/model/GetResourceLFTagsRequest.h>
#include <aws/lakeformation/model/GetTableObjectsRequest.h>
#include <aws/lakeformation/model/GetTemporaryGluePartitionCredentialsRequest.h>
#include <aws/lakeformation/model/GetTemporaryGlueTableCredentialsRequest.h>
#include <aws/lakeformation/model/GetWorkUnitResultsRequest.h>
#include <aws/lakeformation/model/GetWorkUnitsRequest.h>
#include <aws/lakeformation/model/GrantPermissionsRequest.h>
#include <aws/lakeformation/model/ListDataCellsFilterRequest.h>
#include <aws/lakeformation/model/ListLFTagsRequest.h>
#include <aws/lakeformation/model/ListPermissionsRequest.h>
#include <aws/lakeformation/model/ListResourcesRequest.h>
#include <aws/lakeformation/model/ListTableStorageOptimizersRequest.h>
#include <aws/lakeformation/model/ListTransactionsRequest.h>
#include <aws/lakeformation/model/PutDataLakeSettingsRequest.h>
#include <aws/lakeformation/model/RegisterResourceRequest.h>
#include <aws/lakeformation/model/RemoveLFTagsFromResourceRequest.h>
#include <aws/lakeformation/model/RevokePermissionsRequest.h>
#include <aws/lakeformation/model/SearchDatabasesByLFTagsRequest.h>
#include <aws/lakeformation/model/SearchTablesByLFTagsRequest.h>
#include <aws/lakeformation/model/StartQueryPlanningRequest.h>
#include <aws/lakeformation/model/StartTransactionRequest.h>
#include <aws/lakeformation/model/UpdateDataCellsFilterRequest.h>
#include <aws/lakeformation/model/UpdateLFTagRequest.h>
#include <aws/lakeformation/model/UpdateResourceRequest.h>
#include <aws/lakeformation/model/UpdateTableObjectsRequest.h>
#include <aws/lakeformation/model/UpdateTableStorageOptimizerRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LakeFormation;
using namespace Aws::LakeFormation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* LakeFormationClient::SERVICE_NAME = "lakeformation";
const char* LakeFormationClient::ALLOCATION_TAG = "LakeFormationClient";

LakeFormationClient::LakeFormationClient(const LakeFormation::LakeFormationClientConfiguration& clientConfiguration,
                                         std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const AWSCredentials& credentials,
                                         std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider,
                                         const LakeFormation::LakeFormationClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider,
                                         const LakeFormation::LakeFormationClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  LakeFormationClient::LakeFormationClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const AWSCredentials& credentials,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
LakeFormationClient::~LakeFormationClient()
{
}

std::shared_ptr<LakeFormationEndpointProviderBase>& LakeFormationClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void LakeFormationClient::init(const LakeFormation::LakeFormationClientConfiguration& config)
{
  AWSClient::SetServiceClientName("LakeFormation");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void LakeFormationClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AddLFTagsToResourceOutcome LakeFormationClient::AddLFTagsToResource(const AddLFTagsToResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AddLFTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AddLFTagsToResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/AddLFTagsToResource");
  return AddLFTagsToResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssumeDecoratedRoleWithSAMLOutcome LakeFormationClient::AssumeDecoratedRoleWithSAML(const AssumeDecoratedRoleWithSAMLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeDecoratedRoleWithSAML, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeDecoratedRoleWithSAML, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/AssumeDecoratedRoleWithSAML");
  return AssumeDecoratedRoleWithSAMLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGrantPermissionsOutcome LakeFormationClient::BatchGrantPermissions(const BatchGrantPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGrantPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGrantPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGrantPermissions");
  return BatchGrantPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchRevokePermissionsOutcome LakeFormationClient::BatchRevokePermissions(const BatchRevokePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchRevokePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchRevokePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/BatchRevokePermissions");
  return BatchRevokePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelTransactionOutcome LakeFormationClient::CancelTransaction(const CancelTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CancelTransaction");
  return CancelTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CommitTransactionOutcome LakeFormationClient::CommitTransaction(const CommitTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CommitTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CommitTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CommitTransaction");
  return CommitTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataCellsFilterOutcome LakeFormationClient::CreateDataCellsFilter(const CreateDataCellsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateDataCellsFilter");
  return CreateDataCellsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLFTagOutcome LakeFormationClient::CreateLFTag(const CreateLFTagRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLFTag");
  return CreateLFTagOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataCellsFilterOutcome LakeFormationClient::DeleteDataCellsFilter(const DeleteDataCellsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteDataCellsFilter");
  return DeleteDataCellsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLFTagOutcome LakeFormationClient::DeleteLFTag(const DeleteLFTagRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLFTag");
  return DeleteLFTagOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteObjectsOnCancelOutcome LakeFormationClient::DeleteObjectsOnCancel(const DeleteObjectsOnCancelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObjectsOnCancel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObjectsOnCancel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteObjectsOnCancel");
  return DeleteObjectsOnCancelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterResourceOutcome LakeFormationClient::DeregisterResource(const DeregisterResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeregisterResource");
  return DeregisterResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourceOutcome LakeFormationClient::DescribeResource(const DescribeResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeResource");
  return DescribeResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTransactionOutcome LakeFormationClient::DescribeTransaction(const DescribeTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeTransaction");
  return DescribeTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExtendTransactionOutcome LakeFormationClient::ExtendTransaction(const ExtendTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExtendTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExtendTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ExtendTransaction");
  return ExtendTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataCellsFilterOutcome LakeFormationClient::GetDataCellsFilter(const GetDataCellsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetDataCellsFilter");
  return GetDataCellsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataLakeSettingsOutcome LakeFormationClient::GetDataLakeSettings(const GetDataLakeSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataLakeSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataLakeSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetDataLakeSettings");
  return GetDataLakeSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEffectivePermissionsForPathOutcome LakeFormationClient::GetEffectivePermissionsForPath(const GetEffectivePermissionsForPathRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEffectivePermissionsForPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEffectivePermissionsForPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetEffectivePermissionsForPath");
  return GetEffectivePermissionsForPathOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLFTagOutcome LakeFormationClient::GetLFTag(const GetLFTagRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetLFTag");
  return GetLFTagOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQueryStateOutcome LakeFormationClient::GetQueryState(const GetQueryStateRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueryState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueryState, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("query-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetQueryStateOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetQueryState");
  return GetQueryStateOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetQueryStatisticsOutcome LakeFormationClient::GetQueryStatistics(const GetQueryStatisticsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetQueryStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetQueryStatistics, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("query-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetQueryStatisticsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetQueryStatistics");
  return GetQueryStatisticsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceLFTagsOutcome LakeFormationClient::GetResourceLFTags(const GetResourceLFTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetResourceLFTags");
  return GetResourceLFTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTableObjectsOutcome LakeFormationClient::GetTableObjects(const GetTableObjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetTableObjects");
  return GetTableObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTemporaryGluePartitionCredentialsOutcome LakeFormationClient::GetTemporaryGluePartitionCredentials(const GetTemporaryGluePartitionCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemporaryGluePartitionCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemporaryGluePartitionCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetTemporaryGluePartitionCredentials");
  return GetTemporaryGluePartitionCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTemporaryGlueTableCredentialsOutcome LakeFormationClient::GetTemporaryGlueTableCredentials(const GetTemporaryGlueTableCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemporaryGlueTableCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemporaryGlueTableCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetTemporaryGlueTableCredentials");
  return GetTemporaryGlueTableCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetWorkUnitResultsOutcome LakeFormationClient::GetWorkUnitResults(const GetWorkUnitResultsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkUnitResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkUnitResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("data-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetWorkUnitResultsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetWorkUnitResults");
  return GetWorkUnitResultsOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

GetWorkUnitsOutcome LakeFormationClient::GetWorkUnits(const GetWorkUnitsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkUnits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkUnits, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("query-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetWorkUnitsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetWorkUnits");
  return GetWorkUnitsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GrantPermissionsOutcome LakeFormationClient::GrantPermissions(const GrantPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GrantPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GrantPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GrantPermissions");
  return GrantPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDataCellsFilterOutcome LakeFormationClient::ListDataCellsFilter(const ListDataCellsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListDataCellsFilter");
  return ListDataCellsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLFTagsOutcome LakeFormationClient::ListLFTags(const ListLFTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListLFTags");
  return ListLFTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionsOutcome LakeFormationClient::ListPermissions(const ListPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListPermissions");
  return ListPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesOutcome LakeFormationClient::ListResources(const ListResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListResources");
  return ListResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTableStorageOptimizersOutcome LakeFormationClient::ListTableStorageOptimizers(const ListTableStorageOptimizersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTableStorageOptimizers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTableStorageOptimizers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListTableStorageOptimizers");
  return ListTableStorageOptimizersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTransactionsOutcome LakeFormationClient::ListTransactions(const ListTransactionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTransactions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTransactions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListTransactions");
  return ListTransactionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDataLakeSettingsOutcome LakeFormationClient::PutDataLakeSettings(const PutDataLakeSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutDataLakeSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutDataLakeSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/PutDataLakeSettings");
  return PutDataLakeSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterResourceOutcome LakeFormationClient::RegisterResource(const RegisterResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/RegisterResource");
  return RegisterResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveLFTagsFromResourceOutcome LakeFormationClient::RemoveLFTagsFromResource(const RemoveLFTagsFromResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveLFTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveLFTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/RemoveLFTagsFromResource");
  return RemoveLFTagsFromResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokePermissionsOutcome LakeFormationClient::RevokePermissions(const RevokePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/RevokePermissions");
  return RevokePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDatabasesByLFTagsOutcome LakeFormationClient::SearchDatabasesByLFTags(const SearchDatabasesByLFTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDatabasesByLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDatabasesByLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/SearchDatabasesByLFTags");
  return SearchDatabasesByLFTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchTablesByLFTagsOutcome LakeFormationClient::SearchTablesByLFTags(const SearchTablesByLFTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchTablesByLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchTablesByLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/SearchTablesByLFTags");
  return SearchTablesByLFTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartQueryPlanningOutcome LakeFormationClient::StartQueryPlanning(const StartQueryPlanningRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartQueryPlanning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartQueryPlanning, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("query-");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), StartQueryPlanningOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/StartQueryPlanning");
  return StartQueryPlanningOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTransactionOutcome LakeFormationClient::StartTransaction(const StartTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/StartTransaction");
  return StartTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateDataCellsFilterOutcome LakeFormationClient::UpdateDataCellsFilter(const UpdateDataCellsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateDataCellsFilter");
  return UpdateDataCellsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLFTagOutcome LakeFormationClient::UpdateLFTag(const UpdateLFTagRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLFTag");
  return UpdateLFTagOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceOutcome LakeFormationClient::UpdateResource(const UpdateResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateResource");
  return UpdateResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableObjectsOutcome LakeFormationClient::UpdateTableObjects(const UpdateTableObjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTableObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTableObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTableObjects");
  return UpdateTableObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableStorageOptimizerOutcome LakeFormationClient::UpdateTableStorageOptimizer(const UpdateTableStorageOptimizerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTableStorageOptimizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTableStorageOptimizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTableStorageOptimizer");
  return UpdateTableStorageOptimizerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

