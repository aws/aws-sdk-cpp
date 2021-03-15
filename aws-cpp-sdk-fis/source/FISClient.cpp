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
#include <aws/fis/model/ListActionsRequest.h>
#include <aws/fis/model/ListExperimentTemplatesRequest.h>
#include <aws/fis/model/ListExperimentsRequest.h>
#include <aws/fis/model/ListTagsForResourceRequest.h>
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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FISClient::FISClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FISClient::FISClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<FISErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

FISClient::~FISClient()
{
}

void FISClient::init(const ClientConfiguration& config)
{
  SetServiceClientName("fis");
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
  Aws::StringStream ss;
  ss << "/experimentTemplates";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateExperimentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateExperimentTemplateOutcomeCallable FISClient::CreateExperimentTemplateCallable(const CreateExperimentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateExperimentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateExperimentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::CreateExperimentTemplateAsync(const CreateExperimentTemplateRequest& request, const CreateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateExperimentTemplateAsyncHelper( request, handler, context ); } );
}

void FISClient::CreateExperimentTemplateAsyncHelper(const CreateExperimentTemplateRequest& request, const CreateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateExperimentTemplate(request), context);
}

DeleteExperimentTemplateOutcome FISClient::DeleteExperimentTemplate(const DeleteExperimentTemplateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteExperimentTemplate", "Required field: Id, is not set");
    return DeleteExperimentTemplateOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/experimentTemplates/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return DeleteExperimentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteExperimentTemplateOutcomeCallable FISClient::DeleteExperimentTemplateCallable(const DeleteExperimentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteExperimentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteExperimentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::DeleteExperimentTemplateAsync(const DeleteExperimentTemplateRequest& request, const DeleteExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteExperimentTemplateAsyncHelper( request, handler, context ); } );
}

void FISClient::DeleteExperimentTemplateAsyncHelper(const DeleteExperimentTemplateRequest& request, const DeleteExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteExperimentTemplate(request), context);
}

GetActionOutcome FISClient::GetAction(const GetActionRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetAction", "Required field: Id, is not set");
    return GetActionOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/actions/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetActionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetActionOutcomeCallable FISClient::GetActionCallable(const GetActionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetActionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetAction(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::GetActionAsync(const GetActionRequest& request, const GetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetActionAsyncHelper( request, handler, context ); } );
}

void FISClient::GetActionAsyncHelper(const GetActionRequest& request, const GetActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetAction(request), context);
}

GetExperimentOutcome FISClient::GetExperiment(const GetExperimentRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExperiment", "Required field: Id, is not set");
    return GetExperimentOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/experiments/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExperimentOutcomeCallable FISClient::GetExperimentCallable(const GetExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::GetExperimentAsync(const GetExperimentRequest& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExperimentAsyncHelper( request, handler, context ); } );
}

void FISClient::GetExperimentAsyncHelper(const GetExperimentRequest& request, const GetExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExperiment(request), context);
}

GetExperimentTemplateOutcome FISClient::GetExperimentTemplate(const GetExperimentTemplateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetExperimentTemplate", "Required field: Id, is not set");
    return GetExperimentTemplateOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/experimentTemplates/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return GetExperimentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetExperimentTemplateOutcomeCallable FISClient::GetExperimentTemplateCallable(const GetExperimentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExperimentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExperimentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::GetExperimentTemplateAsync(const GetExperimentTemplateRequest& request, const GetExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExperimentTemplateAsyncHelper( request, handler, context ); } );
}

void FISClient::GetExperimentTemplateAsyncHelper(const GetExperimentTemplateRequest& request, const GetExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExperimentTemplate(request), context);
}

ListActionsOutcome FISClient::ListActions(const ListActionsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/actions";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListActionsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListActionsOutcomeCallable FISClient::ListActionsCallable(const ListActionsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListActionsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListActions(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::ListActionsAsync(const ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListActionsAsyncHelper( request, handler, context ); } );
}

void FISClient::ListActionsAsyncHelper(const ListActionsRequest& request, const ListActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListActions(request), context);
}

ListExperimentTemplatesOutcome FISClient::ListExperimentTemplates(const ListExperimentTemplatesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/experimentTemplates";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListExperimentTemplatesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExperimentTemplatesOutcomeCallable FISClient::ListExperimentTemplatesCallable(const ListExperimentTemplatesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExperimentTemplatesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExperimentTemplates(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::ListExperimentTemplatesAsync(const ListExperimentTemplatesRequest& request, const ListExperimentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListExperimentTemplatesAsyncHelper( request, handler, context ); } );
}

void FISClient::ListExperimentTemplatesAsyncHelper(const ListExperimentTemplatesRequest& request, const ListExperimentTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExperimentTemplates(request), context);
}

ListExperimentsOutcome FISClient::ListExperiments(const ListExperimentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/experiments";
  uri.SetPath(uri.GetPath() + ss.str());
  return ListExperimentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListExperimentsOutcomeCallable FISClient::ListExperimentsCallable(const ListExperimentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListExperimentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListExperiments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::ListExperimentsAsync(const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListExperimentsAsyncHelper( request, handler, context ); } );
}

void FISClient::ListExperimentsAsyncHelper(const ListExperimentsRequest& request, const ListExperimentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListExperiments(request), context);
}

ListTagsForResourceOutcome FISClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable FISClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void FISClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

StartExperimentOutcome FISClient::StartExperiment(const StartExperimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/experiments";
  uri.SetPath(uri.GetPath() + ss.str());
  return StartExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartExperimentOutcomeCallable FISClient::StartExperimentCallable(const StartExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::StartExperimentAsync(const StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartExperimentAsyncHelper( request, handler, context ); } );
}

void FISClient::StartExperimentAsyncHelper(const StartExperimentRequest& request, const StartExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartExperiment(request), context);
}

StopExperimentOutcome FISClient::StopExperiment(const StopExperimentRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("StopExperiment", "Required field: Id, is not set");
    return StopExperimentOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/experiments/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return StopExperimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

StopExperimentOutcomeCallable FISClient::StopExperimentCallable(const StopExperimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopExperimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopExperiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::StopExperimentAsync(const StopExperimentRequest& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StopExperimentAsyncHelper( request, handler, context ); } );
}

void FISClient::StopExperimentAsyncHelper(const StopExperimentRequest& request, const StopExperimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopExperiment(request), context);
}

TagResourceOutcome FISClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable FISClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void FISClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome FISClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable FISClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void FISClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

UpdateExperimentTemplateOutcome FISClient::UpdateExperimentTemplate(const UpdateExperimentTemplateRequest& request) const
{
  if (!request.IdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UpdateExperimentTemplate", "Required field: Id, is not set");
    return UpdateExperimentTemplateOutcome(Aws::Client::AWSError<FISErrors>(FISErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Id]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/experimentTemplates/";
  ss << request.GetId();
  uri.SetPath(uri.GetPath() + ss.str());
  return UpdateExperimentTemplateOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PATCH, Aws::Auth::SIGV4_SIGNER));
}

UpdateExperimentTemplateOutcomeCallable FISClient::UpdateExperimentTemplateCallable(const UpdateExperimentTemplateRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateExperimentTemplateOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateExperimentTemplate(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void FISClient::UpdateExperimentTemplateAsync(const UpdateExperimentTemplateRequest& request, const UpdateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateExperimentTemplateAsyncHelper( request, handler, context ); } );
}

void FISClient::UpdateExperimentTemplateAsyncHelper(const UpdateExperimentTemplateRequest& request, const UpdateExperimentTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateExperimentTemplate(request), context);
}

