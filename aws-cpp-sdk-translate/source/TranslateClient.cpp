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

#include <aws/translate/TranslateClient.h>
#include <aws/translate/TranslateErrorMarshaller.h>
#include <aws/translate/TranslateEndpointProvider.h>
#include <aws/translate/model/CreateParallelDataRequest.h>
#include <aws/translate/model/DeleteParallelDataRequest.h>
#include <aws/translate/model/DeleteTerminologyRequest.h>
#include <aws/translate/model/DescribeTextTranslationJobRequest.h>
#include <aws/translate/model/GetParallelDataRequest.h>
#include <aws/translate/model/GetTerminologyRequest.h>
#include <aws/translate/model/ImportTerminologyRequest.h>
#include <aws/translate/model/ListLanguagesRequest.h>
#include <aws/translate/model/ListParallelDataRequest.h>
#include <aws/translate/model/ListTagsForResourceRequest.h>
#include <aws/translate/model/ListTerminologiesRequest.h>
#include <aws/translate/model/ListTextTranslationJobsRequest.h>
#include <aws/translate/model/StartTextTranslationJobRequest.h>
#include <aws/translate/model/StopTextTranslationJobRequest.h>
#include <aws/translate/model/TagResourceRequest.h>
#include <aws/translate/model/TranslateTextRequest.h>
#include <aws/translate/model/UntagResourceRequest.h>
#include <aws/translate/model/UpdateParallelDataRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::Translate;
using namespace Aws::Translate::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::Endpoint::ResolveEndpointOutcome;

const char* TranslateClient::SERVICE_NAME = "translate";
const char* TranslateClient::ALLOCATION_TAG = "TranslateClient";

TranslateClient::TranslateClient(const Translate::TranslateClientConfiguration& clientConfiguration,
                                 std::shared_ptr<TranslateEndpointProviderBase> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

TranslateClient::TranslateClient(const AWSCredentials& credentials,
                                 std::shared_ptr<TranslateEndpointProviderBase> endpointProvider,
                                 const Translate::TranslateClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

TranslateClient::TranslateClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 std::shared_ptr<TranslateEndpointProviderBase> endpointProvider,
                                 const Translate::TranslateClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(m_clientConfiguration);
}

    /* Legacy constructors due deprecation */
  TranslateClient::TranslateClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
  m_clientConfiguration(clientConfiguration),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TranslateClient::TranslateClient(const AWSCredentials& credentials,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

TranslateClient::TranslateClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<TranslateErrorMarshaller>(ALLOCATION_TAG)),
    m_clientConfiguration(clientConfiguration),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<TranslateEndpointProvider>(ALLOCATION_TAG))
{
  init(m_clientConfiguration);
}

    /* End of legacy constructors due deprecation */
TranslateClient::~TranslateClient()
{
}

std::shared_ptr<TranslateEndpointProviderBase>& TranslateClient::accessEndpointProvider()
{
  return m_endpointProvider;
}

void TranslateClient::init(const Translate::TranslateClientConfiguration& config)
{
  AWSClient::SetServiceClientName("Translate");
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->InitBuiltInParameters(config);
}

void TranslateClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_CHECK_PTR(SERVICE_NAME, m_endpointProvider);
  m_endpointProvider->OverrideEndpoint(endpoint);
}

CreateParallelDataOutcome TranslateClient::CreateParallelData(const CreateParallelDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, CreateParallelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, CreateParallelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return CreateParallelDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

CreateParallelDataOutcomeCallable TranslateClient::CreateParallelDataCallable(const CreateParallelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateParallelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateParallelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::CreateParallelDataAsync(const CreateParallelDataRequest& request, const CreateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, CreateParallelData(request), context);
    } );
}

DeleteParallelDataOutcome TranslateClient::DeleteParallelData(const DeleteParallelDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteParallelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteParallelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteParallelDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteParallelDataOutcomeCallable TranslateClient::DeleteParallelDataCallable(const DeleteParallelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteParallelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteParallelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::DeleteParallelDataAsync(const DeleteParallelDataRequest& request, const DeleteParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteParallelData(request), context);
    } );
}

DeleteTerminologyOutcome TranslateClient::DeleteTerminology(const DeleteTerminologyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DeleteTerminology, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DeleteTerminology, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DeleteTerminologyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DeleteTerminologyOutcomeCallable TranslateClient::DeleteTerminologyCallable(const DeleteTerminologyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteTerminologyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteTerminology(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::DeleteTerminologyAsync(const DeleteTerminologyRequest& request, const DeleteTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DeleteTerminology(request), context);
    } );
}

DescribeTextTranslationJobOutcome TranslateClient::DescribeTextTranslationJob(const DescribeTextTranslationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, DescribeTextTranslationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, DescribeTextTranslationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return DescribeTextTranslationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

DescribeTextTranslationJobOutcomeCallable TranslateClient::DescribeTextTranslationJobCallable(const DescribeTextTranslationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeTextTranslationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeTextTranslationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::DescribeTextTranslationJobAsync(const DescribeTextTranslationJobRequest& request, const DescribeTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, DescribeTextTranslationJob(request), context);
    } );
}

GetParallelDataOutcome TranslateClient::GetParallelData(const GetParallelDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetParallelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetParallelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetParallelDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetParallelDataOutcomeCallable TranslateClient::GetParallelDataCallable(const GetParallelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetParallelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetParallelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::GetParallelDataAsync(const GetParallelDataRequest& request, const GetParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetParallelData(request), context);
    } );
}

GetTerminologyOutcome TranslateClient::GetTerminology(const GetTerminologyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, GetTerminology, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, GetTerminology, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return GetTerminologyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

GetTerminologyOutcomeCallable TranslateClient::GetTerminologyCallable(const GetTerminologyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< GetTerminologyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->GetTerminology(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::GetTerminologyAsync(const GetTerminologyRequest& request, const GetTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, GetTerminology(request), context);
    } );
}

ImportTerminologyOutcome TranslateClient::ImportTerminology(const ImportTerminologyRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ImportTerminology, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ImportTerminology, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ImportTerminologyOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ImportTerminologyOutcomeCallable TranslateClient::ImportTerminologyCallable(const ImportTerminologyRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ImportTerminologyOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ImportTerminology(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::ImportTerminologyAsync(const ImportTerminologyRequest& request, const ImportTerminologyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ImportTerminology(request), context);
    } );
}

ListLanguagesOutcome TranslateClient::ListLanguages(const ListLanguagesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListLanguages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListLanguages, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListLanguagesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListLanguagesOutcomeCallable TranslateClient::ListLanguagesCallable(const ListLanguagesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListLanguagesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListLanguages(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::ListLanguagesAsync(const ListLanguagesRequest& request, const ListLanguagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListLanguages(request), context);
    } );
}

ListParallelDataOutcome TranslateClient::ListParallelData(const ListParallelDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListParallelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListParallelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListParallelDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListParallelDataOutcomeCallable TranslateClient::ListParallelDataCallable(const ListParallelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListParallelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListParallelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::ListParallelDataAsync(const ListParallelDataRequest& request, const ListParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListParallelData(request), context);
    } );
}

ListTagsForResourceOutcome TranslateClient::ListTagsForResource(const ListTagsForResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTagsForResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTagsForResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTagsForResourceOutcomeCallable TranslateClient::ListTagsForResourceCallable(const ListTagsForResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTagsForResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTagsForResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::ListTagsForResourceAsync(const ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTagsForResource(request), context);
    } );
}

ListTerminologiesOutcome TranslateClient::ListTerminologies(const ListTerminologiesRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTerminologies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTerminologies, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTerminologiesOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTerminologiesOutcomeCallable TranslateClient::ListTerminologiesCallable(const ListTerminologiesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTerminologiesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTerminologies(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::ListTerminologiesAsync(const ListTerminologiesRequest& request, const ListTerminologiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTerminologies(request), context);
    } );
}

ListTextTranslationJobsOutcome TranslateClient::ListTextTranslationJobs(const ListTextTranslationJobsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, ListTextTranslationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, ListTextTranslationJobs, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return ListTextTranslationJobsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

ListTextTranslationJobsOutcomeCallable TranslateClient::ListTextTranslationJobsCallable(const ListTextTranslationJobsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListTextTranslationJobsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListTextTranslationJobs(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::ListTextTranslationJobsAsync(const ListTextTranslationJobsRequest& request, const ListTextTranslationJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, ListTextTranslationJobs(request), context);
    } );
}

StartTextTranslationJobOutcome TranslateClient::StartTextTranslationJob(const StartTextTranslationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StartTextTranslationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StartTextTranslationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StartTextTranslationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StartTextTranslationJobOutcomeCallable TranslateClient::StartTextTranslationJobCallable(const StartTextTranslationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StartTextTranslationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StartTextTranslationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::StartTextTranslationJobAsync(const StartTextTranslationJobRequest& request, const StartTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StartTextTranslationJob(request), context);
    } );
}

StopTextTranslationJobOutcome TranslateClient::StopTextTranslationJob(const StopTextTranslationJobRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, StopTextTranslationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, StopTextTranslationJob, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return StopTextTranslationJobOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

StopTextTranslationJobOutcomeCallable TranslateClient::StopTextTranslationJobCallable(const StopTextTranslationJobRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< StopTextTranslationJobOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->StopTextTranslationJob(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::StopTextTranslationJobAsync(const StopTextTranslationJobRequest& request, const StopTextTranslationJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, StopTextTranslationJob(request), context);
    } );
}

TagResourceOutcome TranslateClient::TagResource(const TagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TagResourceOutcomeCallable TranslateClient::TagResourceCallable(const TagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::TagResourceAsync(const TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TagResource(request), context);
    } );
}

TranslateTextOutcome TranslateClient::TranslateText(const TranslateTextRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, TranslateText, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, TranslateText, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return TranslateTextOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

TranslateTextOutcomeCallable TranslateClient::TranslateTextCallable(const TranslateTextRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< TranslateTextOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->TranslateText(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::TranslateTextAsync(const TranslateTextRequest& request, const TranslateTextResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, TranslateText(request), context);
    } );
}

UntagResourceOutcome TranslateClient::UntagResource(const UntagResourceRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UntagResource, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UntagResourceOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UntagResourceOutcomeCallable TranslateClient::UntagResourceCallable(const UntagResourceRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UntagResourceOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UntagResource(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::UntagResourceAsync(const UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UntagResource(request), context);
    } );
}

UpdateParallelDataOutcome TranslateClient::UpdateParallelData(const UpdateParallelDataRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UpdateParallelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UpdateParallelData, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UpdateParallelDataOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UpdateParallelDataOutcomeCallable TranslateClient::UpdateParallelDataCallable(const UpdateParallelDataRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateParallelDataOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateParallelData(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void TranslateClient::UpdateParallelDataAsync(const UpdateParallelDataRequest& request, const UpdateParallelDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UpdateParallelData(request), context);
    } );
}

