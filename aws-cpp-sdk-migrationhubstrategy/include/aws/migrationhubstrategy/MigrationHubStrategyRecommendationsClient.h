/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendations_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsServiceClientModel.h>
#include <aws/migrationhubstrategy/MigrationHubStrategyRecommendationsLegacyAsyncMacros.h>

namespace Aws
{
namespace MigrationHubStrategyRecommendations
{
  /**
   * <p><fullname>Migration Hub Strategy Recommendations</fullname></p> <pre><code>
   * &lt;p&gt;This API reference provides descriptions, syntax, and other details
   * about each of the actions and data types for Migration Hub Strategy
   * Recommendations (Strategy Recommendations). The topic for each action shows the
   * API request parameters and the response. Alternatively, you can use one of the
   * AWS SDKs to access an API that is tailored to the programming language or
   * platform that you're using. For more information, see &lt;a
   * href=&quot;http://aws.amazon.com/tools/#SDKs&quot;&gt;AWS
   * SDKs&lt;/a&gt;.&lt;/p&gt; </code></pre>
   */
  class AWS_MIGRATIONHUBSTRATEGYRECOMMENDATIONS_API MigrationHubStrategyRecommendationsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration = Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration(),
                                                  std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::Auth::AWSCredentials& credentials,
                                                  std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG),
                                                  const Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration = Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubStrategyRecommendationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                                  std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> endpointProvider = Aws::MakeShared<MigrationHubStrategyRecommendationsEndpointProvider>(ALLOCATION_TAG),
                                                  const Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration = Aws::MigrationHubStrategyRecommendations::MigrationHubStrategyRecommendationsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        MigrationHubStrategyRecommendationsClient(const Aws::Auth::AWSCredentials& credentials,
                                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        MigrationHubStrategyRecommendationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~MigrationHubStrategyRecommendationsClient();


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
         * <p> Retrieves details about an application component. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetApplicationComponentDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationComponentDetailsOutcome GetApplicationComponentDetails(const Model::GetApplicationComponentDetailsRequest& request) const;


        /**
         * <p> Retrieves a list of all the recommended strategies and tools for an
         * application component running on a server. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetApplicationComponentStrategies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetApplicationComponentStrategiesOutcome GetApplicationComponentStrategies(const Model::GetApplicationComponentStrategiesRequest& request) const;


        /**
         * <p> Retrieves the status of an on-going assessment. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAssessmentOutcome GetAssessment(const Model::GetAssessmentRequest& request) const;


        /**
         * <p> Retrieves the details about a specific import task. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetImportFileTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetImportFileTaskOutcome GetImportFileTask(const Model::GetImportFileTaskRequest& request) const;


        /**
         * <p> Retrieves your migration and modernization preferences. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetPortfolioPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortfolioPreferencesOutcome GetPortfolioPreferences(const Model::GetPortfolioPreferencesRequest& request) const;


        /**
         * <p> Retrieves overall summary including the number of servers to rehost and the
         * overall number of anti-patterns. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetPortfolioSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPortfolioSummaryOutcome GetPortfolioSummary(const Model::GetPortfolioSummaryRequest& request) const;


        /**
         * <p> Retrieves detailed information about the specified recommendation report.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetRecommendationReportDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRecommendationReportDetailsOutcome GetRecommendationReportDetails(const Model::GetRecommendationReportDetailsRequest& request) const;


        /**
         * <p> Retrieves detailed information about a specified server. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetServerDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServerDetailsOutcome GetServerDetails(const Model::GetServerDetailsRequest& request) const;


        /**
         * <p> Retrieves recommended strategies and tools for the specified server.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/GetServerStrategies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetServerStrategiesOutcome GetServerStrategies(const Model::GetServerStrategiesRequest& request) const;


        /**
         * <p> Retrieves a list of all the application components (processes).
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListApplicationComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationComponentsOutcome ListApplicationComponents(const Model::ListApplicationComponentsRequest& request) const;


        /**
         * <p> Retrieves a list of all the installed collectors. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListCollectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCollectorsOutcome ListCollectors(const Model::ListCollectorsRequest& request) const;


        /**
         * <p> Retrieves a list of all the imports performed. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListImportFileTask">AWS
         * API Reference</a></p>
         */
        virtual Model::ListImportFileTaskOutcome ListImportFileTask(const Model::ListImportFileTaskRequest& request) const;


        /**
         * <p> Returns a list of all the servers. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/ListServers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListServersOutcome ListServers(const Model::ListServersRequest& request) const;


        /**
         * <p> Saves the specified migration and modernization preferences. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/PutPortfolioPreferences">AWS
         * API Reference</a></p>
         */
        virtual Model::PutPortfolioPreferencesOutcome PutPortfolioPreferences(const Model::PutPortfolioPreferencesRequest& request) const;


        /**
         * <p> Starts the assessment of an on-premises environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StartAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAssessmentOutcome StartAssessment(const Model::StartAssessmentRequest& request) const;


        /**
         * <p> Starts a file import. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StartImportFileTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartImportFileTaskOutcome StartImportFileTask(const Model::StartImportFileTaskRequest& request) const;


        /**
         * <p> Starts generating a recommendation report. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StartRecommendationReportGeneration">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRecommendationReportGenerationOutcome StartRecommendationReportGeneration(const Model::StartRecommendationReportGenerationRequest& request) const;


        /**
         * <p> Stops the assessment of an on-premises environment. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/StopAssessment">AWS
         * API Reference</a></p>
         */
        virtual Model::StopAssessmentOutcome StopAssessment(const Model::StopAssessmentRequest& request) const;


        /**
         * <p> Updates the configuration of an application component. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/UpdateApplicationComponentConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationComponentConfigOutcome UpdateApplicationComponentConfig(const Model::UpdateApplicationComponentConfigRequest& request) const;


        /**
         * <p> Updates the configuration of the specified server. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhubstrategy-2020-02-19/UpdateServerConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServerConfigOutcome UpdateServerConfig(const Model::UpdateServerConfigRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const MigrationHubStrategyRecommendationsClientConfiguration& clientConfiguration);

      MigrationHubStrategyRecommendationsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<MigrationHubStrategyRecommendationsEndpointProviderBase> m_endpointProvider;
  };

} // namespace MigrationHubStrategyRecommendations
} // namespace Aws
