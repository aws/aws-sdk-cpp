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

#include <aws/translate/TranslateClient.h>
#include <aws/translate/TranslateEndpoint.h>
#include <aws/translate/TranslateErrorMarshaller.h>
#include <aws/translate/model/CreateParallelDataRequest.h>
#include <aws/translate/model/DeleteParallelDataRequest.h>
#include <aws/translate/model/DeleteTerminologyRequest.h>
#include <aws/translate/model/DescribeTextTranslationJobRequest.h>
#include <aws/translate/model/GetParallelDataRequest.h>
#include <aws/translate/model/GetTerminologyRequest.h>
#include <aws/translate/model/ImportTerminologyRequest.h>
#include <aws/translate/model/ListLanguagesRequest.h>
#include <aws/translate/model/ListParallelDataRequest.h>
#include <aws/translate/model/ListTerminologiesRequest.h>
#include <aws/translate/model/ListTextTranslationJobsRequest.h>
#include <aws/translate/model/StartTextTranslationJobRequest.h>
#include <aws/translate/model/StopTextTranslationJobRequest.h>
#include <aws/translate/model/TranslateTextRequest.h>
#include <aws/translate/model/UpdateParallelDataRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Translate;
using namespace Aws::Translate::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "translate";
static const char* ALLOCATION_TAG = "TranslateClient";

TranslateClient::TranslateClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranslateClient::TranslateClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranslateClient::TranslateClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

TranslateClient::~TranslateClient()
{
}

void TranslateClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Translate");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + TranslateEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void TranslateClient::OverrideEndpoint(const Aws::String& endpoint)
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

CreateParallelDataOutcome TranslateClient::CreateParallelData(const CreateParallelDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return CreateParallelDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateParallelDataOutcomeCallable TranslateClient::CreateParallelDataCallable(const CreateParallelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateParallelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateParallelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientCreateParallelDataAsyncHelper(TranslateClient const * const clientThis, const CreateParallelDataRequest& request, const CreateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->CreateParallelData(request), context);
}

void TranslateClient::CreateParallelDataAsync(const CreateParallelDataRequest& request, const CreateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientCreateParallelDataAsyncHelper( this, request, handler, context ); } );
}

DeleteParallelDataOutcome TranslateClient::DeleteParallelData(const DeleteParallelDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteParallelDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteParallelDataOutcomeCallable TranslateClient::DeleteParallelDataCallable(const DeleteParallelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteParallelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteParallelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientDeleteParallelDataAsyncHelper(TranslateClient const * const clientThis, const DeleteParallelDataRequest& request, const DeleteParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteParallelData(request), context);
}

void TranslateClient::DeleteParallelDataAsync(const DeleteParallelDataRequest& request, const DeleteParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientDeleteParallelDataAsyncHelper( this, request, handler, context ); } );
}

DeleteTerminologyOutcome TranslateClient::DeleteTerminology(const DeleteTerminologyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DeleteTerminologyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTerminologyOutcomeCallable TranslateClient::DeleteTerminologyCallable(const DeleteTerminologyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTerminologyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTerminology(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientDeleteTerminologyAsyncHelper(TranslateClient const * const clientThis, const DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DeleteTerminology(request), context);
}

void TranslateClient::DeleteTerminologyAsync(const DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientDeleteTerminologyAsyncHelper( this, request, handler, context ); } );
}

DescribeTextTranslationJobOutcome TranslateClient::DescribeTextTranslationJob(const DescribeTextTranslationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return DescribeTextTranslationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTextTranslationJobOutcomeCallable TranslateClient::DescribeTextTranslationJobCallable(const DescribeTextTranslationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTextTranslationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTextTranslationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientDescribeTextTranslationJobAsyncHelper(TranslateClient const * const clientThis, const DescribeTextTranslationJobRequest& request, const DescribeTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->DescribeTextTranslationJob(request), context);
}

void TranslateClient::DescribeTextTranslationJobAsync(const DescribeTextTranslationJobRequest& request, const DescribeTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientDescribeTextTranslationJobAsyncHelper( this, request, handler, context ); } );
}

GetParallelDataOutcome TranslateClient::GetParallelData(const GetParallelDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetParallelDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParallelDataOutcomeCallable TranslateClient::GetParallelDataCallable(const GetParallelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParallelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParallelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientGetParallelDataAsyncHelper(TranslateClient const * const clientThis, const GetParallelDataRequest& request, const GetParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetParallelData(request), context);
}

void TranslateClient::GetParallelDataAsync(const GetParallelDataRequest& request, const GetParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientGetParallelDataAsyncHelper( this, request, handler, context ); } );
}

GetTerminologyOutcome TranslateClient::GetTerminology(const GetTerminologyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return GetTerminologyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTerminologyOutcomeCallable TranslateClient::GetTerminologyCallable(const GetTerminologyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTerminologyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTerminology(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientGetTerminologyAsyncHelper(TranslateClient const * const clientThis, const GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->GetTerminology(request), context);
}

void TranslateClient::GetTerminologyAsync(const GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientGetTerminologyAsyncHelper( this, request, handler, context ); } );
}

ImportTerminologyOutcome TranslateClient::ImportTerminology(const ImportTerminologyRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ImportTerminologyOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportTerminologyOutcomeCallable TranslateClient::ImportTerminologyCallable(const ImportTerminologyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportTerminologyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportTerminology(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientImportTerminologyAsyncHelper(TranslateClient const * const clientThis, const ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ImportTerminology(request), context);
}

void TranslateClient::ImportTerminologyAsync(const ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientImportTerminologyAsyncHelper( this, request, handler, context ); } );
}

ListLanguagesOutcome TranslateClient::ListLanguages(const ListLanguagesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListLanguagesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLanguagesOutcomeCallable TranslateClient::ListLanguagesCallable(const ListLanguagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLanguagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLanguages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientListLanguagesAsyncHelper(TranslateClient const * const clientThis, const ListLanguagesRequest& request, const ListLanguagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListLanguages(request), context);
}

void TranslateClient::ListLanguagesAsync(const ListLanguagesRequest& request, const ListLanguagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientListLanguagesAsyncHelper( this, request, handler, context ); } );
}

ListParallelDataOutcome TranslateClient::ListParallelData(const ListParallelDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListParallelDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListParallelDataOutcomeCallable TranslateClient::ListParallelDataCallable(const ListParallelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListParallelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListParallelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientListParallelDataAsyncHelper(TranslateClient const * const clientThis, const ListParallelDataRequest& request, const ListParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListParallelData(request), context);
}

void TranslateClient::ListParallelDataAsync(const ListParallelDataRequest& request, const ListParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientListParallelDataAsyncHelper( this, request, handler, context ); } );
}

ListTerminologiesOutcome TranslateClient::ListTerminologies(const ListTerminologiesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTerminologiesOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTerminologiesOutcomeCallable TranslateClient::ListTerminologiesCallable(const ListTerminologiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTerminologiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTerminologies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientListTerminologiesAsyncHelper(TranslateClient const * const clientThis, const ListTerminologiesRequest& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTerminologies(request), context);
}

void TranslateClient::ListTerminologiesAsync(const ListTerminologiesRequest& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientListTerminologiesAsyncHelper( this, request, handler, context ); } );
}

ListTextTranslationJobsOutcome TranslateClient::ListTextTranslationJobs(const ListTextTranslationJobsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return ListTextTranslationJobsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTextTranslationJobsOutcomeCallable TranslateClient::ListTextTranslationJobsCallable(const ListTextTranslationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTextTranslationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTextTranslationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientListTextTranslationJobsAsyncHelper(TranslateClient const * const clientThis, const ListTextTranslationJobsRequest& request, const ListTextTranslationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->ListTextTranslationJobs(request), context);
}

void TranslateClient::ListTextTranslationJobsAsync(const ListTextTranslationJobsRequest& request, const ListTextTranslationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientListTextTranslationJobsAsyncHelper( this, request, handler, context ); } );
}

StartTextTranslationJobOutcome TranslateClient::StartTextTranslationJob(const StartTextTranslationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StartTextTranslationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTextTranslationJobOutcomeCallable TranslateClient::StartTextTranslationJobCallable(const StartTextTranslationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTextTranslationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTextTranslationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientStartTextTranslationJobAsyncHelper(TranslateClient const * const clientThis, const StartTextTranslationJobRequest& request, const StartTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StartTextTranslationJob(request), context);
}

void TranslateClient::StartTextTranslationJobAsync(const StartTextTranslationJobRequest& request, const StartTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientStartTextTranslationJobAsyncHelper( this, request, handler, context ); } );
}

StopTextTranslationJobOutcome TranslateClient::StopTextTranslationJob(const StopTextTranslationJobRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return StopTextTranslationJobOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTextTranslationJobOutcomeCallable TranslateClient::StopTextTranslationJobCallable(const StopTextTranslationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTextTranslationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTextTranslationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientStopTextTranslationJobAsyncHelper(TranslateClient const * const clientThis, const StopTextTranslationJobRequest& request, const StopTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->StopTextTranslationJob(request), context);
}

void TranslateClient::StopTextTranslationJobAsync(const StopTextTranslationJobRequest& request, const StopTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientStopTextTranslationJobAsyncHelper( this, request, handler, context ); } );
}

TranslateTextOutcome TranslateClient::TranslateText(const TranslateTextRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return TranslateTextOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TranslateTextOutcomeCallable TranslateClient::TranslateTextCallable(const TranslateTextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TranslateTextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TranslateText(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientTranslateTextAsyncHelper(TranslateClient const * const clientThis, const TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->TranslateText(request), context);
}

void TranslateClient::TranslateTextAsync(const TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientTranslateTextAsyncHelper( this, request, handler, context ); } );
}

UpdateParallelDataOutcome TranslateClient::UpdateParallelData(const UpdateParallelDataRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  return UpdateParallelDataOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateParallelDataOutcomeCallable TranslateClient::UpdateParallelDataCallable(const UpdateParallelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateParallelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateParallelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClientUpdateParallelDataAsyncHelper(TranslateClient const * const clientThis, const UpdateParallelDataRequest& request, const UpdateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context)
{
  handler(clientThis, request, clientThis->UpdateParallelData(request), context);
}

void TranslateClient::UpdateParallelDataAsync(const UpdateParallelDataRequest& request, const UpdateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ TranslateClientUpdateParallelDataAsyncHelper( this, request, handler, context ); } );
}

