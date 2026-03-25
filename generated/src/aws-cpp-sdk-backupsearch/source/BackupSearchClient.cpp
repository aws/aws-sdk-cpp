/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backupsearch/BackupSearchClient.h>
#include <aws/backupsearch/BackupSearchEndpointProvider.h>
#include <aws/backupsearch/BackupSearchErrorMarshaller.h>
#include <aws/backupsearch/model/GetSearchJobRequest.h>
#include <aws/backupsearch/model/GetSearchResultExportJobRequest.h>
#include <aws/backupsearch/model/ListSearchJobBackupsRequest.h>
#include <aws/backupsearch/model/ListSearchJobResultsRequest.h>
#include <aws/backupsearch/model/ListSearchJobsRequest.h>
#include <aws/backupsearch/model/ListSearchResultExportJobsRequest.h>
#include <aws/backupsearch/model/ListTagsForResourceRequest.h>
#include <aws/backupsearch/model/StartSearchJobRequest.h>
#include <aws/backupsearch/model/StartSearchResultExportJobRequest.h>
#include <aws/backupsearch/model/StopSearchJobRequest.h>
#include <aws/backupsearch/model/TagResourceRequest.h>
#include <aws/backupsearch/model/UntagResourceRequest.h>
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
using namespace Aws::BackupSearch;
using namespace Aws::BackupSearch::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace BackupSearch {
const char SERVICE_NAME[] = "backup-search";
const char ALLOCATION_TAG[] = "BackupSearchClient";
}  // namespace BackupSearch
}  // namespace Aws
const char* BackupSearchClient::GetServiceName() { return SERVICE_NAME; }
const char* BackupSearchClient::GetAllocationTag() { return ALLOCATION_TAG; }

BackupSearchClient::BackupSearchClient(const BackupSearch::BackupSearchClientConfiguration& clientConfiguration,
                                       std::shared_ptr<BackupSearchEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupSearchClient::BackupSearchClient(const AWSCredentials& credentials,
                                       std::shared_ptr<BackupSearchEndpointProviderBase> endpointProvider,
                                       const BackupSearch::BackupSearchClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupSearchClient::BackupSearchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<BackupSearchEndpointProviderBase> endpointProvider,
                                       const BackupSearch::BackupSearchClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<BackupSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
BackupSearchClient::BackupSearchClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BackupSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupSearchClient::BackupSearchClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BackupSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

BackupSearchClient::BackupSearchClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<BackupSearchErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<BackupSearchEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
BackupSearchClient::~BackupSearchClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<BackupSearchEndpointProviderBase>& BackupSearchClient::accessEndpointProvider() { return m_endpointProvider; }

void BackupSearchClient::init(const BackupSearch::BackupSearchClientConfiguration& config) {
  AWSClient::SetServiceClientName("BackupSearch");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "backup-search");
}

void BackupSearchClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
BackupSearchClient::InvokeOperationOutcome BackupSearchClient::InvokeServiceOperation(
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

GetSearchJobOutcome BackupSearchClient::GetSearchJob(const GetSearchJobRequest& request) const {
  if (!request.SearchJobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSearchJob", "Required field: SearchJobIdentifier, is not set");
    return GetSearchJobOutcome(Aws::Client::AWSError<BackupSearchErrors>(BackupSearchErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [SearchJobIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSearchJobIdentifier());
  };

  return GetSearchJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetSearchResultExportJobOutcome BackupSearchClient::GetSearchResultExportJob(const GetSearchResultExportJobRequest& request) const {
  if (!request.ExportJobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetSearchResultExportJob", "Required field: ExportJobIdentifier, is not set");
    return GetSearchResultExportJobOutcome(Aws::Client::AWSError<BackupSearchErrors>(
        BackupSearchErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ExportJobIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/export-search-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExportJobIdentifier());
  };

  return GetSearchResultExportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSearchJobBackupsOutcome BackupSearchClient::ListSearchJobBackups(const ListSearchJobBackupsRequest& request) const {
  if (!request.SearchJobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSearchJobBackups", "Required field: SearchJobIdentifier, is not set");
    return ListSearchJobBackupsOutcome(Aws::Client::AWSError<BackupSearchErrors>(BackupSearchErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [SearchJobIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSearchJobIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/backups");
  };

  return ListSearchJobBackupsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSearchJobResultsOutcome BackupSearchClient::ListSearchJobResults(const ListSearchJobResultsRequest& request) const {
  if (!request.SearchJobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListSearchJobResults", "Required field: SearchJobIdentifier, is not set");
    return ListSearchJobResultsOutcome(Aws::Client::AWSError<BackupSearchErrors>(BackupSearchErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [SearchJobIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSearchJobIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-results");
  };

  return ListSearchJobResultsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSearchJobsOutcome BackupSearchClient::ListSearchJobs(const ListSearchJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-jobs");
  };

  return ListSearchJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSearchResultExportJobsOutcome BackupSearchClient::ListSearchResultExportJobs(const ListSearchResultExportJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/export-search-jobs");
  };

  return ListSearchResultExportJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome BackupSearchClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<BackupSearchErrors>(BackupSearchErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartSearchJobOutcome BackupSearchClient::StartSearchJob(const StartSearchJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-jobs");
  };

  return StartSearchJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartSearchResultExportJobOutcome BackupSearchClient::StartSearchResultExportJob(const StartSearchResultExportJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/export-search-jobs");
  };

  return StartSearchResultExportJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StopSearchJobOutcome BackupSearchClient::StopSearchJob(const StopSearchJobRequest& request) const {
  if (!request.SearchJobIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopSearchJob", "Required field: SearchJobIdentifier, is not set");
    return StopSearchJobOutcome(Aws::Client::AWSError<BackupSearchErrors>(BackupSearchErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [SearchJobIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/search-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSearchJobIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/actions/cancel");
  };

  return StopSearchJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

TagResourceOutcome BackupSearchClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<BackupSearchErrors>(BackupSearchErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome BackupSearchClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BackupSearchErrors>(BackupSearchErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<BackupSearchErrors>(BackupSearchErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}
