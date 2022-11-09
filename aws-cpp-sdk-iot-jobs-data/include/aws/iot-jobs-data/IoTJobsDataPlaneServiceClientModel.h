/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/iot-jobs-data/IoTJobsDataPlaneErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/iot-jobs-data/IoTJobsDataPlaneEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in IoTJobsDataPlaneClient header */
#include <aws/iot-jobs-data/model/DescribeJobExecutionResult.h>
#include <aws/iot-jobs-data/model/GetPendingJobExecutionsResult.h>
#include <aws/iot-jobs-data/model/StartNextPendingJobExecutionResult.h>
#include <aws/iot-jobs-data/model/UpdateJobExecutionResult.h>
/* End of service model headers required in IoTJobsDataPlaneClient header */

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

  namespace IoTJobsDataPlane
  {
    using IoTJobsDataPlaneClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using IoTJobsDataPlaneEndpointProviderBase = Aws::IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneEndpointProviderBase;
    using IoTJobsDataPlaneEndpointProvider = Aws::IoTJobsDataPlane::Endpoint::IoTJobsDataPlaneEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in IoTJobsDataPlaneClient header */
      class DescribeJobExecutionRequest;
      class GetPendingJobExecutionsRequest;
      class StartNextPendingJobExecutionRequest;
      class UpdateJobExecutionRequest;
      /* End of service model forward declarations required in IoTJobsDataPlaneClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DescribeJobExecutionResult, IoTJobsDataPlaneError> DescribeJobExecutionOutcome;
      typedef Aws::Utils::Outcome<GetPendingJobExecutionsResult, IoTJobsDataPlaneError> GetPendingJobExecutionsOutcome;
      typedef Aws::Utils::Outcome<StartNextPendingJobExecutionResult, IoTJobsDataPlaneError> StartNextPendingJobExecutionOutcome;
      typedef Aws::Utils::Outcome<UpdateJobExecutionResult, IoTJobsDataPlaneError> UpdateJobExecutionOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DescribeJobExecutionOutcome> DescribeJobExecutionOutcomeCallable;
      typedef std::future<GetPendingJobExecutionsOutcome> GetPendingJobExecutionsOutcomeCallable;
      typedef std::future<StartNextPendingJobExecutionOutcome> StartNextPendingJobExecutionOutcomeCallable;
      typedef std::future<UpdateJobExecutionOutcome> UpdateJobExecutionOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class IoTJobsDataPlaneClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const IoTJobsDataPlaneClient*, const Model::DescribeJobExecutionRequest&, const Model::DescribeJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeJobExecutionResponseReceivedHandler;
    typedef std::function<void(const IoTJobsDataPlaneClient*, const Model::GetPendingJobExecutionsRequest&, const Model::GetPendingJobExecutionsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetPendingJobExecutionsResponseReceivedHandler;
    typedef std::function<void(const IoTJobsDataPlaneClient*, const Model::StartNextPendingJobExecutionRequest&, const Model::StartNextPendingJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartNextPendingJobExecutionResponseReceivedHandler;
    typedef std::function<void(const IoTJobsDataPlaneClient*, const Model::UpdateJobExecutionRequest&, const Model::UpdateJobExecutionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateJobExecutionResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace IoTJobsDataPlane
} // namespace Aws
