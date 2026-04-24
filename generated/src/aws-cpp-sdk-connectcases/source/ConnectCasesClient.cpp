/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connectcases/ConnectCasesClient.h>
#include <aws/connectcases/ConnectCasesEndpointProvider.h>
#include <aws/connectcases/ConnectCasesErrorMarshaller.h>
#include <aws/connectcases/model/BatchGetCaseRuleRequest.h>
#include <aws/connectcases/model/BatchGetFieldRequest.h>
#include <aws/connectcases/model/BatchPutFieldOptionsRequest.h>
#include <aws/connectcases/model/CreateCaseRequest.h>
#include <aws/connectcases/model/CreateCaseRuleRequest.h>
#include <aws/connectcases/model/CreateDomainRequest.h>
#include <aws/connectcases/model/CreateFieldRequest.h>
#include <aws/connectcases/model/CreateLayoutRequest.h>
#include <aws/connectcases/model/CreateRelatedItemRequest.h>
#include <aws/connectcases/model/CreateTemplateRequest.h>
#include <aws/connectcases/model/DeleteCaseRequest.h>
#include <aws/connectcases/model/DeleteCaseRuleRequest.h>
#include <aws/connectcases/model/DeleteDomainRequest.h>
#include <aws/connectcases/model/DeleteFieldRequest.h>
#include <aws/connectcases/model/DeleteLayoutRequest.h>
#include <aws/connectcases/model/DeleteRelatedItemRequest.h>
#include <aws/connectcases/model/DeleteTemplateRequest.h>
#include <aws/connectcases/model/GetCaseAuditEventsRequest.h>
#include <aws/connectcases/model/GetCaseEventConfigurationRequest.h>
#include <aws/connectcases/model/GetCaseRequest.h>
#include <aws/connectcases/model/GetDomainRequest.h>
#include <aws/connectcases/model/GetLayoutRequest.h>
#include <aws/connectcases/model/GetTemplateRequest.h>
#include <aws/connectcases/model/ListCaseRulesRequest.h>
#include <aws/connectcases/model/ListCasesForContactRequest.h>
#include <aws/connectcases/model/ListDomainsRequest.h>
#include <aws/connectcases/model/ListFieldOptionsRequest.h>
#include <aws/connectcases/model/ListFieldsRequest.h>
#include <aws/connectcases/model/ListLayoutsRequest.h>
#include <aws/connectcases/model/ListTagsForResourceRequest.h>
#include <aws/connectcases/model/ListTemplatesRequest.h>
#include <aws/connectcases/model/PutCaseEventConfigurationRequest.h>
#include <aws/connectcases/model/SearchAllRelatedItemsRequest.h>
#include <aws/connectcases/model/SearchCasesRequest.h>
#include <aws/connectcases/model/SearchRelatedItemsRequest.h>
#include <aws/connectcases/model/TagResourceRequest.h>
#include <aws/connectcases/model/UntagResourceRequest.h>
#include <aws/connectcases/model/UpdateCaseRequest.h>
#include <aws/connectcases/model/UpdateCaseRuleRequest.h>
#include <aws/connectcases/model/UpdateFieldRequest.h>
#include <aws/connectcases/model/UpdateLayoutRequest.h>
#include <aws/connectcases/model/UpdateRelatedItemRequest.h>
#include <aws/connectcases/model/UpdateTemplateRequest.h>
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
using namespace Aws::ConnectCases;
using namespace Aws::ConnectCases::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace ConnectCases {
const char SERVICE_NAME[] = "cases";
const char ALLOCATION_TAG[] = "ConnectCasesClient";
}  // namespace ConnectCases
}  // namespace Aws
const char* ConnectCasesClient::GetServiceName() { return SERVICE_NAME; }
const char* ConnectCasesClient::GetAllocationTag() { return ALLOCATION_TAG; }

ConnectCasesClient::ConnectCasesClient(const ConnectCases::ConnectCasesClientConfiguration& clientConfiguration,
                                       std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCasesClient::ConnectCasesClient(const AWSCredentials& credentials,
                                       std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider,
                                       const ConnectCases::ConnectCasesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCasesClient::ConnectCasesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<ConnectCasesEndpointProviderBase> endpointProvider,
                                       const ConnectCases::ConnectCasesClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
ConnectCasesClient::ConnectCasesClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCasesClient::ConnectCasesClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

ConnectCasesClient::ConnectCasesClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<ConnectCasesErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<ConnectCasesEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
ConnectCasesClient::~ConnectCasesClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<ConnectCasesEndpointProviderBase>& ConnectCasesClient::accessEndpointProvider() { return m_endpointProvider; }

void ConnectCasesClient::init(const ConnectCases::ConnectCasesClientConfiguration& config) {
  AWSClient::SetServiceClientName("ConnectCases");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "cases");
}

void ConnectCasesClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
ConnectCasesClient::InvokeOperationOutcome ConnectCasesClient::InvokeServiceOperation(
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

BatchGetCaseRuleOutcome ConnectCasesClient::BatchGetCaseRule(const BatchGetCaseRuleRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetCaseRule", "Required field: DomainId, is not set");
    return BatchGetCaseRuleOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules-batch");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetCaseRuleOutcome(result.GetResultWithOwnership())
                            : BatchGetCaseRuleOutcome(std::move(result.GetError()));
}

BatchGetFieldOutcome ConnectCasesClient::BatchGetField(const BatchGetFieldRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchGetField", "Required field: DomainId, is not set");
    return BatchGetFieldOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fields-batch");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? BatchGetFieldOutcome(result.GetResultWithOwnership()) : BatchGetFieldOutcome(std::move(result.GetError()));
}

BatchPutFieldOptionsOutcome ConnectCasesClient::BatchPutFieldOptions(const BatchPutFieldOptionsRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutFieldOptions", "Required field: DomainId, is not set");
    return BatchPutFieldOptionsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [DomainId]", false));
  }
  if (!request.FieldIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchPutFieldOptions", "Required field: FieldId, is not set");
    return BatchPutFieldOptionsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [FieldId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fields/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFieldId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/options");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? BatchPutFieldOptionsOutcome(result.GetResultWithOwnership())
                            : BatchPutFieldOptionsOutcome(std::move(result.GetError()));
}

CreateCaseOutcome ConnectCasesClient::CreateCase(const CreateCaseRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCase", "Required field: DomainId, is not set");
    return CreateCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cases");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCaseOutcome(result.GetResultWithOwnership()) : CreateCaseOutcome(std::move(result.GetError()));
}

CreateCaseRuleOutcome ConnectCasesClient::CreateCaseRule(const CreateCaseRuleRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateCaseRule", "Required field: DomainId, is not set");
    return CreateCaseRuleOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/case-rules");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateCaseRuleOutcome(result.GetResultWithOwnership()) : CreateCaseRuleOutcome(std::move(result.GetError()));
}

CreateDomainOutcome ConnectCasesClient::CreateDomain(const CreateDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateDomainOutcome(result.GetResultWithOwnership()) : CreateDomainOutcome(std::move(result.GetError()));
}

CreateFieldOutcome ConnectCasesClient::CreateField(const CreateFieldRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateField", "Required field: DomainId, is not set");
    return CreateFieldOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fields");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateFieldOutcome(result.GetResultWithOwnership()) : CreateFieldOutcome(std::move(result.GetError()));
}

CreateLayoutOutcome ConnectCasesClient::CreateLayout(const CreateLayoutRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateLayout", "Required field: DomainId, is not set");
    return CreateLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/layouts");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateLayoutOutcome(result.GetResultWithOwnership()) : CreateLayoutOutcome(std::move(result.GetError()));
}

CreateRelatedItemOutcome ConnectCasesClient::CreateRelatedItem(const CreateRelatedItemRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRelatedItem", "Required field: DomainId, is not set");
    return CreateRelatedItemOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DomainId]", false));
  }
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateRelatedItem", "Required field: CaseId, is not set");
    return CreateRelatedItemOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/related-items/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateRelatedItemOutcome(result.GetResultWithOwnership())
                            : CreateRelatedItemOutcome(std::move(result.GetError()));
}

CreateTemplateOutcome ConnectCasesClient::CreateTemplate(const CreateTemplateRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTemplate", "Required field: DomainId, is not set");
    return CreateTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? CreateTemplateOutcome(result.GetResultWithOwnership()) : CreateTemplateOutcome(std::move(result.GetError()));
}

DeleteCaseOutcome ConnectCasesClient::DeleteCase(const DeleteCaseRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCase", "Required field: DomainId, is not set");
    return DeleteCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainId]", false));
  }
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCase", "Required field: CaseId, is not set");
    return DeleteCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCaseOutcome(result.GetResultWithOwnership()) : DeleteCaseOutcome(std::move(result.GetError()));
}

DeleteCaseRuleOutcome ConnectCasesClient::DeleteCaseRule(const DeleteCaseRuleRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCaseRule", "Required field: DomainId, is not set");
    return DeleteCaseRuleOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainId]", false));
  }
  if (!request.CaseRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteCaseRule", "Required field: CaseRuleId, is not set");
    return DeleteCaseRuleOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [CaseRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/case-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseRuleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteCaseRuleOutcome(result.GetResultWithOwnership()) : DeleteCaseRuleOutcome(std::move(result.GetError()));
}

DeleteDomainOutcome ConnectCasesClient::DeleteDomain(const DeleteDomainRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomain", "Required field: DomainId, is not set");
    return DeleteDomainOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteDomainOutcome(result.GetResultWithOwnership()) : DeleteDomainOutcome(std::move(result.GetError()));
}

DeleteFieldOutcome ConnectCasesClient::DeleteField(const DeleteFieldRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteField", "Required field: DomainId, is not set");
    return DeleteFieldOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainId]", false));
  }
  if (!request.FieldIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteField", "Required field: FieldId, is not set");
    return DeleteFieldOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FieldId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fields/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFieldId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteFieldOutcome(result.GetResultWithOwnership()) : DeleteFieldOutcome(std::move(result.GetError()));
}

DeleteLayoutOutcome ConnectCasesClient::DeleteLayout(const DeleteLayoutRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLayout", "Required field: DomainId, is not set");
    return DeleteLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainId]", false));
  }
  if (!request.LayoutIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteLayout", "Required field: LayoutId, is not set");
    return DeleteLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [LayoutId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/layouts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayoutId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteLayoutOutcome(result.GetResultWithOwnership()) : DeleteLayoutOutcome(std::move(result.GetError()));
}

DeleteRelatedItemOutcome ConnectCasesClient::DeleteRelatedItem(const DeleteRelatedItemRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRelatedItem", "Required field: DomainId, is not set");
    return DeleteRelatedItemOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DomainId]", false));
  }
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRelatedItem", "Required field: CaseId, is not set");
    return DeleteRelatedItemOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [CaseId]", false));
  }
  if (!request.RelatedItemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRelatedItem", "Required field: RelatedItemId, is not set");
    return DeleteRelatedItemOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [RelatedItemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/related-items/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRelatedItemId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteRelatedItemOutcome(result.GetResultWithOwnership())
                            : DeleteRelatedItemOutcome(std::move(result.GetError()));
}

DeleteTemplateOutcome ConnectCasesClient::DeleteTemplate(const DeleteTemplateRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: DomainId, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTemplate", "Required field: TemplateId, is not set");
    return DeleteTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? DeleteTemplateOutcome(result.GetResultWithOwnership()) : DeleteTemplateOutcome(std::move(result.GetError()));
}

GetCaseOutcome ConnectCasesClient::GetCase(const GetCaseRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCase", "Required field: CaseId, is not set");
    return GetCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [CaseId]", false));
  }
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCase", "Required field: DomainId, is not set");
    return GetCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCaseOutcome(result.GetResultWithOwnership()) : GetCaseOutcome(std::move(result.GetError()));
}

GetCaseAuditEventsOutcome ConnectCasesClient::GetCaseAuditEvents(const GetCaseAuditEventsRequest& request) const {
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCaseAuditEvents", "Required field: CaseId, is not set");
    return GetCaseAuditEventsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [CaseId]", false));
  }
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCaseAuditEvents", "Required field: DomainId, is not set");
    return GetCaseAuditEventsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/audit-history");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCaseAuditEventsOutcome(result.GetResultWithOwnership())
                            : GetCaseAuditEventsOutcome(std::move(result.GetError()));
}

GetCaseEventConfigurationOutcome ConnectCasesClient::GetCaseEventConfiguration(const GetCaseEventConfigurationRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCaseEventConfiguration", "Required field: DomainId, is not set");
    return GetCaseEventConfigurationOutcome(Aws::Client::AWSError<ConnectCasesErrors>(
        ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/case-event-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetCaseEventConfigurationOutcome(result.GetResultWithOwnership())
                            : GetCaseEventConfigurationOutcome(std::move(result.GetError()));
}

GetDomainOutcome ConnectCasesClient::GetDomain(const GetDomainRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomain", "Required field: DomainId, is not set");
    return GetDomainOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetDomainOutcome(result.GetResultWithOwnership()) : GetDomainOutcome(std::move(result.GetError()));
}

GetLayoutOutcome ConnectCasesClient::GetLayout(const GetLayoutRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLayout", "Required field: DomainId, is not set");
    return GetLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [DomainId]", false));
  }
  if (!request.LayoutIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetLayout", "Required field: LayoutId, is not set");
    return GetLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [LayoutId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/layouts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayoutId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetLayoutOutcome(result.GetResultWithOwnership()) : GetLayoutOutcome(std::move(result.GetError()));
}

GetTemplateOutcome ConnectCasesClient::GetTemplate(const GetTemplateRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: DomainId, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTemplate", "Required field: TemplateId, is not set");
    return GetTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? GetTemplateOutcome(result.GetResultWithOwnership()) : GetTemplateOutcome(std::move(result.GetError()));
}

ListCaseRulesOutcome ConnectCasesClient::ListCaseRules(const ListCaseRulesRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCaseRules", "Required field: DomainId, is not set");
    return ListCaseRulesOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/rules-list/");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCaseRulesOutcome(result.GetResultWithOwnership()) : ListCaseRulesOutcome(std::move(result.GetError()));
}

ListCasesForContactOutcome ConnectCasesClient::ListCasesForContact(const ListCasesForContactRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCasesForContact", "Required field: DomainId, is not set");
    return ListCasesForContactOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/list-cases-for-contact");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListCasesForContactOutcome(result.GetResultWithOwnership())
                            : ListCasesForContactOutcome(std::move(result.GetError()));
}

ListDomainsOutcome ConnectCasesClient::ListDomains(const ListDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListDomainsOutcome(result.GetResultWithOwnership()) : ListDomainsOutcome(std::move(result.GetError()));
}

ListFieldOptionsOutcome ConnectCasesClient::ListFieldOptions(const ListFieldOptionsRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFieldOptions", "Required field: DomainId, is not set");
    return ListFieldOptionsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [DomainId]", false));
  }
  if (!request.FieldIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFieldOptions", "Required field: FieldId, is not set");
    return ListFieldOptionsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [FieldId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fields/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFieldId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/options-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFieldOptionsOutcome(result.GetResultWithOwnership())
                            : ListFieldOptionsOutcome(std::move(result.GetError()));
}

ListFieldsOutcome ConnectCasesClient::ListFields(const ListFieldsRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListFields", "Required field: DomainId, is not set");
    return ListFieldsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fields-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListFieldsOutcome(result.GetResultWithOwnership()) : ListFieldsOutcome(std::move(result.GetError()));
}

ListLayoutsOutcome ConnectCasesClient::ListLayouts(const ListLayoutsRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListLayouts", "Required field: DomainId, is not set");
    return ListLayoutsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/layouts-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListLayoutsOutcome(result.GetResultWithOwnership()) : ListLayoutsOutcome(std::move(result.GetError()));
}

ListTagsForResourceOutcome ConnectCasesClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: Arn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET);
  return result.IsSuccess() ? ListTagsForResourceOutcome(result.GetResultWithOwnership())
                            : ListTagsForResourceOutcome(std::move(result.GetError()));
}

ListTemplatesOutcome ConnectCasesClient::ListTemplates(const ListTemplatesRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTemplates", "Required field: DomainId, is not set");
    return ListTemplatesOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates-list");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? ListTemplatesOutcome(result.GetResultWithOwnership()) : ListTemplatesOutcome(std::move(result.GetError()));
}

PutCaseEventConfigurationOutcome ConnectCasesClient::PutCaseEventConfiguration(const PutCaseEventConfigurationRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutCaseEventConfiguration", "Required field: DomainId, is not set");
    return PutCaseEventConfigurationOutcome(Aws::Client::AWSError<ConnectCasesErrors>(
        ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/case-event-configuration");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? PutCaseEventConfigurationOutcome(result.GetResultWithOwnership())
                            : PutCaseEventConfigurationOutcome(std::move(result.GetError()));
}

SearchAllRelatedItemsOutcome ConnectCasesClient::SearchAllRelatedItems(const SearchAllRelatedItemsRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchAllRelatedItems", "Required field: DomainId, is not set");
    return SearchAllRelatedItemsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(
        ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/related-items-search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchAllRelatedItemsOutcome(result.GetResultWithOwnership())
                            : SearchAllRelatedItemsOutcome(std::move(result.GetError()));
}

SearchCasesOutcome ConnectCasesClient::SearchCases(const SearchCasesRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchCases", "Required field: DomainId, is not set");
    return SearchCasesOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cases-search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchCasesOutcome(result.GetResultWithOwnership()) : SearchCasesOutcome(std::move(result.GetError()));
}

SearchRelatedItemsOutcome ConnectCasesClient::SearchRelatedItems(const SearchRelatedItemsRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchRelatedItems", "Required field: DomainId, is not set");
    return SearchRelatedItemsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainId]", false));
  }
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SearchRelatedItems", "Required field: CaseId, is not set");
    return SearchRelatedItemsOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/related-items-search");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? SearchRelatedItemsOutcome(result.GetResultWithOwnership())
                            : SearchRelatedItemsOutcome(std::move(result.GetError()));
}

TagResourceOutcome ConnectCasesClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: Arn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? TagResourceOutcome(result.GetResultWithOwnership()) : TagResourceOutcome(std::move(result.GetError()));
}

UntagResourceOutcome ConnectCasesClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: Arn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Arn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE);
  return result.IsSuccess() ? UntagResourceOutcome(result.GetResultWithOwnership()) : UntagResourceOutcome(std::move(result.GetError()));
}

UpdateCaseOutcome ConnectCasesClient::UpdateCase(const UpdateCaseRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCase", "Required field: DomainId, is not set");
    return UpdateCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [DomainId]", false));
  }
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCase", "Required field: CaseId, is not set");
    return UpdateCaseOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [CaseId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateCaseOutcome(result.GetResultWithOwnership()) : UpdateCaseOutcome(std::move(result.GetError()));
}

UpdateCaseRuleOutcome ConnectCasesClient::UpdateCaseRule(const UpdateCaseRuleRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCaseRule", "Required field: DomainId, is not set");
    return UpdateCaseRuleOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainId]", false));
  }
  if (!request.CaseRuleIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateCaseRule", "Required field: CaseRuleId, is not set");
    return UpdateCaseRuleOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [CaseRuleId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/case-rules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseRuleId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateCaseRuleOutcome(result.GetResultWithOwnership()) : UpdateCaseRuleOutcome(std::move(result.GetError()));
}

UpdateFieldOutcome ConnectCasesClient::UpdateField(const UpdateFieldRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateField", "Required field: DomainId, is not set");
    return UpdateFieldOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [DomainId]", false));
  }
  if (!request.FieldIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateField", "Required field: FieldId, is not set");
    return UpdateFieldOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [FieldId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/fields/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFieldId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateFieldOutcome(result.GetResultWithOwnership()) : UpdateFieldOutcome(std::move(result.GetError()));
}

UpdateLayoutOutcome ConnectCasesClient::UpdateLayout(const UpdateLayoutRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLayout", "Required field: DomainId, is not set");
    return UpdateLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [DomainId]", false));
  }
  if (!request.LayoutIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateLayout", "Required field: LayoutId, is not set");
    return UpdateLayoutOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [LayoutId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/layouts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLayoutId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateLayoutOutcome(result.GetResultWithOwnership()) : UpdateLayoutOutcome(std::move(result.GetError()));
}

UpdateRelatedItemOutcome ConnectCasesClient::UpdateRelatedItem(const UpdateRelatedItemRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRelatedItem", "Required field: DomainId, is not set");
    return UpdateRelatedItemOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [DomainId]", false));
  }
  if (!request.CaseIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRelatedItem", "Required field: CaseId, is not set");
    return UpdateRelatedItemOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [CaseId]", false));
  }
  if (!request.RelatedItemIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRelatedItem", "Required field: RelatedItemId, is not set");
    return UpdateRelatedItemOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [RelatedItemId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/cases/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCaseId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/related-items/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRelatedItemId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateRelatedItemOutcome(result.GetResultWithOwnership())
                            : UpdateRelatedItemOutcome(std::move(result.GetError()));
}

UpdateTemplateOutcome ConnectCasesClient::UpdateTemplate(const UpdateTemplateRequest& request) const {
  if (!request.DomainIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: DomainId, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [DomainId]", false));
  }
  if (!request.TemplateIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTemplate", "Required field: TemplateId, is not set");
    return UpdateTemplateOutcome(Aws::Client::AWSError<ConnectCasesErrors>(ConnectCasesErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [TemplateId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/templates/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTemplateId());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT);
  return result.IsSuccess() ? UpdateTemplateOutcome(result.GetResultWithOwnership()) : UpdateTemplateOutcome(std::move(result.GetError()));
}
