/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerServiceClientModel.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerLegacyAsyncMacros.h>

namespace Aws
{
namespace ApplicationCostProfiler
{
  /**
   * <p>This reference provides descriptions of the AWS Application Cost Profiler
   * API.</p> <p>The AWS Application Cost Profiler API provides programmatic access
   * to view, create, update, and delete application cost report definitions, as well
   * as to import your usage data into the Application Cost Profiler service.</p>
   * <p>For more information about using this service, see the <a
   * href="https://docs.aws.amazon.com/application-cost-profiler/latest/userguide/introduction.html">AWS
   * Application Cost Profiler User Guide</a>.</p>
   */
  class AWS_APPLICATIONCOSTPROFILER_API ApplicationCostProfilerClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationCostProfilerClient(const Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration& clientConfiguration = Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration(),
                                      std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationCostProfilerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationCostProfilerClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationCostProfilerEndpointProvider>(ALLOCATION_TAG),
                                      const Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration& clientConfiguration = Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationCostProfilerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationCostProfilerEndpointProvider>(ALLOCATION_TAG),
                                      const Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration& clientConfiguration = Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationCostProfilerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationCostProfilerClient(const Aws::Auth::AWSCredentials& credentials,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationCostProfilerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ApplicationCostProfilerClient();


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
         * <p>Deletes the specified report definition in AWS Application Cost Profiler.
         * This stops the report from being generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/DeleteReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportDefinitionOutcome DeleteReportDefinition(const Model::DeleteReportDefinitionRequest& request) const;


        /**
         * <p>Retrieves the definition of a report already configured in AWS Application
         * Cost Profiler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/GetReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReportDefinitionOutcome GetReportDefinition(const Model::GetReportDefinitionRequest& request) const;


        /**
         * <p>Ingests application usage data from Amazon Simple Storage Service (Amazon
         * S3).</p> <p>The data must already exist in the S3 location. As part of the
         * action, AWS Application Cost Profiler copies the object from your S3 bucket to
         * an S3 bucket owned by Amazon for processing asynchronously.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/ImportApplicationUsage">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportApplicationUsageOutcome ImportApplicationUsage(const Model::ImportApplicationUsageRequest& request) const;


        /**
         * <p>Retrieves a list of all reports and their configurations for your AWS
         * account.</p> <p>The maximum number of reports is one.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/ListReportDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportDefinitionsOutcome ListReportDefinitions(const Model::ListReportDefinitionsRequest& request) const;


        /**
         * <p>Creates the report definition for a report in Application Cost
         * Profiler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/PutReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutReportDefinitionOutcome PutReportDefinition(const Model::PutReportDefinitionRequest& request) const;


        /**
         * <p>Updates existing report in AWS Application Cost Profiler.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/UpdateReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReportDefinitionOutcome UpdateReportDefinition(const Model::UpdateReportDefinitionRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ApplicationCostProfilerEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ApplicationCostProfilerClientConfiguration& clientConfiguration);

      ApplicationCostProfilerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> m_endpointProvider;
  };

} // namespace ApplicationCostProfiler
} // namespace Aws
