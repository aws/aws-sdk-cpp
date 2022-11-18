/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/healthlake/HealthLake_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/HealthLakeServiceClientModel.h>
#include <aws/healthlake/HealthLakeLegacyAsyncMacros.h>

namespace Aws
{
namespace HealthLake
{
  /**
   * <p>Amazon HealthLake is a HIPAA eligibile service that allows customers to
   * store, transform, query, and analyze their FHIR-formatted data in a consistent
   * fashion in the cloud.</p>
   */
  class AWS_HEALTHLAKE_API HealthLakeClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration(),
                         std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG),
                         const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HealthLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<HealthLakeEndpointProviderBase> endpointProvider = Aws::MakeShared<HealthLakeEndpointProvider>(ALLOCATION_TAG),
                         const Aws::HealthLake::HealthLakeClientConfiguration& clientConfiguration = Aws::HealthLake::HealthLakeClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthLakeClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HealthLakeClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~HealthLakeClient();


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
         * <p>Creates a Data Store that can ingest and export FHIR formatted
         * data.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/CreateFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFHIRDatastoreOutcome CreateFHIRDatastore(const Model::CreateFHIRDatastoreRequest& request) const;


        /**
         * <p>Deletes a Data Store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DeleteFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFHIRDatastoreOutcome DeleteFHIRDatastore(const Model::DeleteFHIRDatastoreRequest& request) const;


        /**
         * <p>Gets the properties associated with the FHIR Data Store, including the Data
         * Store ID, Data Store ARN, Data Store name, Data Store status, created at, Data
         * Store type version, and Data Store endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRDatastore">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFHIRDatastoreOutcome DescribeFHIRDatastore(const Model::DescribeFHIRDatastoreRequest& request) const;


        /**
         * <p>Displays the properties of a FHIR export job, including the ID, ARN, name,
         * and the status of the job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFHIRExportJobOutcome DescribeFHIRExportJob(const Model::DescribeFHIRExportJobRequest& request) const;


        /**
         * <p>Displays the properties of a FHIR import job, including the ID, ARN, name,
         * and the status of the job. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/DescribeFHIRImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFHIRImportJobOutcome DescribeFHIRImportJob(const Model::DescribeFHIRImportJobRequest& request) const;


        /**
         * <p>Lists all FHIR Data Stores that are in the user’s account, regardless of Data
         * Store status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRDatastores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFHIRDatastoresOutcome ListFHIRDatastores(const Model::ListFHIRDatastoresRequest& request) const;


        /**
         * <p> Lists all FHIR export jobs associated with an account and their statuses.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRExportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFHIRExportJobsOutcome ListFHIRExportJobs(const Model::ListFHIRExportJobsRequest& request) const;


        /**
         * <p> Lists all FHIR import jobs associated with an account and their statuses.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListFHIRImportJobs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFHIRImportJobsOutcome ListFHIRImportJobs(const Model::ListFHIRImportJobsRequest& request) const;


        /**
         * <p> Returns a list of all existing tags associated with a Data Store.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Begins a FHIR export job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRExportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFHIRExportJobOutcome StartFHIRExportJob(const Model::StartFHIRExportJobRequest& request) const;


        /**
         * <p>Begins a FHIR Import job.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/StartFHIRImportJob">AWS
         * API Reference</a></p>
         */
        virtual Model::StartFHIRImportJobOutcome StartFHIRImportJob(const Model::StartFHIRImportJobRequest& request) const;


        /**
         * <p> Adds a user specifed key and value tag to a Data Store. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p> Removes tags from a Data Store. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/healthlake-2017-07-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<HealthLakeEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const HealthLakeClientConfiguration& clientConfiguration);

      HealthLakeClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<HealthLakeEndpointProviderBase> m_endpointProvider;
  };

} // namespace HealthLake
} // namespace Aws
