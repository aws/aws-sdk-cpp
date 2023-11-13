﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/controltower/ControlTower_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/controltower/ControlTowerServiceClientModel.h>

namespace Aws
{
namespace ControlTower
{
  /**
   * <p>These interfaces allow you to apply the AWS library of pre-defined
   * <i>controls</i> to your organizational units, programmatically. In AWS Control
   * Tower, the terms "control" and "guardrail" are synonyms.</p> <p>To call these
   * APIs, you'll need to know:</p> <ul> <li> <p>the <code>controlIdentifier</code>
   * for the control--or guardrail--you are targeting.</p> </li> <li> <p>the ARN
   * associated with the target organizational unit (OU), which we call the
   * <code>targetIdentifier</code>.</p> </li> <li> <p>the ARN associated with a
   * resource that you wish to tag or untag.</p> </li> </ul> <p> <b>To get the
   * <code>controlIdentifier</code> for your AWS Control Tower control:</b> </p>
   * <p>The <code>controlIdentifier</code> is an ARN that is specified for each
   * control. You can view the <code>controlIdentifier</code> in the console on the
   * <b>Control details</b> page, as well as in the documentation.</p> <p>The
   * <code>controlIdentifier</code> is unique in each AWS Region for each control.
   * You can find the <code>controlIdentifier</code> for each Region and control in
   * the <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-metadata-tables.html">Tables
   * of control metadata</a> in the <i>AWS Control Tower User Guide.</i> </p> <p>A
   * quick-reference list of control identifers for the AWS Control Tower legacy
   * <i>Strongly recommended</i> and <i>Elective</i> controls is given in <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html.html">Resource
   * identifiers for APIs and controls</a> in the <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html">Controls
   * reference guide section</a> of the <i>AWS Control Tower User Guide</i>. Remember
   * that <i>Mandatory</i> controls cannot be added or removed.</p>  <p> <b>ARN
   * format:</b> <code>arn:aws:controltower:{REGION}::control/{CONTROL_NAME}</code>
   * </p> <p> <b>Example:</b> </p> <p>
   * <code>arn:aws:controltower:us-west-2::control/AWS-GR_AUTOSCALING_LAUNCH_CONFIG_PUBLIC_IP_DISABLED</code>
   * </p>  <p> <b>To get the <code>targetIdentifier</code>:</b> </p> <p>The
   * <code>targetIdentifier</code> is the ARN for an OU.</p> <p>In the AWS
   * Organizations console, you can find the ARN for the OU on the <b>Organizational
   * unit details</b> page associated with that OU.</p>  <p> <b>OU ARN
   * format:</b> </p> <p>
   * <code>arn:${Partition}:organizations::${MasterAccountId}:ou/o-${OrganizationId}/ou-${OrganizationalUnitId}</code>
   * </p>  <p class="title"> <b>Details and examples</b> </p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">Control
   * API input and output examples with CLI</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/enable-controls.html">Enable
   * controls with CloudFormation</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-metadata-tables.html">Control
   * metadata tables</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html">List
   * of identifiers for legacy controls</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/controls.html">Controls
   * reference guide</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/controls-reference.html">Controls
   * library groupings</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/creating-resources-with-cloudformation.html">Creating
   * AWS Control Tower resources with AWS CloudFormation</a> </p> </li> </ul> <p>To
   * view the open source resource repository on GitHub, see <a
   * href="https://github.com/aws-cloudformation/aws-cloudformation-resource-providers-controltower">aws-cloudformation/aws-cloudformation-resource-providers-controltower</a>
   * </p> <p> <b>Recording API Requests</b> </p> <p>AWS Control Tower supports AWS
   * CloudTrail, a service that records AWS API calls for your AWS account and
   * delivers log files to an Amazon S3 bucket. By using information collected by
   * CloudTrail, you can determine which requests the AWS Control Tower service
   * received, who made the request and when, and so on. For more about AWS Control
   * Tower and its support for CloudTrail, see <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/logging-using-cloudtrail.html">Logging
   * AWS Control Tower Actions with AWS CloudTrail</a> in the AWS Control Tower User
   * Guide. To learn more about CloudTrail, including how to turn it on and find your
   * log files, see the AWS CloudTrail User Guide.</p>
   */
  class AWS_CONTROLTOWER_API ControlTowerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ControlTowerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef ControlTowerClientConfiguration ClientConfigurationType;
      typedef ControlTowerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ControlTowerClient(const Aws::ControlTower::ControlTowerClientConfiguration& clientConfiguration = Aws::ControlTower::ControlTowerClientConfiguration(),
                           std::shared_ptr<ControlTowerEndpointProviderBase> endpointProvider = Aws::MakeShared<ControlTowerEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ControlTowerClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<ControlTowerEndpointProviderBase> endpointProvider = Aws::MakeShared<ControlTowerEndpointProvider>(ALLOCATION_TAG),
                           const Aws::ControlTower::ControlTowerClientConfiguration& clientConfiguration = Aws::ControlTower::ControlTowerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ControlTowerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ControlTowerEndpointProviderBase> endpointProvider = Aws::MakeShared<ControlTowerEndpointProvider>(ALLOCATION_TAG),
                           const Aws::ControlTower::ControlTowerClientConfiguration& clientConfiguration = Aws::ControlTower::ControlTowerClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ControlTowerClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ControlTowerClient(const Aws::Auth::AWSCredentials& credentials,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ControlTowerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~ControlTowerClient();

        /**
         * <p>This API call turns off a control. It starts an asynchronous operation that
         * deletes AWS resources on the specified organizational unit and the accounts it
         * contains. The resources will vary according to the control that you specify. For
         * usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the AWS Control Tower User Guide</i> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/DisableControl">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableControlOutcome DisableControl(const Model::DisableControlRequest& request) const;

        /**
         * A Callable wrapper for DisableControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableControlRequestT = Model::DisableControlRequest>
        Model::DisableControlOutcomeCallable DisableControlCallable(const DisableControlRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::DisableControl, request);
        }

        /**
         * An Async wrapper for DisableControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableControlRequestT = Model::DisableControlRequest>
        void DisableControlAsync(const DisableControlRequestT& request, const DisableControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::DisableControl, request, handler, context);
        }

        /**
         * <p>This API call activates a control. It starts an asynchronous operation that
         * creates AWS resources on the specified organizational unit and the accounts it
         * contains. The resources created will vary according to the control that you
         * specify. For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the AWS Control Tower User Guide</i> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnableControl">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableControlOutcome EnableControl(const Model::EnableControlRequest& request) const;

        /**
         * A Callable wrapper for EnableControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableControlRequestT = Model::EnableControlRequest>
        Model::EnableControlOutcomeCallable EnableControlCallable(const EnableControlRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::EnableControl, request);
        }

        /**
         * An Async wrapper for EnableControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableControlRequestT = Model::EnableControlRequest>
        void EnableControlAsync(const EnableControlRequestT& request, const EnableControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::EnableControl, request, handler, context);
        }

        /**
         * <p>Returns the status of a particular <code>EnableControl</code> or
         * <code>DisableControl</code> operation. Displays a message in case of error.
         * Details for an operation are available for 90 days. For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the AWS Control Tower User Guide</i> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/GetControlOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetControlOperationOutcome GetControlOperation(const Model::GetControlOperationRequest& request) const;

        /**
         * A Callable wrapper for GetControlOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetControlOperationRequestT = Model::GetControlOperationRequest>
        Model::GetControlOperationOutcomeCallable GetControlOperationCallable(const GetControlOperationRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::GetControlOperation, request);
        }

        /**
         * An Async wrapper for GetControlOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetControlOperationRequestT = Model::GetControlOperationRequest>
        void GetControlOperationAsync(const GetControlOperationRequestT& request, const GetControlOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::GetControlOperation, request, handler, context);
        }

        /**
         * <p>Retrieves details about an enabled control. For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the AWS Control Tower User Guide</i> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/GetEnabledControl">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnabledControlOutcome GetEnabledControl(const Model::GetEnabledControlRequest& request) const;

        /**
         * A Callable wrapper for GetEnabledControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnabledControlRequestT = Model::GetEnabledControlRequest>
        Model::GetEnabledControlOutcomeCallable GetEnabledControlCallable(const GetEnabledControlRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::GetEnabledControl, request);
        }

        /**
         * An Async wrapper for GetEnabledControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnabledControlRequestT = Model::GetEnabledControlRequest>
        void GetEnabledControlAsync(const GetEnabledControlRequestT& request, const GetEnabledControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::GetEnabledControl, request, handler, context);
        }

        /**
         * <p>Lists the controls enabled by AWS Control Tower on the specified
         * organizational unit and the accounts it contains. For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the AWS Control Tower User Guide</i> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ListEnabledControls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnabledControlsOutcome ListEnabledControls(const Model::ListEnabledControlsRequest& request) const;

        /**
         * A Callable wrapper for ListEnabledControls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnabledControlsRequestT = Model::ListEnabledControlsRequest>
        Model::ListEnabledControlsOutcomeCallable ListEnabledControlsCallable(const ListEnabledControlsRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::ListEnabledControls, request);
        }

        /**
         * An Async wrapper for ListEnabledControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnabledControlsRequestT = Model::ListEnabledControlsRequest>
        void ListEnabledControlsAsync(const ListEnabledControlsRequestT& request, const ListEnabledControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::ListEnabledControls, request, handler, context);
        }

        /**
         * <p>Returns a list of tags associated with the resource. For usage examples, see
         * <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the AWS Control Tower User Guide</i> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Applies tags to a resource. For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the AWS Control Tower User Guide</i> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes tags from a resource. For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the AWS Control Tower User Guide</i> </a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<ControlTowerEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<ControlTowerClient>;
      void init(const ControlTowerClientConfiguration& clientConfiguration);

      ControlTowerClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<ControlTowerEndpointProviderBase> m_endpointProvider;
  };

} // namespace ControlTower
} // namespace Aws
