/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/comprehendmedical/ComprehendMedical_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/comprehendmedical/ComprehendMedicalServiceClientModel.h>
#include <aws/comprehendmedical/ComprehendMedicalLegacyAsyncMacros.h>

namespace Aws
{
namespace ComprehendMedical
{
  /**
   * <p> Comprehend Medical; extracts structured information from unstructured
   * clinical text. Use these actions to gain insight in your documents. </p>
   */
  class AWS_COMPREHENDMEDICAL_API ComprehendMedicalClient : public Aws::Client::AWSJsonClient
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


        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         const RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename HandlerT,
                 typename HandlerContextT,
                 typename OperationFuncT>
        void SubmitAsync(OperationFuncT&& operationFunc,
                         RequestT& request,
                         const HandlerT& handler,
                         const HandlerContextT& context)
        {
            Aws::Client::MakeAsyncStreamingOperation(std::forward<OperationFuncT>(operationFunc), this, request, handler, context, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            const RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }

        template<typename RequestT,
                 typename OperationFuncT>
        auto SubmitCallable(OperationFuncT&& operationFunc,
                            RequestT& request) -> std::future<decltype((this->*operationFunc)(request))>
        {
            return Aws::Client::MakeCallableStreamingOperation(ALLOCATION_TAG, operationFunc, this, request, m_executor.get());
        }


        /**
         * <p>Gets the properties associated with a medical entities detection job. Use
         * this operation to get the status of a detection job.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntitiesDetectionV2JobOutcome DescribeEntitiesDetectionV2Job(const Model::DescribeEntitiesDetectionV2JobRequest& request) const;


        /**
         * <p>Gets the properties associated with an InferICD10CM job. Use this operation
         * to get the status of an inference job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeICD10CMInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeICD10CMInferenceJobOutcome DescribeICD10CMInferenceJob(const Model::DescribeICD10CMInferenceJobRequest& request) const;


        /**
         * <p>Gets the properties associated with a protected health information (PHI)
         * detection job. Use this operation to get the status of a detection
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribePHIDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePHIDetectionJobOutcome DescribePHIDetectionJob(const Model::DescribePHIDetectionJobRequest& request) const;


        /**
         * <p>Gets the properties associated with an InferRxNorm job. Use this operation to
         * get the status of an inference job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeRxNormInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRxNormInferenceJobOutcome DescribeRxNormInferenceJob(const Model::DescribeRxNormInferenceJobRequest& request) const;


        /**
         * <p> Gets the properties associated with an InferSNOMEDCT job. Use this operation
         * to get the status of an inference job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DescribeSNOMEDCTInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSNOMEDCTInferenceJobOutcome DescribeSNOMEDCTInferenceJob(const Model::DescribeSNOMEDCTInferenceJobRequest& request) const;


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
         * <p> Inspects the clinical text for protected health information (PHI) entities
         * and returns the entity category, location, and confidence score for each entity.
         * Amazon Comprehend Medical only detects entities in English language
         * texts.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/DetectPHI">AWS
         * API Reference</a></p>
         */
        virtual Model::DetectPHIOutcome DetectPHI(const Model::DetectPHIRequest& request) const;


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
         * <p>InferRxNorm detects medications as entities listed in a patient record and
         * links to the normalized concept identifiers in the RxNorm database from the
         * National Library of Medicine. Amazon Comprehend Medical only detects medical
         * entities in English language texts. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferRxNorm">AWS
         * API Reference</a></p>
         */
        virtual Model::InferRxNormOutcome InferRxNorm(const Model::InferRxNormRequest& request) const;


        /**
         * <p> InferSNOMEDCT detects possible medical concepts as entities and links them
         * to codes from the Systematized Nomenclature of Medicine, Clinical Terms
         * (SNOMED-CT) ontology</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/InferSNOMEDCT">AWS
         * API Reference</a></p>
         */
        virtual Model::InferSNOMEDCTOutcome InferSNOMEDCT(const Model::InferSNOMEDCTRequest& request) const;


        /**
         * <p>Gets a list of medical entity detection jobs that you have
         * submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListEntitiesDetectionV2Jobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEntitiesDetectionV2JobsOutcome ListEntitiesDetectionV2Jobs(const Model::ListEntitiesDetectionV2JobsRequest& request) const;


        /**
         * <p>Gets a list of InferICD10CM jobs that you have submitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListICD10CMInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListICD10CMInferenceJobsOutcome ListICD10CMInferenceJobs(const Model::ListICD10CMInferenceJobsRequest& request) const;


        /**
         * <p>Gets a list of protected health information (PHI) detection jobs that you
         * have submitted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListPHIDetectionJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPHIDetectionJobsOutcome ListPHIDetectionJobs(const Model::ListPHIDetectionJobsRequest& request) const;


        /**
         * <p>Gets a list of InferRxNorm jobs that you have submitted.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListRxNormInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRxNormInferenceJobsOutcome ListRxNormInferenceJobs(const Model::ListRxNormInferenceJobsRequest& request) const;


        /**
         * <p> Gets a list of InferSNOMEDCT jobs a user has submitted. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/ListSNOMEDCTInferenceJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSNOMEDCTInferenceJobsOutcome ListSNOMEDCTInferenceJobs(const Model::ListSNOMEDCTInferenceJobsRequest& request) const;


        /**
         * <p>Starts an asynchronous medical entity detection job for a collection of
         * documents. Use the <code>DescribeEntitiesDetectionV2Job</code> operation to
         * track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         */
        virtual Model::StartEntitiesDetectionV2JobOutcome StartEntitiesDetectionV2Job(const Model::StartEntitiesDetectionV2JobRequest& request) const;


        /**
         * <p>Starts an asynchronous job to detect medical conditions and link them to the
         * ICD-10-CM ontology. Use the <code>DescribeICD10CMInferenceJob</code> operation
         * to track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartICD10CMInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartICD10CMInferenceJobOutcome StartICD10CMInferenceJob(const Model::StartICD10CMInferenceJobRequest& request) const;


        /**
         * <p>Starts an asynchronous job to detect protected health information (PHI). Use
         * the <code>DescribePHIDetectionJob</code> operation to track the status of a
         * job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartPHIDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartPHIDetectionJobOutcome StartPHIDetectionJob(const Model::StartPHIDetectionJobRequest& request) const;


        /**
         * <p>Starts an asynchronous job to detect medication entities and link them to the
         * RxNorm ontology. Use the <code>DescribeRxNormInferenceJob</code> operation to
         * track the status of a job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartRxNormInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRxNormInferenceJobOutcome StartRxNormInferenceJob(const Model::StartRxNormInferenceJobRequest& request) const;


        /**
         * <p> Starts an asynchronous job to detect medical concepts and link them to the
         * SNOMED-CT ontology. Use the DescribeSNOMEDCTInferenceJob operation to track the
         * status of a job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StartSNOMEDCTInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartSNOMEDCTInferenceJobOutcome StartSNOMEDCTInferenceJob(const Model::StartSNOMEDCTInferenceJobRequest& request) const;


        /**
         * <p>Stops a medical entities detection job in progress.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopEntitiesDetectionV2Job">AWS
         * API Reference</a></p>
         */
        virtual Model::StopEntitiesDetectionV2JobOutcome StopEntitiesDetectionV2Job(const Model::StopEntitiesDetectionV2JobRequest& request) const;


        /**
         * <p>Stops an InferICD10CM inference job in progress.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopICD10CMInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopICD10CMInferenceJobOutcome StopICD10CMInferenceJob(const Model::StopICD10CMInferenceJobRequest& request) const;


        /**
         * <p>Stops a protected health information (PHI) detection job in
         * progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopPHIDetectionJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopPHIDetectionJobOutcome StopPHIDetectionJob(const Model::StopPHIDetectionJobRequest& request) const;


        /**
         * <p>Stops an InferRxNorm inference job in progress.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopRxNormInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRxNormInferenceJobOutcome StopRxNormInferenceJob(const Model::StopRxNormInferenceJobRequest& request) const;


        /**
         * <p> Stops an InferSNOMEDCT inference job in progress. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/comprehendmedical-2018-10-30/StopSNOMEDCTInferenceJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StopSNOMEDCTInferenceJobOutcome StopSNOMEDCTInferenceJob(const Model::StopSNOMEDCTInferenceJobRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ComprehendMedicalEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ComprehendMedicalClientConfiguration& clientConfiguration);

      ComprehendMedicalClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ComprehendMedicalEndpointProviderBase> m_endpointProvider;
  };

} // namespace ComprehendMedical
} // namespace Aws
