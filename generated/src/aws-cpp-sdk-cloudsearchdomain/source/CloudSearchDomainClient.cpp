/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearchdomain/CloudSearchDomainClient.h>
#include <aws/cloudsearchdomain/CloudSearchDomainEndpointProvider.h>
#include <aws/cloudsearchdomain/CloudSearchDomainErrorMarshaller.h>
#include <aws/cloudsearchdomain/model/SearchRequest.h>
#include <aws/cloudsearchdomain/model/SuggestRequest.h>
#include <aws/cloudsearchdomain/model/UploadDocumentsRequest.h>
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
using namespace Aws::CloudSearchDomain;
using namespace Aws::CloudSearchDomain::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace CloudSearchDomain {
const char SERVICE_NAME[] = "cloudsearch";
const char ALLOCATION_TAG[] = "CloudSearchDomainClient";
}  // namespace CloudSearchDomain
}  // namespace Aws
const char* CloudSearchDomainClient::GetServiceName() { return SERVICE_NAME; }
const char* CloudSearchDomainClient::GetAllocationTag() { return ALLOCATION_TAG; }

CloudSearchDomainClient::CloudSearchDomainClient(const CloudSearchDomain::CloudSearchDomainClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<CloudSearchDomainEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudSearchDomainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudSearchDomainClient::CloudSearchDomainClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<CloudSearchDomainEndpointProviderBase> endpointProvider,
                                                 const CloudSearchDomain::CloudSearchDomainClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudSearchDomainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudSearchDomainClient::CloudSearchDomainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<CloudSearchDomainEndpointProviderBase> endpointProvider,
                                                 const CloudSearchDomain::CloudSearchDomainClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<CloudSearchDomainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
CloudSearchDomainClient::CloudSearchDomainClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudSearchDomainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudSearchDomainClient::CloudSearchDomainClient(const AWSCredentials& credentials,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(
                    ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials), SERVICE_NAME,
                    Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudSearchDomainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

CloudSearchDomainClient::CloudSearchDomainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<Aws::Auth::DefaultAuthSignerProvider>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                                      Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<CloudSearchDomainEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
CloudSearchDomainClient::~CloudSearchDomainClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<CloudSearchDomainEndpointProviderBase>& CloudSearchDomainClient::accessEndpointProvider() { return m_endpointProvider; }

void CloudSearchDomainClient::init(const CloudSearchDomain::CloudSearchDomainClientConfiguration& config) {
  AWSClient::SetServiceClientName("CloudSearch Domain");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cloudsearch");
}

void CloudSearchDomainClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
CloudSearchDomainClient::InvokeOperationOutcome CloudSearchDomainClient::InvokeServiceOperation(
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

SearchOutcome CloudSearchDomainClient::Search(const SearchRequest& request) const {
  if (!request.QueryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Search", "Required field: Query, is not set");
    return SearchOutcome(Aws::Client::AWSError<CloudSearchDomainErrors>(CloudSearchDomainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Query]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-01-01/search");
    ss.str("?format=sdk&pretty=true");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return SearchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

SuggestOutcome CloudSearchDomainClient::Suggest(const SuggestRequest& request) const {
  if (!request.QueryHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Suggest", "Required field: Query, is not set");
    return SuggestOutcome(Aws::Client::AWSError<CloudSearchDomainErrors>(CloudSearchDomainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Query]", false));
  }
  if (!request.SuggesterHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("Suggest", "Required field: Suggester, is not set");
    return SuggestOutcome(Aws::Client::AWSError<CloudSearchDomainErrors>(CloudSearchDomainErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Suggester]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-01-01/suggest");
    ss.str("?format=sdk&pretty=true");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return SuggestOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

UploadDocumentsOutcome CloudSearchDomainClient::UploadDocuments(const UploadDocumentsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    Aws::StringStream ss;
    endpointResolutionOutcome.GetResult().AddPathSegments("/2013-01-01/documents/batch");
    ss.str("?format=sdk");
    endpointResolutionOutcome.GetResult().SetQueryString(ss.str());
  };

  return UploadDocumentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
