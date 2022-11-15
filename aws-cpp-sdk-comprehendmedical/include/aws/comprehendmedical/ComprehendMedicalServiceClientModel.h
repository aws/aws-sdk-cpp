/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

/* Generic header includes */
#include <aws/comprehendmedical/ComprehendMedicalErrors.h>
#include <aws/core/client/GenericClientConfiguration.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/comprehendmedical/ComprehendMedicalEndpointProvider.h>
#include <future>
#include <functional>
/* End of generic header includes */

/* Service model headers required in ComprehendMedicalClient header */
#include <aws/comprehendmedical/model/DescribeEntitiesDetectionV2JobResult.h>
#include <aws/comprehendmedical/model/DescribeICD10CMInferenceJobResult.h>
#include <aws/comprehendmedical/model/DescribePHIDetectionJobResult.h>
#include <aws/comprehendmedical/model/DescribeRxNormInferenceJobResult.h>
#include <aws/comprehendmedical/model/DescribeSNOMEDCTInferenceJobResult.h>
#include <aws/comprehendmedical/model/DetectEntitiesV2Result.h>
#include <aws/comprehendmedical/model/DetectPHIResult.h>
#include <aws/comprehendmedical/model/InferICD10CMResult.h>
#include <aws/comprehendmedical/model/InferRxNormResult.h>
#include <aws/comprehendmedical/model/InferSNOMEDCTResult.h>
#include <aws/comprehendmedical/model/ListEntitiesDetectionV2JobsResult.h>
#include <aws/comprehendmedical/model/ListICD10CMInferenceJobsResult.h>
#include <aws/comprehendmedical/model/ListPHIDetectionJobsResult.h>
#include <aws/comprehendmedical/model/ListRxNormInferenceJobsResult.h>
#include <aws/comprehendmedical/model/ListSNOMEDCTInferenceJobsResult.h>
#include <aws/comprehendmedical/model/StartEntitiesDetectionV2JobResult.h>
#include <aws/comprehendmedical/model/StartICD10CMInferenceJobResult.h>
#include <aws/comprehendmedical/model/StartPHIDetectionJobResult.h>
#include <aws/comprehendmedical/model/StartRxNormInferenceJobResult.h>
#include <aws/comprehendmedical/model/StartSNOMEDCTInferenceJobResult.h>
#include <aws/comprehendmedical/model/StopEntitiesDetectionV2JobResult.h>
#include <aws/comprehendmedical/model/StopICD10CMInferenceJobResult.h>
#include <aws/comprehendmedical/model/StopPHIDetectionJobResult.h>
#include <aws/comprehendmedical/model/StopRxNormInferenceJobResult.h>
#include <aws/comprehendmedical/model/StopSNOMEDCTInferenceJobResult.h>
/* End of service model headers required in ComprehendMedicalClient header */

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

  namespace ComprehendMedical
  {
    using ComprehendMedicalClientConfiguration = Aws::Client::GenericClientConfiguration<false>;
    using ComprehendMedicalEndpointProviderBase = Aws::ComprehendMedical::Endpoint::ComprehendMedicalEndpointProviderBase;
    using ComprehendMedicalEndpointProvider = Aws::ComprehendMedical::Endpoint::ComprehendMedicalEndpointProvider;

    namespace Model
    {
      /* Service model forward declarations required in ComprehendMedicalClient header */
      class DescribeEntitiesDetectionV2JobRequest;
      class DescribeICD10CMInferenceJobRequest;
      class DescribePHIDetectionJobRequest;
      class DescribeRxNormInferenceJobRequest;
      class DescribeSNOMEDCTInferenceJobRequest;
      class DetectEntitiesV2Request;
      class DetectPHIRequest;
      class InferICD10CMRequest;
      class InferRxNormRequest;
      class InferSNOMEDCTRequest;
      class ListEntitiesDetectionV2JobsRequest;
      class ListICD10CMInferenceJobsRequest;
      class ListPHIDetectionJobsRequest;
      class ListRxNormInferenceJobsRequest;
      class ListSNOMEDCTInferenceJobsRequest;
      class StartEntitiesDetectionV2JobRequest;
      class StartICD10CMInferenceJobRequest;
      class StartPHIDetectionJobRequest;
      class StartRxNormInferenceJobRequest;
      class StartSNOMEDCTInferenceJobRequest;
      class StopEntitiesDetectionV2JobRequest;
      class StopICD10CMInferenceJobRequest;
      class StopPHIDetectionJobRequest;
      class StopRxNormInferenceJobRequest;
      class StopSNOMEDCTInferenceJobRequest;
      /* End of service model forward declarations required in ComprehendMedicalClient header */

      /* Service model Outcome class definitions */
      typedef Aws::Utils::Outcome<DescribeEntitiesDetectionV2JobResult, ComprehendMedicalError> DescribeEntitiesDetectionV2JobOutcome;
      typedef Aws::Utils::Outcome<DescribeICD10CMInferenceJobResult, ComprehendMedicalError> DescribeICD10CMInferenceJobOutcome;
      typedef Aws::Utils::Outcome<DescribePHIDetectionJobResult, ComprehendMedicalError> DescribePHIDetectionJobOutcome;
      typedef Aws::Utils::Outcome<DescribeRxNormInferenceJobResult, ComprehendMedicalError> DescribeRxNormInferenceJobOutcome;
      typedef Aws::Utils::Outcome<DescribeSNOMEDCTInferenceJobResult, ComprehendMedicalError> DescribeSNOMEDCTInferenceJobOutcome;
      typedef Aws::Utils::Outcome<DetectEntitiesV2Result, ComprehendMedicalError> DetectEntitiesV2Outcome;
      typedef Aws::Utils::Outcome<DetectPHIResult, ComprehendMedicalError> DetectPHIOutcome;
      typedef Aws::Utils::Outcome<InferICD10CMResult, ComprehendMedicalError> InferICD10CMOutcome;
      typedef Aws::Utils::Outcome<InferRxNormResult, ComprehendMedicalError> InferRxNormOutcome;
      typedef Aws::Utils::Outcome<InferSNOMEDCTResult, ComprehendMedicalError> InferSNOMEDCTOutcome;
      typedef Aws::Utils::Outcome<ListEntitiesDetectionV2JobsResult, ComprehendMedicalError> ListEntitiesDetectionV2JobsOutcome;
      typedef Aws::Utils::Outcome<ListICD10CMInferenceJobsResult, ComprehendMedicalError> ListICD10CMInferenceJobsOutcome;
      typedef Aws::Utils::Outcome<ListPHIDetectionJobsResult, ComprehendMedicalError> ListPHIDetectionJobsOutcome;
      typedef Aws::Utils::Outcome<ListRxNormInferenceJobsResult, ComprehendMedicalError> ListRxNormInferenceJobsOutcome;
      typedef Aws::Utils::Outcome<ListSNOMEDCTInferenceJobsResult, ComprehendMedicalError> ListSNOMEDCTInferenceJobsOutcome;
      typedef Aws::Utils::Outcome<StartEntitiesDetectionV2JobResult, ComprehendMedicalError> StartEntitiesDetectionV2JobOutcome;
      typedef Aws::Utils::Outcome<StartICD10CMInferenceJobResult, ComprehendMedicalError> StartICD10CMInferenceJobOutcome;
      typedef Aws::Utils::Outcome<StartPHIDetectionJobResult, ComprehendMedicalError> StartPHIDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StartRxNormInferenceJobResult, ComprehendMedicalError> StartRxNormInferenceJobOutcome;
      typedef Aws::Utils::Outcome<StartSNOMEDCTInferenceJobResult, ComprehendMedicalError> StartSNOMEDCTInferenceJobOutcome;
      typedef Aws::Utils::Outcome<StopEntitiesDetectionV2JobResult, ComprehendMedicalError> StopEntitiesDetectionV2JobOutcome;
      typedef Aws::Utils::Outcome<StopICD10CMInferenceJobResult, ComprehendMedicalError> StopICD10CMInferenceJobOutcome;
      typedef Aws::Utils::Outcome<StopPHIDetectionJobResult, ComprehendMedicalError> StopPHIDetectionJobOutcome;
      typedef Aws::Utils::Outcome<StopRxNormInferenceJobResult, ComprehendMedicalError> StopRxNormInferenceJobOutcome;
      typedef Aws::Utils::Outcome<StopSNOMEDCTInferenceJobResult, ComprehendMedicalError> StopSNOMEDCTInferenceJobOutcome;
      /* End of service model Outcome class definitions */

      /* Service model Outcome callable definitions */
      typedef std::future<DescribeEntitiesDetectionV2JobOutcome> DescribeEntitiesDetectionV2JobOutcomeCallable;
      typedef std::future<DescribeICD10CMInferenceJobOutcome> DescribeICD10CMInferenceJobOutcomeCallable;
      typedef std::future<DescribePHIDetectionJobOutcome> DescribePHIDetectionJobOutcomeCallable;
      typedef std::future<DescribeRxNormInferenceJobOutcome> DescribeRxNormInferenceJobOutcomeCallable;
      typedef std::future<DescribeSNOMEDCTInferenceJobOutcome> DescribeSNOMEDCTInferenceJobOutcomeCallable;
      typedef std::future<DetectEntitiesV2Outcome> DetectEntitiesV2OutcomeCallable;
      typedef std::future<DetectPHIOutcome> DetectPHIOutcomeCallable;
      typedef std::future<InferICD10CMOutcome> InferICD10CMOutcomeCallable;
      typedef std::future<InferRxNormOutcome> InferRxNormOutcomeCallable;
      typedef std::future<InferSNOMEDCTOutcome> InferSNOMEDCTOutcomeCallable;
      typedef std::future<ListEntitiesDetectionV2JobsOutcome> ListEntitiesDetectionV2JobsOutcomeCallable;
      typedef std::future<ListICD10CMInferenceJobsOutcome> ListICD10CMInferenceJobsOutcomeCallable;
      typedef std::future<ListPHIDetectionJobsOutcome> ListPHIDetectionJobsOutcomeCallable;
      typedef std::future<ListRxNormInferenceJobsOutcome> ListRxNormInferenceJobsOutcomeCallable;
      typedef std::future<ListSNOMEDCTInferenceJobsOutcome> ListSNOMEDCTInferenceJobsOutcomeCallable;
      typedef std::future<StartEntitiesDetectionV2JobOutcome> StartEntitiesDetectionV2JobOutcomeCallable;
      typedef std::future<StartICD10CMInferenceJobOutcome> StartICD10CMInferenceJobOutcomeCallable;
      typedef std::future<StartPHIDetectionJobOutcome> StartPHIDetectionJobOutcomeCallable;
      typedef std::future<StartRxNormInferenceJobOutcome> StartRxNormInferenceJobOutcomeCallable;
      typedef std::future<StartSNOMEDCTInferenceJobOutcome> StartSNOMEDCTInferenceJobOutcomeCallable;
      typedef std::future<StopEntitiesDetectionV2JobOutcome> StopEntitiesDetectionV2JobOutcomeCallable;
      typedef std::future<StopICD10CMInferenceJobOutcome> StopICD10CMInferenceJobOutcomeCallable;
      typedef std::future<StopPHIDetectionJobOutcome> StopPHIDetectionJobOutcomeCallable;
      typedef std::future<StopRxNormInferenceJobOutcome> StopRxNormInferenceJobOutcomeCallable;
      typedef std::future<StopSNOMEDCTInferenceJobOutcome> StopSNOMEDCTInferenceJobOutcomeCallable;
      /* End of service model Outcome callable definitions */
    } // namespace Model

    class ComprehendMedicalClient;

    /* Service model async handlers definitions */
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DescribeEntitiesDetectionV2JobRequest&, const Model::DescribeEntitiesDetectionV2JobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntitiesDetectionV2JobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DescribeICD10CMInferenceJobRequest&, const Model::DescribeICD10CMInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeICD10CMInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DescribePHIDetectionJobRequest&, const Model::DescribePHIDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePHIDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DescribeRxNormInferenceJobRequest&, const Model::DescribeRxNormInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRxNormInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DescribeSNOMEDCTInferenceJobRequest&, const Model::DescribeSNOMEDCTInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeSNOMEDCTInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DetectEntitiesV2Request&, const Model::DetectEntitiesV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectEntitiesV2ResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DetectPHIRequest&, const Model::DetectPHIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectPHIResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::InferICD10CMRequest&, const Model::InferICD10CMOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InferICD10CMResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::InferRxNormRequest&, const Model::InferRxNormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InferRxNormResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::InferSNOMEDCTRequest&, const Model::InferSNOMEDCTOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InferSNOMEDCTResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::ListEntitiesDetectionV2JobsRequest&, const Model::ListEntitiesDetectionV2JobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesDetectionV2JobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::ListICD10CMInferenceJobsRequest&, const Model::ListICD10CMInferenceJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListICD10CMInferenceJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::ListPHIDetectionJobsRequest&, const Model::ListPHIDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPHIDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::ListRxNormInferenceJobsRequest&, const Model::ListRxNormInferenceJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRxNormInferenceJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::ListSNOMEDCTInferenceJobsRequest&, const Model::ListSNOMEDCTInferenceJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListSNOMEDCTInferenceJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StartEntitiesDetectionV2JobRequest&, const Model::StartEntitiesDetectionV2JobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEntitiesDetectionV2JobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StartICD10CMInferenceJobRequest&, const Model::StartICD10CMInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartICD10CMInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StartPHIDetectionJobRequest&, const Model::StartPHIDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPHIDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StartRxNormInferenceJobRequest&, const Model::StartRxNormInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRxNormInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StartSNOMEDCTInferenceJobRequest&, const Model::StartSNOMEDCTInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartSNOMEDCTInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StopEntitiesDetectionV2JobRequest&, const Model::StopEntitiesDetectionV2JobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEntitiesDetectionV2JobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StopICD10CMInferenceJobRequest&, const Model::StopICD10CMInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopICD10CMInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StopPHIDetectionJobRequest&, const Model::StopPHIDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopPHIDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StopRxNormInferenceJobRequest&, const Model::StopRxNormInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRxNormInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StopSNOMEDCTInferenceJobRequest&, const Model::StopSNOMEDCTInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopSNOMEDCTInferenceJobResponseReceivedHandler;
    /* End of service model async handlers definitions */
  } // namespace ComprehendMedical
} // namespace Aws
