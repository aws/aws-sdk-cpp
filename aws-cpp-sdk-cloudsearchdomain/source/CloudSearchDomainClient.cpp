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

#include <aws/cloudsearchdomain/CloudSearchDomainClient.h>
#include <aws/cloudsearchdomain/CloudSearchDomainEndpoint.h>
#include <aws/cloudsearchdomain/CloudSearchDomainErrorMarshaller.h>
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

static const char* SERVICE_NAME = "cloudsearch";
static const char* ALLOCATION_TAG = "CloudSearchDomainClient";


CloudSearchDomainClient::CloudSearchDomainClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudSearchDomainClient::CloudSearchDomainClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudSearchDomainClient::CloudSearchDomainClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, Aws::Region::ComputeSignerRegion(clientConfiguration.region)),
    Aws::MakeShared<CloudSearchDomainErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

CloudSearchDomainClient::~CloudSearchDomainClient()
{
}

void CloudSearchDomainClient::init(const Client::ClientConfiguration& config)
{
  SetServiceClientName("cloudsearchdomain");
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + CloudSearchDomainEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void CloudSearchDomainClient::OverrideEndpoint(const Aws::String& endpoint)
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

SearchOutcome CloudSearchDomainClient::Search(const SearchRequest& request) const
{
  if (!request.QueryHasBeenSet())
  {
    AWS_LOGSTREAM_ERROR("Search", "Required field: Query, is not set");
    return SearchOutcome(Aws::Client::AWSError<CloudSearchDomainErrors>(CloudSearchDomainErrors::MISSING_PARAMETER, "MISSING_PARAMETER", "Missing required field [Query]", false));
  }
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/2013-01-01/search");
  ss.str("?format=sdk&pretty=true");
  uri.SetQueryString(ss.str());
  return SearchOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->SearchAsyncHelper( request, handler, context ); } );
}

void CloudSearchDomainClient::SearchAsyncHelper(const SearchRequest& request, const SearchResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Search(request), context);
}

SuggestOutcome CloudSearchDomainClient::Suggest(const SuggestRequest& request) const
{
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
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/2013-01-01/suggest");
  ss.str("?format=sdk&pretty=true");
  uri.SetQueryString(ss.str());
  return SuggestOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->SuggestAsyncHelper( request, handler, context ); } );
}

void CloudSearchDomainClient::SuggestAsyncHelper(const SuggestRequest& request, const SuggestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, Suggest(request), context);
}

UploadDocumentsOutcome CloudSearchDomainClient::UploadDocuments(const UploadDocumentsRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  uri.AddPathSegments("/2013-01-01/documents/batch");
  ss.str("?format=sdk");
  uri.SetQueryString(ss.str());
  return UploadDocumentsOutcome(MakeRequest(uri, request, Aws::Http::HttpMethod::HTTP_POST, Aws::Auth::SIGV4_SIGNER));
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
  m_executor->Submit( [this, request, handler, context](){ this->UploadDocumentsAsyncHelper( request, handler, context ); } );
}

void CloudSearchDomainClient::UploadDocumentsAsyncHelper(const UploadDocumentsRequest& request, const UploadDocumentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UploadDocuments(request), context);
}

