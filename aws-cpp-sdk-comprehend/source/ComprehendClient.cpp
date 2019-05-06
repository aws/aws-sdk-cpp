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

#include <aws/comprehend/ComprehendClient.h>
#include <aws/comprehend/ComprehendEndpoint.h>
#include <aws/comprehend/ComprehendErrorMarshaller.h>
#include <aws/comprehend/model/BatchDetectDominantLanguageRequest.h>
#include <aws/comprehend/model/BatchDetectEntitiesRequest.h>
#include <aws/comprehend/model/BatchDetectKeyPhrasesRequest.h>
#include <aws/comprehend/model/BatchDetectSentimentRequest.h>
#include <aws/comprehend/model/BatchDetectSyntaxRequest.h>
#include <aws/comprehend/model/CreateDocumentClassifierRequest.h>
#include <aws/comprehend/model/CreateEntityRecognizerRequest.h>
#include <aws/comprehend/model/DeleteDocumentClassifierRequest.h>
#include <aws/comprehend/model/DeleteEntityRecognizerRequest.h>
#include <aws/comprehend/model/DescribeDocumentClassificationJobRequest.h>
#include <aws/comprehend/model/DescribeDocumentClassifierRequest.h>
#include <aws/comprehend/model/DescribeDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeEntityRecognizerRequest.h>
#include <aws/comprehend/model/DescribeKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/DescribeTopicsDetectionJobRequest.h>
#include <aws/comprehend/model/DetectDominantLanguageRequest.h>
#include <aws/comprehend/model/DetectEntitiesRequest.h>
#include <aws/comprehend/model/DetectKeyPhrasesRequest.h>
#include <aws/comprehend/model/DetectSentimentRequest.h>
#include <aws/comprehend/model/DetectSyntaxRequest.h>
#include <aws/comprehend/model/ListDocumentClassificationJobsRequest.h>
#include <aws/comprehend/model/ListDocumentClassifiersRequest.h>
#include <aws/comprehend/model/ListDominantLanguageDetectionJobsRequest.h>
#include <aws/comprehend/model/ListEntitiesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListEntityRecognizersRequest.h>
#include <aws/comprehend/model/ListKeyPhrasesDetectionJobsRequest.h>
#include <aws/comprehend/model/ListSentimentDetectionJobsRequest.h>
#include <aws/comprehend/model/ListTagsForResourceRequest.h>
#include <aws/comprehend/model/ListTopicsDetectionJobsRequest.h>
#include <aws/comprehend/model/StartDocumentClassificationJobRequest.h>
#include <aws/comprehend/model/StartDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/StartEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StartKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/StartSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StartTopicsDetectionJobRequest.h>
#include <aws/comprehend/model/StopDominantLanguageDetectionJobRequest.h>
#include <aws/comprehend/model/StopEntitiesDetectionJobRequest.h>
#include <aws/comprehend/model/StopKeyPhrasesDetectionJobRequest.h>
#include <aws/comprehend/model/StopSentimentDetectionJobRequest.h>
#include <aws/comprehend/model/StopTrainingDocumentClassifierRequest.h>
#include <aws/comprehend/model/StopTrainingEntityRecognizerRequest.h>
#include <aws/comprehend/model/TagResourceRequest.h>
#include <aws/comprehend/model/UntagResourceRequest.h>

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
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendClient::ComprehendClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendClient::ComprehendClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<ComprehendErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

ComprehendClient::~ComprehendClient()
{
}

void ComprehendClient::init(const ClientConfiguration& config)
{
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
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDetectDominantLanguageOutcome(BatchDetectDominantLanguageResult(outcome.GetResult()));
  }
  else
  {
    return BatchDetectDominantLanguageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchDetectDominantLanguageAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::BatchDetectDominantLanguageAsyncHelper(const BatchDetectDominantLanguageRequest& request, const BatchDetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDetectDominantLanguage(request), context);
}

BatchDetectEntitiesOutcome ComprehendClient::BatchDetectEntities(const BatchDetectEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDetectEntitiesOutcome(BatchDetectEntitiesResult(outcome.GetResult()));
  }
  else
  {
    return BatchDetectEntitiesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchDetectEntitiesAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::BatchDetectEntitiesAsyncHelper(const BatchDetectEntitiesRequest& request, const BatchDetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDetectEntities(request), context);
}

BatchDetectKeyPhrasesOutcome ComprehendClient::BatchDetectKeyPhrases(const BatchDetectKeyPhrasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDetectKeyPhrasesOutcome(BatchDetectKeyPhrasesResult(outcome.GetResult()));
  }
  else
  {
    return BatchDetectKeyPhrasesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchDetectKeyPhrasesAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::BatchDetectKeyPhrasesAsyncHelper(const BatchDetectKeyPhrasesRequest& request, const BatchDetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDetectKeyPhrases(request), context);
}

BatchDetectSentimentOutcome ComprehendClient::BatchDetectSentiment(const BatchDetectSentimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDetectSentimentOutcome(BatchDetectSentimentResult(outcome.GetResult()));
  }
  else
  {
    return BatchDetectSentimentOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchDetectSentimentAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::BatchDetectSentimentAsyncHelper(const BatchDetectSentimentRequest& request, const BatchDetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDetectSentiment(request), context);
}

BatchDetectSyntaxOutcome ComprehendClient::BatchDetectSyntax(const BatchDetectSyntaxRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return BatchDetectSyntaxOutcome(BatchDetectSyntaxResult(outcome.GetResult()));
  }
  else
  {
    return BatchDetectSyntaxOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->BatchDetectSyntaxAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::BatchDetectSyntaxAsyncHelper(const BatchDetectSyntaxRequest& request, const BatchDetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, BatchDetectSyntax(request), context);
}

CreateDocumentClassifierOutcome ComprehendClient::CreateDocumentClassifier(const CreateDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateDocumentClassifierOutcome(CreateDocumentClassifierResult(outcome.GetResult()));
  }
  else
  {
    return CreateDocumentClassifierOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateDocumentClassifierAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::CreateDocumentClassifierAsyncHelper(const CreateDocumentClassifierRequest& request, const CreateDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateDocumentClassifier(request), context);
}

CreateEntityRecognizerOutcome ComprehendClient::CreateEntityRecognizer(const CreateEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateEntityRecognizerOutcome(CreateEntityRecognizerResult(outcome.GetResult()));
  }
  else
  {
    return CreateEntityRecognizerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->CreateEntityRecognizerAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::CreateEntityRecognizerAsyncHelper(const CreateEntityRecognizerRequest& request, const CreateEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateEntityRecognizer(request), context);
}

DeleteDocumentClassifierOutcome ComprehendClient::DeleteDocumentClassifier(const DeleteDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteDocumentClassifierOutcome(DeleteDocumentClassifierResult(outcome.GetResult()));
  }
  else
  {
    return DeleteDocumentClassifierOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteDocumentClassifierAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DeleteDocumentClassifierAsyncHelper(const DeleteDocumentClassifierRequest& request, const DeleteDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteDocumentClassifier(request), context);
}

DeleteEntityRecognizerOutcome ComprehendClient::DeleteEntityRecognizer(const DeleteEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteEntityRecognizerOutcome(DeleteEntityRecognizerResult(outcome.GetResult()));
  }
  else
  {
    return DeleteEntityRecognizerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DeleteEntityRecognizerAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DeleteEntityRecognizerAsyncHelper(const DeleteEntityRecognizerRequest& request, const DeleteEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteEntityRecognizer(request), context);
}

DescribeDocumentClassificationJobOutcome ComprehendClient::DescribeDocumentClassificationJob(const DescribeDocumentClassificationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDocumentClassificationJobOutcome(DescribeDocumentClassificationJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDocumentClassificationJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDocumentClassificationJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DescribeDocumentClassificationJobAsyncHelper(const DescribeDocumentClassificationJobRequest& request, const DescribeDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDocumentClassificationJob(request), context);
}

DescribeDocumentClassifierOutcome ComprehendClient::DescribeDocumentClassifier(const DescribeDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDocumentClassifierOutcome(DescribeDocumentClassifierResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDocumentClassifierOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDocumentClassifierAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DescribeDocumentClassifierAsyncHelper(const DescribeDocumentClassifierRequest& request, const DescribeDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDocumentClassifier(request), context);
}

DescribeDominantLanguageDetectionJobOutcome ComprehendClient::DescribeDominantLanguageDetectionJob(const DescribeDominantLanguageDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeDominantLanguageDetectionJobOutcome(DescribeDominantLanguageDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeDominantLanguageDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeDominantLanguageDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DescribeDominantLanguageDetectionJobAsyncHelper(const DescribeDominantLanguageDetectionJobRequest& request, const DescribeDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeDominantLanguageDetectionJob(request), context);
}

DescribeEntitiesDetectionJobOutcome ComprehendClient::DescribeEntitiesDetectionJob(const DescribeEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEntitiesDetectionJobOutcome(DescribeEntitiesDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEntitiesDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEntitiesDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DescribeEntitiesDetectionJobAsyncHelper(const DescribeEntitiesDetectionJobRequest& request, const DescribeEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEntitiesDetectionJob(request), context);
}

DescribeEntityRecognizerOutcome ComprehendClient::DescribeEntityRecognizer(const DescribeEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeEntityRecognizerOutcome(DescribeEntityRecognizerResult(outcome.GetResult()));
  }
  else
  {
    return DescribeEntityRecognizerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeEntityRecognizerAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DescribeEntityRecognizerAsyncHelper(const DescribeEntityRecognizerRequest& request, const DescribeEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeEntityRecognizer(request), context);
}

DescribeKeyPhrasesDetectionJobOutcome ComprehendClient::DescribeKeyPhrasesDetectionJob(const DescribeKeyPhrasesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeKeyPhrasesDetectionJobOutcome(DescribeKeyPhrasesDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeKeyPhrasesDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeKeyPhrasesDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DescribeKeyPhrasesDetectionJobAsyncHelper(const DescribeKeyPhrasesDetectionJobRequest& request, const DescribeKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeKeyPhrasesDetectionJob(request), context);
}

DescribeSentimentDetectionJobOutcome ComprehendClient::DescribeSentimentDetectionJob(const DescribeSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeSentimentDetectionJobOutcome(DescribeSentimentDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeSentimentDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeSentimentDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DescribeSentimentDetectionJobAsyncHelper(const DescribeSentimentDetectionJobRequest& request, const DescribeSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeSentimentDetectionJob(request), context);
}

DescribeTopicsDetectionJobOutcome ComprehendClient::DescribeTopicsDetectionJob(const DescribeTopicsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeTopicsDetectionJobOutcome(DescribeTopicsDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return DescribeTopicsDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DescribeTopicsDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DescribeTopicsDetectionJobAsyncHelper(const DescribeTopicsDetectionJobRequest& request, const DescribeTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeTopicsDetectionJob(request), context);
}

DetectDominantLanguageOutcome ComprehendClient::DetectDominantLanguage(const DetectDominantLanguageRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetectDominantLanguageOutcome(DetectDominantLanguageResult(outcome.GetResult()));
  }
  else
  {
    return DetectDominantLanguageOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetectDominantLanguageAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DetectDominantLanguageAsyncHelper(const DetectDominantLanguageRequest& request, const DetectDominantLanguageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectDominantLanguage(request), context);
}

DetectEntitiesOutcome ComprehendClient::DetectEntities(const DetectEntitiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetectEntitiesOutcome(DetectEntitiesResult(outcome.GetResult()));
  }
  else
  {
    return DetectEntitiesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetectEntitiesAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DetectEntitiesAsyncHelper(const DetectEntitiesRequest& request, const DetectEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectEntities(request), context);
}

DetectKeyPhrasesOutcome ComprehendClient::DetectKeyPhrases(const DetectKeyPhrasesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetectKeyPhrasesOutcome(DetectKeyPhrasesResult(outcome.GetResult()));
  }
  else
  {
    return DetectKeyPhrasesOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetectKeyPhrasesAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DetectKeyPhrasesAsyncHelper(const DetectKeyPhrasesRequest& request, const DetectKeyPhrasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectKeyPhrases(request), context);
}

DetectSentimentOutcome ComprehendClient::DetectSentiment(const DetectSentimentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetectSentimentOutcome(DetectSentimentResult(outcome.GetResult()));
  }
  else
  {
    return DetectSentimentOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetectSentimentAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DetectSentimentAsyncHelper(const DetectSentimentRequest& request, const DetectSentimentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectSentiment(request), context);
}

DetectSyntaxOutcome ComprehendClient::DetectSyntax(const DetectSyntaxRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetectSyntaxOutcome(DetectSyntaxResult(outcome.GetResult()));
  }
  else
  {
    return DetectSyntaxOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->DetectSyntaxAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::DetectSyntaxAsyncHelper(const DetectSyntaxRequest& request, const DetectSyntaxResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectSyntax(request), context);
}

ListDocumentClassificationJobsOutcome ComprehendClient::ListDocumentClassificationJobs(const ListDocumentClassificationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDocumentClassificationJobsOutcome(ListDocumentClassificationJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListDocumentClassificationJobsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDocumentClassificationJobsAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::ListDocumentClassificationJobsAsyncHelper(const ListDocumentClassificationJobsRequest& request, const ListDocumentClassificationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDocumentClassificationJobs(request), context);
}

ListDocumentClassifiersOutcome ComprehendClient::ListDocumentClassifiers(const ListDocumentClassifiersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDocumentClassifiersOutcome(ListDocumentClassifiersResult(outcome.GetResult()));
  }
  else
  {
    return ListDocumentClassifiersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDocumentClassifiersAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::ListDocumentClassifiersAsyncHelper(const ListDocumentClassifiersRequest& request, const ListDocumentClassifiersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDocumentClassifiers(request), context);
}

ListDominantLanguageDetectionJobsOutcome ComprehendClient::ListDominantLanguageDetectionJobs(const ListDominantLanguageDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListDominantLanguageDetectionJobsOutcome(ListDominantLanguageDetectionJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListDominantLanguageDetectionJobsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListDominantLanguageDetectionJobsAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::ListDominantLanguageDetectionJobsAsyncHelper(const ListDominantLanguageDetectionJobsRequest& request, const ListDominantLanguageDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListDominantLanguageDetectionJobs(request), context);
}

ListEntitiesDetectionJobsOutcome ComprehendClient::ListEntitiesDetectionJobs(const ListEntitiesDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEntitiesDetectionJobsOutcome(ListEntitiesDetectionJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListEntitiesDetectionJobsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListEntitiesDetectionJobsAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::ListEntitiesDetectionJobsAsyncHelper(const ListEntitiesDetectionJobsRequest& request, const ListEntitiesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEntitiesDetectionJobs(request), context);
}

ListEntityRecognizersOutcome ComprehendClient::ListEntityRecognizers(const ListEntityRecognizersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListEntityRecognizersOutcome(ListEntityRecognizersResult(outcome.GetResult()));
  }
  else
  {
    return ListEntityRecognizersOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListEntityRecognizersAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::ListEntityRecognizersAsyncHelper(const ListEntityRecognizersRequest& request, const ListEntityRecognizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListEntityRecognizers(request), context);
}

ListKeyPhrasesDetectionJobsOutcome ComprehendClient::ListKeyPhrasesDetectionJobs(const ListKeyPhrasesDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListKeyPhrasesDetectionJobsOutcome(ListKeyPhrasesDetectionJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListKeyPhrasesDetectionJobsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListKeyPhrasesDetectionJobsAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::ListKeyPhrasesDetectionJobsAsyncHelper(const ListKeyPhrasesDetectionJobsRequest& request, const ListKeyPhrasesDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListKeyPhrasesDetectionJobs(request), context);
}

ListSentimentDetectionJobsOutcome ComprehendClient::ListSentimentDetectionJobs(const ListSentimentDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListSentimentDetectionJobsOutcome(ListSentimentDetectionJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListSentimentDetectionJobsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListSentimentDetectionJobsAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::ListSentimentDetectionJobsAsyncHelper(const ListSentimentDetectionJobsRequest& request, const ListSentimentDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListSentimentDetectionJobs(request), context);
}

ListTagsForResourceOutcome ComprehendClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTagsForResourceOutcome(ListTagsForResourceResult(outcome.GetResult()));
  }
  else
  {
    return ListTagsForResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTagsForResourceAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::ListTagsForResourceAsyncHelper(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTagsForResource(request), context);
}

ListTopicsDetectionJobsOutcome ComprehendClient::ListTopicsDetectionJobs(const ListTopicsDetectionJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListTopicsDetectionJobsOutcome(ListTopicsDetectionJobsResult(outcome.GetResult()));
  }
  else
  {
    return ListTopicsDetectionJobsOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->ListTopicsDetectionJobsAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::ListTopicsDetectionJobsAsyncHelper(const ListTopicsDetectionJobsRequest& request, const ListTopicsDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListTopicsDetectionJobs(request), context);
}

StartDocumentClassificationJobOutcome ComprehendClient::StartDocumentClassificationJob(const StartDocumentClassificationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartDocumentClassificationJobOutcome(StartDocumentClassificationJobResult(outcome.GetResult()));
  }
  else
  {
    return StartDocumentClassificationJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartDocumentClassificationJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StartDocumentClassificationJobAsyncHelper(const StartDocumentClassificationJobRequest& request, const StartDocumentClassificationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDocumentClassificationJob(request), context);
}

StartDominantLanguageDetectionJobOutcome ComprehendClient::StartDominantLanguageDetectionJob(const StartDominantLanguageDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartDominantLanguageDetectionJobOutcome(StartDominantLanguageDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StartDominantLanguageDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartDominantLanguageDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StartDominantLanguageDetectionJobAsyncHelper(const StartDominantLanguageDetectionJobRequest& request, const StartDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDominantLanguageDetectionJob(request), context);
}

StartEntitiesDetectionJobOutcome ComprehendClient::StartEntitiesDetectionJob(const StartEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartEntitiesDetectionJobOutcome(StartEntitiesDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StartEntitiesDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartEntitiesDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StartEntitiesDetectionJobAsyncHelper(const StartEntitiesDetectionJobRequest& request, const StartEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartEntitiesDetectionJob(request), context);
}

StartKeyPhrasesDetectionJobOutcome ComprehendClient::StartKeyPhrasesDetectionJob(const StartKeyPhrasesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartKeyPhrasesDetectionJobOutcome(StartKeyPhrasesDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StartKeyPhrasesDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartKeyPhrasesDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StartKeyPhrasesDetectionJobAsyncHelper(const StartKeyPhrasesDetectionJobRequest& request, const StartKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartKeyPhrasesDetectionJob(request), context);
}

StartSentimentDetectionJobOutcome ComprehendClient::StartSentimentDetectionJob(const StartSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartSentimentDetectionJobOutcome(StartSentimentDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StartSentimentDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartSentimentDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StartSentimentDetectionJobAsyncHelper(const StartSentimentDetectionJobRequest& request, const StartSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartSentimentDetectionJob(request), context);
}

StartTopicsDetectionJobOutcome ComprehendClient::StartTopicsDetectionJob(const StartTopicsDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartTopicsDetectionJobOutcome(StartTopicsDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StartTopicsDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StartTopicsDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StartTopicsDetectionJobAsyncHelper(const StartTopicsDetectionJobRequest& request, const StartTopicsDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartTopicsDetectionJob(request), context);
}

StopDominantLanguageDetectionJobOutcome ComprehendClient::StopDominantLanguageDetectionJob(const StopDominantLanguageDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopDominantLanguageDetectionJobOutcome(StopDominantLanguageDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StopDominantLanguageDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopDominantLanguageDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StopDominantLanguageDetectionJobAsyncHelper(const StopDominantLanguageDetectionJobRequest& request, const StopDominantLanguageDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopDominantLanguageDetectionJob(request), context);
}

StopEntitiesDetectionJobOutcome ComprehendClient::StopEntitiesDetectionJob(const StopEntitiesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopEntitiesDetectionJobOutcome(StopEntitiesDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StopEntitiesDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopEntitiesDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StopEntitiesDetectionJobAsyncHelper(const StopEntitiesDetectionJobRequest& request, const StopEntitiesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopEntitiesDetectionJob(request), context);
}

StopKeyPhrasesDetectionJobOutcome ComprehendClient::StopKeyPhrasesDetectionJob(const StopKeyPhrasesDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopKeyPhrasesDetectionJobOutcome(StopKeyPhrasesDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StopKeyPhrasesDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopKeyPhrasesDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StopKeyPhrasesDetectionJobAsyncHelper(const StopKeyPhrasesDetectionJobRequest& request, const StopKeyPhrasesDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopKeyPhrasesDetectionJob(request), context);
}

StopSentimentDetectionJobOutcome ComprehendClient::StopSentimentDetectionJob(const StopSentimentDetectionJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopSentimentDetectionJobOutcome(StopSentimentDetectionJobResult(outcome.GetResult()));
  }
  else
  {
    return StopSentimentDetectionJobOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopSentimentDetectionJobAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StopSentimentDetectionJobAsyncHelper(const StopSentimentDetectionJobRequest& request, const StopSentimentDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopSentimentDetectionJob(request), context);
}

StopTrainingDocumentClassifierOutcome ComprehendClient::StopTrainingDocumentClassifier(const StopTrainingDocumentClassifierRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopTrainingDocumentClassifierOutcome(StopTrainingDocumentClassifierResult(outcome.GetResult()));
  }
  else
  {
    return StopTrainingDocumentClassifierOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopTrainingDocumentClassifierAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StopTrainingDocumentClassifierAsyncHelper(const StopTrainingDocumentClassifierRequest& request, const StopTrainingDocumentClassifierResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopTrainingDocumentClassifier(request), context);
}

StopTrainingEntityRecognizerOutcome ComprehendClient::StopTrainingEntityRecognizer(const StopTrainingEntityRecognizerRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StopTrainingEntityRecognizerOutcome(StopTrainingEntityRecognizerResult(outcome.GetResult()));
  }
  else
  {
    return StopTrainingEntityRecognizerOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->StopTrainingEntityRecognizerAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::StopTrainingEntityRecognizerAsyncHelper(const StopTrainingEntityRecognizerRequest& request, const StopTrainingEntityRecognizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StopTrainingEntityRecognizer(request), context);
}

TagResourceOutcome ComprehendClient::TagResource(const TagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return TagResourceOutcome(TagResourceResult(outcome.GetResult()));
  }
  else
  {
    return TagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->TagResourceAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::TagResourceAsyncHelper(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, TagResource(request), context);
}

UntagResourceOutcome ComprehendClient::UntagResource(const UntagResourceRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UntagResourceOutcome(UntagResourceResult(outcome.GetResult()));
  }
  else
  {
    return UntagResourceOutcome(outcome.GetError());
  }
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
  m_executor->Submit( [this, request, handler, context](){ this->UntagResourceAsyncHelper( request, handler, context ); } );
}

void ComprehendClient::UntagResourceAsyncHelper(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UntagResource(request), context);
}

