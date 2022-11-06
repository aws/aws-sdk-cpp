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

#include <aws/codeguru-reviewer/CodeGuruReviewerClient.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerErrorMarshaller.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerEndpointProvider.h>
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
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* CodeGuruReviewerClient::SERVICE_NAME = "codeguru-reviewer";
const char* CodeGuruReviewerClient::ALLOCATION_TAG = "CodeGuruReviewerClient";

CodeGuruReviewerClient::CodeGuruReviewerClient(const CodeGuruReviewer::CodeGuruReviewerClientConfiguration& clientConfiguration,
                                               std::shared_ptr<CodeGuruReviewerEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const AWSCredentials& credentials,
                                               std::shared_ptr<CodeGuruReviewerEndpointProviderBase> endpointProvider,
                                               const CodeGuruReviewer::CodeGuruReviewerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               std::shared_ptr<CodeGuruReviewerEndpointProviderBase> endpointProvider,
                                               const CodeGuruReviewer::CodeGuruReviewerClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CodeGuruReviewerClient::CodeGuruReviewerClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CodeGuruReviewerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const AWSCredentials& credentials,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeGuruReviewerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

CodeGuruReviewerClient::CodeGuruReviewerClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CodeGuruReviewerErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CodeGuruReviewerEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CodeGuruReviewerClient::~CodeGuruReviewerClient()
{
}

std::shared_ptr<CodeGuruReviewerEndpointProviderBase>& CodeGuruReviewerClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void CodeGuruReviewerClient::init(const CodeGuruReviewer::CodeGuruReviewerClientConfiguration& config)
{
  AWSClient::SetServiceClientName("CodeGuru Reviewer");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void CodeGuruReviewerClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

AssociateRepositoryOutcome CodeGuruReviewerClient::AssociateRepository(const AssociateRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, AssociateRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, AssociateRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  return AssociateRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, AssociateRepository(request), context);
    } );
}

CreateCodeReviewOutcome CodeGuruReviewerClient::CreateCodeReview(const CreateCodeReviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateCodeReview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateCodeReview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/codereviews");
  return CreateCodeReviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateCodeReview(request), context);
    } );
}

DescribeCodeReviewOutcome CodeGuruReviewerClient::DescribeCodeReview(const DescribeCodeReviewRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeCodeReview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CodeReviewArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeCodeReview", "Required field: CodeReviewArn, is not set");
    return DescribeCodeReviewOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeCodeReview, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/codereviews/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeReviewArn());
  return DescribeCodeReviewOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeCodeReview(request), context);
    } );
}

DescribeRecommendationFeedbackOutcome CodeGuruReviewerClient::DescribeRecommendationFeedback(const DescribeRecommendationFeedbackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRecommendationFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRecommendationFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/feedback/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeReviewArn());
  return DescribeRecommendationFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRecommendationFeedback(request), context);
    } );
}

DescribeRepositoryAssociationOutcome CodeGuruReviewerClient::DescribeRepositoryAssociation(const DescribeRepositoryAssociationRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeRepositoryAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssociationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DescribeRepositoryAssociation", "Required field: AssociationArn, is not set");
    return DescribeRepositoryAssociationOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeRepositoryAssociation, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationArn());
  return DescribeRepositoryAssociationOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeRepositoryAssociation(request), context);
    } );
}

DisassociateRepositoryOutcome CodeGuruReviewerClient::DisassociateRepository(const DisassociateRepositoryRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DisassociateRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.AssociationArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DisassociateRepository", "Required field: AssociationArn, is not set");
    return DisassociateRepositoryOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [AssociationArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DisassociateRepository, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associations/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetAssociationArn());
  return DisassociateRepositoryOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DisassociateRepository(request), context);
    } );
}

ListCodeReviewsOutcome CodeGuruReviewerClient::ListCodeReviews(const ListCodeReviewsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListCodeReviews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TypeHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListCodeReviews", "Required field: Type, is not set");
    return ListCodeReviewsOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Type]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListCodeReviews, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/codereviews");
  return ListCodeReviewsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListCodeReviews(request), context);
    } );
}

ListRecommendationFeedbackOutcome CodeGuruReviewerClient::ListRecommendationFeedback(const ListRecommendationFeedbackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecommendationFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CodeReviewArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecommendationFeedback", "Required field: CodeReviewArn, is not set");
    return ListRecommendationFeedbackOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecommendationFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/feedback/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeReviewArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/RecommendationFeedback");
  return ListRecommendationFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecommendationFeedback(request), context);
    } );
}

ListRecommendationsOutcome CodeGuruReviewerClient::ListRecommendations(const ListRecommendationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.CodeReviewArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListRecommendations", "Required field: CodeReviewArn, is not set");
    return ListRecommendationsOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [CodeReviewArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRecommendations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/codereviews/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetCodeReviewArn());
  endpointResolutionOutcome.GetResult().AddPathSegments("/Recommendations");
  return ListRecommendationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRecommendations(request), context);
    } );
}

ListRepositoryAssociationsOutcome CodeGuruReviewerClient::ListRepositoryAssociations(const ListRepositoryAssociationsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListRepositoryAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListRepositoryAssociations, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/associations");
  return ListRepositoryAssociationsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListRepositoryAssociations(request), context);
    } );
}

ListTagsForResourceOutcome CodeGuruReviewerClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("ListTagsForResource", "Required field: ResourceArn, is not set");
    return ListTagsForResourceOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

PutRecommendationFeedbackOutcome CodeGuruReviewerClient::PutRecommendationFeedback(const PutRecommendationFeedbackRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutRecommendationFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutRecommendationFeedback, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/feedback");
  return PutRecommendationFeedbackOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutRecommendationFeedback(request), context);
    } );
}

TagResourceOutcome CodeGuruReviewerClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.ResourceArnHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("TagResource", "Required field: ResourceArn, is not set");
    return TagResourceOutcome(Aws::Client::AWSError<CodeGuruReviewerErrors>(CodeGuruReviewerErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [ResourceArn]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome CodeGuruReviewerClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
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
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/tags/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetResourceArn());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

