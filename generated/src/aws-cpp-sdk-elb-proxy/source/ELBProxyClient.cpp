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
#include <aws/elb-proxy/ELBProxyClient.h>
#include <aws/elb-proxy/ELBProxyEndpointProvider.h>
#include <aws/elb-proxy/ELBProxyErrorMarshaller.h>
#include <aws/elb-proxy/model/AssociateCertificateRequest.h>
#include <aws/elb-proxy/model/CreateProxyRequest.h>
#include <aws/elb-proxy/model/DeleteProxyRequest.h>
#include <aws/elb-proxy/model/DisassociateCertificateRequest.h>
#include <aws/elb-proxy/model/GetProxyAttributesRequest.h>
#include <aws/elb-proxy/model/GetProxyConfigurationContentsRequest.h>
#include <aws/elb-proxy/model/GetProxyRequest.h>
#include <aws/elb-proxy/model/GetProxyUpdateRequest.h>
#include <aws/elb-proxy/model/ListCertificateAssociationsRequest.h>
#include <aws/elb-proxy/model/ListProxiesRequest.h>
#include <aws/elb-proxy/model/ListProxyUpdatesRequest.h>
#include <aws/elb-proxy/model/ListProxyVersionsRequest.h>
#include <aws/elb-proxy/model/ListTagsForResourceRequest.h>
#include <aws/elb-proxy/model/TagResourceRequest.h>
#include <aws/elb-proxy/model/UntagResourceRequest.h>
#include <aws/elb-proxy/model/UpdateProxyAttributesRequest.h>
#include <aws/elb-proxy/model/UpdateProxyConfigurationRequest.h>
#include <aws/elb-proxy/model/UpdateProxyNetworkConfigurationRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::ELBProxy;
using namespace Aws::ELBProxy::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ELBProxy {
const char SERVICE_NAME[] = "elasticloadbalancing";
const char ALLOCATION_TAG[] = "ELBProxyClient";
}  // namespace ELBProxy
}  // namespace Aws
const char* ELBProxyClient::GetServiceName() { return SERVICE_NAME; }
const char* ELBProxyClient::GetAllocationTag() { return ALLOCATION_TAG; }

ELBProxyClient::ELBProxyClient(const ELBProxy::ELBProxyClientConfiguration& clientConfiguration,
                               std::shared_ptr<ELBProxyEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ELBProxyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ELBProxyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ELBProxyClient::ELBProxyClient(const AWSCredentials& credentials, std::shared_ptr<ELBProxyEndpointProviderBase> endpointProvider,
                               const ELBProxy::ELBProxyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ELBProxyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ELBProxyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ELBProxyClient::ELBProxyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<ELBProxyEndpointProviderBase> endpointProvider,
                               const ELBProxy::ELBProxyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ELBProxyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ELBProxyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ELBProxyClient::ELBProxyClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                                 Aws::MakeShared<DefaultAWSCredentialsProviderChain>(
                                                     ALLOCATION_TAG, clientConfiguration.ResolveCredentialProviderConfig()),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ELBProxyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ELBProxyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ELBProxyClient::ELBProxyClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ELBProxyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ELBProxyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ELBProxyClient::ELBProxyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ELBProxyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ELBProxyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ELBProxyClient::~ELBProxyClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ELBProxyEndpointProviderBase>& ELBProxyClient::accessEndpointProvider() { return m_endpointProvider; }

void ELBProxyClient::init(const ELBProxy::ELBProxyClientConfiguration& config) {
  AWSClient::SetServiceClientName("ELB Proxy");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "elasticloadbalancing");
}

void ELBProxyClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ELBProxyClient::InvokeOperationOutcome ELBProxyClient::InvokeServiceOperation(const AmazonWebServiceRequest& request,
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

  return Aws::Client::AsyncOperationState::MakeCallWithTiming<InvokeOperationOutcome>(
      request, std::move(span),
      [&]() -> InvokeOperationOutcome {
        auto endpointResolutionOutcome = TracingUtils::MakeCallWithTiming<ResolveEndpointOutcome>(
            [&]() -> ResolveEndpointOutcome { return m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams()); },
            TracingUtils::SMITHY_CLIENT_ENDPOINT_RESOLUTION_METRIC, *meter,
            {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});

        AWS_OPERATION_CHECK_SUCCESS_DYNAMIC(endpointResolutionOutcome, operationName, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE,
                                            endpointResolutionOutcome.GetError().GetMessage());

        endpointResolutionOutcome.GetResult().AddPathSegments("/service/ELBProxy/operation/");
        endpointResolutionOutcome.GetResult().AddPathSegment(operationName);

        return InvokeOperationOutcome{MakeRequest(request, endpointResolutionOutcome.GetResult(), httpMethod, Aws::Auth::SIGV4_SIGNER)};
      },
      TracingUtils::SMITHY_CLIENT_DURATION_METRIC, meter,
      {{TracingUtils::SMITHY_METHOD_DIMENSION, operationName}, {TracingUtils::SMITHY_SERVICE_DIMENSION, serviceName}});
}

AssociateCertificateOutcome ELBProxyClient::AssociateCertificate(const AssociateCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? AssociateCertificateOutcome(result.GetResultWithOwnership())
                            : AssociateCertificateOutcome(std::move(result.GetError()));
}

CreateProxyOutcome ELBProxyClient::CreateProxy(const CreateProxyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateProxyOutcome(result.GetResultWithOwnership()) : CreateProxyOutcome(std::move(result.GetError()));
}

DeleteProxyOutcome ELBProxyClient::DeleteProxy(const DeleteProxyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DeleteProxyOutcome(result.GetResultWithOwnership()) : DeleteProxyOutcome(std::move(result.GetError()));
}

DisassociateCertificateOutcome ELBProxyClient::DisassociateCertificate(const DisassociateCertificateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? DisassociateCertificateOutcome(result.GetResultWithOwnership())
                            : DisassociateCertificateOutcome(std::move(result.GetError()));
}

GetProxyOutcome ELBProxyClient::GetProxy(const GetProxyRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetProxyOutcome(result.GetResultWithOwnership()) : GetProxyOutcome(std::move(result.GetError()));
}

GetProxyAttributesOutcome ELBProxyClient::GetProxyAttributes(const GetProxyAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetProxyAttributesOutcome(result.GetResultWithOwnership())
                            : GetProxyAttributesOutcome(std::move(result.GetError()));
}

GetProxyConfigurationContentsOutcome ELBProxyClient::GetProxyConfigurationContents(
    const GetProxyConfigurationContentsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetProxyConfigurationContentsOutcome(result.GetResultWithOwnership())
                            : GetProxyConfigurationContentsOutcome(std::move(result.GetError()));
}

GetProxyUpdateOutcome ELBProxyClient::GetProxyUpdate(const GetProxyUpdateRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetProxyUpdateOutcome(result.GetResultWithOwnership()) : GetProxyUpdateOutcome(std::move(result.GetError()));
}

ListCertificateAssociationsOutcome ELBProxyClient::ListCertificateAssociations(const ListCertificateAssociationsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCertificateAssociationsOutcome(result.GetResultWithOwnership())
                            : ListCertificateAssociationsOutcome(std::move(result.GetError()));
}

ListProxiesOutcome ELBProxyClient::ListProxies(const ListProxiesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProxiesOutcome(result.GetResultWithOwnership()) : ListProxiesOutcome(std::move(result.GetError()));
}

ListProxyUpdatesOutcome ELBProxyClient::ListProxyUpdates(const ListProxyUpdatesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProxyUpdatesOutcome(result.GetResultWithOwnership())
                            : ListProxyUpdatesOutcome(std::move(result.GetError()));
}

ListProxyVersionsOutcome ELBProxyClient::ListProxyVersions(const ListProxyVersionsRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListProxyVersionsOutcome(result.GetResultWithOwnership())
                            : ListProxyVersionsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ELBProxyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

TagResourceOutcome ELBProxyClient::TagResource(const TagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ELBProxyClient::UntagResource(const UntagResourceRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateProxyAttributesOutcome ELBProxyClient::UpdateProxyAttributes(const UpdateProxyAttributesRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProxyAttributesOutcome(result.GetResultWithOwnership())
                            : UpdateProxyAttributesOutcome(std::move(result.GetError()));
}

UpdateProxyConfigurationOutcome ELBProxyClient::UpdateProxyConfiguration(const UpdateProxyConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProxyConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateProxyConfigurationOutcome(std::move(result.GetError()));
}

UpdateProxyNetworkConfigurationOutcome ELBProxyClient::UpdateProxyNetworkConfiguration(
    const UpdateProxyNetworkConfigurationRequest& request) const {
  auto result = InvokeServiceOperation(request, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateProxyNetworkConfigurationOutcome(result.GetResultWithOwnership())
                            : UpdateProxyNetworkConfigurationOutcome(std::move(result.GetError()));
}
