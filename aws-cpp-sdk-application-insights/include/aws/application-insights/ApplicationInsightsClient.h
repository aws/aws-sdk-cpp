/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-insights/ApplicationInsights_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/application-insights/ApplicationInsightsServiceClientModel.h>
#include <aws/application-insights/ApplicationInsightsLegacyAsyncMacros.h>

namespace Aws
{
namespace ApplicationInsights
{
  /**
   * <fullname>Amazon CloudWatch Application Insights</fullname> <p> Amazon
   * CloudWatch Application Insights is a service that helps you detect common
   * problems with your applications. It enables you to pinpoint the source of issues
   * in your applications (built with technologies such as Microsoft IIS, .NET, and
   * Microsoft SQL Server), by providing key insights into detected problems.</p>
   * <p>After you onboard your application, CloudWatch Application Insights
   * identifies, recommends, and sets up metrics and logs. It continuously analyzes
   * and correlates your metrics and logs for unusual behavior to surface actionable
   * problems with your application. For example, if your application is slow and
   * unresponsive and leading to HTTP 500 errors in your Application Load Balancer
   * (ALB), Application Insights informs you that a memory pressure problem with your
   * SQL Server database is occurring. It bases this analysis on impactful metrics
   * and log errors. </p>
   */
  class AWS_APPLICATIONINSIGHTS_API ApplicationInsightsClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration = Aws::ApplicationInsights::ApplicationInsightsClientConfiguration(),
                                  std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::Auth::AWSCredentials& credentials,
                                  std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG),
                                  const Aws::ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration = Aws::ApplicationInsights::ApplicationInsightsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationInsightsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  std::shared_ptr<ApplicationInsightsEndpointProviderBase> endpointProvider = Aws::MakeShared<ApplicationInsightsEndpointProvider>(ALLOCATION_TAG),
                                  const Aws::ApplicationInsights::ApplicationInsightsClientConfiguration& clientConfiguration = Aws::ApplicationInsights::ApplicationInsightsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ApplicationInsightsClient(const Aws::Auth::AWSCredentials& credentials,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ApplicationInsightsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ApplicationInsightsClient();


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
         * <p>Adds an application that is created from a resource group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;


        /**
         * <p>Creates a custom component by grouping similar standalone instances to
         * monitor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateComponentOutcome CreateComponent(const Model::CreateComponentRequest& request) const;


        /**
         * <p>Adds an log pattern to a <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/CreateLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLogPatternOutcome CreateLogPattern(const Model::CreateLogPatternRequest& request) const;


        /**
         * <p>Removes the specified application from monitoring. Does not delete the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;


        /**
         * <p>Ungroups a custom component. When you ungroup custom components, all
         * applicable monitors that are set up for the component are removed and the
         * instances revert to their standalone status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteComponentOutcome DeleteComponent(const Model::DeleteComponentRequest& request) const;


        /**
         * <p>Removes the specified log pattern from a
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DeleteLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLogPatternOutcome DeleteLogPattern(const Model::DeleteLogPatternRequest& request) const;


        /**
         * <p>Describes the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;


        /**
         * <p>Describes a component and lists the resources that are grouped together in a
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentOutcome DescribeComponent(const Model::DescribeComponentRequest& request) const;


        /**
         * <p>Describes the monitoring configuration of the component.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentConfigurationOutcome DescribeComponentConfiguration(const Model::DescribeComponentConfigurationRequest& request) const;


        /**
         * <p>Describes the recommended monitoring configuration of the
         * component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeComponentConfigurationRecommendation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComponentConfigurationRecommendationOutcome DescribeComponentConfigurationRecommendation(const Model::DescribeComponentConfigurationRecommendationRequest& request) const;


        /**
         * <p>Describe a specific log pattern from a
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeLogPatternOutcome DescribeLogPattern(const Model::DescribeLogPatternRequest& request) const;


        /**
         * <p>Describes an anomaly or error with the application.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeObservation">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeObservationOutcome DescribeObservation(const Model::DescribeObservationRequest& request) const;


        /**
         * <p>Describes an application problem.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblem">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProblemOutcome DescribeProblem(const Model::DescribeProblemRequest& request) const;


        /**
         * <p>Describes the anomalies or errors associated with the problem.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/DescribeProblemObservations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProblemObservationsOutcome DescribeProblemObservations(const Model::DescribeProblemObservationsRequest& request) const;


        /**
         * <p>Lists the IDs of the applications that you are monitoring. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;


        /**
         * <p>Lists the auto-grouped, standalone, and custom components of the
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListComponents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListComponentsOutcome ListComponents(const Model::ListComponentsRequest& request) const;


        /**
         * <p> Lists the INFO, WARN, and ERROR events for periodic configuration updates
         * performed by Application Insights. Examples of events represented are: </p> <ul>
         * <li> <p>INFO: creating a new alarm or updating an alarm threshold.</p> </li>
         * <li> <p>WARN: alarm not created due to insufficient data points used to predict
         * thresholds.</p> </li> <li> <p>ERROR: alarm not created due to permission errors
         * or exceeding quotas. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListConfigurationHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConfigurationHistoryOutcome ListConfigurationHistory(const Model::ListConfigurationHistoryRequest& request) const;


        /**
         * <p>Lists the log pattern sets in the specific application.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListLogPatternSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogPatternSetsOutcome ListLogPatternSets(const Model::ListLogPatternSetsRequest& request) const;


        /**
         * <p>Lists the log patterns in the specific log
         * <code>LogPatternSet</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListLogPatterns">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLogPatternsOutcome ListLogPatterns(const Model::ListLogPatternsRequest& request) const;


        /**
         * <p>Lists the problems with your application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListProblems">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProblemsOutcome ListProblems(const Model::ListProblemsRequest& request) const;


        /**
         * <p>Retrieve a list of the tags (keys and values) that are associated with a
         * specified application. A <i>tag</i> is a label that you optionally define and
         * associate with an application. Each tag consists of a required <i>tag key</i>
         * and an optional associated <i>tag value</i>. A tag key is a general label that
         * acts as a category for more specific tag values. A tag value acts as a
         * descriptor within a tag key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Add one or more tags (keys and values) to a specified application. A
         * <i>tag</i> is a label that you optionally define and associate with an
         * application. Tags can help you categorize and manage application in different
         * ways, such as by purpose, owner, environment, or other criteria. </p> <p>Each
         * tag consists of a required <i>tag key</i> and an associated <i>tag value</i>,
         * both of which you define. A tag key is a general label that acts as a category
         * for more specific tag values. A tag value acts as a descriptor within a tag
         * key.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Remove one or more tags (keys and values) from a specified
         * application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;


        /**
         * <p>Updates the application.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;


        /**
         * <p>Updates the custom component name and/or the list of resources that make up
         * the component.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponent">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentOutcome UpdateComponent(const Model::UpdateComponentRequest& request) const;


        /**
         * <p>Updates the monitoring configurations for the component. The configuration
         * input parameter is an escaped JSON of the configuration and should match the
         * schema of what is returned by
         * <code>DescribeComponentConfigurationRecommendation</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateComponentConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateComponentConfigurationOutcome UpdateComponentConfiguration(const Model::UpdateComponentConfigurationRequest& request) const;


        /**
         * <p>Adds a log pattern to a <code>LogPatternSet</code>.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/application-insights-2018-11-25/UpdateLogPattern">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLogPatternOutcome UpdateLogPattern(const Model::UpdateLogPatternRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ApplicationInsightsEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ApplicationInsightsClientConfiguration& clientConfiguration);

      ApplicationInsightsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ApplicationInsightsEndpointProviderBase> m_endpointProvider;
  };

} // namespace ApplicationInsights
} // namespace Aws
