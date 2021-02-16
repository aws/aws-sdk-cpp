/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/devops-guru/model/AddNotificationChannelResult.h>
#include <aws/devops-guru/model/DescribeAccountHealthResult.h>
#include <aws/devops-guru/model/DescribeAccountOverviewResult.h>
#include <aws/devops-guru/model/DescribeAnomalyResult.h>
#include <aws/devops-guru/model/DescribeFeedbackResult.h>
#include <aws/devops-guru/model/DescribeInsightResult.h>
#include <aws/devops-guru/model/DescribeResourceCollectionHealthResult.h>
#include <aws/devops-guru/model/DescribeServiceIntegrationResult.h>
#include <aws/devops-guru/model/GetResourceCollectionResult.h>
#include <aws/devops-guru/model/ListAnomaliesForInsightResult.h>
#include <aws/devops-guru/model/ListEventsResult.h>
#include <aws/devops-guru/model/ListInsightsResult.h>
#include <aws/devops-guru/model/ListNotificationChannelsResult.h>
#include <aws/devops-guru/model/ListRecommendationsResult.h>
#include <aws/devops-guru/model/PutFeedbackResult.h>
#include <aws/devops-guru/model/RemoveNotificationChannelResult.h>
#include <aws/devops-guru/model/SearchInsightsResult.h>
#include <aws/devops-guru/model/UpdateResourceCollectionResult.h>
#include <aws/devops-guru/model/UpdateServiceIntegrationResult.h>
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

namespace DevOpsGuru
{

namespace Model
{
        class AddNotificationChannelRequest;
        class DescribeAccountHealthRequest;
        class DescribeAccountOverviewRequest;
        class DescribeAnomalyRequest;
        class DescribeFeedbackRequest;
        class DescribeInsightRequest;
        class DescribeResourceCollectionHealthRequest;
        class DescribeServiceIntegrationRequest;
        class GetResourceCollectionRequest;
        class ListAnomaliesForInsightRequest;
        class ListEventsRequest;
        class ListInsightsRequest;
        class ListNotificationChannelsRequest;
        class ListRecommendationsRequest;
        class PutFeedbackRequest;
        class RemoveNotificationChannelRequest;
        class SearchInsightsRequest;
        class UpdateResourceCollectionRequest;
        class UpdateServiceIntegrationRequest;

        typedef Aws::Utils::Outcome<AddNotificationChannelResult, DevOpsGuruError> AddNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountHealthResult, DevOpsGuruError> DescribeAccountHealthOutcome;
        typedef Aws::Utils::Outcome<DescribeAccountOverviewResult, DevOpsGuruError> DescribeAccountOverviewOutcome;
        typedef Aws::Utils::Outcome<DescribeAnomalyResult, DevOpsGuruError> DescribeAnomalyOutcome;
        typedef Aws::Utils::Outcome<DescribeFeedbackResult, DevOpsGuruError> DescribeFeedbackOutcome;
        typedef Aws::Utils::Outcome<DescribeInsightResult, DevOpsGuruError> DescribeInsightOutcome;
        typedef Aws::Utils::Outcome<DescribeResourceCollectionHealthResult, DevOpsGuruError> DescribeResourceCollectionHealthOutcome;
        typedef Aws::Utils::Outcome<DescribeServiceIntegrationResult, DevOpsGuruError> DescribeServiceIntegrationOutcome;
        typedef Aws::Utils::Outcome<GetResourceCollectionResult, DevOpsGuruError> GetResourceCollectionOutcome;
        typedef Aws::Utils::Outcome<ListAnomaliesForInsightResult, DevOpsGuruError> ListAnomaliesForInsightOutcome;
        typedef Aws::Utils::Outcome<ListEventsResult, DevOpsGuruError> ListEventsOutcome;
        typedef Aws::Utils::Outcome<ListInsightsResult, DevOpsGuruError> ListInsightsOutcome;
        typedef Aws::Utils::Outcome<ListNotificationChannelsResult, DevOpsGuruError> ListNotificationChannelsOutcome;
        typedef Aws::Utils::Outcome<ListRecommendationsResult, DevOpsGuruError> ListRecommendationsOutcome;
        typedef Aws::Utils::Outcome<PutFeedbackResult, DevOpsGuruError> PutFeedbackOutcome;
        typedef Aws::Utils::Outcome<RemoveNotificationChannelResult, DevOpsGuruError> RemoveNotificationChannelOutcome;
        typedef Aws::Utils::Outcome<SearchInsightsResult, DevOpsGuruError> SearchInsightsOutcome;
        typedef Aws::Utils::Outcome<UpdateResourceCollectionResult, DevOpsGuruError> UpdateResourceCollectionOutcome;
        typedef Aws::Utils::Outcome<UpdateServiceIntegrationResult, DevOpsGuruError> UpdateServiceIntegrationOutcome;

        typedef std::future<AddNotificationChannelOutcome> AddNotificationChannelOutcomeCallable;
        typedef std::future<DescribeAccountHealthOutcome> DescribeAccountHealthOutcomeCallable;
        typedef std::future<DescribeAccountOverviewOutcome> DescribeAccountOverviewOutcomeCallable;
        typedef std::future<DescribeAnomalyOutcome> DescribeAnomalyOutcomeCallable;
        typedef std::future<DescribeFeedbackOutcome> DescribeFeedbackOutcomeCallable;
        typedef std::future<DescribeInsightOutcome> DescribeInsightOutcomeCallable;
        typedef std::future<DescribeResourceCollectionHealthOutcome> DescribeResourceCollectionHealthOutcomeCallable;
        typedef std::future<DescribeServiceIntegrationOutcome> DescribeServiceIntegrationOutcomeCallable;
        typedef std::future<GetResourceCollectionOutcome> GetResourceCollectionOutcomeCallable;
        typedef std::future<ListAnomaliesForInsightOutcome> ListAnomaliesForInsightOutcomeCallable;
        typedef std::future<ListEventsOutcome> ListEventsOutcomeCallable;
        typedef std::future<ListInsightsOutcome> ListInsightsOutcomeCallable;
        typedef std::future<ListNotificationChannelsOutcome> ListNotificationChannelsOutcomeCallable;
        typedef std::future<ListRecommendationsOutcome> ListRecommendationsOutcomeCallable;
        typedef std::future<PutFeedbackOutcome> PutFeedbackOutcomeCallable;
        typedef std::future<RemoveNotificationChannelOutcome> RemoveNotificationChannelOutcomeCallable;
        typedef std::future<SearchInsightsOutcome> SearchInsightsOutcomeCallable;
        typedef std::future<UpdateResourceCollectionOutcome> UpdateResourceCollectionOutcomeCallable;
        typedef std::future<UpdateServiceIntegrationOutcome> UpdateServiceIntegrationOutcomeCallable;
} // namespace Model

  class DevOpsGuruClient;

    typedef std::function<void(const DevOpsGuruClient*, const Model::AddNotificationChannelRequest&, const Model::AddNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > AddNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeAccountHealthRequest&, const Model::DescribeAccountHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountHealthResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeAccountOverviewRequest&, const Model::DescribeAccountOverviewOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAccountOverviewResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeAnomalyRequest&, const Model::DescribeAnomalyOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAnomalyResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeFeedbackRequest&, const Model::DescribeFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeFeedbackResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeInsightRequest&, const Model::DescribeInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeInsightResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeResourceCollectionHealthRequest&, const Model::DescribeResourceCollectionHealthOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeResourceCollectionHealthResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::DescribeServiceIntegrationRequest&, const Model::DescribeServiceIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeServiceIntegrationResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::GetResourceCollectionRequest&, const Model::GetResourceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > GetResourceCollectionResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListAnomaliesForInsightRequest&, const Model::ListAnomaliesForInsightOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListAnomaliesForInsightResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListEventsRequest&, const Model::ListEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListEventsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListInsightsRequest&, const Model::ListInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListInsightsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListNotificationChannelsRequest&, const Model::ListNotificationChannelsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListNotificationChannelsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::ListRecommendationsRequest&, const Model::ListRecommendationsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRecommendationsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::PutFeedbackRequest&, const Model::PutFeedbackOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > PutFeedbackResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::RemoveNotificationChannelRequest&, const Model::RemoveNotificationChannelOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > RemoveNotificationChannelResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::SearchInsightsRequest&, const Model::SearchInsightsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > SearchInsightsResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::UpdateResourceCollectionRequest&, const Model::UpdateResourceCollectionOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateResourceCollectionResponseReceivedHandler;
    typedef std::function<void(const DevOpsGuruClient*, const Model::UpdateServiceIntegrationRequest&, const Model::UpdateServiceIntegrationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateServiceIntegrationResponseReceivedHandler;

  /**
   * <p> Amazon DevOps Guru is a fully managed service that helps you identify
   * anomalous behavior in business critical operational applications. You specify
   * the AWS resources that you want DevOps Guru to cover, then the Amazon CloudWatch
   * metrics and AWS CloudTrail events related to those resources are analyzed. When
   * anomalous behavior is detected, DevOps Guru creates an <i>insight</i> that
   * includes recommendations, related events, and related metrics that can help you
   * improve your operational applications. For more information, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html">What
   * is Amazon DevOps Guru</a>. </p> <p> You can specify 1 or 2 Amazon Simple
   * Notification Service topics so you are notified every time a new insight is
   * created. You can also enable DevOps Guru to generate an OpsItem in AWS Systems
   * Manager for each insight to help you manage and track your work addressing
   * insights. </p> <p> To learn about the DevOps Guru workflow, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html#how-it-works">How
   * DevOps Guru works</a>. To learn about DevOps Guru concepts, see <a
   * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/concepts.html">Concepts
   * in DevOps Guru</a>. </p>
   */
  class AWS_DEVOPSGURU_API DevOpsGuruClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        DevOpsGuruClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        DevOpsGuruClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~DevOpsGuruClient();


        /**
         * <p> Adds a notification channel to DevOps Guru. A notification channel is used
         * to notify you about important DevOps Guru events, such as when an insight is
         * generated. </p> <p>If you use an Amazon SNS topic in another account, you must
         * attach a policy to it that grants DevOps Guru permission to it notifications.
         * DevOps Guru adds the required policy on your behalf to send notifications using
         * Amazon SNS in your account. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
         * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
         * that is encrypted by an AWS Key Management Service customer-managed key (CMK),
         * then you must add permissions to the CMK. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
         * for AWS KMS–encrypted Amazon SNS topics</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AddNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::AddNotificationChannelOutcome AddNotificationChannel(const Model::AddNotificationChannelRequest& request) const;

        /**
         * <p> Adds a notification channel to DevOps Guru. A notification channel is used
         * to notify you about important DevOps Guru events, such as when an insight is
         * generated. </p> <p>If you use an Amazon SNS topic in another account, you must
         * attach a policy to it that grants DevOps Guru permission to it notifications.
         * DevOps Guru adds the required policy on your behalf to send notifications using
         * Amazon SNS in your account. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
         * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
         * that is encrypted by an AWS Key Management Service customer-managed key (CMK),
         * then you must add permissions to the CMK. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
         * for AWS KMS–encrypted Amazon SNS topics</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AddNotificationChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddNotificationChannelOutcomeCallable AddNotificationChannelCallable(const Model::AddNotificationChannelRequest& request) const;

        /**
         * <p> Adds a notification channel to DevOps Guru. A notification channel is used
         * to notify you about important DevOps Guru events, such as when an insight is
         * generated. </p> <p>If you use an Amazon SNS topic in another account, you must
         * attach a policy to it that grants DevOps Guru permission to it notifications.
         * DevOps Guru adds the required policy on your behalf to send notifications using
         * Amazon SNS in your account. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions
         * for cross account Amazon SNS topics</a>.</p> <p>If you use an Amazon SNS topic
         * that is encrypted by an AWS Key Management Service customer-managed key (CMK),
         * then you must add permissions to the CMK. For more information, see <a
         * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions
         * for AWS KMS–encrypted Amazon SNS topics</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/AddNotificationChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddNotificationChannelAsync(const Model::AddNotificationChannelRequest& request, const AddNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the number of open reactive insights, the number of open proactive
         * insights, and the number of metrics analyzed in your AWS account. Use these
         * numbers to gauge the health of operations in your AWS account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAccountHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountHealthOutcome DescribeAccountHealth(const Model::DescribeAccountHealthRequest& request) const;

        /**
         * <p> Returns the number of open reactive insights, the number of open proactive
         * insights, and the number of metrics analyzed in your AWS account. Use these
         * numbers to gauge the health of operations in your AWS account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAccountHealth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountHealthOutcomeCallable DescribeAccountHealthCallable(const Model::DescribeAccountHealthRequest& request) const;

        /**
         * <p> Returns the number of open reactive insights, the number of open proactive
         * insights, and the number of metrics analyzed in your AWS account. Use these
         * numbers to gauge the health of operations in your AWS account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAccountHealth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountHealthAsync(const Model::DescribeAccountHealthRequest& request, const DescribeAccountHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p> For the time range passed in, returns the number of open reactive insight
         * that were created, the number of open proactive insights that were created, and
         * the Mean Time to Recover (MTTR) for all closed reactive insights. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAccountOverview">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountOverviewOutcomeCallable DescribeAccountOverviewCallable(const Model::DescribeAccountOverviewRequest& request) const;

        /**
         * <p> For the time range passed in, returns the number of open reactive insight
         * that were created, the number of open proactive insights that were created, and
         * the Mean Time to Recover (MTTR) for all closed reactive insights. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAccountOverview">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountOverviewAsync(const Model::DescribeAccountOverviewRequest& request, const DescribeAccountOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns details about an anomaly that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAnomaly">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAnomalyOutcome DescribeAnomaly(const Model::DescribeAnomalyRequest& request) const;

        /**
         * <p> Returns details about an anomaly that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAnomaly">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAnomalyOutcomeCallable DescribeAnomalyCallable(const Model::DescribeAnomalyRequest& request) const;

        /**
         * <p> Returns details about an anomaly that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeAnomaly">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAnomalyAsync(const Model::DescribeAnomalyRequest& request, const DescribeAnomalyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the most recent feedback submitted in the current AWS account and
         * Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFeedbackOutcome DescribeFeedback(const Model::DescribeFeedbackRequest& request) const;

        /**
         * <p> Returns the most recent feedback submitted in the current AWS account and
         * Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFeedbackOutcomeCallable DescribeFeedbackCallable(const Model::DescribeFeedbackRequest& request) const;

        /**
         * <p> Returns the most recent feedback submitted in the current AWS account and
         * Region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFeedbackAsync(const Model::DescribeFeedbackRequest& request, const DescribeFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns details about an insight that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeInsightOutcome DescribeInsight(const Model::DescribeInsightRequest& request) const;

        /**
         * <p> Returns details about an insight that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeInsightOutcomeCallable DescribeInsightCallable(const Model::DescribeInsightRequest& request) const;

        /**
         * <p> Returns details about an insight that you specify using its ID.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeInsight">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeInsightAsync(const Model::DescribeInsightRequest& request, const DescribeInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the number of open proactive insights, open reactive insights, and
         * the Mean Time to Recover (MTTR) for all closed insights in resource collections
         * in your account. You specify the type of AWS resources collection. The one type
         * of AWS resource collection supported is AWS CloudFormation stacks. DevOps Guru
         * can be configured to analyze only the AWS resources that are defined in the
         * stacks. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeResourceCollectionHealth">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeResourceCollectionHealthOutcome DescribeResourceCollectionHealth(const Model::DescribeResourceCollectionHealthRequest& request) const;

        /**
         * <p> Returns the number of open proactive insights, open reactive insights, and
         * the Mean Time to Recover (MTTR) for all closed insights in resource collections
         * in your account. You specify the type of AWS resources collection. The one type
         * of AWS resource collection supported is AWS CloudFormation stacks. DevOps Guru
         * can be configured to analyze only the AWS resources that are defined in the
         * stacks. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeResourceCollectionHealth">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeResourceCollectionHealthOutcomeCallable DescribeResourceCollectionHealthCallable(const Model::DescribeResourceCollectionHealthRequest& request) const;

        /**
         * <p> Returns the number of open proactive insights, open reactive insights, and
         * the Mean Time to Recover (MTTR) for all closed insights in resource collections
         * in your account. You specify the type of AWS resources collection. The one type
         * of AWS resource collection supported is AWS CloudFormation stacks. DevOps Guru
         * can be configured to analyze only the AWS resources that are defined in the
         * stacks. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeResourceCollectionHealth">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeResourceCollectionHealthAsync(const Model::DescribeResourceCollectionHealthRequest& request, const DescribeResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns the integration status of services that are integrated with DevOps
         * Guru. The one service that can be integrated with DevOps Guru is AWS Systems
         * Manager, which can be used to create an OpsItem for each generated insight.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeServiceIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeServiceIntegrationOutcome DescribeServiceIntegration(const Model::DescribeServiceIntegrationRequest& request) const;

        /**
         * <p> Returns the integration status of services that are integrated with DevOps
         * Guru. The one service that can be integrated with DevOps Guru is AWS Systems
         * Manager, which can be used to create an OpsItem for each generated insight.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeServiceIntegration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeServiceIntegrationOutcomeCallable DescribeServiceIntegrationCallable(const Model::DescribeServiceIntegrationRequest& request) const;

        /**
         * <p> Returns the integration status of services that are integrated with DevOps
         * Guru. The one service that can be integrated with DevOps Guru is AWS Systems
         * Manager, which can be used to create an OpsItem for each generated insight.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/DescribeServiceIntegration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeServiceIntegrationAsync(const Model::DescribeServiceIntegrationRequest& request, const DescribeServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns lists AWS resources that are of the specified resource collection
         * type. The one type of AWS resource collection supported is AWS CloudFormation
         * stacks. DevOps Guru can be configured to analyze only the AWS resources that are
         * defined in the stacks. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/GetResourceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceCollectionOutcome GetResourceCollection(const Model::GetResourceCollectionRequest& request) const;

        /**
         * <p> Returns lists AWS resources that are of the specified resource collection
         * type. The one type of AWS resource collection supported is AWS CloudFormation
         * stacks. DevOps Guru can be configured to analyze only the AWS resources that are
         * defined in the stacks. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/GetResourceCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetResourceCollectionOutcomeCallable GetResourceCollectionCallable(const Model::GetResourceCollectionRequest& request) const;

        /**
         * <p> Returns lists AWS resources that are of the specified resource collection
         * type. The one type of AWS resource collection supported is AWS CloudFormation
         * stacks. DevOps Guru can be configured to analyze only the AWS resources that are
         * defined in the stacks. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/GetResourceCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetResourceCollectionAsync(const Model::GetResourceCollectionRequest& request, const GetResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of the anomalies that belong to an insight that you specify
         * using its ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListAnomaliesForInsight">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAnomaliesForInsightOutcome ListAnomaliesForInsight(const Model::ListAnomaliesForInsightRequest& request) const;

        /**
         * <p> Returns a list of the anomalies that belong to an insight that you specify
         * using its ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListAnomaliesForInsight">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAnomaliesForInsightOutcomeCallable ListAnomaliesForInsightCallable(const Model::ListAnomaliesForInsightRequest& request) const;

        /**
         * <p> Returns a list of the anomalies that belong to an insight that you specify
         * using its ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListAnomaliesForInsight">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAnomaliesForInsightAsync(const Model::ListAnomaliesForInsightRequest& request, const ListAnomaliesForInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of the events emitted by the resources that are evaluated by
         * DevOps Guru. You can use filters to specify which events are returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventsOutcome ListEvents(const Model::ListEventsRequest& request) const;

        /**
         * <p> Returns a list of the events emitted by the resources that are evaluated by
         * DevOps Guru. You can use filters to specify which events are returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEventsOutcomeCallable ListEventsCallable(const Model::ListEventsRequest& request) const;

        /**
         * <p> Returns a list of the events emitted by the resources that are evaluated by
         * DevOps Guru. You can use filters to specify which events are returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEventsAsync(const Model::ListEventsRequest& request, const ListEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of insights in your AWS account. You can specify which
         * insights are returned by their start time and status (<code>ONGOING</code>,
         * <code>CLOSED</code>, or <code>ANY</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::ListInsightsOutcome ListInsights(const Model::ListInsightsRequest& request) const;

        /**
         * <p> Returns a list of insights in your AWS account. You can specify which
         * insights are returned by their start time and status (<code>ONGOING</code>,
         * <code>CLOSED</code>, or <code>ANY</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListInsights">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListInsightsOutcomeCallable ListInsightsCallable(const Model::ListInsightsRequest& request) const;

        /**
         * <p> Returns a list of insights in your AWS account. You can specify which
         * insights are returned by their start time and status (<code>ONGOING</code>,
         * <code>CLOSED</code>, or <code>ANY</code>). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListInsights">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListInsightsAsync(const Model::ListInsightsRequest& request, const ListInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p> Returns a list of notification channels configured for DevOps Guru. Each
         * notification channel is used to notify you when DevOps Guru generates an insight
         * that contains information about how to improve your operations. The one
         * supported notification channel is Amazon Simple Notification Service (Amazon
         * SNS). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListNotificationChannels">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListNotificationChannelsOutcomeCallable ListNotificationChannelsCallable(const Model::ListNotificationChannelsRequest& request) const;

        /**
         * <p> Returns a list of notification channels configured for DevOps Guru. Each
         * notification channel is used to notify you when DevOps Guru generates an insight
         * that contains information about how to improve your operations. The one
         * supported notification channel is Amazon Simple Notification Service (Amazon
         * SNS). </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListNotificationChannels">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListNotificationChannelsAsync(const Model::ListNotificationChannelsRequest& request, const ListNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of a specified insight's recommendations. Each recommendation
         * includes a list of related metrics and a list of related events. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListRecommendations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRecommendationsOutcome ListRecommendations(const Model::ListRecommendationsRequest& request) const;

        /**
         * <p> Returns a list of a specified insight's recommendations. Each recommendation
         * includes a list of related metrics and a list of related events. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListRecommendations">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRecommendationsOutcomeCallable ListRecommendationsCallable(const Model::ListRecommendationsRequest& request) const;

        /**
         * <p> Returns a list of a specified insight's recommendations. Each recommendation
         * includes a list of related metrics and a list of related events. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/ListRecommendations">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRecommendationsAsync(const Model::ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Collects customer feedback about the specified insight. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PutFeedback">AWS
         * API Reference</a></p>
         */
        virtual Model::PutFeedbackOutcome PutFeedback(const Model::PutFeedbackRequest& request) const;

        /**
         * <p> Collects customer feedback about the specified insight. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PutFeedback">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutFeedbackOutcomeCallable PutFeedbackCallable(const Model::PutFeedbackRequest& request) const;

        /**
         * <p> Collects customer feedback about the specified insight. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/PutFeedback">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutFeedbackAsync(const Model::PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Removes a notification channel from DevOps Guru. A notification channel is
         * used to notify you when DevOps Guru generates an insight that contains
         * information about how to improve your operations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RemoveNotificationChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveNotificationChannelOutcome RemoveNotificationChannel(const Model::RemoveNotificationChannelRequest& request) const;

        /**
         * <p> Removes a notification channel from DevOps Guru. A notification channel is
         * used to notify you when DevOps Guru generates an insight that contains
         * information about how to improve your operations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RemoveNotificationChannel">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveNotificationChannelOutcomeCallable RemoveNotificationChannelCallable(const Model::RemoveNotificationChannelRequest& request) const;

        /**
         * <p> Removes a notification channel from DevOps Guru. A notification channel is
         * used to notify you when DevOps Guru generates an insight that contains
         * information about how to improve your operations. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/RemoveNotificationChannel">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveNotificationChannelAsync(const Model::RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a list of insights in your AWS account. You can specify which
         * insights are returned by their start time, one or more statuses
         * (<code>ONGOING</code>, <code>CLOSED</code>, and <code>CLOSED</code>), one or
         * more severities (<code>LOW</code>, <code>MEDIUM</code>, and <code>HIGH</code>),
         * and type (<code>REACTIVE</code> or <code>PROACTIVE</code>). </p> <p> Use the
         * <code>Filters</code> parameter to specify status and severity search parameters.
         * Use the <code>Type</code> parameter to specify <code>REACTIVE</code> or
         * <code>PROACTIVE</code> in your search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SearchInsights">AWS
         * API Reference</a></p>
         */
        virtual Model::SearchInsightsOutcome SearchInsights(const Model::SearchInsightsRequest& request) const;

        /**
         * <p> Returns a list of insights in your AWS account. You can specify which
         * insights are returned by their start time, one or more statuses
         * (<code>ONGOING</code>, <code>CLOSED</code>, and <code>CLOSED</code>), one or
         * more severities (<code>LOW</code>, <code>MEDIUM</code>, and <code>HIGH</code>),
         * and type (<code>REACTIVE</code> or <code>PROACTIVE</code>). </p> <p> Use the
         * <code>Filters</code> parameter to specify status and severity search parameters.
         * Use the <code>Type</code> parameter to specify <code>REACTIVE</code> or
         * <code>PROACTIVE</code> in your search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SearchInsights">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchInsightsOutcomeCallable SearchInsightsCallable(const Model::SearchInsightsRequest& request) const;

        /**
         * <p> Returns a list of insights in your AWS account. You can specify which
         * insights are returned by their start time, one or more statuses
         * (<code>ONGOING</code>, <code>CLOSED</code>, and <code>CLOSED</code>), one or
         * more severities (<code>LOW</code>, <code>MEDIUM</code>, and <code>HIGH</code>),
         * and type (<code>REACTIVE</code> or <code>PROACTIVE</code>). </p> <p> Use the
         * <code>Filters</code> parameter to specify status and severity search parameters.
         * Use the <code>Type</code> parameter to specify <code>REACTIVE</code> or
         * <code>PROACTIVE</code> in your search. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/SearchInsights">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchInsightsAsync(const Model::SearchInsightsRequest& request, const SearchInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates the collection of resources that DevOps Guru analyzes. The one type
         * of AWS resource collection supported is AWS CloudFormation stacks. DevOps Guru
         * can be configured to analyze only the AWS resources that are defined in the
         * stacks. This method also creates the IAM role required for you to use DevOps
         * Guru. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateResourceCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateResourceCollectionOutcome UpdateResourceCollection(const Model::UpdateResourceCollectionRequest& request) const;

        /**
         * <p> Updates the collection of resources that DevOps Guru analyzes. The one type
         * of AWS resource collection supported is AWS CloudFormation stacks. DevOps Guru
         * can be configured to analyze only the AWS resources that are defined in the
         * stacks. This method also creates the IAM role required for you to use DevOps
         * Guru. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateResourceCollection">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateResourceCollectionOutcomeCallable UpdateResourceCollectionCallable(const Model::UpdateResourceCollectionRequest& request) const;

        /**
         * <p> Updates the collection of resources that DevOps Guru analyzes. The one type
         * of AWS resource collection supported is AWS CloudFormation stacks. DevOps Guru
         * can be configured to analyze only the AWS resources that are defined in the
         * stacks. This method also creates the IAM role required for you to use DevOps
         * Guru. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateResourceCollection">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateResourceCollectionAsync(const Model::UpdateResourceCollectionRequest& request, const UpdateResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Enables or disables integration with a service that can be integrated with
         * DevOps Guru. The one service that can be integrated with DevOps Guru is AWS
         * Systems Manager, which can be used to create an OpsItem for each generated
         * insight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateServiceIntegration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateServiceIntegrationOutcome UpdateServiceIntegration(const Model::UpdateServiceIntegrationRequest& request) const;

        /**
         * <p> Enables or disables integration with a service that can be integrated with
         * DevOps Guru. The one service that can be integrated with DevOps Guru is AWS
         * Systems Manager, which can be used to create an OpsItem for each generated
         * insight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateServiceIntegration">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateServiceIntegrationOutcomeCallable UpdateServiceIntegrationCallable(const Model::UpdateServiceIntegrationRequest& request) const;

        /**
         * <p> Enables or disables integration with a service that can be integrated with
         * DevOps Guru. The one service that can be integrated with DevOps Guru is AWS
         * Systems Manager, which can be used to create an OpsItem for each generated
         * insight. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/devops-guru-2020-12-01/UpdateServiceIntegration">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateServiceIntegrationAsync(const Model::UpdateServiceIntegrationRequest& request, const UpdateServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void AddNotificationChannelAsyncHelper(const Model::AddNotificationChannelRequest& request, const AddNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountHealthAsyncHelper(const Model::DescribeAccountHealthRequest& request, const DescribeAccountHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAccountOverviewAsyncHelper(const Model::DescribeAccountOverviewRequest& request, const DescribeAccountOverviewResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAnomalyAsyncHelper(const Model::DescribeAnomalyRequest& request, const DescribeAnomalyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeFeedbackAsyncHelper(const Model::DescribeFeedbackRequest& request, const DescribeFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeInsightAsyncHelper(const Model::DescribeInsightRequest& request, const DescribeInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeResourceCollectionHealthAsyncHelper(const Model::DescribeResourceCollectionHealthRequest& request, const DescribeResourceCollectionHealthResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeServiceIntegrationAsyncHelper(const Model::DescribeServiceIntegrationRequest& request, const DescribeServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void GetResourceCollectionAsyncHelper(const Model::GetResourceCollectionRequest& request, const GetResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListAnomaliesForInsightAsyncHelper(const Model::ListAnomaliesForInsightRequest& request, const ListAnomaliesForInsightResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListEventsAsyncHelper(const Model::ListEventsRequest& request, const ListEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListInsightsAsyncHelper(const Model::ListInsightsRequest& request, const ListInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListNotificationChannelsAsyncHelper(const Model::ListNotificationChannelsRequest& request, const ListNotificationChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRecommendationsAsyncHelper(const Model::ListRecommendationsRequest& request, const ListRecommendationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void PutFeedbackAsyncHelper(const Model::PutFeedbackRequest& request, const PutFeedbackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void RemoveNotificationChannelAsyncHelper(const Model::RemoveNotificationChannelRequest& request, const RemoveNotificationChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void SearchInsightsAsyncHelper(const Model::SearchInsightsRequest& request, const SearchInsightsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateResourceCollectionAsyncHelper(const Model::UpdateResourceCollectionRequest& request, const UpdateResourceCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateServiceIntegrationAsyncHelper(const Model::UpdateServiceIntegrationRequest& request, const UpdateServiceIntegrationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace DevOpsGuru
} // namespace Aws
