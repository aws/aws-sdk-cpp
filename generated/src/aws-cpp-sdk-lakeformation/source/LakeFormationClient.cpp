/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/lakeformation/LakeFormationClient.h>
#include <aws/lakeformation/LakeFormationEndpointProvider.h>
#include <aws/lakeformation/LakeFormationErrorMarshaller.h>
#include <aws/lakeformation/model/AddLFTagsToResourceRequest.h>
#include <aws/lakeformation/model/AssumeDecoratedRoleWithSAMLRequest.h>
#include <aws/lakeformation/model/BatchGrantPermissionsRequest.h>
#include <aws/lakeformation/model/BatchRevokePermissionsRequest.h>
#include <aws/lakeformation/model/CancelTransactionRequest.h>
#include <aws/lakeformation/model/CommitTransactionRequest.h>
#include <aws/lakeformation/model/CreateDataCellsFilterRequest.h>
#include <aws/lakeformation/model/CreateLFTagExpressionRequest.h>
#include <aws/lakeformation/model/CreateLFTagRequest.h>
#include <aws/lakeformation/model/CreateLakeFormationIdentityCenterConfigurationRequest.h>
#include <aws/lakeformation/model/CreateLakeFormationOptInRequest.h>
#include <aws/lakeformation/model/DeleteDataCellsFilterRequest.h>
#include <aws/lakeformation/model/DeleteLFTagExpressionRequest.h>
#include <aws/lakeformation/model/DeleteLFTagRequest.h>
#include <aws/lakeformation/model/DeleteLakeFormationIdentityCenterConfigurationRequest.h>
#include <aws/lakeformation/model/DeleteLakeFormationOptInRequest.h>
#include <aws/lakeformation/model/DeleteObjectsOnCancelRequest.h>
#include <aws/lakeformation/model/DeregisterResourceRequest.h>
#include <aws/lakeformation/model/DescribeLakeFormationIdentityCenterConfigurationRequest.h>
#include <aws/lakeformation/model/DescribeResourceRequest.h>
#include <aws/lakeformation/model/DescribeTransactionRequest.h>
#include <aws/lakeformation/model/ExtendTransactionRequest.h>
#include <aws/lakeformation/model/GetDataCellsFilterRequest.h>
#include <aws/lakeformation/model/GetDataLakePrincipalRequest.h>
#include <aws/lakeformation/model/GetDataLakeSettingsRequest.h>
#include <aws/lakeformation/model/GetEffectivePermissionsForPathRequest.h>
#include <aws/lakeformation/model/GetLFTagExpressionRequest.h>
#include <aws/lakeformation/model/GetLFTagRequest.h>
#include <aws/lakeformation/model/GetQueryStateRequest.h>
#include <aws/lakeformation/model/GetQueryStatisticsRequest.h>
#include <aws/lakeformation/model/GetResourceLFTagsRequest.h>
#include <aws/lakeformation/model/GetTableObjectsRequest.h>
#include <aws/lakeformation/model/GetTemporaryDataLocationCredentialsRequest.h>
#include <aws/lakeformation/model/GetTemporaryGluePartitionCredentialsRequest.h>
#include <aws/lakeformation/model/GetTemporaryGlueTableCredentialsRequest.h>
#include <aws/lakeformation/model/GetWorkUnitResultsRequest.h>
#include <aws/lakeformation/model/GetWorkUnitsRequest.h>
#include <aws/lakeformation/model/GrantPermissionsRequest.h>
#include <aws/lakeformation/model/ListDataCellsFilterRequest.h>
#include <aws/lakeformation/model/ListLFTagExpressionsRequest.h>
#include <aws/lakeformation/model/ListLFTagsRequest.h>
#include <aws/lakeformation/model/ListLakeFormationOptInsRequest.h>
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
#include <aws/lakeformation/model/UpdateLFTagExpressionRequest.h>
#include <aws/lakeformation/model/UpdateLFTagRequest.h>
#include <aws/lakeformation/model/UpdateLakeFormationIdentityCenterConfigurationRequest.h>
#include <aws/lakeformation/model/UpdateResourceRequest.h>
#include <aws/lakeformation/model/UpdateTableObjectsRequest.h>
#include <aws/lakeformation/model/UpdateTableStorageOptimizerRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::LakeFormation;
using namespace Aws::LakeFormation::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace LakeFormation {
const char SERVICE_NAME[] = "lakeformation";
const char ALLOCATION_TAG[] = "LakeFormationClient";
}  // namespace LakeFormation
}  // namespace Aws
const char* LakeFormationClient::GetServiceName() { return SERVICE_NAME; }
const char* LakeFormationClient::GetAllocationTag() { return ALLOCATION_TAG; }

LakeFormationClient::LakeFormationClient(const LakeFormation::LakeFormationClientConfiguration& clientConfiguration,
                                         std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const AWSCredentials& credentials,
                                         std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider,
                                         const LakeFormation::LakeFormationClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         std::shared_ptr<LakeFormationEndpointProviderBase> endpointProvider,
                                         const LakeFormation::LakeFormationClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
LakeFormationClient::LakeFormationClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

LakeFormationClient::LakeFormationClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                         const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<LakeFormationErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<LakeFormationEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
LakeFormationClient::~LakeFormationClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<LakeFormationEndpointProviderBase>& LakeFormationClient::accessEndpointProvider() { return m_endpointProvider; }

void LakeFormationClient::init(const LakeFormation::LakeFormationClientConfiguration& config) {
  AWSClient::SetServiceClientName("LakeFormation");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "lakeformation");
}

void LakeFormationClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
LakeFormationClient::InvokeOperationOutcome LakeFormationClient::InvokeServiceOperation(
    const AmazonWebServiceRequest& request, const std::function<void(Aws::Endpoint::ResolveEndpointOutcome&)>& resolveUri,
    Aws::Http::HttpMethod httpMethod) const {
  auto operationName = request.GetServiceRequestName();
  auto serviceName = GetServiceClientName();

  AWS_OPERATION_GUARD_DYNAMIC(operationName);

  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_endpointProvider, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR_DYNAMIC(m_telemetryProvider, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto tracer = m_telemetryProvider->getTracer(serviceName, {});
  auto meter = m_telemetryProvider->getMeter(serviceName, {});
  AWS_OPERATION_CHECK_PTR_DYNAMIC(meter, operationName, CoreErrors, CoreErrors::NOT_INITIALIZED);

  auto span = tracer->CreateSpan(Aws::String(serviceName) + "." + operationName,
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);

  return TracingUtils::MakeCallWithTiming<InvokeOperationOutcome>(
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        resolveUri(endpointResolutionOutcome);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AddLFTagsToResourceOutcome LakeFormationClient::AddLFTagsToResource(const AddLFTagsToResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AddLFTagsToResource");
  };

  return AddLFTagsToResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssumeDecoratedRoleWithSAMLOutcome LakeFormationClient::AssumeDecoratedRoleWithSAML(
    const AssumeDecoratedRoleWithSAMLRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/AssumeDecoratedRoleWithSAML");
  };

  return AssumeDecoratedRoleWithSAMLOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGrantPermissionsOutcome LakeFormationClient::BatchGrantPermissions(const BatchGrantPermissionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchGrantPermissions");
  };

  return BatchGrantPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchRevokePermissionsOutcome LakeFormationClient::BatchRevokePermissions(const BatchRevokePermissionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/BatchRevokePermissions");
  };

  return BatchRevokePermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CancelTransactionOutcome LakeFormationClient::CancelTransaction(const CancelTransactionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CancelTransaction");
  };

  return CancelTransactionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CommitTransactionOutcome LakeFormationClient::CommitTransaction(const CommitTransactionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CommitTransaction");
  };

  return CommitTransactionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataCellsFilterOutcome LakeFormationClient::CreateDataCellsFilter(const CreateDataCellsFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateDataCellsFilter");
  };

  return CreateDataCellsFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLFTagOutcome LakeFormationClient::CreateLFTag(const CreateLFTagRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLFTag");
  };

  return CreateLFTagOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLFTagExpressionOutcome LakeFormationClient::CreateLFTagExpression(const CreateLFTagExpressionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLFTagExpression");
  };

  return CreateLFTagExpressionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLakeFormationIdentityCenterConfigurationOutcome LakeFormationClient::CreateLakeFormationIdentityCenterConfiguration(
    const CreateLakeFormationIdentityCenterConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLakeFormationIdentityCenterConfiguration");
  };

  return CreateLakeFormationIdentityCenterConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateLakeFormationOptInOutcome LakeFormationClient::CreateLakeFormationOptIn(const CreateLakeFormationOptInRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/CreateLakeFormationOptIn");
  };

  return CreateLakeFormationOptInOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDataCellsFilterOutcome LakeFormationClient::DeleteDataCellsFilter(const DeleteDataCellsFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteDataCellsFilter");
  };

  return DeleteDataCellsFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLFTagOutcome LakeFormationClient::DeleteLFTag(const DeleteLFTagRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLFTag");
  };

  return DeleteLFTagOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLFTagExpressionOutcome LakeFormationClient::DeleteLFTagExpression(const DeleteLFTagExpressionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLFTagExpression");
  };

  return DeleteLFTagExpressionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLakeFormationIdentityCenterConfigurationOutcome LakeFormationClient::DeleteLakeFormationIdentityCenterConfiguration(
    const DeleteLakeFormationIdentityCenterConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLakeFormationIdentityCenterConfiguration");
  };

  return DeleteLakeFormationIdentityCenterConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteLakeFormationOptInOutcome LakeFormationClient::DeleteLakeFormationOptIn(const DeleteLakeFormationOptInRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteLakeFormationOptIn");
  };

  return DeleteLakeFormationOptInOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteObjectsOnCancelOutcome LakeFormationClient::DeleteObjectsOnCancel(const DeleteObjectsOnCancelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeleteObjectsOnCancel");
  };

  return DeleteObjectsOnCancelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeregisterResourceOutcome LakeFormationClient::DeregisterResource(const DeregisterResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DeregisterResource");
  };

  return DeregisterResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeLakeFormationIdentityCenterConfigurationOutcome LakeFormationClient::DescribeLakeFormationIdentityCenterConfiguration(
    const DescribeLakeFormationIdentityCenterConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeLakeFormationIdentityCenterConfiguration");
  };

  return DescribeLakeFormationIdentityCenterConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeResourceOutcome LakeFormationClient::DescribeResource(const DescribeResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeResource");
  };

  return DescribeResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeTransactionOutcome LakeFormationClient::DescribeTransaction(const DescribeTransactionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/DescribeTransaction");
  };

  return DescribeTransactionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ExtendTransactionOutcome LakeFormationClient::ExtendTransaction(const ExtendTransactionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ExtendTransaction");
  };

  return ExtendTransactionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataCellsFilterOutcome LakeFormationClient::GetDataCellsFilter(const GetDataCellsFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetDataCellsFilter");
  };

  return GetDataCellsFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataLakePrincipalOutcome LakeFormationClient::GetDataLakePrincipal(const GetDataLakePrincipalRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetDataLakePrincipal");
  };

  return GetDataLakePrincipalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetDataLakeSettingsOutcome LakeFormationClient::GetDataLakeSettings(const GetDataLakeSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetDataLakeSettings");
  };

  return GetDataLakeSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetEffectivePermissionsForPathOutcome LakeFormationClient::GetEffectivePermissionsForPath(
    const GetEffectivePermissionsForPathRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetEffectivePermissionsForPath");
  };

  return GetEffectivePermissionsForPathOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLFTagOutcome LakeFormationClient::GetLFTag(const GetLFTagRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetLFTag");
  };

  return GetLFTagOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetLFTagExpressionOutcome LakeFormationClient::GetLFTagExpression(const GetLFTagExpressionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetLFTagExpression");
  };

  return GetLFTagExpressionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQueryStateOutcome LakeFormationClient::GetQueryState(const GetQueryStateRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetQueryState");
  };

  return GetQueryStateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetQueryStatisticsOutcome LakeFormationClient::GetQueryStatistics(const GetQueryStatisticsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetQueryStatistics");
  };

  return GetQueryStatisticsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetResourceLFTagsOutcome LakeFormationClient::GetResourceLFTags(const GetResourceLFTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetResourceLFTags");
  };

  return GetResourceLFTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTableObjectsOutcome LakeFormationClient::GetTableObjects(const GetTableObjectsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTableObjects");
  };

  return GetTableObjectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTemporaryDataLocationCredentialsOutcome LakeFormationClient::GetTemporaryDataLocationCredentials(
    const GetTemporaryDataLocationCredentialsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTemporaryDataLocationCredentials");
  };

  return GetTemporaryDataLocationCredentialsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTemporaryGluePartitionCredentialsOutcome LakeFormationClient::GetTemporaryGluePartitionCredentials(
    const GetTemporaryGluePartitionCredentialsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTemporaryGluePartitionCredentials");
  };

  return GetTemporaryGluePartitionCredentialsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetTemporaryGlueTableCredentialsOutcome LakeFormationClient::GetTemporaryGlueTableCredentials(
    const GetTemporaryGlueTableCredentialsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetTemporaryGlueTableCredentials");
  };

  return GetTemporaryGlueTableCredentialsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetWorkUnitResultsOutcome LakeFormationClient::GetWorkUnitResults(const GetWorkUnitResultsRequest& request) const {
  AWS_OPERATION_GUARD(GetWorkUnitResults);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetWorkUnitResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, GetWorkUnitResults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, GetWorkUnitResults, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".GetWorkUnitResults",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<GetWorkUnitResultsOutcome>(
      [&]() -> GetWorkUnitResultsOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetWorkUnitResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("data-");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), GetWorkUnitResultsOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/GetWorkUnitResults");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? GetWorkUnitResultsOutcome(GetWorkUnitResultsResult(result.GetResultWithOwnership()))
                                  : GetWorkUnitResultsOutcome(result.GetError());
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

GetWorkUnitsOutcome LakeFormationClient::GetWorkUnits(const GetWorkUnitsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GetWorkUnits");
  };

  return GetWorkUnitsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GrantPermissionsOutcome LakeFormationClient::GrantPermissions(const GrantPermissionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/GrantPermissions");
  };

  return GrantPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDataCellsFilterOutcome LakeFormationClient::ListDataCellsFilter(const ListDataCellsFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListDataCellsFilter");
  };

  return ListDataCellsFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLFTagExpressionsOutcome LakeFormationClient::ListLFTagExpressions(const ListLFTagExpressionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListLFTagExpressions");
  };

  return ListLFTagExpressionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLFTagsOutcome LakeFormationClient::ListLFTags(const ListLFTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListLFTags");
  };

  return ListLFTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListLakeFormationOptInsOutcome LakeFormationClient::ListLakeFormationOptIns(const ListLakeFormationOptInsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListLakeFormationOptIns");
  };

  return ListLakeFormationOptInsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListPermissionsOutcome LakeFormationClient::ListPermissions(const ListPermissionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListPermissions");
  };

  return ListPermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListResourcesOutcome LakeFormationClient::ListResources(const ListResourcesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListResources");
  };

  return ListResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTableStorageOptimizersOutcome LakeFormationClient::ListTableStorageOptimizers(const ListTableStorageOptimizersRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTableStorageOptimizers");
  };

  return ListTableStorageOptimizersOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListTransactionsOutcome LakeFormationClient::ListTransactions(const ListTransactionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/ListTransactions");
  };

  return ListTransactionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutDataLakeSettingsOutcome LakeFormationClient::PutDataLakeSettings(const PutDataLakeSettingsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/PutDataLakeSettings");
  };

  return PutDataLakeSettingsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RegisterResourceOutcome LakeFormationClient::RegisterResource(const RegisterResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RegisterResource");
  };

  return RegisterResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RemoveLFTagsFromResourceOutcome LakeFormationClient::RemoveLFTagsFromResource(const RemoveLFTagsFromResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RemoveLFTagsFromResource");
  };

  return RemoveLFTagsFromResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

RevokePermissionsOutcome LakeFormationClient::RevokePermissions(const RevokePermissionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/RevokePermissions");
  };

  return RevokePermissionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchDatabasesByLFTagsOutcome LakeFormationClient::SearchDatabasesByLFTags(const SearchDatabasesByLFTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/SearchDatabasesByLFTags");
  };

  return SearchDatabasesByLFTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SearchTablesByLFTagsOutcome LakeFormationClient::SearchTablesByLFTags(const SearchTablesByLFTagsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/SearchTablesByLFTags");
  };

  return SearchTablesByLFTagsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartQueryPlanningOutcome LakeFormationClient::StartQueryPlanning(const StartQueryPlanningRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartQueryPlanning");
  };

  return StartQueryPlanningOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartTransactionOutcome LakeFormationClient::StartTransaction(const StartTransactionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/StartTransaction");
  };

  return StartTransactionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDataCellsFilterOutcome LakeFormationClient::UpdateDataCellsFilter(const UpdateDataCellsFilterRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateDataCellsFilter");
  };

  return UpdateDataCellsFilterOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLFTagOutcome LakeFormationClient::UpdateLFTag(const UpdateLFTagRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLFTag");
  };

  return UpdateLFTagOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLFTagExpressionOutcome LakeFormationClient::UpdateLFTagExpression(const UpdateLFTagExpressionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLFTagExpression");
  };

  return UpdateLFTagExpressionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateLakeFormationIdentityCenterConfigurationOutcome LakeFormationClient::UpdateLakeFormationIdentityCenterConfiguration(
    const UpdateLakeFormationIdentityCenterConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateLakeFormationIdentityCenterConfiguration");
  };

  return UpdateLakeFormationIdentityCenterConfigurationOutcome{
      InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateResourceOutcome LakeFormationClient::UpdateResource(const UpdateResourceRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateResource");
  };

  return UpdateResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTableObjectsOutcome LakeFormationClient::UpdateTableObjects(const UpdateTableObjectsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTableObjects");
  };

  return UpdateTableObjectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateTableStorageOptimizerOutcome LakeFormationClient::UpdateTableStorageOptimizer(
    const UpdateTableStorageOptimizerRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/UpdateTableStorageOptimizer");
  };

  return UpdateTableStorageOptimizerOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
