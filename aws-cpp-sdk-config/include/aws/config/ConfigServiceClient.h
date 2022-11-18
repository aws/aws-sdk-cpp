/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/config/ConfigService_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSAsyncOperationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/config/ConfigServiceServiceClientModel.h>
#include <aws/config/ConfigServiceLegacyAsyncMacros.h>

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
  class AWS_CONFIGSERVICE_API ConfigServiceClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConfigServiceClient(const Aws::ConfigService::ConfigServiceClientConfiguration& clientConfiguration = Aws::ConfigService::ConfigServiceClientConfiguration(),
                            std::shared_ptr<ConfigServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ConfigServiceEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ConfigServiceClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<ConfigServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ConfigServiceEndpointProvider>(ALLOCATION_TAG),
                            const Aws::ConfigService::ConfigServiceClientConfiguration& clientConfiguration = Aws::ConfigService::ConfigServiceClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ConfigServiceClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<ConfigServiceEndpointProviderBase> endpointProvider = Aws::MakeShared<ConfigServiceEndpointProvider>(ALLOCATION_TAG),
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
         * <p>Deletes the authorization granted to the specified configuration aggregator
         * account in a specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteAggregationAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAggregationAuthorizationOutcome DeleteAggregationAuthorization(const Model::DeleteAggregationAuthorizationRequest& request) const;


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
         * <p>Deletes the specified configuration aggregator and the aggregated data
         * associated with the aggregator.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteConfigurationAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConfigurationAggregatorOutcome DeleteConfigurationAggregator(const Model::DeleteConfigurationAggregatorRequest& request) const;


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
         * <p>Deletes the delivery channel.</p> <p>Before you can delete the delivery
         * channel, you must stop the configuration recorder by using the
         * <a>StopConfigurationRecorder</a> action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteDeliveryChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDeliveryChannelOutcome DeleteDeliveryChannel(const Model::DeleteDeliveryChannelRequest& request) const;


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
         * <p>Deletes pending authorization requests for a specified aggregator account in
         * a specified region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeletePendingAggregationRequest">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePendingAggregationRequestOutcome DeletePendingAggregationRequest(const Model::DeletePendingAggregationRequestRequest& request) const;


        /**
         * <p>Deletes the remediation configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRemediationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRemediationConfigurationOutcome DeleteRemediationConfiguration(const Model::DeleteRemediationConfigurationRequest& request) const;


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
         * <p>Records the configuration state for a custom resource that has been deleted.
         * This API records a new ConfigurationItem with a ResourceDeleted status. You can
         * retrieve the ConfigurationItems recorded for this resource in your Config
         * History. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteResourceConfigOutcome DeleteResourceConfig(const Model::DeleteResourceConfigRequest& request) const;


        /**
         * <p>Deletes the retention configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteRetentionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRetentionConfigurationOutcome DeleteRetentionConfiguration(const Model::DeleteRetentionConfigurationRequest& request) const;


        /**
         * <p>Deletes the stored query for a single Amazon Web Services account and a
         * single Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DeleteStoredQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStoredQueryOutcome DeleteStoredQuery(const Model::DeleteStoredQueryRequest& request) const;


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
         * <p>Returns a list of authorizations granted to various aggregator accounts and
         * regions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeAggregationAuthorizations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAggregationAuthorizationsOutcome DescribeAggregationAuthorizations(const Model::DescribeAggregationAuthorizationsRequest& request) const;


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
         * <p>Returns status information for each of your Config managed rules. The status
         * includes information such as the last time Config invoked the rule, the last
         * time Config failed to invoke the rule, and the related error for the last
         * failure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRuleEvaluationStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigRuleEvaluationStatusOutcome DescribeConfigRuleEvaluationStatus(const Model::DescribeConfigRuleEvaluationStatusRequest& request) const;


        /**
         * <p>Returns details about your Config rules.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigRules">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigRulesOutcome DescribeConfigRules(const Model::DescribeConfigRulesRequest& request) const;


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
         * <p>Returns the details of one or more configuration aggregators. If the
         * configuration aggregator is not specified, this action returns the details for
         * all the configuration aggregators associated with the account. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationAggregators">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationAggregatorsOutcome DescribeConfigurationAggregators(const Model::DescribeConfigurationAggregatorsRequest& request) const;


        /**
         * <p>Returns the current status of the specified configuration recorder. If a
         * configuration recorder is not specified, this action returns the status of all
         * configuration recorders associated with the account.</p>  <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorderStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRecorderStatusOutcome DescribeConfigurationRecorderStatus(const Model::DescribeConfigurationRecorderStatusRequest& request) const;


        /**
         * <p>Returns the details for the specified configuration recorders. If the
         * configuration recorder is not specified, this action returns the details for all
         * configuration recorders associated with the account.</p>  <p>Currently,
         * you can specify only one configuration recorder per region in your account.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConfigurationRecorders">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConfigurationRecordersOutcome DescribeConfigurationRecorders(const Model::DescribeConfigurationRecordersRequest& request) const;


        /**
         * <p>Returns compliance details for each rule in that conformance pack.</p> 
         * <p>You must provide exact rule names.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConformancePackCompliance">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConformancePackComplianceOutcome DescribeConformancePackCompliance(const Model::DescribeConformancePackComplianceRequest& request) const;


        /**
         * <p>Provides one or more conformance packs deployment status.</p>  <p>If
         * there are no conformance packs then you will see an empty result.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConformancePackStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConformancePackStatusOutcome DescribeConformancePackStatus(const Model::DescribeConformancePackStatusRequest& request) const;


        /**
         * <p>Returns a list of one or more conformance packs.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeConformancePacks">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeConformancePacksOutcome DescribeConformancePacks(const Model::DescribeConformancePacksRequest& request) const;


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
         * <p>Returns a list of organization Config rules. </p>  <p>When you specify
         * the limit and the next token, you receive a paginated response.</p> <p>Limit and
         * next token are not applicable if you specify organization Config rule names. It
         * is only applicable, when you request all the organization Config rules.</p> <p>
         * <i>For accounts within an organzation</i> </p> <p>If you deploy an
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
         * <p>Returns a list of organization conformance packs. </p>  <p>When you
         * specify the limit and the next token, you receive a paginated response. </p>
         * <p>Limit and next token are not applicable if you specify organization
         * conformance packs names. They are only applicable, when you request all the
         * organization conformance packs. </p> <p> <i>For accounts within an
         * organzation</i> </p> <p>If you deploy an organizational rule or conformance pack
         * in an organization administrator account, and then establish a delegated
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
         * <p>Returns a list of all pending aggregation requests.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribePendingAggregationRequests">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribePendingAggregationRequestsOutcome DescribePendingAggregationRequests(const Model::DescribePendingAggregationRequestsRequest& request) const;


        /**
         * <p>Returns the details of one or more remediation configurations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/DescribeRemediationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRemediationConfigurationsOutcome DescribeRemediationConfigurations(const Model::DescribeRemediationConfigurationsRequest& request) const;


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
         * <p>Returns the number of compliant and noncompliant rules for one or more
         * accounts and regions in an aggregator.</p>  <p>The results can return an
         * empty result page, but if you have a nextToken, the results are displayed on the
         * next page.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateConfigRuleComplianceSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateConfigRuleComplianceSummaryOutcome GetAggregateConfigRuleComplianceSummary(const Model::GetAggregateConfigRuleComplianceSummaryRequest& request) const;


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
         * <p>Returns configuration item that is aggregated for your specific resource in a
         * specific source account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetAggregateResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAggregateResourceConfigOutcome GetAggregateResourceConfig(const Model::GetAggregateResourceConfigRequest& request) const;


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
         * <p>Returns the evaluation results for the specified Amazon Web Services
         * resource. The results indicate which Config rules were used to evaluate the
         * resource, when each rule was last used, and whether the resource complies with
         * each rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceDetailsByResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceDetailsByResourceOutcome GetComplianceDetailsByResource(const Model::GetComplianceDetailsByResourceRequest& request) const;


        /**
         * <p>Returns the number of Config rules that are compliant and noncompliant, up to
         * a maximum of 25 for each.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetComplianceSummaryByConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetComplianceSummaryByConfigRuleOutcome GetComplianceSummaryByConfigRule() const;

        /**
         * A Callable wrapper for GetComplianceSummaryByConfigRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetComplianceSummaryByConfigRuleOutcomeCallable GetComplianceSummaryByConfigRuleCallable() const;

        /**
         * An Async wrapper for GetComplianceSummaryByConfigRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetComplianceSummaryByConfigRuleAsync(const GetComplianceSummaryByConfigRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;
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
         * <p>Returns compliance details of a conformance pack for all Amazon Web Services
         * resources that are monitered by conformance pack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetConformancePackComplianceDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConformancePackComplianceDetailsOutcome GetConformancePackComplianceDetails(const Model::GetConformancePackComplianceDetailsRequest& request) const;


        /**
         * <p>Returns compliance details for the conformance pack based on the cumulative
         * compliance results of all the rules in that conformance pack.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetConformancePackComplianceSummary">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConformancePackComplianceSummaryOutcome GetConformancePackComplianceSummary(const Model::GetConformancePackComplianceSummaryRequest& request) const;


        /**
         * <p>Returns the policy definition containing the logic for your Config Custom
         * Policy rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetCustomRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomRulePolicyOutcome GetCustomRulePolicy(const Model::GetCustomRulePolicyRequest& request) const;


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
         * <p>Returns detailed status for each member account within an organization for a
         * given organization Config rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetOrganizationConfigRuleDetailedStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationConfigRuleDetailedStatusOutcome GetOrganizationConfigRuleDetailedStatus(const Model::GetOrganizationConfigRuleDetailedStatusRequest& request) const;


        /**
         * <p>Returns detailed status for each member account within an organization for a
         * given organization conformance pack.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetOrganizationConformancePackDetailedStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationConformancePackDetailedStatusOutcome GetOrganizationConformancePackDetailedStatus(const Model::GetOrganizationConformancePackDetailedStatusRequest& request) const;


        /**
         * <p>Returns the policy definition containing the logic for your organization
         * Config Custom Policy rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetOrganizationCustomRulePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOrganizationCustomRulePolicyOutcome GetOrganizationCustomRulePolicy(const Model::GetOrganizationCustomRulePolicyRequest& request) const;


        /**
         * <p>Returns a list of <code>ConfigurationItems</code> for the specified resource.
         * The list contains details about each state of the resource during the specified
         * time interval. If you specified a retention period to retain your
         * <code>ConfigurationItems</code> between a minimum of 30 days and a maximum of 7
         * years (2557 days), Config returns the <code>ConfigurationItems</code> for the
         * specified retention period. </p> <p>The response is paginated. By default,
         * Config returns a limit of 10 configuration items per page. You can customize
         * this number with the <code>limit</code> parameter. The response includes a
         * <code>nextToken</code> string. To get the next page of results, run the request
         * again and specify the string for the <code>nextToken</code> parameter.</p>
         *  <p>Each call to the API is limited to span a duration of seven days. It
         * is likely that the number of records returned is smaller than the specified
         * <code>limit</code>. In such cases, you can make another call, using the
         * <code>nextToken</code>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetResourceConfigHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetResourceConfigHistoryOutcome GetResourceConfigHistory(const Model::GetResourceConfigHistoryRequest& request) const;


        /**
         * <p>Returns the details of a specific stored query.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/GetStoredQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStoredQueryOutcome GetStoredQuery(const Model::GetStoredQueryRequest& request) const;


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
         * <p>Lists the stored queries for a single Amazon Web Services account and a
         * single Amazon Web Services Region. The default is 100. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListStoredQueries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListStoredQueriesOutcome ListStoredQueries(const Model::ListStoredQueriesRequest& request) const;


        /**
         * <p>List the tags for Config resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;


        /**
         * <p>Authorizes the aggregator account and region to collect data from the source
         * account and region. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutAggregationAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAggregationAuthorizationOutcome PutAggregationAuthorization(const Model::PutAggregationAuthorizationRequest& request) const;


        /**
         * <p>Adds or updates an Config rule to evaluate if your Amazon Web Services
         * resources comply with your desired configurations. For information on how many
         * Config rules you can have per account, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/configlimits.html">
         * <b>Service Limits</b> </a> in the <i>Config Developer Guide</i>.</p> <p>There
         * are two types of rules: Config Custom Rules and Config Managed Rules. You can
         * use <code>PutConfigRule</code> to create both Config custom rules and Config
         * managed rules.</p> <p>Custom rules are rules that you can create using either
         * Guard or Lambda functions. Guard (<a
         * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
         * Repository</a>) is a policy-as-code language that allows you to write policies
         * that are enforced by Config Custom Policy rules. Lambda uses custom code that
         * you upload to evaluate a custom rule. If you are adding a new Custom Lambda
         * rule, you first need to create an Lambda function that the rule invokes to
         * evaluate your resources. When you use <code>PutConfigRule</code> to add a Custom
         * Lambda rule to Config, you must specify the Amazon Resource Name (ARN) that
         * Lambda assigns to the function. You specify the ARN in the
         * <code>SourceIdentifier</code> key. This key is part of the <code>Source</code>
         * object, which is part of the <code>ConfigRule</code> object. </p> <p>Managed
         * rules are predefined, customizable rules created by Config. For a list of
         * managed rules, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
         * of Config Managed Rules</a>. If you are adding an Config managed rule, you must
         * specify the rule's identifier for the <code>SourceIdentifier</code> key.</p>
         * <p>For any new rule that you add, specify the <code>ConfigRuleName</code> in the
         * <code>ConfigRule</code> object. Do not specify the <code>ConfigRuleArn</code> or
         * the <code>ConfigRuleId</code>. These values are generated by Config for new
         * rules.</p> <p>If you are updating a rule that you added previously, you can
         * specify the rule by <code>ConfigRuleName</code>, <code>ConfigRuleId</code>, or
         * <code>ConfigRuleArn</code> in the <code>ConfigRule</code> data type that you use
         * in this request.</p> <p>For more information about developing and using Config
         * rules, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/evaluate-config.html">Evaluating
         * Amazon Web Services resource Configurations with Config</a> in the <i>Config
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigRuleOutcome PutConfigRule(const Model::PutConfigRuleRequest& request) const;


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
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationAggregator">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationAggregatorOutcome PutConfigurationAggregator(const Model::PutConfigurationAggregatorRequest& request) const;


        /**
         * <p>Creates a new configuration recorder to record the selected resource
         * configurations.</p> <p>You can use this action to change the role
         * <code>roleARN</code> or the <code>recordingGroup</code> of an existing recorder.
         * To change the role, call the action on the existing configuration recorder and
         * specify a role.</p>  <p>Currently, you can specify only one configuration
         * recorder per region in your account.</p> <p>If
         * <code>ConfigurationRecorder</code> does not have the <b>recordingGroup</b>
         * parameter specified, the default is to record all supported resource types.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::PutConfigurationRecorderOutcome PutConfigurationRecorder(const Model::PutConfigurationRecorderRequest& request) const;


        /**
         * <p>Creates or updates a conformance pack. A conformance pack is a collection of
         * Config rules that can be easily deployed in an account and a region and across
         * an organization. For information on how many conformance packs you can have per
         * account, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/configlimits.html">
         * <b>Service Limits</b> </a> in the Config Developer Guide.</p> <p>This API
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
         * <p>Creates a delivery channel object to deliver configuration information to an
         * Amazon S3 bucket and Amazon SNS topic.</p> <p>Before you can create a delivery
         * channel, you must create a configuration recorder.</p> <p>You can use this
         * action to change the Amazon S3 bucket or an Amazon SNS topic of the existing
         * delivery channel. To change the Amazon S3 bucket or an Amazon SNS topic, call
         * this action and specify the changed values for the S3 bucket and the SNS topic.
         * If you specify a different value for either the S3 bucket or the SNS topic, this
         * action will keep the existing value for the parameter that is not changed.</p>
         *  <p>You can have only one delivery channel per region in your account.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutDeliveryChannel">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDeliveryChannelOutcome PutDeliveryChannel(const Model::PutDeliveryChannelRequest& request) const;


        /**
         * <p>Used by an Lambda function to deliver evaluation results to Config. This
         * action is required in every Lambda function that is invoked by an Config
         * rule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutEvaluations">AWS
         * API Reference</a></p>
         */
        virtual Model::PutEvaluationsOutcome PutEvaluations(const Model::PutEvaluationsRequest& request) const;


        /**
         * <p>Add or updates the evaluations for process checks. This API checks if the
         * rule is a process check when the name of the Config rule is
         * provided.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutExternalEvaluation">AWS
         * API Reference</a></p>
         */
        virtual Model::PutExternalEvaluationOutcome PutExternalEvaluation(const Model::PutExternalEvaluationRequest& request) const;


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
         * types of rules: Config Custom Rules and Config Managed Rules. You can use
         * <code>PutOrganizationConfigRule</code> to create both Config custom rules and
         * Config managed rules.</p> <p>Custom rules are rules that you can create using
         * either Guard or Lambda functions. Guard (<a
         * href="https://github.com/aws-cloudformation/cloudformation-guard">Guard GitHub
         * Repository</a>) is a policy-as-code language that allows you to write policies
         * that are enforced by Config Custom Policy rules. Lambda uses custom code that
         * you upload to evaluate a custom rule. If you are adding a new Custom Lambda
         * rule, you first need to create an Lambda function in the management account or a
         * delegated administrator that the rule invokes to evaluate your resources. You
         * also need to create an IAM role in the managed account that can be assumed by
         * the Lambda function. When you use <code>PutOrganizationConfigRule</code> to add
         * a Custom Lambda rule to Config, you must specify the Amazon Resource Name (ARN)
         * that Lambda assigns to the function.</p> <p>Managed rules are predefined,
         * customizable rules created by Config. For a list of managed rules, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/managed-rules-by-aws-config.html">List
         * of Config Managed Rules</a>. If you are adding an Config managed rule, you must
         * specify the rule's identifier for the <code>RuleIdentifier</code> key.</p>
         *  <p>Prerequisite: Ensure you call <code>EnableAllFeatures</code> API to
         * enable all features in an organization.</p> <p>Make sure to specify one of
         * either <code>OrganizationCustomPolicyRuleMetadata</code> for Custom Policy
         * rules, <code>OrganizationCustomRuleMetadata</code> for Custom Lambda rules, or
         * <code>OrganizationManagedRuleMetadata</code> for managed rules.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutOrganizationConfigRule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutOrganizationConfigRuleOutcome PutOrganizationConfigRule(const Model::PutOrganizationConfigRuleRequest& request) const;


        /**
         * <p>Deploys conformance packs across member accounts in an Amazon Web Services
         * Organization. For information on how many organization conformance packs and how
         * many Config rules you can have per account, see <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/configlimits.html">
         * <b>Service Limits</b> </a> in the Config Developer Guide.</p> <p>Only a
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
         * <p>Adds or updates the remediation configuration with a specific Config rule
         * with the selected target or action. The API creates the
         * <code>RemediationConfiguration</code> object for the Config rule. The Config
         * rule must already exist for you to add a remediation configuration. The target
         * (SSM document) must exist and have permissions to use the target. </p> 
         * <p>If you make backward incompatible changes to the SSM document, you must call
         * this again to ensure the remediations can run.</p> <p>This API does not support
         * adding remediation configurations for service-linked Config Rules such as
         * Organization Config rules, the rules deployed by conformance packs, and rules
         * deployed by Amazon Web Services Security Hub.</p>   <p>For manual
         * remediation configuration, you need to provide a value for
         * <code>automationAssumeRole</code> or use a value in the
         * <code>assumeRole</code>field to remediate your resources. The SSM automation
         * document can use either as long as it maps to a valid parameter.</p> <p>However,
         * for automatic remediation configuration, the only valid <code>assumeRole</code>
         * field value is <code>AutomationAssumeRole</code> and you need to provide a value
         * for <code>AutomationAssumeRole</code> to remediate your resources.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRemediationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRemediationConfigurationsOutcome PutRemediationConfigurations(const Model::PutRemediationConfigurationsRequest& request) const;


        /**
         * <p>A remediation exception is when a specific resource is no longer considered
         * for auto-remediation. This API adds a new exception or updates an existing
         * exception for a specific resource with a specific Config rule. </p> 
         * <p>Config generates a remediation exception when a problem occurs executing a
         * remediation action to a specific resource. Remediation exceptions blocks
         * auto-remediation until the exception is cleared.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutRemediationExceptions">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRemediationExceptionsOutcome PutRemediationExceptions(const Model::PutRemediationExceptionsRequest& request) const;


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
         * <p>Saves a new query or updates an existing saved query. The
         * <code>QueryName</code> must be unique for a single Amazon Web Services account
         * and a single Amazon Web Services Region. You can create upto 300 queries in a
         * single Amazon Web Services account and a single Amazon Web Services
         * Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/PutStoredQuery">AWS
         * API Reference</a></p>
         */
        virtual Model::PutStoredQueryOutcome PutStoredQuery(const Model::PutStoredQueryRequest& request) const;


        /**
         * <p>Accepts a structured query language (SQL) SELECT command and an aggregator to
         * query configuration state of Amazon Web Services resources across multiple
         * accounts and regions, performs the corresponding search, and returns resource
         * configurations matching the properties.</p> <p>For more information about query
         * components, see the <a
         * href="https://docs.aws.amazon.com/config/latest/developerguide/query-components.html">
         * <b>Query Components</b> </a> section in the Config Developer Guide.</p> 
         * <p>If you run an aggregation query (i.e., using <code>GROUP BY</code> or using
         * aggregate functions such as <code>COUNT</code>; e.g., <code>SELECT resourceId,
         * COUNT(*) WHERE resourceType = 'AWS::IAM::Role' GROUP BY resourceId</code>) and
         * do not specify the <code>MaxResults</code> or the <code>Limit</code> query
         * parameters, the default page size is set to 500.</p> <p>If you run a
         * non-aggregation query (i.e., not using <code>GROUP BY</code> or aggregate
         * function; e.g., <code>SELECT * WHERE resourceType = 'AWS::IAM::Role'</code>) and
         * do not specify the <code>MaxResults</code> or the <code>Limit</code> query
         * parameters, the default page size is set to 25.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/SelectAggregateResourceConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::SelectAggregateResourceConfigOutcome SelectAggregateResourceConfig(const Model::SelectAggregateResourceConfigRequest& request) const;


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
         * <p>Starts recording configurations of the Amazon Web Services resources you have
         * selected to record in your Amazon Web Services account.</p> <p>You must have
         * created at least one delivery channel to successfully start the configuration
         * recorder.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StartConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::StartConfigurationRecorderOutcome StartConfigurationRecorder(const Model::StartConfigurationRecorderRequest& request) const;


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
         * <p>Stops recording configurations of the Amazon Web Services resources you have
         * selected to record in your Amazon Web Services account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/StopConfigurationRecorder">AWS
         * API Reference</a></p>
         */
        virtual Model::StopConfigurationRecorderOutcome StopConfigurationRecorder(const Model::StopConfigurationRecorderRequest& request) const;


        /**
         * <p>Associates the specified tags to a resource with the specified resourceArn.
         * If existing tags on a resource are not specified in the request parameters, they
         * are not changed. When a resource is deleted, the tags associated with that
         * resource are deleted as well.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;


        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/config-2014-11-12/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;



      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ConfigServiceEndpointProviderBase>& accessEndpointProvider();
    private:
      void init(const ConfigServiceClientConfiguration& clientConfiguration);

      ConfigServiceClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ConfigServiceEndpointProviderBase> m_endpointProvider;
  };

} // namespace ConfigService
} // namespace Aws
