/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cloudsearchdomain/CloudSearchDomainErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cloudsearchdomain/CloudSearchDomainEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CloudSearchDomainClient header */
#include <aws/cloudsearchdomain/model/SearchResult.h>
#include <aws/cloudsearchdomain/model/SuggestResult.h>
#include <aws/cloudsearchdomain/model/UploadDocumentsResult.h>
/* End of service model headers required in CloudSearchDomainClient header */

namespace Aws
{
  namespace Http
  {
    class HttpClient;
    class HttpClientFactory;
  } // namespace Http

  namespace Utils
  {
    template< typename R, typename E> class Outcome;

    namespace Threading
    {
      class Executor;
    } // namespace Threading
  } // namespace Utils

  namespace Auth
  {
    class AWSCredentials;
    class AWSCredentialsProvider;
  } // namespace Auth

  namespace Client
  {
    class RetryStrategy;
  } // namespace Client

  namespace CloudSearchDomain
  {
    using CloudSearchDomainClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CloudSearchDomainEndpointProviderBase = Aws::CloudSearchDomain::Endpoint::CloudSearchDomainEndpointProviderBase;
    using CloudSearchDomainEndpointProvider = Aws::CloudSearchDomain::Endpoint::CloudSearchDomainEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CloudSearchDomainClient header */
      class SearchRequest;
      class SuggestRequest;
      class UploadDocumentsRequest;
      /* End of service model forward declarations required in CloudSearchDomainClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<SearchResult, CloudSearchDomainError> SearchOutcome;
      typedef Aws::Utils::Outcome<SuggestResult, CloudSearchDomainError> SuggestOutcome;
      typedef Aws::Utils::Outcome<UploadDocumentsResult, CloudSearchDomainError> UploadDocumentsOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<SearchOutcome> SearchOutcomeCallable;
      typedef std::future<SuggestOutcome> SuggestOutcomeCallable;
      typedef std::future<UploadDocumentsOutcome> UploadDocumentsOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CloudSearchDomainClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CloudSearchDomainClient*, const Model::SearchRequest&, const Model::SearchOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchResponseReceivedHandler;
    typedef std::function<void(const CloudSearchDomainClient*, const Model::SuggestRequest&, const Model::SuggestOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SuggestResponseReceivedHandler;
    typedef std::function<void(const CloudSearchDomainClient*, const Model::UploadDocumentsRequest&, const Model::UploadDocumentsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UploadDocumentsResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CloudSearchDomain
} // namespace Aws
