﻿/**
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

#include <aws/comprehend/ComprehendClient.h>
#include <aws/comprehend/ComprehendEndpoint.h>
#include <aws/comprehend/ComprehendErrorMarshaller.h>
#include <aws/comprehend/model/BatchDetectDominantLanguageRequest.h>
#include <aws/comprehend/model/BatchDetectEntitiesRequest.h>
#include <aws/comprehend/model/BatchDetectKeyPhrasesRequest.h>
#include <aws/comprehend/model/BatchDetectSentimentRequest.h>
#include <aws/comprehend/model/BatchDetectSyntaxRequest.h>
#include <aws/comprehend/model/BatchDetectTargetedSentimentRequest.h>
#include <aws/comprehend/model/ClassifyDocumentRequest.h>
#include <aws/comprehend/model/ContainsPiiEntitiesRequest.h>
#include <aws/comprehend/model/CreateDocumentClassifierRequest.h>
#include <aws/comprehend/model/CreateEndpointRequest.h>
#include <aws/comprehend/model/CreateEntityRecognizerRequest.h>
#include <aws/comprehend/model/DeleteDocumentClassifierRequest.h>
#include <aws/comprehend/model/DeleteEndpointRequest.h>
#include <aws/comprehend/model/DeleteEntityRecognizerRequest.h>
#include <aws/comprehend/model/DeleteResourcePolicyRequest.h>
#include <aws/comprehend/model/DescribeDocumentClassificationJobRequest.h>
#include <aws/comprehend/model/DescribeDocumentClassifierRequest.h>
#include <aws/comprehend/model/DescribeDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeEndpointRequest.h>
#include <aws/comprehend/model/DescribeEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeEntityRecognizerRequest.h>
#include <aws/comprehend/model/DescribeEventsDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribePiiEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeResourcePolicyRequest.h>
#include <aws/comprehend/model/DescribeSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeTargetedSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeTopicsDetectionJobRequest.h>
#include <aws/comprehend/model/DetectDominantLanguageRequest.h>
#include <aws/comprehend/model/DetectEntitiesRequest.h>
#include <aws/comprehend/model/DetectKeyPhrasesRequest.h>
#include <aws/comprehend/model/DetectPiiEntitiesRequest.h>
#include <aws/comprehend/model/DetectSentimentRequest.h>
#include <aws/comprehend/model/DetectSyntaxRequest.h>
#include <aws/comprehend/model/DetectTargetedSentimentRequest.h>
#include <aws/comprehend/model/ImportModelRequest.h>
#include <aws/comprehend/model/ListDocumentClassificationJobsRequest.h>
#include <aws/comprehend/model/ListDocumentClassifierSummariesRequest.h>
#include <aws/comprehend/model/ListDocumentClassifiersRequest.h>
#include <aws/comprehend/model/ListDominantLanguageDetectionJobsRequest.h>
#include <aws/comprehend/model/ListEndpointsRequest.h>
#include <aws/comprehend/model/ListEntitiesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListEntityRecognizerSummariesRequest.h>
#include <aws/comprehend/model/ListEntityRecognizersRequest.h>
#include <aws/comprehend/model/ListEventsDetectionJobsRequest.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListPiiEntitiesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListSentimentDetectionJobsRequest.h>
#include <aws/comprehend/model/ListTagsForResourceRequest.h>
#include <aws/comprehend/model/ListTargetedSentimentDetectionJobsRequest.h>
#include <aws/comprehend/model/ListTopicsDetectionJobsRequest.h>
#include <aws/comprehend/model/PutResourcePolicyRequest.h>
#include <aws/comprehend/model/StartDocumentClassificationJobRequest.h>
#include <aws/comprehend/model/StartDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/StartEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StartEventsDetectionJobRequest.h>
#include <aws/comprehend/model/StartKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/StartPiiEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StartSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StartTargetedSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StartTopicsDetectionJobRequest.h>
#include <aws/comprehend/model/StopDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/StopEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StopEventsDetectionJobRequest.h>
#include <aws/comprehend/model/StopKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/StopPiiEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StopSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StopTargetedSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StopTrainingDocumentClassifierRequest.h>
#include <aws/comprehend/model/StopTrainingEntityRecognizerRequest.h>
#include <aws/comprehend/model/TagResourceRequest.h>
#include <aws/comprehend/model/UntagResourceRequest.h>
#include <aws/comprehend/model/UpdateEndpointRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Comprehend;
using namespace Aws::Comprehend::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "comprehend";
static const char* ALLOCATION_TAG = "ComprehendClient";

ComprehendClient::ComprehendClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendClient::ComprehendClient(const AWSCredentials& credentials,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendClient::ComprehendClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                   const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendClient::~ComprehendClient()
{
}

void ComprehendClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Comprehend");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + ComprehendEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void ComprehendClient::OverrideEndpoint(const Aws::String& endpoint)
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

BatchDetectDominantLanguageOutcome ComprehendClient::BatchDetectDominantLanguage(const BatchDetectDominantLanguageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectDominantLanguageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectDominantLanguageOutcomeCallable ComprehendClient::BatchDetectDominantLanguageCallable(const BatchDetectDominantLanguageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectDominantLanguageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectDominantLanguage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::BatchDetectDominantLanguageAsync(const BatchDetectDominantLanguageRequest& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDetectDominantLanguage(request), context);
    } );
}

BatchDetectEntitiesOutcome ComprehendClient::BatchDetectEntities(const BatchDetectEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectEntitiesOutcomeCallable ComprehendClient::BatchDetectEntitiesCallable(const BatchDetectEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::BatchDetectEntitiesAsync(const BatchDetectEntitiesRequest& request, const BatchDetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDetectEntities(request), context);
    } );
}

BatchDetectKeyPhrasesOutcome ComprehendClient::BatchDetectKeyPhrases(const BatchDetectKeyPhrasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectKeyPhrasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectKeyPhrasesOutcomeCallable ComprehendClient::BatchDetectKeyPhrasesCallable(const BatchDetectKeyPhrasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectKeyPhrasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectKeyPhrases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::BatchDetectKeyPhrasesAsync(const BatchDetectKeyPhrasesRequest& request, const BatchDetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDetectKeyPhrases(request), context);
    } );
}

BatchDetectSentimentOutcome ComprehendClient::BatchDetectSentiment(const BatchDetectSentimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectSentimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectSentimentOutcomeCallable ComprehendClient::BatchDetectSentimentCallable(const BatchDetectSentimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectSentimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectSentiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::BatchDetectSentimentAsync(const BatchDetectSentimentRequest& request, const BatchDetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDetectSentiment(request), context);
    } );
}

BatchDetectSyntaxOutcome ComprehendClient::BatchDetectSyntax(const BatchDetectSyntaxRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectSyntaxOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectSyntaxOutcomeCallable ComprehendClient::BatchDetectSyntaxCallable(const BatchDetectSyntaxRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectSyntaxOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectSyntax(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::BatchDetectSyntaxAsync(const BatchDetectSyntaxRequest& request, const BatchDetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDetectSyntax(request), context);
    } );
}

BatchDetectTargetedSentimentOutcome ComprehendClient::BatchDetectTargetedSentiment(const BatchDetectTargetedSentimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return BatchDetectTargetedSentimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

BatchDetectTargetedSentimentOutcomeCallable ComprehendClient::BatchDetectTargetedSentimentCallable(const BatchDetectTargetedSentimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< BatchDetectTargetedSentimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->BatchDetectTargetedSentiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::BatchDetectTargetedSentimentAsync(const BatchDetectTargetedSentimentRequest& request, const BatchDetectTargetedSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, BatchDetectTargetedSentiment(request), context);
    } );
}

ClassifyDocumentOutcome ComprehendClient::ClassifyDocument(const ClassifyDocumentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ClassifyDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ClassifyDocumentOutcomeCallable ComprehendClient::ClassifyDocumentCallable(const ClassifyDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ClassifyDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ClassifyDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ClassifyDocumentAsync(const ClassifyDocumentRequest& request, const ClassifyDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ClassifyDocument(request), context);
    } );
}

ContainsPiiEntitiesOutcome ComprehendClient::ContainsPiiEntities(const ContainsPiiEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ContainsPiiEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ContainsPiiEntitiesOutcomeCallable ComprehendClient::ContainsPiiEntitiesCallable(const ContainsPiiEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ContainsPiiEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ContainsPiiEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ContainsPiiEntitiesAsync(const ContainsPiiEntitiesRequest& request, const ContainsPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ContainsPiiEntities(request), context);
    } );
}

CreateDocumentClassifierOutcome ComprehendClient::CreateDocumentClassifier(const CreateDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateDocumentClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateDocumentClassifierOutcomeCallable ComprehendClient::CreateDocumentClassifierCallable(const CreateDocumentClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateDocumentClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateDocumentClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::CreateDocumentClassifierAsync(const CreateDocumentClassifierRequest& request, const CreateDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateDocumentClassifier(request), context);
    } );
}

CreateEndpointOutcome ComprehendClient::CreateEndpoint(const CreateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEndpointOutcomeCallable ComprehendClient::CreateEndpointCallable(const CreateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::CreateEndpointAsync(const CreateEndpointRequest& request, const CreateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEndpoint(request), context);
    } );
}

CreateEntityRecognizerOutcome ComprehendClient::CreateEntityRecognizer(const CreateEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateEntityRecognizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateEntityRecognizerOutcomeCallable ComprehendClient::CreateEntityRecognizerCallable(const CreateEntityRecognizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateEntityRecognizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateEntityRecognizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::CreateEntityRecognizerAsync(const CreateEntityRecognizerRequest& request, const CreateEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateEntityRecognizer(request), context);
    } );
}

DeleteDocumentClassifierOutcome ComprehendClient::DeleteDocumentClassifier(const DeleteDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteDocumentClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteDocumentClassifierOutcomeCallable ComprehendClient::DeleteDocumentClassifierCallable(const DeleteDocumentClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteDocumentClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteDocumentClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DeleteDocumentClassifierAsync(const DeleteDocumentClassifierRequest& request, const DeleteDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteDocumentClassifier(request), context);
    } );
}

DeleteEndpointOutcome ComprehendClient::DeleteEndpoint(const DeleteEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEndpointOutcomeCallable ComprehendClient::DeleteEndpointCallable(const DeleteEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DeleteEndpointAsync(const DeleteEndpointRequest& request, const DeleteEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEndpoint(request), context);
    } );
}

DeleteEntityRecognizerOutcome ComprehendClient::DeleteEntityRecognizer(const DeleteEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteEntityRecognizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteEntityRecognizerOutcomeCallable ComprehendClient::DeleteEntityRecognizerCallable(const DeleteEntityRecognizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteEntityRecognizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteEntityRecognizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DeleteEntityRecognizerAsync(const DeleteEntityRecognizerRequest& request, const DeleteEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteEntityRecognizer(request), context);
    } );
}

DeleteResourcePolicyOutcome ComprehendClient::DeleteResourcePolicy(const DeleteResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteResourcePolicyOutcomeCallable ComprehendClient::DeleteResourcePolicyCallable(const DeleteResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DeleteResourcePolicyAsync(const DeleteResourcePolicyRequest& request, const DeleteResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteResourcePolicy(request), context);
    } );
}

DescribeDocumentClassificationJobOutcome ComprehendClient::DescribeDocumentClassificationJob(const DescribeDocumentClassificationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDocumentClassificationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDocumentClassificationJobOutcomeCallable ComprehendClient::DescribeDocumentClassificationJobCallable(const DescribeDocumentClassificationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDocumentClassificationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDocumentClassificationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeDocumentClassificationJobAsync(const DescribeDocumentClassificationJobRequest& request, const DescribeDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDocumentClassificationJob(request), context);
    } );
}

DescribeDocumentClassifierOutcome ComprehendClient::DescribeDocumentClassifier(const DescribeDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDocumentClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDocumentClassifierOutcomeCallable ComprehendClient::DescribeDocumentClassifierCallable(const DescribeDocumentClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDocumentClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDocumentClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeDocumentClassifierAsync(const DescribeDocumentClassifierRequest& request, const DescribeDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDocumentClassifier(request), context);
    } );
}

DescribeDominantLanguageDetectionJobOutcome ComprehendClient::DescribeDominantLanguageDetectionJob(const DescribeDominantLanguageDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeDominantLanguageDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeDominantLanguageDetectionJobOutcomeCallable ComprehendClient::DescribeDominantLanguageDetectionJobCallable(const DescribeDominantLanguageDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeDominantLanguageDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeDominantLanguageDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeDominantLanguageDetectionJobAsync(const DescribeDominantLanguageDetectionJobRequest& request, const DescribeDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeDominantLanguageDetectionJob(request), context);
    } );
}

DescribeEndpointOutcome ComprehendClient::DescribeEndpoint(const DescribeEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEndpointOutcomeCallable ComprehendClient::DescribeEndpointCallable(const DescribeEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeEndpointAsync(const DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEndpoint(request), context);
    } );
}

DescribeEntitiesDetectionJobOutcome ComprehendClient::DescribeEntitiesDetectionJob(const DescribeEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEntitiesDetectionJobOutcomeCallable ComprehendClient::DescribeEntitiesDetectionJobCallable(const DescribeEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeEntitiesDetectionJobAsync(const DescribeEntitiesDetectionJobRequest& request, const DescribeEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEntitiesDetectionJob(request), context);
    } );
}

DescribeEntityRecognizerOutcome ComprehendClient::DescribeEntityRecognizer(const DescribeEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEntityRecognizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEntityRecognizerOutcomeCallable ComprehendClient::DescribeEntityRecognizerCallable(const DescribeEntityRecognizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEntityRecognizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEntityRecognizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeEntityRecognizerAsync(const DescribeEntityRecognizerRequest& request, const DescribeEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEntityRecognizer(request), context);
    } );
}

DescribeEventsDetectionJobOutcome ComprehendClient::DescribeEventsDetectionJob(const DescribeEventsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeEventsDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeEventsDetectionJobOutcomeCallable ComprehendClient::DescribeEventsDetectionJobCallable(const DescribeEventsDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeEventsDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeEventsDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeEventsDetectionJobAsync(const DescribeEventsDetectionJobRequest& request, const DescribeEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeEventsDetectionJob(request), context);
    } );
}

DescribeKeyPhrasesDetectionJobOutcome ComprehendClient::DescribeKeyPhrasesDetectionJob(const DescribeKeyPhrasesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeKeyPhrasesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeKeyPhrasesDetectionJobOutcomeCallable ComprehendClient::DescribeKeyPhrasesDetectionJobCallable(const DescribeKeyPhrasesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeKeyPhrasesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeKeyPhrasesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeKeyPhrasesDetectionJobAsync(const DescribeKeyPhrasesDetectionJobRequest& request, const DescribeKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeKeyPhrasesDetectionJob(request), context);
    } );
}

DescribePiiEntitiesDetectionJobOutcome ComprehendClient::DescribePiiEntitiesDetectionJob(const DescribePiiEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribePiiEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribePiiEntitiesDetectionJobOutcomeCallable ComprehendClient::DescribePiiEntitiesDetectionJobCallable(const DescribePiiEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribePiiEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribePiiEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribePiiEntitiesDetectionJobAsync(const DescribePiiEntitiesDetectionJobRequest& request, const DescribePiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribePiiEntitiesDetectionJob(request), context);
    } );
}

DescribeResourcePolicyOutcome ComprehendClient::DescribeResourcePolicy(const DescribeResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeResourcePolicyOutcomeCallable ComprehendClient::DescribeResourcePolicyCallable(const DescribeResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeResourcePolicyAsync(const DescribeResourcePolicyRequest& request, const DescribeResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeResourcePolicy(request), context);
    } );
}

DescribeSentimentDetectionJobOutcome ComprehendClient::DescribeSentimentDetectionJob(const DescribeSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeSentimentDetectionJobOutcomeCallable ComprehendClient::DescribeSentimentDetectionJobCallable(const DescribeSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeSentimentDetectionJobAsync(const DescribeSentimentDetectionJobRequest& request, const DescribeSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeSentimentDetectionJob(request), context);
    } );
}

DescribeTargetedSentimentDetectionJobOutcome ComprehendClient::DescribeTargetedSentimentDetectionJob(const DescribeTargetedSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTargetedSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTargetedSentimentDetectionJobOutcomeCallable ComprehendClient::DescribeTargetedSentimentDetectionJobCallable(const DescribeTargetedSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTargetedSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTargetedSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeTargetedSentimentDetectionJobAsync(const DescribeTargetedSentimentDetectionJobRequest& request, const DescribeTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTargetedSentimentDetectionJob(request), context);
    } );
}

DescribeTopicsDetectionJobOutcome ComprehendClient::DescribeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTopicsDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTopicsDetectionJobOutcomeCallable ComprehendClient::DescribeTopicsDetectionJobCallable(const DescribeTopicsDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTopicsDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTopicsDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DescribeTopicsDetectionJobAsync(const DescribeTopicsDetectionJobRequest& request, const DescribeTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTopicsDetectionJob(request), context);
    } );
}

DetectDominantLanguageOutcome ComprehendClient::DetectDominantLanguage(const DetectDominantLanguageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectDominantLanguageOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectDominantLanguageOutcomeCallable ComprehendClient::DetectDominantLanguageCallable(const DetectDominantLanguageRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectDominantLanguageOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectDominantLanguage(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DetectDominantLanguageAsync(const DetectDominantLanguageRequest& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectDominantLanguage(request), context);
    } );
}

DetectEntitiesOutcome ComprehendClient::DetectEntities(const DetectEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectEntitiesOutcomeCallable ComprehendClient::DetectEntitiesCallable(const DetectEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DetectEntitiesAsync(const DetectEntitiesRequest& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectEntities(request), context);
    } );
}

DetectKeyPhrasesOutcome ComprehendClient::DetectKeyPhrases(const DetectKeyPhrasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectKeyPhrasesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectKeyPhrasesOutcomeCallable ComprehendClient::DetectKeyPhrasesCallable(const DetectKeyPhrasesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectKeyPhrasesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectKeyPhrases(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DetectKeyPhrasesAsync(const DetectKeyPhrasesRequest& request, const DetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectKeyPhrases(request), context);
    } );
}

DetectPiiEntitiesOutcome ComprehendClient::DetectPiiEntities(const DetectPiiEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectPiiEntitiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectPiiEntitiesOutcomeCallable ComprehendClient::DetectPiiEntitiesCallable(const DetectPiiEntitiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectPiiEntitiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectPiiEntities(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DetectPiiEntitiesAsync(const DetectPiiEntitiesRequest& request, const DetectPiiEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectPiiEntities(request), context);
    } );
}

DetectSentimentOutcome ComprehendClient::DetectSentiment(const DetectSentimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectSentimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectSentimentOutcomeCallable ComprehendClient::DetectSentimentCallable(const DetectSentimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectSentimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectSentiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DetectSentimentAsync(const DetectSentimentRequest& request, const DetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectSentiment(request), context);
    } );
}

DetectSyntaxOutcome ComprehendClient::DetectSyntax(const DetectSyntaxRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectSyntaxOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectSyntaxOutcomeCallable ComprehendClient::DetectSyntaxCallable(const DetectSyntaxRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectSyntaxOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectSyntax(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DetectSyntaxAsync(const DetectSyntaxRequest& request, const DetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectSyntax(request), context);
    } );
}

DetectTargetedSentimentOutcome ComprehendClient::DetectTargetedSentiment(const DetectTargetedSentimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectTargetedSentimentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DetectTargetedSentimentOutcomeCallable ComprehendClient::DetectTargetedSentimentCallable(const DetectTargetedSentimentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectTargetedSentimentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectTargetedSentiment(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::DetectTargetedSentimentAsync(const DetectTargetedSentimentRequest& request, const DetectTargetedSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DetectTargetedSentiment(request), context);
    } );
}

ImportModelOutcome ComprehendClient::ImportModel(const ImportModelRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportModelOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportModelOutcomeCallable ComprehendClient::ImportModelCallable(const ImportModelRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportModelOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportModel(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ImportModelAsync(const ImportModelRequest& request, const ImportModelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportModel(request), context);
    } );
}

ListDocumentClassificationJobsOutcome ComprehendClient::ListDocumentClassificationJobs(const ListDocumentClassificationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDocumentClassificationJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentClassificationJobsOutcomeCallable ComprehendClient::ListDocumentClassificationJobsCallable(const ListDocumentClassificationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentClassificationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocumentClassificationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListDocumentClassificationJobsAsync(const ListDocumentClassificationJobsRequest& request, const ListDocumentClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDocumentClassificationJobs(request), context);
    } );
}

ListDocumentClassifierSummariesOutcome ComprehendClient::ListDocumentClassifierSummaries(const ListDocumentClassifierSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDocumentClassifierSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentClassifierSummariesOutcomeCallable ComprehendClient::ListDocumentClassifierSummariesCallable(const ListDocumentClassifierSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentClassifierSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocumentClassifierSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListDocumentClassifierSummariesAsync(const ListDocumentClassifierSummariesRequest& request, const ListDocumentClassifierSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDocumentClassifierSummaries(request), context);
    } );
}

ListDocumentClassifiersOutcome ComprehendClient::ListDocumentClassifiers(const ListDocumentClassifiersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDocumentClassifiersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDocumentClassifiersOutcomeCallable ComprehendClient::ListDocumentClassifiersCallable(const ListDocumentClassifiersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDocumentClassifiersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDocumentClassifiers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListDocumentClassifiersAsync(const ListDocumentClassifiersRequest& request, const ListDocumentClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDocumentClassifiers(request), context);
    } );
}

ListDominantLanguageDetectionJobsOutcome ComprehendClient::ListDominantLanguageDetectionJobs(const ListDominantLanguageDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListDominantLanguageDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListDominantLanguageDetectionJobsOutcomeCallable ComprehendClient::ListDominantLanguageDetectionJobsCallable(const ListDominantLanguageDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListDominantLanguageDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListDominantLanguageDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListDominantLanguageDetectionJobsAsync(const ListDominantLanguageDetectionJobsRequest& request, const ListDominantLanguageDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListDominantLanguageDetectionJobs(request), context);
    } );
}

ListEndpointsOutcome ComprehendClient::ListEndpoints(const ListEndpointsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEndpointsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEndpointsOutcomeCallable ComprehendClient::ListEndpointsCallable(const ListEndpointsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEndpointsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEndpoints(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListEndpointsAsync(const ListEndpointsRequest& request, const ListEndpointsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEndpoints(request), context);
    } );
}

ListEntitiesDetectionJobsOutcome ComprehendClient::ListEntitiesDetectionJobs(const ListEntitiesDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEntitiesDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntitiesDetectionJobsOutcomeCallable ComprehendClient::ListEntitiesDetectionJobsCallable(const ListEntitiesDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntitiesDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntitiesDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListEntitiesDetectionJobsAsync(const ListEntitiesDetectionJobsRequest& request, const ListEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEntitiesDetectionJobs(request), context);
    } );
}

ListEntityRecognizerSummariesOutcome ComprehendClient::ListEntityRecognizerSummaries(const ListEntityRecognizerSummariesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEntityRecognizerSummariesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntityRecognizerSummariesOutcomeCallable ComprehendClient::ListEntityRecognizerSummariesCallable(const ListEntityRecognizerSummariesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntityRecognizerSummariesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntityRecognizerSummaries(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListEntityRecognizerSummariesAsync(const ListEntityRecognizerSummariesRequest& request, const ListEntityRecognizerSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEntityRecognizerSummaries(request), context);
    } );
}

ListEntityRecognizersOutcome ComprehendClient::ListEntityRecognizers(const ListEntityRecognizersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEntityRecognizersOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEntityRecognizersOutcomeCallable ComprehendClient::ListEntityRecognizersCallable(const ListEntityRecognizersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEntityRecognizersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEntityRecognizers(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListEntityRecognizersAsync(const ListEntityRecognizersRequest& request, const ListEntityRecognizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEntityRecognizers(request), context);
    } );
}

ListEventsDetectionJobsOutcome ComprehendClient::ListEventsDetectionJobs(const ListEventsDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListEventsDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListEventsDetectionJobsOutcomeCallable ComprehendClient::ListEventsDetectionJobsCallable(const ListEventsDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListEventsDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListEventsDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListEventsDetectionJobsAsync(const ListEventsDetectionJobsRequest& request, const ListEventsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListEventsDetectionJobs(request), context);
    } );
}

ListKeyPhrasesDetectionJobsOutcome ComprehendClient::ListKeyPhrasesDetectionJobs(const ListKeyPhrasesDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListKeyPhrasesDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListKeyPhrasesDetectionJobsOutcomeCallable ComprehendClient::ListKeyPhrasesDetectionJobsCallable(const ListKeyPhrasesDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListKeyPhrasesDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListKeyPhrasesDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListKeyPhrasesDetectionJobsAsync(const ListKeyPhrasesDetectionJobsRequest& request, const ListKeyPhrasesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListKeyPhrasesDetectionJobs(request), context);
    } );
}

ListPiiEntitiesDetectionJobsOutcome ComprehendClient::ListPiiEntitiesDetectionJobs(const ListPiiEntitiesDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListPiiEntitiesDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListPiiEntitiesDetectionJobsOutcomeCallable ComprehendClient::ListPiiEntitiesDetectionJobsCallable(const ListPiiEntitiesDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListPiiEntitiesDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListPiiEntitiesDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListPiiEntitiesDetectionJobsAsync(const ListPiiEntitiesDetectionJobsRequest& request, const ListPiiEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListPiiEntitiesDetectionJobs(request), context);
    } );
}

ListSentimentDetectionJobsOutcome ComprehendClient::ListSentimentDetectionJobs(const ListSentimentDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListSentimentDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListSentimentDetectionJobsOutcomeCallable ComprehendClient::ListSentimentDetectionJobsCallable(const ListSentimentDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSentimentDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSentimentDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListSentimentDetectionJobsAsync(const ListSentimentDetectionJobsRequest& request, const ListSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSentimentDetectionJobs(request), context);
    } );
}

ListTagsForResourceOutcome ComprehendClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTagsForResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable ComprehendClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTargetedSentimentDetectionJobsOutcome ComprehendClient::ListTargetedSentimentDetectionJobs(const ListTargetedSentimentDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTargetedSentimentDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTargetedSentimentDetectionJobsOutcomeCallable ComprehendClient::ListTargetedSentimentDetectionJobsCallable(const ListTargetedSentimentDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTargetedSentimentDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTargetedSentimentDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListTargetedSentimentDetectionJobsAsync(const ListTargetedSentimentDetectionJobsRequest& request, const ListTargetedSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTargetedSentimentDetectionJobs(request), context);
    } );
}

ListTopicsDetectionJobsOutcome ComprehendClient::ListTopicsDetectionJobs(const ListTopicsDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTopicsDetectionJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTopicsDetectionJobsOutcomeCallable ComprehendClient::ListTopicsDetectionJobsCallable(const ListTopicsDetectionJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTopicsDetectionJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTopicsDetectionJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::ListTopicsDetectionJobsAsync(const ListTopicsDetectionJobsRequest& request, const ListTopicsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTopicsDetectionJobs(request), context);
    } );
}

PutResourcePolicyOutcome ComprehendClient::PutResourcePolicy(const PutResourcePolicyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return PutResourcePolicyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

PutResourcePolicyOutcomeCallable ComprehendClient::PutResourcePolicyCallable(const PutResourcePolicyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutResourcePolicyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutResourcePolicy(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::PutResourcePolicyAsync(const PutResourcePolicyRequest& request, const PutResourcePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutResourcePolicy(request), context);
    } );
}

StartDocumentClassificationJobOutcome ComprehendClient::StartDocumentClassificationJob(const StartDocumentClassificationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDocumentClassificationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDocumentClassificationJobOutcomeCallable ComprehendClient::StartDocumentClassificationJobCallable(const StartDocumentClassificationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDocumentClassificationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDocumentClassificationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StartDocumentClassificationJobAsync(const StartDocumentClassificationJobRequest& request, const StartDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartDocumentClassificationJob(request), context);
    } );
}

StartDominantLanguageDetectionJobOutcome ComprehendClient::StartDominantLanguageDetectionJob(const StartDominantLanguageDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDominantLanguageDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartDominantLanguageDetectionJobOutcomeCallable ComprehendClient::StartDominantLanguageDetectionJobCallable(const StartDominantLanguageDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDominantLanguageDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDominantLanguageDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StartDominantLanguageDetectionJobAsync(const StartDominantLanguageDetectionJobRequest& request, const StartDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartDominantLanguageDetectionJob(request), context);
    } );
}

StartEntitiesDetectionJobOutcome ComprehendClient::StartEntitiesDetectionJob(const StartEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartEntitiesDetectionJobOutcomeCallable ComprehendClient::StartEntitiesDetectionJobCallable(const StartEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StartEntitiesDetectionJobAsync(const StartEntitiesDetectionJobRequest& request, const StartEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartEntitiesDetectionJob(request), context);
    } );
}

StartEventsDetectionJobOutcome ComprehendClient::StartEventsDetectionJob(const StartEventsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartEventsDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartEventsDetectionJobOutcomeCallable ComprehendClient::StartEventsDetectionJobCallable(const StartEventsDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartEventsDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartEventsDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StartEventsDetectionJobAsync(const StartEventsDetectionJobRequest& request, const StartEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartEventsDetectionJob(request), context);
    } );
}

StartKeyPhrasesDetectionJobOutcome ComprehendClient::StartKeyPhrasesDetectionJob(const StartKeyPhrasesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartKeyPhrasesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartKeyPhrasesDetectionJobOutcomeCallable ComprehendClient::StartKeyPhrasesDetectionJobCallable(const StartKeyPhrasesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartKeyPhrasesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartKeyPhrasesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StartKeyPhrasesDetectionJobAsync(const StartKeyPhrasesDetectionJobRequest& request, const StartKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartKeyPhrasesDetectionJob(request), context);
    } );
}

StartPiiEntitiesDetectionJobOutcome ComprehendClient::StartPiiEntitiesDetectionJob(const StartPiiEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartPiiEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartPiiEntitiesDetectionJobOutcomeCallable ComprehendClient::StartPiiEntitiesDetectionJobCallable(const StartPiiEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartPiiEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartPiiEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StartPiiEntitiesDetectionJobAsync(const StartPiiEntitiesDetectionJobRequest& request, const StartPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartPiiEntitiesDetectionJob(request), context);
    } );
}

StartSentimentDetectionJobOutcome ComprehendClient::StartSentimentDetectionJob(const StartSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSentimentDetectionJobOutcomeCallable ComprehendClient::StartSentimentDetectionJobCallable(const StartSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StartSentimentDetectionJobAsync(const StartSentimentDetectionJobRequest& request, const StartSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartSentimentDetectionJob(request), context);
    } );
}

StartTargetedSentimentDetectionJobOutcome ComprehendClient::StartTargetedSentimentDetectionJob(const StartTargetedSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartTargetedSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTargetedSentimentDetectionJobOutcomeCallable ComprehendClient::StartTargetedSentimentDetectionJobCallable(const StartTargetedSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTargetedSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTargetedSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StartTargetedSentimentDetectionJobAsync(const StartTargetedSentimentDetectionJobRequest& request, const StartTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartTargetedSentimentDetectionJob(request), context);
    } );
}

StartTopicsDetectionJobOutcome ComprehendClient::StartTopicsDetectionJob(const StartTopicsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartTopicsDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTopicsDetectionJobOutcomeCallable ComprehendClient::StartTopicsDetectionJobCallable(const StartTopicsDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTopicsDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTopicsDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StartTopicsDetectionJobAsync(const StartTopicsDetectionJobRequest& request, const StartTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartTopicsDetectionJob(request), context);
    } );
}

StopDominantLanguageDetectionJobOutcome ComprehendClient::StopDominantLanguageDetectionJob(const StopDominantLanguageDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopDominantLanguageDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopDominantLanguageDetectionJobOutcomeCallable ComprehendClient::StopDominantLanguageDetectionJobCallable(const StopDominantLanguageDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopDominantLanguageDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopDominantLanguageDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StopDominantLanguageDetectionJobAsync(const StopDominantLanguageDetectionJobRequest& request, const StopDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopDominantLanguageDetectionJob(request), context);
    } );
}

StopEntitiesDetectionJobOutcome ComprehendClient::StopEntitiesDetectionJob(const StopEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEntitiesDetectionJobOutcomeCallable ComprehendClient::StopEntitiesDetectionJobCallable(const StopEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StopEntitiesDetectionJobAsync(const StopEntitiesDetectionJobRequest& request, const StopEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopEntitiesDetectionJob(request), context);
    } );
}

StopEventsDetectionJobOutcome ComprehendClient::StopEventsDetectionJob(const StopEventsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopEventsDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopEventsDetectionJobOutcomeCallable ComprehendClient::StopEventsDetectionJobCallable(const StopEventsDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopEventsDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopEventsDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StopEventsDetectionJobAsync(const StopEventsDetectionJobRequest& request, const StopEventsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopEventsDetectionJob(request), context);
    } );
}

StopKeyPhrasesDetectionJobOutcome ComprehendClient::StopKeyPhrasesDetectionJob(const StopKeyPhrasesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopKeyPhrasesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopKeyPhrasesDetectionJobOutcomeCallable ComprehendClient::StopKeyPhrasesDetectionJobCallable(const StopKeyPhrasesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopKeyPhrasesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopKeyPhrasesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StopKeyPhrasesDetectionJobAsync(const StopKeyPhrasesDetectionJobRequest& request, const StopKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopKeyPhrasesDetectionJob(request), context);
    } );
}

StopPiiEntitiesDetectionJobOutcome ComprehendClient::StopPiiEntitiesDetectionJob(const StopPiiEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopPiiEntitiesDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopPiiEntitiesDetectionJobOutcomeCallable ComprehendClient::StopPiiEntitiesDetectionJobCallable(const StopPiiEntitiesDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopPiiEntitiesDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopPiiEntitiesDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StopPiiEntitiesDetectionJobAsync(const StopPiiEntitiesDetectionJobRequest& request, const StopPiiEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopPiiEntitiesDetectionJob(request), context);
    } );
}

StopSentimentDetectionJobOutcome ComprehendClient::StopSentimentDetectionJob(const StopSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopSentimentDetectionJobOutcomeCallable ComprehendClient::StopSentimentDetectionJobCallable(const StopSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StopSentimentDetectionJobAsync(const StopSentimentDetectionJobRequest& request, const StopSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopSentimentDetectionJob(request), context);
    } );
}

StopTargetedSentimentDetectionJobOutcome ComprehendClient::StopTargetedSentimentDetectionJob(const StopTargetedSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTargetedSentimentDetectionJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTargetedSentimentDetectionJobOutcomeCallable ComprehendClient::StopTargetedSentimentDetectionJobCallable(const StopTargetedSentimentDetectionJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTargetedSentimentDetectionJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTargetedSentimentDetectionJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StopTargetedSentimentDetectionJobAsync(const StopTargetedSentimentDetectionJobRequest& request, const StopTargetedSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopTargetedSentimentDetectionJob(request), context);
    } );
}

StopTrainingDocumentClassifierOutcome ComprehendClient::StopTrainingDocumentClassifier(const StopTrainingDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTrainingDocumentClassifierOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTrainingDocumentClassifierOutcomeCallable ComprehendClient::StopTrainingDocumentClassifierCallable(const StopTrainingDocumentClassifierRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTrainingDocumentClassifierOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTrainingDocumentClassifier(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StopTrainingDocumentClassifierAsync(const StopTrainingDocumentClassifierRequest& request, const StopTrainingDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopTrainingDocumentClassifier(request), context);
    } );
}

StopTrainingEntityRecognizerOutcome ComprehendClient::StopTrainingEntityRecognizer(const StopTrainingEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTrainingEntityRecognizerOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTrainingEntityRecognizerOutcomeCallable ComprehendClient::StopTrainingEntityRecognizerCallable(const StopTrainingEntityRecognizerRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTrainingEntityRecognizerOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTrainingEntityRecognizer(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::StopTrainingEntityRecognizerAsync(const StopTrainingEntityRecognizerRequest& request, const StopTrainingEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopTrainingEntityRecognizer(request), context);
    } );
}

TagResourceOutcome ComprehendClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable ComprehendClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

UntagResourceOutcome ComprehendClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UntagResourceOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable ComprehendClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateEndpointOutcome ComprehendClient::UpdateEndpoint(const UpdateEndpointRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateEndpointOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateEndpointOutcomeCallable ComprehendClient::UpdateEndpointCallable(const UpdateEndpointRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateEndpointOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateEndpoint(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void ComprehendClient::UpdateEndpointAsync(const UpdateEndpointRequest& request, const UpdateEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateEndpoint(request), context);
    } );
}

