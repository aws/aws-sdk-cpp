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
#include <aws/databrew/GlueDataBrewClient.h>
#include <aws/databrew/GlueDataBrewEndpointProvider.h>
#include <aws/databrew/GlueDataBrewErrorMarshaller.h>
#include <aws/databrew/model/BatchDeleteRecipeVersionRequest.h>
#include <aws/databrew/model/CreateDatasetRequest.h>
#include <aws/databrew/model/CreateProfileJobRequest.h>
#include <aws/databrew/model/CreateProjectRequest.h>
#include <aws/databrew/model/CreateRecipeJobRequest.h>
#include <aws/databrew/model/CreateRecipeRequest.h>
#include <aws/databrew/model/CreateRulesetRequest.h>
#include <aws/databrew/model/CreateScheduleRequest.h>
#include <aws/databrew/model/DeleteDatasetRequest.h>
#include <aws/databrew/model/DeleteJobRequest.h>
#include <aws/databrew/model/DeleteProjectRequest.h>
#include <aws/databrew/model/DeleteRecipeVersionRequest.h>
#include <aws/databrew/model/DeleteRulesetRequest.h>
#include <aws/databrew/model/DeleteScheduleRequest.h>
#include <aws/databrew/model/DescribeDatasetRequest.h>
#include <aws/databrew/model/DescribeJobRequest.h>
#include <aws/databrew/model/DescribeJobRunRequest.h>
#include <aws/databrew/model/DescribeProjectRequest.h>
#include <aws/databrew/model/DescribeRecipeRequest.h>
#include <aws/databrew/model/DescribeRulesetRequest.h>
#include <aws/databrew/model/DescribeScheduleRequest.h>
#include <aws/databrew/model/ListDatasetsRequest.h>
#include <aws/databrew/model/ListJobRunsRequest.h>
#include <aws/databrew/model/ListJobsRequest.h>
#include <aws/databrew/model/ListProjectsRequest.h>
#include <aws/databrew/model/ListRecipeVersionsRequest.h>
#include <aws/databrew/model/ListRecipesRequest.h>
#include <aws/databrew/model/ListRulesetsRequest.h>
#include <aws/databrew/model/ListSchedulesRequest.h>
#include <aws/databrew/model/ListTagsForResourceRequest.h>
#include <aws/databrew/model/PublishRecipeRequest.h>
#include <aws/databrew/model/SendProjectSessionActionRequest.h>
#include <aws/databrew/model/StartJobRunRequest.h>
#include <aws/databrew/model/StartProjectSessionRequest.h>
#include <aws/databrew/model/StopJobRunRequest.h>
#include <aws/databrew/model/TagResourceRequest.h>
#include <aws/databrew/model/UntagResourceRequest.h>
#include <aws/databrew/model/UpdateDatasetRequest.h>
#include <aws/databrew/model/UpdateProfileJobRequest.h>
#include <aws/databrew/model/UpdateProjectRequest.h>
#include <aws/databrew/model/UpdateRecipeJobRequest.h>
#include <aws/databrew/model/UpdateRecipeRequest.h>
#include <aws/databrew/model/UpdateRulesetRequest.h>
#include <aws/databrew/model/UpdateScheduleRequest.h>
#include <smithy/tracing/TracingUtils.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::GlueDataBrew;
using namespace Aws::GlueDataBrew::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using namespace smithy::components::tracing;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

namespace Aws {
namespace GlueDataBrew {
const char SERVICE_NAME[] = "databrew";
const char ALLOCATION_TAG[] = "GlueDataBrewClient";
}  // namespace GlueDataBrew
}  // namespace Aws
const char* GlueDataBrewClient::GetServiceName() { return SERVICE_NAME; }
const char* GlueDataBrewClient::GetAllocationTag() { return ALLOCATION_TAG; }

GlueDataBrewClient::GlueDataBrewClient(const GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration,
                                       std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlueDataBrewClient::GlueDataBrewClient(const AWSCredentials& credentials,
                                       std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider,
                                       const GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlueDataBrewClient::GlueDataBrewClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       std::shared_ptr<GlueDataBrewEndpointProviderBase> endpointProvider,
                                       const GlueDataBrew::GlueDataBrewClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(endpointProvider ? std::move(endpointProvider) : Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* Legacy constructors due deprecation */
GlueDataBrewClient::GlueDataBrewClient(const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(
                    ALLOCATION_TAG,
                    Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG, clientConfiguration.credentialProviderConfig),
                    SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlueDataBrewClient::GlueDataBrewClient(const AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                                 SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

GlueDataBrewClient::GlueDataBrewClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                       const Aws::Client::ClientConfiguration& clientConfiguration)
    : BASECLASS(clientConfiguration,
                Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider, SERVICE_NAME,
                                                 Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
                Aws::MakeShared<GlueDataBrewErrorMarshaller>(ALLOCATION_TAG)),
      m_clientConfiguration(clientConfiguration),
      m_endpointProvider(Aws::MakeShared<GlueDataBrewEndpointProvider>(ALLOCATION_TAG)) {
  init(m_clientConfiguration);
}

/* End of legacy constructors due deprecation */
GlueDataBrewClient::~GlueDataBrewClient() { ShutdownSdkClient(this, -1); }

std::shared_ptr<GlueDataBrewEndpointProviderBase>& GlueDataBrewClient::accessEndpointProvider() { return m_endpointProvider; }

void GlueDataBrewClient::init(const GlueDataBrew::GlueDataBrewClientConfiguration& config) {
  AWSClient::SetServiceClientName("DataBrew");
  if (!m_clientConfiguration.executor) {
    if (!m_clientConfiguration.configFactories.executorCreateFn()) {
      AWS_LOGSTREAM_FATAL(ALLOCATION_TAG, "Failed to initialize client: config is missing Executor or executorCreateFn");
      m_isInitialized = false;
      return;
    }
    m_clientConfiguration.executor = m_clientConfiguration.configFactories.executorCreateFn();
  }
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config, "databrew");
}

void GlueDataBrewClient::OverrideEndpoint(const Aws::String& endpoint) {
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_clientConfiguration.endpointOverride = endpoint;
  m_endpointProvider->OverrideEndpoint(endpoint);
}
GlueDataBrewClient::InvokeOperationOutcome GlueDataBrewClient::InvokeServiceOperation(
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

BatchDeleteRecipeVersionOutcome GlueDataBrewClient::BatchDeleteRecipeVersion(const BatchDeleteRecipeVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("BatchDeleteRecipeVersion", "Required field: Name, is not set");
    return BatchDeleteRecipeVersionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(
        GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/batchDeleteRecipeVersion");
  };

  return BatchDeleteRecipeVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateDatasetOutcome GlueDataBrewClient::CreateDataset(const CreateDatasetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  };

  return CreateDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProfileJobOutcome GlueDataBrewClient::CreateProfileJob(const CreateProfileJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileJobs");
  };

  return CreateProfileJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateProjectOutcome GlueDataBrewClient::CreateProject(const CreateProjectRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  };

  return CreateProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRecipeOutcome GlueDataBrewClient::CreateRecipe(const CreateRecipeRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipes");
  };

  return CreateRecipeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRecipeJobOutcome GlueDataBrewClient::CreateRecipeJob(const CreateRecipeJobRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipeJobs");
  };

  return CreateRecipeJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateRulesetOutcome GlueDataBrewClient::CreateRuleset(const CreateRulesetRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rulesets");
  };

  return CreateRulesetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

CreateScheduleOutcome GlueDataBrewClient::CreateSchedule(const CreateScheduleRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedules");
  };

  return CreateScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

DeleteDatasetOutcome GlueDataBrewClient::DeleteDataset(const DeleteDatasetRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteDataset", "Required field: Name, is not set");
    return DeleteDatasetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteJobOutcome GlueDataBrewClient::DeleteJob(const DeleteJobRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteJob", "Required field: Name, is not set");
    return DeleteJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                      "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteProjectOutcome GlueDataBrewClient::DeleteProject(const DeleteProjectRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: Name, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRecipeVersionOutcome GlueDataBrewClient::DeleteRecipeVersion(const DeleteRecipeVersionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecipeVersion", "Required field: Name, is not set");
    return DeleteRecipeVersionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Name]", false));
  }
  if (!request.RecipeVersionHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRecipeVersion", "Required field: RecipeVersion, is not set");
    return DeleteRecipeVersionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [RecipeVersion]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipeVersion/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRecipeVersion());
  };

  return DeleteRecipeVersionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteRulesetOutcome GlueDataBrewClient::DeleteRuleset(const DeleteRulesetRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteRuleset", "Required field: Name, is not set");
    return DeleteRulesetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rulesets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteRulesetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DeleteScheduleOutcome GlueDataBrewClient::DeleteSchedule(const DeleteScheduleRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DeleteSchedule", "Required field: Name, is not set");
    return DeleteScheduleOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DeleteScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

DescribeDatasetOutcome GlueDataBrewClient::DescribeDataset(const DescribeDatasetRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeDataset", "Required field: Name, is not set");
    return DescribeDatasetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DescribeDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeJobOutcome GlueDataBrewClient::DescribeJob(const DescribeJobRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJob", "Required field: Name, is not set");
    return DescribeJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DescribeJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeJobRunOutcome GlueDataBrewClient::DescribeJobRun(const DescribeJobRunRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJobRun", "Required field: Name, is not set");
    return DescribeJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }
  if (!request.RunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeJobRun", "Required field: RunId, is not set");
    return DescribeJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [RunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobRun/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRunId());
  };

  return DescribeJobRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeProjectOutcome GlueDataBrewClient::DescribeProject(const DescribeProjectRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeProject", "Required field: Name, is not set");
    return DescribeProjectOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DescribeProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRecipeOutcome GlueDataBrewClient::DescribeRecipe(const DescribeRecipeRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRecipe", "Required field: Name, is not set");
    return DescribeRecipeOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DescribeRecipeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeRulesetOutcome GlueDataBrewClient::DescribeRuleset(const DescribeRulesetRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeRuleset", "Required field: Name, is not set");
    return DescribeRulesetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rulesets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DescribeRulesetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

DescribeScheduleOutcome GlueDataBrewClient::DescribeSchedule(const DescribeScheduleRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("DescribeSchedule", "Required field: Name, is not set");
    return DescribeScheduleOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return DescribeScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListDatasetsOutcome GlueDataBrewClient::ListDatasets(const ListDatasetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets");
  };

  return ListDatasetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobRunsOutcome GlueDataBrewClient::ListJobRuns(const ListJobRunsRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListJobRuns", "Required field: Name, is not set");
    return ListJobRunsOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobRuns");
  };

  return ListJobRunsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListJobsOutcome GlueDataBrewClient::ListJobs(const ListJobsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs");
  };

  return ListJobsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListProjectsOutcome GlueDataBrewClient::ListProjects(const ListProjectsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  };

  return ListProjectsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecipeVersionsOutcome GlueDataBrewClient::ListRecipeVersions(const ListRecipeVersionsRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListRecipeVersions", "Required field: Name, is not set");
    return ListRecipeVersionsOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                               "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipeVersions");
  };

  return ListRecipeVersionsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRecipesOutcome GlueDataBrewClient::ListRecipes(const ListRecipesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipes");
  };

  return ListRecipesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListRulesetsOutcome GlueDataBrewClient::ListRulesets(const ListRulesetsRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rulesets");
  };

  return ListRulesetsOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListSchedulesOutcome GlueDataBrewClient::ListSchedules(const ListSchedulesRequest& request) const {
  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedules");
  };

  return ListSchedulesOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

ListTagsForResourceOutcome GlueDataBrewClient::ListTagsForResource(const ListTagsForResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return ListTagsForResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_GET)};
}

PublishRecipeOutcome GlueDataBrewClient::PublishRecipe(const PublishRecipeRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("PublishRecipe", "Required field: Name, is not set");
    return PublishRecipeOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/publishRecipe");
  };

  return PublishRecipeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

SendProjectSessionActionOutcome GlueDataBrewClient::SendProjectSessionAction(const SendProjectSessionActionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("SendProjectSessionAction", "Required field: Name, is not set");
    return SendProjectSessionActionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(
        GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/sendProjectSessionAction");
  };

  return SendProjectSessionActionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StartJobRunOutcome GlueDataBrewClient::StartJobRun(const StartJobRunRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartJobRun", "Required field: Name, is not set");
    return StartJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/startJobRun");
  };

  return StartJobRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

StartProjectSessionOutcome GlueDataBrewClient::StartProjectSession(const StartProjectSessionRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StartProjectSession", "Required field: Name, is not set");
    return StartProjectSessionOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                                "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/startProjectSession");
  };

  return StartProjectSessionOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

StopJobRunOutcome GlueDataBrewClient::StopJobRun(const StopJobRunRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopJobRun", "Required field: Name, is not set");
    return StopJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [Name]", false));
  }
  if (!request.RunIdHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("StopJobRun", "Required field: RunId, is not set");
    return StopJobRunOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                       "Missing required field [RunId]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
    endpointResolutionOutcome.GetResult().AddPathSegments("/jobRun/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetRunId());
    endpointResolutionOutcome.GetResult().AddPathSegments("/stopJobRun");
  };

  return StopJobRunOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

TagResourceOutcome GlueDataBrewClient::TagResource(const TagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                        "Missing required field [ResourceArn]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return TagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_POST)};
}

UntagResourceOutcome GlueDataBrewClient::UntagResource(const UntagResourceRequest& request) const {
  if (!request.ResourceArnHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [TagKeys]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  };

  return UntagResourceOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_DELETE)};
}

UpdateDatasetOutcome GlueDataBrewClient::UpdateDataset(const UpdateDatasetRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateDataset", "Required field: Name, is not set");
    return UpdateDatasetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/datasets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateDatasetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateProfileJobOutcome GlueDataBrewClient::UpdateProfileJob(const UpdateProfileJobRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProfileJob", "Required field: Name, is not set");
    return UpdateProfileJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                             "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/profileJobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateProfileJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateProjectOutcome GlueDataBrewClient::UpdateProject(const UpdateProjectRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: Name, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateProjectOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRecipeOutcome GlueDataBrewClient::UpdateRecipe(const UpdateRecipeRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecipe", "Required field: Name, is not set");
    return UpdateRecipeOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                         "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipes/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateRecipeOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRecipeJobOutcome GlueDataBrewClient::UpdateRecipeJob(const UpdateRecipeJobRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRecipeJob", "Required field: Name, is not set");
    return UpdateRecipeJobOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                            "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/recipeJobs/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateRecipeJobOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateRulesetOutcome GlueDataBrewClient::UpdateRuleset(const UpdateRulesetRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateRuleset", "Required field: Name, is not set");
    return UpdateRulesetOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                          "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/rulesets/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateRulesetOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}

UpdateScheduleOutcome GlueDataBrewClient::UpdateSchedule(const UpdateScheduleRequest& request) const {
  if (!request.NameHasBeenSet()) {
    AWS_LOGSTREAM_ERROR("UpdateSchedule", "Required field: Name, is not set");
    return UpdateScheduleOutcome(Aws::Client::AWSError<GlueDataBrewErrors>(GlueDataBrewErrors::MISSING_PARAMETER, "MISSING_PARAMETER",
                                                                           "Missing required field [Name]", false));
  }

  auto uriResolver = [&](Aws::Endpoint::ResolveEndpointOutcome& endpointResolutionOutcome) {
    (void)endpointResolutionOutcome;
    endpointResolutionOutcome.GetResult().AddPathSegments("/schedules/");
    endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  };

  return UpdateScheduleOutcome{InvokeServiceOperation(request, uriResolver, Aws::Http::HttpMethod::HTTP_PUT)};
}
