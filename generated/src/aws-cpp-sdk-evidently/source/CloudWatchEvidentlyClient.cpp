/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/logging/ErrorMacros.h>

#include <aws/evidently/CloudWatchEvidentlyClient.h>
#include <aws/evidently/CloudWatchEvidentlyErrorMarshaller.h>
#include <aws/evidently/CloudWatchEvidentlyEndpointProvider.h>
#include <aws/evidently/model/BatchEvaluateFeatureRequest.h>
#include <aws/evidently/model/CreateExperimentRequest.h>
#include <aws/evidently/model/CreateFeatureRequest.h>
#include <aws/evidently/model/CreateLaunchRequest.h>
#include <aws/evidently/model/CreateProjectRequest.h>
#include <aws/evidently/model/CreateSegmentRequest.h>
#include <aws/evidently/model/DeleteExperimentRequest.h>
#include <aws/evidently/model/DeleteFeatureRequest.h>
#include <aws/evidently/model/DeleteLaunchRequest.h>
#include <aws/evidently/model/DeleteProjectRequest.h>
#include <aws/evidently/model/DeleteSegmentRequest.h>
#include <aws/evidently/model/EvaluateFeatureRequest.h>
#include <aws/evidently/model/GetExperimentRequest.h>
#include <aws/evidently/model/GetExperimentResultsRequest.h>
#include <aws/evidently/model/GetFeatureRequest.h>
#include <aws/evidently/model/GetLaunchRequest.h>
#include <aws/evidently/model/GetProjectRequest.h>
#include <aws/evidently/model/GetSegmentRequest.h>
#include <aws/evidently/model/ListExperimentsRequest.h>
#include <aws/evidently/model/ListFeaturesRequest.h>
#include <aws/evidently/model/ListLaunchesRequest.h>
#include <aws/evidently/model/ListProjectsRequest.h>
#include <aws/evidently/model/ListSegmentReferencesRequest.h>
#include <aws/evidently/model/ListSegmentsRequest.h>
#include <aws/evidently/model/ListTagsForResourceRequest.h>
#include <aws/evidently/model/PutProjectEventsRequest.h>
#include <aws/evidently/model/StartExperimentRequest.h>
#include <aws/evidently/model/StartLaunchRequest.h>
#include <aws/evidently/model/StopExperimentRequest.h>
#include <aws/evidently/model/StopLaunchRequest.h>
#include <aws/evidently/model/TagResourceRequest.h>
#include <aws/evidently/model/TestSegmentPatternRequest.h>
#include <aws/evidently/model/UntagResourceRequest.h>
#include <aws/evidently/model/UpdateExperimentRequest.h>
#include <aws/evidently/model/UpdateFeatureRequest.h>
#include <aws/evidently/model/UpdateLaunchRequest.h>
#include <aws/evidently/model/UpdateProjectRequest.h>
#include <aws/evidently/model/UpdateProjectDataDeliveryRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudWatchEvidently;
using namespace Aws::CloudWatchEvidently::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CloudWatchEvidentlyClient::SERVICE_NAME = "evidently";
const char* CloudWatchEvidentlyClient::ALLOCATION_TAG = "CloudWatchEvidentlyClient";

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration,
                                                     std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const AWSCredentials& credentials,
                                                     std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider,
                                                     const CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase> endpointProvider,
                                                     const CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CloudWatchEvidentlyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const AWSCredentials& credentials,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudWatchEvidentlyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudWatchEvidentlyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CloudWatchEvidentlyClient::~CloudWatchEvidentlyClient()
{
}

std::shared_ptr<CloudWatchEvidentlyEndpointProviderBase>& CloudWatchEvidentlyClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CloudWatchEvidentlyClient::init(const CloudWatchEvidently::CloudWatchEvidentlyClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Evidently");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CloudWatchEvidentlyClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

BatchEvaluateFeatureOutcome CloudWatchEvidentlyClient::BatchEvaluateFeature(const BatchEvaluateFeatureRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, BatchEvaluateFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchEvaluateFeature", "Required field: Project, is not set");
    return BatchEvaluateFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, BatchEvaluateFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("dataplane.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), BatchEvaluateFeatureOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evaluations");
  return BatchEvaluateFeatureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExperimentOutcome CloudWatchEvidentlyClient::CreateExperiment(const CreateExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateExperiment", "Required field: Project, is not set");
    return CreateExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/experiments");
  return CreateExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFeatureOutcome CloudWatchEvidentlyClient::CreateFeature(const CreateFeatureRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFeature", "Required field: Project, is not set");
    return CreateFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/features");
  return CreateFeatureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLaunchOutcome CloudWatchEvidentlyClient::CreateLaunch(const CreateLaunchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLaunch", "Required field: Project, is not set");
    return CreateLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launches");
  return CreateLaunchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcome CloudWatchEvidentlyClient::CreateProject(const CreateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  return CreateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSegmentOutcome CloudWatchEvidentlyClient::CreateSegment(const CreateSegmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments");
  return CreateSegmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteExperimentOutcome CloudWatchEvidentlyClient::DeleteExperiment(const DeleteExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExperimentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExperiment", "Required field: Experiment, is not set");
    return DeleteExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Experiment]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExperiment", "Required field: Project, is not set");
    return DeleteExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperiment());
  return DeleteExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFeatureOutcome CloudWatchEvidentlyClient::DeleteFeature(const DeleteFeatureRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FeatureHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFeature", "Required field: Feature, is not set");
    return DeleteFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Feature]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteFeature", "Required field: Project, is not set");
    return DeleteFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/features/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeature());
  return DeleteFeatureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLaunchOutcome CloudWatchEvidentlyClient::DeleteLaunch(const DeleteLaunchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLaunch", "Required field: Launch, is not set");
    return DeleteLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Launch]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLaunch", "Required field: Project, is not set");
    return DeleteLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunch());
  return DeleteLaunchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcome CloudWatchEvidentlyClient::DeleteProject(const DeleteProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: Project, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  return DeleteProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSegmentOutcome CloudWatchEvidentlyClient::DeleteSegment(const DeleteSegmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SegmentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSegment", "Required field: Segment, is not set");
    return DeleteSegmentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Segment]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegment());
  return DeleteSegmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

EvaluateFeatureOutcome CloudWatchEvidentlyClient::EvaluateFeature(const EvaluateFeatureRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, EvaluateFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FeatureHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EvaluateFeature", "Required field: Feature, is not set");
    return EvaluateFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Feature]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("EvaluateFeature", "Required field: Project, is not set");
    return EvaluateFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, EvaluateFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("dataplane.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), EvaluateFeatureOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/evaluations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeature());
  return EvaluateFeatureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetExperimentOutcome CloudWatchEvidentlyClient::GetExperiment(const GetExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExperimentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExperiment", "Required field: Experiment, is not set");
    return GetExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Experiment]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExperiment", "Required field: Project, is not set");
    return GetExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperiment());
  return GetExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExperimentResultsOutcome CloudWatchEvidentlyClient::GetExperimentResults(const GetExperimentResultsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetExperimentResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExperimentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExperimentResults", "Required field: Experiment, is not set");
    return GetExperimentResultsOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Experiment]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExperimentResults", "Required field: Project, is not set");
    return GetExperimentResultsOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetExperimentResults, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperiment());
  endpointResolutionOutcome.GetResult().AddPathSegments("/results");
  return GetExperimentResultsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetFeatureOutcome CloudWatchEvidentlyClient::GetFeature(const GetFeatureRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FeatureHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFeature", "Required field: Feature, is not set");
    return GetFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Feature]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetFeature", "Required field: Project, is not set");
    return GetFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/features/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeature());
  return GetFeatureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLaunchOutcome CloudWatchEvidentlyClient::GetLaunch(const GetLaunchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunch", "Required field: Launch, is not set");
    return GetLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Launch]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLaunch", "Required field: Project, is not set");
    return GetLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunch());
  return GetLaunchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProjectOutcome CloudWatchEvidentlyClient::GetProject(const GetProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProject", "Required field: Project, is not set");
    return GetProjectOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  return GetProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentOutcome CloudWatchEvidentlyClient::GetSegment(const GetSegmentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SegmentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegment", "Required field: Segment, is not set");
    return GetSegmentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Segment]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSegment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegment());
  return GetSegmentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExperimentsOutcome CloudWatchEvidentlyClient::ListExperiments(const ListExperimentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListExperiments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListExperiments", "Required field: Project, is not set");
    return ListExperimentsOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListExperiments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/experiments");
  return ListExperimentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFeaturesOutcome CloudWatchEvidentlyClient::ListFeatures(const ListFeaturesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListFeatures, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFeatures", "Required field: Project, is not set");
    return ListFeaturesOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListFeatures, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/features");
  return ListFeaturesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLaunchesOutcome CloudWatchEvidentlyClient::ListLaunches(const ListLaunchesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLaunches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLaunches", "Required field: Project, is not set");
    return ListLaunchesOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLaunches, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launches");
  return ListLaunchesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcome CloudWatchEvidentlyClient::ListProjects(const ListProjectsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListProjects, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects");
  return ListProjectsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSegmentReferencesOutcome CloudWatchEvidentlyClient::ListSegmentReferences(const ListSegmentReferencesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSegmentReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.SegmentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSegmentReferences", "Required field: Segment, is not set");
    return ListSegmentReferencesOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Segment]", false));
  }
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListSegmentReferences", "Required field: Type, is not set");
    return ListSegmentReferencesOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSegmentReferences, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetSegment());
  endpointResolutionOutcome.GetResult().AddPathSegments("/references");
  return ListSegmentReferencesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSegmentsOutcome CloudWatchEvidentlyClient::ListSegments(const ListSegmentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSegments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSegments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/segments");
  return ListSegmentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcome CloudWatchEvidentlyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

PutProjectEventsOutcome CloudWatchEvidentlyClient::PutProjectEvents(const PutProjectEventsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutProjectEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProjectEvents", "Required field: Project, is not set");
    return PutProjectEventsOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutProjectEvents, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  auto addPrefixErr = endpointResolutionOutcome.GetResult().AddPrefixIfMissing("dataplane.");
  AWS_CHECK(SERVICE_NAME, !addPrefixErr, addPrefixErr->GetMessage(), PutProjectEventsOutcome(addPrefixErr.value()));
  endpointResolutionOutcome.GetResult().AddPathSegments("/events/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  return PutProjectEventsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartExperimentOutcome CloudWatchEvidentlyClient::StartExperiment(const StartExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExperimentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartExperiment", "Required field: Experiment, is not set");
    return StartExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Experiment]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartExperiment", "Required field: Project, is not set");
    return StartExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperiment());
  endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  return StartExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartLaunchOutcome CloudWatchEvidentlyClient::StartLaunch(const StartLaunchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartLaunch", "Required field: Launch, is not set");
    return StartLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Launch]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StartLaunch", "Required field: Project, is not set");
    return StartLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunch());
  endpointResolutionOutcome.GetResult().AddPathSegments("/start");
  return StartLaunchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopExperimentOutcome CloudWatchEvidentlyClient::StopExperiment(const StopExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExperimentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopExperiment", "Required field: Experiment, is not set");
    return StopExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Experiment]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopExperiment", "Required field: Project, is not set");
    return StopExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperiment());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  return StopExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopLaunchOutcome CloudWatchEvidentlyClient::StopLaunch(const StopLaunchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopLaunch", "Required field: Launch, is not set");
    return StopLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Launch]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopLaunch", "Required field: Project, is not set");
    return StopLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunch());
  endpointResolutionOutcome.GetResult().AddPathSegments("/cancel");
  return StopLaunchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcome CloudWatchEvidentlyClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestSegmentPatternOutcome CloudWatchEvidentlyClient::TestSegmentPattern(const TestSegmentPatternRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TestSegmentPattern, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TestSegmentPattern, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/test-segment-pattern");
  return TestSegmentPatternOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcome CloudWatchEvidentlyClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UpdateExperimentOutcome CloudWatchEvidentlyClient::UpdateExperiment(const UpdateExperimentRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ExperimentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExperiment", "Required field: Experiment, is not set");
    return UpdateExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Experiment]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExperiment", "Required field: Project, is not set");
    return UpdateExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateExperiment, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/experiments/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetExperiment());
  return UpdateExperimentOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateFeatureOutcome CloudWatchEvidentlyClient::UpdateFeature(const UpdateFeatureRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.FeatureHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFeature", "Required field: Feature, is not set");
    return UpdateFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Feature]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateFeature", "Required field: Project, is not set");
    return UpdateFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateFeature, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/features/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetFeature());
  return UpdateFeatureOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLaunchOutcome CloudWatchEvidentlyClient::UpdateLaunch(const UpdateLaunchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.LaunchHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLaunch", "Required field: Launch, is not set");
    return UpdateLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Launch]", false));
  }
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateLaunch", "Required field: Project, is not set");
    return UpdateLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateLaunch, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/launches/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetLaunch());
  return UpdateLaunchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcome CloudWatchEvidentlyClient::UpdateProject(const UpdateProjectRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: Project, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProject, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  return UpdateProjectOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectDataDeliveryOutcome CloudWatchEvidentlyClient::UpdateProjectDataDelivery(const UpdateProjectDataDeliveryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateProjectDataDelivery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProjectDataDelivery", "Required field: Project, is not set");
    return UpdateProjectDataDeliveryOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateProjectDataDelivery, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/projects/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetProject());
  endpointResolutionOutcome.GetResult().AddPathSegments("/data-delivery");
  return UpdateProjectDataDeliveryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

