/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/macie/MacieErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/macie/MacieEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in MacieClient header */
#include <aws/macie/model/AssociateS3ResourcesResult.h>
#include <aws/macie/model/DisassociateS3ResourcesResult.h>
#include <aws/macie/model/ListMemberAccountsResult.h>
#include <aws/macie/model/ListS3ResourcesResult.h>
#include <aws/macie/model/UpdateS3ResourcesResult.h>
#include <aws/core/NoResult.h>
/* End of service model headers required in MacieClient header */

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

  namespace Macie
  {
    using MacieClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using MacieEndpointProviderBase = Aws::Macie::Endpoint::MacieEndpointProviderBase;
    using MacieEndpointProvider = Aws::Macie::Endpoint::MacieEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in MacieClient header */
      class AssociateMemberAccountRequest;
      class AssociateS3ResourcesRequest;
      class DisassociateMemberAccountRequest;
      class DisassociateS3ResourcesRequest;
      class ListMemberAccountsRequest;
      class ListS3ResourcesRequest;
      class UpdateS3ResourcesRequest;
      /* End of service model forward declarations required in MacieClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<Aws::NoResult, MacieError> AssociateMemberAccountOutcome;
      typedef Aws::Utils::Outcome<AssociateS3ResourcesResult, MacieError> AssociateS3ResourcesOutcome;
      typedef Aws::Utils::Outcome<Aws::NoResult, MacieError> DisassociateMemberAccountOutcome;
      typedef Aws::Utils::Outcome<DisassociateS3ResourcesResult, MacieError> DisassociateS3ResourcesOutcome;
      typedef Aws::Utils::Outcome<ListMemberAccountsResult, MacieError> ListMemberAccountsOutcome;
      typedef Aws::Utils::Outcome<ListS3ResourcesResult, MacieError> ListS3ResourcesOutcome;
      typedef Aws::Utils::Outcome<UpdateS3ResourcesResult, MacieError> UpdateS3ResourcesOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<AssociateMemberAccountOutcome> AssociateMemberAccountOutcomeCallable;
      typedef std::future<AssociateS3ResourcesOutcome> AssociateS3ResourcesOutcomeCallable;
      typedef std::future<DisassociateMemberAccountOutcome> DisassociateMemberAccountOutcomeCallable;
      typedef std::future<DisassociateS3ResourcesOutcome> DisassociateS3ResourcesOutcomeCallable;
      typedef std::future<ListMemberAccountsOutcome> ListMemberAccountsOutcomeCallable;
      typedef std::future<ListS3ResourcesOutcome> ListS3ResourcesOutcomeCallable;
      typedef std::future<UpdateS3ResourcesOutcome> UpdateS3ResourcesOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class MacieClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const MacieClient*, const Model::AssociateMemberAccountRequest&, const Model::AssociateMemberAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateMemberAccountResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::AssociateS3ResourcesRequest&, const Model::AssociateS3ResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AssociateS3ResourcesResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::DisassociateMemberAccountRequest&, const Model::DisassociateMemberAccountOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateMemberAccountResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::DisassociateS3ResourcesRequest&, const Model::DisassociateS3ResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisassociateS3ResourcesResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::ListMemberAccountsRequest&, const Model::ListMemberAccountsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMemberAccountsResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::ListS3ResourcesRequest&, const Model::ListS3ResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListS3ResourcesResponseReceivedHandler;
    typedef std::function<void(const MacieClient*, const Model::UpdateS3ResourcesRequest&, const Model::UpdateS3ResourcesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateS3ResourcesResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Macie
} // namespace Aws
