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

AddLFTagsToResourceOutcomeCallable LakeFormationClient::AddLFTagsToResourceCallable(const AddLFTagsToResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AddLFTagsToResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AddLFTagsToResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::AddLFTagsToResourceAsync(const AddLFTagsToResourceRequest& request, const AddLFTagsToResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AddLFTagsToResource(request), context);
    } );
}

AssumeDecoratedRoleWithSAMLOutcome LakeFormationClient::AssumeDecoratedRoleWithSAML(const AssumeDecoratedRoleWithSAMLRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssumeDecoratedRoleWithSAML, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssumeDecoratedRoleWithSAML, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/AssumeDecoratedRoleWithSAML");
  return AssumeDecoratedRoleWithSAMLOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AssumeDecoratedRoleWithSAMLOutcomeCallable LakeFormationClient::AssumeDecoratedRoleWithSAMLCallable(const AssumeDecoratedRoleWithSAMLRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssumeDecoratedRoleWithSAMLOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssumeDecoratedRoleWithSAML(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::AssumeDecoratedRoleWithSAMLAsync(const AssumeDecoratedRoleWithSAMLRequest& request, const AssumeDecoratedRoleWithSAMLResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssumeDecoratedRoleWithSAML(request), context);
    } );
}

BatchGrantPermissionsOutcome LakeFormationClient::BatchGrantPermissions(const BatchGrantPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchGrantPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchGrantPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGrantPermissions");
  return BatchGrantPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchGrantPermissionsOutcomeCallable LakeFormationClient::BatchGrantPermissionsCallable(const BatchGrantPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchGrantPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchGrantPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::BatchGrantPermissionsAsync(const BatchGrantPermissionsRequest& request, const BatchGrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchGrantPermissions(request), context);
    } );
}

BatchRevokePermissionsOutcome LakeFormationClient::BatchRevokePermissions(const BatchRevokePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchRevokePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchRevokePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/BatchRevokePermissions");
  return BatchRevokePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchRevokePermissionsOutcomeCallable LakeFormationClient::BatchRevokePermissionsCallable(const BatchRevokePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchRevokePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchRevokePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::BatchRevokePermissionsAsync(const BatchRevokePermissionsRequest& request, const BatchRevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchRevokePermissions(request), context);
    } );
}

CancelTransactionOutcome LakeFormationClient::CancelTransaction(const CancelTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CancelTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CancelTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CancelTransaction");
  return CancelTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CancelTransactionOutcomeCallable LakeFormationClient::CancelTransactionCallable(const CancelTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CancelTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CancelTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::CancelTransactionAsync(const CancelTransactionRequest& request, const CancelTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CancelTransaction(request), context);
    } );
}

CommitTransactionOutcome LakeFormationClient::CommitTransaction(const CommitTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CommitTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CommitTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CommitTransaction");
  return CommitTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CommitTransactionOutcomeCallable LakeFormationClient::CommitTransactionCallable(const CommitTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CommitTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CommitTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::CommitTransactionAsync(const CommitTransactionRequest& request, const CommitTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CommitTransaction(request), context);
    } );
}

CreateDataCellsFilterOutcome LakeFormationClient::CreateDataCellsFilter(const CreateDataCellsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateDataCellsFilter");
  return CreateDataCellsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDataCellsFilterOutcomeCallable LakeFormationClient::CreateDataCellsFilterCallable(const CreateDataCellsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDataCellsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDataCellsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::CreateDataCellsFilterAsync(const CreateDataCellsFilterRequest& request, const CreateDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDataCellsFilter(request), context);
    } );
}

CreateLFTagOutcome LakeFormationClient::CreateLFTag(const CreateLFTagRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLFTag");
  return CreateLFTagOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLFTagOutcomeCallable LakeFormationClient::CreateLFTagCallable(const CreateLFTagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLFTagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLFTag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::CreateLFTagAsync(const CreateLFTagRequest& request, const CreateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateLFTag(request), context);
    } );
}

DeleteDataCellsFilterOutcome LakeFormationClient::DeleteDataCellsFilter(const DeleteDataCellsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteDataCellsFilter");
  return DeleteDataCellsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDataCellsFilterOutcomeCallable LakeFormationClient::DeleteDataCellsFilterCallable(const DeleteDataCellsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDataCellsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDataCellsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DeleteDataCellsFilterAsync(const DeleteDataCellsFilterRequest& request, const DeleteDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDataCellsFilter(request), context);
    } );
}

DeleteLFTagOutcome LakeFormationClient::DeleteLFTag(const DeleteLFTagRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLFTag");
  return DeleteLFTagOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteLFTagOutcomeCallable LakeFormationClient::DeleteLFTagCallable(const DeleteLFTagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLFTagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLFTag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DeleteLFTagAsync(const DeleteLFTagRequest& request, const DeleteLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLFTag(request), context);
    } );
}

DeleteObjectsOnCancelOutcome LakeFormationClient::DeleteObjectsOnCancel(const DeleteObjectsOnCancelRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteObjectsOnCancel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteObjectsOnCancel, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteObjectsOnCancel");
  return DeleteObjectsOnCancelOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteObjectsOnCancelOutcomeCallable LakeFormationClient::DeleteObjectsOnCancelCallable(const DeleteObjectsOnCancelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteObjectsOnCancelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteObjectsOnCancel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DeleteObjectsOnCancelAsync(const DeleteObjectsOnCancelRequest& request, const DeleteObjectsOnCancelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteObjectsOnCancel(request), context);
    } );
}

DeregisterResourceOutcome LakeFormationClient::DeregisterResource(const DeregisterResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeregisterResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeregisterResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DeregisterResource");
  return DeregisterResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeregisterResourceOutcomeCallable LakeFormationClient::DeregisterResourceCallable(const DeregisterResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeregisterResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeregisterResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DeregisterResourceAsync(const DeregisterResourceRequest& request, const DeregisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeregisterResource(request), context);
    } );
}

DescribeResourceOutcome LakeFormationClient::DescribeResource(const DescribeResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeResource");
  return DescribeResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourceOutcomeCallable LakeFormationClient::DescribeResourceCallable(const DescribeResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DescribeResourceAsync(const DescribeResourceRequest& request, const DescribeResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeResource(request), context);
    } );
}

DescribeTransactionOutcome LakeFormationClient::DescribeTransaction(const DescribeTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeTransaction");
  return DescribeTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTransactionOutcomeCallable LakeFormationClient::DescribeTransactionCallable(const DescribeTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::DescribeTransactionAsync(const DescribeTransactionRequest& request, const DescribeTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTransaction(request), context);
    } );
}

ExtendTransactionOutcome LakeFormationClient::ExtendTransaction(const ExtendTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ExtendTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ExtendTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ExtendTransaction");
  return ExtendTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ExtendTransactionOutcomeCallable LakeFormationClient::ExtendTransactionCallable(const ExtendTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ExtendTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ExtendTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ExtendTransactionAsync(const ExtendTransactionRequest& request, const ExtendTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ExtendTransaction(request), context);
    } );
}

GetDataLakeSettingsOutcome LakeFormationClient::GetDataLakeSettings(const GetDataLakeSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetDataLakeSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetDataLakeSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetDataLakeSettings");
  return GetDataLakeSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetDataLakeSettingsOutcomeCallable LakeFormationClient::GetDataLakeSettingsCallable(const GetDataLakeSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDataLakeSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDataLakeSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetDataLakeSettingsAsync(const GetDataLakeSettingsRequest& request, const GetDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetDataLakeSettings(request), context);
    } );
}

GetEffectivePermissionsForPathOutcome LakeFormationClient::GetEffectivePermissionsForPath(const GetEffectivePermissionsForPathRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetEffectivePermissionsForPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetEffectivePermissionsForPath, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetEffectivePermissionsForPath");
  return GetEffectivePermissionsForPathOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetEffectivePermissionsForPathOutcomeCallable LakeFormationClient::GetEffectivePermissionsForPathCallable(const GetEffectivePermissionsForPathRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetEffectivePermissionsForPathOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetEffectivePermissionsForPath(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetEffectivePermissionsForPathAsync(const GetEffectivePermissionsForPathRequest& request, const GetEffectivePermissionsForPathResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetEffectivePermissionsForPath(request), context);
    } );
}

GetLFTagOutcome LakeFormationClient::GetLFTag(const GetLFTagRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetLFTag");
  return GetLFTagOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetLFTagOutcomeCallable LakeFormationClient::GetLFTagCallable(const GetLFTagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLFTagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLFTag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetLFTagAsync(const GetLFTagRequest& request, const GetLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLFTag(request), context);
    } );
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

GetQueryStateOutcomeCallable LakeFormationClient::GetQueryStateCallable(const GetQueryStateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryStateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryState(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetQueryStateAsync(const GetQueryStateRequest& request, const GetQueryStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetQueryState(request), context);
    } );
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

GetQueryStatisticsOutcomeCallable LakeFormationClient::GetQueryStatisticsCallable(const GetQueryStatisticsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetQueryStatisticsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetQueryStatistics(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetQueryStatisticsAsync(const GetQueryStatisticsRequest& request, const GetQueryStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetQueryStatistics(request), context);
    } );
}

GetResourceLFTagsOutcome LakeFormationClient::GetResourceLFTags(const GetResourceLFTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetResourceLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetResourceLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetResourceLFTags");
  return GetResourceLFTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetResourceLFTagsOutcomeCallable LakeFormationClient::GetResourceLFTagsCallable(const GetResourceLFTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetResourceLFTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetResourceLFTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetResourceLFTagsAsync(const GetResourceLFTagsRequest& request, const GetResourceLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetResourceLFTags(request), context);
    } );
}

GetTableObjectsOutcome LakeFormationClient::GetTableObjects(const GetTableObjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTableObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTableObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetTableObjects");
  return GetTableObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTableObjectsOutcomeCallable LakeFormationClient::GetTableObjectsCallable(const GetTableObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTableObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTableObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetTableObjectsAsync(const GetTableObjectsRequest& request, const GetTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTableObjects(request), context);
    } );
}

GetTemporaryGluePartitionCredentialsOutcome LakeFormationClient::GetTemporaryGluePartitionCredentials(const GetTemporaryGluePartitionCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemporaryGluePartitionCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemporaryGluePartitionCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetTemporaryGluePartitionCredentials");
  return GetTemporaryGluePartitionCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTemporaryGluePartitionCredentialsOutcomeCallable LakeFormationClient::GetTemporaryGluePartitionCredentialsCallable(const GetTemporaryGluePartitionCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemporaryGluePartitionCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemporaryGluePartitionCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetTemporaryGluePartitionCredentialsAsync(const GetTemporaryGluePartitionCredentialsRequest& request, const GetTemporaryGluePartitionCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTemporaryGluePartitionCredentials(request), context);
    } );
}

GetTemporaryGlueTableCredentialsOutcome LakeFormationClient::GetTemporaryGlueTableCredentials(const GetTemporaryGlueTableCredentialsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTemporaryGlueTableCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTemporaryGlueTableCredentials, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GetTemporaryGlueTableCredentials");
  return GetTemporaryGlueTableCredentialsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTemporaryGlueTableCredentialsOutcomeCallable LakeFormationClient::GetTemporaryGlueTableCredentialsCallable(const GetTemporaryGlueTableCredentialsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTemporaryGlueTableCredentialsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTemporaryGlueTableCredentials(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetTemporaryGlueTableCredentialsAsync(const GetTemporaryGlueTableCredentialsRequest& request, const GetTemporaryGlueTableCredentialsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTemporaryGlueTableCredentials(request), context);
    } );
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

GetWorkUnitResultsOutcomeCallable LakeFormationClient::GetWorkUnitResultsCallable(const GetWorkUnitResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkUnitResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkUnitResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetWorkUnitResultsAsync(const GetWorkUnitResultsRequest& request, const GetWorkUnitResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWorkUnitResults(request), context);
    } );
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

GetWorkUnitsOutcomeCallable LakeFormationClient::GetWorkUnitsCallable(const GetWorkUnitsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetWorkUnitsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetWorkUnits(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GetWorkUnitsAsync(const GetWorkUnitsRequest& request, const GetWorkUnitsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetWorkUnits(request), context);
    } );
}

GrantPermissionsOutcome LakeFormationClient::GrantPermissions(const GrantPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GrantPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GrantPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/GrantPermissions");
  return GrantPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GrantPermissionsOutcomeCallable LakeFormationClient::GrantPermissionsCallable(const GrantPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GrantPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GrantPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::GrantPermissionsAsync(const GrantPermissionsRequest& request, const GrantPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GrantPermissions(request), context);
    } );
}

ListDataCellsFilterOutcome LakeFormationClient::ListDataCellsFilter(const ListDataCellsFilterRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListDataCellsFilter, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListDataCellsFilter");
  return ListDataCellsFilterOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDataCellsFilterOutcomeCallable LakeFormationClient::ListDataCellsFilterCallable(const ListDataCellsFilterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDataCellsFilterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDataCellsFilter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListDataCellsFilterAsync(const ListDataCellsFilterRequest& request, const ListDataCellsFilterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDataCellsFilter(request), context);
    } );
}

ListLFTagsOutcome LakeFormationClient::ListLFTags(const ListLFTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListLFTags");
  return ListLFTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLFTagsOutcomeCallable LakeFormationClient::ListLFTagsCallable(const ListLFTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLFTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLFTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListLFTagsAsync(const ListLFTagsRequest& request, const ListLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLFTags(request), context);
    } );
}

ListPermissionsOutcome LakeFormationClient::ListPermissions(const ListPermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListPermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListPermissions");
  return ListPermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPermissionsOutcomeCallable LakeFormationClient::ListPermissionsCallable(const ListPermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListPermissionsAsync(const ListPermissionsRequest& request, const ListPermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPermissions(request), context);
    } );
}

ListResourcesOutcome LakeFormationClient::ListResources(const ListResourcesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListResources, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListResources");
  return ListResourcesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListResourcesOutcomeCallable LakeFormationClient::ListResourcesCallable(const ListResourcesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListResourcesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListResources(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListResourcesAsync(const ListResourcesRequest& request, const ListResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListResources(request), context);
    } );
}

ListTableStorageOptimizersOutcome LakeFormationClient::ListTableStorageOptimizers(const ListTableStorageOptimizersRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTableStorageOptimizers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTableStorageOptimizers, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListTableStorageOptimizers");
  return ListTableStorageOptimizersOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTableStorageOptimizersOutcomeCallable LakeFormationClient::ListTableStorageOptimizersCallable(const ListTableStorageOptimizersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTableStorageOptimizersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTableStorageOptimizers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListTableStorageOptimizersAsync(const ListTableStorageOptimizersRequest& request, const ListTableStorageOptimizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTableStorageOptimizers(request), context);
    } );
}

ListTransactionsOutcome LakeFormationClient::ListTransactions(const ListTransactionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTransactions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTransactions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/ListTransactions");
  return ListTransactionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTransactionsOutcomeCallable LakeFormationClient::ListTransactionsCallable(const ListTransactionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTransactionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTransactions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::ListTransactionsAsync(const ListTransactionsRequest& request, const ListTransactionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTransactions(request), context);
    } );
}

PutDataLakeSettingsOutcome LakeFormationClient::PutDataLakeSettings(const PutDataLakeSettingsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutDataLakeSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutDataLakeSettings, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/PutDataLakeSettings");
  return PutDataLakeSettingsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutDataLakeSettingsOutcomeCallable LakeFormationClient::PutDataLakeSettingsCallable(const PutDataLakeSettingsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutDataLakeSettingsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutDataLakeSettings(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::PutDataLakeSettingsAsync(const PutDataLakeSettingsRequest& request, const PutDataLakeSettingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutDataLakeSettings(request), context);
    } );
}

RegisterResourceOutcome LakeFormationClient::RegisterResource(const RegisterResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RegisterResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RegisterResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/RegisterResource");
  return RegisterResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RegisterResourceOutcomeCallable LakeFormationClient::RegisterResourceCallable(const RegisterResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RegisterResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RegisterResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::RegisterResourceAsync(const RegisterResourceRequest& request, const RegisterResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RegisterResource(request), context);
    } );
}

RemoveLFTagsFromResourceOutcome LakeFormationClient::RemoveLFTagsFromResource(const RemoveLFTagsFromResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RemoveLFTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RemoveLFTagsFromResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/RemoveLFTagsFromResource");
  return RemoveLFTagsFromResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RemoveLFTagsFromResourceOutcomeCallable LakeFormationClient::RemoveLFTagsFromResourceCallable(const RemoveLFTagsFromResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RemoveLFTagsFromResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RemoveLFTagsFromResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::RemoveLFTagsFromResourceAsync(const RemoveLFTagsFromResourceRequest& request, const RemoveLFTagsFromResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RemoveLFTagsFromResource(request), context);
    } );
}

RevokePermissionsOutcome LakeFormationClient::RevokePermissions(const RevokePermissionsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, RevokePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, RevokePermissions, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/RevokePermissions");
  return RevokePermissionsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

RevokePermissionsOutcomeCallable LakeFormationClient::RevokePermissionsCallable(const RevokePermissionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< RevokePermissionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->RevokePermissions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::RevokePermissionsAsync(const RevokePermissionsRequest& request, const RevokePermissionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, RevokePermissions(request), context);
    } );
}

SearchDatabasesByLFTagsOutcome LakeFormationClient::SearchDatabasesByLFTags(const SearchDatabasesByLFTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchDatabasesByLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchDatabasesByLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/SearchDatabasesByLFTags");
  return SearchDatabasesByLFTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchDatabasesByLFTagsOutcomeCallable LakeFormationClient::SearchDatabasesByLFTagsCallable(const SearchDatabasesByLFTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchDatabasesByLFTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchDatabasesByLFTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::SearchDatabasesByLFTagsAsync(const SearchDatabasesByLFTagsRequest& request, const SearchDatabasesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchDatabasesByLFTags(request), context);
    } );
}

SearchTablesByLFTagsOutcome LakeFormationClient::SearchTablesByLFTags(const SearchTablesByLFTagsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SearchTablesByLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SearchTablesByLFTags, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/SearchTablesByLFTags");
  return SearchTablesByLFTagsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

SearchTablesByLFTagsOutcomeCallable LakeFormationClient::SearchTablesByLFTagsCallable(const SearchTablesByLFTagsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchTablesByLFTagsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SearchTablesByLFTags(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::SearchTablesByLFTagsAsync(const SearchTablesByLFTagsRequest& request, const SearchTablesByLFTagsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SearchTablesByLFTags(request), context);
    } );
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

StartQueryPlanningOutcomeCallable LakeFormationClient::StartQueryPlanningCallable(const StartQueryPlanningRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartQueryPlanningOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartQueryPlanning(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::StartQueryPlanningAsync(const StartQueryPlanningRequest& request, const StartQueryPlanningResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartQueryPlanning(request), context);
    } );
}

StartTransactionOutcome LakeFormationClient::StartTransaction(const StartTransactionRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTransaction, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/StartTransaction");
  return StartTransactionOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTransactionOutcomeCallable LakeFormationClient::StartTransactionCallable(const StartTransactionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTransactionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTransaction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::StartTransactionAsync(const StartTransactionRequest& request, const StartTransactionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartTransaction(request), context);
    } );
}

UpdateLFTagOutcome LakeFormationClient::UpdateLFTag(const UpdateLFTagRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLFTag, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLFTag");
  return UpdateLFTagOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateLFTagOutcomeCallable LakeFormationClient::UpdateLFTagCallable(const UpdateLFTagRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLFTagOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLFTag(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::UpdateLFTagAsync(const UpdateLFTagRequest& request, const UpdateLFTagResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateLFTag(request), context);
    } );
}

UpdateResourceOutcome LakeFormationClient::UpdateResource(const UpdateResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateResource");
  return UpdateResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateResourceOutcomeCallable LakeFormationClient::UpdateResourceCallable(const UpdateResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::UpdateResourceAsync(const UpdateResourceRequest& request, const UpdateResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateResource(request), context);
    } );
}

UpdateTableObjectsOutcome LakeFormationClient::UpdateTableObjects(const UpdateTableObjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTableObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTableObjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTableObjects");
  return UpdateTableObjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableObjectsOutcomeCallable LakeFormationClient::UpdateTableObjectsCallable(const UpdateTableObjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTableObjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTableObjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::UpdateTableObjectsAsync(const UpdateTableObjectsRequest& request, const UpdateTableObjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTableObjects(request), context);
    } );
}

UpdateTableStorageOptimizerOutcome LakeFormationClient::UpdateTableStorageOptimizer(const UpdateTableStorageOptimizerRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateTableStorageOptimizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateTableStorageOptimizer, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTableStorageOptimizer");
  return UpdateTableStorageOptimizerOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateTableStorageOptimizerOutcomeCallable LakeFormationClient::UpdateTableStorageOptimizerCallable(const UpdateTableStorageOptimizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateTableStorageOptimizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateTableStorageOptimizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void LakeFormationClient::UpdateTableStorageOptimizerAsync(const UpdateTableStorageOptimizerRequest& request, const UpdateTableStorageOptimizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateTableStorageOptimizer(request), context);
    } );
}

