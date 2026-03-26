/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/AmplifyUIBuilderClient.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderEndpointProvider.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderErrorMarshaller.h>
#include <aws/amplifyuibuilder/model/CreateComponentRequest.h>
#include <aws/amplifyuibuilder/model/CreateFormRequest.h>
#include <aws/amplifyuibuilder/model/CreateThemeRequest.h>
#include <aws/amplifyuibuilder/model/DeleteComponentRequest.h>
#include <aws/amplifyuibuilder/model/DeleteFormRequest.h>
#include <aws/amplifyuibuilder/model/DeleteThemeRequest.h>
#include <aws/amplifyuibuilder/model/ExchangeCodeForTokenRequest.h>
#include <aws/amplifyuibuilder/model/ExportComponentsRequest.h>
#include <aws/amplifyuibuilder/model/ExportFormsRequest.h>
#include <aws/amplifyuibuilder/model/ExportThemesRequest.h>
#include <aws/amplifyuibuilder/model/GetCodegenJobRequest.h>
#include <aws/amplifyuibuilder/model/GetComponentRequest.h>
#include <aws/amplifyuibuilder/model/GetFormRequest.h>
#include <aws/amplifyuibuilder/model/GetMetadataRequest.h>
#include <aws/amplifyuibuilder/model/GetThemeRequest.h>
#include <aws/amplifyuibuilder/model/ListCodegenJobsRequest.h>
#include <aws/amplifyuibuilder/model/ListComponentsRequest.h>
#include <aws/amplifyuibuilder/model/ListFormsRequest.h>
#include <aws/amplifyuibuilder/model/ListTagsForResourceRequest.h>
#include <aws/amplifyuibuilder/model/ListThemesRequest.h>
#include <aws/amplifyuibuilder/model/PutMetadataFlagRequest.h>
#include <aws/amplifyuibuilder/model/RefreshTokenRequest.h>
#include <aws/amplifyuibuilder/model/StartCodegenJobRequest.h>
#include <aws/amplifyuibuilder/model/TagResourceRequest.h>
#include <aws/amplifyuibuilder/model/UntagResourceRequest.h>
#include <aws/amplifyuibuilder/model/UpdateComponentRequest.h>
#include <aws/amplifyuibuilder/model/UpdateFormRequest.h>
#include <aws/amplifyuibuilder/model/UpdateThemeRequest.h>
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
using namespace Aws::AmplifyUIBuilder;
using namespace Aws::AmplifyUIBuilder::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AmplifyUIBuilder {
const char SERVICE_NAME[] = "amplifyuibuilder";
const char ALLOCATION_TAG[] = "AmplifyUIBuilderClient";
}  // namespace AmplifyUIBuilder
}  // namespace Aws
const char* AmplifyUIBuilderClient::GetServiceName() { return SERVICE_NAME; }
const char* AmplifyUIBuilderClient::GetAllocationTag() { return ALLOCATION_TAG; }

AmplifyUIBuilderClient::AmplifyUIBuilderClient(const AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration& clientConfiguration,
                                               std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyUIBuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AmplifyUIBuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyUIBuilderClient::AmplifyUIBuilderClient(const AWSCredentials& credentials,
                                               std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> endpointProvider,
                                               const AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyUIBuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AmplifyUIBuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyUIBuilderClient::AmplifyUIBuilderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<AmplifyUIBuilderEndpointProviderBase> endpointProvider,
                                               const AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyUIBuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AmplifyUIBuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AmplifyUIBuilderClient::AmplifyUIBuilderClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyUIBuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AmplifyUIBuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyUIBuilderClient::AmplifyUIBuilderClient(const AWSCredentials& credentials,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyUIBuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AmplifyUIBuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyUIBuilderClient::AmplifyUIBuilderClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyUIBuilderErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AmplifyUIBuilderEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AmplifyUIBuilderClient::~AmplifyUIBuilderClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AmplifyUIBuilderEndpointProviderBase>& AmplifyUIBuilderClient::accessEndpointProvider() { return m_endpointProvider; }

void AmplifyUIBuilderClient::init(const AmplifyUIBuilder::AmplifyUIBuilderClientConfiguration& config) {
  AWSClient::SetServiceClientName("AmplifyUIBuilder");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "amplifyuibuilder");
}

void AmplifyUIBuilderClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AmplifyUIBuilderClient::InvokeOperationOutcome AmplifyUIBuilderClient::InvokeServiceOperation(
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

CreateComponentOutcome AmplifyUIBuilderClient::CreateComponent(const CreateComponentRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateComponent", "Required field: AppId, is not set");
    return CreateComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateComponent", "Required field: EnvironmentName, is not set");
    return CreateComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/components");
  };

  return CreateComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateFormOutcome AmplifyUIBuilderClient::CreateForm(const CreateFormRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateForm", "Required field: AppId, is not set");
    return CreateFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateForm", "Required field: EnvironmentName, is not set");
    return CreateFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/forms");
  };

  return CreateFormOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateThemeOutcome AmplifyUIBuilderClient::CreateTheme(const CreateThemeRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTheme", "Required field: AppId, is not set");
    return CreateThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateTheme", "Required field: EnvironmentName, is not set");
    return CreateThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes");
  };

  return CreateThemeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteComponentOutcome AmplifyUIBuilderClient::DeleteComponent(const DeleteComponentRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: AppId, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: EnvironmentName, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteComponent", "Required field: Id, is not set");
    return DeleteComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER,
                                                                                "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/components/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteFormOutcome AmplifyUIBuilderClient::DeleteForm(const DeleteFormRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteForm", "Required field: AppId, is not set");
    return DeleteFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteForm", "Required field: EnvironmentName, is not set");
    return DeleteFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteForm", "Required field: Id, is not set");
    return DeleteFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/forms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteFormOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteThemeOutcome AmplifyUIBuilderClient::DeleteTheme(const DeleteThemeRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: AppId, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: EnvironmentName, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteTheme", "Required field: Id, is not set");
    return DeleteThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return DeleteThemeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

ExchangeCodeForTokenOutcome AmplifyUIBuilderClient::ExchangeCodeForToken(const ExchangeCodeForTokenRequest& request) const {
  if (!request.ProviderHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExchangeCodeForToken", "Required field: Provider, is not set");
    return ExchangeCodeForTokenOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Provider]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tokens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(TokenProvidersMapper::GetNameForTokenProviders(request.GetProvider()));
  };

  return ExchangeCodeForTokenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

ExportComponentsOutcome AmplifyUIBuilderClient::ExportComponents(const ExportComponentsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportComponents", "Required field: AppId, is not set");
    return ExportComponentsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportComponents", "Required field: EnvironmentName, is not set");
    return ExportComponentsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/export/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/components");
  };

  return ExportComponentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ExportFormsOutcome AmplifyUIBuilderClient::ExportForms(const ExportFormsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportForms", "Required field: AppId, is not set");
    return ExportFormsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportForms", "Required field: EnvironmentName, is not set");
    return ExportFormsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/export/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/forms");
  };

  return ExportFormsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ExportThemesOutcome AmplifyUIBuilderClient::ExportThemes(const ExportThemesRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportThemes", "Required field: AppId, is not set");
    return ExportThemesOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ExportThemes", "Required field: EnvironmentName, is not set");
    return ExportThemesOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/export/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes");
  };

  return ExportThemesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetCodegenJobOutcome AmplifyUIBuilderClient::GetCodegenJob(const GetCodegenJobRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodegenJob", "Required field: AppId, is not set");
    return GetCodegenJobOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodegenJob", "Required field: EnvironmentName, is not set");
    return GetCodegenJobOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetCodegenJob", "Required field: Id, is not set");
    return GetCodegenJobOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER,
                                                                              "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/codegen-jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetCodegenJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetComponentOutcome AmplifyUIBuilderClient::GetComponent(const GetComponentRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: AppId, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: EnvironmentName, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetComponent", "Required field: Id, is not set");
    return GetComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/components/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetFormOutcome AmplifyUIBuilderClient::GetForm(const GetFormRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetForm", "Required field: AppId, is not set");
    return GetFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetForm", "Required field: EnvironmentName, is not set");
    return GetFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetForm", "Required field: Id, is not set");
    return GetFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/forms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetFormOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetMetadataOutcome AmplifyUIBuilderClient::GetMetadata(const GetMetadataRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMetadata", "Required field: AppId, is not set");
    return GetMetadataOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetMetadata", "Required field: EnvironmentName, is not set");
    return GetMetadataOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
  };

  return GetMetadataOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetThemeOutcome AmplifyUIBuilderClient::GetTheme(const GetThemeRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTheme", "Required field: AppId, is not set");
    return GetThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTheme", "Required field: EnvironmentName, is not set");
    return GetThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetTheme", "Required field: Id, is not set");
    return GetThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return GetThemeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListCodegenJobsOutcome AmplifyUIBuilderClient::ListCodegenJobs(const ListCodegenJobsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCodegenJobs", "Required field: AppId, is not set");
    return ListCodegenJobsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListCodegenJobs", "Required field: EnvironmentName, is not set");
    return ListCodegenJobsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/codegen-jobs");
  };

  return ListCodegenJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListComponentsOutcome AmplifyUIBuilderClient::ListComponents(const ListComponentsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListComponents", "Required field: AppId, is not set");
    return ListComponentsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListComponents", "Required field: EnvironmentName, is not set");
    return ListComponentsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/components");
  };

  return ListComponentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListFormsOutcome AmplifyUIBuilderClient::ListForms(const ListFormsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListForms", "Required field: AppId, is not set");
    return ListFormsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListForms", "Required field: EnvironmentName, is not set");
    return ListFormsOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/forms");
  };

  return ListFormsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome AmplifyUIBuilderClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListThemesOutcome AmplifyUIBuilderClient::ListThemes(const ListThemesRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThemes", "Required field: AppId, is not set");
    return ListThemesOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListThemes", "Required field: EnvironmentName, is not set");
    return ListThemesOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes");
  };

  return ListThemesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PutMetadataFlagOutcome AmplifyUIBuilderClient::PutMetadataFlag(const PutMetadataFlagRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMetadataFlag", "Required field: AppId, is not set");
    return PutMetadataFlagOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMetadataFlag", "Required field: EnvironmentName, is not set");
    return PutMetadataFlagOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.FeatureNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PutMetadataFlag", "Required field: FeatureName, is not set");
    return PutMetadataFlagOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [FeatureName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata/features/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeatureName());
  };

  return PutMetadataFlagOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

RefreshTokenOutcome AmplifyUIBuilderClient::RefreshToken(const RefreshTokenRequest& request) const {
  if (!request.ProviderHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("RefreshToken", "Required field: Provider, is not set");
    return RefreshTokenOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Provider]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tokens/");
    endpointResolutionOutcome.GetResult().AddPathSegment(TokenProvidersMapper::GetNameForTokenProviders(request.GetProvider()));
    endpointResolutionOutcome.GetResult().AddPathSegments("/refresh");
  };

  return RefreshTokenOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartCodegenJobOutcome AmplifyUIBuilderClient::StartCodegenJob(const StartCodegenJobRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartCodegenJob", "Required field: AppId, is not set");
    return StartCodegenJobOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartCodegenJob", "Required field: EnvironmentName, is not set");
    return StartCodegenJobOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/codegen-jobs");
  };

  return StartCodegenJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome AmplifyUIBuilderClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome AmplifyUIBuilderClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateComponentOutcome AmplifyUIBuilderClient::UpdateComponent(const UpdateComponentRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateComponent", "Required field: AppId, is not set");
    return UpdateComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateComponent", "Required field: EnvironmentName, is not set");
    return UpdateComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(
        AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateComponent", "Required field: Id, is not set");
    return UpdateComponentOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER,
                                                                                "MISSING_PARAMETER", "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/components/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateComponentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateFormOutcome AmplifyUIBuilderClient::UpdateForm(const UpdateFormRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateForm", "Required field: AppId, is not set");
    return UpdateFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateForm", "Required field: EnvironmentName, is not set");
    return UpdateFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateForm", "Required field: Id, is not set");
    return UpdateFormOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/forms/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateFormOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateThemeOutcome AmplifyUIBuilderClient::UpdateTheme(const UpdateThemeRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: AppId, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: EnvironmentName, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [EnvironmentName]", false));
  }
  if (!request.IdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateTheme", "Required field: Id, is not set");
    return UpdateThemeOutcome(Aws::Client::AWSError<AmplifyUIBuilderErrors>(AmplifyUIBuilderErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Id]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/app/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/environment/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/themes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetId());
  };

  return UpdateThemeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
