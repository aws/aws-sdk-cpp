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

#include <aws/polly/PollyClient.h>
#include <aws/polly/PollyErrorMarshaller.h>
#include <aws/polly/PollyEndpointProvider.h>
#include <aws/polly/model/DeleteLexiconRequest.h>
#include <aws/polly/model/DescribeVoicesRequest.h>
#include <aws/polly/model/GetLexiconRequest.h>
#include <aws/polly/model/GetSpeechSynthesisTaskRequest.h>
#include <aws/polly/model/ListLexiconsRequest.h>
#include <aws/polly/model/ListSpeechSynthesisTasksRequest.h>
#include <aws/polly/model/PutLexiconRequest.h>
#include <aws/polly/model/StartSpeechSynthesisTaskRequest.h>
#include <aws/polly/model/SynthesizeSpeechRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Polly;
using namespace Aws::Polly::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* PollyClient::SERVICE_NAME = "polly";
const char* PollyClient::ALLOCATION_TAG = "PollyClient";

PollyClient::PollyClient(const Polly::PollyClientConfiguration& clientConfiguration,
                         std::shared_ptr<PollyEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PollyClient::PollyClient(const AWSCredentials& credentials,
                         std::shared_ptr<PollyEndpointProviderBase> endpointProvider,
                         const Polly::PollyClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

PollyClient::PollyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<PollyEndpointProviderBase> endpointProvider,
                         const Polly::PollyClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  PollyClient::PollyClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PollyClient::PollyClient(const AWSCredentials& credentials,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

PollyClient::PollyClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                         const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<PollyErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<PollyEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
PollyClient::~PollyClient()
{
}

std::shared_ptr<PollyEndpointProviderBase>& PollyClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void PollyClient::init(const Polly::PollyClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Polly");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void PollyClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

DeleteLexiconOutcome PollyClient::DeleteLexicon(const DeleteLexiconRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteLexicon, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("DeleteLexicon", "Required field: Name, is not set");
    return DeleteLexiconOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteLexicon, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/lexicons/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return DeleteLexiconOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER));
}

DeleteLexiconOutcomeCallable PollyClient::DeleteLexiconCallable(const DeleteLexiconRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteLexiconOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteLexicon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::DeleteLexiconAsync(const DeleteLexiconRequest& request, const DeleteLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteLexicon(request), context);
    } );
}

DescribeVoicesOutcome PollyClient::DescribeVoices(const DescribeVoicesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeVoices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeVoices, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/voices");
  return DescribeVoicesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

DescribeVoicesOutcomeCallable PollyClient::DescribeVoicesCallable(const DescribeVoicesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVoicesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVoices(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::DescribeVoicesAsync(const DescribeVoicesRequest& request, const DescribeVoicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeVoices(request), context);
    } );
}

GetLexiconOutcome PollyClient::GetLexicon(const GetLexiconRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetLexicon, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetLexicon", "Required field: Name, is not set");
    return GetLexiconOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetLexicon, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/lexicons/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return GetLexiconOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetLexiconOutcomeCallable PollyClient::GetLexiconCallable(const GetLexiconRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetLexiconOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetLexicon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::GetLexiconAsync(const GetLexiconRequest& request, const GetLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetLexicon(request), context);
    } );
}

GetSpeechSynthesisTaskOutcome PollyClient::GetSpeechSynthesisTask(const GetSpeechSynthesisTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetSpeechSynthesisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.TaskIdHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("GetSpeechSynthesisTask", "Required field: TaskId, is not set");
    return GetSpeechSynthesisTaskOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [TaskId]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetSpeechSynthesisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/synthesisTasks/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetTaskId());
  return GetSpeechSynthesisTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

GetSpeechSynthesisTaskOutcomeCallable PollyClient::GetSpeechSynthesisTaskCallable(const GetSpeechSynthesisTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetSpeechSynthesisTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetSpeechSynthesisTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::GetSpeechSynthesisTaskAsync(const GetSpeechSynthesisTaskRequest& request, const GetSpeechSynthesisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetSpeechSynthesisTask(request), context);
    } );
}

ListLexiconsOutcome PollyClient::ListLexicons(const ListLexiconsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLexicons, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLexicons, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/lexicons");
  return ListLexiconsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListLexiconsOutcomeCallable PollyClient::ListLexiconsCallable(const ListLexiconsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLexiconsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLexicons(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::ListLexiconsAsync(const ListLexiconsRequest& request, const ListLexiconsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLexicons(request), context);
    } );
}

ListSpeechSynthesisTasksOutcome PollyClient::ListSpeechSynthesisTasks(const ListSpeechSynthesisTasksRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListSpeechSynthesisTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListSpeechSynthesisTasks, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/synthesisTasks");
  return ListSpeechSynthesisTasksOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

ListSpeechSynthesisTasksOutcomeCallable PollyClient::ListSpeechSynthesisTasksCallable(const ListSpeechSynthesisTasksRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListSpeechSynthesisTasksOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListSpeechSynthesisTasks(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::ListSpeechSynthesisTasksAsync(const ListSpeechSynthesisTasksRequest& request, const ListSpeechSynthesisTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListSpeechSynthesisTasks(request), context);
    } );
}

PutLexiconOutcome PollyClient::PutLexicon(const PutLexiconRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, PutLexicon, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.NameHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("PutLexicon", "Required field: Name, is not set");
    return PutLexiconOutcome(Aws::Client::AWSError<PollyErrors>(PollyErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Name]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, PutLexicon, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/lexicons/");
  endpointResolutionOutcome.GetResult().AddPathSegment(request.GetName());
  return PutLexiconOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER));
}

PutLexiconOutcomeCallable PollyClient::PutLexiconCallable(const PutLexiconRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< PutLexiconOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->PutLexicon(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::PutLexiconAsync(const PutLexiconRequest& request, const PutLexiconResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, PutLexicon(request), context);
    } );
}

StartSpeechSynthesisTaskOutcome PollyClient::StartSpeechSynthesisTask(const StartSpeechSynthesisTaskRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartSpeechSynthesisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartSpeechSynthesisTask, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/synthesisTasks");
  return StartSpeechSynthesisTaskOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartSpeechSynthesisTaskOutcomeCallable PollyClient::StartSpeechSynthesisTaskCallable(const StartSpeechSynthesisTaskRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartSpeechSynthesisTaskOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartSpeechSynthesisTask(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::StartSpeechSynthesisTaskAsync(const StartSpeechSynthesisTaskRequest& request, const StartSpeechSynthesisTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartSpeechSynthesisTask(request), context);
    } );
}

SynthesizeSpeechOutcome PollyClient::SynthesizeSpeech(const SynthesizeSpeechRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, SynthesizeSpeech, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, SynthesizeSpeech, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  endpointResolutionOutcome.GetResult().AddPathSegments("/v1/speech");
  return SynthesizeSpeechOutcome(MakeRequestWithUnparsedResponse(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST));
}

SynthesizeSpeechOutcomeCallable PollyClient::SynthesizeSpeechCallable(const SynthesizeSpeechRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SynthesizeSpeechOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->SynthesizeSpeech(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void PollyClient::SynthesizeSpeechAsync(const SynthesizeSpeechRequest& request, const SynthesizeSpeechResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, SynthesizeSpeech(request), context);
    } );
}

