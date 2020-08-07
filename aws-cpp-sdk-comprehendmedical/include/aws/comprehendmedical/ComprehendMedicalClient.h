/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/comprehendmedical/ComprehendMedicalErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/comprehendmedical/model/DescribeEntitiesDetectionV2JobResult.h>
#include <aws/comprehendmedical/model/DescribeICD10CMInferenceJobResult.h>
#include <aws/comprehendmedical/model/DescribePHIDetectionJobResult.h>
#include <aws/comprehendmedical/model/DescribeRxNormInferenceJobResult.h>
#include <aws/comprehendmedical/model/DetectEntitiesV2Result.h>
#include <aws/comprehendmedical/model/DetectPHIResult.h>
#include <aws/comprehendmedical/model/InferICD10CMResult.h>
#include <aws/comprehendmedical/model/InferRxNormResult.h>
#include <aws/comprehendmedical/model/ListEntitiesDetectionV2JobsResult.h>
#include <aws/comprehendmedical/model/ListICD10CMInferenceJobsResult.h>
#include <aws/comprehendmedical/model/ListPHIDetectionJobsResult.h>
#include <aws/comprehendmedical/model/ListRxNormInferenceJobsResult.h>
#include <aws/comprehendmedical/model/StartEntitiesDetectionV2JobResult.h>
#include <aws/comprehendmedical/model/StartICD10CMInferenceJobResult.h>
#include <aws/comprehendmedical/model/StartPHIDetectionJobResult.h>
#include <aws/comprehendmedical/model/StartRxNormInferenceJobResult.h>
#include <aws/comprehendmedical/model/StopEntitiesDetectionV2JobResult.h>
#include <aws/comprehendmedical/model/StopICD10CMInferenceJobResult.h>
#include <aws/comprehendmedical/model/StopPHIDetectionJobResult.h>
#include <aws/comprehendmedical/model/StopRxNormInferenceJobResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

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

namespace Model
{
        class DescribeEntitiesDetectionV2JobRequest;
        class DescribeICD10CMInferenceJobRequest;
        class DescribePHIDetectionJobRequest;
        class DescribeRxNormInferenceJobRequest;
        class DetectEntitiesV2Request;
        class DetectPHIRequest;
        class InferICD10CMRequest;
        class InferRxNormRequest;
        class ListEntitiesDetectionV2JobsRequest;
        class ListICD10CMInferenceJobsRequest;
        class ListPHIDetectionJobsRequest;
        class ListRxNormInferenceJobsRequest;
        class StartEntitiesDetectionV2JobRequest;
        class StartICD10CMInferenceJobRequest;
        class StartPHIDetectionJobRequest;
        class StartRxNormInferenceJobRequest;
        class StopEntitiesDetectionV2JobRequest;
        class StopICD10CMInferenceJobRequest;
        class StopPHIDetectionJobRequest;
        class StopRxNormInferenceJobRequest;

        typedef Aws::Utils::Outcome<DescribeEntitiesDetectionV2JobResult, ComprehendMedicalError> DescribeEntitiesDetectionV2JobOutcome;
        typedef Aws::Utils::Outcome<DescribeICD10CMInferenceJobResult, ComprehendMedicalError> DescribeICD10CMInferenceJobOutcome;
        typedef Aws::Utils::Outcome<DescribePHIDetectionJobResult, ComprehendMedicalError> DescribePHIDetectionJobOutcome;
        typedef Aws::Utils::Outcome<DescribeRxNormInferenceJobResult, ComprehendMedicalError> DescribeRxNormInferenceJobOutcome;
        typedef Aws::Utils::Outcome<DetectEntitiesV2Result, ComprehendMedicalError> DetectEntitiesV2Outcome;
        typedef Aws::Utils::Outcome<DetectPHIResult, ComprehendMedicalError> DetectPHIOutcome;
        typedef Aws::Utils::Outcome<InferICD10CMResult, ComprehendMedicalError> InferICD10CMOutcome;
        typedef Aws::Utils::Outcome<InferRxNormResult, ComprehendMedicalError> InferRxNormOutcome;
        typedef Aws::Utils::Outcome<ListEntitiesDetectionV2JobsResult, ComprehendMedicalError> ListEntitiesDetectionV2JobsOutcome;
        typedef Aws::Utils::Outcome<ListICD10CMInferenceJobsResult, ComprehendMedicalError> ListICD10CMInferenceJobsOutcome;
        typedef Aws::Utils::Outcome<ListPHIDetectionJobsResult, ComprehendMedicalError> ListPHIDetectionJobsOutcome;
        typedef Aws::Utils::Outcome<ListRxNormInferenceJobsResult, ComprehendMedicalError> ListRxNormInferenceJobsOutcome;
        typedef Aws::Utils::Outcome<StartEntitiesDetectionV2JobResult, ComprehendMedicalError> StartEntitiesDetectionV2JobOutcome;
        typedef Aws::Utils::Outcome<StartICD10CMInferenceJobResult, ComprehendMedicalError> StartICD10CMInferenceJobOutcome;
        typedef Aws::Utils::Outcome<StartPHIDetectionJobResult, ComprehendMedicalError> StartPHIDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StartRxNormInferenceJobResult, ComprehendMedicalError> StartRxNormInferenceJobOutcome;
        typedef Aws::Utils::Outcome<StopEntitiesDetectionV2JobResult, ComprehendMedicalError> StopEntitiesDetectionV2JobOutcome;
        typedef Aws::Utils::Outcome<StopICD10CMInferenceJobResult, ComprehendMedicalError> StopICD10CMInferenceJobOutcome;
        typedef Aws::Utils::Outcome<StopPHIDetectionJobResult, ComprehendMedicalError> StopPHIDetectionJobOutcome;
        typedef Aws::Utils::Outcome<StopRxNormInferenceJobResult, ComprehendMedicalError> StopRxNormInferenceJobOutcome;

        typedef std::future<DescribeEntitiesDetectionV2JobOutcome> DescribeEntitiesDetectionV2JobOutcomeCallable;
        typedef std::future<DescribeICD10CMInferenceJobOutcome> DescribeICD10CMInferenceJobOutcomeCallable;
        typedef std::future<DescribePHIDetectionJobOutcome> DescribePHIDetectionJobOutcomeCallable;
        typedef std::future<DescribeRxNormInferenceJobOutcome> DescribeRxNormInferenceJobOutcomeCallable;
        typedef std::future<DetectEntitiesV2Outcome> DetectEntitiesV2OutcomeCallable;
        typedef std::future<DetectPHIOutcome> DetectPHIOutcomeCallable;
        typedef std::future<InferICD10CMOutcome> InferICD10CMOutcomeCallable;
        typedef std::future<InferRxNormOutcome> InferRxNormOutcomeCallable;
        typedef std::future<ListEntitiesDetectionV2JobsOutcome> ListEntitiesDetectionV2JobsOutcomeCallable;
        typedef std::future<ListICD10CMInferenceJobsOutcome> ListICD10CMInferenceJobsOutcomeCallable;
        typedef std::future<ListPHIDetectionJobsOutcome> ListPHIDetectionJobsOutcomeCallable;
        typedef std::future<ListRxNormInferenceJobsOutcome> ListRxNormInferenceJobsOutcomeCallable;
        typedef std::future<StartEntitiesDetectionV2JobOutcome> StartEntitiesDetectionV2JobOutcomeCallable;
        typedef std::future<StartICD10CMInferenceJobOutcome> StartICD10CMInferenceJobOutcomeCallable;
        typedef std::future<StartPHIDetectionJobOutcome> StartPHIDetectionJobOutcomeCallable;
        typedef std::future<StartRxNormInferenceJobOutcome> StartRxNormInferenceJobOutcomeCallable;
        typedef std::future<StopEntitiesDetectionV2JobOutcome> StopEntitiesDetectionV2JobOutcomeCallable;
        typedef std::future<StopICD10CMInferenceJobOutcome> StopICD10CMInferenceJobOutcomeCallable;
        typedef std::future<StopPHIDetectionJobOutcome> StopPHIDetectionJobOutcomeCallable;
        typedef std::future<StopRxNormInferenceJobOutcome> StopRxNormInferenceJobOutcomeCallable;
} // namespace Model

  class ComprehendMedicalClient;

    typedef std::function<void(const ComprehendMedicalClient*, const Model::DescribeEntitiesDetectionV2JobRequest&, const Model::DescribeEntitiesDetectionV2JobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntitiesDetectionV2JobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DescribeICD10CMInferenceJobRequest&, const Model::DescribeICD10CMInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeICD10CMInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DescribePHIDetectionJobRequest&, const Model::DescribePHIDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribePHIDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DescribeRxNormInferenceJobRequest&, const Model::DescribeRxNormInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRxNormInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DetectEntitiesV2Request&, const Model::DetectEntitiesV2Outcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectEntitiesV2ResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::DetectPHIRequest&, const Model::DetectPHIOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DetectPHIResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::InferICD10CMRequest&, const Model::InferICD10CMOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InferICD10CMResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::InferRxNormRequest&, const Model::InferRxNormOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > InferRxNormResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::ListEntitiesDetectionV2JobsRequest&, const Model::ListEntitiesDetectionV2JobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEntitiesDetectionV2JobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::ListICD10CMInferenceJobsRequest&, const Model::ListICD10CMInferenceJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListICD10CMInferenceJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::ListPHIDetectionJobsRequest&, const Model::ListPHIDetectionJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListPHIDetectionJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::ListRxNormInferenceJobsRequest&, const Model::ListRxNormInferenceJobsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRxNormInferenceJobsResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StartEntitiesDetectionV2JobRequest&, const Model::StartEntitiesDetectionV2JobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartEntitiesDetectionV2JobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StartICD10CMInferenceJobRequest&, const Model::StartICD10CMInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartICD10CMInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StartPHIDetectionJobRequest&, const Model::StartPHIDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartPHIDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StartRxNormInferenceJobRequest&, const Model::StartRxNormInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StartRxNormInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StopEntitiesDetectionV2JobRequest&, const Model::StopEntitiesDetectionV2JobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopEntitiesDetectionV2JobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StopICD10CMInferenceJobRequest&, const Model::StopICD10CMInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopICD10CMInferenceJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StopPHIDetectionJobRequest&, const Model::StopPHIDetectionJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopPHIDetectionJobResponseReceivedHandler;
    typedef std::function<void(const ComprehendMedicalClient*, const Model::StopRxNormInferenceJobRequest&, const Model::StopRxNormInferenceJobOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > StopRxNormInferenceJobResponseReceivedHandler;

  /**
   * <p> Amazon Comprehend Medical extracts structured information from unstructured
   * clinical text. Use these actions to gain insight in your documents. </p>
   */
  class AWS_COMPREHENDMEDICAL_API ComprehendMedicalClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendMedicalClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendMedicalClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComprehendMedicalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~ComprehendMedicalClient();


        /**
         * <p>Gets the properties associated with a medical entities detection job. Use
         * this operation to get the status of a detection job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntitiesDetectionV2JobOutcome DescribeEntitiesDetectionV2Job(const Model::DescribeEntitiesDetectionV2JobRequest& request) const;

        /**
         * <p>Gets the properties associated with a medical entities detection job. Use
         * this operation to get the status of a detection job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEntitiesDetectionV2JobOutcomeCallable DescribeEntitiesDetectionV2JobCallable(const Model::DescribeEntitiesDetectionV2JobRequest& request) const;

        /**
         * <p>Gets the properties associated with a medical entities detection job. Use
         * this operation to get the status of a detection job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEntitiesDetectionV2JobAsync(const Model::DescribeEntitiesDetectionV2JobRequest& request, const DescribeEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with an InferICD10CM job. Use this operation
         * to get the status of an inference job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeICD10CMInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeICD10CMInferenceJobOutcome DescribeICD10CMInferenceJob(const Model::DescribeICD10CMInferenceJobRequest& request) const;

        /**
         * <p>Gets the properties associated with an InferICD10CM job. Use this operation
         * to get the status of an inference job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeICD10CMInferenceJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeICD10CMInferenceJobOutcomeCallable DescribeICD10CMInferenceJobCallable(const Model::DescribeICD10CMInferenceJobRequest& request) const;

        /**
         * <p>Gets the properties associated with an InferICD10CM job. Use this operation
         * to get the status of an inference job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeICD10CMInferenceJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeICD10CMInferenceJobAsync(const Model::DescribeICD10CMInferenceJobRequest& request, const DescribeICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with a protected health information (PHI)
         * detection job. Use this operation to get the status of a detection
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribePHIDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePHIDetectionJobOutcome DescribePHIDetectionJob(const Model::DescribePHIDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a protected health information (PHI)
         * detection job. Use this operation to get the status of a detection
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribePHIDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePHIDetectionJobOutcomeCallable DescribePHIDetectionJobCallable(const Model::DescribePHIDetectionJobRequest& request) const;

        /**
         * <p>Gets the properties associated with a protected health information (PHI)
         * detection job. Use this operation to get the status of a detection
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribePHIDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribePHIDetectionJobAsync(const Model::DescribePHIDetectionJobRequest& request, const DescribePHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the properties associated with an InferRxNorm job. Use this operation to
         * get the status of an inference job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeRxNormInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRxNormInferenceJobOutcome DescribeRxNormInferenceJob(const Model::DescribeRxNormInferenceJobRequest& request) const;

        /**
         * <p>Gets the properties associated with an InferRxNorm job. Use this operation to
         * get the status of an inference job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeRxNormInferenceJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRxNormInferenceJobOutcomeCallable DescribeRxNormInferenceJobCallable(const Model::DescribeRxNormInferenceJobRequest& request) const;

        /**
         * <p>Gets the properties associated with an InferRxNorm job. Use this operation to
         * get the status of an inference job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeRxNormInferenceJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRxNormInferenceJobAsync(const Model::DescribeRxNormInferenceJobRequest& request, const DescribeRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Inspects the clinical text for a variety of medical entities and returns
         * specific information about them such as entity category, location, and
         * confidence score on that information. Amazon Comprehend Medical only detects
         * medical entities in English language texts.</p> <p>The
         * <code>DetectEntitiesV2</code> operation replaces the <a>DetectEntities</a>
         * operation. This new action uses a different model for determining the entities
         * in your medical text and changes the way that some entities are returned in the
         * output. You should use the <code>DetectEntitiesV2</code> operation in all new
         * applications.</p> <p>The <code>DetectEntitiesV2</code> operation returns the
         * <code>Acuity</code> and <code>Direction</code> entities as attributes instead of
         * types. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectEntitiesV2">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectEntitiesV2Outcome DetectEntitiesV2(const Model::DetectEntitiesV2Request& request) const;

        /**
         * <p>Inspects the clinical text for a variety of medical entities and returns
         * specific information about them such as entity category, location, and
         * confidence score on that information. Amazon Comprehend Medical only detects
         * medical entities in English language texts.</p> <p>The
         * <code>DetectEntitiesV2</code> operation replaces the <a>DetectEntities</a>
         * operation. This new action uses a different model for determining the entities
         * in your medical text and changes the way that some entities are returned in the
         * output. You should use the <code>DetectEntitiesV2</code> operation in all new
         * applications.</p> <p>The <code>DetectEntitiesV2</code> operation returns the
         * <code>Acuity</code> and <code>Direction</code> entities as attributes instead of
         * types. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectEntitiesV2">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectEntitiesV2OutcomeCallable DetectEntitiesV2Callable(const Model::DetectEntitiesV2Request& request) const;

        /**
         * <p>Inspects the clinical text for a variety of medical entities and returns
         * specific information about them such as entity category, location, and
         * confidence score on that information. Amazon Comprehend Medical only detects
         * medical entities in English language texts.</p> <p>The
         * <code>DetectEntitiesV2</code> operation replaces the <a>DetectEntities</a>
         * operation. This new action uses a different model for determining the entities
         * in your medical text and changes the way that some entities are returned in the
         * output. You should use the <code>DetectEntitiesV2</code> operation in all new
         * applications.</p> <p>The <code>DetectEntitiesV2</code> operation returns the
         * <code>Acuity</code> and <code>Direction</code> entities as attributes instead of
         * types. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectEntitiesV2">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectEntitiesV2Async(const Model::DetectEntitiesV2Request& request, const DetectEntitiesV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Inspects the clinical text for protected health information (PHI) entities
         * and returns the entity category, location, and confidence score for each entity.
         * Amazon Comprehend Medical only detects entities in English language
         * texts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectPHI">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectPHIOutcome DetectPHI(const Model::DetectPHIRequest& request) const;

        /**
         * <p> Inspects the clinical text for protected health information (PHI) entities
         * and returns the entity category, location, and confidence score for each entity.
         * Amazon Comprehend Medical only detects entities in English language
         * texts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectPHI">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectPHIOutcomeCallable DetectPHICallable(const Model::DetectPHIRequest& request) const;

        /**
         * <p> Inspects the clinical text for protected health information (PHI) entities
         * and returns the entity category, location, and confidence score for each entity.
         * Amazon Comprehend Medical only detects entities in English language
         * texts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectPHI">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectPHIAsync(const Model::DetectPHIRequest& request, const DetectPHIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>InferICD10CM detects medical conditions as entities listed in a patient
         * record and links those entities to normalized concept identifiers in the
         * ICD-10-CM knowledge base from the Centers for Disease Control. Amazon Comprehend
         * Medical only detects medical entities in English language texts.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferICD10CM">AWS
         * API Reference</a></p>
         */
        virtual Model::InferICD10CMOutcome InferICD10CM(const Model::InferICD10CMRequest& request) const;

        /**
         * <p>InferICD10CM detects medical conditions as entities listed in a patient
         * record and links those entities to normalized concept identifiers in the
         * ICD-10-CM knowledge base from the Centers for Disease Control. Amazon Comprehend
         * Medical only detects medical entities in English language texts.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferICD10CM">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InferICD10CMOutcomeCallable InferICD10CMCallable(const Model::InferICD10CMRequest& request) const;

        /**
         * <p>InferICD10CM detects medical conditions as entities listed in a patient
         * record and links those entities to normalized concept identifiers in the
         * ICD-10-CM knowledge base from the Centers for Disease Control. Amazon Comprehend
         * Medical only detects medical entities in English language texts.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferICD10CM">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InferICD10CMAsync(const Model::InferICD10CMRequest& request, const InferICD10CMResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>InferRxNorm detects medications as entities listed in a patient record and
         * links to the normalized concept identifiers in the RxNorm database from the
         * National Library of Medicine. Amazon Comprehend Medical only detects medical
         * entities in English language texts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferRxNorm">AWS
         * API Reference</a></p>
         */
        virtual Model::InferRxNormOutcome InferRxNorm(const Model::InferRxNormRequest& request) const;

        /**
         * <p>InferRxNorm detects medications as entities listed in a patient record and
         * links to the normalized concept identifiers in the RxNorm database from the
         * National Library of Medicine. Amazon Comprehend Medical only detects medical
         * entities in English language texts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferRxNorm">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::InferRxNormOutcomeCallable InferRxNormCallable(const Model::InferRxNormRequest& request) const;

        /**
         * <p>InferRxNorm detects medications as entities listed in a patient record and
         * links to the normalized concept identifiers in the RxNorm database from the
         * National Library of Medicine. Amazon Comprehend Medical only detects medical
         * entities in English language texts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferRxNorm">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InferRxNormAsync(const Model::InferRxNormRequest& request, const InferRxNormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of medical entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListEntitiesDetectionV2Jobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesDetectionV2JobsOutcome ListEntitiesDetectionV2Jobs(const Model::ListEntitiesDetectionV2JobsRequest& request) const;

        /**
         * <p>Gets a list of medical entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListEntitiesDetectionV2Jobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEntitiesDetectionV2JobsOutcomeCallable ListEntitiesDetectionV2JobsCallable(const Model::ListEntitiesDetectionV2JobsRequest& request) const;

        /**
         * <p>Gets a list of medical entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListEntitiesDetectionV2Jobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEntitiesDetectionV2JobsAsync(const Model::ListEntitiesDetectionV2JobsRequest& request, const ListEntitiesDetectionV2JobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of InferICD10CM jobs that you have submitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListICD10CMInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListICD10CMInferenceJobsOutcome ListICD10CMInferenceJobs(const Model::ListICD10CMInferenceJobsRequest& request) const;

        /**
         * <p>Gets a list of InferICD10CM jobs that you have submitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListICD10CMInferenceJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListICD10CMInferenceJobsOutcomeCallable ListICD10CMInferenceJobsCallable(const Model::ListICD10CMInferenceJobsRequest& request) const;

        /**
         * <p>Gets a list of InferICD10CM jobs that you have submitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListICD10CMInferenceJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListICD10CMInferenceJobsAsync(const Model::ListICD10CMInferenceJobsRequest& request, const ListICD10CMInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of protected health information (PHI) detection jobs that you
         * have submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListPHIDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPHIDetectionJobsOutcome ListPHIDetectionJobs(const Model::ListPHIDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of protected health information (PHI) detection jobs that you
         * have submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListPHIDetectionJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPHIDetectionJobsOutcomeCallable ListPHIDetectionJobsCallable(const Model::ListPHIDetectionJobsRequest& request) const;

        /**
         * <p>Gets a list of protected health information (PHI) detection jobs that you
         * have submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListPHIDetectionJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPHIDetectionJobsAsync(const Model::ListPHIDetectionJobsRequest& request, const ListPHIDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of InferRxNorm jobs that you have submitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListRxNormInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRxNormInferenceJobsOutcome ListRxNormInferenceJobs(const Model::ListRxNormInferenceJobsRequest& request) const;

        /**
         * <p>Gets a list of InferRxNorm jobs that you have submitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListRxNormInferenceJobs">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRxNormInferenceJobsOutcomeCallable ListRxNormInferenceJobsCallable(const Model::ListRxNormInferenceJobsRequest& request) const;

        /**
         * <p>Gets a list of InferRxNorm jobs that you have submitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListRxNormInferenceJobs">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRxNormInferenceJobsAsync(const Model::ListRxNormInferenceJobsRequest& request, const ListRxNormInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous medical entity detection job for a collection of
         * documents. Use the <code>DescribeEntitiesDetectionV2Job</code> operation to
         * track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEntitiesDetectionV2JobOutcome StartEntitiesDetectionV2Job(const Model::StartEntitiesDetectionV2JobRequest& request) const;

        /**
         * <p>Starts an asynchronous medical entity detection job for a collection of
         * documents. Use the <code>DescribeEntitiesDetectionV2Job</code> operation to
         * track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartEntitiesDetectionV2JobOutcomeCallable StartEntitiesDetectionV2JobCallable(const Model::StartEntitiesDetectionV2JobRequest& request) const;

        /**
         * <p>Starts an asynchronous medical entity detection job for a collection of
         * documents. Use the <code>DescribeEntitiesDetectionV2Job</code> operation to
         * track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartEntitiesDetectionV2JobAsync(const Model::StartEntitiesDetectionV2JobRequest& request, const StartEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous job to detect medical conditions and link them to the
         * ICD-10-CM ontology. Use the <code>DescribeICD10CMInferenceJob</code> operation
         * to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartICD10CMInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartICD10CMInferenceJobOutcome StartICD10CMInferenceJob(const Model::StartICD10CMInferenceJobRequest& request) const;

        /**
         * <p>Starts an asynchronous job to detect medical conditions and link them to the
         * ICD-10-CM ontology. Use the <code>DescribeICD10CMInferenceJob</code> operation
         * to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartICD10CMInferenceJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartICD10CMInferenceJobOutcomeCallable StartICD10CMInferenceJobCallable(const Model::StartICD10CMInferenceJobRequest& request) const;

        /**
         * <p>Starts an asynchronous job to detect medical conditions and link them to the
         * ICD-10-CM ontology. Use the <code>DescribeICD10CMInferenceJob</code> operation
         * to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartICD10CMInferenceJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartICD10CMInferenceJobAsync(const Model::StartICD10CMInferenceJobRequest& request, const StartICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous job to detect protected health information (PHI). Use
         * the <code>DescribePHIDetectionJob</code> operation to track the status of a
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartPHIDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPHIDetectionJobOutcome StartPHIDetectionJob(const Model::StartPHIDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous job to detect protected health information (PHI). Use
         * the <code>DescribePHIDetectionJob</code> operation to track the status of a
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartPHIDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPHIDetectionJobOutcomeCallable StartPHIDetectionJobCallable(const Model::StartPHIDetectionJobRequest& request) const;

        /**
         * <p>Starts an asynchronous job to detect protected health information (PHI). Use
         * the <code>DescribePHIDetectionJob</code> operation to track the status of a
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartPHIDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartPHIDetectionJobAsync(const Model::StartPHIDetectionJobRequest& request, const StartPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an asynchronous job to detect medication entities and link them to the
         * RxNorm ontology. Use the <code>DescribeRxNormInferenceJob</code> operation to
         * track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartRxNormInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRxNormInferenceJobOutcome StartRxNormInferenceJob(const Model::StartRxNormInferenceJobRequest& request) const;

        /**
         * <p>Starts an asynchronous job to detect medication entities and link them to the
         * RxNorm ontology. Use the <code>DescribeRxNormInferenceJob</code> operation to
         * track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartRxNormInferenceJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRxNormInferenceJobOutcomeCallable StartRxNormInferenceJobCallable(const Model::StartRxNormInferenceJobRequest& request) const;

        /**
         * <p>Starts an asynchronous job to detect medication entities and link them to the
         * RxNorm ontology. Use the <code>DescribeRxNormInferenceJob</code> operation to
         * track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartRxNormInferenceJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRxNormInferenceJobAsync(const Model::StartRxNormInferenceJobRequest& request, const StartRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a medical entities detection job in progress.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEntitiesDetectionV2JobOutcome StopEntitiesDetectionV2Job(const Model::StopEntitiesDetectionV2JobRequest& request) const;

        /**
         * <p>Stops a medical entities detection job in progress.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopEntitiesDetectionV2JobOutcomeCallable StopEntitiesDetectionV2JobCallable(const Model::StopEntitiesDetectionV2JobRequest& request) const;

        /**
         * <p>Stops a medical entities detection job in progress.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopEntitiesDetectionV2JobAsync(const Model::StopEntitiesDetectionV2JobRequest& request, const StopEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an InferICD10CM inference job in progress.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopICD10CMInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopICD10CMInferenceJobOutcome StopICD10CMInferenceJob(const Model::StopICD10CMInferenceJobRequest& request) const;

        /**
         * <p>Stops an InferICD10CM inference job in progress.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopICD10CMInferenceJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopICD10CMInferenceJobOutcomeCallable StopICD10CMInferenceJobCallable(const Model::StopICD10CMInferenceJobRequest& request) const;

        /**
         * <p>Stops an InferICD10CM inference job in progress.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopICD10CMInferenceJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopICD10CMInferenceJobAsync(const Model::StopICD10CMInferenceJobRequest& request, const StopICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops a protected health information (PHI) detection job in
         * progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopPHIDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPHIDetectionJobOutcome StopPHIDetectionJob(const Model::StopPHIDetectionJobRequest& request) const;

        /**
         * <p>Stops a protected health information (PHI) detection job in
         * progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopPHIDetectionJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopPHIDetectionJobOutcomeCallable StopPHIDetectionJobCallable(const Model::StopPHIDetectionJobRequest& request) const;

        /**
         * <p>Stops a protected health information (PHI) detection job in
         * progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopPHIDetectionJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopPHIDetectionJobAsync(const Model::StopPHIDetectionJobRequest& request, const StopPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an InferRxNorm inference job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopRxNormInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRxNormInferenceJobOutcome StopRxNormInferenceJob(const Model::StopRxNormInferenceJobRequest& request) const;

        /**
         * <p>Stops an InferRxNorm inference job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopRxNormInferenceJob">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopRxNormInferenceJobOutcomeCallable StopRxNormInferenceJobCallable(const Model::StopRxNormInferenceJobRequest& request) const;

        /**
         * <p>Stops an InferRxNorm inference job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopRxNormInferenceJob">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRxNormInferenceJobAsync(const Model::StopRxNormInferenceJobRequest& request, const StopRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DescribeEntitiesDetectionV2JobAsyncHelper(const Model::DescribeEntitiesDetectionV2JobRequest& request, const DescribeEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeICD10CMInferenceJobAsyncHelper(const Model::DescribeICD10CMInferenceJobRequest& request, const DescribeICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribePHIDetectionJobAsyncHelper(const Model::DescribePHIDetectionJobRequest& request, const DescribePHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRxNormInferenceJobAsyncHelper(const Model::DescribeRxNormInferenceJobRequest& request, const DescribeRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectEntitiesV2AsyncHelper(const Model::DetectEntitiesV2Request& request, const DetectEntitiesV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DetectPHIAsyncHelper(const Model::DetectPHIRequest& request, const DetectPHIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InferICD10CMAsyncHelper(const Model::InferICD10CMRequest& request, const InferICD10CMResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void InferRxNormAsyncHelper(const Model::InferRxNormRequest& request, const InferRxNormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEntitiesDetectionV2JobsAsyncHelper(const Model::ListEntitiesDetectionV2JobsRequest& request, const ListEntitiesDetectionV2JobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListICD10CMInferenceJobsAsyncHelper(const Model::ListICD10CMInferenceJobsRequest& request, const ListICD10CMInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListPHIDetectionJobsAsyncHelper(const Model::ListPHIDetectionJobsRequest& request, const ListPHIDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRxNormInferenceJobsAsyncHelper(const Model::ListRxNormInferenceJobsRequest& request, const ListRxNormInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartEntitiesDetectionV2JobAsyncHelper(const Model::StartEntitiesDetectionV2JobRequest& request, const StartEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartICD10CMInferenceJobAsyncHelper(const Model::StartICD10CMInferenceJobRequest& request, const StartICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartPHIDetectionJobAsyncHelper(const Model::StartPHIDetectionJobRequest& request, const StartPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StartRxNormInferenceJobAsyncHelper(const Model::StartRxNormInferenceJobRequest& request, const StartRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopEntitiesDetectionV2JobAsyncHelper(const Model::StopEntitiesDetectionV2JobRequest& request, const StopEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopICD10CMInferenceJobAsyncHelper(const Model::StopICD10CMInferenceJobRequest& request, const StopICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopPHIDetectionJobAsyncHelper(const Model::StopPHIDetectionJobRequest& request, const StopPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void StopRxNormInferenceJobAsyncHelper(const Model::StopRxNormInferenceJobRequest& request, const StopRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace ComprehendMedical
} // namespace Aws
