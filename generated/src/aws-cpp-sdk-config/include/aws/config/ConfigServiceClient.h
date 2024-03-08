/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/config/ConfigServiceServiceClientModel.h>
#include <aws/config/model/GetComplianceSummaryByConfigRuleRequest.h>

namespace Aws
{
namespace ConfigService
{
  /**
   * <fullname>Config</fullname> <p>Config provides a way to keep track of the
   * configurations of all the Amazon Web Services resources associated with your
   * Amazon Web Services account. You can use Config to get the current and
   * historical configurations of each Amazon Web Services resource and also to get
   * information about the relationship between the resources. An Amazon Web Services
   * resource can be an Amazon Compute Cloud (Amazon EC2) instance, an Elastic Block
   * Store (EBS) volume, an elastic network Interface (ENI), or a security group. For
   * a complete list of resources currently supported by Config, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/resource-config-reference.html#supported-resources">Supported
   * Amazon Web Services resources</a>.</p> <p>You can access and manage Config
   * through the Amazon Web Services Management Console, the Amazon Web Services
   * Command Line Interface (Amazon Web Services CLI), the Config API, or the Amazon
   * Web Services SDKs for Config. This reference guide contains documentation for
   * the Config API and the Amazon Web Services CLI commands that you can use to
   * manage Config. The Config API uses the Signature Version 4 protocol for signing
   * requests. For more information about how to sign a request with this protocol,
   * see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Signature
   * Version 4 Signing Process</a>. For detailed information about Config features
   * and their associated actions or commands, as well as how to work with Amazon Web
   * Services Management Console, see <a
   * href="https://docs.aws.amazon.com/config/latest/developerguide/WhatIsConfig.html">What
   * Is Config</a> in the <i>Config Developer Guide</i>.</p>
   */
  class AWS_CONFIGSERVICE_API ConfigServiceClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ConfigServiceClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ConfigServiceClientConfiguration ClientConfigurationType;
      typedef ConfigServiceEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConfigServiceClient(const Aws::ConfigService::ConfigServiceClientConfiguration& clientConfiguration = Aws::ConfigService::ConfigServiceClientConfiguration(),
                            std::shared_ptr<ConfigServiceEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConfigServiceClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<ConfigServiceEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::ConfigService::ConfigServiceClientConfiguration& clientConfiguration = Aws::ConfigService::ConfigServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConfigServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<ConfigServiceEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::ConfigService::ConfigServiceClientConfiguration& clientConfiguration = Aws::ConfigService::ConfigServiceClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConfigServiceClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConfigServiceClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConfigServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ConfigServiceClient();

        /**
         * <p>Returns the current configuration items for resources that are present in
         * your Config aggregator. The operation also returns a list of resources that are
         * not processed in the current request. If there are no unprocessed resources, the
         * operation returns an empty <code>unprocessedResourceIdentifiers</code> list.
         * </p>  <ul> <li> <p>The API does not return results for deleted
         * resources.</p> </li> <li> <p> The API does not return tags and
         * relationships.</p> </li> </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/BatchGetAggregateResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetAggregateResourceConfigOutcome BatchGetAggregateResourceConfig(const Model::BatchGetAggregateResourceConfigRequest& request) const;

        /**
         * A Callable wrapper for BatchGetAggregateResourceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetAggregateResourceConfigRequestT = Model::BatchGetAggregateResourceConfigRequest>
        Model::BatchGetAggregateResourceConfigOutcomeCallable BatchGetAggregateResourceConfigCallable(const BatchGetAggregateResourceConfigRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::BatchGetAggregateResourceConfig, request);
        }

        /**
         * An Async wrapper for BatchGetAggregateResourceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetAggregateResourceConfigRequestT = Model::BatchGetAggregateResourceConfigRequest>
        void BatchGetAggregateResourceConfigAsync(const BatchGetAggregateResourceConfigRequestT& request, const BatchGetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::BatchGetAggregateResourceConfig, request, handler, context);
        }

        /**
         * <p>Returns the <code>BaseConfigurationItem</code> for one or more requested
         * resources. The operation also returns a list of resources that are not processed
         * in the current request. If there are no unprocessed resources, the operation
         * returns an empty unprocessedResourceKeys list. </p>  <ul> <li> <p>The API
         * does not return results for deleted resources.</p> </li> <li> <p> The API does
         * not return any tags for the requested resources. This information is filtered
         * out of the supplementaryConfiguration section of the API response.</p> </li>
         * </ul> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/BatchGetResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::BatchGetResourceConfigOutcome BatchGetResourceConfig(const Model::BatchGetResourceConfigRequest& request) const;

        /**
         * A Callable wrapper for BatchGetResourceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename BatchGetResourceConfigRequestT = Model::BatchGetResourceConfigRequest>
        Model::BatchGetResourceConfigOutcomeCallable BatchGetResourceConfigCallable(const BatchGetResourceConfigRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::BatchGetResourceConfig, request);
        }

        /**
         * An Async wrapper for BatchGetResourceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename BatchGetResourceConfigRequestT = Model::BatchGetResourceConfigRequest>
        void BatchGetResourceConfigAsync(const BatchGetResourceConfigRequestT& request, const BatchGetResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::BatchGetResourceConfig, request, handler, context);
        }

        /**
         * <p>Deletes the authorization granted to the specified configuration aggregator
         * account in a specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteAggregationAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAggregationAuthorizationOutcome DeleteAggregationAuthorization(const Model::DeleteAggregationAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAggregationAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAggregationAuthorizationRequestT = Model::DeleteAggregationAuthorizationRequest>
        Model::DeleteAggregationAuthorizationOutcomeCallable DeleteAggregationAuthorizationCallable(const DeleteAggregationAuthorizationRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteAggregationAuthorization, request);
        }

        /**
         * An Async wrapper for DeleteAggregationAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAggregationAuthorizationRequestT = Model::DeleteAggregationAuthorizationRequest>
        void DeleteAggregationAuthorizationAsync(const DeleteAggregationAuthorizationRequestT& request, const DeleteAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteAggregationAuthorization, request, handler, context);
        }

        /**
         * <p>Deletes the specified Config rule and all of its evaluation results.</p>
         * <p>Config sets the state of a rule to <code>DELETING</code> until the deletion
         * is complete. You cannot update a rule while it is in this state. If you make a
         * <code>PutConfigRule</code> or <code>DeleteConfigRule</code> request for the
         * rule, you will receive a <code>ResourceInUseException</code>.</p> <p>You can
         * check the state of a rule by using the <code>DescribeConfigRules</code>
         * request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigRuleOutcome DeleteConfigRule(const Model::DeleteConfigRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigRuleRequestT = Model::DeleteConfigRuleRequest>
        Model::DeleteConfigRuleOutcomeCallable DeleteConfigRuleCallable(const DeleteConfigRuleRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteConfigRule, request);
        }

        /**
         * An Async wrapper for DeleteConfigRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigRuleRequestT = Model::DeleteConfigRuleRequest>
        void DeleteConfigRuleAsync(const DeleteConfigRuleRequestT& request, const DeleteConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteConfigRule, request, handler, context);
        }

        /**
         * <p>Deletes the specified configuration aggregator and the aggregated data
         * associated with the aggregator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationAggregatorOutcome DeleteConfigurationAggregator(const Model::DeleteConfigurationAggregatorRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationAggregator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationAggregatorRequestT = Model::DeleteConfigurationAggregatorRequest>
        Model::DeleteConfigurationAggregatorOutcomeCallable DeleteConfigurationAggregatorCallable(const DeleteConfigurationAggregatorRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteConfigurationAggregator, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationAggregator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationAggregatorRequestT = Model::DeleteConfigurationAggregatorRequest>
        void DeleteConfigurationAggregatorAsync(const DeleteConfigurationAggregatorRequestT& request, const DeleteConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteConfigurationAggregator, request, handler, context);
        }

        /**
         * <p>Deletes the configuration recorder.</p> <p>After the configuration recorder
         * is deleted, Config will not record resource configuration changes until you
         * create a new configuration recorder.</p> <p>This action does not delete the
         * configuration information that was previously recorded. You will be able to
         * access the previously recorded information by using the
         * <code>GetResourceConfigHistory</code> action, but you will not be able to access
         * this information in the Config console until you create a new configuration
         * recorder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationRecorderOutcome DeleteConfigurationRecorder(const Model::DeleteConfigurationRecorderRequest& request) const;

        /**
         * A Callable wrapper for DeleteConfigurationRecorder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConfigurationRecorderRequestT = Model::DeleteConfigurationRecorderRequest>
        Model::DeleteConfigurationRecorderOutcomeCallable DeleteConfigurationRecorderCallable(const DeleteConfigurationRecorderRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteConfigurationRecorder, request);
        }

        /**
         * An Async wrapper for DeleteConfigurationRecorder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConfigurationRecorderRequestT = Model::DeleteConfigurationRecorderRequest>
        void DeleteConfigurationRecorderAsync(const DeleteConfigurationRecorderRequestT& request, const DeleteConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteConfigurationRecorder, request, handler, context);
        }

        /**
         * <p>Deletes the specified conformance pack and all the Config rules, remediation
         * actions, and all evaluation results within that conformance pack.</p> <p>Config
         * sets the conformance pack to <code>DELETE_IN_PROGRESS</code> until the deletion
         * is complete. You cannot update a conformance pack while it is in this
         * state.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConformancePack">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConformancePackOutcome DeleteConformancePack(const Model::DeleteConformancePackRequest& request) const;

        /**
         * A Callable wrapper for DeleteConformancePack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConformancePackRequestT = Model::DeleteConformancePackRequest>
        Model::DeleteConformancePackOutcomeCallable DeleteConformancePackCallable(const DeleteConformancePackRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteConformancePack, request);
        }

        /**
         * An Async wrapper for DeleteConformancePack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConformancePackRequestT = Model::DeleteConformancePackRequest>
        void DeleteConformancePackAsync(const DeleteConformancePackRequestT& request, const DeleteConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteConformancePack, request, handler, context);
        }

        /**
         * <p>Deletes the delivery channel.</p> <p>Before you can delete the delivery
         * channel, you must stop the configuration recorder by using the
         * <a>StopConfigurationRecorder</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteDeliveryChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeliveryChannelOutcome DeleteDeliveryChannel(const Model::DeleteDeliveryChannelRequest& request) const;

        /**
         * A Callable wrapper for DeleteDeliveryChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDeliveryChannelRequestT = Model::DeleteDeliveryChannelRequest>
        Model::DeleteDeliveryChannelOutcomeCallable DeleteDeliveryChannelCallable(const DeleteDeliveryChannelRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteDeliveryChannel, request);
        }

        /**
         * An Async wrapper for DeleteDeliveryChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDeliveryChannelRequestT = Model::DeleteDeliveryChannelRequest>
        void DeleteDeliveryChannelAsync(const DeleteDeliveryChannelRequestT& request, const DeleteDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteDeliveryChannel, request, handler, context);
        }

        /**
         * <p>Deletes the evaluation results for the specified Config rule. You can specify
         * one Config rule per request. After you delete the evaluation results, you can
         * call the <a>StartConfigRulesEvaluation</a> API to start evaluating your Amazon
         * Web Services resources against the rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteEvaluationResults">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEvaluationResultsOutcome DeleteEvaluationResults(const Model::DeleteEvaluationResultsRequest& request) const;

        /**
         * A Callable wrapper for DeleteEvaluationResults that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEvaluationResultsRequestT = Model::DeleteEvaluationResultsRequest>
        Model::DeleteEvaluationResultsOutcomeCallable DeleteEvaluationResultsCallable(const DeleteEvaluationResultsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteEvaluationResults, request);
        }

        /**
         * An Async wrapper for DeleteEvaluationResults that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEvaluationResultsRequestT = Model::DeleteEvaluationResultsRequest>
        void DeleteEvaluationResultsAsync(const DeleteEvaluationResultsRequestT& request, const DeleteEvaluationResultsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteEvaluationResults, request, handler, context);
        }

        /**
         * <p>Deletes the specified organization Config rule and all of its evaluation
         * results from all member accounts in that organization. </p> <p>Only a management
         * account and a delegated administrator account can delete an organization Config
         * rule. When calling this API with a delegated administrator, you must ensure
         * Organizations <code>ListDelegatedAdministrator</code> permissions are added.</p>
         * <p>Config sets the state of a rule to DELETE_IN_PROGRESS until the deletion is
         * complete. You cannot update a rule while it is in this state.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteOrganizationConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationConfigRuleOutcome DeleteOrganizationConfigRule(const Model::DeleteOrganizationConfigRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteOrganizationConfigRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOrganizationConfigRuleRequestT = Model::DeleteOrganizationConfigRuleRequest>
        Model::DeleteOrganizationConfigRuleOutcomeCallable DeleteOrganizationConfigRuleCallable(const DeleteOrganizationConfigRuleRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteOrganizationConfigRule, request);
        }

        /**
         * An Async wrapper for DeleteOrganizationConfigRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOrganizationConfigRuleRequestT = Model::DeleteOrganizationConfigRuleRequest>
        void DeleteOrganizationConfigRuleAsync(const DeleteOrganizationConfigRuleRequestT& request, const DeleteOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteOrganizationConfigRule, request, handler, context);
        }

        /**
         * <p>Deletes the specified organization conformance pack and all of the Config
         * rules and remediation actions from all member accounts in that organization.
         * </p> <p> Only a management account or a delegated administrator account can
         * delete an organization conformance pack. When calling this API with a delegated
         * administrator, you must ensure Organizations
         * <code>ListDelegatedAdministrator</code> permissions are added.</p> <p>Config
         * sets the state of a conformance pack to DELETE_IN_PROGRESS until the deletion is
         * complete. You cannot update a conformance pack while it is in this state.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteOrganizationConformancePack">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOrganizationConformancePackOutcome DeleteOrganizationConformancePack(const Model::DeleteOrganizationConformancePackRequest& request) const;

        /**
         * A Callable wrapper for DeleteOrganizationConformancePack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOrganizationConformancePackRequestT = Model::DeleteOrganizationConformancePackRequest>
        Model::DeleteOrganizationConformancePackOutcomeCallable DeleteOrganizationConformancePackCallable(const DeleteOrganizationConformancePackRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteOrganizationConformancePack, request);
        }

        /**
         * An Async wrapper for DeleteOrganizationConformancePack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOrganizationConformancePackRequestT = Model::DeleteOrganizationConformancePackRequest>
        void DeleteOrganizationConformancePackAsync(const DeleteOrganizationConformancePackRequestT& request, const DeleteOrganizationConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteOrganizationConformancePack, request, handler, context);
        }

        /**
         * <p>Deletes pending authorization requests for a specified aggregator account in
         * a specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeletePendingAggregationRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePendingAggregationRequestOutcome DeletePendingAggregationRequest(const Model::DeletePendingAggregationRequestRequest& request) const;

        /**
         * A Callable wrapper for DeletePendingAggregationRequest that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePendingAggregationRequestRequestT = Model::DeletePendingAggregationRequestRequest>
        Model::DeletePendingAggregationRequestOutcomeCallable DeletePendingAggregationRequestCallable(const DeletePendingAggregationRequestRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeletePendingAggregationRequest, request);
        }

        /**
         * An Async wrapper for DeletePendingAggregationRequest that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePendingAggregationRequestRequestT = Model::DeletePendingAggregationRequestRequest>
        void DeletePendingAggregationRequestAsync(const DeletePendingAggregationRequestRequestT& request, const DeletePendingAggregationRequestResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeletePendingAggregationRequest, request, handler, context);
        }

        /**
         * <p>Deletes the remediation configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRemediationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRemediationConfigurationOutcome DeleteRemediationConfiguration(const Model::DeleteRemediationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteRemediationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRemediationConfigurationRequestT = Model::DeleteRemediationConfigurationRequest>
        Model::DeleteRemediationConfigurationOutcomeCallable DeleteRemediationConfigurationCallable(const DeleteRemediationConfigurationRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteRemediationConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteRemediationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRemediationConfigurationRequestT = Model::DeleteRemediationConfigurationRequest>
        void DeleteRemediationConfigurationAsync(const DeleteRemediationConfigurationRequestT& request, const DeleteRemediationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteRemediationConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes one or more remediation exceptions mentioned in the resource
         * keys.</p>  <p>Config generates a remediation exception when a problem
         * occurs executing a remediation action to a specific resource. Remediation
         * exceptions blocks auto-remediation until the exception is cleared.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRemediationExceptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRemediationExceptionsOutcome DeleteRemediationExceptions(const Model::DeleteRemediationExceptionsRequest& request) const;

        /**
         * A Callable wrapper for DeleteRemediationExceptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRemediationExceptionsRequestT = Model::DeleteRemediationExceptionsRequest>
        Model::DeleteRemediationExceptionsOutcomeCallable DeleteRemediationExceptionsCallable(const DeleteRemediationExceptionsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteRemediationExceptions, request);
        }

        /**
         * An Async wrapper for DeleteRemediationExceptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRemediationExceptionsRequestT = Model::DeleteRemediationExceptionsRequest>
        void DeleteRemediationExceptionsAsync(const DeleteRemediationExceptionsRequestT& request, const DeleteRemediationExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteRemediationExceptions, request, handler, context);
        }

        /**
         * <p>Records the configuration state for a custom resource that has been deleted.
         * This API records a new ConfigurationItem with a ResourceDeleted status. You can
         * retrieve the ConfigurationItems recorded for this resource in your Config
         * History. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceConfigOutcome DeleteResourceConfig(const Model::DeleteResourceConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteResourceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteResourceConfigRequestT = Model::DeleteResourceConfigRequest>
        Model::DeleteResourceConfigOutcomeCallable DeleteResourceConfigCallable(const DeleteResourceConfigRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteResourceConfig, request);
        }

        /**
         * An Async wrapper for DeleteResourceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteResourceConfigRequestT = Model::DeleteResourceConfigRequest>
        void DeleteResourceConfigAsync(const DeleteResourceConfigRequestT& request, const DeleteResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteResourceConfig, request, handler, context);
        }

        /**
         * <p>Deletes the retention configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRetentionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRetentionConfigurationOutcome DeleteRetentionConfiguration(const Model::DeleteRetentionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteRetentionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRetentionConfigurationRequestT = Model::DeleteRetentionConfigurationRequest>
        Model::DeleteRetentionConfigurationOutcomeCallable DeleteRetentionConfigurationCallable(const DeleteRetentionConfigurationRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteRetentionConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteRetentionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRetentionConfigurationRequestT = Model::DeleteRetentionConfigurationRequest>
        void DeleteRetentionConfigurationAsync(const DeleteRetentionConfigurationRequestT& request, const DeleteRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteRetentionConfiguration, request, handler, context);
        }

        /**
         * <p>Deletes the stored query for a single Amazon Web Services account and a
         * single Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteStoredQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStoredQueryOutcome DeleteStoredQuery(const Model::DeleteStoredQueryRequest& request) const;

        /**
         * A Callable wrapper for DeleteStoredQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteStoredQueryRequestT = Model::DeleteStoredQueryRequest>
        Model::DeleteStoredQueryOutcomeCallable DeleteStoredQueryCallable(const DeleteStoredQueryRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeleteStoredQuery, request);
        }

        /**
         * An Async wrapper for DeleteStoredQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStoredQueryRequestT = Model::DeleteStoredQueryRequest>
        void DeleteStoredQueryAsync(const DeleteStoredQueryRequestT& request, const DeleteStoredQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeleteStoredQuery, request, handler, context);
        }

        /**
         * <p>Schedules delivery of a configuration snapshot to the Amazon S3 bucket in the
         * specified delivery channel. After the delivery has started, Config sends the
         * following notifications using an Amazon SNS topic that you have specified.</p>
         * <ul> <li> <p>Notification of the start of the delivery.</p> </li> <li>
         * <p>Notification of the completion of the delivery, if the delivery was
         * successfully completed.</p> </li> <li> <p>Notification of delivery failure, if
         * the delivery failed.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeliverConfigSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeliverConfigSnapshotOutcome DeliverConfigSnapshot(const Model::DeliverConfigSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeliverConfigSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeliverConfigSnapshotRequestT = Model::DeliverConfigSnapshotRequest>
        Model::DeliverConfigSnapshotOutcomeCallable DeliverConfigSnapshotCallable(const DeliverConfigSnapshotRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DeliverConfigSnapshot, request);
        }

        /**
         * An Async wrapper for DeliverConfigSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeliverConfigSnapshotRequestT = Model::DeliverConfigSnapshotRequest>
        void DeliverConfigSnapshotAsync(const DeliverConfigSnapshotRequestT& request, const DeliverConfigSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DeliverConfigSnapshot, request, handler, context);
        }

        /**
         * <p>Returns a list of compliant and noncompliant rules with the number of
         * resources for compliant and noncompliant rules. Does not display rules that do
         * not have compliance results. </p>  <p>The results can return an empty
         * result page, but if you have a <code>nextToken</code>, the results are displayed
         * on the next page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeAggregateComplianceByConfigRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAggregateComplianceByConfigRulesOutcome DescribeAggregateComplianceByConfigRules(const Model::DescribeAggregateComplianceByConfigRulesRequest& request) const;

        /**
         * A Callable wrapper for DescribeAggregateComplianceByConfigRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAggregateComplianceByConfigRulesRequestT = Model::DescribeAggregateComplianceByConfigRulesRequest>
        Model::DescribeAggregateComplianceByConfigRulesOutcomeCallable DescribeAggregateComplianceByConfigRulesCallable(const DescribeAggregateComplianceByConfigRulesRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeAggregateComplianceByConfigRules, request);
        }

        /**
         * An Async wrapper for DescribeAggregateComplianceByConfigRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAggregateComplianceByConfigRulesRequestT = Model::DescribeAggregateComplianceByConfigRulesRequest>
        void DescribeAggregateComplianceByConfigRulesAsync(const DescribeAggregateComplianceByConfigRulesRequestT& request, const DescribeAggregateComplianceByConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeAggregateComplianceByConfigRules, request, handler, context);
        }

        /**
         * <p>Returns a list of the conformance packs and their associated compliance
         * status with the count of compliant and noncompliant Config rules within each
         * conformance pack. Also returns the total rule count which includes compliant
         * rules, noncompliant rules, and rules that cannot be evaluated due to
         * insufficient data.</p>  <p>The results can return an empty result page,
         * but if you have a <code>nextToken</code>, the results are displayed on the next
         * page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeAggregateComplianceByConformancePacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAggregateComplianceByConformancePacksOutcome DescribeAggregateComplianceByConformancePacks(const Model::DescribeAggregateComplianceByConformancePacksRequest& request) const;

        /**
         * A Callable wrapper for DescribeAggregateComplianceByConformancePacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAggregateComplianceByConformancePacksRequestT = Model::DescribeAggregateComplianceByConformancePacksRequest>
        Model::DescribeAggregateComplianceByConformancePacksOutcomeCallable DescribeAggregateComplianceByConformancePacksCallable(const DescribeAggregateComplianceByConformancePacksRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeAggregateComplianceByConformancePacks, request);
        }

        /**
         * An Async wrapper for DescribeAggregateComplianceByConformancePacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAggregateComplianceByConformancePacksRequestT = Model::DescribeAggregateComplianceByConformancePacksRequest>
        void DescribeAggregateComplianceByConformancePacksAsync(const DescribeAggregateComplianceByConformancePacksRequestT& request, const DescribeAggregateComplianceByConformancePacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeAggregateComplianceByConformancePacks, request, handler, context);
        }

        /**
         * <p>Returns a list of authorizations granted to various aggregator accounts and
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeAggregationAuthorizations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAggregationAuthorizationsOutcome DescribeAggregationAuthorizations(const Model::DescribeAggregationAuthorizationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAggregationAuthorizations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAggregationAuthorizationsRequestT = Model::DescribeAggregationAuthorizationsRequest>
        Model::DescribeAggregationAuthorizationsOutcomeCallable DescribeAggregationAuthorizationsCallable(const DescribeAggregationAuthorizationsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeAggregationAuthorizations, request);
        }

        /**
         * An Async wrapper for DescribeAggregationAuthorizations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAggregationAuthorizationsRequestT = Model::DescribeAggregationAuthorizationsRequest>
        void DescribeAggregationAuthorizationsAsync(const DescribeAggregationAuthorizationsRequestT& request, const DescribeAggregationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeAggregationAuthorizations, request, handler, context);
        }

        /**
         * <p>Indicates whether the specified Config rules are compliant. If a rule is
         * noncompliant, this action returns the number of Amazon Web Services resources
         * that do not comply with the rule.</p> <p>A rule is compliant if all of the
         * evaluated resources comply with it. It is noncompliant if any of these resources
         * do not comply.</p> <p>If Config has no current evaluation results for the rule,
         * it returns <code>INSUFFICIENT_DATA</code>. This result might indicate one of the
         * following conditions:</p> <ul> <li> <p>Config has never invoked an evaluation
         * for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's Lambda
         * function is failing to send evaluation results to Config. Verify that the role
         * you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComplianceByConfigRuleOutcome DescribeComplianceByConfigRule(const Model::DescribeComplianceByConfigRuleRequest& request) const;

        /**
         * A Callable wrapper for DescribeComplianceByConfigRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeComplianceByConfigRuleRequestT = Model::DescribeComplianceByConfigRuleRequest>
        Model::DescribeComplianceByConfigRuleOutcomeCallable DescribeComplianceByConfigRuleCallable(const DescribeComplianceByConfigRuleRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeComplianceByConfigRule, request);
        }

        /**
         * An Async wrapper for DescribeComplianceByConfigRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeComplianceByConfigRuleRequestT = Model::DescribeComplianceByConfigRuleRequest>
        void DescribeComplianceByConfigRuleAsync(const DescribeComplianceByConfigRuleRequestT& request, const DescribeComplianceByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeComplianceByConfigRule, request, handler, context);
        }

        /**
         * <p>Indicates whether the specified Amazon Web Services resources are compliant.
         * If a resource is noncompliant, this action returns the number of Config rules
         * that the resource does not comply with.</p> <p>A resource is compliant if it
         * complies with all the Config rules that evaluate it. It is noncompliant if it
         * does not comply with one or more of these rules.</p> <p>If Config has no current
         * evaluation results for the resource, it returns <code>INSUFFICIENT_DATA</code>.
         * This result might indicate one of the following conditions about the rules that
         * evaluate the resource:</p> <ul> <li> <p>Config has never invoked an evaluation
         * for the rule. To check whether it has, use the
         * <code>DescribeConfigRuleEvaluationStatus</code> action to get the
         * <code>LastSuccessfulInvocationTime</code> and
         * <code>LastFailedInvocationTime</code>.</p> </li> <li> <p>The rule's Lambda
         * function is failing to send evaluation results to Config. Verify that the role
         * that you assigned to your configuration recorder includes the
         * <code>config:PutEvaluations</code> permission. If the rule is a custom rule,
         * verify that the Lambda execution role includes the
         * <code>config:PutEvaluations</code> permission.</p> </li> <li> <p>The rule's
         * Lambda function has returned <code>NOT_APPLICABLE</code> for all evaluation
         * results. This can occur if the resources were deleted or removed from the rule's
         * scope.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeComplianceByResource">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeComplianceByResourceOutcome DescribeComplianceByResource(const Model::DescribeComplianceByResourceRequest& request) const;

        /**
         * A Callable wrapper for DescribeComplianceByResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeComplianceByResourceRequestT = Model::DescribeComplianceByResourceRequest>
        Model::DescribeComplianceByResourceOutcomeCallable DescribeComplianceByResourceCallable(const DescribeComplianceByResourceRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeComplianceByResource, request);
        }

        /**
         * An Async wrapper for DescribeComplianceByResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeComplianceByResourceRequestT = Model::DescribeComplianceByResourceRequest>
        void DescribeComplianceByResourceAsync(const DescribeComplianceByResourceRequestT& request, const DescribeComplianceByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeComplianceByResource, request, handler, context);
        }

        /**
         * <p>Returns status information for each of your Config managed rules. The status
         * includes information such as the last time Config invoked the rule, the last
         * time Config failed to invoke the rule, and the related error for the last
         * failure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRuleEvaluationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigRuleEvaluationStatusOutcome DescribeConfigRuleEvaluationStatus(const Model::DescribeConfigRuleEvaluationStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigRuleEvaluationStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigRuleEvaluationStatusRequestT = Model::DescribeConfigRuleEvaluationStatusRequest>
        Model::DescribeConfigRuleEvaluationStatusOutcomeCallable DescribeConfigRuleEvaluationStatusCallable(const DescribeConfigRuleEvaluationStatusRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeConfigRuleEvaluationStatus, request);
        }

        /**
         * An Async wrapper for DescribeConfigRuleEvaluationStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigRuleEvaluationStatusRequestT = Model::DescribeConfigRuleEvaluationStatusRequest>
        void DescribeConfigRuleEvaluationStatusAsync(const DescribeConfigRuleEvaluationStatusRequestT& request, const DescribeConfigRuleEvaluationStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeConfigRuleEvaluationStatus, request, handler, context);
        }

        /**
         * <p>Returns details about your Config rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigRulesOutcome DescribeConfigRules(const Model::DescribeConfigRulesRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigRulesRequestT = Model::DescribeConfigRulesRequest>
        Model::DescribeConfigRulesOutcomeCallable DescribeConfigRulesCallable(const DescribeConfigRulesRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeConfigRules, request);
        }

        /**
         * An Async wrapper for DescribeConfigRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigRulesRequestT = Model::DescribeConfigRulesRequest>
        void DescribeConfigRulesAsync(const DescribeConfigRulesRequestT& request, const DescribeConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeConfigRules, request, handler, context);
        }

        /**
         * <p>Returns status information for sources within an aggregator. The status
         * includes information about the last time Config verified authorization between
         * the source account and an aggregator account. In case of a failure, the status
         * contains the related error code or message. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationAggregatorSourcesStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationAggregatorSourcesStatusOutcome DescribeConfigurationAggregatorSourcesStatus(const Model::DescribeConfigurationAggregatorSourcesStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationAggregatorSourcesStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigurationAggregatorSourcesStatusRequestT = Model::DescribeConfigurationAggregatorSourcesStatusRequest>
        Model::DescribeConfigurationAggregatorSourcesStatusOutcomeCallable DescribeConfigurationAggregatorSourcesStatusCallable(const DescribeConfigurationAggregatorSourcesStatusRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatus, request);
        }

        /**
         * An Async wrapper for DescribeConfigurationAggregatorSourcesStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationAggregatorSourcesStatusRequestT = Model::DescribeConfigurationAggregatorSourcesStatusRequest>
        void DescribeConfigurationAggregatorSourcesStatusAsync(const DescribeConfigurationAggregatorSourcesStatusRequestT& request, const DescribeConfigurationAggregatorSourcesStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeConfigurationAggregatorSourcesStatus, request, handler, context);
        }

        /**
         * <p>Returns the details of one or more configuration aggregators. If the
         * configuration aggregator is not specified, this action returns the details for
         * all the configuration aggregators associated with the account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationAggregators">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationAggregatorsOutcome DescribeConfigurationAggregators(const Model::DescribeConfigurationAggregatorsRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationAggregators that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigurationAggregatorsRequestT = Model::DescribeConfigurationAggregatorsRequest>
        Model::DescribeConfigurationAggregatorsOutcomeCallable DescribeConfigurationAggregatorsCallable(const DescribeConfigurationAggregatorsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeConfigurationAggregators, request);
        }

        /**
         * An Async wrapper for DescribeConfigurationAggregators that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationAggregatorsRequestT = Model::DescribeConfigurationAggregatorsRequest>
        void DescribeConfigurationAggregatorsAsync(const DescribeConfigurationAggregatorsRequestT& request, const DescribeConfigurationAggregatorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeConfigurationAggregators, request, handler, context);
        }

        /**
         * <p>Returns the current status of the specified configuration recorder as well as
         * the status of the last recording event for the recorder. If a configuration
         * recorder is not specified, this action returns the status of all configuration
         * recorders associated with the account.</p>  <p>&gt;You can specify only
         * one configuration recorder for each Amazon Web Services Region for each account.
         * For a detailed status of recording events over time, add your Config events to
         * Amazon CloudWatch metrics and use CloudWatch metrics.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorderStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRecorderStatusOutcome DescribeConfigurationRecorderStatus(const Model::DescribeConfigurationRecorderStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationRecorderStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigurationRecorderStatusRequestT = Model::DescribeConfigurationRecorderStatusRequest>
        Model::DescribeConfigurationRecorderStatusOutcomeCallable DescribeConfigurationRecorderStatusCallable(const DescribeConfigurationRecorderStatusRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeConfigurationRecorderStatus, request);
        }

        /**
         * An Async wrapper for DescribeConfigurationRecorderStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationRecorderStatusRequestT = Model::DescribeConfigurationRecorderStatusRequest>
        void DescribeConfigurationRecorderStatusAsync(const DescribeConfigurationRecorderStatusRequestT& request, const DescribeConfigurationRecorderStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeConfigurationRecorderStatus, request, handler, context);
        }

        /**
         * <p>Returns the details for the specified configuration recorders. If the
         * configuration recorder is not specified, this action returns the details for all
         * configuration recorders associated with the account.</p>  <p>You can
         * specify only one configuration recorder for each Amazon Web Services Region for
         * each account.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRecordersOutcome DescribeConfigurationRecorders(const Model::DescribeConfigurationRecordersRequest& request) const;

        /**
         * A Callable wrapper for DescribeConfigurationRecorders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConfigurationRecordersRequestT = Model::DescribeConfigurationRecordersRequest>
        Model::DescribeConfigurationRecordersOutcomeCallable DescribeConfigurationRecordersCallable(const DescribeConfigurationRecordersRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeConfigurationRecorders, request);
        }

        /**
         * An Async wrapper for DescribeConfigurationRecorders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConfigurationRecordersRequestT = Model::DescribeConfigurationRecordersRequest>
        void DescribeConfigurationRecordersAsync(const DescribeConfigurationRecordersRequestT& request, const DescribeConfigurationRecordersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeConfigurationRecorders, request, handler, context);
        }

        /**
         * <p>Returns compliance details for each rule in that conformance pack.</p> 
         * <p>You must provide exact rule names.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConformancePackCompliance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConformancePackComplianceOutcome DescribeConformancePackCompliance(const Model::DescribeConformancePackComplianceRequest& request) const;

        /**
         * A Callable wrapper for DescribeConformancePackCompliance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConformancePackComplianceRequestT = Model::DescribeConformancePackComplianceRequest>
        Model::DescribeConformancePackComplianceOutcomeCallable DescribeConformancePackComplianceCallable(const DescribeConformancePackComplianceRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeConformancePackCompliance, request);
        }

        /**
         * An Async wrapper for DescribeConformancePackCompliance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConformancePackComplianceRequestT = Model::DescribeConformancePackComplianceRequest>
        void DescribeConformancePackComplianceAsync(const DescribeConformancePackComplianceRequestT& request, const DescribeConformancePackComplianceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeConformancePackCompliance, request, handler, context);
        }

        /**
         * <p>Provides one or more conformance packs deployment status.</p>  <p>If
         * there are no conformance packs then you will see an empty result.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConformancePackStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConformancePackStatusOutcome DescribeConformancePackStatus(const Model::DescribeConformancePackStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeConformancePackStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConformancePackStatusRequestT = Model::DescribeConformancePackStatusRequest>
        Model::DescribeConformancePackStatusOutcomeCallable DescribeConformancePackStatusCallable(const DescribeConformancePackStatusRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeConformancePackStatus, request);
        }

        /**
         * An Async wrapper for DescribeConformancePackStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConformancePackStatusRequestT = Model::DescribeConformancePackStatusRequest>
        void DescribeConformancePackStatusAsync(const DescribeConformancePackStatusRequestT& request, const DescribeConformancePackStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeConformancePackStatus, request, handler, context);
        }

        /**
         * <p>Returns a list of one or more conformance packs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConformancePacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConformancePacksOutcome DescribeConformancePacks(const Model::DescribeConformancePacksRequest& request) const;

        /**
         * A Callable wrapper for DescribeConformancePacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeConformancePacksRequestT = Model::DescribeConformancePacksRequest>
        Model::DescribeConformancePacksOutcomeCallable DescribeConformancePacksCallable(const DescribeConformancePacksRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeConformancePacks, request);
        }

        /**
         * An Async wrapper for DescribeConformancePacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeConformancePacksRequestT = Model::DescribeConformancePacksRequest>
        void DescribeConformancePacksAsync(const DescribeConformancePacksRequestT& request, const DescribeConformancePacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeConformancePacks, request, handler, context);
        }

        /**
         * <p>Returns the current status of the specified delivery channel. If a delivery
         * channel is not specified, this action returns the current status of all delivery
         * channels associated with the account.</p>  <p>Currently, you can specify
         * only one delivery channel per region in your account.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannelStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeliveryChannelStatusOutcome DescribeDeliveryChannelStatus(const Model::DescribeDeliveryChannelStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeDeliveryChannelStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDeliveryChannelStatusRequestT = Model::DescribeDeliveryChannelStatusRequest>
        Model::DescribeDeliveryChannelStatusOutcomeCallable DescribeDeliveryChannelStatusCallable(const DescribeDeliveryChannelStatusRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeDeliveryChannelStatus, request);
        }

        /**
         * An Async wrapper for DescribeDeliveryChannelStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDeliveryChannelStatusRequestT = Model::DescribeDeliveryChannelStatusRequest>
        void DescribeDeliveryChannelStatusAsync(const DescribeDeliveryChannelStatusRequestT& request, const DescribeDeliveryChannelStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeDeliveryChannelStatus, request, handler, context);
        }

        /**
         * <p>Returns details about the specified delivery channel. If a delivery channel
         * is not specified, this action returns the details of all delivery channels
         * associated with the account.</p>  <p>Currently, you can specify only one
         * delivery channel per region in your account.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeDeliveryChannels">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDeliveryChannelsOutcome DescribeDeliveryChannels(const Model::DescribeDeliveryChannelsRequest& request) const;

        /**
         * A Callable wrapper for DescribeDeliveryChannels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeDeliveryChannelsRequestT = Model::DescribeDeliveryChannelsRequest>
        Model::DescribeDeliveryChannelsOutcomeCallable DescribeDeliveryChannelsCallable(const DescribeDeliveryChannelsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeDeliveryChannels, request);
        }

        /**
         * An Async wrapper for DescribeDeliveryChannels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDeliveryChannelsRequestT = Model::DescribeDeliveryChannelsRequest>
        void DescribeDeliveryChannelsAsync(const DescribeDeliveryChannelsRequestT& request, const DescribeDeliveryChannelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeDeliveryChannels, request, handler, context);
        }

        /**
         * <p>Provides organization Config rule deployment status for an organization.</p>
         *  <p>The status is not considered successful until organization Config rule
         * is successfully deployed in all the member accounts with an exception of
         * excluded accounts.</p> <p>When you specify the limit and the next token, you
         * receive a paginated response. Limit and next token are not applicable if you
         * specify organization Config rule names. It is only applicable, when you request
         * all the organization Config rules.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeOrganizationConfigRuleStatuses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigRuleStatusesOutcome DescribeOrganizationConfigRuleStatuses(const Model::DescribeOrganizationConfigRuleStatusesRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConfigRuleStatuses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationConfigRuleStatusesRequestT = Model::DescribeOrganizationConfigRuleStatusesRequest>
        Model::DescribeOrganizationConfigRuleStatusesOutcomeCallable DescribeOrganizationConfigRuleStatusesCallable(const DescribeOrganizationConfigRuleStatusesRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeOrganizationConfigRuleStatuses, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationConfigRuleStatuses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationConfigRuleStatusesRequestT = Model::DescribeOrganizationConfigRuleStatusesRequest>
        void DescribeOrganizationConfigRuleStatusesAsync(const DescribeOrganizationConfigRuleStatusesRequestT& request, const DescribeOrganizationConfigRuleStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeOrganizationConfigRuleStatuses, request, handler, context);
        }

        /**
         * <p>Returns a list of organization Config rules. </p>  <p>When you specify
         * the limit and the next token, you receive a paginated response.</p> <p>Limit and
         * next token are not applicable if you specify organization Config rule names. It
         * is only applicable, when you request all the organization Config rules.</p> <p>
         * <i>For accounts within an organization</i> </p> <p>If you deploy an
         * organizational rule or conformance pack in an organization administrator
         * account, and then establish a delegated administrator and deploy an
         * organizational rule or conformance pack in the delegated administrator account,
         * you won't be able to see the organizational rule or conformance pack in the
         * organization administrator account from the delegated administrator account or
         * see the organizational rule or conformance pack in the delegated administrator
         * account from organization administrator account. The
         * <code>DescribeOrganizationConfigRules</code> and
         * <code>DescribeOrganizationConformancePacks</code> APIs can only see and interact
         * with the organization-related resource that were deployed from within the
         * account calling those APIs.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeOrganizationConfigRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConfigRulesOutcome DescribeOrganizationConfigRules(const Model::DescribeOrganizationConfigRulesRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConfigRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationConfigRulesRequestT = Model::DescribeOrganizationConfigRulesRequest>
        Model::DescribeOrganizationConfigRulesOutcomeCallable DescribeOrganizationConfigRulesCallable(const DescribeOrganizationConfigRulesRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeOrganizationConfigRules, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationConfigRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationConfigRulesRequestT = Model::DescribeOrganizationConfigRulesRequest>
        void DescribeOrganizationConfigRulesAsync(const DescribeOrganizationConfigRulesRequestT& request, const DescribeOrganizationConfigRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeOrganizationConfigRules, request, handler, context);
        }

        /**
         * <p>Provides organization conformance pack deployment status for an organization.
         * </p>  <p>The status is not considered successful until organization
         * conformance pack is successfully deployed in all the member accounts with an
         * exception of excluded accounts.</p> <p>When you specify the limit and the next
         * token, you receive a paginated response. Limit and next token are not applicable
         * if you specify organization conformance pack names. They are only applicable,
         * when you request all the organization conformance packs.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeOrganizationConformancePackStatuses">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConformancePackStatusesOutcome DescribeOrganizationConformancePackStatuses(const Model::DescribeOrganizationConformancePackStatusesRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConformancePackStatuses that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationConformancePackStatusesRequestT = Model::DescribeOrganizationConformancePackStatusesRequest>
        Model::DescribeOrganizationConformancePackStatusesOutcomeCallable DescribeOrganizationConformancePackStatusesCallable(const DescribeOrganizationConformancePackStatusesRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeOrganizationConformancePackStatuses, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationConformancePackStatuses that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationConformancePackStatusesRequestT = Model::DescribeOrganizationConformancePackStatusesRequest>
        void DescribeOrganizationConformancePackStatusesAsync(const DescribeOrganizationConformancePackStatusesRequestT& request, const DescribeOrganizationConformancePackStatusesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeOrganizationConformancePackStatuses, request, handler, context);
        }

        /**
         * <p>Returns a list of organization conformance packs. </p>  <p>When you
         * specify the limit and the next token, you receive a paginated response. </p>
         * <p>Limit and next token are not applicable if you specify organization
         * conformance packs names. They are only applicable, when you request all the
         * organization conformance packs. </p> <p> <i>For accounts within an
         * organization</i> </p> <p>If you deploy an organizational rule or conformance
         * pack in an organization administrator account, and then establish a delegated
         * administrator and deploy an organizational rule or conformance pack in the
         * delegated administrator account, you won't be able to see the organizational
         * rule or conformance pack in the organization administrator account from the
         * delegated administrator account or see the organizational rule or conformance
         * pack in the delegated administrator account from organization administrator
         * account. The <code>DescribeOrganizationConfigRules</code> and
         * <code>DescribeOrganizationConformancePacks</code> APIs can only see and interact
         * with the organization-related resource that were deployed from within the
         * account calling those APIs.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeOrganizationConformancePacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeOrganizationConformancePacksOutcome DescribeOrganizationConformancePacks(const Model::DescribeOrganizationConformancePacksRequest& request) const;

        /**
         * A Callable wrapper for DescribeOrganizationConformancePacks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeOrganizationConformancePacksRequestT = Model::DescribeOrganizationConformancePacksRequest>
        Model::DescribeOrganizationConformancePacksOutcomeCallable DescribeOrganizationConformancePacksCallable(const DescribeOrganizationConformancePacksRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeOrganizationConformancePacks, request);
        }

        /**
         * An Async wrapper for DescribeOrganizationConformancePacks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeOrganizationConformancePacksRequestT = Model::DescribeOrganizationConformancePacksRequest>
        void DescribeOrganizationConformancePacksAsync(const DescribeOrganizationConformancePacksRequestT& request, const DescribeOrganizationConformancePacksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeOrganizationConformancePacks, request, handler, context);
        }

        /**
         * <p>Returns a list of all pending aggregation requests.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribePendingAggregationRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingAggregationRequestsOutcome DescribePendingAggregationRequests(const Model::DescribePendingAggregationRequestsRequest& request) const;

        /**
         * A Callable wrapper for DescribePendingAggregationRequests that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribePendingAggregationRequestsRequestT = Model::DescribePendingAggregationRequestsRequest>
        Model::DescribePendingAggregationRequestsOutcomeCallable DescribePendingAggregationRequestsCallable(const DescribePendingAggregationRequestsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribePendingAggregationRequests, request);
        }

        /**
         * An Async wrapper for DescribePendingAggregationRequests that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribePendingAggregationRequestsRequestT = Model::DescribePendingAggregationRequestsRequest>
        void DescribePendingAggregationRequestsAsync(const DescribePendingAggregationRequestsRequestT& request, const DescribePendingAggregationRequestsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribePendingAggregationRequests, request, handler, context);
        }

        /**
         * <p>Returns the details of one or more remediation configurations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRemediationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRemediationConfigurationsOutcome DescribeRemediationConfigurations(const Model::DescribeRemediationConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRemediationConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRemediationConfigurationsRequestT = Model::DescribeRemediationConfigurationsRequest>
        Model::DescribeRemediationConfigurationsOutcomeCallable DescribeRemediationConfigurationsCallable(const DescribeRemediationConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeRemediationConfigurations, request);
        }

        /**
         * An Async wrapper for DescribeRemediationConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRemediationConfigurationsRequestT = Model::DescribeRemediationConfigurationsRequest>
        void DescribeRemediationConfigurationsAsync(const DescribeRemediationConfigurationsRequestT& request, const DescribeRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeRemediationConfigurations, request, handler, context);
        }

        /**
         * <p>Returns the details of one or more remediation exceptions. A detailed view of
         * a remediation exception for a set of resources that includes an explanation of
         * an exception and the time when the exception will be deleted. When you specify
         * the limit and the next token, you receive a paginated response. </p> 
         * <p>Config generates a remediation exception when a problem occurs executing a
         * remediation action to a specific resource. Remediation exceptions blocks
         * auto-remediation until the exception is cleared.</p> <p>When you specify the
         * limit and the next token, you receive a paginated response. </p> <p>Limit and
         * next token are not applicable if you request resources in batch. It is only
         * applicable, when you request all resources.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRemediationExceptions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRemediationExceptionsOutcome DescribeRemediationExceptions(const Model::DescribeRemediationExceptionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRemediationExceptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRemediationExceptionsRequestT = Model::DescribeRemediationExceptionsRequest>
        Model::DescribeRemediationExceptionsOutcomeCallable DescribeRemediationExceptionsCallable(const DescribeRemediationExceptionsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeRemediationExceptions, request);
        }

        /**
         * An Async wrapper for DescribeRemediationExceptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRemediationExceptionsRequestT = Model::DescribeRemediationExceptionsRequest>
        void DescribeRemediationExceptionsAsync(const DescribeRemediationExceptionsRequestT& request, const DescribeRemediationExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeRemediationExceptions, request, handler, context);
        }

        /**
         * <p>Provides a detailed view of a Remediation Execution for a set of resources
         * including state, timestamps for when steps for the remediation execution occur,
         * and any error messages for steps that have failed. When you specify the limit
         * and the next token, you receive a paginated response.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRemediationExecutionStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRemediationExecutionStatusOutcome DescribeRemediationExecutionStatus(const Model::DescribeRemediationExecutionStatusRequest& request) const;

        /**
         * A Callable wrapper for DescribeRemediationExecutionStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRemediationExecutionStatusRequestT = Model::DescribeRemediationExecutionStatusRequest>
        Model::DescribeRemediationExecutionStatusOutcomeCallable DescribeRemediationExecutionStatusCallable(const DescribeRemediationExecutionStatusRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeRemediationExecutionStatus, request);
        }

        /**
         * An Async wrapper for DescribeRemediationExecutionStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRemediationExecutionStatusRequestT = Model::DescribeRemediationExecutionStatusRequest>
        void DescribeRemediationExecutionStatusAsync(const DescribeRemediationExecutionStatusRequestT& request, const DescribeRemediationExecutionStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeRemediationExecutionStatus, request, handler, context);
        }

        /**
         * <p>Returns the details of one or more retention configurations. If the retention
         * configuration name is not specified, this action returns the details for all the
         * retention configurations for that account.</p>  <p>Currently, Config
         * supports only one retention configuration per region in your account.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRetentionConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRetentionConfigurationsOutcome DescribeRetentionConfigurations(const Model::DescribeRetentionConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeRetentionConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeRetentionConfigurationsRequestT = Model::DescribeRetentionConfigurationsRequest>
        Model::DescribeRetentionConfigurationsOutcomeCallable DescribeRetentionConfigurationsCallable(const DescribeRetentionConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::DescribeRetentionConfigurations, request);
        }

        /**
         * An Async wrapper for DescribeRetentionConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRetentionConfigurationsRequestT = Model::DescribeRetentionConfigurationsRequest>
        void DescribeRetentionConfigurationsAsync(const DescribeRetentionConfigurationsRequestT& request, const DescribeRetentionConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::DescribeRetentionConfigurations, request, handler, context);
        }

        /**
         * <p>Returns the evaluation results for the specified Config rule for a specific
         * resource in a rule. The results indicate which Amazon Web Services resources
         * were evaluated by the rule, when each resource was last evaluated, and whether
         * each resource complies with the rule. </p>  <p>The results can return an
         * empty result page. But if you have a <code>nextToken</code>, the results are
         * displayed on the next page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateComplianceDetailsByConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateComplianceDetailsByConfigRuleOutcome GetAggregateComplianceDetailsByConfigRule(const Model::GetAggregateComplianceDetailsByConfigRuleRequest& request) const;

        /**
         * A Callable wrapper for GetAggregateComplianceDetailsByConfigRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAggregateComplianceDetailsByConfigRuleRequestT = Model::GetAggregateComplianceDetailsByConfigRuleRequest>
        Model::GetAggregateComplianceDetailsByConfigRuleOutcomeCallable GetAggregateComplianceDetailsByConfigRuleCallable(const GetAggregateComplianceDetailsByConfigRuleRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetAggregateComplianceDetailsByConfigRule, request);
        }

        /**
         * An Async wrapper for GetAggregateComplianceDetailsByConfigRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAggregateComplianceDetailsByConfigRuleRequestT = Model::GetAggregateComplianceDetailsByConfigRuleRequest>
        void GetAggregateComplianceDetailsByConfigRuleAsync(const GetAggregateComplianceDetailsByConfigRuleRequestT& request, const GetAggregateComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetAggregateComplianceDetailsByConfigRule, request, handler, context);
        }

        /**
         * <p>Returns the number of compliant and noncompliant rules for one or more
         * accounts and regions in an aggregator.</p>  <p>The results can return an
         * empty result page, but if you have a nextToken, the results are displayed on the
         * next page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateConfigRuleComplianceSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateConfigRuleComplianceSummaryOutcome GetAggregateConfigRuleComplianceSummary(const Model::GetAggregateConfigRuleComplianceSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetAggregateConfigRuleComplianceSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAggregateConfigRuleComplianceSummaryRequestT = Model::GetAggregateConfigRuleComplianceSummaryRequest>
        Model::GetAggregateConfigRuleComplianceSummaryOutcomeCallable GetAggregateConfigRuleComplianceSummaryCallable(const GetAggregateConfigRuleComplianceSummaryRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetAggregateConfigRuleComplianceSummary, request);
        }

        /**
         * An Async wrapper for GetAggregateConfigRuleComplianceSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAggregateConfigRuleComplianceSummaryRequestT = Model::GetAggregateConfigRuleComplianceSummaryRequest>
        void GetAggregateConfigRuleComplianceSummaryAsync(const GetAggregateConfigRuleComplianceSummaryRequestT& request, const GetAggregateConfigRuleComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetAggregateConfigRuleComplianceSummary, request, handler, context);
        }

        /**
         * <p>Returns the count of compliant and noncompliant conformance packs across all
         * Amazon Web Services accounts and Amazon Web Services Regions in an aggregator.
         * You can filter based on Amazon Web Services account ID or Amazon Web Services
         * Region.</p>  <p>The results can return an empty result page, but if you
         * have a nextToken, the results are displayed on the next page.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateConformancePackComplianceSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateConformancePackComplianceSummaryOutcome GetAggregateConformancePackComplianceSummary(const Model::GetAggregateConformancePackComplianceSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetAggregateConformancePackComplianceSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAggregateConformancePackComplianceSummaryRequestT = Model::GetAggregateConformancePackComplianceSummaryRequest>
        Model::GetAggregateConformancePackComplianceSummaryOutcomeCallable GetAggregateConformancePackComplianceSummaryCallable(const GetAggregateConformancePackComplianceSummaryRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetAggregateConformancePackComplianceSummary, request);
        }

        /**
         * An Async wrapper for GetAggregateConformancePackComplianceSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAggregateConformancePackComplianceSummaryRequestT = Model::GetAggregateConformancePackComplianceSummaryRequest>
        void GetAggregateConformancePackComplianceSummaryAsync(const GetAggregateConformancePackComplianceSummaryRequestT& request, const GetAggregateConformancePackComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetAggregateConformancePackComplianceSummary, request, handler, context);
        }

        /**
         * <p>Returns the resource counts across accounts and regions that are present in
         * your Config aggregator. You can request the resource counts by providing filters
         * and GroupByKey.</p> <p>For example, if the input contains accountID 12345678910
         * and region us-east-1 in filters, the API returns the count of resources in
         * account ID 12345678910 and region us-east-1. If the input contains ACCOUNT_ID as
         * a GroupByKey, the API returns resource counts for all source accounts that are
         * present in your aggregator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateDiscoveredResourceCounts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateDiscoveredResourceCountsOutcome GetAggregateDiscoveredResourceCounts(const Model::GetAggregateDiscoveredResourceCountsRequest& request) const;

        /**
         * A Callable wrapper for GetAggregateDiscoveredResourceCounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAggregateDiscoveredResourceCountsRequestT = Model::GetAggregateDiscoveredResourceCountsRequest>
        Model::GetAggregateDiscoveredResourceCountsOutcomeCallable GetAggregateDiscoveredResourceCountsCallable(const GetAggregateDiscoveredResourceCountsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetAggregateDiscoveredResourceCounts, request);
        }

        /**
         * An Async wrapper for GetAggregateDiscoveredResourceCounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAggregateDiscoveredResourceCountsRequestT = Model::GetAggregateDiscoveredResourceCountsRequest>
        void GetAggregateDiscoveredResourceCountsAsync(const GetAggregateDiscoveredResourceCountsRequestT& request, const GetAggregateDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetAggregateDiscoveredResourceCounts, request, handler, context);
        }

        /**
         * <p>Returns configuration item that is aggregated for your specific resource in a
         * specific source account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateResourceConfigOutcome GetAggregateResourceConfig(const Model::GetAggregateResourceConfigRequest& request) const;

        /**
         * A Callable wrapper for GetAggregateResourceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAggregateResourceConfigRequestT = Model::GetAggregateResourceConfigRequest>
        Model::GetAggregateResourceConfigOutcomeCallable GetAggregateResourceConfigCallable(const GetAggregateResourceConfigRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetAggregateResourceConfig, request);
        }

        /**
         * An Async wrapper for GetAggregateResourceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAggregateResourceConfigRequestT = Model::GetAggregateResourceConfigRequest>
        void GetAggregateResourceConfigAsync(const GetAggregateResourceConfigRequestT& request, const GetAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetAggregateResourceConfig, request, handler, context);
        }

        /**
         * <p>Returns the evaluation results for the specified Config rule. The results
         * indicate which Amazon Web Services resources were evaluated by the rule, when
         * each resource was last evaluated, and whether each resource complies with the
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceDetailsByConfigRuleOutcome GetComplianceDetailsByConfigRule(const Model::GetComplianceDetailsByConfigRuleRequest& request) const;

        /**
         * A Callable wrapper for GetComplianceDetailsByConfigRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComplianceDetailsByConfigRuleRequestT = Model::GetComplianceDetailsByConfigRuleRequest>
        Model::GetComplianceDetailsByConfigRuleOutcomeCallable GetComplianceDetailsByConfigRuleCallable(const GetComplianceDetailsByConfigRuleRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetComplianceDetailsByConfigRule, request);
        }

        /**
         * An Async wrapper for GetComplianceDetailsByConfigRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComplianceDetailsByConfigRuleRequestT = Model::GetComplianceDetailsByConfigRuleRequest>
        void GetComplianceDetailsByConfigRuleAsync(const GetComplianceDetailsByConfigRuleRequestT& request, const GetComplianceDetailsByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetComplianceDetailsByConfigRule, request, handler, context);
        }

        /**
         * <p>Returns the evaluation results for the specified Amazon Web Services
         * resource. The results indicate which Config rules were used to evaluate the
         * resource, when each rule was last invoked, and whether the resource complies
         * with each rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceDetailsByResourceOutcome GetComplianceDetailsByResource(const Model::GetComplianceDetailsByResourceRequest& request) const;

        /**
         * A Callable wrapper for GetComplianceDetailsByResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComplianceDetailsByResourceRequestT = Model::GetComplianceDetailsByResourceRequest>
        Model::GetComplianceDetailsByResourceOutcomeCallable GetComplianceDetailsByResourceCallable(const GetComplianceDetailsByResourceRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetComplianceDetailsByResource, request);
        }

        /**
         * An Async wrapper for GetComplianceDetailsByResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComplianceDetailsByResourceRequestT = Model::GetComplianceDetailsByResourceRequest>
        void GetComplianceDetailsByResourceAsync(const GetComplianceDetailsByResourceRequestT& request, const GetComplianceDetailsByResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetComplianceDetailsByResource, request, handler, context);
        }

        /**
         * <p>Returns the number of Config rules that are compliant and noncompliant, up to
         * a maximum of 25 for each.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceSummaryByConfigRuleOutcome GetComplianceSummaryByConfigRule(const Model::GetComplianceSummaryByConfigRuleRequest& request = {}) const;

        /**
         * A Callable wrapper for GetComplianceSummaryByConfigRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComplianceSummaryByConfigRuleRequestT = Model::GetComplianceSummaryByConfigRuleRequest>
        Model::GetComplianceSummaryByConfigRuleOutcomeCallable GetComplianceSummaryByConfigRuleCallable(const GetComplianceSummaryByConfigRuleRequestT& request = {}) const
        {
            return SubmitCallable(&ConfigServiceClient::GetComplianceSummaryByConfigRule, request);
        }

        /**
         * An Async wrapper for GetComplianceSummaryByConfigRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComplianceSummaryByConfigRuleRequestT = Model::GetComplianceSummaryByConfigRuleRequest>
        void GetComplianceSummaryByConfigRuleAsync(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetComplianceSummaryByConfigRuleRequestT& request = {}) const
        {
            return SubmitAsync(&ConfigServiceClient::GetComplianceSummaryByConfigRule, request, handler, context);
        }

        /**
         * <p>Returns the number of resources that are compliant and the number that are
         * noncompliant. You can specify one or more resource types to get these numbers
         * for each resource type. The maximum number returned is 100.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByResourceType">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceSummaryByResourceTypeOutcome GetComplianceSummaryByResourceType(const Model::GetComplianceSummaryByResourceTypeRequest& request) const;

        /**
         * A Callable wrapper for GetComplianceSummaryByResourceType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetComplianceSummaryByResourceTypeRequestT = Model::GetComplianceSummaryByResourceTypeRequest>
        Model::GetComplianceSummaryByResourceTypeOutcomeCallable GetComplianceSummaryByResourceTypeCallable(const GetComplianceSummaryByResourceTypeRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetComplianceSummaryByResourceType, request);
        }

        /**
         * An Async wrapper for GetComplianceSummaryByResourceType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetComplianceSummaryByResourceTypeRequestT = Model::GetComplianceSummaryByResourceTypeRequest>
        void GetComplianceSummaryByResourceTypeAsync(const GetComplianceSummaryByResourceTypeRequestT& request, const GetComplianceSummaryByResourceTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetComplianceSummaryByResourceType, request, handler, context);
        }

        /**
         * <p>Returns compliance details of a conformance pack for all Amazon Web Services
         * resources that are monitered by conformance pack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetConformancePackComplianceDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConformancePackComplianceDetailsOutcome GetConformancePackComplianceDetails(const Model::GetConformancePackComplianceDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetConformancePackComplianceDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConformancePackComplianceDetailsRequestT = Model::GetConformancePackComplianceDetailsRequest>
        Model::GetConformancePackComplianceDetailsOutcomeCallable GetConformancePackComplianceDetailsCallable(const GetConformancePackComplianceDetailsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetConformancePackComplianceDetails, request);
        }

        /**
         * An Async wrapper for GetConformancePackComplianceDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConformancePackComplianceDetailsRequestT = Model::GetConformancePackComplianceDetailsRequest>
        void GetConformancePackComplianceDetailsAsync(const GetConformancePackComplianceDetailsRequestT& request, const GetConformancePackComplianceDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetConformancePackComplianceDetails, request, handler, context);
        }

        /**
         * <p>Returns compliance details for the conformance pack based on the cumulative
         * compliance results of all the rules in that conformance pack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetConformancePackComplianceSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConformancePackComplianceSummaryOutcome GetConformancePackComplianceSummary(const Model::GetConformancePackComplianceSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetConformancePackComplianceSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConformancePackComplianceSummaryRequestT = Model::GetConformancePackComplianceSummaryRequest>
        Model::GetConformancePackComplianceSummaryOutcomeCallable GetConformancePackComplianceSummaryCallable(const GetConformancePackComplianceSummaryRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetConformancePackComplianceSummary, request);
        }

        /**
         * An Async wrapper for GetConformancePackComplianceSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConformancePackComplianceSummaryRequestT = Model::GetConformancePackComplianceSummaryRequest>
        void GetConformancePackComplianceSummaryAsync(const GetConformancePackComplianceSummaryRequestT& request, const GetConformancePackComplianceSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetConformancePackComplianceSummary, request, handler, context);
        }

        /**
         * <p>Returns the policy definition containing the logic for your Config Custom
         * Policy rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetCustomRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomRulePolicyOutcome GetCustomRulePolicy(const Model::GetCustomRulePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetCustomRulePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCustomRulePolicyRequestT = Model::GetCustomRulePolicyRequest>
        Model::GetCustomRulePolicyOutcomeCallable GetCustomRulePolicyCallable(const GetCustomRulePolicyRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetCustomRulePolicy, request);
        }

        /**
         * An Async wrapper for GetCustomRulePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomRulePolicyRequestT = Model::GetCustomRulePolicyRequest>
        void GetCustomRulePolicyAsync(const GetCustomRulePolicyRequestT& request, const GetCustomRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetCustomRulePolicy, request, handler, context);
        }

        /**
         * <p>Returns the resource types, the number of each resource type, and the total
         * number of resources that Config is recording in this region for your Amazon Web
         * Services account. </p> <p class="title"> <b>Example</b> </p> <ol> <li> <p>Config
         * is recording three resource types in the US East (Ohio) Region for your account:
         * 25 EC2 instances, 20 IAM users, and 15 S3 buckets.</p> </li> <li> <p>You make a
         * call to the <code>GetDiscoveredResourceCounts</code> action and specify that you
         * want all resource types. </p> </li> <li> <p>Config returns the following:</p>
         * <ul> <li> <p>The resource types (EC2 instances, IAM users, and S3 buckets).</p>
         * </li> <li> <p>The number of each resource type (25, 20, and 15).</p> </li> <li>
         * <p>The total number of all resources (60).</p> </li> </ul> </li> </ol> <p>The
         * response is paginated. By default, Config lists 100 <a>ResourceCount</a> objects
         * on each page. You can customize this number with the <code>limit</code>
         * parameter. The response includes a <code>nextToken</code> string. To get the
         * next page of results, run the request again and specify the string for the
         * <code>nextToken</code> parameter.</p>  <p>If you make a call to the
         * <a>GetDiscoveredResourceCounts</a> action, you might not immediately receive
         * resource counts in the following situations:</p> <ul> <li> <p>You are a new
         * Config customer.</p> </li> <li> <p>You just enabled resource recording.</p>
         * </li> </ul> <p>It might take a few minutes for Config to record and count your
         * resources. Wait a few minutes and then retry the
         * <a>GetDiscoveredResourceCounts</a> action. </p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetDiscoveredResourceCounts">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiscoveredResourceCountsOutcome GetDiscoveredResourceCounts(const Model::GetDiscoveredResourceCountsRequest& request) const;

        /**
         * A Callable wrapper for GetDiscoveredResourceCounts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDiscoveredResourceCountsRequestT = Model::GetDiscoveredResourceCountsRequest>
        Model::GetDiscoveredResourceCountsOutcomeCallable GetDiscoveredResourceCountsCallable(const GetDiscoveredResourceCountsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetDiscoveredResourceCounts, request);
        }

        /**
         * An Async wrapper for GetDiscoveredResourceCounts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDiscoveredResourceCountsRequestT = Model::GetDiscoveredResourceCountsRequest>
        void GetDiscoveredResourceCountsAsync(const GetDiscoveredResourceCountsRequestT& request, const GetDiscoveredResourceCountsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetDiscoveredResourceCounts, request, handler, context);
        }

        /**
         * <p>Returns detailed status for each member account within an organization for a
         * given organization Config rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetOrganizationConfigRuleDetailedStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationConfigRuleDetailedStatusOutcome GetOrganizationConfigRuleDetailedStatus(const Model::GetOrganizationConfigRuleDetailedStatusRequest& request) const;

        /**
         * A Callable wrapper for GetOrganizationConfigRuleDetailedStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOrganizationConfigRuleDetailedStatusRequestT = Model::GetOrganizationConfigRuleDetailedStatusRequest>
        Model::GetOrganizationConfigRuleDetailedStatusOutcomeCallable GetOrganizationConfigRuleDetailedStatusCallable(const GetOrganizationConfigRuleDetailedStatusRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetOrganizationConfigRuleDetailedStatus, request);
        }

        /**
         * An Async wrapper for GetOrganizationConfigRuleDetailedStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOrganizationConfigRuleDetailedStatusRequestT = Model::GetOrganizationConfigRuleDetailedStatusRequest>
        void GetOrganizationConfigRuleDetailedStatusAsync(const GetOrganizationConfigRuleDetailedStatusRequestT& request, const GetOrganizationConfigRuleDetailedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetOrganizationConfigRuleDetailedStatus, request, handler, context);
        }

        /**
         * <p>Returns detailed status for each member account within an organization for a
         * given organization conformance pack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetOrganizationConformancePackDetailedStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationConformancePackDetailedStatusOutcome GetOrganizationConformancePackDetailedStatus(const Model::GetOrganizationConformancePackDetailedStatusRequest& request) const;

        /**
         * A Callable wrapper for GetOrganizationConformancePackDetailedStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOrganizationConformancePackDetailedStatusRequestT = Model::GetOrganizationConformancePackDetailedStatusRequest>
        Model::GetOrganizationConformancePackDetailedStatusOutcomeCallable GetOrganizationConformancePackDetailedStatusCallable(const GetOrganizationConformancePackDetailedStatusRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetOrganizationConformancePackDetailedStatus, request);
        }

        /**
         * An Async wrapper for GetOrganizationConformancePackDetailedStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOrganizationConformancePackDetailedStatusRequestT = Model::GetOrganizationConformancePackDetailedStatusRequest>
        void GetOrganizationConformancePackDetailedStatusAsync(const GetOrganizationConformancePackDetailedStatusRequestT& request, const GetOrganizationConformancePackDetailedStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetOrganizationConformancePackDetailedStatus, request, handler, context);
        }

        /**
         * <p>Returns the policy definition containing the logic for your organization
         * Config Custom Policy rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetOrganizationCustomRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationCustomRulePolicyOutcome GetOrganizationCustomRulePolicy(const Model::GetOrganizationCustomRulePolicyRequest& request) const;

        /**
         * A Callable wrapper for GetOrganizationCustomRulePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOrganizationCustomRulePolicyRequestT = Model::GetOrganizationCustomRulePolicyRequest>
        Model::GetOrganizationCustomRulePolicyOutcomeCallable GetOrganizationCustomRulePolicyCallable(const GetOrganizationCustomRulePolicyRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetOrganizationCustomRulePolicy, request);
        }

        /**
         * An Async wrapper for GetOrganizationCustomRulePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOrganizationCustomRulePolicyRequestT = Model::GetOrganizationCustomRulePolicyRequest>
        void GetOrganizationCustomRulePolicyAsync(const GetOrganizationCustomRulePolicyRequestT& request, const GetOrganizationCustomRulePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetOrganizationCustomRulePolicy, request, handler, context);
        }

        /**
         *  <p>For accurate reporting on the compliance status, you must record
         * the <code>AWS::Config::ResourceCompliance</code> resource type. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/select-resources.html">Selecting
         * Which Resources Config Records</a>.</p>  <p>Returns a list of
         * <code>ConfigurationItems</code> for the specified resource. The list contains
         * details about each state of the resource during the specified time interval. If
         * you specified a retention period to retain your <code>ConfigurationItems</code>
         * between a minimum of 30 days and a maximum of 7 years (2557 days), Config
         * returns the <code>ConfigurationItems</code> for the specified retention period.
         * </p> <p>The response is paginated. By default, Config returns a limit of 10
         * configuration items per page. You can customize this number with the
         * <code>limit</code> parameter. The response includes a <code>nextToken</code>
         * string. To get the next page of results, run the request again and specify the
         * string for the <code>nextToken</code> parameter.</p>  <p>Each call to the
         * API is limited to span a duration of seven days. It is likely that the number of
         * records returned is smaller than the specified <code>limit</code>. In such
         * cases, you can make another call, using the <code>nextToken</code>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetResourceConfigHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceConfigHistoryOutcome GetResourceConfigHistory(const Model::GetResourceConfigHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetResourceConfigHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceConfigHistoryRequestT = Model::GetResourceConfigHistoryRequest>
        Model::GetResourceConfigHistoryOutcomeCallable GetResourceConfigHistoryCallable(const GetResourceConfigHistoryRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetResourceConfigHistory, request);
        }

        /**
         * An Async wrapper for GetResourceConfigHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceConfigHistoryRequestT = Model::GetResourceConfigHistoryRequest>
        void GetResourceConfigHistoryAsync(const GetResourceConfigHistoryRequestT& request, const GetResourceConfigHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetResourceConfigHistory, request, handler, context);
        }

        /**
         * <p>Returns a summary of resource evaluation for the specified resource
         * evaluation ID from the proactive rules that were run. The results indicate which
         * evaluation context was used to evaluate the rules, which resource details were
         * evaluated, the evaluation mode that was run, and whether the resource details
         * comply with the configuration of the proactive rules. </p>  <p>To see
         * additional information about the evaluation result, such as which rule flagged a
         * resource as NON_COMPLIANT, use the <a
         * href="https://docs.aws.amazon.com/config/latest/APIReference/API_GetComplianceDetailsByResource.html">GetComplianceDetailsByResource</a>
         * API. For more information, see the <a
         * href="https://docs.aws.amazon.com/config/latest/APIReference/API_GetResourceEvaluationSummary.html#API_GetResourceEvaluationSummary_Examples">Examples</a>
         * section.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetResourceEvaluationSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceEvaluationSummaryOutcome GetResourceEvaluationSummary(const Model::GetResourceEvaluationSummaryRequest& request) const;

        /**
         * A Callable wrapper for GetResourceEvaluationSummary that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetResourceEvaluationSummaryRequestT = Model::GetResourceEvaluationSummaryRequest>
        Model::GetResourceEvaluationSummaryOutcomeCallable GetResourceEvaluationSummaryCallable(const GetResourceEvaluationSummaryRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetResourceEvaluationSummary, request);
        }

        /**
         * An Async wrapper for GetResourceEvaluationSummary that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetResourceEvaluationSummaryRequestT = Model::GetResourceEvaluationSummaryRequest>
        void GetResourceEvaluationSummaryAsync(const GetResourceEvaluationSummaryRequestT& request, const GetResourceEvaluationSummaryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetResourceEvaluationSummary, request, handler, context);
        }

        /**
         * <p>Returns the details of a specific stored query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetStoredQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStoredQueryOutcome GetStoredQuery(const Model::GetStoredQueryRequest& request) const;

        /**
         * A Callable wrapper for GetStoredQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStoredQueryRequestT = Model::GetStoredQueryRequest>
        Model::GetStoredQueryOutcomeCallable GetStoredQueryCallable(const GetStoredQueryRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::GetStoredQuery, request);
        }

        /**
         * An Async wrapper for GetStoredQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStoredQueryRequestT = Model::GetStoredQueryRequest>
        void GetStoredQueryAsync(const GetStoredQueryRequestT& request, const GetStoredQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::GetStoredQuery, request, handler, context);
        }

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers that are
         * aggregated for a specific resource type across accounts and regions. A resource
         * identifier includes the resource type, ID, (if available) the custom resource
         * name, source account, and source region. You can narrow the results to include
         * only resources that have specific resource IDs, or a resource name, or source
         * account ID, or source region.</p> <p>For example, if the input consists of
         * accountID 12345678910 and the region is us-east-1 for resource type
         * <code>AWS::EC2::Instance</code> then the API returns all the EC2 instance
         * identifiers of accountID 12345678910 and region us-east-1.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListAggregateDiscoveredResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAggregateDiscoveredResourcesOutcome ListAggregateDiscoveredResources(const Model::ListAggregateDiscoveredResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListAggregateDiscoveredResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAggregateDiscoveredResourcesRequestT = Model::ListAggregateDiscoveredResourcesRequest>
        Model::ListAggregateDiscoveredResourcesOutcomeCallable ListAggregateDiscoveredResourcesCallable(const ListAggregateDiscoveredResourcesRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::ListAggregateDiscoveredResources, request);
        }

        /**
         * An Async wrapper for ListAggregateDiscoveredResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAggregateDiscoveredResourcesRequestT = Model::ListAggregateDiscoveredResourcesRequest>
        void ListAggregateDiscoveredResourcesAsync(const ListAggregateDiscoveredResourcesRequestT& request, const ListAggregateDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::ListAggregateDiscoveredResources, request, handler, context);
        }

        /**
         * <p>Returns a list of conformance pack compliance scores. A compliance score is
         * the percentage of the number of compliant rule-resource combinations in a
         * conformance pack compared to the number of total possible rule-resource
         * combinations in the conformance pack. This metric provides you with a high-level
         * view of the compliance state of your conformance packs. You can use it to
         * identify, investigate, and understand the level of compliance in your
         * conformance packs.</p>  <p>Conformance packs with no evaluation results
         * will have a compliance score of <code>INSUFFICIENT_DATA</code>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListConformancePackComplianceScores">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConformancePackComplianceScoresOutcome ListConformancePackComplianceScores(const Model::ListConformancePackComplianceScoresRequest& request) const;

        /**
         * A Callable wrapper for ListConformancePackComplianceScores that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConformancePackComplianceScoresRequestT = Model::ListConformancePackComplianceScoresRequest>
        Model::ListConformancePackComplianceScoresOutcomeCallable ListConformancePackComplianceScoresCallable(const ListConformancePackComplianceScoresRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::ListConformancePackComplianceScores, request);
        }

        /**
         * An Async wrapper for ListConformancePackComplianceScores that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConformancePackComplianceScoresRequestT = Model::ListConformancePackComplianceScoresRequest>
        void ListConformancePackComplianceScoresAsync(const ListConformancePackComplianceScoresRequestT& request, const ListConformancePackComplianceScoresResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::ListConformancePackComplianceScores, request, handler, context);
        }

        /**
         * <p>Accepts a resource type and returns a list of resource identifiers for the
         * resources of that type. A resource identifier includes the resource type, ID,
         * and (if available) the custom resource name. The results consist of resources
         * that Config has discovered, including those that Config is not currently
         * recording. You can narrow the results to include only resources that have
         * specific resource IDs or a resource name.</p>  <p>You can specify either
         * resource IDs or a resource name, but not both, in the same request.</p> 
         * <p>The response is paginated. By default, Config lists 100 resource identifiers
         * on each page. You can customize this number with the <code>limit</code>
         * parameter. The response includes a <code>nextToken</code> string. To get the
         * next page of results, run the request again and specify the string for the
         * <code>nextToken</code> parameter.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListDiscoveredResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDiscoveredResourcesOutcome ListDiscoveredResources(const Model::ListDiscoveredResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListDiscoveredResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDiscoveredResourcesRequestT = Model::ListDiscoveredResourcesRequest>
        Model::ListDiscoveredResourcesOutcomeCallable ListDiscoveredResourcesCallable(const ListDiscoveredResourcesRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::ListDiscoveredResources, request);
        }

        /**
         * An Async wrapper for ListDiscoveredResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDiscoveredResourcesRequestT = Model::ListDiscoveredResourcesRequest>
        void ListDiscoveredResourcesAsync(const ListDiscoveredResourcesRequestT& request, const ListDiscoveredResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::ListDiscoveredResources, request, handler, context);
        }

        /**
         * <p>Returns a list of proactive resource evaluations.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListResourceEvaluations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceEvaluationsOutcome ListResourceEvaluations(const Model::ListResourceEvaluationsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceEvaluations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListResourceEvaluationsRequestT = Model::ListResourceEvaluationsRequest>
        Model::ListResourceEvaluationsOutcomeCallable ListResourceEvaluationsCallable(const ListResourceEvaluationsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::ListResourceEvaluations, request);
        }

        /**
         * An Async wrapper for ListResourceEvaluations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListResourceEvaluationsRequestT = Model::ListResourceEvaluationsRequest>
        void ListResourceEvaluationsAsync(const ListResourceEvaluationsRequestT& request, const ListResourceEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::ListResourceEvaluations, request, handler, context);
        }

        /**
         * <p>Lists the stored queries for a single Amazon Web Services account and a
         * single Amazon Web Services Region. The default is 100. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListStoredQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStoredQueriesOutcome ListStoredQueries(const Model::ListStoredQueriesRequest& request) const;

        /**
         * A Callable wrapper for ListStoredQueries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListStoredQueriesRequestT = Model::ListStoredQueriesRequest>
        Model::ListStoredQueriesOutcomeCallable ListStoredQueriesCallable(const ListStoredQueriesRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::ListStoredQueries, request);
        }

        /**
         * An Async wrapper for ListStoredQueries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStoredQueriesRequestT = Model::ListStoredQueriesRequest>
        void ListStoredQueriesAsync(const ListStoredQueriesRequestT& request, const ListStoredQueriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::ListStoredQueries, request, handler, context);
        }

        /**
         * <p>List the tags for Config resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Authorizes the aggregator account and region to collect data from the source
         * account and region. </p>  <p> <code>PutAggregationAuthorization</code> is
         * an idempotent API. Subsequent requests won’t create a duplicate resource if one
         * was already created. If a following request has different <code>tags</code>
         * values, Config will ignore these differences and treat it as an idempotent
         * request of the previous. In this case, <code>tags</code> will not be updated,
         * even if they are different.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutAggregationAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAggregationAuthorizationOutcome PutAggregationAuthorization(const Model::PutAggregationAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for PutAggregationAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAggregationAuthorizationRequestT = Model::PutAggregationAuthorizationRequest>
        Model::PutAggregationAuthorizationOutcomeCallable PutAggregationAuthorizationCallable(const PutAggregationAuthorizationRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutAggregationAuthorization, request);
        }

        /**
         * An Async wrapper for PutAggregationAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAggregationAuthorizationRequestT = Model::PutAggregationAuthorizationRequest>
        void PutAggregationAuthorizationAsync(const PutAggregationAuthorizationRequestT& request, const PutAggregationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutAggregationAuthorization, request, handler, context);
        }

        /**
         * <p>Adds or updates an Config rule to evaluate if your Amazon Web Services
         * resources comply with your desired configurations. For information on how many
         * Config rules you can have per account, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/configlimits.html">
         * <b>Service Limits</b> </a> in the <i>Config Developer Guide</i>.</p> <p>There
         * are two types of rules: <i>Config Managed Rules</i> and <i>Config Custom
         * Rules</i>. You can use <code>PutConfigRule</code> to create both Config Managed
         * Rules and Config Custom Rules.</p> <p>Config Managed Rules are predefined,
         * customizable rules created by Config. For a list of managed rules, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
         * of Config Managed Rules</a>. If you are adding an Config managed rule, you must
         * specify the rule's identifier for the <code>SourceIdentifier</code> key.</p>
         * <p>Config Custom Rules are rules that you create from scratch. There are two
         * ways to create Config custom rules: with Lambda functions (<a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/gettingstarted-concepts.html#gettingstarted-concepts-function">
         * Lambda Developer Guide</a>) and with Guard (<a
         * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
         * Repository</a>), a policy-as-code language. Config custom rules created with
         * Lambda are called <i>Config Custom Lambda Rules</i> and Config custom rules
         * created with Guard are called <i>Config Custom Policy Rules</i>.</p> <p>If you
         * are adding a new Config Custom Lambda rule, you first need to create an Lambda
         * function that the rule invokes to evaluate your resources. When you use
         * <code>PutConfigRule</code> to add a Custom Lambda rule to Config, you must
         * specify the Amazon Resource Name (ARN) that Lambda assigns to the function. You
         * specify the ARN in the <code>SourceIdentifier</code> key. This key is part of
         * the <code>Source</code> object, which is part of the <code>ConfigRule</code>
         * object. </p> <p>For any new Config rule that you add, specify the
         * <code>ConfigRuleName</code> in the <code>ConfigRule</code> object. Do not
         * specify the <code>ConfigRuleArn</code> or the <code>ConfigRuleId</code>. These
         * values are generated by Config for new rules.</p> <p>If you are updating a rule
         * that you added previously, you can specify the rule by
         * <code>ConfigRuleName</code>, <code>ConfigRuleId</code>, or
         * <code>ConfigRuleArn</code> in the <code>ConfigRule</code> data type that you use
         * in this request.</p> <p>For more information about developing and using Config
         * rules, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating
         * Resources with Config Rules</a> in the <i>Config Developer Guide</i>.</p> 
         * <p> <code>PutConfigRule</code> is an idempotent API. Subsequent requests won’t
         * create a duplicate resource if one was already created. If a following request
         * has different <code>tags</code> values, Config will ignore these differences and
         * treat it as an idempotent request of the previous. In this case,
         * <code>tags</code> will not be updated, even if they are different.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigRuleOutcome PutConfigRule(const Model::PutConfigRuleRequest& request) const;

        /**
         * A Callable wrapper for PutConfigRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigRuleRequestT = Model::PutConfigRuleRequest>
        Model::PutConfigRuleOutcomeCallable PutConfigRuleCallable(const PutConfigRuleRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutConfigRule, request);
        }

        /**
         * An Async wrapper for PutConfigRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigRuleRequestT = Model::PutConfigRuleRequest>
        void PutConfigRuleAsync(const PutConfigRuleRequestT& request, const PutConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutConfigRule, request, handler, context);
        }

        /**
         * <p>Creates and updates the configuration aggregator with the selected source
         * accounts and regions. The source account can be individual account(s) or an
         * organization.</p> <p> <code>accountIds</code> that are passed will be replaced
         * with existing accounts. If you want to add additional accounts into the
         * aggregator, call <code>DescribeConfigurationAggregators</code> to get the
         * previous accounts and then append new ones.</p>  <p>Config should be
         * enabled in source accounts and regions you want to aggregate.</p> <p>If your
         * source type is an organization, you must be signed in to the management account
         * or a registered delegated administrator and all the features must be enabled in
         * your organization. If the caller is a management account, Config calls
         * <code>EnableAwsServiceAccess</code> API to enable integration between Config and
         * Organizations. If the caller is a registered delegated administrator, Config
         * calls <code>ListDelegatedAdministrators</code> API to verify whether the caller
         * is a valid delegated administrator.</p> <p>To register a delegated
         * administrator, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/set-up-aggregator-cli.html#register-a-delegated-administrator-cli">Register
         * a Delegated Administrator</a> in the <i>Config developer guide</i>. </p> 
         *  <p> <code>PutConfigurationAggregator</code> is an idempotent API.
         * Subsequent requests won’t create a duplicate resource if one was already
         * created. If a following request has different <code>tags</code> values, Config
         * will ignore these differences and treat it as an idempotent request of the
         * previous. In this case, <code>tags</code> will not be updated, even if they are
         * different.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationAggregatorOutcome PutConfigurationAggregator(const Model::PutConfigurationAggregatorRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationAggregator that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigurationAggregatorRequestT = Model::PutConfigurationAggregatorRequest>
        Model::PutConfigurationAggregatorOutcomeCallable PutConfigurationAggregatorCallable(const PutConfigurationAggregatorRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutConfigurationAggregator, request);
        }

        /**
         * An Async wrapper for PutConfigurationAggregator that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigurationAggregatorRequestT = Model::PutConfigurationAggregatorRequest>
        void PutConfigurationAggregatorAsync(const PutConfigurationAggregatorRequestT& request, const PutConfigurationAggregatorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutConfigurationAggregator, request, handler, context);
        }

        /**
         * <p>Creates a new configuration recorder to record configuration changes for
         * specified resource types.</p> <p>You can also use this action to change the
         * <code>roleARN</code> or the <code>recordingGroup</code> of an existing recorder.
         * For more information, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/stop-start-recorder.html">
         * <b>Managing the Configuration Recorder</b> </a> in the <i>Config Developer
         * Guide</i>.</p>  <p>You can specify only one configuration recorder for
         * each Amazon Web Services Region for each account.</p> <p>If the configuration
         * recorder does not have the <code>recordingGroup</code> field specified, the
         * default is to record all supported resource types.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationRecorderOutcome PutConfigurationRecorder(const Model::PutConfigurationRecorderRequest& request) const;

        /**
         * A Callable wrapper for PutConfigurationRecorder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConfigurationRecorderRequestT = Model::PutConfigurationRecorderRequest>
        Model::PutConfigurationRecorderOutcomeCallable PutConfigurationRecorderCallable(const PutConfigurationRecorderRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutConfigurationRecorder, request);
        }

        /**
         * An Async wrapper for PutConfigurationRecorder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConfigurationRecorderRequestT = Model::PutConfigurationRecorderRequest>
        void PutConfigurationRecorderAsync(const PutConfigurationRecorderRequestT& request, const PutConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutConfigurationRecorder, request, handler, context);
        }

        /**
         * <p>Creates or updates a conformance pack. A conformance pack is a collection of
         * Config rules that can be easily deployed in an account and a region and across
         * an organization. For information on how many conformance packs you can have per
         * account, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/configlimits.html">
         * <b>Service Limits</b> </a> in the <i>Config Developer Guide</i>.</p> <p>This API
         * creates a service-linked role <code>AWSServiceRoleForConfigConforms</code> in
         * your account. The service-linked role is created only when the role does not
         * exist in your account. </p>  <p>You must specify only one of the follow
         * parameters: <code>TemplateS3Uri</code>, <code>TemplateBody</code> or
         * <code>TemplateSSMDocumentDetails</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConformancePack">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConformancePackOutcome PutConformancePack(const Model::PutConformancePackRequest& request) const;

        /**
         * A Callable wrapper for PutConformancePack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutConformancePackRequestT = Model::PutConformancePackRequest>
        Model::PutConformancePackOutcomeCallable PutConformancePackCallable(const PutConformancePackRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutConformancePack, request);
        }

        /**
         * An Async wrapper for PutConformancePack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutConformancePackRequestT = Model::PutConformancePackRequest>
        void PutConformancePackAsync(const PutConformancePackRequestT& request, const PutConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutConformancePack, request, handler, context);
        }

        /**
         * <p>Creates a delivery channel object to deliver configuration information and
         * other compliance information to an Amazon S3 bucket and Amazon SNS topic. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/notifications-for-AWS-Config.html">Notifications
         * that Config Sends to an Amazon SNS topic</a>.</p> <p>Before you can create a
         * delivery channel, you must create a configuration recorder.</p> <p>You can use
         * this action to change the Amazon S3 bucket or an Amazon SNS topic of the
         * existing delivery channel. To change the Amazon S3 bucket or an Amazon SNS
         * topic, call this action and specify the changed values for the S3 bucket and the
         * SNS topic. If you specify a different value for either the S3 bucket or the SNS
         * topic, this action will keep the existing value for the parameter that is not
         * changed.</p>  <p>You can have only one delivery channel per region in your
         * account.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutDeliveryChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDeliveryChannelOutcome PutDeliveryChannel(const Model::PutDeliveryChannelRequest& request) const;

        /**
         * A Callable wrapper for PutDeliveryChannel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDeliveryChannelRequestT = Model::PutDeliveryChannelRequest>
        Model::PutDeliveryChannelOutcomeCallable PutDeliveryChannelCallable(const PutDeliveryChannelRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutDeliveryChannel, request);
        }

        /**
         * An Async wrapper for PutDeliveryChannel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDeliveryChannelRequestT = Model::PutDeliveryChannelRequest>
        void PutDeliveryChannelAsync(const PutDeliveryChannelRequestT& request, const PutDeliveryChannelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutDeliveryChannel, request, handler, context);
        }

        /**
         * <p>Used by an Lambda function to deliver evaluation results to Config. This
         * action is required in every Lambda function that is invoked by an Config
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutEvaluations">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEvaluationsOutcome PutEvaluations(const Model::PutEvaluationsRequest& request) const;

        /**
         * A Callable wrapper for PutEvaluations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutEvaluationsRequestT = Model::PutEvaluationsRequest>
        Model::PutEvaluationsOutcomeCallable PutEvaluationsCallable(const PutEvaluationsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutEvaluations, request);
        }

        /**
         * An Async wrapper for PutEvaluations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutEvaluationsRequestT = Model::PutEvaluationsRequest>
        void PutEvaluationsAsync(const PutEvaluationsRequestT& request, const PutEvaluationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutEvaluations, request, handler, context);
        }

        /**
         * <p>Add or updates the evaluations for process checks. This API checks if the
         * rule is a process check when the name of the Config rule is
         * provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutExternalEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::PutExternalEvaluationOutcome PutExternalEvaluation(const Model::PutExternalEvaluationRequest& request) const;

        /**
         * A Callable wrapper for PutExternalEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutExternalEvaluationRequestT = Model::PutExternalEvaluationRequest>
        Model::PutExternalEvaluationOutcomeCallable PutExternalEvaluationCallable(const PutExternalEvaluationRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutExternalEvaluation, request);
        }

        /**
         * An Async wrapper for PutExternalEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutExternalEvaluationRequestT = Model::PutExternalEvaluationRequest>
        void PutExternalEvaluationAsync(const PutExternalEvaluationRequestT& request, const PutExternalEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutExternalEvaluation, request, handler, context);
        }

        /**
         * <p>Adds or updates an Config rule for your entire organization to evaluate if
         * your Amazon Web Services resources comply with your desired configurations. For
         * information on how many organization Config rules you can have per account, see
         * <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/configlimits.html">
         * <b>Service Limits</b> </a> in the <i>Config Developer Guide</i>.</p> <p> Only a
         * management account and a delegated administrator can create or update an
         * organization Config rule. When calling this API with a delegated administrator,
         * you must ensure Organizations <code>ListDelegatedAdministrator</code>
         * permissions are added. An organization can have up to 3 delegated
         * administrators.</p> <p>This API enables organization service access through the
         * <code>EnableAWSServiceAccess</code> action and creates a service-linked role
         * <code>AWSServiceRoleForConfigMultiAccountSetup</code> in the management or
         * delegated administrator account of your organization. The service-linked role is
         * created only when the role does not exist in the caller account. Config verifies
         * the existence of role with <code>GetRole</code> action.</p> <p>To use this API
         * with delegated administrator, register a delegated administrator by calling
         * Amazon Web Services Organization <code>register-delegated-administrator</code>
         * for <code>config-multiaccountsetup.amazonaws.com</code>. </p> <p>There are two
         * types of rules: <i>Config Managed Rules</i> and <i>Config Custom Rules</i>. You
         * can use <code>PutOrganizationConfigRule</code> to create both Config Managed
         * Rules and Config Custom Rules.</p> <p>Config Managed Rules are predefined,
         * customizable rules created by Config. For a list of managed rules, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
         * of Config Managed Rules</a>. If you are adding an Config managed rule, you must
         * specify the rule's identifier for the <code>RuleIdentifier</code> key.</p>
         * <p>Config Custom Rules are rules that you create from scratch. There are two
         * ways to create Config custom rules: with Lambda functions (<a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/gettingstarted-concepts.html#gettingstarted-concepts-function">
         * Lambda Developer Guide</a>) and with Guard (<a
         * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
         * Repository</a>), a policy-as-code language. Config custom rules created with
         * Lambda are called <i>Config Custom Lambda Rules</i> and Config custom rules
         * created with Guard are called <i>Config Custom Policy Rules</i>.</p> <p>If you
         * are adding a new Config Custom Lambda rule, you first need to create an Lambda
         * function in the management account or a delegated administrator that the rule
         * invokes to evaluate your resources. You also need to create an IAM role in the
         * managed account that can be assumed by the Lambda function. When you use
         * <code>PutOrganizationConfigRule</code> to add a Custom Lambda rule to Config,
         * you must specify the Amazon Resource Name (ARN) that Lambda assigns to the
         * function.</p>  <p>Prerequisite: Ensure you call
         * <code>EnableAllFeatures</code> API to enable all features in an
         * organization.</p> <p>Make sure to specify one of either
         * <code>OrganizationCustomPolicyRuleMetadata</code> for Custom Policy rules,
         * <code>OrganizationCustomRuleMetadata</code> for Custom Lambda rules, or
         * <code>OrganizationManagedRuleMetadata</code> for managed rules.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutOrganizationConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutOrganizationConfigRuleOutcome PutOrganizationConfigRule(const Model::PutOrganizationConfigRuleRequest& request) const;

        /**
         * A Callable wrapper for PutOrganizationConfigRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutOrganizationConfigRuleRequestT = Model::PutOrganizationConfigRuleRequest>
        Model::PutOrganizationConfigRuleOutcomeCallable PutOrganizationConfigRuleCallable(const PutOrganizationConfigRuleRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutOrganizationConfigRule, request);
        }

        /**
         * An Async wrapper for PutOrganizationConfigRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutOrganizationConfigRuleRequestT = Model::PutOrganizationConfigRuleRequest>
        void PutOrganizationConfigRuleAsync(const PutOrganizationConfigRuleRequestT& request, const PutOrganizationConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutOrganizationConfigRule, request, handler, context);
        }

        /**
         * <p>Deploys conformance packs across member accounts in an Amazon Web Services
         * Organization. For information on how many organization conformance packs and how
         * many Config rules you can have per account, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/configlimits.html">
         * <b>Service Limits</b> </a> in the <i>Config Developer Guide</i>.</p> <p>Only a
         * management account and a delegated administrator can call this API. When calling
         * this API with a delegated administrator, you must ensure Organizations
         * <code>ListDelegatedAdministrator</code> permissions are added. An organization
         * can have up to 3 delegated administrators.</p> <p>This API enables organization
         * service access for <code>config-multiaccountsetup.amazonaws.com</code> through
         * the <code>EnableAWSServiceAccess</code> action and creates a service-linked role
         * <code>AWSServiceRoleForConfigMultiAccountSetup</code> in the management or
         * delegated administrator account of your organization. The service-linked role is
         * created only when the role does not exist in the caller account. To use this API
         * with delegated administrator, register a delegated administrator by calling
         * Amazon Web Services Organization <code>register-delegate-admin</code> for
         * <code>config-multiaccountsetup.amazonaws.com</code>.</p>  <p>Prerequisite:
         * Ensure you call <code>EnableAllFeatures</code> API to enable all features in an
         * organization.</p> <p>You must specify either the <code>TemplateS3Uri</code> or
         * the <code>TemplateBody</code> parameter, but not both. If you provide both
         * Config uses the <code>TemplateS3Uri</code> parameter and ignores the
         * <code>TemplateBody</code> parameter.</p> <p>Config sets the state of a
         * conformance pack to CREATE_IN_PROGRESS and UPDATE_IN_PROGRESS until the
         * conformance pack is created or updated. You cannot update a conformance pack
         * while it is in this state.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutOrganizationConformancePack">AWS
         * API Reference</a></p>
         */
        virtual Model::PutOrganizationConformancePackOutcome PutOrganizationConformancePack(const Model::PutOrganizationConformancePackRequest& request) const;

        /**
         * A Callable wrapper for PutOrganizationConformancePack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutOrganizationConformancePackRequestT = Model::PutOrganizationConformancePackRequest>
        Model::PutOrganizationConformancePackOutcomeCallable PutOrganizationConformancePackCallable(const PutOrganizationConformancePackRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutOrganizationConformancePack, request);
        }

        /**
         * An Async wrapper for PutOrganizationConformancePack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutOrganizationConformancePackRequestT = Model::PutOrganizationConformancePackRequest>
        void PutOrganizationConformancePackAsync(const PutOrganizationConformancePackRequestT& request, const PutOrganizationConformancePackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutOrganizationConformancePack, request, handler, context);
        }

        /**
         * <p>Adds or updates the remediation configuration with a specific Config rule
         * with the selected target or action. The API creates the
         * <code>RemediationConfiguration</code> object for the Config rule. The Config
         * rule must already exist for you to add a remediation configuration. The target
         * (SSM document) must exist and have permissions to use the target. </p> 
         * <p> <b>Be aware of backward incompatible changes</b> </p> <p>If you make
         * backward incompatible changes to the SSM document, you must call this again to
         * ensure the remediations can run.</p> <p>This API does not support adding
         * remediation configurations for service-linked Config Rules such as Organization
         * Config rules, the rules deployed by conformance packs, and rules deployed by
         * Amazon Web Services Security Hub.</p>   <p> <b>Required fields</b>
         * </p> <p>For manual remediation configuration, you need to provide a value for
         * <code>automationAssumeRole</code> or use a value in the
         * <code>assumeRole</code>field to remediate your resources. The SSM automation
         * document can use either as long as it maps to a valid parameter.</p> <p>However,
         * for automatic remediation configuration, the only valid <code>assumeRole</code>
         * field value is <code>AutomationAssumeRole</code> and you need to provide a value
         * for <code>AutomationAssumeRole</code> to remediate your resources.</p> 
         *  <p> <b>Auto remediation can be initiated even for compliant resources</b>
         * </p> <p>If you enable auto remediation for a specific Config rule using the <a
         * href="https://docs.aws.amazon.com/config/latest/APIReference/emAPI_PutRemediationConfigurations.html">PutRemediationConfigurations</a>
         * API or the Config console, it initiates the remediation process for all
         * non-compliant resources for that specific rule. The auto remediation process
         * relies on the compliance data snapshot which is captured on a periodic basis.
         * Any non-compliant resource that is updated between the snapshot schedule will
         * continue to be remediated based on the last known compliance data snapshot.</p>
         * <p>This means that in some cases auto remediation can be initiated even for
         * compliant resources, since the bootstrap processor uses a database that can have
         * stale evaluation results based on the last known compliance data snapshot.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRemediationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRemediationConfigurationsOutcome PutRemediationConfigurations(const Model::PutRemediationConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for PutRemediationConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRemediationConfigurationsRequestT = Model::PutRemediationConfigurationsRequest>
        Model::PutRemediationConfigurationsOutcomeCallable PutRemediationConfigurationsCallable(const PutRemediationConfigurationsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutRemediationConfigurations, request);
        }

        /**
         * An Async wrapper for PutRemediationConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRemediationConfigurationsRequestT = Model::PutRemediationConfigurationsRequest>
        void PutRemediationConfigurationsAsync(const PutRemediationConfigurationsRequestT& request, const PutRemediationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutRemediationConfigurations, request, handler, context);
        }

        /**
         * <p>A remediation exception is when a specified resource is no longer considered
         * for auto-remediation. This API adds a new exception or updates an existing
         * exception for a specified resource with a specified Config rule. </p>  <p>
         * <b>Exceptions block auto remediation</b> </p> <p>Config generates a remediation
         * exception when a problem occurs running a remediation action for a specified
         * resource. Remediation exceptions blocks auto-remediation until the exception is
         * cleared.</p>   <p> <b>Manual remediation is recommended when
         * placing an exception</b> </p> <p>When placing an exception on an Amazon Web
         * Services resource, it is recommended that remediation is set as manual
         * remediation until the given Config rule for the specified resource evaluates the
         * resource as <code>NON_COMPLIANT</code>. Once the resource has been evaluated as
         * <code>NON_COMPLIANT</code>, you can add remediation exceptions and change the
         * remediation type back from Manual to Auto if you want to use auto-remediation.
         * Otherwise, using auto-remediation before a <code>NON_COMPLIANT</code> evaluation
         * result can delete resources before the exception is applied.</p>  
         * <p> <b>Exceptions can only be performed on non-compliant resources</b> </p>
         * <p>Placing an exception can only be performed on resources that are
         * <code>NON_COMPLIANT</code>. If you use this API for <code>COMPLIANT</code>
         * resources or resources that are <code>NOT_APPLICABLE</code>, a remediation
         * exception will not be generated. For more information on the conditions that
         * initiate the possible Config evaluation results, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/config-concepts.html#aws-config-rules">Concepts
         * | Config Rules</a> in the <i>Config Developer Guide</i>.</p>   <p>
         * <b>Auto remediation can be initiated even for compliant resources</b> </p> <p>If
         * you enable auto remediation for a specific Config rule using the <a
         * href="https://docs.aws.amazon.com/config/latest/APIReference/emAPI_PutRemediationConfigurations.html">PutRemediationConfigurations</a>
         * API or the Config console, it initiates the remediation process for all
         * non-compliant resources for that specific rule. The auto remediation process
         * relies on the compliance data snapshot which is captured on a periodic basis.
         * Any non-compliant resource that is updated between the snapshot schedule will
         * continue to be remediated based on the last known compliance data snapshot.</p>
         * <p>This means that in some cases auto remediation can be initiated even for
         * compliant resources, since the bootstrap processor uses a database that can have
         * stale evaluation results based on the last known compliance data snapshot.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRemediationExceptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRemediationExceptionsOutcome PutRemediationExceptions(const Model::PutRemediationExceptionsRequest& request) const;

        /**
         * A Callable wrapper for PutRemediationExceptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRemediationExceptionsRequestT = Model::PutRemediationExceptionsRequest>
        Model::PutRemediationExceptionsOutcomeCallable PutRemediationExceptionsCallable(const PutRemediationExceptionsRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutRemediationExceptions, request);
        }

        /**
         * An Async wrapper for PutRemediationExceptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRemediationExceptionsRequestT = Model::PutRemediationExceptionsRequest>
        void PutRemediationExceptionsAsync(const PutRemediationExceptionsRequestT& request, const PutRemediationExceptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutRemediationExceptions, request, handler, context);
        }

        /**
         * <p>Records the configuration state for the resource provided in the request. The
         * configuration state of a resource is represented in Config as Configuration
         * Items. Once this API records the configuration item, you can retrieve the list
         * of configuration items for the custom resource type using existing Config APIs.
         * </p>  <p>The custom resource type must be registered with CloudFormation.
         * This API accepts the configuration item registered with CloudFormation.</p>
         * <p>When you call this API, Config only stores configuration state of the
         * resource provided in the request. This API does not change or remediate the
         * configuration of the resource. </p> <p>Write-only schema properites are not
         * recorded as part of the published configuration item.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::PutResourceConfigOutcome PutResourceConfig(const Model::PutResourceConfigRequest& request) const;

        /**
         * A Callable wrapper for PutResourceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutResourceConfigRequestT = Model::PutResourceConfigRequest>
        Model::PutResourceConfigOutcomeCallable PutResourceConfigCallable(const PutResourceConfigRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutResourceConfig, request);
        }

        /**
         * An Async wrapper for PutResourceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutResourceConfigRequestT = Model::PutResourceConfigRequest>
        void PutResourceConfigAsync(const PutResourceConfigRequestT& request, const PutResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutResourceConfig, request, handler, context);
        }

        /**
         * <p>Creates and updates the retention configuration with details about retention
         * period (number of days) that Config stores your historical information. The API
         * creates the <code>RetentionConfiguration</code> object and names the object as
         * <b>default</b>. When you have a <code>RetentionConfiguration</code> object named
         * <b>default</b>, calling the API modifies the default object. </p> 
         * <p>Currently, Config supports only one retention configuration per region in
         * your account.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRetentionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRetentionConfigurationOutcome PutRetentionConfiguration(const Model::PutRetentionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutRetentionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRetentionConfigurationRequestT = Model::PutRetentionConfigurationRequest>
        Model::PutRetentionConfigurationOutcomeCallable PutRetentionConfigurationCallable(const PutRetentionConfigurationRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutRetentionConfiguration, request);
        }

        /**
         * An Async wrapper for PutRetentionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRetentionConfigurationRequestT = Model::PutRetentionConfigurationRequest>
        void PutRetentionConfigurationAsync(const PutRetentionConfigurationRequestT& request, const PutRetentionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutRetentionConfiguration, request, handler, context);
        }

        /**
         * <p>Saves a new query or updates an existing saved query. The
         * <code>QueryName</code> must be unique for a single Amazon Web Services account
         * and a single Amazon Web Services Region. You can create upto 300 queries in a
         * single Amazon Web Services account and a single Amazon Web Services Region.</p>
         *  <p> <code>PutStoredQuery</code> is an idempotent API. Subsequent requests
         * won’t create a duplicate resource if one was already created. If a following
         * request has different <code>tags</code> values, Config will ignore these
         * differences and treat it as an idempotent request of the previous. In this case,
         * <code>tags</code> will not be updated, even if they are different.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutStoredQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStoredQueryOutcome PutStoredQuery(const Model::PutStoredQueryRequest& request) const;

        /**
         * A Callable wrapper for PutStoredQuery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutStoredQueryRequestT = Model::PutStoredQueryRequest>
        Model::PutStoredQueryOutcomeCallable PutStoredQueryCallable(const PutStoredQueryRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::PutStoredQuery, request);
        }

        /**
         * An Async wrapper for PutStoredQuery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutStoredQueryRequestT = Model::PutStoredQueryRequest>
        void PutStoredQueryAsync(const PutStoredQueryRequestT& request, const PutStoredQueryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::PutStoredQuery, request, handler, context);
        }

        /**
         * <p>Accepts a structured query language (SQL) SELECT command and an aggregator to
         * query configuration state of Amazon Web Services resources across multiple
         * accounts and regions, performs the corresponding search, and returns resource
         * configurations matching the properties.</p> <p>For more information about query
         * components, see the <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/query-components.html">
         * <b>Query Components</b> </a> section in the <i>Config Developer Guide</i>.</p>
         *  <p>If you run an aggregation query (i.e., using <code>GROUP BY</code> or
         * using aggregate functions such as <code>COUNT</code>; e.g., <code>SELECT
         * resourceId, COUNT(*) WHERE resourceType = 'AWS::IAM::Role' GROUP BY
         * resourceId</code>) and do not specify the <code>MaxResults</code> or the
         * <code>Limit</code> query parameters, the default page size is set to 500.</p>
         * <p>If you run a non-aggregation query (i.e., not using <code>GROUP BY</code> or
         * aggregate function; e.g., <code>SELECT * WHERE resourceType =
         * 'AWS::IAM::Role'</code>) and do not specify the <code>MaxResults</code> or the
         * <code>Limit</code> query parameters, the default page size is set to 25.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/SelectAggregateResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::SelectAggregateResourceConfigOutcome SelectAggregateResourceConfig(const Model::SelectAggregateResourceConfigRequest& request) const;

        /**
         * A Callable wrapper for SelectAggregateResourceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SelectAggregateResourceConfigRequestT = Model::SelectAggregateResourceConfigRequest>
        Model::SelectAggregateResourceConfigOutcomeCallable SelectAggregateResourceConfigCallable(const SelectAggregateResourceConfigRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::SelectAggregateResourceConfig, request);
        }

        /**
         * An Async wrapper for SelectAggregateResourceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SelectAggregateResourceConfigRequestT = Model::SelectAggregateResourceConfigRequest>
        void SelectAggregateResourceConfigAsync(const SelectAggregateResourceConfigRequestT& request, const SelectAggregateResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::SelectAggregateResourceConfig, request, handler, context);
        }

        /**
         * <p>Accepts a structured query language (SQL) <code>SELECT</code> command,
         * performs the corresponding search, and returns resource configurations matching
         * the properties.</p> <p>For more information about query components, see the <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/query-components.html">
         * <b>Query Components</b> </a> section in the <i>Config Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/SelectResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::SelectResourceConfigOutcome SelectResourceConfig(const Model::SelectResourceConfigRequest& request) const;

        /**
         * A Callable wrapper for SelectResourceConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SelectResourceConfigRequestT = Model::SelectResourceConfigRequest>
        Model::SelectResourceConfigOutcomeCallable SelectResourceConfigCallable(const SelectResourceConfigRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::SelectResourceConfig, request);
        }

        /**
         * An Async wrapper for SelectResourceConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SelectResourceConfigRequestT = Model::SelectResourceConfigRequest>
        void SelectResourceConfigAsync(const SelectResourceConfigRequestT& request, const SelectResourceConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::SelectResourceConfig, request, handler, context);
        }

        /**
         * <p>Runs an on-demand evaluation for the specified Config rules against the last
         * known configuration state of the resources. Use
         * <code>StartConfigRulesEvaluation</code> when you want to test that a rule you
         * updated is working as expected. <code>StartConfigRulesEvaluation</code> does not
         * re-record the latest configuration state for your resources. It re-runs an
         * evaluation against the last known state of your resources. </p> <p>You can
         * specify up to 25 Config rules per request. </p> <p>An existing
         * <code>StartConfigRulesEvaluation</code> call for the specified rules must
         * complete before you can call the API again. If you chose to have Config stream
         * to an Amazon SNS topic, you will receive a
         * <code>ConfigRuleEvaluationStarted</code> notification when the evaluation
         * starts.</p>  <p>You don't need to call the
         * <code>StartConfigRulesEvaluation</code> API to run an evaluation for a new rule.
         * When you create a rule, Config evaluates your resources against the rule
         * automatically. </p>  <p>The <code>StartConfigRulesEvaluation</code> API
         * is useful if you want to run on-demand evaluations, such as the following
         * example:</p> <ol> <li> <p>You have a custom rule that evaluates your IAM
         * resources every 24 hours.</p> </li> <li> <p>You update your Lambda function to
         * add additional conditions to your rule.</p> </li> <li> <p>Instead of waiting for
         * the next periodic evaluation, you call the
         * <code>StartConfigRulesEvaluation</code> API.</p> </li> <li> <p>Config invokes
         * your Lambda function and evaluates your IAM resources.</p> </li> <li> <p>Your
         * custom rule will still run periodic evaluations every 24 hours.</p> </li>
         * </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartConfigRulesEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConfigRulesEvaluationOutcome StartConfigRulesEvaluation(const Model::StartConfigRulesEvaluationRequest& request) const;

        /**
         * A Callable wrapper for StartConfigRulesEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartConfigRulesEvaluationRequestT = Model::StartConfigRulesEvaluationRequest>
        Model::StartConfigRulesEvaluationOutcomeCallable StartConfigRulesEvaluationCallable(const StartConfigRulesEvaluationRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::StartConfigRulesEvaluation, request);
        }

        /**
         * An Async wrapper for StartConfigRulesEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartConfigRulesEvaluationRequestT = Model::StartConfigRulesEvaluationRequest>
        void StartConfigRulesEvaluationAsync(const StartConfigRulesEvaluationRequestT& request, const StartConfigRulesEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::StartConfigRulesEvaluation, request, handler, context);
        }

        /**
         * <p>Starts recording configurations of the Amazon Web Services resources you have
         * selected to record in your Amazon Web Services account.</p> <p>You must have
         * created at least one delivery channel to successfully start the configuration
         * recorder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConfigurationRecorderOutcome StartConfigurationRecorder(const Model::StartConfigurationRecorderRequest& request) const;

        /**
         * A Callable wrapper for StartConfigurationRecorder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartConfigurationRecorderRequestT = Model::StartConfigurationRecorderRequest>
        Model::StartConfigurationRecorderOutcomeCallable StartConfigurationRecorderCallable(const StartConfigurationRecorderRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::StartConfigurationRecorder, request);
        }

        /**
         * An Async wrapper for StartConfigurationRecorder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartConfigurationRecorderRequestT = Model::StartConfigurationRecorderRequest>
        void StartConfigurationRecorderAsync(const StartConfigurationRecorderRequestT& request, const StartConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::StartConfigurationRecorder, request, handler, context);
        }

        /**
         * <p>Runs an on-demand remediation for the specified Config rules against the last
         * known remediation configuration. It runs an execution against the current state
         * of your resources. Remediation execution is asynchronous.</p> <p>You can specify
         * up to 100 resource keys per request. An existing StartRemediationExecution call
         * for the specified resource keys must complete before you can call the API
         * again.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartRemediationExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRemediationExecutionOutcome StartRemediationExecution(const Model::StartRemediationExecutionRequest& request) const;

        /**
         * A Callable wrapper for StartRemediationExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartRemediationExecutionRequestT = Model::StartRemediationExecutionRequest>
        Model::StartRemediationExecutionOutcomeCallable StartRemediationExecutionCallable(const StartRemediationExecutionRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::StartRemediationExecution, request);
        }

        /**
         * An Async wrapper for StartRemediationExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartRemediationExecutionRequestT = Model::StartRemediationExecutionRequest>
        void StartRemediationExecutionAsync(const StartRemediationExecutionRequestT& request, const StartRemediationExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::StartRemediationExecution, request, handler, context);
        }

        /**
         * <p>Runs an on-demand evaluation for the specified resource to determine whether
         * the resource details will comply with configured Config rules. You can also use
         * it for evaluation purposes. Config recommends using an evaluation context. It
         * runs an execution against the resource details with all of the Config rules in
         * your account that match with the specified proactive mode and resource type.</p>
         *  <p>Ensure you have the <code>cloudformation:DescribeType</code> role
         * setup to validate the resource type schema.</p> <p>You can find the <a
         * href="https://docs.aws.amazon.com/cloudformation-cli/latest/userguide/resource-type-schema.html">Resource
         * type schema</a> in "<i>Amazon Web Services public extensions</i>" within the
         * CloudFormation registry or with the following CLI commmand: <code>aws
         * cloudformation describe-type --type-name "AWS::S3::Bucket" --type
         * RESOURCE</code>.</p> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/registry.html#registry-view">Managing
         * extensions through the CloudFormation registry</a> and <a
         * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/aws-template-resource-type-ref.html">Amazon
         * Web Services resource and property types reference</a> in the CloudFormation
         * User Guide.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartResourceEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::StartResourceEvaluationOutcome StartResourceEvaluation(const Model::StartResourceEvaluationRequest& request) const;

        /**
         * A Callable wrapper for StartResourceEvaluation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartResourceEvaluationRequestT = Model::StartResourceEvaluationRequest>
        Model::StartResourceEvaluationOutcomeCallable StartResourceEvaluationCallable(const StartResourceEvaluationRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::StartResourceEvaluation, request);
        }

        /**
         * An Async wrapper for StartResourceEvaluation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartResourceEvaluationRequestT = Model::StartResourceEvaluationRequest>
        void StartResourceEvaluationAsync(const StartResourceEvaluationRequestT& request, const StartResourceEvaluationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::StartResourceEvaluation, request, handler, context);
        }

        /**
         * <p>Stops recording configurations of the Amazon Web Services resources you have
         * selected to record in your Amazon Web Services account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StopConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::StopConfigurationRecorderOutcome StopConfigurationRecorder(const Model::StopConfigurationRecorderRequest& request) const;

        /**
         * A Callable wrapper for StopConfigurationRecorder that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopConfigurationRecorderRequestT = Model::StopConfigurationRecorderRequest>
        Model::StopConfigurationRecorderOutcomeCallable StopConfigurationRecorderCallable(const StopConfigurationRecorderRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::StopConfigurationRecorder, request);
        }

        /**
         * An Async wrapper for StopConfigurationRecorder that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopConfigurationRecorderRequestT = Model::StopConfigurationRecorderRequest>
        void StopConfigurationRecorderAsync(const StopConfigurationRecorderRequestT& request, const StopConfigurationRecorderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::StopConfigurationRecorder, request, handler, context);
        }

        /**
         * <p>Associates the specified tags to a resource with the specified resourceArn.
         * If existing tags on a resource are not specified in the request parameters, they
         * are not changed. If existing tags are specified, however, then their values will
         * be updated. When a resource is deleted, the tags associated with that resource
         * are deleted as well.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ConfigServiceClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ConfigServiceClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConfigServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ConfigServiceClient>;
      void init(const ConfigServiceClientConfiguration& clientConfiguration);

      ConfigServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConfigServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConfigService
} // namespace Aws
