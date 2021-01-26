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

#include <aws/codeguru-reviewer/CodeGuruReviewerClient.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerEndpoint.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerErrorMarshaller.h>
#include <aws/codeguru-reviewer/model/AssociateRepositoryRequest.h>
#include <aws/codeguru-reviewer/model/CreateCodeReviewRequest.h>
#include <aws/codeguru-reviewer/model/DescribeCodeReviewRequest.h>
#include <aws/codeguru-reviewer/model/DescribeRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/DescribeRepositoryAssociationRequest.h>
#include <aws/codeguru-reviewer/model/DisassociateRepositoryRequest.h>
#include <aws/codeguru-reviewer/model/ListCodeReviewsRequest.h>
#include <aws/codeguru-reviewer/model/ListRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/ListRecommendationsRequest.h>
#include <aws/codeguru-reviewer/model/ListRepositoryAssociationsRequest.h>
#include <aws/codeguru-reviewer/model/ListTagsForResourceRequest.h>
#include <aws/codeguru-reviewer/model/PutRecommendationFeedbackRequest.h>
#include <aws/codeguru-reviewer/model/TagResourceRequest.h>
#include <aws/codeguru-reviewer/model/UntagResourceRequest.h>

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
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
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
  SetServiceClientName("CodeGuru Reviewer");
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
  return AssociateRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

CreateCodeReviewOutcome CodeGuruReviewerClient::CreateCodeReview(const CreateCodeReviewRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/codereviews";
  uri.SetPath(uri.GetPath() + ss.str());
  return CreateCodeReviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateCodeReviewOutcomeCallable CodeGuruReviewerClient::CreateCodeReviewCallable(const CreateCodeReviewRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateCodeReviewOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateCodeReview(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::CreateCodeReviewAsync(const CreateCodeReviewRequest& request, const CreateCodeReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateCodeReviewAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::CreateCodeReviewAsyncHelper(const CreateCodeReviewRequest& request, const CreateCodeReviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateCodeReview(request), context);
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
  return DescribeCodeReviewOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeRecommendationFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return DescribeRepositoryAssociationOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return DisassociateRepositoryOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  return ListCodeReviewsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return ListRecommendationFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return ListRecommendationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  return ListRepositoryAssociationsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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

ListTagsForResourceOutcome CodeGuruReviewerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable CodeGuruReviewerClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

PutRecommendationFeedbackOutcome CodeGuruReviewerClient::PutRecommendationFeedback(const PutRecommendationFeedbackRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/feedback";
  uri.SetPath(uri.GetPath() + ss.str());
  return PutRecommendationFeedbackOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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

TagResourceOutcome CodeGuruReviewerClient::TagResource(const TagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable CodeGuruReviewerClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome CodeGuruReviewerClient::UntagResource(const UntagResourceRequest& request) const
{
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: ResourceArn, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  if (!request.TagKeysHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("UntagResource", "Required field: TagKeys, is not set");
    return UntagResourceOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TagKeys]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/tags/";
  ss << request.GetResourceArn();
  uri.SetPath(uri.GetPath() + ss.str());
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable CodeGuruReviewerClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CodeGuruReviewerClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void CodeGuruReviewerClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

