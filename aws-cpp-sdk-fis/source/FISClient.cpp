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

#include <aws/fis/FISClient.h>
#include <aws/fis/FISEndpoint.h>
#include <aws/fis/FISErrorMarshaller.h>
#include <aws/fis/model/CreateExperimentTemplateRequest.h>
#include <aws/fis/model/DeleteExperimentTemplateRequest.h>
#include <aws/fis/model/GetActionRequest.h>
#include <aws/fis/model/GetExperimentRequest.h>
#include <aws/fis/model/GetExperimentTemplateRequest.h>
#include <aws/fis/model/GetTargetResourceTypeRequest.h>
#include <aws/fis/model/ListActionsRequest.h>
#include <aws/fis/model/ListExperimentTemplatesRequest.h>
#include <aws/fis/model/ListExperimentsRequest.h>
#include <aws/fis/model/ListTagsForResourceRequest.h>
#include <aws/fis/model/ListTargetResourceTypesRequest.h>
#include <aws/fis/model/StartExperimentRequest.h>
#include <aws/fis/model/StopExperimentRequest.h>
#include <aws/fis/model/TagResourceRequest.h>
#include <aws/fis/model/UntagResourceRequest.h>
#include <aws/fis/model/UpdateExperimentTemplateRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::FIS;
using namespace Aws::FIS::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "fis";
static const char* ALLOCATION_TAG = "FISClient";

FISClient::FISClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FISClient::FISClient(const AWSCredentials& credentials,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FISClient::FISClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                     const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FISClient::~FISClient()
{
}

void FISClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("fis");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + FISEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void FISClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}

CreateExperimentTemplateOutcome FISClient::CreateExperimentTemplate(const CreateExperimentTemplateRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/experimentTemplates");
  return CreateExperimentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExperimentTemplateOutcomeCallable FISClient::CreateExperimentTemplateCallable(const CreateExperimentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExperimentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExperimentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientCreateExperimentTemplateAsyncHelper(FISClient const * const clientThis, const CreateExperimentTemplateRequest& request, const CreateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateExperimentTemplate(request), context);
}

void FISClient::CreateExperimentTemplateAsync(const CreateExperimentTemplateRequest& request, const CreateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientCreateExperimentTemplateAsyncHelper( this, request, handler, context ); } );
}

DeleteExperimentTemplateOutcome FISClient::DeleteExperimentTemplate(const DeleteExperimentTemplateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExperimentTemplate", "Required field: Id, is not set");
    return DeleteExperimentTemplateOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/experimentTemplates/");
  uri.AddPathSegment(request.GetId());
  return DeleteExperimentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteExperimentTemplateOutcomeCallable FISClient::DeleteExperimentTemplateCallable(const DeleteExperimentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExperimentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExperimentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientDeleteExperimentTemplateAsyncHelper(FISClient const * const clientThis, const DeleteExperimentTemplateRequest& request, const DeleteExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteExperimentTemplate(request), context);
}

void FISClient::DeleteExperimentTemplateAsync(const DeleteExperimentTemplateRequest& request, const DeleteExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientDeleteExperimentTemplateAsyncHelper( this, request, handler, context ); } );
}

GetActionOutcome FISClient::GetAction(const GetActionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAction", "Required field: Id, is not set");
    return GetActionOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/actions/");
  uri.AddPathSegment(request.GetId());
  return GetActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetActionOutcomeCallable FISClient::GetActionCallable(const GetActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientGetActionAsyncHelper(FISClient const * const clientThis, const GetActionRequest& request, const GetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetAction(request), context);
}

void FISClient::GetActionAsync(const GetActionRequest& request, const GetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientGetActionAsyncHelper( this, request, handler, context ); } );
}

GetExperimentOutcome FISClient::GetExperiment(const GetExperimentRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExperiment", "Required field: Id, is not set");
    return GetExperimentOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/experiments/");
  uri.AddPathSegment(request.GetId());
  return GetExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExperimentOutcomeCallable FISClient::GetExperimentCallable(const GetExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientGetExperimentAsyncHelper(FISClient const * const clientThis, const GetExperimentRequest& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExperiment(request), context);
}

void FISClient::GetExperimentAsync(const GetExperimentRequest& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientGetExperimentAsyncHelper( this, request, handler, context ); } );
}

GetExperimentTemplateOutcome FISClient::GetExperimentTemplate(const GetExperimentTemplateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExperimentTemplate", "Required field: Id, is not set");
    return GetExperimentTemplateOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/experimentTemplates/");
  uri.AddPathSegment(request.GetId());
  return GetExperimentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExperimentTemplateOutcomeCallable FISClient::GetExperimentTemplateCallable(const GetExperimentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExperimentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExperimentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientGetExperimentTemplateAsyncHelper(FISClient const * const clientThis, const GetExperimentTemplateRequest& request, const GetExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetExperimentTemplate(request), context);
}

void FISClient::GetExperimentTemplateAsync(const GetExperimentTemplateRequest& request, const GetExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientGetExperimentTemplateAsyncHelper( this, request, handler, context ); } );
}

GetTargetResourceTypeOutcome FISClient::GetTargetResourceType(const GetTargetResourceTypeRequest& request) const
{
  if (!request.ResourceTypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetTargetResourceType", "Required field: ResourceType, is not set");
    return GetTargetResourceTypeOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceType]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/targetResourceTypes/");
  uri.AddPathSegment(request.GetResourceType());
  return GetTargetResourceTypeOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetTargetResourceTypeOutcomeCallable FISClient::GetTargetResourceTypeCallable(const GetTargetResourceTypeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTargetResourceTypeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTargetResourceType(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientGetTargetResourceTypeAsyncHelper(FISClient const * const clientThis, const GetTargetResourceTypeRequest& request, const GetTargetResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTargetResourceType(request), context);
}

void FISClient::GetTargetResourceTypeAsync(const GetTargetResourceTypeRequest& request, const GetTargetResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientGetTargetResourceTypeAsyncHelper( this, request, handler, context ); } );
}

ListActionsOutcome FISClient::ListActions(const ListActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/actions");
  return ListActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListActionsOutcomeCallable FISClient::ListActionsCallable(const ListActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientListActionsAsyncHelper(FISClient const * const clientThis, const ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListActions(request), context);
}

void FISClient::ListActionsAsync(const ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientListActionsAsyncHelper( this, request, handler, context ); } );
}

ListExperimentTemplatesOutcome FISClient::ListExperimentTemplates(const ListExperimentTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/experimentTemplates");
  return ListExperimentTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExperimentTemplatesOutcomeCallable FISClient::ListExperimentTemplatesCallable(const ListExperimentTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExperimentTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExperimentTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientListExperimentTemplatesAsyncHelper(FISClient const * const clientThis, const ListExperimentTemplatesRequest& request, const ListExperimentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExperimentTemplates(request), context);
}

void FISClient::ListExperimentTemplatesAsync(const ListExperimentTemplatesRequest& request, const ListExperimentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientListExperimentTemplatesAsyncHelper( this, request, handler, context ); } );
}

ListExperimentsOutcome FISClient::ListExperiments(const ListExperimentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/experiments");
  return ListExperimentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExperimentsOutcomeCallable FISClient::ListExperimentsCallable(const ListExperimentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExperimentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExperiments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientListExperimentsAsyncHelper(FISClient const * const clientThis, const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListExperiments(request), context);
}

void FISClient::ListExperimentsAsync(const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientListExperimentsAsyncHelper( this, request, handler, context ); } );
}

ListTagsForResourceOutcome FISClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable FISClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientListTagsForResourceAsyncHelper(FISClient const * const clientThis, const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTagsForResource(request), context);
}

void FISClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientListTagsForResourceAsyncHelper( this, request, handler, context ); } );
}

ListTargetResourceTypesOutcome FISClient::ListTargetResourceTypes(const ListTargetResourceTypesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/targetResourceTypes");
  return ListTargetResourceTypesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTargetResourceTypesOutcomeCallable FISClient::ListTargetResourceTypesCallable(const ListTargetResourceTypesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetResourceTypesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargetResourceTypes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientListTargetResourceTypesAsyncHelper(FISClient const * const clientThis, const ListTargetResourceTypesRequest& request, const ListTargetResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTargetResourceTypes(request), context);
}

void FISClient::ListTargetResourceTypesAsync(const ListTargetResourceTypesRequest& request, const ListTargetResourceTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientListTargetResourceTypesAsyncHelper( this, request, handler, context ); } );
}

StartExperimentOutcome FISClient::StartExperiment(const StartExperimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/experiments");
  return StartExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartExperimentOutcomeCallable FISClient::StartExperimentCallable(const StartExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientStartExperimentAsyncHelper(FISClient const * const clientThis, const StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartExperiment(request), context);
}

void FISClient::StartExperimentAsync(const StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientStartExperimentAsyncHelper( this, request, handler, context ); } );
}

StopExperimentOutcome FISClient::StopExperiment(const StopExperimentRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopExperiment", "Required field: Id, is not set");
    return StopExperimentOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/experiments/");
  uri.AddPathSegment(request.GetId());
  return StopExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

StopExperimentOutcomeCallable FISClient::StopExperimentCallable(const StopExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientStopExperimentAsyncHelper(FISClient const * const clientThis, const StopExperimentRequest& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopExperiment(request), context);
}

void FISClient::StopExperimentAsync(const StopExperimentRequest& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientStopExperimentAsyncHelper( this, request, handler, context ); } );
}

TagResourceOutcome FISClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable FISClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientTagResourceAsyncHelper(FISClient const * const clientThis, const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TagResource(request), context);
}

void FISClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientTagResourceAsyncHelper( this, request, handler, context ); } );
}

UntagResourceOutcome FISClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/tags/");
  uri.AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable FISClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientUntagResourceAsyncHelper(FISClient const * const clientThis, const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UntagResource(request), context);
}

void FISClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientUntagResourceAsyncHelper( this, request, handler, context ); } );
}

UpdateExperimentTemplateOutcome FISClient::UpdateExperimentTemplate(const UpdateExperimentTemplateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExperimentTemplate", "Required field: Id, is not set");
    return UpdateExperimentTemplateOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  uri.AddPathSegments("/experimentTemplates/");
  uri.AddPathSegment(request.GetId());
  return UpdateExperimentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateExperimentTemplateOutcomeCallable FISClient::UpdateExperimentTemplateCallable(const UpdateExperimentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExperimentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExperimentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClientUpdateExperimentTemplateAsyncHelper(FISClient const * const clientThis, const UpdateExperimentTemplateRequest& request, const UpdateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateExperimentTemplate(request), context);
}

void FISClient::UpdateExperimentTemplateAsync(const UpdateExperimentTemplateRequest& request, const UpdateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ FISClientUpdateExperimentTemplateAsyncHelper( this, request, handler, context ); } );
}

