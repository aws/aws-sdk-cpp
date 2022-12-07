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
   * <p> Comprehend Medical; extracts structured information from unstructured
   * clinical text. Use these actions to gain insight in your documents. </p>
   */
  class AWS_COMPREHENDMEDICAL_API ComprehendMedicalClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ComprehendMedicalClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendMedicalClient(const Aws::ComprehendMedical::ComprehendMedicalClientConfiguration& clientConfiguration = Aws::ComprehendMedical::ComprehendMedicalClientConfiguration(),
                                std::shared_ptr<ComprehendMedicalEndpointProviderBase> endpointProvider = Aws::MakeShared<ComprehendMedicalEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ComprehendMedicalClient(const Aws::Auth::AWSCredentials& credentials,
                                std::shared_ptr<ComprehendMedicalEndpointProviderBase> endpointProvider = Aws::MakeShared<ComprehendMedicalEndpointProvider>(ALLOCATION_TAG),
                                const Aws::ComprehendMedical::ComprehendMedicalClientConfiguration& clientConfiguration = Aws::ComprehendMedical::ComprehendMedicalClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ComprehendMedicalClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                std::shared_ptr<ComprehendMedicalEndpointProviderBase> endpointProvider = Aws::MakeShared<ComprehendMedicalEndpointProvider>(ALLOCATION_TAG),
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
        virtual Model::DescribeEntitiesDetectionV2JobOutcomeCallable DescribeEntitiesDetectionV2JobCallable(const Model::DescribeEntitiesDetectionV2JobRequest& request) const;

        /**
         * An Async wrapper for DescribeEntitiesDetectionV2Job that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeICD10CMInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeICD10CMInferenceJobOutcomeCallable DescribeICD10CMInferenceJobCallable(const Model::DescribeICD10CMInferenceJobRequest& request) const;

        /**
         * An Async wrapper for DescribeICD10CMInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribePHIDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribePHIDetectionJobOutcomeCallable DescribePHIDetectionJobCallable(const Model::DescribePHIDetectionJobRequest& request) const;

        /**
         * An Async wrapper for DescribePHIDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DescribeRxNormInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRxNormInferenceJobOutcomeCallable DescribeRxNormInferenceJobCallable(const Model::DescribeRxNormInferenceJobRequest& request) const;

        /**
         * An Async wrapper for DescribeRxNormInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRxNormInferenceJobAsync(const Model::DescribeRxNormInferenceJobRequest& request, const DescribeRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DescribeSNOMEDCTInferenceJobOutcomeCallable DescribeSNOMEDCTInferenceJobCallable(const Model::DescribeSNOMEDCTInferenceJobRequest& request) const;

        /**
         * An Async wrapper for DescribeSNOMEDCTInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSNOMEDCTInferenceJobAsync(const Model::DescribeSNOMEDCTInferenceJobRequest& request, const DescribeSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::DetectEntitiesV2OutcomeCallable DetectEntitiesV2Callable(const Model::DetectEntitiesV2Request& request) const;

        /**
         * An Async wrapper for DetectEntitiesV2 that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for DetectPHI that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetectPHIOutcomeCallable DetectPHICallable(const Model::DetectPHIRequest& request) const;

        /**
         * An Async wrapper for DetectPHI that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetectPHIAsync(const Model::DetectPHIRequest& request, const DetectPHIResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::InferICD10CMOutcomeCallable InferICD10CMCallable(const Model::InferICD10CMRequest& request) const;

        /**
         * An Async wrapper for InferICD10CM that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InferICD10CMAsync(const Model::InferICD10CMRequest& request, const InferICD10CMResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::InferRxNormOutcomeCallable InferRxNormCallable(const Model::InferRxNormRequest& request) const;

        /**
         * An Async wrapper for InferRxNorm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InferRxNormAsync(const Model::InferRxNormRequest& request, const InferRxNormResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::InferSNOMEDCTOutcomeCallable InferSNOMEDCTCallable(const Model::InferSNOMEDCTRequest& request) const;

        /**
         * An Async wrapper for InferSNOMEDCT that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void InferSNOMEDCTAsync(const Model::InferSNOMEDCTRequest& request, const InferSNOMEDCTResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListEntitiesDetectionV2JobsOutcomeCallable ListEntitiesDetectionV2JobsCallable(const Model::ListEntitiesDetectionV2JobsRequest& request) const;

        /**
         * An Async wrapper for ListEntitiesDetectionV2Jobs that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListICD10CMInferenceJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListICD10CMInferenceJobsOutcomeCallable ListICD10CMInferenceJobsCallable(const Model::ListICD10CMInferenceJobsRequest& request) const;

        /**
         * An Async wrapper for ListICD10CMInferenceJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListPHIDetectionJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPHIDetectionJobsOutcomeCallable ListPHIDetectionJobsCallable(const Model::ListPHIDetectionJobsRequest& request) const;

        /**
         * An Async wrapper for ListPHIDetectionJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for ListRxNormInferenceJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRxNormInferenceJobsOutcomeCallable ListRxNormInferenceJobsCallable(const Model::ListRxNormInferenceJobsRequest& request) const;

        /**
         * An Async wrapper for ListRxNormInferenceJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRxNormInferenceJobsAsync(const Model::ListRxNormInferenceJobsRequest& request, const ListRxNormInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::ListSNOMEDCTInferenceJobsOutcomeCallable ListSNOMEDCTInferenceJobsCallable(const Model::ListSNOMEDCTInferenceJobsRequest& request) const;

        /**
         * An Async wrapper for ListSNOMEDCTInferenceJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSNOMEDCTInferenceJobsAsync(const Model::ListSNOMEDCTInferenceJobsRequest& request, const ListSNOMEDCTInferenceJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartEntitiesDetectionV2JobOutcomeCallable StartEntitiesDetectionV2JobCallable(const Model::StartEntitiesDetectionV2JobRequest& request) const;

        /**
         * An Async wrapper for StartEntitiesDetectionV2Job that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StartICD10CMInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartICD10CMInferenceJobOutcomeCallable StartICD10CMInferenceJobCallable(const Model::StartICD10CMInferenceJobRequest& request) const;

        /**
         * An Async wrapper for StartICD10CMInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StartPHIDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartPHIDetectionJobOutcomeCallable StartPHIDetectionJobCallable(const Model::StartPHIDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StartPHIDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StartRxNormInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartRxNormInferenceJobOutcomeCallable StartRxNormInferenceJobCallable(const Model::StartRxNormInferenceJobRequest& request) const;

        /**
         * An Async wrapper for StartRxNormInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartRxNormInferenceJobAsync(const Model::StartRxNormInferenceJobRequest& request, const StartRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StartSNOMEDCTInferenceJobOutcomeCallable StartSNOMEDCTInferenceJobCallable(const Model::StartSNOMEDCTInferenceJobRequest& request) const;

        /**
         * An Async wrapper for StartSNOMEDCTInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartSNOMEDCTInferenceJobAsync(const Model::StartSNOMEDCTInferenceJobRequest& request, const StartSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopEntitiesDetectionV2JobOutcomeCallable StopEntitiesDetectionV2JobCallable(const Model::StopEntitiesDetectionV2JobRequest& request) const;

        /**
         * An Async wrapper for StopEntitiesDetectionV2Job that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StopICD10CMInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopICD10CMInferenceJobOutcomeCallable StopICD10CMInferenceJobCallable(const Model::StopICD10CMInferenceJobRequest& request) const;

        /**
         * An Async wrapper for StopICD10CMInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
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
         * A Callable wrapper for StopPHIDetectionJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopPHIDetectionJobOutcomeCallable StopPHIDetectionJobCallable(const Model::StopPHIDetectionJobRequest& request) const;

        /**
         * An Async wrapper for StopPHIDetectionJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopPHIDetectionJobAsync(const Model::StopPHIDetectionJobRequest& request, const StopPHIDetectionJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Stops an InferRxNorm inference job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopRxNormInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRxNormInferenceJobOutcome StopRxNormInferenceJob(const Model::StopRxNormInferenceJobRequest& request) const;

        /**
         * A Callable wrapper for StopRxNormInferenceJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopRxNormInferenceJobOutcomeCallable StopRxNormInferenceJobCallable(const Model::StopRxNormInferenceJobRequest& request) const;

        /**
         * An Async wrapper for StopRxNormInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopRxNormInferenceJobAsync(const Model::StopRxNormInferenceJobRequest& request, const StopRxNormInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
        virtual Model::StopSNOMEDCTInferenceJobOutcomeCallable StopSNOMEDCTInferenceJobCallable(const Model::StopSNOMEDCTInferenceJobRequest& request) const;

        /**
         * An Async wrapper for StopSNOMEDCTInferenceJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopSNOMEDCTInferenceJobAsync(const Model::StopSNOMEDCTInferenceJobRequest& request, const StopSNOMEDCTInferenceJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
