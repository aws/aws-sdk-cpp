/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/cur/CostandUsageReportServiceErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/cur/CostandUsageReportServiceEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in CostandUsageReportServiceClient header */
#include <aws/cur/model/DeleteReportDefinitionResult.h>
#include <aws/cur/model/DescribeReportDefinitionsResult.h>
#include <aws/cur/model/ModifyReportDefinitionResult.h>
#include <aws/cur/model/PutReportDefinitionResult.h>
/* End of service model headers required in CostandUsageReportServiceClient header */

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

  namespace CostandUsageReportService
  {
    using CostandUsageReportServiceClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using CostandUsageReportServiceEndpointProviderBase = Aws::CostandUsageReportService::Endpoint::CostandUsageReportServiceEndpointProviderBase;
    using CostandUsageReportServiceEndpointProvider = Aws::CostandUsageReportService::Endpoint::CostandUsageReportServiceEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in CostandUsageReportServiceClient header */
      class DeleteReportDefinitionRequest;
      class DescribeReportDefinitionsRequest;
      class ModifyReportDefinitionRequest;
      class PutReportDefinitionRequest;
      /* End of service model forward declarations required in CostandUsageReportServiceClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DeleteReportDefinitionResult, CostandUsageReportServiceError> DeleteReportDefinitionOutcome;
      typedef Aws::Utils::Outcome<DescribeReportDefinitionsResult, CostandUsageReportServiceError> DescribeReportDefinitionsOutcome;
      typedef Aws::Utils::Outcome<ModifyReportDefinitionResult, CostandUsageReportServiceError> ModifyReportDefinitionOutcome;
      typedef Aws::Utils::Outcome<PutReportDefinitionResult, CostandUsageReportServiceError> PutReportDefinitionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DeleteReportDefinitionOutcome> DeleteReportDefinitionOutcomeCallable;
      typedef std::future<DescribeReportDefinitionsOutcome> DescribeReportDefinitionsOutcomeCallable;
      typedef std::future<ModifyReportDefinitionOutcome> ModifyReportDefinitionOutcomeCallable;
      typedef std::future<PutReportDefinitionOutcome> PutReportDefinitionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class CostandUsageReportServiceClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const CostandUsageReportServiceClient*, const Model::DeleteReportDefinitionRequest&, const Model::DeleteReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteReportDefinitionResponseReceivedHandler;
    typedef std::function<void(const CostandUsageReportServiceClient*, const Model::DescribeReportDefinitionsRequest&, const Model::DescribeReportDefinitionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeReportDefinitionsResponseReceivedHandler;
    typedef std::function<void(const CostandUsageReportServiceClient*, const Model::ModifyReportDefinitionRequest&, const Model::ModifyReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ModifyReportDefinitionResponseReceivedHandler;
    typedef std::function<void(const CostandUsageReportServiceClient*, const Model::PutReportDefinitionRequest&, const Model::PutReportDefinitionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutReportDefinitionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace CostandUsageReportService
} // namespace Aws
