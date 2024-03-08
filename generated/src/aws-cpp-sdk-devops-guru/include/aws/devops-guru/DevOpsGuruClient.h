/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-guru/DevOpsGuruServiceClientModel.h>

namespace Aws
{
namespace DevOpsGuru
{
  /**
   * <p> Amazon DevOps Guru is a fully managed service that helps you identify
   * anomalous behavior in business critical operational applications. You specify
   * the Amazon Web Services resources that you want DevOps Guru to cover, then the
   * Amazon CloudWatch metrics and Amazon Web Services CloudTrail events related to
   * those resources are analyzed. When anomalous behavior is detected, DevOps Guru
   * creates an <i>insight</i> that includes recommendations, related events, and
   * related metrics that can help you improve your operational applications. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html">What
   * is Amazon DevOps Guru</a>. </p> <p> You can specify 1 or 2 Amazon Simple
   * Notification Service topics so you are notified every time a new insight is
   * created. You can also enable DevOps Guru to generate an OpsItem in Amazon Web
   * Services Systems Manager for each insight to help you manage and track your work
   * addressing insights. </p> <p> To learn about the DevOps Guru workflow, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html#how-it-works">How
   * DevOps Guru works</a>. To learn about DevOps Guru concepts, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/concepts.html">Concepts
   * in DevOps Guru</a>. </p>
   */
  class AWS_DEVOPSGURU_API DevOpsGuruClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<DevOpsGuruClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef DevOpsGuruClientConfiguration ClientConfigurationType;
      typedef DevOpsGuruEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::DevOpsGuru::DevOpsGuruClientConfiguration& clientConfiguration = Aws::DevOpsGuru::DevOpsGuruClientConfiguration(),
                         std::shared_ptr<DevOpsGuruEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::Auth::AWSCredentials& credentials,
                         std::shared_ptr<DevOpsGuruEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::DevOpsGuru::DevOpsGuruClientConfiguration& clientConfiguration = Aws::DevOpsGuru::DevOpsGuruClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DevOpsGuruClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         std::shared_ptr<DevOpsGuruEndpointProviderBase> endpointProvider = nullptr,
                         const Aws::DevOpsGuru::DevOpsGuruClientConfiguration& clientConfiguration = Aws::DevOpsGuru::DevOpsGuruClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::Auth::AWSCredentials& credentials,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DevOpsGuruClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                         const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~DevOpsGuruClient();

        /**
         * <p> Adds a notification channel to DevOps Guru. A notification channel is used
         * to notify you about important DevOps Guru events, such as when an insight is
         * generated. </p> <p>If you use an Amazon SNS topic in another account, you must
         * attach a policy to it that grants DevOps Guru permission to send it
         * notifications. DevOps Guru adds the required policy on your behalf to send
         * notifications using Amazon SNS in your account. DevOps Guru only supports
         * standard SNS topics. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
         * for Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic that is
         * encrypted by an Amazon Web Services Key Management Service customer-managed key
         * (CMK), then you must add permissions to the CMK. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
         * for Amazon Web Services KMS–encrypted Amazon SNS topics</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AddNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::AddNotificationChannelOutcome AddNotificationChannel(const Model::AddNotificationChannelRequest& request) const;

        /**
         * A Callable wrapper for AddNotificationChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddNotificationChannelRequestT = Model::AddNotificationChannelRequest>
        Model::AddNotificationChannelOutcomeCallable AddNotificationChannelCallable(const AddNotificationChannelRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::AddNotificationChannel, request);
        }

        /**
         * An Async wrapper for AddNotificationChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddNotificationChannelRequestT = Model::AddNotificationChannelRequest>
        void AddNotificationChannelAsync(const AddNotificationChannelRequestT& request, const AddNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::AddNotificationChannel, request, handler, context);
        }

        /**
         * <p>Deletes the insight along with the associated anomalies, events and
         * recommendations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DeleteInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInsightOutcome DeleteInsight(const Model::DeleteInsightRequest& request) const;

        /**
         * A Callable wrapper for DeleteInsight that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInsightRequestT = Model::DeleteInsightRequest>
        Model::DeleteInsightOutcomeCallable DeleteInsightCallable(const DeleteInsightRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DeleteInsight, request);
        }

        /**
         * An Async wrapper for DeleteInsight that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInsightRequestT = Model::DeleteInsightRequest>
        void DeleteInsightAsync(const DeleteInsightRequestT& request, const DeleteInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DeleteInsight, request, handler, context);
        }

        /**
         * <p> Returns the number of open reactive insights, the number of open proactive
         * insights, and the number of metrics analyzed in your Amazon Web Services
         * account. Use these numbers to gauge the health of operations in your Amazon Web
         * Services account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAccountHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountHealthOutcome DescribeAccountHealth(const Model::DescribeAccountHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountHealthRequestT = Model::DescribeAccountHealthRequest>
        Model::DescribeAccountHealthOutcomeCallable DescribeAccountHealthCallable(const DescribeAccountHealthRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeAccountHealth, request);
        }

        /**
         * An Async wrapper for DescribeAccountHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountHealthRequestT = Model::DescribeAccountHealthRequest>
        void DescribeAccountHealthAsync(const DescribeAccountHealthRequestT& request, const DescribeAccountHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeAccountHealth, request, handler, context);
        }

        /**
         * <p> For the time range passed in, returns the number of open reactive insight
         * that were created, the number of open proactive insights that were created, and
         * the Mean Time to Recover (MTTR) for all closed reactive insights. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAccountOverview">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountOverviewOutcome DescribeAccountOverview(const Model::DescribeAccountOverviewRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountOverview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAccountOverviewRequestT = Model::DescribeAccountOverviewRequest>
        Model::DescribeAccountOverviewOutcomeCallable DescribeAccountOverviewCallable(const DescribeAccountOverviewRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeAccountOverview, request);
        }

        /**
         * An Async wrapper for DescribeAccountOverview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountOverviewRequestT = Model::DescribeAccountOverviewRequest>
        void DescribeAccountOverviewAsync(const DescribeAccountOverviewRequestT& request, const DescribeAccountOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeAccountOverview, request, handler, context);
        }

        /**
         * <p> Returns details about an anomaly that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAnomaly">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnomalyOutcome DescribeAnomaly(const Model::DescribeAnomalyRequest& request) const;

        /**
         * A Callable wrapper for DescribeAnomaly that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAnomalyRequestT = Model::DescribeAnomalyRequest>
        Model::DescribeAnomalyOutcomeCallable DescribeAnomalyCallable(const DescribeAnomalyRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeAnomaly, request);
        }

        /**
         * An Async wrapper for DescribeAnomaly that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAnomalyRequestT = Model::DescribeAnomalyRequest>
        void DescribeAnomalyAsync(const DescribeAnomalyRequestT& request, const DescribeAnomalyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeAnomaly, request, handler, context);
        }

        /**
         * <p>Returns the integration status of services that are integrated with DevOps
         * Guru as Consumer via EventBridge. The one service that can be integrated with
         * DevOps Guru is Amazon CodeGuru Profiler, which can produce proactive
         * recommendations which can be stored and viewed in DevOps Guru.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeEventSourcesConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventSourcesConfigOutcome DescribeEventSourcesConfig(const Model::DescribeEventSourcesConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventSourcesConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEventSourcesConfigRequestT = Model::DescribeEventSourcesConfigRequest>
        Model::DescribeEventSourcesConfigOutcomeCallable DescribeEventSourcesConfigCallable(const DescribeEventSourcesConfigRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeEventSourcesConfig, request);
        }

        /**
         * An Async wrapper for DescribeEventSourcesConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventSourcesConfigRequestT = Model::DescribeEventSourcesConfigRequest>
        void DescribeEventSourcesConfigAsync(const DescribeEventSourcesConfigRequestT& request, const DescribeEventSourcesConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeEventSourcesConfig, request, handler, context);
        }

        /**
         * <p> Returns the most recent feedback submitted in the current Amazon Web
         * Services account and Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeedbackOutcome DescribeFeedback(const Model::DescribeFeedbackRequest& request) const;

        /**
         * A Callable wrapper for DescribeFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFeedbackRequestT = Model::DescribeFeedbackRequest>
        Model::DescribeFeedbackOutcomeCallable DescribeFeedbackCallable(const DescribeFeedbackRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeFeedback, request);
        }

        /**
         * An Async wrapper for DescribeFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFeedbackRequestT = Model::DescribeFeedbackRequest>
        void DescribeFeedbackAsync(const DescribeFeedbackRequestT& request, const DescribeFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeFeedback, request, handler, context);
        }

        /**
         * <p> Returns details about an insight that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInsightOutcome DescribeInsight(const Model::DescribeInsightRequest& request) const;

        /**
         * A Callable wrapper for DescribeInsight that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeInsightRequestT = Model::DescribeInsightRequest>
        Model::DescribeInsightOutcomeCallable DescribeInsightCallable(const DescribeInsightRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeInsight, request);
        }

        /**
         * An Async wrapper for DescribeInsight that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeInsightRequestT = Model::DescribeInsightRequest>
        void DescribeInsightAsync(const DescribeInsightRequestT& request, const DescribeInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeInsight, request, handler, context);
        }

        /**
         * <p>Returns active insights, predictive insights, and resource hours analyzed in
         * last hour.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeOrganizationHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationHealthOutcome DescribeOrganizationHealth(const Model::DescribeOrganizationHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationHealthRequestT = Model::DescribeOrganizationHealthRequest>
        Model::DescribeOrganizationHealthOutcomeCallable DescribeOrganizationHealthCallable(const DescribeOrganizationHealthRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeOrganizationHealth, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationHealthRequestT = Model::DescribeOrganizationHealthRequest>
        void DescribeOrganizationHealthAsync(const DescribeOrganizationHealthRequestT& request, const DescribeOrganizationHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeOrganizationHealth, request, handler, context);
        }

        /**
         * <p>Returns an overview of your organization's history based on the specified
         * time range. The overview includes the total reactive and proactive
         * insights.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeOrganizationOverview">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationOverviewOutcome DescribeOrganizationOverview(const Model::DescribeOrganizationOverviewRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationOverview that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationOverviewRequestT = Model::DescribeOrganizationOverviewRequest>
        Model::DescribeOrganizationOverviewOutcomeCallable DescribeOrganizationOverviewCallable(const DescribeOrganizationOverviewRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeOrganizationOverview, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationOverview that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationOverviewRequestT = Model::DescribeOrganizationOverviewRequest>
        void DescribeOrganizationOverviewAsync(const DescribeOrganizationOverviewRequestT& request, const DescribeOrganizationOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeOrganizationOverview, request, handler, context);
        }

        /**
         * <p>Provides an overview of your system's health. If additional member accounts
         * are part of your organization, you can filter those accounts using the
         * <code>AccountIds</code> field.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeOrganizationResourceCollectionHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationResourceCollectionHealthOutcome DescribeOrganizationResourceCollectionHealth(const Model::DescribeOrganizationResourceCollectionHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationResourceCollectionHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationResourceCollectionHealthRequestT = Model::DescribeOrganizationResourceCollectionHealthRequest>
        Model::DescribeOrganizationResourceCollectionHealthOutcomeCallable DescribeOrganizationResourceCollectionHealthCallable(const DescribeOrganizationResourceCollectionHealthRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeOrganizationResourceCollectionHealth, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationResourceCollectionHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationResourceCollectionHealthRequestT = Model::DescribeOrganizationResourceCollectionHealthRequest>
        void DescribeOrganizationResourceCollectionHealthAsync(const DescribeOrganizationResourceCollectionHealthRequestT& request, const DescribeOrganizationResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeOrganizationResourceCollectionHealth, request, handler, context);
        }

        /**
         * <p> Returns the number of open proactive insights, open reactive insights, and
         * the Mean Time to Recover (MTTR) for all closed insights in resource collections
         * in your account. You specify the type of Amazon Web Services resources
         * collection. The two types of Amazon Web Services resource collections supported
         * are Amazon Web Services CloudFormation stacks and Amazon Web Services resources
         * that contain the same Amazon Web Services tag. DevOps Guru can be configured to
         * analyze the Amazon Web Services resources that are defined in the stacks or that
         * are tagged using the same tag <i>key</i>. You can specify up to 500 Amazon Web
         * Services CloudFormation stacks. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeResourceCollectionHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceCollectionHealthOutcome DescribeResourceCollectionHealth(const Model::DescribeResourceCollectionHealthRequest& request) const;

        /**
         * A Callable wrapper for DescribeResourceCollectionHealth that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeResourceCollectionHealthRequestT = Model::DescribeResourceCollectionHealthRequest>
        Model::DescribeResourceCollectionHealthOutcomeCallable DescribeResourceCollectionHealthCallable(const DescribeResourceCollectionHealthRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeResourceCollectionHealth, request);
        }

        /**
         * An Async wrapper for DescribeResourceCollectionHealth that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeResourceCollectionHealthRequestT = Model::DescribeResourceCollectionHealthRequest>
        void DescribeResourceCollectionHealthAsync(const DescribeResourceCollectionHealthRequestT& request, const DescribeResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeResourceCollectionHealth, request, handler, context);
        }

        /**
         * <p> Returns the integration status of services that are integrated with DevOps
         * Guru. The one service that can be integrated with DevOps Guru is Amazon Web
         * Services Systems Manager, which can be used to create an OpsItem for each
         * generated insight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeServiceIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceIntegrationOutcome DescribeServiceIntegration(const Model::DescribeServiceIntegrationRequest& request) const;

        /**
         * A Callable wrapper for DescribeServiceIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeServiceIntegrationRequestT = Model::DescribeServiceIntegrationRequest>
        Model::DescribeServiceIntegrationOutcomeCallable DescribeServiceIntegrationCallable(const DescribeServiceIntegrationRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::DescribeServiceIntegration, request);
        }

        /**
         * An Async wrapper for DescribeServiceIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeServiceIntegrationRequestT = Model::DescribeServiceIntegrationRequest>
        void DescribeServiceIntegrationAsync(const DescribeServiceIntegrationRequestT& request, const DescribeServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::DescribeServiceIntegration, request, handler, context);
        }

        /**
         * <p>Returns an estimate of the monthly cost for DevOps Guru to analyze your
         * Amazon Web Services resources. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate
         * your Amazon DevOps Guru costs</a> and <a
         * href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
         * pricing</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/GetCostEstimation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostEstimationOutcome GetCostEstimation(const Model::GetCostEstimationRequest& request) const;

        /**
         * A Callable wrapper for GetCostEstimation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCostEstimationRequestT = Model::GetCostEstimationRequest>
        Model::GetCostEstimationOutcomeCallable GetCostEstimationCallable(const GetCostEstimationRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::GetCostEstimation, request);
        }

        /**
         * An Async wrapper for GetCostEstimation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCostEstimationRequestT = Model::GetCostEstimationRequest>
        void GetCostEstimationAsync(const GetCostEstimationRequestT& request, const GetCostEstimationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::GetCostEstimation, request, handler, context);
        }

        /**
         * <p> Returns lists Amazon Web Services resources that are of the specified
         * resource collection type. The two types of Amazon Web Services resource
         * collections supported are Amazon Web Services CloudFormation stacks and Amazon
         * Web Services resources that contain the same Amazon Web Services tag. DevOps
         * Guru can be configured to analyze the Amazon Web Services resources that are
         * defined in the stacks or that are tagged using the same tag <i>key</i>. You can
         * specify up to 500 Amazon Web Services CloudFormation stacks. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/GetResourceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceCollectionOutcome GetResourceCollection(const Model::GetResourceCollectionRequest& request) const;

        /**
         * A Callable wrapper for GetResourceCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceCollectionRequestT = Model::GetResourceCollectionRequest>
        Model::GetResourceCollectionOutcomeCallable GetResourceCollectionCallable(const GetResourceCollectionRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::GetResourceCollection, request);
        }

        /**
         * An Async wrapper for GetResourceCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceCollectionRequestT = Model::GetResourceCollectionRequest>
        void GetResourceCollectionAsync(const GetResourceCollectionRequestT& request, const GetResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::GetResourceCollection, request, handler, context);
        }

        /**
         * <p> Returns a list of the anomalies that belong to an insight that you specify
         * using its ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListAnomaliesForInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomaliesForInsightOutcome ListAnomaliesForInsight(const Model::ListAnomaliesForInsightRequest& request) const;

        /**
         * A Callable wrapper for ListAnomaliesForInsight that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnomaliesForInsightRequestT = Model::ListAnomaliesForInsightRequest>
        Model::ListAnomaliesForInsightOutcomeCallable ListAnomaliesForInsightCallable(const ListAnomaliesForInsightRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::ListAnomaliesForInsight, request);
        }

        /**
         * An Async wrapper for ListAnomaliesForInsight that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnomaliesForInsightRequestT = Model::ListAnomaliesForInsightRequest>
        void ListAnomaliesForInsightAsync(const ListAnomaliesForInsightRequestT& request, const ListAnomaliesForInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::ListAnomaliesForInsight, request, handler, context);
        }

        /**
         * <p> Returns the list of log groups that contain log anomalies. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListAnomalousLogGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomalousLogGroupsOutcome ListAnomalousLogGroups(const Model::ListAnomalousLogGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListAnomalousLogGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAnomalousLogGroupsRequestT = Model::ListAnomalousLogGroupsRequest>
        Model::ListAnomalousLogGroupsOutcomeCallable ListAnomalousLogGroupsCallable(const ListAnomalousLogGroupsRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::ListAnomalousLogGroups, request);
        }

        /**
         * An Async wrapper for ListAnomalousLogGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAnomalousLogGroupsRequestT = Model::ListAnomalousLogGroupsRequest>
        void ListAnomalousLogGroupsAsync(const ListAnomalousLogGroupsRequestT& request, const ListAnomalousLogGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::ListAnomalousLogGroups, request, handler, context);
        }

        /**
         * <p> Returns a list of the events emitted by the resources that are evaluated by
         * DevOps Guru. You can use filters to specify which events are returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventsOutcome ListEvents(const Model::ListEventsRequest& request) const;

        /**
         * A Callable wrapper for ListEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventsRequestT = Model::ListEventsRequest>
        Model::ListEventsOutcomeCallable ListEventsCallable(const ListEventsRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::ListEvents, request);
        }

        /**
         * An Async wrapper for ListEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventsRequestT = Model::ListEventsRequest>
        void ListEventsAsync(const ListEventsRequestT& request, const ListEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::ListEvents, request, handler, context);
        }

        /**
         * <p> Returns a list of insights in your Amazon Web Services account. You can
         * specify which insights are returned by their start time and status
         * (<code>ONGOING</code>, <code>CLOSED</code>, or <code>ANY</code>). </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInsightsOutcome ListInsights(const Model::ListInsightsRequest& request) const;

        /**
         * A Callable wrapper for ListInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListInsightsRequestT = Model::ListInsightsRequest>
        Model::ListInsightsOutcomeCallable ListInsightsCallable(const ListInsightsRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::ListInsights, request);
        }

        /**
         * An Async wrapper for ListInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListInsightsRequestT = Model::ListInsightsRequest>
        void ListInsightsAsync(const ListInsightsRequestT& request, const ListInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::ListInsights, request, handler, context);
        }

        /**
         * <p> Returns the list of all log groups that are being monitored and tagged by
         * DevOps Guru. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListMonitoredResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMonitoredResourcesOutcome ListMonitoredResources(const Model::ListMonitoredResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListMonitoredResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListMonitoredResourcesRequestT = Model::ListMonitoredResourcesRequest>
        Model::ListMonitoredResourcesOutcomeCallable ListMonitoredResourcesCallable(const ListMonitoredResourcesRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::ListMonitoredResources, request);
        }

        /**
         * An Async wrapper for ListMonitoredResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMonitoredResourcesRequestT = Model::ListMonitoredResourcesRequest>
        void ListMonitoredResourcesAsync(const ListMonitoredResourcesRequestT& request, const ListMonitoredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::ListMonitoredResources, request, handler, context);
        }

        /**
         * <p> Returns a list of notification channels configured for DevOps Guru. Each
         * notification channel is used to notify you when DevOps Guru generates an insight
         * that contains information about how to improve your operations. The one
         * supported notification channel is Amazon Simple Notification Service (Amazon
         * SNS). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListNotificationChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationChannelsOutcome ListNotificationChannels(const Model::ListNotificationChannelsRequest& request) const;

        /**
         * A Callable wrapper for ListNotificationChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotificationChannelsRequestT = Model::ListNotificationChannelsRequest>
        Model::ListNotificationChannelsOutcomeCallable ListNotificationChannelsCallable(const ListNotificationChannelsRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::ListNotificationChannels, request);
        }

        /**
         * An Async wrapper for ListNotificationChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotificationChannelsRequestT = Model::ListNotificationChannelsRequest>
        void ListNotificationChannelsAsync(const ListNotificationChannelsRequestT& request, const ListNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::ListNotificationChannels, request, handler, context);
        }

        /**
         * <p>Returns a list of insights associated with the account or OU
         * Id.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListOrganizationInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOrganizationInsightsOutcome ListOrganizationInsights(const Model::ListOrganizationInsightsRequest& request) const;

        /**
         * A Callable wrapper for ListOrganizationInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOrganizationInsightsRequestT = Model::ListOrganizationInsightsRequest>
        Model::ListOrganizationInsightsOutcomeCallable ListOrganizationInsightsCallable(const ListOrganizationInsightsRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::ListOrganizationInsights, request);
        }

        /**
         * An Async wrapper for ListOrganizationInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOrganizationInsightsRequestT = Model::ListOrganizationInsightsRequest>
        void ListOrganizationInsightsAsync(const ListOrganizationInsightsRequestT& request, const ListOrganizationInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::ListOrganizationInsights, request, handler, context);
        }

        /**
         * <p> Returns a list of a specified insight's recommendations. Each recommendation
         * includes a list of related metrics and a list of related events. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;

        /**
         * A Callable wrapper for ListRecommendations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
        Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const ListRecommendationsRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::ListRecommendations, request);
        }

        /**
         * An Async wrapper for ListRecommendations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRecommendationsRequestT = Model::ListRecommendationsRequest>
        void ListRecommendationsAsync(const ListRecommendationsRequestT& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::ListRecommendations, request, handler, context);
        }

        /**
         * <p> Collects customer feedback about the specified insight. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PutFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;

        /**
         * A Callable wrapper for PutFeedback that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutFeedbackRequestT = Model::PutFeedbackRequest>
        Model::PutFeedbackOutcomeCallable PutFeedbackCallable(const PutFeedbackRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::PutFeedback, request);
        }

        /**
         * An Async wrapper for PutFeedback that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutFeedbackRequestT = Model::PutFeedbackRequest>
        void PutFeedbackAsync(const PutFeedbackRequestT& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::PutFeedback, request, handler, context);
        }

        /**
         * <p> Removes a notification channel from DevOps Guru. A notification channel is
         * used to notify you when DevOps Guru generates an insight that contains
         * information about how to improve your operations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RemoveNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveNotificationChannelOutcome RemoveNotificationChannel(const Model::RemoveNotificationChannelRequest& request) const;

        /**
         * A Callable wrapper for RemoveNotificationChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RemoveNotificationChannelRequestT = Model::RemoveNotificationChannelRequest>
        Model::RemoveNotificationChannelOutcomeCallable RemoveNotificationChannelCallable(const RemoveNotificationChannelRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::RemoveNotificationChannel, request);
        }

        /**
         * An Async wrapper for RemoveNotificationChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveNotificationChannelRequestT = Model::RemoveNotificationChannelRequest>
        void RemoveNotificationChannelAsync(const RemoveNotificationChannelRequestT& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::RemoveNotificationChannel, request, handler, context);
        }

        /**
         * <p> Returns a list of insights in your Amazon Web Services account. You can
         * specify which insights are returned by their start time, one or more statuses
         * (<code>ONGOING</code> or <code>CLOSED</code>), one or more severities
         * (<code>LOW</code>, <code>MEDIUM</code>, and <code>HIGH</code>), and type
         * (<code>REACTIVE</code> or <code>PROACTIVE</code>). </p> <p> Use the
         * <code>Filters</code> parameter to specify status and severity search parameters.
         * Use the <code>Type</code> parameter to specify <code>REACTIVE</code> or
         * <code>PROACTIVE</code> in your search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SearchInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchInsightsOutcome SearchInsights(const Model::SearchInsightsRequest& request) const;

        /**
         * A Callable wrapper for SearchInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchInsightsRequestT = Model::SearchInsightsRequest>
        Model::SearchInsightsOutcomeCallable SearchInsightsCallable(const SearchInsightsRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::SearchInsights, request);
        }

        /**
         * An Async wrapper for SearchInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchInsightsRequestT = Model::SearchInsightsRequest>
        void SearchInsightsAsync(const SearchInsightsRequestT& request, const SearchInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::SearchInsights, request, handler, context);
        }

        /**
         * <p> Returns a list of insights in your organization. You can specify which
         * insights are returned by their start time, one or more statuses
         * (<code>ONGOING</code>, <code>CLOSED</code>, and <code>CLOSED</code>), one or
         * more severities (<code>LOW</code>, <code>MEDIUM</code>, and <code>HIGH</code>),
         * and type (<code>REACTIVE</code> or <code>PROACTIVE</code>). </p> <p> Use the
         * <code>Filters</code> parameter to specify status and severity search parameters.
         * Use the <code>Type</code> parameter to specify <code>REACTIVE</code> or
         * <code>PROACTIVE</code> in your search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SearchOrganizationInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchOrganizationInsightsOutcome SearchOrganizationInsights(const Model::SearchOrganizationInsightsRequest& request) const;

        /**
         * A Callable wrapper for SearchOrganizationInsights that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SearchOrganizationInsightsRequestT = Model::SearchOrganizationInsightsRequest>
        Model::SearchOrganizationInsightsOutcomeCallable SearchOrganizationInsightsCallable(const SearchOrganizationInsightsRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::SearchOrganizationInsights, request);
        }

        /**
         * An Async wrapper for SearchOrganizationInsights that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchOrganizationInsightsRequestT = Model::SearchOrganizationInsightsRequest>
        void SearchOrganizationInsightsAsync(const SearchOrganizationInsightsRequestT& request, const SearchOrganizationInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::SearchOrganizationInsights, request, handler, context);
        }

        /**
         * <p>Starts the creation of an estimate of the monthly cost to analyze your Amazon
         * Web Services resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/StartCostEstimation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartCostEstimationOutcome StartCostEstimation(const Model::StartCostEstimationRequest& request) const;

        /**
         * A Callable wrapper for StartCostEstimation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartCostEstimationRequestT = Model::StartCostEstimationRequest>
        Model::StartCostEstimationOutcomeCallable StartCostEstimationCallable(const StartCostEstimationRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::StartCostEstimation, request);
        }

        /**
         * An Async wrapper for StartCostEstimation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartCostEstimationRequestT = Model::StartCostEstimationRequest>
        void StartCostEstimationAsync(const StartCostEstimationRequestT& request, const StartCostEstimationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::StartCostEstimation, request, handler, context);
        }

        /**
         * <p>Enables or disables integration with a service that can be integrated with
         * DevOps Guru. The one service that can be integrated with DevOps Guru is Amazon
         * CodeGuru Profiler, which can produce proactive recommendations which can be
         * stored and viewed in DevOps Guru.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateEventSourcesConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventSourcesConfigOutcome UpdateEventSourcesConfig(const Model::UpdateEventSourcesConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventSourcesConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEventSourcesConfigRequestT = Model::UpdateEventSourcesConfigRequest>
        Model::UpdateEventSourcesConfigOutcomeCallable UpdateEventSourcesConfigCallable(const UpdateEventSourcesConfigRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::UpdateEventSourcesConfig, request);
        }

        /**
         * An Async wrapper for UpdateEventSourcesConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventSourcesConfigRequestT = Model::UpdateEventSourcesConfigRequest>
        void UpdateEventSourcesConfigAsync(const UpdateEventSourcesConfigRequestT& request, const UpdateEventSourcesConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::UpdateEventSourcesConfig, request, handler, context);
        }

        /**
         * <p> Updates the collection of resources that DevOps Guru analyzes. The two types
         * of Amazon Web Services resource collections supported are Amazon Web Services
         * CloudFormation stacks and Amazon Web Services resources that contain the same
         * Amazon Web Services tag. DevOps Guru can be configured to analyze the Amazon Web
         * Services resources that are defined in the stacks or that are tagged using the
         * same tag <i>key</i>. You can specify up to 500 Amazon Web Services
         * CloudFormation stacks. This method also creates the IAM role required for you to
         * use DevOps Guru. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateResourceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceCollectionOutcome UpdateResourceCollection(const Model::UpdateResourceCollectionRequest& request) const;

        /**
         * A Callable wrapper for UpdateResourceCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateResourceCollectionRequestT = Model::UpdateResourceCollectionRequest>
        Model::UpdateResourceCollectionOutcomeCallable UpdateResourceCollectionCallable(const UpdateResourceCollectionRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::UpdateResourceCollection, request);
        }

        /**
         * An Async wrapper for UpdateResourceCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateResourceCollectionRequestT = Model::UpdateResourceCollectionRequest>
        void UpdateResourceCollectionAsync(const UpdateResourceCollectionRequestT& request, const UpdateResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::UpdateResourceCollection, request, handler, context);
        }

        /**
         * <p> Enables or disables integration with a service that can be integrated with
         * DevOps Guru. The one service that can be integrated with DevOps Guru is Amazon
         * Web Services Systems Manager, which can be used to create an OpsItem for each
         * generated insight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateServiceIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceIntegrationOutcome UpdateServiceIntegration(const Model::UpdateServiceIntegrationRequest& request) const;

        /**
         * A Callable wrapper for UpdateServiceIntegration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateServiceIntegrationRequestT = Model::UpdateServiceIntegrationRequest>
        Model::UpdateServiceIntegrationOutcomeCallable UpdateServiceIntegrationCallable(const UpdateServiceIntegrationRequestT& request) const
        {
            return SubmitCallable(&DevOpsGuruClient::UpdateServiceIntegration, request);
        }

        /**
         * An Async wrapper for UpdateServiceIntegration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateServiceIntegrationRequestT = Model::UpdateServiceIntegrationRequest>
        void UpdateServiceIntegrationAsync(const UpdateServiceIntegrationRequestT& request, const UpdateServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&DevOpsGuruClient::UpdateServiceIntegration, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<DevOpsGuruEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<DevOpsGuruClient>;
      void init(const DevOpsGuruClientConfiguration& clientConfiguration);

      DevOpsGuruClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<DevOpsGuruEndpointProviderBase> m_endpointProvider;
  };

} // namespace DevOpsGuru
} // namespace Aws
