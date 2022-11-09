/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/importexport/ImportExportErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/importexport/ImportExportEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ImportExportClient header */
#include <aws/importexport/model/CancelJobResult.h>
#include <aws/importexport/model/CreateJobResult.h>
#include <aws/importexport/model/GetShippingLabelResult.h>
#include <aws/importexport/model/GetStatusResult.h>
#include <aws/importexport/model/ListJobsResult.h>
#include <aws/importexport/model/UpdateJobResult.h>
/* End of service model headers required in ImportExportClient header */

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

  namespace ImportExport
  {
    using ImportExportClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ImportExportEndpointProviderBase = Aws::ImportExport::Endpoint::ImportExportEndpointProviderBase;
    using ImportExportEndpointProvider = Aws::ImportExport::Endpoint::ImportExportEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ImportExportClient header */
      class CancelJobRequest;
      class CreateJobRequest;
      class GetShippingLabelRequest;
      class GetStatusRequest;
      class ListJobsRequest;
      class UpdateJobRequest;
      /* End of service model forward declarations required in ImportExportClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<CancelJobResult, ImportExportError> CancelJobOutcome;
      typedef Aws::Utils::Outcome<CreateJobResult, ImportExportError> CreateJobOutcome;
      typedef Aws::Utils::Outcome<GetShippingLabelResult, ImportExportError> GetShippingLabelOutcome;
      typedef Aws::Utils::Outcome<GetStatusResult, ImportExportError> GetStatusOutcome;
      typedef Aws::Utils::Outcome<ListJobsResult, ImportExportError> ListJobsOutcome;
      typedef Aws::Utils::Outcome<UpdateJobResult, ImportExportError> UpdateJobOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<CancelJobOutcome> CancelJobOutcomeCallable;
      typedef std::future<CreateJobOutcome> CreateJobOutcomeCallable;
      typedef std::future<GetShippingLabelOutcome> GetShippingLabelOutcomeCallable;
      typedef std::future<GetStatusOutcome> GetStatusOutcomeCallable;
      typedef std::future<ListJobsOutcome> ListJobsOutcomeCallable;
      typedef std::future<UpdateJobOutcome> UpdateJobOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ImportExportClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ImportExportClient*, const Model::CancelJobRequest&, const Model::CancelJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CancelJobResponseReceivedHandler;
    typedef std::function<void(const ImportExportClient*, const Model::CreateJobRequest&, const Model::CreateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateJobResponseReceivedHandler;
    typedef std::function<void(const ImportExportClient*, const Model::GetShippingLabelRequest&, const Model::GetShippingLabelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetShippingLabelResponseReceivedHandler;
    typedef std::function<void(const ImportExportClient*, const Model::GetStatusRequest&, const Model::GetStatusOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetStatusResponseReceivedHandler;
    typedef std::function<void(const ImportExportClient*, const Model::ListJobsRequest&, const Model::ListJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListJobsResponseReceivedHandler;
    typedef std::function<void(const ImportExportClient*, const Model::UpdateJobRequest&, const Model::UpdateJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ImportExport
} // namespace Aws
