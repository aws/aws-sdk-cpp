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

  return BatchGetCaseRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return BatchGetFieldOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return BatchPutFieldOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return CreateCaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateCaseRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainOutcome ConnectCasesClient::CreateDomain(const CreateDomainRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  };

  return CreateDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateFieldOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateLayoutOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateRelatedItemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return CreateTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return DeleteCaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteCaseRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteFieldOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteLayoutOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteRelatedItemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return DeleteTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return GetCaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetCaseAuditEventsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetCaseEventConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetDomainOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetLayoutOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return GetTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ListCaseRulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ListCasesForContactOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ListDomainsOutcome ConnectCasesClient::ListDomains(const ListDomainsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains-list");
  };

  return ListDomainsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ListFieldOptionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ListFieldsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ListLayoutsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
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

  return ListTemplatesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return PutCaseEventConfigurationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return SearchAllRelatedItemsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return SearchCasesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return SearchRelatedItemsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
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

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
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

  return UpdateCaseOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateCaseRuleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateFieldOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateLayoutOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateRelatedItemOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
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

  return UpdateTemplateOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
