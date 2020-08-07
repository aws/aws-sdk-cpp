/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/health/model/DescribeAffectedAccountsForOrganizationResult.h>
#include <aws/health/model/DescribeAffectedEntitiesResult.h>
#include <aws/health/model/DescribeAffectedEntitiesForOrganizationResult.h>
#include <aws/health/model/DescribeEntityAggregatesResult.h>
#include <aws/health/model/DescribeEventAggregatesResult.h>
#include <aws/health/model/DescribeEventDetailsResult.h>
#include <aws/health/model/DescribeEventDetailsForOrganizationResult.h>
#include <aws/health/model/DescribeEventTypesResult.h>
#include <aws/health/model/DescribeEventsResult.h>
#include <aws/health/model/DescribeEventsForOrganizationResult.h>
#include <aws/health/model/DescribeHealthServiceStatusForOrganizationResult.h>
#include <aws/core/NoResult.h>
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

namespace Health
{

namespace Model
{
        class DescribeAffectedAccountsForOrganizationRequest;
        class DescribeAffectedEntitiesRequest;
        class DescribeAffectedEntitiesForOrganizationRequest;
        class DescribeEntityAggregatesRequest;
        class DescribeEventAggregatesRequest;
        class DescribeEventDetailsRequest;
        class DescribeEventDetailsForOrganizationRequest;
        class DescribeEventTypesRequest;
        class DescribeEventsRequest;
        class DescribeEventsForOrganizationRequest;

        typedef Aws::Utils::Outcome<DescribeAffectedAccountsForOrganizationResult, HealthError> DescribeAffectedAccountsForOrganizationOutcome;
        typedef Aws::Utils::Outcome<DescribeAffectedEntitiesResult, HealthError> DescribeAffectedEntitiesOutcome;
        typedef Aws::Utils::Outcome<DescribeAffectedEntitiesForOrganizationResult, HealthError> DescribeAffectedEntitiesForOrganizationOutcome;
        typedef Aws::Utils::Outcome<DescribeEntityAggregatesResult, HealthError> DescribeEntityAggregatesOutcome;
        typedef Aws::Utils::Outcome<DescribeEventAggregatesResult, HealthError> DescribeEventAggregatesOutcome;
        typedef Aws::Utils::Outcome<DescribeEventDetailsResult, HealthError> DescribeEventDetailsOutcome;
        typedef Aws::Utils::Outcome<DescribeEventDetailsForOrganizationResult, HealthError> DescribeEventDetailsForOrganizationOutcome;
        typedef Aws::Utils::Outcome<DescribeEventTypesResult, HealthError> DescribeEventTypesOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsResult, HealthError> DescribeEventsOutcome;
        typedef Aws::Utils::Outcome<DescribeEventsForOrganizationResult, HealthError> DescribeEventsForOrganizationOutcome;
        typedef Aws::Utils::Outcome<DescribeHealthServiceStatusForOrganizationResult, HealthError> DescribeHealthServiceStatusForOrganizationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, HealthError> DisableHealthServiceAccessForOrganizationOutcome;
        typedef Aws::Utils::Outcome<Aws::NoResult, HealthError> EnableHealthServiceAccessForOrganizationOutcome;

        typedef std::future<DescribeAffectedAccountsForOrganizationOutcome> DescribeAffectedAccountsForOrganizationOutcomeCallable;
        typedef std::future<DescribeAffectedEntitiesOutcome> DescribeAffectedEntitiesOutcomeCallable;
        typedef std::future<DescribeAffectedEntitiesForOrganizationOutcome> DescribeAffectedEntitiesForOrganizationOutcomeCallable;
        typedef std::future<DescribeEntityAggregatesOutcome> DescribeEntityAggregatesOutcomeCallable;
        typedef std::future<DescribeEventAggregatesOutcome> DescribeEventAggregatesOutcomeCallable;
        typedef std::future<DescribeEventDetailsOutcome> DescribeEventDetailsOutcomeCallable;
        typedef std::future<DescribeEventDetailsForOrganizationOutcome> DescribeEventDetailsForOrganizationOutcomeCallable;
        typedef std::future<DescribeEventTypesOutcome> DescribeEventTypesOutcomeCallable;
        typedef std::future<DescribeEventsOutcome> DescribeEventsOutcomeCallable;
        typedef std::future<DescribeEventsForOrganizationOutcome> DescribeEventsForOrganizationOutcomeCallable;
        typedef std::future<DescribeHealthServiceStatusForOrganizationOutcome> DescribeHealthServiceStatusForOrganizationOutcomeCallable;
        typedef std::future<DisableHealthServiceAccessForOrganizationOutcome> DisableHealthServiceAccessForOrganizationOutcomeCallable;
        typedef std::future<EnableHealthServiceAccessForOrganizationOutcome> EnableHealthServiceAccessForOrganizationOutcomeCallable;
} // namespace Model

  class HealthClient;

    typedef std::function<void(const HealthClient*, const Model::DescribeAffectedAccountsForOrganizationRequest&, const Model::DescribeAffectedAccountsForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAffectedAccountsForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeAffectedEntitiesRequest&, const Model::DescribeAffectedEntitiesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAffectedEntitiesResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeAffectedEntitiesForOrganizationRequest&, const Model::DescribeAffectedEntitiesForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeAffectedEntitiesForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEntityAggregatesRequest&, const Model::DescribeEntityAggregatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEntityAggregatesResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventAggregatesRequest&, const Model::DescribeEventAggregatesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventAggregatesResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventDetailsRequest&, const Model::DescribeEventDetailsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventDetailsResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventDetailsForOrganizationRequest&, const Model::DescribeEventDetailsForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventDetailsForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventTypesRequest&, const Model::DescribeEventTypesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventTypesResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventsRequest&, const Model::DescribeEventsOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeEventsForOrganizationRequest&, const Model::DescribeEventsForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeEventsForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DescribeHealthServiceStatusForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeHealthServiceStatusForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::DisableHealthServiceAccessForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DisableHealthServiceAccessForOrganizationResponseReceivedHandler;
    typedef std::function<void(const HealthClient*, const Model::EnableHealthServiceAccessForOrganizationOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > EnableHealthServiceAccessForOrganizationResponseReceivedHandler;

  /**
   * <fullname>AWS Health</fullname> <p>The AWS Health API provides programmatic
   * access to the AWS Health information that appears in the <a
   * href="https://phd.aws.amazon.com/phd/home#/">AWS Personal Health Dashboard</a>.
   * You can use the API operations to get information about AWS Health events that
   * affect your AWS services and resources.</p>  <p>You must have a Business
   * or Enterprise support plan from <a
   * href="http://aws.amazon.com/premiumsupport/">AWS Support</a> to use the AWS
   * Health API. If you call the AWS Health API from an AWS account that doesn't have
   * a Business or Enterprise support plan, you receive a
   * <code>SubscriptionRequiredException</code> error.</p>  <p>AWS Health has
   * a single endpoint: health.us-east-1.amazonaws.com (HTTPS). Use this endpoint to
   * call the AWS Health API operations.</p> <p>For authentication of requests, AWS
   * Health uses the <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a>.</p> <p>If your AWS account is part of AWS
   * Organizations, you can use the AWS Health organizational view feature. This
   * feature provides a centralized view of AWS Health events across all accounts in
   * your organization. You can aggregate AWS Health events in real time to identify
   * accounts in your organization that are affected by an operational event or get
   * notified of security vulnerabilities. Use the organizational view API operations
   * to enable this feature and return event information. For more information, see
   * <a
   * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating
   * AWS Health events</a> in the <i>AWS Health User Guide</i>.</p>  <p>When
   * you use the AWS Health API operations to return AWS Health events, see the
   * following recommendations:</p> <ul> <li> <p>Use the <a
   * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html#AWSHealth-Type-Event-eventScopeCode">eventScopeCode</a>
   * parameter to specify whether to return AWS Health events that are public or
   * account-specific.</p> </li> <li> <p>Use pagination to view all events from the
   * response. For example, if you call the
   * <code>DescribeEventsForOrganization</code> operation to get all events in your
   * organization, you might receive several page results. Specify the
   * <code>nextToken</code> in the next request to return more results.</p> </li>
   * </ul> 
   */
  class AWS_HEALTH_API HealthClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        HealthClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        HealthClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~HealthClient();


        /**
         * <p>Returns a list of accounts in the organization from AWS Organizations that
         * are affected by the provided event. For more information about the different
         * types of AWS Health events, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.
         * </p> <p>Before you can call this operation, you must first enable AWS Health to
         * work with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master account.</p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * next request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeAffectedAccountsForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAffectedAccountsForOrganizationOutcome DescribeAffectedAccountsForOrganization(const Model::DescribeAffectedAccountsForOrganizationRequest& request) const;

        /**
         * <p>Returns a list of accounts in the organization from AWS Organizations that
         * are affected by the provided event. For more information about the different
         * types of AWS Health events, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.
         * </p> <p>Before you can call this operation, you must first enable AWS Health to
         * work with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master account.</p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * next request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeAffectedAccountsForOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAffectedAccountsForOrganizationOutcomeCallable DescribeAffectedAccountsForOrganizationCallable(const Model::DescribeAffectedAccountsForOrganizationRequest& request) const;

        /**
         * <p>Returns a list of accounts in the organization from AWS Organizations that
         * are affected by the provided event. For more information about the different
         * types of AWS Health events, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.
         * </p> <p>Before you can call this operation, you must first enable AWS Health to
         * work with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master account.</p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * next request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeAffectedAccountsForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAffectedAccountsForOrganizationAsync(const Model::DescribeAffectedAccountsForOrganizationRequest& request, const DescribeAffectedAccountsForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of entities that have been affected by the specified events,
         * based on the specified filter criteria. Entities can refer to individual
         * customer resources, groups of customer resources, or any other construct,
         * depending on the AWS service. Events that have impact beyond that of the
         * affected entities, or where the extent of impact is unknown, include at least
         * one entity indicating this.</p> <p>At least one event ARN is required. Results
         * are sorted by the <code>lastUpdatedTime</code> of the entity, starting with the
         * most recent.</p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the next request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeAffectedEntities">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAffectedEntitiesOutcome DescribeAffectedEntities(const Model::DescribeAffectedEntitiesRequest& request) const;

        /**
         * <p>Returns a list of entities that have been affected by the specified events,
         * based on the specified filter criteria. Entities can refer to individual
         * customer resources, groups of customer resources, or any other construct,
         * depending on the AWS service. Events that have impact beyond that of the
         * affected entities, or where the extent of impact is unknown, include at least
         * one entity indicating this.</p> <p>At least one event ARN is required. Results
         * are sorted by the <code>lastUpdatedTime</code> of the entity, starting with the
         * most recent.</p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the next request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeAffectedEntities">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAffectedEntitiesOutcomeCallable DescribeAffectedEntitiesCallable(const Model::DescribeAffectedEntitiesRequest& request) const;

        /**
         * <p>Returns a list of entities that have been affected by the specified events,
         * based on the specified filter criteria. Entities can refer to individual
         * customer resources, groups of customer resources, or any other construct,
         * depending on the AWS service. Events that have impact beyond that of the
         * affected entities, or where the extent of impact is unknown, include at least
         * one entity indicating this.</p> <p>At least one event ARN is required. Results
         * are sorted by the <code>lastUpdatedTime</code> of the entity, starting with the
         * most recent.</p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the next request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeAffectedEntities">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAffectedEntitiesAsync(const Model::DescribeAffectedEntitiesRequest& request, const DescribeAffectedEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of entities that have been affected by one or more events for
         * one or more accounts in your organization in AWS Organizations, based on the
         * filter criteria. Entities can refer to individual customer resources, groups of
         * customer resources, or any other construct, depending on the AWS service.</p>
         * <p>At least one event Amazon Resource Name (ARN) and account ID are required.
         * Results are sorted by the <code>lastUpdatedTime</code> of the entity, starting
         * with the most recent.</p> <p>Before you can call this operation, you must first
         * enable AWS Health to work with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master account. </p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * next request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeAffectedEntitiesForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAffectedEntitiesForOrganizationOutcome DescribeAffectedEntitiesForOrganization(const Model::DescribeAffectedEntitiesForOrganizationRequest& request) const;

        /**
         * <p>Returns a list of entities that have been affected by one or more events for
         * one or more accounts in your organization in AWS Organizations, based on the
         * filter criteria. Entities can refer to individual customer resources, groups of
         * customer resources, or any other construct, depending on the AWS service.</p>
         * <p>At least one event Amazon Resource Name (ARN) and account ID are required.
         * Results are sorted by the <code>lastUpdatedTime</code> of the entity, starting
         * with the most recent.</p> <p>Before you can call this operation, you must first
         * enable AWS Health to work with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master account. </p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * next request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeAffectedEntitiesForOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAffectedEntitiesForOrganizationOutcomeCallable DescribeAffectedEntitiesForOrganizationCallable(const Model::DescribeAffectedEntitiesForOrganizationRequest& request) const;

        /**
         * <p>Returns a list of entities that have been affected by one or more events for
         * one or more accounts in your organization in AWS Organizations, based on the
         * filter criteria. Entities can refer to individual customer resources, groups of
         * customer resources, or any other construct, depending on the AWS service.</p>
         * <p>At least one event Amazon Resource Name (ARN) and account ID are required.
         * Results are sorted by the <code>lastUpdatedTime</code> of the entity, starting
         * with the most recent.</p> <p>Before you can call this operation, you must first
         * enable AWS Health to work with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master account. </p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * next request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeAffectedEntitiesForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAffectedEntitiesForOrganizationAsync(const Model::DescribeAffectedEntitiesForOrganizationRequest& request, const DescribeAffectedEntitiesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the number of entities that are affected by each of the specified
         * events. If no events are specified, the counts of all affected entities are
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEntityAggregates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEntityAggregatesOutcome DescribeEntityAggregates(const Model::DescribeEntityAggregatesRequest& request) const;

        /**
         * <p>Returns the number of entities that are affected by each of the specified
         * events. If no events are specified, the counts of all affected entities are
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEntityAggregates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEntityAggregatesOutcomeCallable DescribeEntityAggregatesCallable(const Model::DescribeEntityAggregatesRequest& request) const;

        /**
         * <p>Returns the number of entities that are affected by each of the specified
         * events. If no events are specified, the counts of all affected entities are
         * returned.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEntityAggregates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEntityAggregatesAsync(const Model::DescribeEntityAggregatesRequest& request, const DescribeEntityAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the number of events of each event type (issue, scheduled change, and
         * account notification). If no filter is specified, the counts of all events in
         * each category are returned.</p>  <p>This API operation uses pagination.
         * Specify the <code>nextToken</code> parameter in the next request to return more
         * results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventAggregates">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventAggregatesOutcome DescribeEventAggregates(const Model::DescribeEventAggregatesRequest& request) const;

        /**
         * <p>Returns the number of events of each event type (issue, scheduled change, and
         * account notification). If no filter is specified, the counts of all events in
         * each category are returned.</p>  <p>This API operation uses pagination.
         * Specify the <code>nextToken</code> parameter in the next request to return more
         * results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventAggregates">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventAggregatesOutcomeCallable DescribeEventAggregatesCallable(const Model::DescribeEventAggregatesRequest& request) const;

        /**
         * <p>Returns the number of events of each event type (issue, scheduled change, and
         * account notification). If no filter is specified, the counts of all events in
         * each category are returned.</p>  <p>This API operation uses pagination.
         * Specify the <code>nextToken</code> parameter in the next request to return more
         * results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventAggregates">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventAggregatesAsync(const Model::DescribeEventAggregatesRequest& request, const DescribeEventAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about one or more specified events. Information
         * includes standard event data (Region, service, and so on, as returned by <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a>),
         * a detailed event description, and possible additional metadata that depends upon
         * the nature of the event. Affected entities are not included. To retrieve those,
         * use the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntities.html">DescribeAffectedEntities</a>
         * operation.</p> <p>If a specified event cannot be retrieved, an error message is
         * returned for that event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventDetailsOutcome DescribeEventDetails(const Model::DescribeEventDetailsRequest& request) const;

        /**
         * <p>Returns detailed information about one or more specified events. Information
         * includes standard event data (Region, service, and so on, as returned by <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a>),
         * a detailed event description, and possible additional metadata that depends upon
         * the nature of the event. Affected entities are not included. To retrieve those,
         * use the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntities.html">DescribeAffectedEntities</a>
         * operation.</p> <p>If a specified event cannot be retrieved, an error message is
         * returned for that event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventDetails">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventDetailsOutcomeCallable DescribeEventDetailsCallable(const Model::DescribeEventDetailsRequest& request) const;

        /**
         * <p>Returns detailed information about one or more specified events. Information
         * includes standard event data (Region, service, and so on, as returned by <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEvents.html">DescribeEvents</a>),
         * a detailed event description, and possible additional metadata that depends upon
         * the nature of the event. Affected entities are not included. To retrieve those,
         * use the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntities.html">DescribeAffectedEntities</a>
         * operation.</p> <p>If a specified event cannot be retrieved, an error message is
         * returned for that event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventDetails">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventDetailsAsync(const Model::DescribeEventDetailsRequest& request, const DescribeEventDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns detailed information about one or more specified events for one or
         * more accounts in your organization. Information includes standard event data
         * (Region, service, and so on, as returned by <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventsForOrganization.html">DescribeEventsForOrganization</a>),
         * a detailed event description, and possible additional metadata that depends upon
         * the nature of the event. Affected entities are not included; to retrieve those,
         * use the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntitiesForOrganization.html">DescribeAffectedEntitiesForOrganization</a>
         * operation.</p> <p>Before you can call this operation, you must first enable AWS
         * Health to work with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master account.</p> <p>When you call the
         * <code>DescribeEventDetailsForOrganization</code> operation, you specify the
         * <code>organizationEventDetailFilters</code> object in the request. Depending on
         * the AWS Health event type, note the following differences:</p> <ul> <li> <p>If
         * the event is public, the <code>awsAccountId</code> parameter must be empty. If
         * you specify an account ID for a public event, then an error message is returned.
         * That's because the event might apply to all AWS accounts and isn't specific to
         * an account in your organization.</p> </li> <li> <p>If the event is specific to
         * an account, then you must specify the <code>awsAccountId</code> parameter in the
         * request. If you don't specify an account ID, an error message returns because
         * the event is specific to an AWS account in your organization. </p> </li> </ul>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventDetailsForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventDetailsForOrganizationOutcome DescribeEventDetailsForOrganization(const Model::DescribeEventDetailsForOrganizationRequest& request) const;

        /**
         * <p>Returns detailed information about one or more specified events for one or
         * more accounts in your organization. Information includes standard event data
         * (Region, service, and so on, as returned by <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventsForOrganization.html">DescribeEventsForOrganization</a>),
         * a detailed event description, and possible additional metadata that depends upon
         * the nature of the event. Affected entities are not included; to retrieve those,
         * use the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntitiesForOrganization.html">DescribeAffectedEntitiesForOrganization</a>
         * operation.</p> <p>Before you can call this operation, you must first enable AWS
         * Health to work with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master account.</p> <p>When you call the
         * <code>DescribeEventDetailsForOrganization</code> operation, you specify the
         * <code>organizationEventDetailFilters</code> object in the request. Depending on
         * the AWS Health event type, note the following differences:</p> <ul> <li> <p>If
         * the event is public, the <code>awsAccountId</code> parameter must be empty. If
         * you specify an account ID for a public event, then an error message is returned.
         * That's because the event might apply to all AWS accounts and isn't specific to
         * an account in your organization.</p> </li> <li> <p>If the event is specific to
         * an account, then you must specify the <code>awsAccountId</code> parameter in the
         * request. If you don't specify an account ID, an error message returns because
         * the event is specific to an AWS account in your organization. </p> </li> </ul>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventDetailsForOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventDetailsForOrganizationOutcomeCallable DescribeEventDetailsForOrganizationCallable(const Model::DescribeEventDetailsForOrganizationRequest& request) const;

        /**
         * <p>Returns detailed information about one or more specified events for one or
         * more accounts in your organization. Information includes standard event data
         * (Region, service, and so on, as returned by <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventsForOrganization.html">DescribeEventsForOrganization</a>),
         * a detailed event description, and possible additional metadata that depends upon
         * the nature of the event. Affected entities are not included; to retrieve those,
         * use the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntitiesForOrganization.html">DescribeAffectedEntitiesForOrganization</a>
         * operation.</p> <p>Before you can call this operation, you must first enable AWS
         * Health to work with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master account.</p> <p>When you call the
         * <code>DescribeEventDetailsForOrganization</code> operation, you specify the
         * <code>organizationEventDetailFilters</code> object in the request. Depending on
         * the AWS Health event type, note the following differences:</p> <ul> <li> <p>If
         * the event is public, the <code>awsAccountId</code> parameter must be empty. If
         * you specify an account ID for a public event, then an error message is returned.
         * That's because the event might apply to all AWS accounts and isn't specific to
         * an account in your organization.</p> </li> <li> <p>If the event is specific to
         * an account, then you must specify the <code>awsAccountId</code> parameter in the
         * request. If you don't specify an account ID, an error message returns because
         * the event is specific to an AWS account in your organization. </p> </li> </ul>
         * <p>For more information, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventDetailsForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventDetailsForOrganizationAsync(const Model::DescribeEventDetailsForOrganizationRequest& request, const DescribeEventDetailsForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the event types that meet the specified filter criteria. If no filter
         * criteria are specified, all event types are returned, in no particular
         * order.</p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the next request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventTypesOutcome DescribeEventTypes(const Model::DescribeEventTypesRequest& request) const;

        /**
         * <p>Returns the event types that meet the specified filter criteria. If no filter
         * criteria are specified, all event types are returned, in no particular
         * order.</p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the next request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventTypes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventTypesOutcomeCallable DescribeEventTypesCallable(const Model::DescribeEventTypesRequest& request) const;

        /**
         * <p>Returns the event types that meet the specified filter criteria. If no filter
         * criteria are specified, all event types are returned, in no particular
         * order.</p>  <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the next request to return more results.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventTypes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventTypesAsync(const Model::DescribeEventTypesRequest& request, const DescribeEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns information about events that meet the specified filter criteria.
         * Events are returned in a summary form and do not include the detailed
         * description, any additional metadata that depends on the event type, or any
         * affected resources. To retrieve that information, use the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetails.html">DescribeEventDetails</a>
         * and <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntities.html">DescribeAffectedEntities</a>
         * operations.</p> <p>If no filter criteria are specified, all events are returned.
         * Results are sorted by <code>lastModifiedTime</code>, starting with the most
         * recent event.</p>  <ul> <li> <p>When you call the
         * <code>DescribeEvents</code> operation and specify an entity for the
         * <code>entityValues</code> parameter, AWS Health might return public events that
         * aren't specific to that resource. For example, if you call
         * <code>DescribeEvents</code> and specify an ID for an Amazon Elastic Compute
         * Cloud (Amazon EC2) instance, AWS Health might return events that aren't specific
         * to that resource or service. To get events that are specific to a service, use
         * the <code>services</code> parameter in the <code>filter</code> object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.</p>
         * </li> <li> <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the next request to return more results.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsOutcome DescribeEvents(const Model::DescribeEventsRequest& request) const;

        /**
         * <p> Returns information about events that meet the specified filter criteria.
         * Events are returned in a summary form and do not include the detailed
         * description, any additional metadata that depends on the event type, or any
         * affected resources. To retrieve that information, use the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetails.html">DescribeEventDetails</a>
         * and <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntities.html">DescribeAffectedEntities</a>
         * operations.</p> <p>If no filter criteria are specified, all events are returned.
         * Results are sorted by <code>lastModifiedTime</code>, starting with the most
         * recent event.</p>  <ul> <li> <p>When you call the
         * <code>DescribeEvents</code> operation and specify an entity for the
         * <code>entityValues</code> parameter, AWS Health might return public events that
         * aren't specific to that resource. For example, if you call
         * <code>DescribeEvents</code> and specify an ID for an Amazon Elastic Compute
         * Cloud (Amazon EC2) instance, AWS Health might return events that aren't specific
         * to that resource or service. To get events that are specific to a service, use
         * the <code>services</code> parameter in the <code>filter</code> object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.</p>
         * </li> <li> <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the next request to return more results.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsOutcomeCallable DescribeEventsCallable(const Model::DescribeEventsRequest& request) const;

        /**
         * <p> Returns information about events that meet the specified filter criteria.
         * Events are returned in a summary form and do not include the detailed
         * description, any additional metadata that depends on the event type, or any
         * affected resources. To retrieve that information, use the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetails.html">DescribeEventDetails</a>
         * and <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntities.html">DescribeAffectedEntities</a>
         * operations.</p> <p>If no filter criteria are specified, all events are returned.
         * Results are sorted by <code>lastModifiedTime</code>, starting with the most
         * recent event.</p>  <ul> <li> <p>When you call the
         * <code>DescribeEvents</code> operation and specify an entity for the
         * <code>entityValues</code> parameter, AWS Health might return public events that
         * aren't specific to that resource. For example, if you call
         * <code>DescribeEvents</code> and specify an ID for an Amazon Elastic Compute
         * Cloud (Amazon EC2) instance, AWS Health might return events that aren't specific
         * to that resource or service. To get events that are specific to a service, use
         * the <code>services</code> parameter in the <code>filter</code> object. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.</p>
         * </li> <li> <p>This API operation uses pagination. Specify the
         * <code>nextToken</code> parameter in the next request to return more results.</p>
         * </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEvents">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsAsync(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about events across your organization in AWS
         * Organizations. You can use the<code>filters</code> parameter to specify the
         * events that you want to return. Events are returned in a summary form and don't
         * include the affected accounts, detailed description, any additional metadata
         * that depends on the event type, or any affected resources. To retrieve that
         * information, use the following operations:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedAccountsForOrganization.html">DescribeAffectedAccountsForOrganization</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetailsForOrganization.html">DescribeEventDetailsForOrganization</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntitiesForOrganization.html">DescribeAffectedEntitiesForOrganization</a>
         * </p> </li> </ul> <p>If you don't specify a <code>filter</code>, the
         * <code>DescribeEventsForOrganizations</code> returns all events across your
         * organization. Results are sorted by <code>lastModifiedTime</code>, starting with
         * the most recent event. </p> <p>For more information about the different types of
         * AWS Health events, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.</p>
         * <p>Before you can call this operation, you must first enable AWS Health to work
         * with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master AWS account.</p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * next request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventsForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventsForOrganizationOutcome DescribeEventsForOrganization(const Model::DescribeEventsForOrganizationRequest& request) const;

        /**
         * <p>Returns information about events across your organization in AWS
         * Organizations. You can use the<code>filters</code> parameter to specify the
         * events that you want to return. Events are returned in a summary form and don't
         * include the affected accounts, detailed description, any additional metadata
         * that depends on the event type, or any affected resources. To retrieve that
         * information, use the following operations:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedAccountsForOrganization.html">DescribeAffectedAccountsForOrganization</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetailsForOrganization.html">DescribeEventDetailsForOrganization</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntitiesForOrganization.html">DescribeAffectedEntitiesForOrganization</a>
         * </p> </li> </ul> <p>If you don't specify a <code>filter</code>, the
         * <code>DescribeEventsForOrganizations</code> returns all events across your
         * organization. Results are sorted by <code>lastModifiedTime</code>, starting with
         * the most recent event. </p> <p>For more information about the different types of
         * AWS Health events, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.</p>
         * <p>Before you can call this operation, you must first enable AWS Health to work
         * with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master AWS account.</p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * next request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventsForOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventsForOrganizationOutcomeCallable DescribeEventsForOrganizationCallable(const Model::DescribeEventsForOrganizationRequest& request) const;

        /**
         * <p>Returns information about events across your organization in AWS
         * Organizations. You can use the<code>filters</code> parameter to specify the
         * events that you want to return. Events are returned in a summary form and don't
         * include the affected accounts, detailed description, any additional metadata
         * that depends on the event type, or any affected resources. To retrieve that
         * information, use the following operations:</p> <ul> <li> <p> <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedAccountsForOrganization.html">DescribeAffectedAccountsForOrganization</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeEventDetailsForOrganization.html">DescribeEventDetailsForOrganization</a>
         * </p> </li> <li> <p> <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_DescribeAffectedEntitiesForOrganization.html">DescribeAffectedEntitiesForOrganization</a>
         * </p> </li> </ul> <p>If you don't specify a <code>filter</code>, the
         * <code>DescribeEventsForOrganizations</code> returns all events across your
         * organization. Results are sorted by <code>lastModifiedTime</code>, starting with
         * the most recent event. </p> <p>For more information about the different types of
         * AWS Health events, see <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_Event.html">Event</a>.</p>
         * <p>Before you can call this operation, you must first enable AWS Health to work
         * with AWS Organizations. To do this, call the <a
         * href="https://docs.aws.amazon.com/health/latest/APIReference/API_EnableHealthServiceAccessForOrganization.html">EnableHealthServiceAccessForOrganization</a>
         * operation from your organization's master AWS account.</p>  <p>This API
         * operation uses pagination. Specify the <code>nextToken</code> parameter in the
         * next request to return more results.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeEventsForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventsForOrganizationAsync(const Model::DescribeEventsForOrganizationRequest& request, const DescribeEventsForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This operation provides status information on enabling or disabling AWS
         * Health to work with your organization. To call this operation, you must sign in
         * as an IAM user, assume an IAM role, or sign in as the root user (not
         * recommended) in the organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeHealthServiceStatusForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeHealthServiceStatusForOrganizationOutcome DescribeHealthServiceStatusForOrganization() const;

        /**
         * <p>This operation provides status information on enabling or disabling AWS
         * Health to work with your organization. To call this operation, you must sign in
         * as an IAM user, assume an IAM role, or sign in as the root user (not
         * recommended) in the organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeHealthServiceStatusForOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeHealthServiceStatusForOrganizationOutcomeCallable DescribeHealthServiceStatusForOrganizationCallable() const;

        /**
         * <p>This operation provides status information on enabling or disabling AWS
         * Health to work with your organization. To call this operation, you must sign in
         * as an IAM user, assume an IAM role, or sign in as the root user (not
         * recommended) in the organization's master account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DescribeHealthServiceStatusForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeHealthServiceStatusForOrganizationAsync(const DescribeHealthServiceStatusForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Disables AWS Health from working with AWS Organizations. To call this
         * operation, you must sign in as an AWS Identity and Access Management (IAM) user,
         * assume an IAM role, or sign in as the root user (not recommended) in the
         * organization's master AWS account. For more information, see <a
         * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating
         * AWS Health events</a> in the <i>AWS Health User Guide</i>.</p> <p>This operation
         * doesn't remove the service-linked role (SLR) from the AWS master account in your
         * organization. You must use the IAM console, API, or AWS Command Line Interface
         * (AWS CLI) to remove the SLR. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html#delete-service-linked-role">Deleting
         * a Service-Linked Role</a> in the <i>IAM User Guide</i>.</p>  <p>You can
         * also disable the organizational feature by using the Organizations <a
         * href="https://docs.aws.amazon.com/organizations/latest/APIReference/API_DisableAWSServiceAccess.html">DisableAWSServiceAccess</a>
         * API operation. After you call this operation, AWS Health stops aggregating
         * events for all other AWS accounts in your organization. If you call the AWS
         * Health API operations for organizational view, AWS Health returns an error. AWS
         * Health continues to aggregate health events for your AWS account.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DisableHealthServiceAccessForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableHealthServiceAccessForOrganizationOutcome DisableHealthServiceAccessForOrganization() const;

        /**
         * <p>Disables AWS Health from working with AWS Organizations. To call this
         * operation, you must sign in as an AWS Identity and Access Management (IAM) user,
         * assume an IAM role, or sign in as the root user (not recommended) in the
         * organization's master AWS account. For more information, see <a
         * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating
         * AWS Health events</a> in the <i>AWS Health User Guide</i>.</p> <p>This operation
         * doesn't remove the service-linked role (SLR) from the AWS master account in your
         * organization. You must use the IAM console, API, or AWS Command Line Interface
         * (AWS CLI) to remove the SLR. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html#delete-service-linked-role">Deleting
         * a Service-Linked Role</a> in the <i>IAM User Guide</i>.</p>  <p>You can
         * also disable the organizational feature by using the Organizations <a
         * href="https://docs.aws.amazon.com/organizations/latest/APIReference/API_DisableAWSServiceAccess.html">DisableAWSServiceAccess</a>
         * API operation. After you call this operation, AWS Health stops aggregating
         * events for all other AWS accounts in your organization. If you call the AWS
         * Health API operations for organizational view, AWS Health returns an error. AWS
         * Health continues to aggregate health events for your AWS account.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DisableHealthServiceAccessForOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableHealthServiceAccessForOrganizationOutcomeCallable DisableHealthServiceAccessForOrganizationCallable() const;

        /**
         * <p>Disables AWS Health from working with AWS Organizations. To call this
         * operation, you must sign in as an AWS Identity and Access Management (IAM) user,
         * assume an IAM role, or sign in as the root user (not recommended) in the
         * organization's master AWS account. For more information, see <a
         * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating
         * AWS Health events</a> in the <i>AWS Health User Guide</i>.</p> <p>This operation
         * doesn't remove the service-linked role (SLR) from the AWS master account in your
         * organization. You must use the IAM console, API, or AWS Command Line Interface
         * (AWS CLI) to remove the SLR. For more information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/using-service-linked-roles.html#delete-service-linked-role">Deleting
         * a Service-Linked Role</a> in the <i>IAM User Guide</i>.</p>  <p>You can
         * also disable the organizational feature by using the Organizations <a
         * href="https://docs.aws.amazon.com/organizations/latest/APIReference/API_DisableAWSServiceAccess.html">DisableAWSServiceAccess</a>
         * API operation. After you call this operation, AWS Health stops aggregating
         * events for all other AWS accounts in your organization. If you call the AWS
         * Health API operations for organizational view, AWS Health returns an error. AWS
         * Health continues to aggregate health events for your AWS account.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/DisableHealthServiceAccessForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableHealthServiceAccessForOrganizationAsync(const DisableHealthServiceAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
        /**
         * <p>Calling this operation enables AWS Health to work with AWS Organizations.
         * This applies a service-linked role (SLR) to the master account in the
         * organization. To call this operation, you must sign in as an IAM user, assume an
         * IAM role, or sign in as the root user (not recommended) in the organization's
         * master account.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating
         * AWS Health events</a> in the <i>AWS Health User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EnableHealthServiceAccessForOrganization">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableHealthServiceAccessForOrganizationOutcome EnableHealthServiceAccessForOrganization() const;

        /**
         * <p>Calling this operation enables AWS Health to work with AWS Organizations.
         * This applies a service-linked role (SLR) to the master account in the
         * organization. To call this operation, you must sign in as an IAM user, assume an
         * IAM role, or sign in as the root user (not recommended) in the organization's
         * master account.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating
         * AWS Health events</a> in the <i>AWS Health User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EnableHealthServiceAccessForOrganization">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableHealthServiceAccessForOrganizationOutcomeCallable EnableHealthServiceAccessForOrganizationCallable() const;

        /**
         * <p>Calling this operation enables AWS Health to work with AWS Organizations.
         * This applies a service-linked role (SLR) to the master account in the
         * organization. To call this operation, you must sign in as an IAM user, assume an
         * IAM role, or sign in as the root user (not recommended) in the organization's
         * master account.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/health/latest/ug/aggregate-events.html">Aggregating
         * AWS Health events</a> in the <i>AWS Health User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/EnableHealthServiceAccessForOrganization">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableHealthServiceAccessForOrganizationAsync(const EnableHealthServiceAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        void DescribeAffectedAccountsForOrganizationAsyncHelper(const Model::DescribeAffectedAccountsForOrganizationRequest& request, const DescribeAffectedAccountsForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAffectedEntitiesAsyncHelper(const Model::DescribeAffectedEntitiesRequest& request, const DescribeAffectedEntitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeAffectedEntitiesForOrganizationAsyncHelper(const Model::DescribeAffectedEntitiesForOrganizationRequest& request, const DescribeAffectedEntitiesForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEntityAggregatesAsyncHelper(const Model::DescribeEntityAggregatesRequest& request, const DescribeEntityAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventAggregatesAsyncHelper(const Model::DescribeEventAggregatesRequest& request, const DescribeEventAggregatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventDetailsAsyncHelper(const Model::DescribeEventDetailsRequest& request, const DescribeEventDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventDetailsForOrganizationAsyncHelper(const Model::DescribeEventDetailsForOrganizationRequest& request, const DescribeEventDetailsForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventTypesAsyncHelper(const Model::DescribeEventTypesRequest& request, const DescribeEventTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsAsyncHelper(const Model::DescribeEventsRequest& request, const DescribeEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeEventsForOrganizationAsyncHelper(const Model::DescribeEventsForOrganizationRequest& request, const DescribeEventsForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeHealthServiceStatusForOrganizationAsyncHelper(const DescribeHealthServiceStatusForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DisableHealthServiceAccessForOrganizationAsyncHelper(const DisableHealthServiceAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void EnableHealthServiceAccessForOrganizationAsyncHelper(const EnableHealthServiceAccessForOrganizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace Health
} // namespace Aws
