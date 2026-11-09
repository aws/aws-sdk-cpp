/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/ConnectClient.h>
#include <aws/connect/ConnectEndpointProvider.h>
#include <aws/connect/ConnectErrorMarshaller.h>
#include <aws/connect/model/UpdateWorkspaceMetadataRequest.h>
#include <aws/connect/model/UpdateWorkspacePageRequest.h>
#include <aws/connect/model/UpdateWorkspaceThemeRequest.h>
#include <aws/connect/model/UpdateWorkspaceVisibilityRequest.h>
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
using namespace Aws::Connect;
using namespace Aws::Connect::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

UpdateWorkspaceMetadataOutcome ConnectClient::UpdateWorkspaceMetadata(const UpdateWorkspaceMetadataRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceMetadata", "Required field: InstanceId, is not set");
    return UpdateWorkspaceMetadataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceMetadata", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceMetadataOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/metadata");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkspaceMetadataOutcome(result.GetResultWithOwnership())
                            : UpdateWorkspaceMetadataOutcome(std::move(result.GetError()));
}

UpdateWorkspacePageOutcome ConnectClient::UpdateWorkspacePage(const UpdateWorkspacePageRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspacePage", "Required field: InstanceId, is not set");
    return UpdateWorkspacePageOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspacePage", "Required field: WorkspaceId, is not set");
    return UpdateWorkspacePageOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [WorkspaceId]", false));
  }
  if (!request.PageHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspacePage", "Required field: Page, is not set");
    return UpdateWorkspacePageOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Page]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/pages/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetPage());
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkspacePageOutcome(result.GetResultWithOwnership())
                            : UpdateWorkspacePageOutcome(std::move(result.GetError()));
}

UpdateWorkspaceThemeOutcome ConnectClient::UpdateWorkspaceTheme(const UpdateWorkspaceThemeRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceTheme", "Required field: InstanceId, is not set");
    return UpdateWorkspaceThemeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceTheme", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceThemeOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/theme");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkspaceThemeOutcome(result.GetResultWithOwnership())
                            : UpdateWorkspaceThemeOutcome(std::move(result.GetError()));
}

UpdateWorkspaceVisibilityOutcome ConnectClient::UpdateWorkspaceVisibility(const UpdateWorkspaceVisibilityRequest& request) const {
  if (!request.InstanceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceVisibility", "Required field: InstanceId, is not set");
    return UpdateWorkspaceVisibilityOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [InstanceId]", false));
  }
  if (!request.WorkspaceIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateWorkspaceVisibility", "Required field: WorkspaceId, is not set");
    return UpdateWorkspaceVisibilityOutcome(Aws::Client::AWSError<ConnectErrors>(ConnectErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                 "Missing required field [WorkspaceId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/workspaces/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetInstanceId());
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetWorkspaceId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/visibility");
  };

  auto result = InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST);
  return result.IsSuccess() ? UpdateWorkspaceVisibilityOutcome(result.GetResultWithOwnership())
                            : UpdateWorkspaceVisibilityOutcome(std::move(result.GetError()));
}
