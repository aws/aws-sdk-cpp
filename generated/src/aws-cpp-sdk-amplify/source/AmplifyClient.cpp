/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplify/AmplifyClient.h>
#include <aws/amplify/AmplifyEndpointProvider.h>
#include <aws/amplify/AmplifyErrorMarshaller.h>
#include <aws/amplify/model/CreateAppRequest.h>
#include <aws/amplify/model/CreateBackendEnvironmentRequest.h>
#include <aws/amplify/model/CreateBranchRequest.h>
#include <aws/amplify/model/CreateDeploymentRequest.h>
#include <aws/amplify/model/CreateDomainAssociationRequest.h>
#include <aws/amplify/model/CreateWebhookRequest.h>
#include <aws/amplify/model/DeleteAppRequest.h>
#include <aws/amplify/model/DeleteBackendEnvironmentRequest.h>
#include <aws/amplify/model/DeleteBranchRequest.h>
#include <aws/amplify/model/DeleteDomainAssociationRequest.h>
#include <aws/amplify/model/DeleteJobRequest.h>
#include <aws/amplify/model/DeleteWebhookRequest.h>
#include <aws/amplify/model/GenerateAccessLogsRequest.h>
#include <aws/amplify/model/GetAppRequest.h>
#include <aws/amplify/model/GetArtifactUrlRequest.h>
#include <aws/amplify/model/GetBackendEnvironmentRequest.h>
#include <aws/amplify/model/GetBranchRequest.h>
#include <aws/amplify/model/GetDomainAssociationRequest.h>
#include <aws/amplify/model/GetJobRequest.h>
#include <aws/amplify/model/GetWebhookRequest.h>
#include <aws/amplify/model/ListAppsRequest.h>
#include <aws/amplify/model/ListArtifactsRequest.h>
#include <aws/amplify/model/ListBackendEnvironmentsRequest.h>
#include <aws/amplify/model/ListBranchesRequest.h>
#include <aws/amplify/model/ListDomainAssociationsRequest.h>
#include <aws/amplify/model/ListJobsRequest.h>
#include <aws/amplify/model/ListTagsForResourceRequest.h>
#include <aws/amplify/model/ListWebhooksRequest.h>
#include <aws/amplify/model/StartDeploymentRequest.h>
#include <aws/amplify/model/StartJobRequest.h>
#include <aws/amplify/model/StopJobRequest.h>
#include <aws/amplify/model/TagResourceRequest.h>
#include <aws/amplify/model/UntagResourceRequest.h>
#include <aws/amplify/model/UpdateAppRequest.h>
#include <aws/amplify/model/UpdateBranchRequest.h>
#include <aws/amplify/model/UpdateDomainAssociationRequest.h>
#include <aws/amplify/model/UpdateWebhookRequest.h>
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
using namespace Aws::Amplify;
using namespace Aws::Amplify::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace Amplify {
const char SERVICE_NAME[] = "amplify";
const char ALLOCATION_TAG[] = "AmplifyClient";
}  // namespace Amplify
}  // namespace Aws
const char* AmplifyClient::GetServiceName() { return SERVICE_NAME; }
const char* AmplifyClient::GetAllocationTag() { return ALLOCATION_TAG; }

AmplifyClient::AmplifyClient(const Amplify::AmplifyClientConfiguration& clientConfiguration,
                             std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyClient::AmplifyClient(const AWSCredentials& credentials, std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider,
                             const Amplify::AmplifyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyClient::AmplifyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             std::shared_ptr<AmplifyEndpointProviderBase> endpointProvider,
                             const Amplify::AmplifyClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AmplifyClient::AmplifyClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyClient::AmplifyClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AmplifyClient::AmplifyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                             const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AmplifyErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AmplifyEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AmplifyClient::~AmplifyClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AmplifyEndpointProviderBase>& AmplifyClient::accessEndpointProvider() { return m_endpointProvider; }

void AmplifyClient::init(const Amplify::AmplifyClientConfiguration& config) {
  AWSClient::SetServiceClientName("Amplify");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "amplify");
}

void AmplifyClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AmplifyClient::InvokeOperationOutcome AmplifyClient::InvokeServiceOperation(
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

CreateAppOutcome AmplifyClient::CreateApp(const CreateAppRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps");
  };

  return CreateAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBackendEnvironmentOutcome AmplifyClient::CreateBackendEnvironment(const CreateBackendEnvironmentRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBackendEnvironment", "Required field: AppId, is not set");
    return CreateBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/backendenvironments");
  };

  return CreateBackendEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateBranchOutcome AmplifyClient::CreateBranch(const CreateBranchRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateBranch", "Required field: AppId, is not set");
    return CreateBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches");
  };

  return CreateBranchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDeploymentOutcome AmplifyClient::CreateDeployment(const CreateDeploymentRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: AppId, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDeployment", "Required field: BranchName, is not set");
    return CreateDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [BranchName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments");
  };

  return CreateDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDomainAssociationOutcome AmplifyClient::CreateDomainAssociation(const CreateDomainAssociationRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDomainAssociation", "Required field: AppId, is not set");
    return CreateDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  };

  return CreateDomainAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateWebhookOutcome AmplifyClient::CreateWebhook(const CreateWebhookRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateWebhook", "Required field: AppId, is not set");
    return CreateWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks");
  };

  return CreateWebhookOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteAppOutcome AmplifyClient::DeleteApp(const DeleteAppRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApp", "Required field: AppId, is not set");
    return DeleteAppOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  };

  return DeleteAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteBackendEnvironmentOutcome AmplifyClient::DeleteBackendEnvironment(const DeleteBackendEnvironmentRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackendEnvironment", "Required field: AppId, is not set");
    return DeleteBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBackendEnvironment", "Required field: EnvironmentName, is not set");
    return DeleteBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/backendenvironments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
  };

  return DeleteBackendEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteBranchOutcome AmplifyClient::DeleteBranch(const DeleteBranchRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBranch", "Required field: AppId, is not set");
    return DeleteBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteBranch", "Required field: BranchName, is not set");
    return DeleteBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [BranchName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  };

  return DeleteBranchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDomainAssociationOutcome AmplifyClient::DeleteDomainAssociation(const DeleteDomainAssociationRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainAssociation", "Required field: AppId, is not set");
    return DeleteDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppId]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDomainAssociation", "Required field: DomainName, is not set");
    return DeleteDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return DeleteDomainAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteJobOutcome AmplifyClient::DeleteJob(const DeleteJobRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: AppId, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: BranchName, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: JobId, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return DeleteJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteWebhookOutcome AmplifyClient::DeleteWebhook(const DeleteWebhookRequest& request) const {
  if (!request.WebhookIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteWebhook", "Required field: WebhookId, is not set");
    return DeleteWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [WebhookId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebhookId());
  };

  return DeleteWebhookOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GenerateAccessLogsOutcome AmplifyClient::GenerateAccessLogs(const GenerateAccessLogsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GenerateAccessLogs", "Required field: AppId, is not set");
    return GenerateAccessLogsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/accesslogs");
  };

  return GenerateAccessLogsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

GetAppOutcome AmplifyClient::GetApp(const GetAppRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApp", "Required field: AppId, is not set");
    return GetAppOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                              "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  };

  return GetAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetArtifactUrlOutcome AmplifyClient::GetArtifactUrl(const GetArtifactUrlRequest& request) const {
  if (!request.ArtifactIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetArtifactUrl", "Required field: ArtifactId, is not set");
    return GetArtifactUrlOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [ArtifactId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/artifacts/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArtifactId());
  };

  return GetArtifactUrlOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBackendEnvironmentOutcome AmplifyClient::GetBackendEnvironment(const GetBackendEnvironmentRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendEnvironment", "Required field: AppId, is not set");
    return GetBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [AppId]", false));
  }
  if (!request.EnvironmentNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBackendEnvironment", "Required field: EnvironmentName, is not set");
    return GetBackendEnvironmentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [EnvironmentName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/backendenvironments/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEnvironmentName());
  };

  return GetBackendEnvironmentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetBranchOutcome AmplifyClient::GetBranch(const GetBranchRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBranch", "Required field: AppId, is not set");
    return GetBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetBranch", "Required field: BranchName, is not set");
    return GetBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [BranchName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  };

  return GetBranchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDomainAssociationOutcome AmplifyClient::GetDomainAssociation(const GetDomainAssociationRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainAssociation", "Required field: AppId, is not set");
    return GetDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [AppId]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDomainAssociation", "Required field: DomainName, is not set");
    return GetDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return GetDomainAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetJobOutcome AmplifyClient::GetJob(const GetJobRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: AppId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                              "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: BranchName, is not set");
    return GetJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                              "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetJob", "Required field: JobId, is not set");
    return GetJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                              "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
  };

  return GetJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetWebhookOutcome AmplifyClient::GetWebhook(const GetWebhookRequest& request) const {
  if (!request.WebhookIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetWebhook", "Required field: WebhookId, is not set");
    return GetWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                  "Missing required field [WebhookId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebhookId());
  };

  return GetWebhookOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListAppsOutcome AmplifyClient::ListApps(const ListAppsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps");
  };

  return ListAppsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListArtifactsOutcome AmplifyClient::ListArtifacts(const ListArtifactsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListArtifacts", "Required field: AppId, is not set");
    return ListArtifactsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListArtifacts", "Required field: BranchName, is not set");
    return ListArtifactsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListArtifacts", "Required field: JobId, is not set");
    return ListArtifactsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/artifacts");
  };

  return ListArtifactsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBackendEnvironmentsOutcome AmplifyClient::ListBackendEnvironments(const ListBackendEnvironmentsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBackendEnvironments", "Required field: AppId, is not set");
    return ListBackendEnvironmentsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/backendenvironments");
  };

  return ListBackendEnvironmentsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListBranchesOutcome AmplifyClient::ListBranches(const ListBranchesRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListBranches", "Required field: AppId, is not set");
    return ListBranchesOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches");
  };

  return ListBranchesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDomainAssociationsOutcome AmplifyClient::ListDomainAssociations(const ListDomainAssociationsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDomainAssociations", "Required field: AppId, is not set");
    return ListDomainAssociationsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                              "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains");
  };

  return ListDomainAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobsOutcome AmplifyClient::ListJobs(const ListJobsRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: AppId, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobs", "Required field: BranchName, is not set");
    return ListJobsOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [BranchName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return ListJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome AmplifyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListWebhooksOutcome AmplifyClient::ListWebhooks(const ListWebhooksRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListWebhooks", "Required field: AppId, is not set");
    return ListWebhooksOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks");
  };

  return ListWebhooksOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

StartDeploymentOutcome AmplifyClient::StartDeployment(const StartDeploymentRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDeployment", "Required field: AppId, is not set");
    return StartDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartDeployment", "Required field: BranchName, is not set");
    return StartDeploymentOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [BranchName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/deployments/start");
  };

  return StartDeploymentOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartJobOutcome AmplifyClient::StartJob(const StartJobRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartJob", "Required field: AppId, is not set");
    return StartJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartJob", "Required field: BranchName, is not set");
    return StartJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                "Missing required field [BranchName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return StartJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StopJobOutcome AmplifyClient::StopJob(const StopJobRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopJob", "Required field: AppId, is not set");
    return StopJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopJob", "Required field: BranchName, is not set");
    return StopJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [BranchName]", false));
  }
  if (!request.JobIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopJob", "Required field: JobId, is not set");
    return StopJobOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                               "Missing required field [JobId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetJobId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stop");
  };

  return StopJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

TagResourceOutcome AmplifyClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                   "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome AmplifyClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateAppOutcome AmplifyClient::UpdateApp(const UpdateAppRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApp", "Required field: AppId, is not set");
    return UpdateAppOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                 "Missing required field [AppId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
  };

  return UpdateAppOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateBranchOutcome AmplifyClient::UpdateBranch(const UpdateBranchRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBranch", "Required field: AppId, is not set");
    return UpdateBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [AppId]", false));
  }
  if (!request.BranchNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateBranch", "Required field: BranchName, is not set");
    return UpdateBranchOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                    "Missing required field [BranchName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/branches/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetBranchName());
  };

  return UpdateBranchOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateDomainAssociationOutcome AmplifyClient::UpdateDomainAssociation(const UpdateDomainAssociationRequest& request) const {
  if (!request.AppIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainAssociation", "Required field: AppId, is not set");
    return UpdateDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [AppId]", false));
  }
  if (!request.DomainNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDomainAssociation", "Required field: DomainName, is not set");
    return UpdateDomainAssociationOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [DomainName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/apps/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAppId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/domains/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDomainName());
  };

  return UpdateDomainAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UpdateWebhookOutcome AmplifyClient::UpdateWebhook(const UpdateWebhookRequest& request) const {
  if (!request.WebhookIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWebhook", "Required field: WebhookId, is not set");
    return UpdateWebhookOutcome(Aws::Client::AWSError<AmplifyErrors>(AmplifyErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                     "Missing required field [WebhookId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/webhooks/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWebhookId());
  };

  return UpdateWebhookOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}
