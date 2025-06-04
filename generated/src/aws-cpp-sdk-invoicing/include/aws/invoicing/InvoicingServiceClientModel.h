/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/invoicing/InvoicingErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/invoicing/InvoicingEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in InvoicingClient header */
#include <aws/invoicing/model/BatchGetInvoiceProfileResult.h>
#include <aws/invoicing/model/CreateInvoiceUnitResult.h>
#include <aws/invoicing/model/DeleteInvoiceUnitResult.h>
#include <aws/invoicing/model/GetInvoiceUnitResult.h>
#include <aws/invoicing/model/ListInvoiceSummariesResult.h>
#include <aws/invoicing/model/ListInvoiceUnitsResult.h>
#include <aws/invoicing/model/ListTagsForResourceResult.h>
#include <aws/invoicing/model/TagResourceResult.h>
#include <aws/invoicing/model/UntagResourceResult.h>
#include <aws/invoicing/model/UpdateInvoiceUnitResult.h>
#include <aws/invoicing/model/ListInvoiceUnitsRequest.h>
/* End of service model headers required in InvoicingClient header */

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

  namespace Invoicing
  {
    using InvoicingClientConfiguration = Aws::Client::GenericClientConfiguration;
    using InvoicingEndpointProviderBase = Aws::Invoicing::Endpoint::InvoicingEndpointProviderBase;
    using InvoicingEndpointProvider = Aws::Invoicing::Endpoint::InvoicingEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in InvoicingClient header */
      class BatchGetInvoiceProfileRequest;
      class CreateInvoiceUnitRequest;
      class DeleteInvoiceUnitRequest;
      class GetInvoiceUnitRequest;
      class ListInvoiceSummariesRequest;
      class ListInvoiceUnitsRequest;
      class ListTagsForResourceRequest;
      class TagResourceRequest;
      class UntagResourceRequest;
      class UpdateInvoiceUnitRequest;
      /* End of service model forward declarations required in InvoicingClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<BatchGetInvoiceProfileResult, InvoicingError> BatchGetInvoiceProfileOutcome;
      typedef Aws::Utils::Outcome<CreateInvoiceUnitResult, InvoicingError> CreateInvoiceUnitOutcome;
      typedef Aws::Utils::Outcome<DeleteInvoiceUnitResult, InvoicingError> DeleteInvoiceUnitOutcome;
      typedef Aws::Utils::Outcome<GetInvoiceUnitResult, InvoicingError> GetInvoiceUnitOutcome;
      typedef Aws::Utils::Outcome<ListInvoiceSummariesResult, InvoicingError> ListInvoiceSummariesOutcome;
      typedef Aws::Utils::Outcome<ListInvoiceUnitsResult, InvoicingError> ListInvoiceUnitsOutcome;
      typedef Aws::Utils::Outcome<ListTagsForResourceResult, InvoicingError> ListTagsForResourceOutcome;
      typedef Aws::Utils::Outcome<TagResourceResult, InvoicingError> TagResourceOutcome;
      typedef Aws::Utils::Outcome<UntagResourceResult, InvoicingError> UntagResourceOutcome;
      typedef Aws::Utils::Outcome<UpdateInvoiceUnitResult, InvoicingError> UpdateInvoiceUnitOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<BatchGetInvoiceProfileOutcome> BatchGetInvoiceProfileOutcomeCallable;
      typedef std::future<CreateInvoiceUnitOutcome> CreateInvoiceUnitOutcomeCallable;
      typedef std::future<DeleteInvoiceUnitOutcome> DeleteInvoiceUnitOutcomeCallable;
      typedef std::future<GetInvoiceUnitOutcome> GetInvoiceUnitOutcomeCallable;
      typedef std::future<ListInvoiceSummariesOutcome> ListInvoiceSummariesOutcomeCallable;
      typedef std::future<ListInvoiceUnitsOutcome> ListInvoiceUnitsOutcomeCallable;
      typedef std::future<ListTagsForResourceOutcome> ListTagsForResourceOutcomeCallable;
      typedef std::future<TagResourceOutcome> TagResourceOutcomeCallable;
      typedef std::future<UntagResourceOutcome> UntagResourceOutcomeCallable;
      typedef std::future<UpdateInvoiceUnitOutcome> UpdateInvoiceUnitOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class InvoicingClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const InvoicingClient*, const Model::BatchGetInvoiceProfileRequest&, const Model::BatchGetInvoiceProfileOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > BatchGetInvoiceProfileResponseReceivedHandler;
    typedef std::function<void(const InvoicingClient*, const Model::CreateInvoiceUnitRequest&, const Model::CreateInvoiceUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateInvoiceUnitResponseReceivedHandler;
    typedef std::function<void(const InvoicingClient*, const Model::DeleteInvoiceUnitRequest&, const Model::DeleteInvoiceUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteInvoiceUnitResponseReceivedHandler;
    typedef std::function<void(const InvoicingClient*, const Model::GetInvoiceUnitRequest&, const Model::GetInvoiceUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetInvoiceUnitResponseReceivedHandler;
    typedef std::function<void(const InvoicingClient*, const Model::ListInvoiceSummariesRequest&, const Model::ListInvoiceSummariesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvoiceSummariesResponseReceivedHandler;
    typedef std::function<void(const InvoicingClient*, const Model::ListInvoiceUnitsRequest&, const Model::ListInvoiceUnitsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInvoiceUnitsResponseReceivedHandler;
    typedef std::function<void(const InvoicingClient*, const Model::ListTagsForResourceRequest&, const Model::ListTagsForResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListTagsForResourceResponseReceivedHandler;
    typedef std::function<void(const InvoicingClient*, const Model::TagResourceRequest&, const Model::TagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > TagResourceResponseReceivedHandler;
    typedef std::function<void(const InvoicingClient*, const Model::UntagResourceRequest&, const Model::UntagResourceOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UntagResourceResponseReceivedHandler;
    typedef std::function<void(const InvoicingClient*, const Model::UpdateInvoiceUnitRequest&, const Model::UpdateInvoiceUnitOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateInvoiceUnitResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace Invoicing
} // namespace Aws
