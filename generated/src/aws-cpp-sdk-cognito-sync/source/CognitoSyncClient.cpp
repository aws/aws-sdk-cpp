/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-sync/CognitoSyncClient.h>
#include <aws/cognito-sync/CognitoSyncEndpointProvider.h>
#include <aws/cognito-sync/CognitoSyncErrorMarshaller.h>
#include <aws/cognito-sync/model/BulkPublishRequest.h>
#include <aws/cognito-sync/model/DeleteDatasetRequest.h>
#include <aws/cognito-sync/model/DescribeDatasetRequest.h>
#include <aws/cognito-sync/model/DescribeIdentityPoolUsageRequest.h>
#include <aws/cognito-sync/model/DescribeIdentityUsageRequest.h>
#include <aws/cognito-sync/model/GetBulkPublishDetailsRequest.h>
#include <aws/cognito-sync/model/GetCognitoEventsRequest.h>
#include <aws/cognito-sync/model/GetIdentityPoolConfigurationRequest.h>
#include <aws/cognito-sync/model/ListDatasetsRequest.h>
#include <aws/cognito-sync/model/ListIdentityPoolUsageRequest.h>
#include <aws/cognito-sync/model/ListRecordsRequest.h>
#include <aws/cognito-sync/model/RegisterDeviceRequest.h>
#include <aws/cognito-sync/model/SetCognitoEventsRequest.h>
#include <aws/cognito-sync/model/SetIdentityPoolConfigurationRequest.h>
#include <aws/cognito-sync/model/SubscribeToDatasetRequest.h>
#include <aws/cognito-sync/model/UnsubscribeFromDatasetRequest.h>
#include <aws/cognito-sync/model/UpdateRecordsRequest.h>
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
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CognitoSync;
using namespace Aws::CognitoSync::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CognitoSync {
const char SERVICE_NAME[] = "cognito-sync";
const char ALLOCATION_TAG[] = "CognitoSyncClient";
}  // namespace CognitoSync
}  // namespace Aws
const char* CognitoSyncClient::GetServiceName() { return SERVICE_NAME; }
const char* CognitoSyncClient::GetAllocationTag() { return ALLOCATION_TAG; }

CognitoSyncClient::CognitoSyncClient(const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration,
                                     std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const AWSCredentials& credentials, std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider,
                                     const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<CognitoSyncEndpointProviderBase> endpointProvider,
                                     const CognitoSync::CognitoSyncClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CognitoSyncClient::CognitoSyncClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CognitoSyncClient::CognitoSyncClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CognitoSyncErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CognitoSyncEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CognitoSyncClient::~CognitoSyncClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CognitoSyncEndpointProviderBase>& CognitoSyncClient::accessEndpointProvider() { return m_endpointProvider; }

void CognitoSyncClient::init(const CognitoSync::CognitoSyncClientConfiguration& config) {
  AWSClient::SetServiceClientName("Cognito Sync");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cognito-sync");
}

void CognitoSyncClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CognitoSyncClient::InvokeOperationOutcome CognitoSyncClient::InvokeServiceOperation(
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

BulkPublishOutcome CognitoSyncClient::BulkPublish(const BulkPublishRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BulkPublish", "Required field: IdentityPoolId, is not set");
    return BulkPublishOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [IdentityPoolId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/bulkpublish");
  };

  return BulkPublishOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatasetOutcome CognitoSyncClient::DeleteDataset(const DeleteDatasetRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: IdentityPoolId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: IdentityId, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: DatasetName, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatasetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  };

  return DeleteDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeDatasetOutcome CognitoSyncClient::DescribeDataset(const DescribeDatasetRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: IdentityPoolId, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: IdentityId, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: DatasetName, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DatasetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  };

  return DescribeDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeIdentityPoolUsageOutcome CognitoSyncClient::DescribeIdentityPoolUsage(const DescribeIdentityPoolUsageRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIdentityPoolUsage", "Required field: IdentityPoolId, is not set");
    return DescribeIdentityPoolUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(
        CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
  };

  return DescribeIdentityPoolUsageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeIdentityUsageOutcome CognitoSyncClient::DescribeIdentityUsage(const DescribeIdentityUsageRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIdentityUsage", "Required field: IdentityPoolId, is not set");
    return DescribeIdentityUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeIdentityUsage", "Required field: IdentityId, is not set");
    return DescribeIdentityUsageOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [IdentityId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
  };

  return DescribeIdentityUsageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBulkPublishDetailsOutcome CognitoSyncClient::GetBulkPublishDetails(const GetBulkPublishDetailsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBulkPublishDetails", "Required field: IdentityPoolId, is not set");
    return GetBulkPublishDetailsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [IdentityPoolId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/getBulkPublishDetails");
  };

  return GetBulkPublishDetailsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetCognitoEventsOutcome CognitoSyncClient::GetCognitoEvents(const GetCognitoEventsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCognitoEvents", "Required field: IdentityPoolId, is not set");
    return GetCognitoEventsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [IdentityPoolId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  };

  return GetCognitoEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetIdentityPoolConfigurationOutcome CognitoSyncClient::GetIdentityPoolConfiguration(
    const GetIdentityPoolConfigurationRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetIdentityPoolConfiguration", "Required field: IdentityPoolId, is not set");
    return GetIdentityPoolConfigurationOutcome(Aws::Client::AWSError<CognitoSyncErrors>(
        CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  return GetIdentityPoolConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDatasetsOutcome CognitoSyncClient::ListDatasets(const ListDatasetsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDatasets", "Required field: IdentityPoolId, is not set");
    return ListDatasetsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDatasets", "Required field: IdentityId, is not set");
    return ListDatasetsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [IdentityId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  };

  return ListDatasetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListIdentityPoolUsageOutcome CognitoSyncClient::ListIdentityPoolUsage(const ListIdentityPoolUsageRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools");
  };

  return ListIdentityPoolUsageOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecordsOutcome CognitoSyncClient::ListRecords(const ListRecordsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: IdentityPoolId, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: IdentityId, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecords", "Required field: DatasetName, is not set");
    return ListRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DatasetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/records");
  };

  return ListRecordsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

RegisterDeviceOutcome CognitoSyncClient::RegisterDevice(const RegisterDeviceRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterDevice", "Required field: IdentityPoolId, is not set");
    return RegisterDeviceOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RegisterDevice", "Required field: IdentityId, is not set");
    return RegisterDeviceOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [IdentityId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identity/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/device");
  };

  return RegisterDeviceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SetCognitoEventsOutcome CognitoSyncClient::SetCognitoEvents(const SetCognitoEventsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetCognitoEvents", "Required field: IdentityPoolId, is not set");
    return SetCognitoEventsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [IdentityPoolId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/events");
  };

  return SetCognitoEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SetIdentityPoolConfigurationOutcome CognitoSyncClient::SetIdentityPoolConfiguration(
    const SetIdentityPoolConfigurationRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SetIdentityPoolConfiguration", "Required field: IdentityPoolId, is not set");
    return SetIdentityPoolConfigurationOutcome(Aws::Client::AWSError<CognitoSyncErrors>(
        CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [IdentityPoolId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/configuration");
  };

  return SetIdentityPoolConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SubscribeToDatasetOutcome CognitoSyncClient::SubscribeToDataset(const SubscribeToDatasetRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: IdentityPoolId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: IdentityId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: DatasetName, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DatasetName]", false));
  }
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SubscribeToDataset", "Required field: DeviceId, is not set");
    return SubscribeToDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  };

  return SubscribeToDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UnsubscribeFromDatasetOutcome CognitoSyncClient::UnsubscribeFromDataset(const UnsubscribeFromDatasetRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: IdentityPoolId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: IdentityId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: DatasetName, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DatasetName]", false));
  }
  if (!request.DeviceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UnsubscribeFromDataset", "Required field: DeviceId, is not set");
    return UnsubscribeFromDatasetOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                  "Missing required field [DeviceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/subscriptions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDeviceId());
  };

  return UnsubscribeFromDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateRecordsOutcome CognitoSyncClient::UpdateRecords(const UpdateRecordsRequest& request) const {
  if (!request.IdentityPoolIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: IdentityPoolId, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [IdentityPoolId]", false));
  }
  if (!request.IdentityIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: IdentityId, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [IdentityId]", false));
  }
  if (!request.DatasetNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecords", "Required field: DatasetName, is not set");
    return UpdateRecordsOutcome(Aws::Client::AWSError<CognitoSyncErrors>(CognitoSyncErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DatasetName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/identitypools/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityPoolId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/identities/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentityId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDatasetName());
  };

  return UpdateRecordsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
