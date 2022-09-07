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

#include <aws/evidently/CloudWatchEvidentlyClient.h>
#include <aws/evidently/CloudWatchEvidentlyEndpoint.h>
#include <aws/evidently/CloudWatchEvidentlyErrorMarshaller.h>
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

static const char* SERVICE_NAME = "evidently";
static const char* ALLOCATION_TAG = "CloudWatchEvidentlyClient";

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const AWSCredentials& credentials,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchEvidentlyClient::CloudWatchEvidentlyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudWatchEvidentlyErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudWatchEvidentlyClient::~CloudWatchEvidentlyClient()
{
}

void CloudWatchEvidentlyClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Evidently");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  m_scheme = m_configScheme;
  if (config.endpointOverride.empty())
  {
      m_baseUri = CloudWatchEvidentlyEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
  m_enableHostPrefixInjection = config.enableHostPrefixInjection;
}

void CloudWatchEvidentlyClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0)
  {
      m_scheme = "http";
      m_baseUri = endpoint.substr(7);
  }
  else if (endpoint.compare(0, 8, "https://") == 0)
  {
      m_scheme = "https";
      m_baseUri = endpoint.substr(8);
  }
  else
  {
      m_scheme = m_configScheme;
      m_baseUri = endpoint;
  }
}

BatchEvaluateFeatureOutcome CloudWatchEvidentlyClient::BatchEvaluateFeature(const BatchEvaluateFeatureRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("BatchEvaluateFeature", "Required field: Project, is not set");
    return BatchEvaluateFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("dataplane." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("BatchEvaluateFeature", "Invalid DNS host: " << uri.GetAuthority());
      return BatchEvaluateFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/evaluations");
  return BatchEvaluateFeatureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchEvaluateFeatureOutcomeCallable CloudWatchEvidentlyClient::BatchEvaluateFeatureCallable(const BatchEvaluateFeatureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchEvaluateFeatureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchEvaluateFeature(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientBatchEvaluateFeatureAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const BatchEvaluateFeatureRequest& request, const BatchEvaluateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->BatchEvaluateFeature(request), context);
}

void CloudWatchEvidentlyClient::BatchEvaluateFeatureAsync(const BatchEvaluateFeatureRequest& request, const BatchEvaluateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientBatchEvaluateFeatureAsyncHelper( this, request, handler, context ); } );
}

CreateExperimentOutcome CloudWatchEvidentlyClient::CreateExperiment(const CreateExperimentRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateExperiment", "Required field: Project, is not set");
    return CreateExperimentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/experiments");
  return CreateExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExperimentOutcomeCallable CloudWatchEvidentlyClient::CreateExperimentCallable(const CreateExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientCreateExperimentAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateExperiment(request), context);
}

void CloudWatchEvidentlyClient::CreateExperimentAsync(const CreateExperimentRequest& request, const CreateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientCreateExperimentAsyncHelper( this, request, handler, context ); } );
}

CreateFeatureOutcome CloudWatchEvidentlyClient::CreateFeature(const CreateFeatureRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateFeature", "Required field: Project, is not set");
    return CreateFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/features");
  return CreateFeatureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateFeatureOutcomeCallable CloudWatchEvidentlyClient::CreateFeatureCallable(const CreateFeatureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateFeatureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateFeature(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientCreateFeatureAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const CreateFeatureRequest& request, const CreateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateFeature(request), context);
}

void CloudWatchEvidentlyClient::CreateFeatureAsync(const CreateFeatureRequest& request, const CreateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientCreateFeatureAsyncHelper( this, request, handler, context ); } );
}

CreateLaunchOutcome CloudWatchEvidentlyClient::CreateLaunch(const CreateLaunchRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("CreateLaunch", "Required field: Project, is not set");
    return CreateLaunchOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/launches");
  return CreateLaunchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateLaunchOutcomeCallable CloudWatchEvidentlyClient::CreateLaunchCallable(const CreateLaunchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateLaunchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateLaunch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientCreateLaunchAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const CreateLaunchRequest& request, const CreateLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateLaunch(request), context);
}

void CloudWatchEvidentlyClient::CreateLaunchAsync(const CreateLaunchRequest& request, const CreateLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientCreateLaunchAsyncHelper( this, request, handler, context ); } );
}

CreateProjectOutcome CloudWatchEvidentlyClient::CreateProject(const CreateProjectRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects");
  return CreateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateProjectOutcomeCallable CloudWatchEvidentlyClient::CreateProjectCallable(const CreateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientCreateProjectAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateProject(request), context);
}

void CloudWatchEvidentlyClient::CreateProjectAsync(const CreateProjectRequest& request, const CreateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientCreateProjectAsyncHelper( this, request, handler, context ); } );
}

CreateSegmentOutcome CloudWatchEvidentlyClient::CreateSegment(const CreateSegmentRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/segments");
  return CreateSegmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateSegmentOutcomeCallable CloudWatchEvidentlyClient::CreateSegmentCallable(const CreateSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientCreateSegmentAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateSegment(request), context);
}

void CloudWatchEvidentlyClient::CreateSegmentAsync(const CreateSegmentRequest& request, const CreateSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientCreateSegmentAsyncHelper( this, request, handler, context ); } );
}

DeleteExperimentOutcome CloudWatchEvidentlyClient::DeleteExperiment(const DeleteExperimentRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/experiments/");
  uri.AddPathSegment(request.GetExperiment());
  return DeleteExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteExperimentOutcomeCallable CloudWatchEvidentlyClient::DeleteExperimentCallable(const DeleteExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientDeleteExperimentAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteExperiment(request), context);
}

void CloudWatchEvidentlyClient::DeleteExperimentAsync(const DeleteExperimentRequest& request, const DeleteExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientDeleteExperimentAsyncHelper( this, request, handler, context ); } );
}

DeleteFeatureOutcome CloudWatchEvidentlyClient::DeleteFeature(const DeleteFeatureRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/features/");
  uri.AddPathSegment(request.GetFeature());
  return DeleteFeatureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteFeatureOutcomeCallable CloudWatchEvidentlyClient::DeleteFeatureCallable(const DeleteFeatureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteFeatureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteFeature(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientDeleteFeatureAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const DeleteFeatureRequest& request, const DeleteFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteFeature(request), context);
}

void CloudWatchEvidentlyClient::DeleteFeatureAsync(const DeleteFeatureRequest& request, const DeleteFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientDeleteFeatureAsyncHelper( this, request, handler, context ); } );
}

DeleteLaunchOutcome CloudWatchEvidentlyClient::DeleteLaunch(const DeleteLaunchRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/launches/");
  uri.AddPathSegment(request.GetLaunch());
  return DeleteLaunchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLaunchOutcomeCallable CloudWatchEvidentlyClient::DeleteLaunchCallable(const DeleteLaunchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLaunchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLaunch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientDeleteLaunchAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const DeleteLaunchRequest& request, const DeleteLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteLaunch(request), context);
}

void CloudWatchEvidentlyClient::DeleteLaunchAsync(const DeleteLaunchRequest& request, const DeleteLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientDeleteLaunchAsyncHelper( this, request, handler, context ); } );
}

DeleteProjectOutcome CloudWatchEvidentlyClient::DeleteProject(const DeleteProjectRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteProject", "Required field: Project, is not set");
    return DeleteProjectOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  return DeleteProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteProjectOutcomeCallable CloudWatchEvidentlyClient::DeleteProjectCallable(const DeleteProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientDeleteProjectAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteProject(request), context);
}

void CloudWatchEvidentlyClient::DeleteProjectAsync(const DeleteProjectRequest& request, const DeleteProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientDeleteProjectAsyncHelper( this, request, handler, context ); } );
}

DeleteSegmentOutcome CloudWatchEvidentlyClient::DeleteSegment(const DeleteSegmentRequest& request) const
{
  if (!request.SegmentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteSegment", "Required field: Segment, is not set");
    return DeleteSegmentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Segment]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/segments/");
  uri.AddPathSegment(request.GetSegment());
  return DeleteSegmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteSegmentOutcomeCallable CloudWatchEvidentlyClient::DeleteSegmentCallable(const DeleteSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientDeleteSegmentAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteSegment(request), context);
}

void CloudWatchEvidentlyClient::DeleteSegmentAsync(const DeleteSegmentRequest& request, const DeleteSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientDeleteSegmentAsyncHelper( this, request, handler, context ); } );
}

EvaluateFeatureOutcome CloudWatchEvidentlyClient::EvaluateFeature(const EvaluateFeatureRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("dataplane." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("EvaluateFeature", "Invalid DNS host: " << uri.GetAuthority());
      return EvaluateFeatureOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/evaluations/");
  uri.AddPathSegment(request.GetFeature());
  return EvaluateFeatureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

EvaluateFeatureOutcomeCallable CloudWatchEvidentlyClient::EvaluateFeatureCallable(const EvaluateFeatureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< EvaluateFeatureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->EvaluateFeature(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientEvaluateFeatureAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const EvaluateFeatureRequest& request, const EvaluateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->EvaluateFeature(request), context);
}

void CloudWatchEvidentlyClient::EvaluateFeatureAsync(const EvaluateFeatureRequest& request, const EvaluateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientEvaluateFeatureAsyncHelper( this, request, handler, context ); } );
}

GetExperimentOutcome CloudWatchEvidentlyClient::GetExperiment(const GetExperimentRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/experiments/");
  uri.AddPathSegment(request.GetExperiment());
  return GetExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExperimentOutcomeCallable CloudWatchEvidentlyClient::GetExperimentCallable(const GetExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientGetExperimentAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const GetExperimentRequest& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExperiment(request), context);
}

void CloudWatchEvidentlyClient::GetExperimentAsync(const GetExperimentRequest& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientGetExperimentAsyncHelper( this, request, handler, context ); } );
}

GetExperimentResultsOutcome CloudWatchEvidentlyClient::GetExperimentResults(const GetExperimentResultsRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/experiments/");
  uri.AddPathSegment(request.GetExperiment());
  uri.AddPathSegments("/results");
  return GetExperimentResultsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetExperimentResultsOutcomeCallable CloudWatchEvidentlyClient::GetExperimentResultsCallable(const GetExperimentResultsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExperimentResultsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExperimentResults(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientGetExperimentResultsAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const GetExperimentResultsRequest& request, const GetExperimentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExperimentResults(request), context);
}

void CloudWatchEvidentlyClient::GetExperimentResultsAsync(const GetExperimentResultsRequest& request, const GetExperimentResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientGetExperimentResultsAsyncHelper( this, request, handler, context ); } );
}

GetFeatureOutcome CloudWatchEvidentlyClient::GetFeature(const GetFeatureRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/features/");
  uri.AddPathSegment(request.GetFeature());
  return GetFeatureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetFeatureOutcomeCallable CloudWatchEvidentlyClient::GetFeatureCallable(const GetFeatureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetFeatureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetFeature(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientGetFeatureAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const GetFeatureRequest& request, const GetFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetFeature(request), context);
}

void CloudWatchEvidentlyClient::GetFeatureAsync(const GetFeatureRequest& request, const GetFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientGetFeatureAsyncHelper( this, request, handler, context ); } );
}

GetLaunchOutcome CloudWatchEvidentlyClient::GetLaunch(const GetLaunchRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/launches/");
  uri.AddPathSegment(request.GetLaunch());
  return GetLaunchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLaunchOutcomeCallable CloudWatchEvidentlyClient::GetLaunchCallable(const GetLaunchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLaunchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLaunch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientGetLaunchAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const GetLaunchRequest& request, const GetLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetLaunch(request), context);
}

void CloudWatchEvidentlyClient::GetLaunchAsync(const GetLaunchRequest& request, const GetLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientGetLaunchAsyncHelper( this, request, handler, context ); } );
}

GetProjectOutcome CloudWatchEvidentlyClient::GetProject(const GetProjectRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetProject", "Required field: Project, is not set");
    return GetProjectOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  return GetProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetProjectOutcomeCallable CloudWatchEvidentlyClient::GetProjectCallable(const GetProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientGetProjectAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetProject(request), context);
}

void CloudWatchEvidentlyClient::GetProjectAsync(const GetProjectRequest& request, const GetProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientGetProjectAsyncHelper( this, request, handler, context ); } );
}

GetSegmentOutcome CloudWatchEvidentlyClient::GetSegment(const GetSegmentRequest& request) const
{
  if (!request.SegmentHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSegment", "Required field: Segment, is not set");
    return GetSegmentOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Segment]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/segments/");
  uri.AddPathSegment(request.GetSegment());
  return GetSegmentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSegmentOutcomeCallable CloudWatchEvidentlyClient::GetSegmentCallable(const GetSegmentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSegmentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSegment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientGetSegmentAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetSegment(request), context);
}

void CloudWatchEvidentlyClient::GetSegmentAsync(const GetSegmentRequest& request, const GetSegmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientGetSegmentAsyncHelper( this, request, handler, context ); } );
}

ListExperimentsOutcome CloudWatchEvidentlyClient::ListExperiments(const ListExperimentsRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListExperiments", "Required field: Project, is not set");
    return ListExperimentsOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/experiments");
  return ListExperimentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExperimentsOutcomeCallable CloudWatchEvidentlyClient::ListExperimentsCallable(const ListExperimentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExperimentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExperiments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientListExperimentsAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExperiments(request), context);
}

void CloudWatchEvidentlyClient::ListExperimentsAsync(const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientListExperimentsAsyncHelper( this, request, handler, context ); } );
}

ListFeaturesOutcome CloudWatchEvidentlyClient::ListFeatures(const ListFeaturesRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListFeatures", "Required field: Project, is not set");
    return ListFeaturesOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/features");
  return ListFeaturesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListFeaturesOutcomeCallable CloudWatchEvidentlyClient::ListFeaturesCallable(const ListFeaturesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListFeaturesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListFeatures(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientListFeaturesAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const ListFeaturesRequest& request, const ListFeaturesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListFeatures(request), context);
}

void CloudWatchEvidentlyClient::ListFeaturesAsync(const ListFeaturesRequest& request, const ListFeaturesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientListFeaturesAsyncHelper( this, request, handler, context ); } );
}

ListLaunchesOutcome CloudWatchEvidentlyClient::ListLaunches(const ListLaunchesRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListLaunches", "Required field: Project, is not set");
    return ListLaunchesOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/launches");
  return ListLaunchesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLaunchesOutcomeCallable CloudWatchEvidentlyClient::ListLaunchesCallable(const ListLaunchesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLaunchesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLaunches(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientListLaunchesAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const ListLaunchesRequest& request, const ListLaunchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLaunches(request), context);
}

void CloudWatchEvidentlyClient::ListLaunchesAsync(const ListLaunchesRequest& request, const ListLaunchesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientListLaunchesAsyncHelper( this, request, handler, context ); } );
}

ListProjectsOutcome CloudWatchEvidentlyClient::ListProjects(const ListProjectsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects");
  return ListProjectsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListProjectsOutcomeCallable CloudWatchEvidentlyClient::ListProjectsCallable(const ListProjectsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListProjectsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListProjects(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientListProjectsAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListProjects(request), context);
}

void CloudWatchEvidentlyClient::ListProjectsAsync(const ListProjectsRequest& request, const ListProjectsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientListProjectsAsyncHelper( this, request, handler, context ); } );
}

ListSegmentReferencesOutcome CloudWatchEvidentlyClient::ListSegmentReferences(const ListSegmentReferencesRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/segments/");
  uri.AddPathSegment(request.GetSegment());
  uri.AddPathSegments("/references");
  return ListSegmentReferencesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSegmentReferencesOutcomeCallable CloudWatchEvidentlyClient::ListSegmentReferencesCallable(const ListSegmentReferencesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSegmentReferencesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSegmentReferences(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientListSegmentReferencesAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const ListSegmentReferencesRequest& request, const ListSegmentReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSegmentReferences(request), context);
}

void CloudWatchEvidentlyClient::ListSegmentReferencesAsync(const ListSegmentReferencesRequest& request, const ListSegmentReferencesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientListSegmentReferencesAsyncHelper( this, request, handler, context ); } );
}

ListSegmentsOutcome CloudWatchEvidentlyClient::ListSegments(const ListSegmentsRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/segments");
  return ListSegmentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSegmentsOutcomeCallable CloudWatchEvidentlyClient::ListSegmentsCallable(const ListSegmentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSegmentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSegments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientListSegmentsAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const ListSegmentsRequest& request, const ListSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListSegments(request), context);
}

void CloudWatchEvidentlyClient::ListSegmentsAsync(const ListSegmentsRequest& request, const ListSegmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientListSegmentsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome CloudWatchEvidentlyClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CloudWatchEvidentlyClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientListTagsForResourceAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void CloudWatchEvidentlyClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

PutProjectEventsOutcome CloudWatchEvidentlyClient::PutProjectEvents(const PutProjectEventsRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutProjectEvents", "Required field: Project, is not set");
    return PutProjectEventsOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  if (m_enableHostPrefixInjection)
  {
    uri.SetAuthority("dataplane." + uri.GetAuthority());
    if (!Aws::Utils::IsValidHost(uri.GetAuthority()))
    {
      AWS_LOGSTREAM_ERROR("PutProjectEvents", "Invalid DNS host: " << uri.GetAuthority());
      return PutProjectEventsOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::INVALID_PARAMETER_VALUE, "INVALID_PARAMETER", "Host is invalid", false));
    }
  }
  uri.AddPathSegments("/events/projects/");
  uri.AddPathSegment(request.GetProject());
  return PutProjectEventsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutProjectEventsOutcomeCallable CloudWatchEvidentlyClient::PutProjectEventsCallable(const PutProjectEventsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutProjectEventsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutProjectEvents(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientPutProjectEventsAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const PutProjectEventsRequest& request, const PutProjectEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->PutProjectEvents(request), context);
}

void CloudWatchEvidentlyClient::PutProjectEventsAsync(const PutProjectEventsRequest& request, const PutProjectEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientPutProjectEventsAsyncHelper( this, request, handler, context ); } );
}

StartExperimentOutcome CloudWatchEvidentlyClient::StartExperiment(const StartExperimentRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/experiments/");
  uri.AddPathSegment(request.GetExperiment());
  uri.AddPathSegments("/start");
  return StartExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartExperimentOutcomeCallable CloudWatchEvidentlyClient::StartExperimentCallable(const StartExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientStartExperimentAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartExperiment(request), context);
}

void CloudWatchEvidentlyClient::StartExperimentAsync(const StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientStartExperimentAsyncHelper( this, request, handler, context ); } );
}

StartLaunchOutcome CloudWatchEvidentlyClient::StartLaunch(const StartLaunchRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/launches/");
  uri.AddPathSegment(request.GetLaunch());
  uri.AddPathSegments("/start");
  return StartLaunchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartLaunchOutcomeCallable CloudWatchEvidentlyClient::StartLaunchCallable(const StartLaunchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartLaunchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartLaunch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientStartLaunchAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const StartLaunchRequest& request, const StartLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartLaunch(request), context);
}

void CloudWatchEvidentlyClient::StartLaunchAsync(const StartLaunchRequest& request, const StartLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientStartLaunchAsyncHelper( this, request, handler, context ); } );
}

StopExperimentOutcome CloudWatchEvidentlyClient::StopExperiment(const StopExperimentRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/experiments/");
  uri.AddPathSegment(request.GetExperiment());
  uri.AddPathSegments("/cancel");
  return StopExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopExperimentOutcomeCallable CloudWatchEvidentlyClient::StopExperimentCallable(const StopExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientStopExperimentAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const StopExperimentRequest& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopExperiment(request), context);
}

void CloudWatchEvidentlyClient::StopExperimentAsync(const StopExperimentRequest& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientStopExperimentAsyncHelper( this, request, handler, context ); } );
}

StopLaunchOutcome CloudWatchEvidentlyClient::StopLaunch(const StopLaunchRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/launches/");
  uri.AddPathSegment(request.GetLaunch());
  uri.AddPathSegments("/cancel");
  return StopLaunchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopLaunchOutcomeCallable CloudWatchEvidentlyClient::StopLaunchCallable(const StopLaunchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopLaunchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopLaunch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientStopLaunchAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const StopLaunchRequest& request, const StopLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopLaunch(request), context);
}

void CloudWatchEvidentlyClient::StopLaunchAsync(const StopLaunchRequest& request, const StopLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientStopLaunchAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome CloudWatchEvidentlyClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CloudWatchEvidentlyClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientTagResourceAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void CloudWatchEvidentlyClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

TestSegmentPatternOutcome CloudWatchEvidentlyClient::TestSegmentPattern(const TestSegmentPatternRequest& request) const
{
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/test-segment-pattern");
  return TestSegmentPatternOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TestSegmentPatternOutcomeCallable CloudWatchEvidentlyClient::TestSegmentPatternCallable(const TestSegmentPatternRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TestSegmentPatternOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TestSegmentPattern(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientTestSegmentPatternAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const TestSegmentPatternRequest& request, const TestSegmentPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TestSegmentPattern(request), context);
}

void CloudWatchEvidentlyClient::TestSegmentPatternAsync(const TestSegmentPatternRequest& request, const TestSegmentPatternResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientTestSegmentPatternAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome CloudWatchEvidentlyClient::UntagResource(const UntagResourceRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CloudWatchEvidentlyClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientUntagResourceAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void CloudWatchEvidentlyClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateExperimentOutcome CloudWatchEvidentlyClient::UpdateExperiment(const UpdateExperimentRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/experiments/");
  uri.AddPathSegment(request.GetExperiment());
  return UpdateExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateExperimentOutcomeCallable CloudWatchEvidentlyClient::UpdateExperimentCallable(const UpdateExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientUpdateExperimentAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateExperiment(request), context);
}

void CloudWatchEvidentlyClient::UpdateExperimentAsync(const UpdateExperimentRequest& request, const UpdateExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientUpdateExperimentAsyncHelper( this, request, handler, context ); } );
}

UpdateFeatureOutcome CloudWatchEvidentlyClient::UpdateFeature(const UpdateFeatureRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/features/");
  uri.AddPathSegment(request.GetFeature());
  return UpdateFeatureOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateFeatureOutcomeCallable CloudWatchEvidentlyClient::UpdateFeatureCallable(const UpdateFeatureRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateFeatureOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateFeature(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientUpdateFeatureAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const UpdateFeatureRequest& request, const UpdateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateFeature(request), context);
}

void CloudWatchEvidentlyClient::UpdateFeatureAsync(const UpdateFeatureRequest& request, const UpdateFeatureResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientUpdateFeatureAsyncHelper( this, request, handler, context ); } );
}

UpdateLaunchOutcome CloudWatchEvidentlyClient::UpdateLaunch(const UpdateLaunchRequest& request) const
{
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
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/launches/");
  uri.AddPathSegment(request.GetLaunch());
  return UpdateLaunchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateLaunchOutcomeCallable CloudWatchEvidentlyClient::UpdateLaunchCallable(const UpdateLaunchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateLaunchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateLaunch(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientUpdateLaunchAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const UpdateLaunchRequest& request, const UpdateLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateLaunch(request), context);
}

void CloudWatchEvidentlyClient::UpdateLaunchAsync(const UpdateLaunchRequest& request, const UpdateLaunchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientUpdateLaunchAsyncHelper( this, request, handler, context ); } );
}

UpdateProjectOutcome CloudWatchEvidentlyClient::UpdateProject(const UpdateProjectRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProject", "Required field: Project, is not set");
    return UpdateProjectOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  return UpdateProjectOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectOutcomeCallable CloudWatchEvidentlyClient::UpdateProjectCallable(const UpdateProjectRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProject(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientUpdateProjectAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProject(request), context);
}

void CloudWatchEvidentlyClient::UpdateProjectAsync(const UpdateProjectRequest& request, const UpdateProjectResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientUpdateProjectAsyncHelper( this, request, handler, context ); } );
}

UpdateProjectDataDeliveryOutcome CloudWatchEvidentlyClient::UpdateProjectDataDelivery(const UpdateProjectDataDeliveryRequest& request) const
{
  if (!request.ProjectHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateProjectDataDelivery", "Required field: Project, is not set");
    return UpdateProjectDataDeliveryOutcome(Aws::Client::AWSError<CloudWatchEvidentlyErrors>(CloudWatchEvidentlyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Project]", false));
  }
  Aws::Http::URI uri = m_scheme + "://" + m_baseUri;
  uri.AddPathSegments("/projects/");
  uri.AddPathSegment(request.GetProject());
  uri.AddPathSegments("/data-delivery");
  return UpdateProjectDataDeliveryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateProjectDataDeliveryOutcomeCallable CloudWatchEvidentlyClient::UpdateProjectDataDeliveryCallable(const UpdateProjectDataDeliveryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateProjectDataDeliveryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateProjectDataDelivery(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudWatchEvidentlyClientUpdateProjectDataDeliveryAsyncHelper(CloudWatchEvidentlyClient const * const clientThis, const UpdateProjectDataDeliveryRequest& request, const UpdateProjectDataDeliveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateProjectDataDelivery(request), context);
}

void CloudWatchEvidentlyClient::UpdateProjectDataDeliveryAsync(const UpdateProjectDataDeliveryRequest& request, const UpdateProjectDataDeliveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ CloudWatchEvidentlyClientUpdateProjectDataDeliveryAsyncHelper( this, request, handler, context ); } );
}

