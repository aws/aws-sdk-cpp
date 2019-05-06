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

#include <aws/textract/TextractClient.h>
#include <aws/textract/TextractEndpoint.h>
#include <aws/textract/TextractErrorMarshaller.h>
#include <aws/textract/model/AnalyzeDocumentRequest.h>
#include <aws/textract/model/DetectDocumentTextRequest.h>
#include <aws/textract/model/GetDocumentAnalysisRequest.h>
#include <aws/textract/model/GetDocumentTextDetectionRequest.h>
#include <aws/textract/model/StartDocumentAnalysisRequest.h>
#include <aws/textract/model/StartDocumentTextDetectionRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Textract;
using namespace Aws::Textract::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "textract";
static const char* ALLOCATION_TAG = "TextractClient";


TextractClient::TextractClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TextractClient::TextractClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TextractClient::TextractClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TextractClient::~TextractClient()
{
}

void TextractClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + TextractEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void TextractClient::OverrideEndpoint(const Aws::String& endpoint)
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

AnalyzeDocumentOutcome TextractClient::AnalyzeDocument(const AnalyzeDocumentRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return AnalyzeDocumentOutcome(AnalyzeDocumentResult(outcome.GetResult()));
  }
  else
  {
    return AnalyzeDocumentOutcome(outcome.GetError());
  }
}

AnalyzeDocumentOutcomeCallable TextractClient::AnalyzeDocumentCallable(const AnalyzeDocumentRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AnalyzeDocumentOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AnalyzeDocument(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TextractClient::AnalyzeDocumentAsync(const AnalyzeDocumentRequest& request, const AnalyzeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AnalyzeDocumentAsyncHelper( request, handler, context ); } );
}

void TextractClient::AnalyzeDocumentAsyncHelper(const AnalyzeDocumentRequest& request, const AnalyzeDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AnalyzeDocument(request), context);
}

DetectDocumentTextOutcome TextractClient::DetectDocumentText(const DetectDocumentTextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DetectDocumentTextOutcome(DetectDocumentTextResult(outcome.GetResult()));
  }
  else
  {
    return DetectDocumentTextOutcome(outcome.GetError());
  }
}

DetectDocumentTextOutcomeCallable TextractClient::DetectDocumentTextCallable(const DetectDocumentTextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DetectDocumentTextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DetectDocumentText(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TextractClient::DetectDocumentTextAsync(const DetectDocumentTextRequest& request, const DetectDocumentTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DetectDocumentTextAsyncHelper( request, handler, context ); } );
}

void TextractClient::DetectDocumentTextAsyncHelper(const DetectDocumentTextRequest& request, const DetectDocumentTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DetectDocumentText(request), context);
}

GetDocumentAnalysisOutcome TextractClient::GetDocumentAnalysis(const GetDocumentAnalysisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDocumentAnalysisOutcome(GetDocumentAnalysisResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentAnalysisOutcome(outcome.GetError());
  }
}

GetDocumentAnalysisOutcomeCallable TextractClient::GetDocumentAnalysisCallable(const GetDocumentAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TextractClient::GetDocumentAnalysisAsync(const GetDocumentAnalysisRequest& request, const GetDocumentAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDocumentAnalysisAsyncHelper( request, handler, context ); } );
}

void TextractClient::GetDocumentAnalysisAsyncHelper(const GetDocumentAnalysisRequest& request, const GetDocumentAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocumentAnalysis(request), context);
}

GetDocumentTextDetectionOutcome TextractClient::GetDocumentTextDetection(const GetDocumentTextDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return GetDocumentTextDetectionOutcome(GetDocumentTextDetectionResult(outcome.GetResult()));
  }
  else
  {
    return GetDocumentTextDetectionOutcome(outcome.GetError());
  }
}

GetDocumentTextDetectionOutcomeCallable TextractClient::GetDocumentTextDetectionCallable(const GetDocumentTextDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetDocumentTextDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetDocumentTextDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TextractClient::GetDocumentTextDetectionAsync(const GetDocumentTextDetectionRequest& request, const GetDocumentTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetDocumentTextDetectionAsyncHelper( request, handler, context ); } );
}

void TextractClient::GetDocumentTextDetectionAsyncHelper(const GetDocumentTextDetectionRequest& request, const GetDocumentTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetDocumentTextDetection(request), context);
}

StartDocumentAnalysisOutcome TextractClient::StartDocumentAnalysis(const StartDocumentAnalysisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartDocumentAnalysisOutcome(StartDocumentAnalysisResult(outcome.GetResult()));
  }
  else
  {
    return StartDocumentAnalysisOutcome(outcome.GetError());
  }
}

StartDocumentAnalysisOutcomeCallable TextractClient::StartDocumentAnalysisCallable(const StartDocumentAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDocumentAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDocumentAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TextractClient::StartDocumentAnalysisAsync(const StartDocumentAnalysisRequest& request, const StartDocumentAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDocumentAnalysisAsyncHelper( request, handler, context ); } );
}

void TextractClient::StartDocumentAnalysisAsyncHelper(const StartDocumentAnalysisRequest& request, const StartDocumentAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDocumentAnalysis(request), context);
}

StartDocumentTextDetectionOutcome TextractClient::StartDocumentTextDetection(const StartDocumentTextDetectionRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return StartDocumentTextDetectionOutcome(StartDocumentTextDetectionResult(outcome.GetResult()));
  }
  else
  {
    return StartDocumentTextDetectionOutcome(outcome.GetError());
  }
}

StartDocumentTextDetectionOutcomeCallable TextractClient::StartDocumentTextDetectionCallable(const StartDocumentTextDetectionRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartDocumentTextDetectionOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartDocumentTextDetection(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TextractClient::StartDocumentTextDetectionAsync(const StartDocumentTextDetectionRequest& request, const StartDocumentTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartDocumentTextDetectionAsyncHelper( request, handler, context ); } );
}

void TextractClient::StartDocumentTextDetectionAsyncHelper(const StartDocumentTextDetectionRequest& request, const StartDocumentTextDetectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartDocumentTextDetection(request), context);
}

