/**
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
   * <i>controls</i> to your organizational units, programmatically. In this context,
   * controls are the same as AWS Control Tower guardrails.</p> <p>To call these
   * APIs, you'll need to know:</p> <ul> <li> <p>the <code>ControlARN</code> for the
   * control--that is, the guardrail--you are targeting,</p> </li> <li> <p>and the
   * ARN associated with the target organizational unit (OU).</p> </li> </ul> <p>
   * <b>To get the <code>ControlARN</code> for your AWS Control Tower guardrail:</b>
   * </p> <p>The <code>ControlARN</code> contains the control name which is specified
   * in each guardrail. For a list of control names for <i>Strongly recommended</i>
   * and <i>Elective</i> guardrails, see <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html.html">Resource
   * identifiers for APIs and guardrails</a> in the <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/automating-tasks.html">Automating
   * tasks section</a> of the AWS Control Tower User Guide. Remember that
   * <i>Mandatory</i> guardrails cannot be added or removed.</p>  <p> <b>ARN
   * format:</b> <code>arn:aws:controltower:{REGION}::control/{CONTROL_NAME}</code>
   * </p> <p> <b>Example:</b> </p> <p>
   * <code>arn:aws:controltower:us-west-2::control/AWS-GR_AUTOSCALING_LAUNCH_CONFIG_PUBLIC_IP_DISABLED</code>
   * </p>  <p> <b>To get the ARN for an OU:</b> </p> <p>In the AWS
   * Organizations console, you can find the ARN for the OU on the <b>Organizational
   * unit details</b> page associated with that OU.</p>  <p> <b>OU ARN
   * format:</b> </p> <p>
   * <code>arn:${Partition}:organizations::${MasterAccountId}:ou/o-${OrganizationId}/ou-${OrganizationalUnitId}</code>
   * </p>  <p class="title"> <b>Details and examples</b> </p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html">List
   * of resource identifiers for APIs and guardrails</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/guardrail-api-examples-short.html">Guardrail
   * API examples (CLI)</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/enable-controls.html">Enable
   * controls with AWS CloudFormation</a> </p> </li> <li> <p> <a
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
         * contains. The resources will vary according to the control that you
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/DisableControl">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableControlOutcome DisableControl(const Model::DisableControlRequest& request) const;

        /**
         * A Callable wrapper for DisableControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableControlOutcomeCallable DisableControlCallable(const Model::DisableControlRequest& request) const;

        /**
         * An Async wrapper for DisableControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableControlAsync(const Model::DisableControlRequest& request, const DisableControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This API call activates a control. It starts an asynchronous operation that
         * creates AWS resources on the specified organizational unit and the accounts it
         * contains. The resources created will vary according to the control that you
         * specify.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnableControl">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableControlOutcome EnableControl(const Model::EnableControlRequest& request) const;

        /**
         * A Callable wrapper for EnableControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableControlOutcomeCallable EnableControlCallable(const Model::EnableControlRequest& request) const;

        /**
         * An Async wrapper for EnableControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableControlAsync(const Model::EnableControlRequest& request, const EnableControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the status of a particular <code>EnableControl</code> or
         * <code>DisableControl</code> operation. Displays a message in case of error.
         * Details for an operation are available for 90 days.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/GetControlOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetControlOperationOutcome GetControlOperation(const Model::GetControlOperationRequest& request) const;

        /**
         * A Callable wrapper for GetControlOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetControlOperationOutcomeCallable GetControlOperationCallable(const Model::GetControlOperationRequest& request) const;

        /**
         * An Async wrapper for GetControlOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetControlOperationAsync(const Model::GetControlOperationRequest& request, const GetControlOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the controls enabled by AWS Control Tower on the specified
         * organizational unit and the accounts it contains.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ListEnabledControls">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnabledControlsOutcome ListEnabledControls(const Model::ListEnabledControlsRequest& request) const;

        /**
         * A Callable wrapper for ListEnabledControls that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListEnabledControlsOutcomeCallable ListEnabledControlsCallable(const Model::ListEnabledControlsRequest& request) const;

        /**
         * An Async wrapper for ListEnabledControls that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListEnabledControlsAsync(const Model::ListEnabledControlsRequest& request, const ListEnabledControlsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


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
