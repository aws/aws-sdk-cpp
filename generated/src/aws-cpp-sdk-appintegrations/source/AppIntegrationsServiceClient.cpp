/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appintegrations/AppIntegrationsServiceClient.h>
#include <aws/appintegrations/AppIntegrationsServiceEndpointProvider.h>
#include <aws/appintegrations/AppIntegrationsServiceErrorMarshaller.h>
#include <aws/appintegrations/model/CreateApplicationRequest.h>
#include <aws/appintegrations/model/CreateDataIntegrationAssociationRequest.h>
#include <aws/appintegrations/model/CreateDataIntegrationRequest.h>
#include <aws/appintegrations/model/CreateEventIntegrationRequest.h>
#include <aws/appintegrations/model/DeleteApplicationRequest.h>
#include <aws/appintegrations/model/DeleteDataIntegrationRequest.h>
#include <aws/appintegrations/model/DeleteEventIntegrationRequest.h>
#include <aws/appintegrations/model/GetApplicationRequest.h>
#include <aws/appintegrations/model/GetDataIntegrationRequest.h>
#include <aws/appintegrations/model/GetEventIntegrationRequest.h>
#include <aws/appintegrations/model/ListApplicationAssociationsRequest.h>
#include <aws/appintegrations/model/ListApplicationsRequest.h>
#include <aws/appintegrations/model/ListDataIntegrationAssociationsRequest.h>
#include <aws/appintegrations/model/ListDataIntegrationsRequest.h>
#include <aws/appintegrations/model/ListEventIntegrationAssociationsRequest.h>
#include <aws/appintegrations/model/ListEventIntegrationsRequest.h>
#include <aws/appintegrations/model/ListTagsForResourceRequest.h>
#include <aws/appintegrations/model/TagResourceRequest.h>
#include <aws/appintegrations/model/UntagResourceRequest.h>
#include <aws/appintegrations/model/UpdateApplicationRequest.h>
#include <aws/appintegrations/model/UpdateDataIntegrationAssociationRequest.h>
#include <aws/appintegrations/model/UpdateDataIntegrationRequest.h>
#include <aws/appintegrations/model/UpdateEventIntegrationRequest.h>
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
using namespace Aws::AppIntegrationsService;
using namespace Aws::AppIntegrationsService::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace AppIntegrationsService {
const char SERVICE_NAME[] = "app-integrations";
const char ALLOCATION_TAG[] = "AppIntegrationsServiceClient";
}  // namespace AppIntegrationsService
}  // namespace Aws
const char* AppIntegrationsServiceClient::GetServiceName() { return SERVICE_NAME; }
const char* AppIntegrationsServiceClient::GetAllocationTag() { return ALLOCATION_TAG; }

AppIntegrationsServiceClient::AppIntegrationsServiceClient(
    const AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration,
    std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppIntegrationsServiceClient::AppIntegrationsServiceClient(
    const AWSCredentials& credentials, std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider,
    const AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppIntegrationsServiceClient::AppIntegrationsServiceClient(
    const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
    std::shared_ptr<AppIntegrationsServiceEndpointProviderBase> endpointProvider,
    const AppIntegrationsService::AppIntegrationsServiceClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider)
                                          : Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
AppIntegrationsServiceClient::AppIntegrationsServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppIntegrationsServiceClient::AppIntegrationsServiceClient(const AWSCredentials& credentials,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

AppIntegrationsServiceClient::AppIntegrationsServiceClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                           const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<AppIntegrationsServiceErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<AppIntegrationsServiceEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
AppIntegrationsServiceClient::~AppIntegrationsServiceClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<AppIntegrationsServiceEndpointProviderBase>& AppIntegrationsServiceClient::accessEndpointProvider() {
  return m_endpointProvider;
}

void AppIntegrationsServiceClient::init(const AppIntegrationsService::AppIntegrationsServiceClientConfiguration& config) {
  AWSClient::SetServiceClientName("AppIntegrations");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "app-integrations");
}

void AppIntegrationsServiceClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
AppIntegrationsServiceClient::InvokeOperationOutcome AppIntegrationsServiceClient::InvokeServiceOperation(
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

CreateApplicationOutcome AppIntegrationsServiceClient::CreateApplication(const CreateApplicationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  return CreateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataIntegrationOutcome AppIntegrationsServiceClient::CreateDataIntegration(const CreateDataIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations");
  };

  return CreateDataIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDataIntegrationAssociationOutcome AppIntegrationsServiceClient::CreateDataIntegrationAssociation(
    const CreateDataIntegrationAssociationRequest& request) const {
  if (!request.DataIntegrationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("CreateDataIntegrationAssociation", "Required field: DataIntegrationIdentifier, is not set");
    return CreateDataIntegrationAssociationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataIntegrationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataIntegrationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return CreateDataIntegrationAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateEventIntegrationOutcome AppIntegrationsServiceClient::CreateEventIntegration(const CreateEventIntegrationRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations");
  };

  return CreateEventIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteApplicationOutcome AppIntegrationsServiceClient::DeleteApplication(const DeleteApplicationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteApplication", "Required field: Arn, is not set");
    return DeleteApplicationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return DeleteApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteDataIntegrationOutcome AppIntegrationsServiceClient::DeleteDataIntegration(const DeleteDataIntegrationRequest& request) const {
  if (!request.DataIntegrationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataIntegration", "Required field: DataIntegrationIdentifier, is not set");
    return DeleteDataIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataIntegrationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataIntegrationIdentifier());
  };

  return DeleteDataIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteEventIntegrationOutcome AppIntegrationsServiceClient::DeleteEventIntegration(const DeleteEventIntegrationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteEventIntegration", "Required field: Name, is not set");
    return DeleteEventIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteEventIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

GetApplicationOutcome AppIntegrationsServiceClient::GetApplication(const GetApplicationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetApplication", "Required field: Arn, is not set");
    return GetApplicationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return GetApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetDataIntegrationOutcome AppIntegrationsServiceClient::GetDataIntegration(const GetDataIntegrationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetDataIntegration", "Required field: Identifier, is not set");
    return GetDataIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return GetDataIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

GetEventIntegrationOutcome AppIntegrationsServiceClient::GetEventIntegration(const GetEventIntegrationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("GetEventIntegration", "Required field: Name, is not set");
    return GetEventIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return GetEventIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApplicationAssociationsOutcome AppIntegrationsServiceClient::ListApplicationAssociations(
    const ListApplicationAssociationsRequest& request) const {
  if (!request.ApplicationIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListApplicationAssociations", "Required field: ApplicationId, is not set");
    return ListApplicationAssociationsOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ApplicationId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetApplicationId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return ListApplicationAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListApplicationsOutcome AppIntegrationsServiceClient::ListApplications(const ListApplicationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications");
  };

  return ListApplicationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataIntegrationAssociationsOutcome AppIntegrationsServiceClient::ListDataIntegrationAssociations(
    const ListDataIntegrationAssociationsRequest& request) const {
  if (!request.DataIntegrationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListDataIntegrationAssociations", "Required field: DataIntegrationIdentifier, is not set");
    return ListDataIntegrationAssociationsOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataIntegrationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataIntegrationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return ListDataIntegrationAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDataIntegrationsOutcome AppIntegrationsServiceClient::ListDataIntegrations(const ListDataIntegrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations");
  };

  return ListDataIntegrationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEventIntegrationAssociationsOutcome AppIntegrationsServiceClient::ListEventIntegrationAssociations(
    const ListEventIntegrationAssociationsRequest& request) const {
  if (!request.EventIntegrationNameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListEventIntegrationAssociations", "Required field: EventIntegrationName, is not set");
    return ListEventIntegrationAssociationsOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [EventIntegrationName]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetEventIntegrationName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  };

  return ListEventIntegrationAssociationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListEventIntegrationsOutcome AppIntegrationsServiceClient::ListEventIntegrations(const ListEventIntegrationsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations");
  };

  return ListEventIntegrationsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome AppIntegrationsServiceClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

TagResourceOutcome AppIntegrationsServiceClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome AppIntegrationsServiceClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateApplicationOutcome AppIntegrationsServiceClient::UpdateApplication(const UpdateApplicationRequest& request) const {
  if (!request.ArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateApplication", "Required field: Arn, is not set");
    return UpdateApplicationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Arn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/applications/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetArn());
  };

  return UpdateApplicationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDataIntegrationOutcome AppIntegrationsServiceClient::UpdateDataIntegration(const UpdateDataIntegrationRequest& request) const {
  if (!request.IdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataIntegration", "Required field: Identifier, is not set");
    return UpdateDataIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Identifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetIdentifier());
  };

  return UpdateDataIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateDataIntegrationAssociationOutcome AppIntegrationsServiceClient::UpdateDataIntegrationAssociation(
    const UpdateDataIntegrationAssociationRequest& request) const {
  if (!request.DataIntegrationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataIntegrationAssociation", "Required field: DataIntegrationIdentifier, is not set");
    return UpdateDataIntegrationAssociationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [DataIntegrationIdentifier]", false));
  }
  if (!request.DataIntegrationAssociationIdentifierHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataIntegrationAssociation", "Required field: DataIntegrationAssociationIdentifier, is not set");
    return UpdateDataIntegrationAssociationOutcome(
        Aws::Client::AWSError<AppIntegrationsServiceErrors>(AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                            "Missing required field [DataIntegrationAssociationIdentifier]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/dataIntegrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataIntegrationIdentifier());
    endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetDataIntegrationAssociationIdentifier());
  };

  return UpdateDataIntegrationAssociationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}

UpdateEventIntegrationOutcome AppIntegrationsServiceClient::UpdateEventIntegration(const UpdateEventIntegrationRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateEventIntegration", "Required field: Name, is not set");
    return UpdateEventIntegrationOutcome(Aws::Client::AWSError<AppIntegrationsServiceErrors>(
        AppIntegrationsServiceErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/eventIntegrations/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateEventIntegrationOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PATCH)};
}
