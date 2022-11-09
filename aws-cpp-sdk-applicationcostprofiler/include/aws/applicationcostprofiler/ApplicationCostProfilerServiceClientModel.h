/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/applicationcostprofiler/ApplicationCostProfilerErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ApplicationCostProfilerClient header */
#include <aws/applicationcostprofiler/model/DeleteReportDefinitionResult.h>
#include <aws/applicationcostprofiler/model/GetReportDefinitionResult.h>
#include <aws/applicationcostprofiler/model/ImportApplicationUsageResult.h>
#include <aws/applicationcostprofiler/model/ListReportDefinitionsResult.h>
#include <aws/applicationcostprofiler/model/PutReportDefinitionResult.h>
#include <aws/applicationcostprofiler/model/UpdateReportDefinitionResult.h>
/* End of service model headers required in ApplicationCostProfilerClient header */

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

  namespace ApplicationCostProfiler
  {
    using ApplicationCostProfilerClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ApplicationCostProfilerEndpointProviderBase = Aws::ApplicationCostProfiler::Endpoint::ApplicationCostProfilerEndpointProviderBase;
    using ApplicationCostProfilerEndpointProvider = Aws::ApplicationCostProfiler::Endpoint::ApplicationCostProfilerEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ApplicationCostProfilerClient header */
      class DeleteReportDefinitionRequest;
      class GetReportDefinitionRequest;
      class ImportApplicationUsageRequest;
      class ListReportDefinitionsRequest;
      class PutReportDefinitionRequest;
      class UpdateReportDefinitionRequest;
      /* End of service model forward declarations required in ApplicationCostProfilerClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteReportDefinitionResult, ApplicationCostProfilerError> DeleteReportDefinitionOutcome;
      typedef Aws::Utils::Outcome<GetReportDefinitionResult, ApplicationCostProfilerError> GetReportDefinitionOutcome;
      typedef Aws::Utils::Outcome<ImportApplicationUsageResult, ApplicationCostProfilerError> ImportApplicationUsageOutcome;
      typedef Aws::Utils::Outcome<ListReportDefinitionsResult, ApplicationCostProfilerError> ListReportDefinitionsOutcome;
      typedef Aws::Utils::Outcome<PutReportDefinitionResult, ApplicationCostProfilerError> PutReportDefinitionOutcome;
      typedef Aws::Utils::Outcome<UpdateReportDefinitionResult, ApplicationCostProfilerError> UpdateReportDefinitionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteReportDefinitionOutcome> DeleteReportDefinitionOutcomeCallable;
      typedef std::future<GetReportDefinitionOutcome> GetReportDefinitionOutcomeCallable;
      typedef std::future<ImportApplicationUsageOutcome> ImportApplicationUsageOutcomeCallable;
      typedef std::future<ListReportDefinitionsOutcome> ListReportDefinitionsOutcomeCallable;
      typedef std::future<PutReportDefinitionOutcome> PutReportDefinitionOutcomeCallable;
      typedef std::future<UpdateReportDefinitionOutcome> UpdateReportDefinitionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ApplicationCostProfilerClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::DeleteReportDefinitionRequest&, const Model::DeleteReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReportDefinitionResponseReceivedHandler;
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::GetReportDefinitionRequest&, const Model::GetReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetReportDefinitionResponseReceivedHandler;
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::ImportApplicationUsageRequest&, const Model::ImportApplicationUsageOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ImportApplicationUsageResponseReceivedHandler;
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::ListReportDefinitionsRequest&, const Model::ListReportDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListReportDefinitionsResponseReceivedHandler;
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::PutReportDefinitionRequest&, const Model::PutReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutReportDefinitionResponseReceivedHandler;
    typedef std::function<void(const ApplicationCostProfilerClient*, const Model::UpdateReportDefinitionRequest&, const Model::UpdateReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateReportDefinitionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ApplicationCostProfiler
} // namespace Aws
