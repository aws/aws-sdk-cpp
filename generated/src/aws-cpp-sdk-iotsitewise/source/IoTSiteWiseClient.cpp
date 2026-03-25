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
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/logging/ErrorMacros.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/iotsitewise/IoTSiteWiseClient.h>
#include <aws/iotsitewise/IoTSiteWiseEndpointProvider.h>
#include <aws/iotsitewise/IoTSiteWiseErrorMarshaller.h>
#include <aws/iotsitewise/model/AssociateAssetsRequest.h>
#include <aws/iotsitewise/model/AssociateTimeSeriesToAssetPropertyRequest.h>
#include <aws/iotsitewise/model/BatchAssociateProjectAssetsRequest.h>
#include <aws/iotsitewise/model/BatchDisassociateProjectAssetsRequest.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyAggregatesRequest.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueHistoryRequest.h>
#include <aws/iotsitewise/model/BatchGetAssetPropertyValueRequest.h>
#include <aws/iotsitewise/model/BatchPutAssetPropertyValueRequest.h>
#include <aws/iotsitewise/model/CreateAccessPolicyRequest.h>
#include <aws/iotsitewise/model/CreateAssetModelCompositeModelRequest.h>
#include <aws/iotsitewise/model/CreateAssetModelRequest.h>
#include <aws/iotsitewise/model/CreateAssetRequest.h>
#include <aws/iotsitewise/model/CreateBulkImportJobRequest.h>
#include <aws/iotsitewise/model/CreateComputationModelRequest.h>
#include <aws/iotsitewise/model/CreateDashboardRequest.h>
#include <aws/iotsitewise/model/CreateDatasetRequest.h>
#include <aws/iotsitewise/model/CreateGatewayRequest.h>
#include <aws/iotsitewise/model/CreatePortalRequest.h>
#include <aws/iotsitewise/model/CreateProjectRequest.h>
#include <aws/iotsitewise/model/DeleteAccessPolicyRequest.h>
#include <aws/iotsitewise/model/DeleteAssetModelCompositeModelRequest.h>
#include <aws/iotsitewise/model/DeleteAssetModelInterfaceRelationshipRequest.h>
#include <aws/iotsitewise/model/DeleteAssetModelRequest.h>
#include <aws/iotsitewise/model/DeleteAssetRequest.h>
#include <aws/iotsitewise/model/DeleteComputationModelRequest.h>
#include <aws/iotsitewise/model/DeleteDashboardRequest.h>
#include <aws/iotsitewise/model/DeleteDatasetRequest.h>
#include <aws/iotsitewise/model/DeleteGatewayRequest.h>
#include <aws/iotsitewise/model/DeletePortalRequest.h>
#include <aws/iotsitewise/model/DeleteProjectRequest.h>
#include <aws/iotsitewise/model/DeleteTimeSeriesRequest.h>
#include <aws/iotsitewise/model/DescribeAccessPolicyRequest.h>
#include <aws/iotsitewise/model/DescribeActionRequest.h>
#include <aws/iotsitewise/model/DescribeAssetCompositeModelRequest.h>
#include <aws/iotsitewise/model/DescribeAssetModelCompositeModelRequest.h>
#include <aws/iotsitewise/model/DescribeAssetModelInterfaceRelationshipRequest.h>
#include <aws/iotsitewise/model/DescribeAssetModelRequest.h>
#include <aws/iotsitewise/model/DescribeAssetPropertyRequest.h>
#include <aws/iotsitewise/model/DescribeAssetRequest.h>
#include <aws/iotsitewise/model/DescribeBulkImportJobRequest.h>
#include <aws/iotsitewise/model/DescribeComputationModelExecutionSummaryRequest.h>
#include <aws/iotsitewise/model/DescribeComputationModelRequest.h>
#include <aws/iotsitewise/model/DescribeDashboardRequest.h>
#include <aws/iotsitewise/model/DescribeDatasetRequest.h>
#include <aws/iotsitewise/model/DescribeDefaultEncryptionConfigurationRequest.h>
#include <aws/iotsitewise/model/DescribeExecutionRequest.h>
#include <aws/iotsitewise/model/DescribeGatewayCapabilityConfigurationRequest.h>
#include <aws/iotsitewise/model/DescribeGatewayRequest.h>
#include <aws/iotsitewise/model/DescribeLoggingOptionsRequest.h>
#include <aws/iotsitewise/model/DescribePortalRequest.h>
#include <aws/iotsitewise/model/DescribeProjectRequest.h>
#include <aws/iotsitewise/model/DescribeStorageConfigurationRequest.h>
#include <aws/iotsitewise/model/DescribeTimeSeriesRequest.h>
#include <aws/iotsitewise/model/DisassociateAssetsRequest.h>
#include <aws/iotsitewise/model/DisassociateTimeSeriesFromAssetPropertyRequest.h>
#include <aws/iotsitewise/model/ExecuteActionRequest.h>
#include <aws/iotsitewise/model/ExecuteQueryRequest.h>
#include <aws/iotsitewise/model/GetAssetPropertyAggregatesRequest.h>
#include <aws/iotsitewise/model/GetAssetPropertyValueHistoryRequest.h>
#include <aws/iotsitewise/model/GetAssetPropertyValueRequest.h>
#include <aws/iotsitewise/model/GetInterpolatedAssetPropertyValuesRequest.h>
#include <aws/iotsitewise/model/InvokeAssistantRequest.h>
#include <aws/iotsitewise/model/ListAccessPoliciesRequest.h>
#include <aws/iotsitewise/model/ListActionsRequest.h>
#include <aws/iotsitewise/model/ListAssetModelCompositeModelsRequest.h>
#include <aws/iotsitewise/model/ListAssetModelPropertiesRequest.h>
#include <aws/iotsitewise/model/ListAssetModelsRequest.h>
#include <aws/iotsitewise/model/ListAssetPropertiesRequest.h>
#include <aws/iotsitewise/model/ListAssetRelationshipsRequest.h>
#include <aws/iotsitewise/model/ListAssetsRequest.h>
#include <aws/iotsitewise/model/ListAssociatedAssetsRequest.h>
#include <aws/iotsitewise/model/ListBulkImportJobsRequest.h>
#include <aws/iotsitewise/model/ListCompositionRelationshipsRequest.h>
#include <aws/iotsitewise/model/ListComputationModelDataBindingUsagesRequest.h>
#include <aws/iotsitewise/model/ListComputationModelResolveToResourcesRequest.h>
#include <aws/iotsitewise/model/ListComputationModelsRequest.h>
#include <aws/iotsitewise/model/ListDashboardsRequest.h>
#include <aws/iotsitewise/model/ListDatasetsRequest.h>
#include <aws/iotsitewise/model/ListExecutionsRequest.h>
#include <aws/iotsitewise/model/ListGatewaysRequest.h>
#include <aws/iotsitewise/model/ListInterfaceRelationshipsRequest.h>
#include <aws/iotsitewise/model/ListPortalsRequest.h>
#include <aws/iotsitewise/model/ListProjectAssetsRequest.h>
#include <aws/iotsitewise/model/ListProjectsRequest.h>
#include <aws/iotsitewise/model/ListTagsForResourceRequest.h>
#include <aws/iotsitewise/model/ListTimeSeriesRequest.h>
#include <aws/iotsitewise/model/PutAssetModelInterfaceRelationshipRequest.h>
#include <aws/iotsitewise/model/PutDefaultEncryptionConfigurationRequest.h>
#include <aws/iotsitewise/model/PutLoggingOptionsRequest.h>
#include <aws/iotsitewise/model/PutStorageConfigurationRequest.h>
#include <aws/iotsitewise/model/TagResourceRequest.h>
#include <aws/iotsitewise/model/UntagResourceRequest.h>
#include <aws/iotsitewise/model/UpdateAccessPolicyRequest.h>
#include <aws/iotsitewise/model/UpdateAssetModelCompositeModelRequest.h>
#include <aws/iotsitewise/model/UpdateAssetModelRequest.h>
#include <aws/iotsitewise/model/UpdateAssetPropertyRequest.h>
#include <aws/iotsitewise/model/UpdateAssetRequest.h>
#include <aws/iotsitewise/model/UpdateComputationModelRequest.h>
#include <aws/iotsitewise/model/UpdateDashboardRequest.h>
#include <aws/iotsitewise/model/UpdateDatasetRequest.h>
#include <aws/iotsitewise/model/UpdateGatewayCapabilityConfigurationRequest.h>
#include <aws/iotsitewise/model/UpdateGatewayRequest.h>
#include <aws/iotsitewise/model/UpdatePortalRequest.h>
#include <aws/iotsitewise/model/UpdateProjectRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::IoTSiteWise;
using namespace Aws::IoTSiteWise::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace IoTSiteWise {
const char SERVICE_NAME[] = "iotsitewise";
const char ALLOCATION_TAG[] = "IoTSiteWiseClient";
}  // namespace IoTSiteWise
}  // namespace Aws
const char* IoTSiteWiseClient::GetServiceName() { return SERVICE_NAME; }
const char* IoTSiteWiseClient::GetAllocationTag() { return ALLOCATION_TAG; }

IoTSiteWiseClient::IoTSiteWiseClient(const IoTSiteWise::IoTSiteWiseClientConfiguration& clientConfiguration,
                                     std::shared_ptr<IoTSiteWiseEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTSiteWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTSiteWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTSiteWiseClient::IoTSiteWiseClient(const AWSCredentials& credentials, std::shared_ptr<IoTSiteWiseEndpointProviderBase> endpointProvider,
                                     const IoTSiteWise::IoTSiteWiseClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTSiteWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTSiteWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTSiteWiseClient::IoTSiteWiseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<IoTSiteWiseEndpointProviderBase> endpointProvider,
                                     const IoTSiteWise::IoTSiteWiseClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTSiteWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<IoTSiteWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
IoTSiteWiseClient::IoTSiteWiseClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTSiteWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTSiteWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTSiteWiseClient::IoTSiteWiseClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTSiteWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTSiteWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

IoTSiteWiseClient::IoTSiteWiseClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<IoTSiteWiseErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<IoTSiteWiseEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
IoTSiteWiseClient::~IoTSiteWiseClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<IoTSiteWiseEndpointProviderBase>& IoTSiteWiseClient::accessEndpointProvider() { return m_endpointProvider; }

void IoTSiteWiseClient::init(const IoTSiteWise::IoTSiteWiseClientConfiguration& config) {
  AWSClient::SetServiceClientName("IoTSiteWise");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "iotsitewise");
}

void IoTSiteWiseClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
IoTSiteWiseClient::InvokeOperationOutcome IoTSiteWiseClient::InvokeServiceOperation(
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

AssociateAssetsOutcome IoTSiteWiseClient::AssociateAssets(const AssociateAssetsRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateAssets", "Required field: AssetId, is not set");
    return AssociateAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AssetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associate");
  };

  return AssociateAssetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

AssociateTimeSeriesToAssetPropertyOutcome IoTSiteWiseClient::AssociateTimeSeriesToAssetProperty(
    const AssociateTimeSeriesToAssetPropertyRequest& request) const {
  if (!request.AliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateTimeSeriesToAssetProperty", "Required field: Alias, is not set");
    return AssociateTimeSeriesToAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Alias]", false));
  }
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateTimeSeriesToAssetProperty", "Required field: AssetId, is not set");
    return AssociateTimeSeriesToAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.PropertyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AssociateTimeSeriesToAssetProperty", "Required field: PropertyId, is not set");
    return AssociateTimeSeriesToAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PropertyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeseries/associate/");
  };

  return AssociateTimeSeriesToAssetPropertyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchAssociateProjectAssetsOutcome IoTSiteWiseClient::BatchAssociateProjectAssets(const BatchAssociateProjectAssetsRequest& request) const {
  if (!request.ProjectIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchAssociateProjectAssets", "Required field: ProjectId, is not set");
    return BatchAssociateProjectAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/associate");
  };

  return BatchAssociateProjectAssetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchDisassociateProjectAssetsOutcome IoTSiteWiseClient::BatchDisassociateProjectAssets(
    const BatchDisassociateProjectAssetsRequest& request) const {
  if (!request.ProjectIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDisassociateProjectAssets", "Required field: ProjectId, is not set");
    return BatchDisassociateProjectAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ProjectId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/disassociate");
  };

  return BatchDisassociateProjectAssetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetAssetPropertyAggregatesOutcome IoTSiteWiseClient::BatchGetAssetPropertyAggregates(
    const BatchGetAssetPropertyAggregatesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties/batch/aggregates");
  };

  return BatchGetAssetPropertyAggregatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetAssetPropertyValueOutcome IoTSiteWiseClient::BatchGetAssetPropertyValue(const BatchGetAssetPropertyValueRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties/batch/latest");
  };

  return BatchGetAssetPropertyValueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchGetAssetPropertyValueHistoryOutcome IoTSiteWiseClient::BatchGetAssetPropertyValueHistory(
    const BatchGetAssetPropertyValueHistoryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties/batch/history");
  };

  return BatchGetAssetPropertyValueHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

BatchPutAssetPropertyValueOutcome IoTSiteWiseClient::BatchPutAssetPropertyValue(const BatchPutAssetPropertyValueRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties");
  };

  return BatchPutAssetPropertyValueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAccessPolicyOutcome IoTSiteWiseClient::CreateAccessPolicy(const CreateAccessPolicyRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policies");
  };

  return CreateAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssetOutcome IoTSiteWiseClient::CreateAsset(const CreateAssetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets");
  };

  return CreateAssetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssetModelOutcome IoTSiteWiseClient::CreateAssetModel(const CreateAssetModelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models");
  };

  return CreateAssetModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateAssetModelCompositeModelOutcome IoTSiteWiseClient::CreateAssetModelCompositeModel(
    const CreateAssetModelCompositeModelRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateAssetModelCompositeModel", "Required field: AssetModelId, is not set");
    return CreateAssetModelCompositeModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/composite-models");
  };

  return CreateAssetModelCompositeModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBulkImportJobOutcome IoTSiteWiseClient::CreateBulkImportJob(const CreateBulkImportJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return CreateBulkImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateComputationModelOutcome IoTSiteWiseClient::CreateComputationModel(const CreateComputationModelRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/computation-models");
  };

  return CreateComputationModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDashboardOutcome IoTSiteWiseClient::CreateDashboard(const CreateDashboardRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards");
  };

  return CreateDashboardOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetOutcome IoTSiteWiseClient::CreateDataset(const CreateDatasetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  };

  return CreateDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateGatewayOutcome IoTSiteWiseClient::CreateGateway(const CreateGatewayRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/20200301/gateways");
  };

  return CreateGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreatePortalOutcome IoTSiteWiseClient::CreatePortal(const CreatePortalRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals");
  };

  return CreatePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProjectOutcome IoTSiteWiseClient::CreateProject(const CreateProjectRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  };

  return CreateProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAccessPolicyOutcome IoTSiteWiseClient::DeleteAccessPolicy(const DeleteAccessPolicyRequest& request) const {
  if (!request.AccessPolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAccessPolicy", "Required field: AccessPolicyId, is not set");
    return DeleteAccessPolicyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AccessPolicyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPolicyId());
  };

  return DeleteAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssetOutcome IoTSiteWiseClient::DeleteAsset(const DeleteAssetRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: AssetId, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AssetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
  };

  return DeleteAssetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssetModelOutcome IoTSiteWiseClient::DeleteAssetModel(const DeleteAssetModelRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssetModel", "Required field: AssetModelId, is not set");
    return DeleteAssetModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
  };

  return DeleteAssetModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssetModelCompositeModelOutcome IoTSiteWiseClient::DeleteAssetModelCompositeModel(
    const DeleteAssetModelCompositeModelRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssetModelCompositeModel", "Required field: AssetModelId, is not set");
    return DeleteAssetModelCompositeModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }
  if (!request.AssetModelCompositeModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssetModelCompositeModel", "Required field: AssetModelCompositeModelId, is not set");
    return DeleteAssetModelCompositeModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelCompositeModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/composite-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelCompositeModelId());
  };

  return DeleteAssetModelCompositeModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteAssetModelInterfaceRelationshipOutcome IoTSiteWiseClient::DeleteAssetModelInterfaceRelationship(
    const DeleteAssetModelInterfaceRelationshipRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssetModelInterfaceRelationship", "Required field: AssetModelId, is not set");
    return DeleteAssetModelInterfaceRelationshipOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }
  if (!request.InterfaceAssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAssetModelInterfaceRelationship", "Required field: InterfaceAssetModelId, is not set");
    return DeleteAssetModelInterfaceRelationshipOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InterfaceAssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/interface/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInterfaceAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-model-interface-relationship");
  };

  return DeleteAssetModelInterfaceRelationshipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteComputationModelOutcome IoTSiteWiseClient::DeleteComputationModel(const DeleteComputationModelRequest& request) const {
  if (!request.ComputationModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComputationModel", "Required field: ComputationModelId, is not set");
    return DeleteComputationModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ComputationModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/computation-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComputationModelId());
  };

  return DeleteComputationModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDashboardOutcome IoTSiteWiseClient::DeleteDashboard(const DeleteDashboardRequest& request) const {
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDashboard", "Required field: DashboardId, is not set");
    return DeleteDashboardOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  };

  return DeleteDashboardOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDatasetOutcome IoTSiteWiseClient::DeleteDataset(const DeleteDatasetRequest& request) const {
  if (!request.DatasetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatasetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetId());
  };

  return DeleteDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteGatewayOutcome IoTSiteWiseClient::DeleteGateway(const DeleteGatewayRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteGateway", "Required field: GatewayId, is not set");
    return DeleteGatewayOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/20200301/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
  };

  return DeleteGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeletePortalOutcome IoTSiteWiseClient::DeletePortal(const DeletePortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeletePortal", "Required field: PortalId, is not set");
    return DeletePortalOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
  };

  return DeletePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProjectOutcome IoTSiteWiseClient::DeleteProject(const DeleteProjectRequest& request) const {
  if (!request.ProjectIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: ProjectId, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ProjectId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectId());
  };

  return DeleteProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteTimeSeriesOutcome IoTSiteWiseClient::DeleteTimeSeries(const DeleteTimeSeriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeseries/delete/");
  };

  return DeleteTimeSeriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DescribeAccessPolicyOutcome IoTSiteWiseClient::DescribeAccessPolicy(const DescribeAccessPolicyRequest& request) const {
  if (!request.AccessPolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAccessPolicy", "Required field: AccessPolicyId, is not set");
    return DescribeAccessPolicyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AccessPolicyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPolicyId());
  };

  return DescribeAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeActionOutcome IoTSiteWiseClient::DescribeAction(const DescribeActionRequest& request) const {
  if (!request.ActionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAction", "Required field: ActionId, is not set");
    return DescribeActionOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ActionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetActionId());
  };

  return DescribeActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAssetOutcome IoTSiteWiseClient::DescribeAsset(const DescribeAssetRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAsset", "Required field: AssetId, is not set");
    return DescribeAssetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AssetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
  };

  return DescribeAssetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAssetCompositeModelOutcome IoTSiteWiseClient::DescribeAssetCompositeModel(const DescribeAssetCompositeModelRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetCompositeModel", "Required field: AssetId, is not set");
    return DescribeAssetCompositeModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.AssetCompositeModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetCompositeModel", "Required field: AssetCompositeModelId, is not set");
    return DescribeAssetCompositeModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetCompositeModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/composite-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetCompositeModelId());
  };

  return DescribeAssetCompositeModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAssetModelOutcome IoTSiteWiseClient::DescribeAssetModel(const DescribeAssetModelRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetModel", "Required field: AssetModelId, is not set");
    return DescribeAssetModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
  };

  return DescribeAssetModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAssetModelCompositeModelOutcome IoTSiteWiseClient::DescribeAssetModelCompositeModel(
    const DescribeAssetModelCompositeModelRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetModelCompositeModel", "Required field: AssetModelId, is not set");
    return DescribeAssetModelCompositeModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }
  if (!request.AssetModelCompositeModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetModelCompositeModel", "Required field: AssetModelCompositeModelId, is not set");
    return DescribeAssetModelCompositeModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelCompositeModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/composite-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelCompositeModelId());
  };

  return DescribeAssetModelCompositeModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAssetModelInterfaceRelationshipOutcome IoTSiteWiseClient::DescribeAssetModelInterfaceRelationship(
    const DescribeAssetModelInterfaceRelationshipRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetModelInterfaceRelationship", "Required field: AssetModelId, is not set");
    return DescribeAssetModelInterfaceRelationshipOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }
  if (!request.InterfaceAssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetModelInterfaceRelationship", "Required field: InterfaceAssetModelId, is not set");
    return DescribeAssetModelInterfaceRelationshipOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InterfaceAssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/interface/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInterfaceAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-model-interface-relationship");
  };

  return DescribeAssetModelInterfaceRelationshipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeAssetPropertyOutcome IoTSiteWiseClient::DescribeAssetProperty(const DescribeAssetPropertyRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetProperty", "Required field: AssetId, is not set");
    return DescribeAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [AssetId]", false));
  }
  if (!request.PropertyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeAssetProperty", "Required field: PropertyId, is not set");
    return DescribeAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [PropertyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPropertyId());
  };

  return DescribeAssetPropertyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeBulkImportJobOutcome IoTSiteWiseClient::DescribeBulkImportJob(const DescribeBulkImportJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeBulkImportJob", "Required field: JobId, is not set");
    return DescribeBulkImportJobOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return DescribeBulkImportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeComputationModelOutcome IoTSiteWiseClient::DescribeComputationModel(const DescribeComputationModelRequest& request) const {
  if (!request.ComputationModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeComputationModel", "Required field: ComputationModelId, is not set");
    return DescribeComputationModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComputationModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/computation-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComputationModelId());
  };

  return DescribeComputationModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeComputationModelExecutionSummaryOutcome IoTSiteWiseClient::DescribeComputationModelExecutionSummary(
    const DescribeComputationModelExecutionSummaryRequest& request) const {
  if (!request.ComputationModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeComputationModelExecutionSummary", "Required field: ComputationModelId, is not set");
    return DescribeComputationModelExecutionSummaryOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComputationModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/computation-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComputationModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/execution-summary");
  };

  return DescribeComputationModelExecutionSummaryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDashboardOutcome IoTSiteWiseClient::DescribeDashboard(const DescribeDashboardRequest& request) const {
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDashboard", "Required field: DashboardId, is not set");
    return DescribeDashboardOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  };

  return DescribeDashboardOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDatasetOutcome IoTSiteWiseClient::DescribeDataset(const DescribeDatasetRequest& request) const {
  if (!request.DatasetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: DatasetId, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DatasetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetId());
  };

  return DescribeDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeDefaultEncryptionConfigurationOutcome IoTSiteWiseClient::DescribeDefaultEncryptionConfiguration(
    const DescribeDefaultEncryptionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/account/encryption");
  };

  return DescribeDefaultEncryptionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeExecutionOutcome IoTSiteWiseClient::DescribeExecution(const DescribeExecutionRequest& request) const {
  if (!request.ExecutionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeExecution", "Required field: ExecutionId, is not set");
    return DescribeExecutionOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ExecutionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/executions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExecutionId());
  };

  return DescribeExecutionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeGatewayOutcome IoTSiteWiseClient::DescribeGateway(const DescribeGatewayRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGateway", "Required field: GatewayId, is not set");
    return DescribeGatewayOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/20200301/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
  };

  return DescribeGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeGatewayCapabilityConfigurationOutcome IoTSiteWiseClient::DescribeGatewayCapabilityConfiguration(
    const DescribeGatewayCapabilityConfigurationRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGatewayCapabilityConfiguration", "Required field: GatewayId, is not set");
    return DescribeGatewayCapabilityConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayId]", false));
  }
  if (!request.CapabilityNamespaceHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeGatewayCapabilityConfiguration", "Required field: CapabilityNamespace, is not set");
    return DescribeGatewayCapabilityConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CapabilityNamespace]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/20200301/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capability/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCapabilityNamespace());
  };

  return DescribeGatewayCapabilityConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeLoggingOptionsOutcome IoTSiteWiseClient::DescribeLoggingOptions(const DescribeLoggingOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  };

  return DescribeLoggingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribePortalOutcome IoTSiteWiseClient::DescribePortal(const DescribePortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribePortal", "Required field: PortalId, is not set");
    return DescribePortalOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
  };

  return DescribePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeProjectOutcome IoTSiteWiseClient::DescribeProject(const DescribeProjectRequest& request) const {
  if (!request.ProjectIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeProject", "Required field: ProjectId, is not set");
    return DescribeProjectOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ProjectId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectId());
  };

  return DescribeProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeStorageConfigurationOutcome IoTSiteWiseClient::DescribeStorageConfiguration(
    const DescribeStorageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/account/storage");
  };

  return DescribeStorageConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeTimeSeriesOutcome IoTSiteWiseClient::DescribeTimeSeries(const DescribeTimeSeriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeseries/describe/");
  };

  return DescribeTimeSeriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DisassociateAssetsOutcome IoTSiteWiseClient::DisassociateAssets(const DisassociateAssetsRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateAssets", "Required field: AssetId, is not set");
    return DisassociateAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AssetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/disassociate");
  };

  return DisassociateAssetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DisassociateTimeSeriesFromAssetPropertyOutcome IoTSiteWiseClient::DisassociateTimeSeriesFromAssetProperty(
    const DisassociateTimeSeriesFromAssetPropertyRequest& request) const {
  if (!request.AliasHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTimeSeriesFromAssetProperty", "Required field: Alias, is not set");
    return DisassociateTimeSeriesFromAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Alias]", false));
  }
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTimeSeriesFromAssetProperty", "Required field: AssetId, is not set");
    return DisassociateTimeSeriesFromAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetId]", false));
  }
  if (!request.PropertyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DisassociateTimeSeriesFromAssetProperty", "Required field: PropertyId, is not set");
    return DisassociateTimeSeriesFromAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [PropertyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeseries/disassociate/");
  };

  return DisassociateTimeSeriesFromAssetPropertyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ExecuteActionOutcome IoTSiteWiseClient::ExecuteAction(const ExecuteActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions");
  };

  return ExecuteActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ExecuteQueryOutcome IoTSiteWiseClient::ExecuteQuery(const ExecuteQueryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/queries/execution");
  };

  return ExecuteQueryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAssetPropertyAggregatesOutcome IoTSiteWiseClient::GetAssetPropertyAggregates(const GetAssetPropertyAggregatesRequest& request) const {
  if (!request.AggregateTypesHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssetPropertyAggregates", "Required field: AggregateTypes, is not set");
    return GetAssetPropertyAggregatesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AggregateTypes]", false));
  }
  if (!request.ResolutionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssetPropertyAggregates", "Required field: Resolution, is not set");
    return GetAssetPropertyAggregatesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Resolution]", false));
  }
  if (!request.StartDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssetPropertyAggregates", "Required field: StartDate, is not set");
    return GetAssetPropertyAggregatesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartDate]", false));
  }
  if (!request.EndDateHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAssetPropertyAggregates", "Required field: EndDate, is not set");
    return GetAssetPropertyAggregatesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndDate]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties/aggregates");
  };

  return GetAssetPropertyAggregatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssetPropertyValueOutcome IoTSiteWiseClient::GetAssetPropertyValue(const GetAssetPropertyValueRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties/latest");
  };

  return GetAssetPropertyValueOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetAssetPropertyValueHistoryOutcome IoTSiteWiseClient::GetAssetPropertyValueHistory(
    const GetAssetPropertyValueHistoryRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties/history");
  };

  return GetAssetPropertyValueHistoryOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetInterpolatedAssetPropertyValuesOutcome IoTSiteWiseClient::GetInterpolatedAssetPropertyValues(
    const GetInterpolatedAssetPropertyValuesRequest& request) const {
  if (!request.StartTimeInSecondsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Required field: StartTimeInSeconds, is not set");
    return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [StartTimeInSeconds]", false));
  }
  if (!request.EndTimeInSecondsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Required field: EndTimeInSeconds, is not set");
    return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EndTimeInSeconds]", false));
  }
  if (!request.QualityHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Required field: Quality, is not set");
    return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Quality]", false));
  }
  if (!request.IntervalInSecondsHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Required field: IntervalInSeconds, is not set");
    return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IntervalInSeconds]", false));
  }
  if (!request.TypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetInterpolatedAssetPropertyValues", "Required field: Type, is not set");
    return GetInterpolatedAssetPropertyValuesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties/interpolated");
  };

  return GetInterpolatedAssetPropertyValuesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

InvokeAssistantOutcome IoTSiteWiseClient::InvokeAssistant(InvokeAssistantRequest& request) const {
  AWS_OPERATION_GUARD(InvokeAssistant);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, InvokeAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, InvokeAssistant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, InvokeAssistant, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".InvokeAssistant",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<InvokeAssistantOutcome>(
      [&]() -> InvokeAssistantOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, InvokeAssistant, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("data.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), InvokeAssistantOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/assistant/invocation");
        request.SetResponseStreamFactory([&] {
          request.GetEventStreamDecoder().Reset();
          return Aws::New<Aws::Utils::Event::EventDecoderStream>(ALLOCATION_TAG, request.GetEventStreamDecoder());
        });
        if (!request.GetHeadersReceivedEventHandler()) {
          request.SetHeadersReceivedEventHandler([&request](const Http::HttpRequest*, Http::HttpResponse* response) {
            AWS_CHECK_PTR("InvokeAssistant", response);
            if (const auto initialResponseHandler = request.GetEventStreamHandler().GetInitialResponseCallbackEx()) {
              initialResponseHandler({response->GetHeaders()}, Utils::Event::InitialResponseType::ON_RESPONSE);
            }
          });
        }
        return InvokeAssistantOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

ListAccessPoliciesOutcome IoTSiteWiseClient::ListAccessPolicies(const ListAccessPoliciesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policies");
  };

  return ListAccessPoliciesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListActionsOutcome IoTSiteWiseClient::ListActions(const ListActionsRequest& request) const {
  if (!request.TargetResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListActions", "Required field: TargetResourceType, is not set");
    return ListActionsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TargetResourceType]", false));
  }
  if (!request.TargetResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListActions", "Required field: TargetResourceId, is not set");
    return ListActionsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [TargetResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions");
  };

  return ListActionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssetModelCompositeModelsOutcome IoTSiteWiseClient::ListAssetModelCompositeModels(
    const ListAssetModelCompositeModelsRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssetModelCompositeModels", "Required field: AssetModelId, is not set");
    return ListAssetModelCompositeModelsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/composite-models");
  };

  return ListAssetModelCompositeModelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssetModelPropertiesOutcome IoTSiteWiseClient::ListAssetModelProperties(const ListAssetModelPropertiesRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssetModelProperties", "Required field: AssetModelId, is not set");
    return ListAssetModelPropertiesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties");
  };

  return ListAssetModelPropertiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssetModelsOutcome IoTSiteWiseClient::ListAssetModels(const ListAssetModelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models");
  };

  return ListAssetModelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssetPropertiesOutcome IoTSiteWiseClient::ListAssetProperties(const ListAssetPropertiesRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssetProperties", "Required field: AssetId, is not set");
    return ListAssetPropertiesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AssetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties");
  };

  return ListAssetPropertiesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssetRelationshipsOutcome IoTSiteWiseClient::ListAssetRelationships(const ListAssetRelationshipsRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssetRelationships", "Required field: AssetId, is not set");
    return ListAssetRelationshipsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [AssetId]", false));
  }
  if (!request.TraversalTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssetRelationships", "Required field: TraversalType, is not set");
    return ListAssetRelationshipsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [TraversalType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assetRelationships");
  };

  return ListAssetRelationshipsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssetsOutcome IoTSiteWiseClient::ListAssets(const ListAssetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets");
  };

  return ListAssetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAssociatedAssetsOutcome IoTSiteWiseClient::ListAssociatedAssets(const ListAssociatedAssetsRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListAssociatedAssets", "Required field: AssetId, is not set");
    return ListAssociatedAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AssetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/hierarchies");
  };

  return ListAssociatedAssetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBulkImportJobsOutcome IoTSiteWiseClient::ListBulkImportJobs(const ListBulkImportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return ListBulkImportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCompositionRelationshipsOutcome IoTSiteWiseClient::ListCompositionRelationships(
    const ListCompositionRelationshipsRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCompositionRelationships", "Required field: AssetModelId, is not set");
    return ListCompositionRelationshipsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/composition-relationships");
  };

  return ListCompositionRelationshipsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListComputationModelDataBindingUsagesOutcome IoTSiteWiseClient::ListComputationModelDataBindingUsages(
    const ListComputationModelDataBindingUsagesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/computation-models/data-binding-usages");
  };

  return ListComputationModelDataBindingUsagesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListComputationModelResolveToResourcesOutcome IoTSiteWiseClient::ListComputationModelResolveToResources(
    const ListComputationModelResolveToResourcesRequest& request) const {
  if (!request.ComputationModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListComputationModelResolveToResources", "Required field: ComputationModelId, is not set");
    return ListComputationModelResolveToResourcesOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ComputationModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/computation-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComputationModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/resolve-to-resources");
  };

  return ListComputationModelResolveToResourcesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListComputationModelsOutcome IoTSiteWiseClient::ListComputationModels(const ListComputationModelsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/computation-models");
  };

  return ListComputationModelsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDashboardsOutcome IoTSiteWiseClient::ListDashboards(const ListDashboardsRequest& request) const {
  if (!request.ProjectIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDashboards", "Required field: ProjectId, is not set");
    return ListDashboardsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ProjectId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards");
  };

  return ListDashboardsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDatasetsOutcome IoTSiteWiseClient::ListDatasets(const ListDatasetsRequest& request) const {
  if (!request.SourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDatasets", "Required field: SourceType, is not set");
    return ListDatasetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [SourceType]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  };

  return ListDatasetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListExecutionsOutcome IoTSiteWiseClient::ListExecutions(const ListExecutionsRequest& request) const {
  if (!request.TargetResourceTypeHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListExecutions", "Required field: TargetResourceType, is not set");
    return ListExecutionsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TargetResourceType]", false));
  }
  if (!request.TargetResourceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListExecutions", "Required field: TargetResourceId, is not set");
    return ListExecutionsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TargetResourceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/executions");
  };

  return ListExecutionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListGatewaysOutcome IoTSiteWiseClient::ListGateways(const ListGatewaysRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/20200301/gateways");
  };

  return ListGatewaysOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListInterfaceRelationshipsOutcome IoTSiteWiseClient::ListInterfaceRelationships(const ListInterfaceRelationshipsRequest& request) const {
  if (!request.InterfaceAssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListInterfaceRelationships", "Required field: InterfaceAssetModelId, is not set");
    return ListInterfaceRelationshipsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InterfaceAssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/interface/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInterfaceAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models");
  };

  return ListInterfaceRelationshipsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListPortalsOutcome IoTSiteWiseClient::ListPortals(const ListPortalsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals");
  };

  return ListPortalsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProjectAssetsOutcome IoTSiteWiseClient::ListProjectAssets(const ListProjectAssetsRequest& request) const {
  if (!request.ProjectIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProjectAssets", "Required field: ProjectId, is not set");
    return ListProjectAssetsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [ProjectId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets");
  };

  return ListProjectAssetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProjectsOutcome IoTSiteWiseClient::ListProjects(const ListProjectsRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListProjects", "Required field: PortalId, is not set");
    return ListProjectsOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  };

  return ListProjectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome IoTSiteWiseClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTimeSeriesOutcome IoTSiteWiseClient::ListTimeSeries(const ListTimeSeriesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/timeseries/");
  };

  return ListTimeSeriesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutAssetModelInterfaceRelationshipOutcome IoTSiteWiseClient::PutAssetModelInterfaceRelationship(
    const PutAssetModelInterfaceRelationshipRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAssetModelInterfaceRelationship", "Required field: AssetModelId, is not set");
    return PutAssetModelInterfaceRelationshipOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }
  if (!request.InterfaceAssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutAssetModelInterfaceRelationship", "Required field: InterfaceAssetModelId, is not set");
    return PutAssetModelInterfaceRelationshipOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [InterfaceAssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/interface/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInterfaceAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-model-interface-relationship");
  };

  return PutAssetModelInterfaceRelationshipOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutDefaultEncryptionConfigurationOutcome IoTSiteWiseClient::PutDefaultEncryptionConfiguration(
    const PutDefaultEncryptionConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/account/encryption");
  };

  return PutDefaultEncryptionConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

PutLoggingOptionsOutcome IoTSiteWiseClient::PutLoggingOptions(const PutLoggingOptionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/logging");
  };

  return PutLoggingOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

PutStorageConfigurationOutcome IoTSiteWiseClient::PutStorageConfiguration(const PutStorageConfigurationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration/account/storage");
  };

  return PutStorageConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome IoTSiteWiseClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome IoTSiteWiseClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags");
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAccessPolicyOutcome IoTSiteWiseClient::UpdateAccessPolicy(const UpdateAccessPolicyRequest& request) const {
  if (!request.AccessPolicyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAccessPolicy", "Required field: AccessPolicyId, is not set");
    return UpdateAccessPolicyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AccessPolicyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/access-policies/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAccessPolicyId());
  };

  return UpdateAccessPolicyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAssetOutcome IoTSiteWiseClient::UpdateAsset(const UpdateAssetRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAsset", "Required field: AssetId, is not set");
    return UpdateAssetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AssetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
  };

  return UpdateAssetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAssetModelOutcome IoTSiteWiseClient::UpdateAssetModel(const UpdateAssetModelRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssetModel", "Required field: AssetModelId, is not set");
    return UpdateAssetModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AssetModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
  };

  return UpdateAssetModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAssetModelCompositeModelOutcome IoTSiteWiseClient::UpdateAssetModelCompositeModel(
    const UpdateAssetModelCompositeModelRequest& request) const {
  if (!request.AssetModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssetModelCompositeModel", "Required field: AssetModelId, is not set");
    return UpdateAssetModelCompositeModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelId]", false));
  }
  if (!request.AssetModelCompositeModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssetModelCompositeModel", "Required field: AssetModelCompositeModelId, is not set");
    return UpdateAssetModelCompositeModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssetModelCompositeModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/asset-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/composite-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetModelCompositeModelId());
  };

  return UpdateAssetModelCompositeModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateAssetPropertyOutcome IoTSiteWiseClient::UpdateAssetProperty(const UpdateAssetPropertyRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssetProperty", "Required field: AssetId, is not set");
    return UpdateAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AssetId]", false));
  }
  if (!request.PropertyIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAssetProperty", "Required field: PropertyId, is not set");
    return UpdateAssetPropertyOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [PropertyId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/properties/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPropertyId());
  };

  return UpdateAssetPropertyOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateComputationModelOutcome IoTSiteWiseClient::UpdateComputationModel(const UpdateComputationModelRequest& request) const {
  if (!request.ComputationModelIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateComputationModel", "Required field: ComputationModelId, is not set");
    return UpdateComputationModelOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [ComputationModelId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/computation-models/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetComputationModelId());
  };

  return UpdateComputationModelOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDashboardOutcome IoTSiteWiseClient::UpdateDashboard(const UpdateDashboardRequest& request) const {
  if (!request.DashboardIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDashboard", "Required field: DashboardId, is not set");
    return UpdateDashboardOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DashboardId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dashboards/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDashboardId());
  };

  return UpdateDashboardOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateDatasetOutcome IoTSiteWiseClient::UpdateDataset(const UpdateDatasetRequest& request) const {
  if (!request.DatasetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataset", "Required field: DatasetId, is not set");
    return UpdateDatasetOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatasetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetId());
  };

  return UpdateDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateGatewayOutcome IoTSiteWiseClient::UpdateGateway(const UpdateGatewayRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGateway", "Required field: GatewayId, is not set");
    return UpdateGatewayOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/20200301/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
  };

  return UpdateGatewayOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateGatewayCapabilityConfigurationOutcome IoTSiteWiseClient::UpdateGatewayCapabilityConfiguration(
    const UpdateGatewayCapabilityConfigurationRequest& request) const {
  if (!request.GatewayIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateGatewayCapabilityConfiguration", "Required field: GatewayId, is not set");
    return UpdateGatewayCapabilityConfigurationOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(
        IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [GatewayId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/20200301/gateways/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetGatewayId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/capability");
  };

  return UpdateGatewayCapabilityConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdatePortalOutcome IoTSiteWiseClient::UpdatePortal(const UpdatePortalRequest& request) const {
  if (!request.PortalIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdatePortal", "Required field: PortalId, is not set");
    return UpdatePortalOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [PortalId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/portals/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPortalId());
  };

  return UpdatePortalOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateProjectOutcome IoTSiteWiseClient::UpdateProject(const UpdateProjectRequest& request) const {
  if (!request.ProjectIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: ProjectId, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<IoTSiteWiseErrors>(IoTSiteWiseErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [ProjectId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProjectId());
  };

  return UpdateProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
