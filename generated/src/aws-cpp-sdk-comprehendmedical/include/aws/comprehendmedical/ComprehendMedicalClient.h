/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/comprehendmedical/ComprehendMedicalServiceClientModel.h>

namespace Aws
{
namespace ComprehendMedical
{
  /**
   * <p>Amazon Comprehend Medical extracts structured information from unstructured
   * clinical text. Use these actions to gain insight in your documents. Amazon
   * Comprehend Medical only detects entities in English language texts. Amazon
   * Comprehend Medical places limits on the sizes of files allowed for different API
   * operations. To learn more, see <a
   * href="https://docs.aws.amazon.com/comprehend-medical/latest/dev/comprehendmedical-quotas.html">Guidelines
   * and quotas</a> in the <i>Amazon Comprehend Medical Developer Guide</i>.</p>
   */
  class AWS_COMPREHENDMEDICAL_API ComprehendMedicalClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ComprehendMedicalClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ComprehendMedicalClientConfiguration ClientConfigurationType;
      typedef ComprehendMedicalEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendMedicalClient(const Aws::ComprehendMedical::ComprehendMedicalClientConfiguration& clientConfiguration = Aws::ComprehendMedical::ComprehendMedicalClientConfiguration(),
                                std::shared_ptr<ComprehendMedicalEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendMedicalClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<ComprehendMedicalEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::ComprehendMedical::ComprehendMedicalClientConfiguration& clientConfiguration = Aws::ComprehendMedical::ComprehendMedicalClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComprehendMedicalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<ComprehendMedicalEndpointProviderBase> endpointProvider = nullptr,
                                const Aws::ComprehendMedical::ComprehendMedicalClientConfiguration& clientConfiguration = Aws::ComprehendMedical::ComprehendMedicalClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendMedicalClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendMedicalClient(const Aws::Auth::AWSCredentials& credentials,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComprehendMedicalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * A Callable wrapper for DescribeEntitiesDetectionV2Job that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEntitiesDetectionV2JobRequestT = Model::DescribeEntitiesDetectionV2JobRequest>
        Model::DescribeEntitiesDetectionV2JobOutcomeCallable DescribeEntitiesDetectionV2JobCallable(const DescribeEntitiesDetectionV2JobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::DescribeEntitiesDetectionV2Job, request);
        }

        /**
         * An Async wrapper for DescribeEntitiesDetectionV2Job that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEntitiesDetectionV2JobRequestT = Model::DescribeEntitiesDetectionV2JobRequest>
        void DescribeEntitiesDetectionV2JobAsync(const DescribeEntitiesDetectionV2JobRequestT& request, const DescribeEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::DescribeEntitiesDetectionV2Job, request, handler, context);
        }

        /**
         * <p>Gets the properties associated with an InferICD10CM job. Use this operation
         * to get the status of an inference job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeICD10CMInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeICD10CMInferenceJobOutcome DescribeICD10CMInferenceJob(const Model::DescribeICD10CMInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeICD10CMInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeICD10CMInferenceJobRequestT = Model::DescribeICD10CMInferenceJobRequest>
        Model::DescribeICD10CMInferenceJobOutcomeCallable DescribeICD10CMInferenceJobCallable(const DescribeICD10CMInferenceJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::DescribeICD10CMInferenceJob, request);
        }

        /**
         * An Async wrapper for DescribeICD10CMInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeICD10CMInferenceJobRequestT = Model::DescribeICD10CMInferenceJobRequest>
        void DescribeICD10CMInferenceJobAsync(const DescribeICD10CMInferenceJobRequestT& request, const DescribeICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::DescribeICD10CMInferenceJob, request, handler, context);
        }

        /**
         * <p>Gets the properties associated with a protected health information (PHI)
         * detection job. Use this operation to get the status of a detection
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribePHIDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePHIDetectionJobOutcome DescribePHIDetectionJob(const Model::DescribePHIDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for DescribePHIDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePHIDetectionJobRequestT = Model::DescribePHIDetectionJobRequest>
        Model::DescribePHIDetectionJobOutcomeCallable DescribePHIDetectionJobCallable(const DescribePHIDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::DescribePHIDetectionJob, request);
        }

        /**
         * An Async wrapper for DescribePHIDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePHIDetectionJobRequestT = Model::DescribePHIDetectionJobRequest>
        void DescribePHIDetectionJobAsync(const DescribePHIDetectionJobRequestT& request, const DescribePHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::DescribePHIDetectionJob, request, handler, context);
        }

        /**
         * <p>Gets the properties associated with an InferRxNorm job. Use this operation to
         * get the status of an inference job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeRxNormInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRxNormInferenceJobOutcome DescribeRxNormInferenceJob(const Model::DescribeRxNormInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeRxNormInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRxNormInferenceJobRequestT = Model::DescribeRxNormInferenceJobRequest>
        Model::DescribeRxNormInferenceJobOutcomeCallable DescribeRxNormInferenceJobCallable(const DescribeRxNormInferenceJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::DescribeRxNormInferenceJob, request);
        }

        /**
         * An Async wrapper for DescribeRxNormInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRxNormInferenceJobRequestT = Model::DescribeRxNormInferenceJobRequest>
        void DescribeRxNormInferenceJobAsync(const DescribeRxNormInferenceJobRequestT& request, const DescribeRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::DescribeRxNormInferenceJob, request, handler, context);
        }

        /**
         * <p> Gets the properties associated with an InferSNOMEDCT job. Use this operation
         * to get the status of an inference job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeSNOMEDCTInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSNOMEDCTInferenceJobOutcome DescribeSNOMEDCTInferenceJob(const Model::DescribeSNOMEDCTInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeSNOMEDCTInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeSNOMEDCTInferenceJobRequestT = Model::DescribeSNOMEDCTInferenceJobRequest>
        Model::DescribeSNOMEDCTInferenceJobOutcomeCallable DescribeSNOMEDCTInferenceJobCallable(const DescribeSNOMEDCTInferenceJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::DescribeSNOMEDCTInferenceJob, request);
        }

        /**
         * An Async wrapper for DescribeSNOMEDCTInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSNOMEDCTInferenceJobRequestT = Model::DescribeSNOMEDCTInferenceJobRequest>
        void DescribeSNOMEDCTInferenceJobAsync(const DescribeSNOMEDCTInferenceJobRequestT& request, const DescribeSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::DescribeSNOMEDCTInferenceJob, request, handler, context);
        }

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
         * A Callable wrapper for DetectEntitiesV2 that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectEntitiesV2RequestT = Model::DetectEntitiesV2Request>
        Model::DetectEntitiesV2OutcomeCallable DetectEntitiesV2Callable(const DetectEntitiesV2RequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::DetectEntitiesV2, request);
        }

        /**
         * An Async wrapper for DetectEntitiesV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectEntitiesV2RequestT = Model::DetectEntitiesV2Request>
        void DetectEntitiesV2Async(const DetectEntitiesV2RequestT& request, const DetectEntitiesV2ResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::DetectEntitiesV2, request, handler, context);
        }

        /**
         * <p>Inspects the clinical text for protected health information (PHI) entities
         * and returns the entity category, location, and confidence score for each entity.
         * Amazon Comprehend Medical only detects entities in English language
         * texts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectPHI">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectPHIOutcome DetectPHI(const Model::DetectPHIRequest& request) const;

        /**
         * A Callable wrapper for DetectPHI that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetectPHIRequestT = Model::DetectPHIRequest>
        Model::DetectPHIOutcomeCallable DetectPHICallable(const DetectPHIRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::DetectPHI, request);
        }

        /**
         * An Async wrapper for DetectPHI that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetectPHIRequestT = Model::DetectPHIRequest>
        void DetectPHIAsync(const DetectPHIRequestT& request, const DetectPHIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::DetectPHI, request, handler, context);
        }

        /**
         * <p>InferICD10CM detects medical conditions as entities listed in a patient
         * record and links those entities to normalized concept identifiers in the
         * ICD-10-CM knowledge base from the Centers for Disease Control. Amazon Comprehend
         * Medical only detects medical entities in English language texts. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferICD10CM">AWS
         * API Reference</a></p>
         */
        virtual Model::InferICD10CMOutcome InferICD10CM(const Model::InferICD10CMRequest& request) const;

        /**
         * A Callable wrapper for InferICD10CM that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InferICD10CMRequestT = Model::InferICD10CMRequest>
        Model::InferICD10CMOutcomeCallable InferICD10CMCallable(const InferICD10CMRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::InferICD10CM, request);
        }

        /**
         * An Async wrapper for InferICD10CM that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InferICD10CMRequestT = Model::InferICD10CMRequest>
        void InferICD10CMAsync(const InferICD10CMRequestT& request, const InferICD10CMResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::InferICD10CM, request, handler, context);
        }

        /**
         * <p>InferRxNorm detects medications as entities listed in a patient record and
         * links to the normalized concept identifiers in the RxNorm database from the
         * National Library of Medicine. Amazon Comprehend Medical only detects medical
         * entities in English language texts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferRxNorm">AWS
         * API Reference</a></p>
         */
        virtual Model::InferRxNormOutcome InferRxNorm(const Model::InferRxNormRequest& request) const;

        /**
         * A Callable wrapper for InferRxNorm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InferRxNormRequestT = Model::InferRxNormRequest>
        Model::InferRxNormOutcomeCallable InferRxNormCallable(const InferRxNormRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::InferRxNorm, request);
        }

        /**
         * An Async wrapper for InferRxNorm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InferRxNormRequestT = Model::InferRxNormRequest>
        void InferRxNormAsync(const InferRxNormRequestT& request, const InferRxNormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::InferRxNorm, request, handler, context);
        }

        /**
         * <p> InferSNOMEDCT detects possible medical concepts as entities and links them
         * to codes from the Systematized Nomenclature of Medicine, Clinical Terms
         * (SNOMED-CT) ontology</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferSNOMEDCT">AWS
         * API Reference</a></p>
         */
        virtual Model::InferSNOMEDCTOutcome InferSNOMEDCT(const Model::InferSNOMEDCTRequest& request) const;

        /**
         * A Callable wrapper for InferSNOMEDCT that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename InferSNOMEDCTRequestT = Model::InferSNOMEDCTRequest>
        Model::InferSNOMEDCTOutcomeCallable InferSNOMEDCTCallable(const InferSNOMEDCTRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::InferSNOMEDCT, request);
        }

        /**
         * An Async wrapper for InferSNOMEDCT that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename InferSNOMEDCTRequestT = Model::InferSNOMEDCTRequest>
        void InferSNOMEDCTAsync(const InferSNOMEDCTRequestT& request, const InferSNOMEDCTResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::InferSNOMEDCT, request, handler, context);
        }

        /**
         * <p>Gets a list of medical entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListEntitiesDetectionV2Jobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesDetectionV2JobsOutcome ListEntitiesDetectionV2Jobs(const Model::ListEntitiesDetectionV2JobsRequest& request) const;

        /**
         * A Callable wrapper for ListEntitiesDetectionV2Jobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEntitiesDetectionV2JobsRequestT = Model::ListEntitiesDetectionV2JobsRequest>
        Model::ListEntitiesDetectionV2JobsOutcomeCallable ListEntitiesDetectionV2JobsCallable(const ListEntitiesDetectionV2JobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::ListEntitiesDetectionV2Jobs, request);
        }

        /**
         * An Async wrapper for ListEntitiesDetectionV2Jobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEntitiesDetectionV2JobsRequestT = Model::ListEntitiesDetectionV2JobsRequest>
        void ListEntitiesDetectionV2JobsAsync(const ListEntitiesDetectionV2JobsRequestT& request, const ListEntitiesDetectionV2JobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::ListEntitiesDetectionV2Jobs, request, handler, context);
        }

        /**
         * <p>Gets a list of InferICD10CM jobs that you have submitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListICD10CMInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListICD10CMInferenceJobsOutcome ListICD10CMInferenceJobs(const Model::ListICD10CMInferenceJobsRequest& request) const;

        /**
         * A Callable wrapper for ListICD10CMInferenceJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListICD10CMInferenceJobsRequestT = Model::ListICD10CMInferenceJobsRequest>
        Model::ListICD10CMInferenceJobsOutcomeCallable ListICD10CMInferenceJobsCallable(const ListICD10CMInferenceJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::ListICD10CMInferenceJobs, request);
        }

        /**
         * An Async wrapper for ListICD10CMInferenceJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListICD10CMInferenceJobsRequestT = Model::ListICD10CMInferenceJobsRequest>
        void ListICD10CMInferenceJobsAsync(const ListICD10CMInferenceJobsRequestT& request, const ListICD10CMInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::ListICD10CMInferenceJobs, request, handler, context);
        }

        /**
         * <p>Gets a list of protected health information (PHI) detection jobs you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListPHIDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPHIDetectionJobsOutcome ListPHIDetectionJobs(const Model::ListPHIDetectionJobsRequest& request) const;

        /**
         * A Callable wrapper for ListPHIDetectionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPHIDetectionJobsRequestT = Model::ListPHIDetectionJobsRequest>
        Model::ListPHIDetectionJobsOutcomeCallable ListPHIDetectionJobsCallable(const ListPHIDetectionJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::ListPHIDetectionJobs, request);
        }

        /**
         * An Async wrapper for ListPHIDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPHIDetectionJobsRequestT = Model::ListPHIDetectionJobsRequest>
        void ListPHIDetectionJobsAsync(const ListPHIDetectionJobsRequestT& request, const ListPHIDetectionJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::ListPHIDetectionJobs, request, handler, context);
        }

        /**
         * <p>Gets a list of InferRxNorm jobs that you have submitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListRxNormInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRxNormInferenceJobsOutcome ListRxNormInferenceJobs(const Model::ListRxNormInferenceJobsRequest& request) const;

        /**
         * A Callable wrapper for ListRxNormInferenceJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRxNormInferenceJobsRequestT = Model::ListRxNormInferenceJobsRequest>
        Model::ListRxNormInferenceJobsOutcomeCallable ListRxNormInferenceJobsCallable(const ListRxNormInferenceJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::ListRxNormInferenceJobs, request);
        }

        /**
         * An Async wrapper for ListRxNormInferenceJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRxNormInferenceJobsRequestT = Model::ListRxNormInferenceJobsRequest>
        void ListRxNormInferenceJobsAsync(const ListRxNormInferenceJobsRequestT& request, const ListRxNormInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::ListRxNormInferenceJobs, request, handler, context);
        }

        /**
         * <p> Gets a list of InferSNOMEDCT jobs a user has submitted. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListSNOMEDCTInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSNOMEDCTInferenceJobsOutcome ListSNOMEDCTInferenceJobs(const Model::ListSNOMEDCTInferenceJobsRequest& request) const;

        /**
         * A Callable wrapper for ListSNOMEDCTInferenceJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSNOMEDCTInferenceJobsRequestT = Model::ListSNOMEDCTInferenceJobsRequest>
        Model::ListSNOMEDCTInferenceJobsOutcomeCallable ListSNOMEDCTInferenceJobsCallable(const ListSNOMEDCTInferenceJobsRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::ListSNOMEDCTInferenceJobs, request);
        }

        /**
         * An Async wrapper for ListSNOMEDCTInferenceJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSNOMEDCTInferenceJobsRequestT = Model::ListSNOMEDCTInferenceJobsRequest>
        void ListSNOMEDCTInferenceJobsAsync(const ListSNOMEDCTInferenceJobsRequestT& request, const ListSNOMEDCTInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::ListSNOMEDCTInferenceJobs, request, handler, context);
        }

        /**
         * <p>Starts an asynchronous medical entity detection job for a collection of
         * documents. Use the <code>DescribeEntitiesDetectionV2Job</code> operation to
         * track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEntitiesDetectionV2JobOutcome StartEntitiesDetectionV2Job(const Model::StartEntitiesDetectionV2JobRequest& request) const;

        /**
         * A Callable wrapper for StartEntitiesDetectionV2Job that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartEntitiesDetectionV2JobRequestT = Model::StartEntitiesDetectionV2JobRequest>
        Model::StartEntitiesDetectionV2JobOutcomeCallable StartEntitiesDetectionV2JobCallable(const StartEntitiesDetectionV2JobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::StartEntitiesDetectionV2Job, request);
        }

        /**
         * An Async wrapper for StartEntitiesDetectionV2Job that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartEntitiesDetectionV2JobRequestT = Model::StartEntitiesDetectionV2JobRequest>
        void StartEntitiesDetectionV2JobAsync(const StartEntitiesDetectionV2JobRequestT& request, const StartEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::StartEntitiesDetectionV2Job, request, handler, context);
        }

        /**
         * <p>Starts an asynchronous job to detect medical conditions and link them to the
         * ICD-10-CM ontology. Use the <code>DescribeICD10CMInferenceJob</code> operation
         * to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartICD10CMInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartICD10CMInferenceJobOutcome StartICD10CMInferenceJob(const Model::StartICD10CMInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for StartICD10CMInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartICD10CMInferenceJobRequestT = Model::StartICD10CMInferenceJobRequest>
        Model::StartICD10CMInferenceJobOutcomeCallable StartICD10CMInferenceJobCallable(const StartICD10CMInferenceJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::StartICD10CMInferenceJob, request);
        }

        /**
         * An Async wrapper for StartICD10CMInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartICD10CMInferenceJobRequestT = Model::StartICD10CMInferenceJobRequest>
        void StartICD10CMInferenceJobAsync(const StartICD10CMInferenceJobRequestT& request, const StartICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::StartICD10CMInferenceJob, request, handler, context);
        }

        /**
         * <p>Starts an asynchronous job to detect protected health information (PHI). Use
         * the <code>DescribePHIDetectionJob</code> operation to track the status of a
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartPHIDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPHIDetectionJobOutcome StartPHIDetectionJob(const Model::StartPHIDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StartPHIDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartPHIDetectionJobRequestT = Model::StartPHIDetectionJobRequest>
        Model::StartPHIDetectionJobOutcomeCallable StartPHIDetectionJobCallable(const StartPHIDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::StartPHIDetectionJob, request);
        }

        /**
         * An Async wrapper for StartPHIDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartPHIDetectionJobRequestT = Model::StartPHIDetectionJobRequest>
        void StartPHIDetectionJobAsync(const StartPHIDetectionJobRequestT& request, const StartPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::StartPHIDetectionJob, request, handler, context);
        }

        /**
         * <p>Starts an asynchronous job to detect medication entities and link them to the
         * RxNorm ontology. Use the <code>DescribeRxNormInferenceJob</code> operation to
         * track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartRxNormInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRxNormInferenceJobOutcome StartRxNormInferenceJob(const Model::StartRxNormInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for StartRxNormInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartRxNormInferenceJobRequestT = Model::StartRxNormInferenceJobRequest>
        Model::StartRxNormInferenceJobOutcomeCallable StartRxNormInferenceJobCallable(const StartRxNormInferenceJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::StartRxNormInferenceJob, request);
        }

        /**
         * An Async wrapper for StartRxNormInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartRxNormInferenceJobRequestT = Model::StartRxNormInferenceJobRequest>
        void StartRxNormInferenceJobAsync(const StartRxNormInferenceJobRequestT& request, const StartRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::StartRxNormInferenceJob, request, handler, context);
        }

        /**
         * <p> Starts an asynchronous job to detect medical concepts and link them to the
         * SNOMED-CT ontology. Use the DescribeSNOMEDCTInferenceJob operation to track the
         * status of a job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartSNOMEDCTInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSNOMEDCTInferenceJobOutcome StartSNOMEDCTInferenceJob(const Model::StartSNOMEDCTInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for StartSNOMEDCTInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartSNOMEDCTInferenceJobRequestT = Model::StartSNOMEDCTInferenceJobRequest>
        Model::StartSNOMEDCTInferenceJobOutcomeCallable StartSNOMEDCTInferenceJobCallable(const StartSNOMEDCTInferenceJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::StartSNOMEDCTInferenceJob, request);
        }

        /**
         * An Async wrapper for StartSNOMEDCTInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartSNOMEDCTInferenceJobRequestT = Model::StartSNOMEDCTInferenceJobRequest>
        void StartSNOMEDCTInferenceJobAsync(const StartSNOMEDCTInferenceJobRequestT& request, const StartSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::StartSNOMEDCTInferenceJob, request, handler, context);
        }

        /**
         * <p>Stops a medical entities detection job in progress.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEntitiesDetectionV2JobOutcome StopEntitiesDetectionV2Job(const Model::StopEntitiesDetectionV2JobRequest& request) const;

        /**
         * A Callable wrapper for StopEntitiesDetectionV2Job that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopEntitiesDetectionV2JobRequestT = Model::StopEntitiesDetectionV2JobRequest>
        Model::StopEntitiesDetectionV2JobOutcomeCallable StopEntitiesDetectionV2JobCallable(const StopEntitiesDetectionV2JobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::StopEntitiesDetectionV2Job, request);
        }

        /**
         * An Async wrapper for StopEntitiesDetectionV2Job that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopEntitiesDetectionV2JobRequestT = Model::StopEntitiesDetectionV2JobRequest>
        void StopEntitiesDetectionV2JobAsync(const StopEntitiesDetectionV2JobRequestT& request, const StopEntitiesDetectionV2JobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::StopEntitiesDetectionV2Job, request, handler, context);
        }

        /**
         * <p>Stops an InferICD10CM inference job in progress.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopICD10CMInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopICD10CMInferenceJobOutcome StopICD10CMInferenceJob(const Model::StopICD10CMInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for StopICD10CMInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopICD10CMInferenceJobRequestT = Model::StopICD10CMInferenceJobRequest>
        Model::StopICD10CMInferenceJobOutcomeCallable StopICD10CMInferenceJobCallable(const StopICD10CMInferenceJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::StopICD10CMInferenceJob, request);
        }

        /**
         * An Async wrapper for StopICD10CMInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopICD10CMInferenceJobRequestT = Model::StopICD10CMInferenceJobRequest>
        void StopICD10CMInferenceJobAsync(const StopICD10CMInferenceJobRequestT& request, const StopICD10CMInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::StopICD10CMInferenceJob, request, handler, context);
        }

        /**
         * <p>Stops a protected health information (PHI) detection job in
         * progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopPHIDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPHIDetectionJobOutcome StopPHIDetectionJob(const Model::StopPHIDetectionJobRequest& request) const;

        /**
         * A Callable wrapper for StopPHIDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopPHIDetectionJobRequestT = Model::StopPHIDetectionJobRequest>
        Model::StopPHIDetectionJobOutcomeCallable StopPHIDetectionJobCallable(const StopPHIDetectionJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::StopPHIDetectionJob, request);
        }

        /**
         * An Async wrapper for StopPHIDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopPHIDetectionJobRequestT = Model::StopPHIDetectionJobRequest>
        void StopPHIDetectionJobAsync(const StopPHIDetectionJobRequestT& request, const StopPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::StopPHIDetectionJob, request, handler, context);
        }

        /**
         * <p>Stops an InferRxNorm inference job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopRxNormInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRxNormInferenceJobOutcome StopRxNormInferenceJob(const Model::StopRxNormInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for StopRxNormInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopRxNormInferenceJobRequestT = Model::StopRxNormInferenceJobRequest>
        Model::StopRxNormInferenceJobOutcomeCallable StopRxNormInferenceJobCallable(const StopRxNormInferenceJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::StopRxNormInferenceJob, request);
        }

        /**
         * An Async wrapper for StopRxNormInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopRxNormInferenceJobRequestT = Model::StopRxNormInferenceJobRequest>
        void StopRxNormInferenceJobAsync(const StopRxNormInferenceJobRequestT& request, const StopRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::StopRxNormInferenceJob, request, handler, context);
        }

        /**
         * <p> Stops an InferSNOMEDCT inference job in progress. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopSNOMEDCTInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSNOMEDCTInferenceJobOutcome StopSNOMEDCTInferenceJob(const Model::StopSNOMEDCTInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for StopSNOMEDCTInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopSNOMEDCTInferenceJobRequestT = Model::StopSNOMEDCTInferenceJobRequest>
        Model::StopSNOMEDCTInferenceJobOutcomeCallable StopSNOMEDCTInferenceJobCallable(const StopSNOMEDCTInferenceJobRequestT& request) const
        {
            return SubmitCallable(&ComprehendMedicalClient::StopSNOMEDCTInferenceJob, request);
        }

        /**
         * An Async wrapper for StopSNOMEDCTInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopSNOMEDCTInferenceJobRequestT = Model::StopSNOMEDCTInferenceJobRequest>
        void StopSNOMEDCTInferenceJobAsync(const StopSNOMEDCTInferenceJobRequestT& request, const StopSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ComprehendMedicalClient::StopSNOMEDCTInferenceJob, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ComprehendMedicalEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ComprehendMedicalClient>;
      void init(const ComprehendMedicalClientConfiguration& clientConfiguration);

      ComprehendMedicalClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ComprehendMedicalEndpointProviderBase> m_endpointProvider;
  };

} // namespace ComprehendMedical
} // namespace Aws
