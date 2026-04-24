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
#include <aws/dataexchange/DataExchangeClient.h>
#include <aws/dataexchange/DataExchangeEndpointProvider.h>
#include <aws/dataexchange/DataExchangeErrorMarshaller.h>
#include <aws/dataexchange/model/AcceptDataGrantRequest.h>
#include <aws/dataexchange/model/CancelJobRequest.h>
#include <aws/dataexchange/model/CreateDataGrantRequest.h>
#include <aws/dataexchange/model/CreateDataSetRequest.h>
#include <aws/dataexchange/model/CreateEventActionRequest.h>
#include <aws/dataexchange/model/CreateJobRequest.h>
#include <aws/dataexchange/model/CreateRevisionRequest.h>
#include <aws/dataexchange/model/DeleteAssetRequest.h>
#include <aws/dataexchange/model/DeleteDataGrantRequest.h>
#include <aws/dataexchange/model/DeleteDataSetRequest.h>
#include <aws/dataexchange/model/DeleteEventActionRequest.h>
#include <aws/dataexchange/model/DeleteRevisionRequest.h>
#include <aws/dataexchange/model/GetAssetRequest.h>
#include <aws/dataexchange/model/GetDataGrantRequest.h>
#include <aws/dataexchange/model/GetDataSetRequest.h>
#include <aws/dataexchange/model/GetEventActionRequest.h>
#include <aws/dataexchange/model/GetJobRequest.h>
#include <aws/dataexchange/model/GetReceivedDataGrantRequest.h>
#include <aws/dataexchange/model/GetRevisionRequest.h>
#include <aws/dataexchange/model/ListDataGrantsRequest.h>
#include <aws/dataexchange/model/ListDataSetRevisionsRequest.h>
#include <aws/dataexchange/model/ListDataSetsRequest.h>
#include <aws/dataexchange/model/ListEventActionsRequest.h>
#include <aws/dataexchange/model/ListJobsRequest.h>
#include <aws/dataexchange/model/ListReceivedDataGrantsRequest.h>
#include <aws/dataexchange/model/ListRevisionAssetsRequest.h>
#include <aws/dataexchange/model/ListTagsForResourceRequest.h>
#include <aws/dataexchange/model/RevokeRevisionRequest.h>
#include <aws/dataexchange/model/SendApiAssetRequest.h>
#include <aws/dataexchange/model/SendDataSetNotificationRequest.h>
#include <aws/dataexchange/model/StartJobRequest.h>
#include <aws/dataexchange/model/TagResourceRequest.h>
#include <aws/dataexchange/model/UntagResourceRequest.h>
#include <aws/dataexchange/model/UpdateAssetRequest.h>
#include <aws/dataexchange/model/UpdateDataSetRequest.h>
#include <aws/dataexchange/model/UpdateEventActionRequest.h>
#include <aws/dataexchange/model/UpdateRevisionRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::DataExchange;
using namespace Aws::DataExchange::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace DataExchange {
const char SERVICE_NAME[] = "dataexchange";
const char ALLOCATION_TAG[] = "DataExchangeClient";
}  // namespace DataExchange
}  // namespace Aws
const char* DataExchangeClient::GetServiceName() { return SERVICE_NAME; }
const char* DataExchangeClient::GetAllocationTag() { return ALLOCATION_TAG; }

DataExchangeClient::DataExchangeClient(const DataExchange::DataExchangeClientConfiguration& clientConfiguration,
                                       std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataExchangeClient::DataExchangeClient(const AWSCredentials& credentials,
                                       std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider,
                                       const DataExchange::DataExchangeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataExchangeClient::DataExchangeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<DataExchangeEndpointProviderBase> endpointProvider,
                                       const DataExchange::DataExchangeClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
DataExchangeClient::DataExchangeClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataExchangeClient::DataExchangeClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

DataExchangeClient::DataExchangeClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<DataExchangeErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<DataExchangeEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
DataExchangeClient::~DataExchangeClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<DataExchangeEndpointProviderBase>& DataExchangeClient::accessEndpointProvider() { return m_endpointProvider; }

void DataExchangeClient::init(const DataExchange::DataExchangeClientConfiguration& config) {
  AWSClient::SetServiceClientName("DataExchange");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "dataexchange");
}

void DataExchangeClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
DataExchangeClient::InvokeOperationOutcome DataExchangeClient::InvokeServiceOperation(
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

AcceptDataGrantOutcome DataExchangeClient::AcceptDataGrant(const AcceptDataGrantRequest& request) const {
  if (!request.DataGrantArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("AcceptDataGrant", "Required field: DataGrantArn, is not set");
    return AcceptDataGrantOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DataGrantArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-grants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataGrantArn());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accept");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AcceptDataGrantOutcome(result.GetResultWithOwnership())
                            : AcceptDataGrantOutcome(std::move(result.GetError()));
}

CancelJobOutcome DataExchangeClient::CancelJob(const CancelJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CancelJob", "Required field: JobId, is not set");
    return CancelJobOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? CancelJobOutcome(result.GetResultWithOwnership()) : CancelJobOutcome(std::move(result.GetError()));
}

CreateDataGrantOutcome DataExchangeClient::CreateDataGrant(const CreateDataGrantRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-grants");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataGrantOutcome(result.GetResultWithOwnership())
                            : CreateDataGrantOutcome(std::move(result.GetError()));
}

CreateDataSetOutcome DataExchangeClient::CreateDataSet(const CreateDataSetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDataSetOutcome(result.GetResultWithOwnership()) : CreateDataSetOutcome(std::move(result.GetError()));
}

CreateEventActionOutcome DataExchangeClient::CreateEventAction(const CreateEventActionRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateEventActionOutcome(result.GetResultWithOwnership())
                            : CreateEventActionOutcome(std::move(result.GetError()));
}

CreateJobOutcome DataExchangeClient::CreateJob(const CreateJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateJobOutcome(result.GetResultWithOwnership()) : CreateJobOutcome(std::move(result.GetError()));
}

CreateRevisionOutcome DataExchangeClient::CreateRevision(const CreateRevisionRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRevision", "Required field: DataSetId, is not set");
    return CreateRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRevisionOutcome(result.GetResultWithOwnership()) : CreateRevisionOutcome(std::move(result.GetError()));
}

DeleteAssetOutcome DataExchangeClient::DeleteAsset(const DeleteAssetRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: AssetId, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AssetId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: DataSetId, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteAsset", "Required field: RevisionId, is not set");
    return DeleteAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteAssetOutcome(result.GetResultWithOwnership()) : DeleteAssetOutcome(std::move(result.GetError()));
}

DeleteDataGrantOutcome DataExchangeClient::DeleteDataGrant(const DeleteDataGrantRequest& request) const {
  if (!request.DataGrantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataGrant", "Required field: DataGrantId, is not set");
    return DeleteDataGrantOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DataGrantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-grants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataGrantId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataGrantOutcome(result.GetResultWithOwnership())
                            : DeleteDataGrantOutcome(std::move(result.GetError()));
}

DeleteDataSetOutcome DataExchangeClient::DeleteDataSet(const DeleteDataSetRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataSet", "Required field: DataSetId, is not set");
    return DeleteDataSetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDataSetOutcome(result.GetResultWithOwnership()) : DeleteDataSetOutcome(std::move(result.GetError()));
}

DeleteEventActionOutcome DataExchangeClient::DeleteEventAction(const DeleteEventActionRequest& request) const {
  if (!request.EventActionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventAction", "Required field: EventActionId, is not set");
    return DeleteEventActionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EventActionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventActionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteEventActionOutcome(result.GetResultWithOwnership())
                            : DeleteEventActionOutcome(std::move(result.GetError()));
}

DeleteRevisionOutcome DataExchangeClient::DeleteRevision(const DeleteRevisionRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRevision", "Required field: DataSetId, is not set");
    return DeleteRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRevision", "Required field: RevisionId, is not set");
    return DeleteRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRevisionOutcome(result.GetResultWithOwnership()) : DeleteRevisionOutcome(std::move(result.GetError()));
}

GetAssetOutcome DataExchangeClient::GetAsset(const GetAssetRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAsset", "Required field: AssetId, is not set");
    return GetAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AssetId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAsset", "Required field: DataSetId, is not set");
    return GetAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetAsset", "Required field: RevisionId, is not set");
    return GetAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetAssetOutcome(result.GetResultWithOwnership()) : GetAssetOutcome(std::move(result.GetError()));
}

GetDataGrantOutcome DataExchangeClient::GetDataGrant(const GetDataGrantRequest& request) const {
  if (!request.DataGrantIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataGrant", "Required field: DataGrantId, is not set");
    return GetDataGrantOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DataGrantId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-grants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataGrantId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataGrantOutcome(result.GetResultWithOwnership()) : GetDataGrantOutcome(std::move(result.GetError()));
}

GetDataSetOutcome DataExchangeClient::GetDataSet(const GetDataSetRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataSet", "Required field: DataSetId, is not set");
    return GetDataSetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetDataSetOutcome(result.GetResultWithOwnership()) : GetDataSetOutcome(std::move(result.GetError()));
}

GetEventActionOutcome DataExchangeClient::GetEventAction(const GetEventActionRequest& request) const {
  if (!request.EventActionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventAction", "Required field: EventActionId, is not set");
    return GetEventActionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EventActionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventActionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetEventActionOutcome(result.GetResultWithOwnership()) : GetEventActionOutcome(std::move(result.GetError()));
}

GetJobOutcome DataExchangeClient::GetJob(const GetJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: JobId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetJobOutcome(result.GetResultWithOwnership()) : GetJobOutcome(std::move(result.GetError()));
}

GetReceivedDataGrantOutcome DataExchangeClient::GetReceivedDataGrant(const GetReceivedDataGrantRequest& request) const {
  if (!request.DataGrantArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetReceivedDataGrant", "Required field: DataGrantArn, is not set");
    return GetReceivedDataGrantOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DataGrantArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/received-data-grants/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataGrantArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetReceivedDataGrantOutcome(result.GetResultWithOwnership())
                            : GetReceivedDataGrantOutcome(std::move(result.GetError()));
}

GetRevisionOutcome DataExchangeClient::GetRevision(const GetRevisionRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevision", "Required field: DataSetId, is not set");
    return GetRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetRevision", "Required field: RevisionId, is not set");
    return GetRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? GetRevisionOutcome(result.GetResultWithOwnership()) : GetRevisionOutcome(std::move(result.GetError()));
}

ListDataGrantsOutcome DataExchangeClient::ListDataGrants(const ListDataGrantsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-grants");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataGrantsOutcome(result.GetResultWithOwnership()) : ListDataGrantsOutcome(std::move(result.GetError()));
}

ListDataSetRevisionsOutcome DataExchangeClient::ListDataSetRevisions(const ListDataSetRevisionsRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataSetRevisions", "Required field: DataSetId, is not set");
    return ListDataSetRevisionsOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataSetRevisionsOutcome(result.GetResultWithOwnership())
                            : ListDataSetRevisionsOutcome(std::move(result.GetError()));
}

ListDataSetsOutcome DataExchangeClient::ListDataSets(const ListDataSetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListDataSetsOutcome(result.GetResultWithOwnership()) : ListDataSetsOutcome(std::move(result.GetError()));
}

ListEventActionsOutcome DataExchangeClient::ListEventActions(const ListEventActionsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListEventActionsOutcome(result.GetResultWithOwnership())
                            : ListEventActionsOutcome(std::move(result.GetError()));
}

ListJobsOutcome DataExchangeClient::ListJobs(const ListJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListJobsOutcome(result.GetResultWithOwnership()) : ListJobsOutcome(std::move(result.GetError()));
}

ListReceivedDataGrantsOutcome DataExchangeClient::ListReceivedDataGrants(const ListReceivedDataGrantsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/received-data-grants");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListReceivedDataGrantsOutcome(result.GetResultWithOwnership())
                            : ListReceivedDataGrantsOutcome(std::move(result.GetError()));
}

ListRevisionAssetsOutcome DataExchangeClient::ListRevisionAssets(const ListRevisionAssetsRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRevisionAssets", "Required field: DataSetId, is not set");
    return ListRevisionAssetsOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRevisionAssets", "Required field: RevisionId, is not set");
    return ListRevisionAssetsOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListRevisionAssetsOutcome(result.GetResultWithOwnership())
                            : ListRevisionAssetsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome DataExchangeClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

RevokeRevisionOutcome DataExchangeClient::RevokeRevision(const RevokeRevisionRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeRevision", "Required field: DataSetId, is not set");
    return RevokeRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RevokeRevision", "Required field: RevisionId, is not set");
    return RevokeRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revoke");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? RevokeRevisionOutcome(result.GetResultWithOwnership()) : RevokeRevisionOutcome(std::move(result.GetError()));
}

SendApiAssetOutcome DataExchangeClient::SendApiAsset(const SendApiAssetRequest& request) const {
  AWS_OPERATION_GUARD(SendApiAsset);
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SendApiAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendApiAsset", "Required field: AssetId, is not set");
    return SendApiAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AssetId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendApiAsset", "Required field: DataSetId, is not set");
    return SendApiAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendApiAsset", "Required field: RevisionId, is not set");
    return SendApiAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [RevisionId]", false));
  }
  AWS_OPERATION_CHECK_PTR(m_telemetryProvider, SendApiAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto tracer = m_telemetryProvider->getTracer(this->GetServiceClientName(), {});
  auto meter = m_telemetryProvider->getMeter(this->GetServiceClientName(), {});
  AWS_OPERATION_CHECK_PTR(meter, SendApiAsset, CoreErrors, CoreErrors::NOT_INITIALIZED);
  auto span = tracer->CreateSpan(Aws::String(this->GetServiceClientName()) + ".SendApiAsset",
                                 {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
                                  {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()},
                                  {TracingUtils::SMITHY_SYSTEM_DIMENSION, TracingUtils::SMITHY_METHOD_AWS_VALUE}},
                                 smithy::components::tracing::SpanKind::CLIENT);
  return TracingUtils::MakeCallWithTiming<SendApiAssetOutcome>(
      [&]() -> SendApiAssetOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
             {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
        AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SendApiAsset, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                    endpointResolutionOutcome.GetError().GetMessage());
        auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("api-fulfill.");
        AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), SendApiAssetOutcome(addPrefixErr.value()));
        endpointResolutionOutcome.GetResult().AddPathSegments("/v1");
        auto result = MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST);
        return result.IsSuccess() ? SendApiAssetOutcome(result.GetResultWithOwnership())
                                  : SendApiAssetOutcome(std::move(result.GetError()));
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, *meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, request.GetServiceRequestName()},
       {TracingUtils::SMITHY_SERVICE_DIMENSION, this->GetServiceClientName()}});
}

SendDataSetNotificationOutcome DataExchangeClient::SendDataSetNotification(const SendDataSetNotificationRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendDataSetNotification", "Required field: DataSetId, is not set");
    return SendDataSetNotificationOutcome(Aws::Client::AWSError<DataExchangeErrors>(
        DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/notification");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SendDataSetNotificationOutcome(result.GetResultWithOwnership())
                            : SendDataSetNotificationOutcome(std::move(result.GetError()));
}

StartJobOutcome DataExchangeClient::StartJob(const StartJobRequest& request) const {
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartJob", "Required field: JobId, is not set");
    return StartJobOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? StartJobOutcome(result.GetResultWithOwnership()) : StartJobOutcome(std::move(result.GetError()));
}

TagResourceOutcome DataExchangeClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome DataExchangeClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateAssetOutcome DataExchangeClient::UpdateAsset(const UpdateAssetRequest& request) const {
  if (!request.AssetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAsset", "Required field: AssetId, is not set");
    return UpdateAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AssetId]", false));
  }
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAsset", "Required field: DataSetId, is not set");
    return UpdateAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateAsset", "Required field: RevisionId, is not set");
    return UpdateAssetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/assets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateAssetOutcome(result.GetResultWithOwnership()) : UpdateAssetOutcome(std::move(result.GetError()));
}

UpdateDataSetOutcome DataExchangeClient::UpdateDataSet(const UpdateDataSetRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataSet", "Required field: DataSetId, is not set");
    return UpdateDataSetOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DataSetId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateDataSetOutcome(result.GetResultWithOwnership()) : UpdateDataSetOutcome(std::move(result.GetError()));
}

UpdateEventActionOutcome DataExchangeClient::UpdateEventAction(const UpdateEventActionRequest& request) const {
  if (!request.EventActionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEventAction", "Required field: EventActionId, is not set");
    return UpdateEventActionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [EventActionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/event-actions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventActionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateEventActionOutcome(result.GetResultWithOwnership())
                            : UpdateEventActionOutcome(std::move(result.GetError()));
}

UpdateRevisionOutcome DataExchangeClient::UpdateRevision(const UpdateRevisionRequest& request) const {
  if (!request.DataSetIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRevision", "Required field: DataSetId, is not set");
    return UpdateRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DataSetId]", false));
  }
  if (!request.RevisionIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRevision", "Required field: RevisionId, is not set");
    return UpdateRevisionOutcome(Aws::Client::AWSError<DataExchangeErrors>(DataExchangeErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RevisionId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/v1/data-sets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataSetId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/revisions/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRevisionId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH);
  return result.IsSuccess() ? UpdateRevisionOutcome(result.GetResultWithOwnership()) : UpdateRevisionOutcome(std::move(result.GetError()));
}
