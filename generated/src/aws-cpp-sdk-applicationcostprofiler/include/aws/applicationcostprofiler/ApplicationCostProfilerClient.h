/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/applicationcostprofiler/ApplicationCostProfiler_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/applicationcostprofiler/ApplicationCostProfilerServiceClientModel.h>

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
  class AWS_APPLICATIONCOSTPROFILER_API ApplicationCostProfilerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ApplicationCostProfilerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ApplicationCostProfilerClientConfiguration ClientConfigurationType;
      typedef ApplicationCostProfilerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationCostProfilerClient(const Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration& clientConfiguration = Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration(),
                                      std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationCostProfilerClient(const Aws::Auth::AWSCredentials& credentials,
                                      std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> endpointProvider = nullptr,
                                      const Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration& clientConfiguration = Aws::ApplicationCostProfiler::ApplicationCostProfilerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationCostProfilerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                      std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> endpointProvider = nullptr,
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

        /**
         * <p>Deletes the specified report definition in AWS Application Cost Profiler.
         * This stops the report from being generated.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/DeleteReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReportDefinitionOutcome DeleteReportDefinition(const Model::DeleteReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for DeleteReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteReportDefinitionRequestT = Model::DeleteReportDefinitionRequest>
        Model::DeleteReportDefinitionOutcomeCallable DeleteReportDefinitionCallable(const DeleteReportDefinitionRequestT& request) const
        {
            return SubmitCallable(&ApplicationCostProfilerClient::DeleteReportDefinition, request);
        }

        /**
         * An Async wrapper for DeleteReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteReportDefinitionRequestT = Model::DeleteReportDefinitionRequest>
        void DeleteReportDefinitionAsync(const DeleteReportDefinitionRequestT& request, const DeleteReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationCostProfilerClient::DeleteReportDefinition, request, handler, context);
        }

        /**
         * <p>Retrieves the definition of a report already configured in AWS Application
         * Cost Profiler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/GetReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReportDefinitionOutcome GetReportDefinition(const Model::GetReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for GetReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetReportDefinitionRequestT = Model::GetReportDefinitionRequest>
        Model::GetReportDefinitionOutcomeCallable GetReportDefinitionCallable(const GetReportDefinitionRequestT& request) const
        {
            return SubmitCallable(&ApplicationCostProfilerClient::GetReportDefinition, request);
        }

        /**
         * An Async wrapper for GetReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetReportDefinitionRequestT = Model::GetReportDefinitionRequest>
        void GetReportDefinitionAsync(const GetReportDefinitionRequestT& request, const GetReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationCostProfilerClient::GetReportDefinition, request, handler, context);
        }

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
         * A Callable wrapper for ImportApplicationUsage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportApplicationUsageRequestT = Model::ImportApplicationUsageRequest>
        Model::ImportApplicationUsageOutcomeCallable ImportApplicationUsageCallable(const ImportApplicationUsageRequestT& request) const
        {
            return SubmitCallable(&ApplicationCostProfilerClient::ImportApplicationUsage, request);
        }

        /**
         * An Async wrapper for ImportApplicationUsage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportApplicationUsageRequestT = Model::ImportApplicationUsageRequest>
        void ImportApplicationUsageAsync(const ImportApplicationUsageRequestT& request, const ImportApplicationUsageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationCostProfilerClient::ImportApplicationUsage, request, handler, context);
        }

        /**
         * <p>Retrieves a list of all reports and their configurations for your AWS
         * account.</p> <p>The maximum number of reports is one.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/ListReportDefinitions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReportDefinitionsOutcome ListReportDefinitions(const Model::ListReportDefinitionsRequest& request) const;

        /**
         * A Callable wrapper for ListReportDefinitions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListReportDefinitionsRequestT = Model::ListReportDefinitionsRequest>
        Model::ListReportDefinitionsOutcomeCallable ListReportDefinitionsCallable(const ListReportDefinitionsRequestT& request) const
        {
            return SubmitCallable(&ApplicationCostProfilerClient::ListReportDefinitions, request);
        }

        /**
         * An Async wrapper for ListReportDefinitions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListReportDefinitionsRequestT = Model::ListReportDefinitionsRequest>
        void ListReportDefinitionsAsync(const ListReportDefinitionsRequestT& request, const ListReportDefinitionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationCostProfilerClient::ListReportDefinitions, request, handler, context);
        }

        /**
         * <p>Creates the report definition for a report in Application Cost
         * Profiler.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/PutReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::PutReportDefinitionOutcome PutReportDefinition(const Model::PutReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for PutReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutReportDefinitionRequestT = Model::PutReportDefinitionRequest>
        Model::PutReportDefinitionOutcomeCallable PutReportDefinitionCallable(const PutReportDefinitionRequestT& request) const
        {
            return SubmitCallable(&ApplicationCostProfilerClient::PutReportDefinition, request);
        }

        /**
         * An Async wrapper for PutReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutReportDefinitionRequestT = Model::PutReportDefinitionRequest>
        void PutReportDefinitionAsync(const PutReportDefinitionRequestT& request, const PutReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationCostProfilerClient::PutReportDefinition, request, handler, context);
        }

        /**
         * <p>Updates existing report in AWS Application Cost Profiler.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/AWSApplicationCostProfiler-2020-09-10/UpdateReportDefinition">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateReportDefinitionOutcome UpdateReportDefinition(const Model::UpdateReportDefinitionRequest& request) const;

        /**
         * A Callable wrapper for UpdateReportDefinition that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateReportDefinitionRequestT = Model::UpdateReportDefinitionRequest>
        Model::UpdateReportDefinitionOutcomeCallable UpdateReportDefinitionCallable(const UpdateReportDefinitionRequestT& request) const
        {
            return SubmitCallable(&ApplicationCostProfilerClient::UpdateReportDefinition, request);
        }

        /**
         * An Async wrapper for UpdateReportDefinition that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateReportDefinitionRequestT = Model::UpdateReportDefinitionRequest>
        void UpdateReportDefinitionAsync(const UpdateReportDefinitionRequestT& request, const UpdateReportDefinitionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ApplicationCostProfilerClient::UpdateReportDefinition, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ApplicationCostProfilerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ApplicationCostProfilerClient>;
      void init(const ApplicationCostProfilerClientConfiguration& clientConfiguration);

      ApplicationCostProfilerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ApplicationCostProfilerEndpointProviderBase> m_endpointProvider;
  };

} // namespace ApplicationCostProfiler
} // namespace Aws
