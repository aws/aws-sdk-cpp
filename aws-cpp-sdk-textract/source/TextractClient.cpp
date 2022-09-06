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

#include <aws/textract/TextractClient.h>
#include <aws/textract/TextractEndpoint.h>
#include <aws/textract/TextractErrorMarshaller.h>
#include <aws/textract/model/AnalyzeDocumentRequest.h>
#include <aws/textract/model/AnalyzeExpenseRequest.h>
#include <aws/textract/model/AnalyzeIDRequest.h>
#include <aws/textract/model/DetectDocumentTextRequest.h>
#include <aws/textract/model/GetDocumentAnalysisRequest.h>
#include <aws/textract/model/GetDocumentTextDetectionRequest.h>
#include <aws/textract/model/GetExpenseAnalysisRequest.h>
#include <aws/textract/model/StartDocumentAnalysisRequest.h>
#include <aws/textract/model/StartDocumentTextDetectionRequest.h>
#include <aws/textract/model/StartExpenseAnalysisRequest.h>

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
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TextractClient::TextractClient(const AWSCredentials& credentials,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TextractClient::TextractClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                               const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TextractErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TextractClient::~TextractClient()
{
}

void TextractClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Textract");
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
  return AnalyzeDocumentOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

AnalyzeExpenseOutcome TextractClient::AnalyzeExpense(const AnalyzeExpenseRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AnalyzeExpenseOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AnalyzeExpenseOutcomeCallable TextractClient::AnalyzeExpenseCallable(const AnalyzeExpenseRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AnalyzeExpenseOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AnalyzeExpense(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TextractClient::AnalyzeExpenseAsync(const AnalyzeExpenseRequest& request, const AnalyzeExpenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AnalyzeExpenseAsyncHelper( request, handler, context ); } );
}

void TextractClient::AnalyzeExpenseAsyncHelper(const AnalyzeExpenseRequest& request, const AnalyzeExpenseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AnalyzeExpense(request), context);
}

AnalyzeIDOutcome TextractClient::AnalyzeID(const AnalyzeIDRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return AnalyzeIDOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

AnalyzeIDOutcomeCallable TextractClient::AnalyzeIDCallable(const AnalyzeIDRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< AnalyzeIDOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->AnalyzeID(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TextractClient::AnalyzeIDAsync(const AnalyzeIDRequest& request, const AnalyzeIDResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->AnalyzeIDAsyncHelper( request, handler, context ); } );
}

void TextractClient::AnalyzeIDAsyncHelper(const AnalyzeIDRequest& request, const AnalyzeIDResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, AnalyzeID(request), context);
}

DetectDocumentTextOutcome TextractClient::DetectDocumentText(const DetectDocumentTextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DetectDocumentTextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetDocumentAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return GetDocumentTextDetectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

GetExpenseAnalysisOutcome TextractClient::GetExpenseAnalysis(const GetExpenseAnalysisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetExpenseAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetExpenseAnalysisOutcomeCallable TextractClient::GetExpenseAnalysisCallable(const GetExpenseAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetExpenseAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetExpenseAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TextractClient::GetExpenseAnalysisAsync(const GetExpenseAnalysisRequest& request, const GetExpenseAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->GetExpenseAnalysisAsyncHelper( request, handler, context ); } );
}

void TextractClient::GetExpenseAnalysisAsyncHelper(const GetExpenseAnalysisRequest& request, const GetExpenseAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, GetExpenseAnalysis(request), context);
}

StartDocumentAnalysisOutcome TextractClient::StartDocumentAnalysis(const StartDocumentAnalysisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartDocumentAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  return StartDocumentTextDetectionOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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

StartExpenseAnalysisOutcome TextractClient::StartExpenseAnalysis(const StartExpenseAnalysisRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartExpenseAnalysisOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartExpenseAnalysisOutcomeCallable TextractClient::StartExpenseAnalysisCallable(const StartExpenseAnalysisRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartExpenseAnalysisOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartExpenseAnalysis(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TextractClient::StartExpenseAnalysisAsync(const StartExpenseAnalysisRequest& request, const StartExpenseAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->StartExpenseAnalysisAsyncHelper( request, handler, context ); } );
}

void TextractClient::StartExpenseAnalysisAsyncHelper(const StartExpenseAnalysisRequest& request, const StartExpenseAnalysisResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, StartExpenseAnalysis(request), context);
}

