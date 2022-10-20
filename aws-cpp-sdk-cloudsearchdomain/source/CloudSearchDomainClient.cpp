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

#include <aws/cloudsearchdomain/CloudSearchDomainClient.h>
#include <aws/cloudsearchdomain/CloudSearchDomainEndpoint.h>
#include <aws/cloudsearchdomain/CloudSearchDomainErrorMarshaller.h>
#include <aws/cloudsearchdomain/CloudSearchDomainEndpointProvider.h>
#include <aws/cloudsearchdomain/model/SearchRequest.h>
#include <aws/cloudsearchdomain/model/SuggestRequest.h>
#include <aws/cloudsearchdomain/model/UploadDocumentsRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::CloudSearchDomain;
using namespace Aws::CloudSearchDomain::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;
using ResolveEndpointOutcome = Aws::CloudSearchDomain::Endpoint::CloudSearchDomainEndpointProvider::CloudSearchDomainResolveEndpointOutcome;


const char* CloudSearchDomainClient::SERVICE_NAME = "cloudsearch";
const char* CloudSearchDomainClient::ALLOCATION_TAG = "CloudSearchDomainClient";

CloudSearchDomainClient::CloudSearchDomainClient(const Client::ClientConfiguration& clientConfiguration,
                                                 std::shared_ptr<Endpoint::CloudSearchDomainEndpointProvider> endpointProvider) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

CloudSearchDomainClient::CloudSearchDomainClient(const AWSCredentials& credentials,
                                                 std::shared_ptr<Endpoint::CloudSearchDomainEndpointProvider> endpointProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

CloudSearchDomainClient::CloudSearchDomainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 std::shared_ptr<Endpoint::CloudSearchDomainEndpointProvider> endpointProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(std::move(endpointProvider))
{
  init(clientConfiguration);
}

    /* Legacy constructors due deprecation */
  CloudSearchDomainClient::CloudSearchDomainClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
  m_executor(clientConfiguration.executor),
  m_endpointProvider(Aws::MakeShared<CloudSearchDomain::Endpoint::CloudSearchDomainEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

CloudSearchDomainClient::CloudSearchDomainClient(const AWSCredentials& credentials,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudSearchDomain::Endpoint::CloudSearchDomainEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

CloudSearchDomainClient::CloudSearchDomainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
                                                 const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
            Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG,
                                             credentialsProvider,
                                             SERVICE_NAME,
                                             Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
            Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor),
    m_endpointProvider(Aws::MakeShared<CloudSearchDomain::Endpoint::CloudSearchDomainEndpointProvider>(ALLOCATION_TAG))
{
  init(clientConfiguration);
}

    /* End of legacy constructors due deprecation */
CloudSearchDomainClient::~CloudSearchDomainClient()
{
}

void CloudSearchDomainClient::init(const Client::ClientConfiguration& config)
{
  AWSClient::SetServiceClientName("cloudsearchdomain");
  AWS_UNREFERENCED_PARAM(config);
}

void CloudSearchDomainClient::OverrideEndpoint(const Aws::String& endpoint)
{
  AWS_UNREFERENCED_PARAM(endpoint);
  // TODO: support existing Override API
}

SearchOutcome CloudSearchDomainClient::Search(const SearchRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Search, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.QueryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Search", "Required field: Query, is not set");
    return SearchOutcome(Aws::Client::AWSError<CloudSearchDomainErrors>(CloudSearchDomainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Query]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Search, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SearchOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

SearchOutcomeCallable CloudSearchDomainClient::SearchCallable(const SearchRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SearchOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Search(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchDomainClient::SearchAsync(const SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Search(request), context);
    } );
}

SuggestOutcome CloudSearchDomainClient::Suggest(const SuggestRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, Suggest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  if (!request.QueryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Suggest", "Required field: Query, is not set");
    return SuggestOutcome(Aws::Client::AWSError<CloudSearchDomainErrors>(CloudSearchDomainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Query]", false));
  }
  if (!request.SuggesterHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Suggest", "Required field: Suggester, is not set");
    return SuggestOutcome(Aws::Client::AWSError<CloudSearchDomainErrors>(CloudSearchDomainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Suggester]", false));
  }
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, Suggest, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return SuggestOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
}

SuggestOutcomeCallable CloudSearchDomainClient::SuggestCallable(const SuggestRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< SuggestOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->Suggest(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchDomainClient::SuggestAsync(const SuggestRequest& request, const SuggestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, Suggest(request), context);
    } );
}

UploadDocumentsOutcome CloudSearchDomainClient::UploadDocuments(const UploadDocumentsRequest& request) const
{
  AWS_OPERATION_CHECK_PTR(m_endpointProvider, UploadDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE);
  ResolveEndpointOutcome endpointResolutionOutcome = m_endpointProvider->ResolveEndpoint(request.GetEndpointContextParams());
  AWS_OPERATION_CHECK_SUCCESS(endpointResolutionOutcome, UploadDocuments, CoreErrors, CoreErrors::ENDPOINT_RESOLUTION_FAILURE, endpointResolutionOutcome.GetError().GetMessage());
  return UploadDocumentsOutcome(MakeRequest(request, endpointResolutionOutcome.GetResult(), Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
}

UploadDocumentsOutcomeCallable CloudSearchDomainClient::UploadDocumentsCallable(const UploadDocumentsRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UploadDocumentsOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UploadDocuments(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void CloudSearchDomainClient::UploadDocumentsAsync(const UploadDocumentsRequest& request, const UploadDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context]()
    {
      handler(this, request, UploadDocuments(request), context);
    } );
}

