/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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

#include <aws/codeguru-reviewer/CodeGuruReviewerClient.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerEndpoint.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerErrorMarshaller.h>
#include <aws/codeguru-reviewer/model/AssociateRepositoryRequest.h>
#include <aws/codeguru-reviewer/model/DescribeCodeReviewRequest.h>
#include <aws/codeguru-reviewer/model/DescribeRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/DescribeRepositoryAssociationRequest.h>
#include <aws/codeguru-reviewer/model/DisassociateRepositoryRequest.h>
#include <aws/codeguru-reviewer/model/ListCodeReviewsRequest.h>
#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsRequest.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsRequest.h>
#include <aws/codeguru-reviewer/model/PutRecommendationFeedbackRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CodeGuruReviewer;
using namespace Aws::CodeGuruReviewer::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "codeguru-reviewer";
static const char* ALLOCATION_TAG = "CodeGuruReviewerClient";


CodeGuruReviewerClient::CodeGuruReviewerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruReviewerClient::~CodeGuruReviewerClient()
{
}

void CodeGuruReviewerClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CodeGuruReviewerEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CodeGuruReviewerClient::OverrideEndpoint(const Aws::String& endpoint)
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

AssociateRepositoryOutcome CodeGuruReviewerClient::AssociateRepository(const AssociateRepositoryRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AssociateRepositoryOutcome(AssociateRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return AssociateRepositoryOutcome(outcome.GetError());
  }
}

AssociateRepositoryOutcomeCallable CodeGuruReviewerClient::AssociateRepositoryCallable(const AssociateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AssociateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AssociateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::AssociateRepositoryAsync(const AssociateRepositoryRequest& request, const AssociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AssociateRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::AssociateRepositoryAsyncHelper(const AssociateRepositoryRequest& request, const AssociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AssociateRepository(request), context);
}

DescribeCodeReviewOutcome CodeGuruReviewerClient::DescribeCodeReview(const DescribeCodeReviewRequest& request) const
{
  if (!request.CodeReviewArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCodeReview", "Required field: CodeReviewArn, is not set");
    return DescribeCodeReviewOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/codereviews/";
  ss << request.GetCodeReviewArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeCodeReviewOutcome(DescribeCodeReviewResult(outcome.GetResult()));
  }
  else
  {
    return DescribeCodeReviewOutcome(outcome.GetError());
  }
}

DescribeCodeReviewOutcomeCallable CodeGuruReviewerClient::DescribeCodeReviewCallable(const DescribeCodeReviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeCodeReviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeCodeReview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::DescribeCodeReviewAsync(const DescribeCodeReviewRequest& request, const DescribeCodeReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeCodeReviewAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::DescribeCodeReviewAsyncHelper(const DescribeCodeReviewRequest& request, const DescribeCodeReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeCodeReview(request), context);
}

DescribeRecommendationFeedbackOutcome CodeGuruReviewerClient::DescribeRecommendationFeedback(const DescribeRecommendationFeedbackRequest& request) const
{
  if (!request.CodeReviewArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRecommendationFeedback", "Required field: CodeReviewArn, is not set");
    return DescribeRecommendationFeedbackOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }
  if (!request.RecommendationIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRecommendationFeedback", "Required field: RecommendationId, is not set");
    return DescribeRecommendationFeedbackOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [RecommendationId]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/feedback/";
  ss << request.GetCodeReviewArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRecommendationFeedbackOutcome(DescribeRecommendationFeedbackResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRecommendationFeedbackOutcome(outcome.GetError());
  }
}

DescribeRecommendationFeedbackOutcomeCallable CodeGuruReviewerClient::DescribeRecommendationFeedbackCallable(const DescribeRecommendationFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRecommendationFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRecommendationFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::DescribeRecommendationFeedbackAsync(const DescribeRecommendationFeedbackRequest& request, const DescribeRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRecommendationFeedbackAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::DescribeRecommendationFeedbackAsyncHelper(const DescribeRecommendationFeedbackRequest& request, const DescribeRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRecommendationFeedback(request), context);
}

DescribeRepositoryAssociationOutcome CodeGuruReviewerClient::DescribeRepositoryAssociation(const DescribeRepositoryAssociationRequest& request) const
{
  if (!request.AssociationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRepositoryAssociation", "Required field: AssociationArn, is not set");
    return DescribeRepositoryAssociationOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associations/";
  ss << request.GetAssociationArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRepositoryAssociationOutcome(DescribeRepositoryAssociationResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRepositoryAssociationOutcome(outcome.GetError());
  }
}

DescribeRepositoryAssociationOutcomeCallable CodeGuruReviewerClient::DescribeRepositoryAssociationCallable(const DescribeRepositoryAssociationRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRepositoryAssociationOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRepositoryAssociation(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::DescribeRepositoryAssociationAsync(const DescribeRepositoryAssociationRequest& request, const DescribeRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRepositoryAssociationAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::DescribeRepositoryAssociationAsyncHelper(const DescribeRepositoryAssociationRequest& request, const DescribeRepositoryAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRepositoryAssociation(request), context);
}

DisassociateRepositoryOutcome CodeGuruReviewerClient::DisassociateRepository(const DisassociateRepositoryRequest& request) const
{
  if (!request.AssociationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateRepository", "Required field: AssociationArn, is not set");
    return DisassociateRepositoryOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associations/";
  ss << request.GetAssociationArn();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DisassociateRepositoryOutcome(DisassociateRepositoryResult(outcome.GetResult()));
  }
  else
  {
    return DisassociateRepositoryOutcome(outcome.GetError());
  }
}

DisassociateRepositoryOutcomeCallable CodeGuruReviewerClient::DisassociateRepositoryCallable(const DisassociateRepositoryRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DisassociateRepositoryOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DisassociateRepository(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::DisassociateRepositoryAsync(const DisassociateRepositoryRequest& request, const DisassociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DisassociateRepositoryAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::DisassociateRepositoryAsyncHelper(const DisassociateRepositoryRequest& request, const DisassociateRepositoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DisassociateRepository(request), context);
}

ListCodeReviewsOutcome CodeGuruReviewerClient::ListCodeReviews(const ListCodeReviewsRequest& request) const
{
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCodeReviews", "Required field: Type, is not set");
    return ListCodeReviewsOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/codereviews";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListCodeReviewsOutcome(ListCodeReviewsResult(outcome.GetResult()));
  }
  else
  {
    return ListCodeReviewsOutcome(outcome.GetError());
  }
}

ListCodeReviewsOutcomeCallable CodeGuruReviewerClient::ListCodeReviewsCallable(const ListCodeReviewsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListCodeReviewsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListCodeReviews(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::ListCodeReviewsAsync(const ListCodeReviewsRequest& request, const ListCodeReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListCodeReviewsAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::ListCodeReviewsAsyncHelper(const ListCodeReviewsRequest& request, const ListCodeReviewsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListCodeReviews(request), context);
}

ListRecommendationFeedbackOutcome CodeGuruReviewerClient::ListRecommendationFeedback(const ListRecommendationFeedbackRequest& request) const
{
  if (!request.CodeReviewArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecommendationFeedback", "Required field: CodeReviewArn, is not set");
    return ListRecommendationFeedbackOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/feedback/";
  ss << request.GetCodeReviewArn();
  ss << "/RecommendationFeedback";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRecommendationFeedbackOutcome(ListRecommendationFeedbackResult(outcome.GetResult()));
  }
  else
  {
    return ListRecommendationFeedbackOutcome(outcome.GetError());
  }
}

ListRecommendationFeedbackOutcomeCallable CodeGuruReviewerClient::ListRecommendationFeedbackCallable(const ListRecommendationFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecommendationFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecommendationFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::ListRecommendationFeedbackAsync(const ListRecommendationFeedbackRequest& request, const ListRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecommendationFeedbackAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::ListRecommendationFeedbackAsyncHelper(const ListRecommendationFeedbackRequest& request, const ListRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecommendationFeedback(request), context);
}

ListRecommendationsOutcome CodeGuruReviewerClient::ListRecommendations(const ListRecommendationsRequest& request) const
{
  if (!request.CodeReviewArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecommendations", "Required field: CodeReviewArn, is not set");
    return ListRecommendationsOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/codereviews/";
  ss << request.GetCodeReviewArn();
  ss << "/Recommendations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRecommendationsOutcome(ListRecommendationsResult(outcome.GetResult()));
  }
  else
  {
    return ListRecommendationsOutcome(outcome.GetError());
  }
}

ListRecommendationsOutcomeCallable CodeGuruReviewerClient::ListRecommendationsCallable(const ListRecommendationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRecommendationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRecommendations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::ListRecommendationsAsync(const ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRecommendationsAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::ListRecommendationsAsyncHelper(const ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRecommendations(request), context);
}

ListRepositoryAssociationsOutcome CodeGuruReviewerClient::ListRepositoryAssociations(const ListRepositoryAssociationsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/associations";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRepositoryAssociationsOutcome(ListRepositoryAssociationsResult(outcome.GetResult()));
  }
  else
  {
    return ListRepositoryAssociationsOutcome(outcome.GetError());
  }
}

ListRepositoryAssociationsOutcomeCallable CodeGuruReviewerClient::ListRepositoryAssociationsCallable(const ListRepositoryAssociationsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRepositoryAssociationsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRepositoryAssociations(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::ListRepositoryAssociationsAsync(const ListRepositoryAssociationsRequest& request, const ListRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRepositoryAssociationsAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::ListRepositoryAssociationsAsyncHelper(const ListRepositoryAssociationsRequest& request, const ListRepositoryAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRepositoryAssociations(request), context);
}

PutRecommendationFeedbackOutcome CodeGuruReviewerClient::PutRecommendationFeedback(const PutRecommendationFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/feedback";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return PutRecommendationFeedbackOutcome(PutRecommendationFeedbackResult(outcome.GetResult()));
  }
  else
  {
    return PutRecommendationFeedbackOutcome(outcome.GetError());
  }
}

PutRecommendationFeedbackOutcomeCallable CodeGuruReviewerClient::PutRecommendationFeedbackCallable(const PutRecommendationFeedbackRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutRecommendationFeedbackOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutRecommendationFeedback(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::PutRecommendationFeedbackAsync(const PutRecommendationFeedbackRequest& request, const PutRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->PutRecommendationFeedbackAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::PutRecommendationFeedbackAsyncHelper(const PutRecommendationFeedbackRequest& request, const PutRecommendationFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, PutRecommendationFeedback(request), context);
}

