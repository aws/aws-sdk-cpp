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
   * <p>These interfaces allow you to apply the Amazon Web Services library of
   * pre-defined <i>controls</i> to your organizational units, programmatically. In
   * Amazon Web Services Control Tower, the terms "control" and "guardrail" are
   * synonyms.</p> <p>To call these APIs, you'll need to know:</p> <ul> <li> <p>the
   * <code>controlIdentifier</code> for the control--or guardrail--you are
   * targeting.</p> </li> <li> <p>the ARN associated with the target organizational
   * unit (OU), which we call the <code>targetIdentifier</code>.</p> </li> <li>
   * <p>the ARN associated with a resource that you wish to tag or untag.</p> </li>
   * </ul> <p> <b>To get the <code>controlIdentifier</code> for your Amazon Web
   * Services Control Tower control:</b> </p> <p>The <code>controlIdentifier</code>
   * is an ARN that is specified for each control. You can view the
   * <code>controlIdentifier</code> in the console on the <b>Control details</b>
   * page, as well as in the documentation.</p> <p>The <code>controlIdentifier</code>
   * is unique in each Amazon Web Services Region for each control. You can find the
   * <code>controlIdentifier</code> for each Region and control in the <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-metadata-tables.html">Tables
   * of control metadata</a> in the <i>Amazon Web Services Control Tower User
   * Guide.</i> </p> <p>A quick-reference list of control identifers for the Amazon
   * Web Services Control Tower legacy <i>Strongly recommended</i> and
   * <i>Elective</i> controls is given in <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html.html">Resource
   * identifiers for APIs and controls</a> in the <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-identifiers.html">Controls
   * reference guide section</a> of the <i>Amazon Web Services Control Tower User
   * Guide</i>. Remember that <i>Mandatory</i> controls cannot be added or
   * removed.</p>  <p> <b>ARN format:</b>
   * <code>arn:aws:controltower:{REGION}::control/{CONTROL_NAME}</code> </p> <p>
   * <b>Example:</b> </p> <p>
   * <code>arn:aws:controltower:us-west-2::control/AWS-GR_AUTOSCALING_LAUNCH_CONFIG_PUBLIC_IP_DISABLED</code>
   * </p>  <p> <b>To get the <code>targetIdentifier</code>:</b> </p> <p>The
   * <code>targetIdentifier</code> is the ARN for an OU.</p> <p>In the Amazon Web
   * Services Organizations console, you can find the ARN for the OU on the
   * <b>Organizational unit details</b> page associated with that OU.</p>  <p>
   * <b>OU ARN format:</b> </p> <p>
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
   * Amazon Web Services Control Tower resources with Amazon Web Services
   * CloudFormation</a> </p> </li> </ul> <p>To view the open source resource
   * repository on GitHub, see <a
   * href="https://github.com/aws-cloudformation/aws-cloudformation-resource-providers-controltower">aws-cloudformation/aws-cloudformation-resource-providers-controltower</a>
   * </p> <p> <b>Recording API Requests</b> </p> <p>Amazon Web Services Control Tower
   * supports Amazon Web Services CloudTrail, a service that records Amazon Web
   * Services API calls for your Amazon Web Services account and delivers log files
   * to an Amazon S3 bucket. By using information collected by CloudTrail, you can
   * determine which requests the Amazon Web Services Control Tower service received,
   * who made the request and when, and so on. For more about Amazon Web Services
   * Control Tower and its support for CloudTrail, see <a
   * href="https://docs.aws.amazon.com/controltower/latest/userguide/logging-using-cloudtrail.html">Logging
   * Amazon Web Services Control Tower Actions with Amazon Web Services
   * CloudTrail</a> in the Amazon Web Services Control Tower User Guide. To learn
   * more about CloudTrail, including how to turn it on and find your log files, see
   * the Amazon Web Services CloudTrail User Guide.</p>
   */
  class AWS_CONTROLTOWER_API ControlTowerClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<ControlTowerClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef ControlTowerClientConfiguration ClientConfigurationType;
      typedef ControlTowerEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ControlTowerClient(const Aws::ControlTower::ControlTowerClientConfiguration& clientConfiguration = Aws::ControlTower::ControlTowerClientConfiguration(),
                           std::shared_ptr<ControlTowerEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        ControlTowerClient(const Aws::Auth::AWSCredentials& credentials,
                           std::shared_ptr<ControlTowerEndpointProviderBase> endpointProvider = nullptr,
                           const Aws::ControlTower::ControlTowerClientConfiguration& clientConfiguration = Aws::ControlTower::ControlTowerClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        ControlTowerClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                           std::shared_ptr<ControlTowerEndpointProviderBase> endpointProvider = nullptr,
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
         * <p>Creates a new landing zone. This API call starts an asynchronous operation
         * that creates and configures a landing zone, based on the parameters specified in
         * the manifest JSON file.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/CreateLandingZone">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLandingZoneOutcome CreateLandingZone(const Model::CreateLandingZoneRequest& request) const;

        /**
         * A Callable wrapper for CreateLandingZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLandingZoneRequestT = Model::CreateLandingZoneRequest>
        Model::CreateLandingZoneOutcomeCallable CreateLandingZoneCallable(const CreateLandingZoneRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::CreateLandingZone, request);
        }

        /**
         * An Async wrapper for CreateLandingZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLandingZoneRequestT = Model::CreateLandingZoneRequest>
        void CreateLandingZoneAsync(const CreateLandingZoneRequestT& request, const CreateLandingZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::CreateLandingZone, request, handler, context);
        }

        /**
         * <p>Decommissions a landing zone. This API call starts an asynchronous operation
         * that deletes Amazon Web Services Control Tower resources deployed in accounts
         * managed by Amazon Web Services Control Tower.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/DeleteLandingZone">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLandingZoneOutcome DeleteLandingZone(const Model::DeleteLandingZoneRequest& request) const;

        /**
         * A Callable wrapper for DeleteLandingZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLandingZoneRequestT = Model::DeleteLandingZoneRequest>
        Model::DeleteLandingZoneOutcomeCallable DeleteLandingZoneCallable(const DeleteLandingZoneRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::DeleteLandingZone, request);
        }

        /**
         * An Async wrapper for DeleteLandingZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLandingZoneRequestT = Model::DeleteLandingZoneRequest>
        void DeleteLandingZoneAsync(const DeleteLandingZoneRequestT& request, const DeleteLandingZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::DeleteLandingZone, request, handler, context);
        }

        /**
         * <p>Disable an <code>EnabledBaseline</code> resource on the specified Target.
         * This API starts an asynchronous operation to remove all resources deployed as
         * part of the baseline enablement. The resource will vary depending on the enabled
         * baseline.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/DisableBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableBaselineOutcome DisableBaseline(const Model::DisableBaselineRequest& request) const;

        /**
         * A Callable wrapper for DisableBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableBaselineRequestT = Model::DisableBaselineRequest>
        Model::DisableBaselineOutcomeCallable DisableBaselineCallable(const DisableBaselineRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::DisableBaseline, request);
        }

        /**
         * An Async wrapper for DisableBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableBaselineRequestT = Model::DisableBaselineRequest>
        void DisableBaselineAsync(const DisableBaselineRequestT& request, const DisableBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::DisableBaseline, request, handler, context);
        }

        /**
         * <p>This API call turns off a control. It starts an asynchronous operation that
         * deletes AWS resources on the specified organizational unit and the accounts it
         * contains. The resources will vary according to the control that you specify. For
         * usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the Amazon Web Services Control Tower User Guide</i> </a>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Enable (apply) a <code>Baseline</code> to a Target. This API starts an
         * asynchronous operation to deploy resources specified by the
         * <code>Baseline</code> to the specified Target.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/EnableBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableBaselineOutcome EnableBaseline(const Model::EnableBaselineRequest& request) const;

        /**
         * A Callable wrapper for EnableBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableBaselineRequestT = Model::EnableBaselineRequest>
        Model::EnableBaselineOutcomeCallable EnableBaselineCallable(const EnableBaselineRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::EnableBaseline, request);
        }

        /**
         * An Async wrapper for EnableBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableBaselineRequestT = Model::EnableBaselineRequest>
        void EnableBaselineAsync(const EnableBaselineRequestT& request, const EnableBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::EnableBaseline, request, handler, context);
        }

        /**
         * <p>This API call activates a control. It starts an asynchronous operation that
         * creates Amazon Web Services resources on the specified organizational unit and
         * the accounts it contains. The resources created will vary according to the
         * control that you specify. For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the Amazon Web Services Control Tower User Guide</i> </a>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Retrieve details about an existing <code>Baseline</code> resource by
         * specifying its identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/GetBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBaselineOutcome GetBaseline(const Model::GetBaselineRequest& request) const;

        /**
         * A Callable wrapper for GetBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBaselineRequestT = Model::GetBaselineRequest>
        Model::GetBaselineOutcomeCallable GetBaselineCallable(const GetBaselineRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::GetBaseline, request);
        }

        /**
         * An Async wrapper for GetBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBaselineRequestT = Model::GetBaselineRequest>
        void GetBaselineAsync(const GetBaselineRequestT& request, const GetBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::GetBaseline, request, handler, context);
        }

        /**
         * <p>Returns the details of an asynchronous baseline operation, as initiated by
         * any of these APIs: <code>EnableBaseline</code>, <code>DisableBaseline</code>,
         * <code>UpdateEnabledBaseline</code>, <code>ResetEnabledBaseline</code>. A status
         * message is displayed in case of operation failure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/GetBaselineOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBaselineOperationOutcome GetBaselineOperation(const Model::GetBaselineOperationRequest& request) const;

        /**
         * A Callable wrapper for GetBaselineOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBaselineOperationRequestT = Model::GetBaselineOperationRequest>
        Model::GetBaselineOperationOutcomeCallable GetBaselineOperationCallable(const GetBaselineOperationRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::GetBaselineOperation, request);
        }

        /**
         * An Async wrapper for GetBaselineOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBaselineOperationRequestT = Model::GetBaselineOperationRequest>
        void GetBaselineOperationAsync(const GetBaselineOperationRequestT& request, const GetBaselineOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::GetBaselineOperation, request, handler, context);
        }

        /**
         * <p>Returns the status of a particular <code>EnableControl</code> or
         * <code>DisableControl</code> operation. Displays a message in case of error.
         * Details for an operation are available for 90 days. For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the Amazon Web Services Control Tower User Guide</i> </a>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Retrieve details of an <code>EnabledBaseline</code> resource by specifying
         * its identifier.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/GetEnabledBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnabledBaselineOutcome GetEnabledBaseline(const Model::GetEnabledBaselineRequest& request) const;

        /**
         * A Callable wrapper for GetEnabledBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnabledBaselineRequestT = Model::GetEnabledBaselineRequest>
        Model::GetEnabledBaselineOutcomeCallable GetEnabledBaselineCallable(const GetEnabledBaselineRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::GetEnabledBaseline, request);
        }

        /**
         * An Async wrapper for GetEnabledBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnabledBaselineRequestT = Model::GetEnabledBaselineRequest>
        void GetEnabledBaselineAsync(const GetEnabledBaselineRequestT& request, const GetEnabledBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::GetEnabledBaseline, request, handler, context);
        }

        /**
         * <p>Retrieves details about an enabled control. For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the Amazon Web Services Control Tower User Guide</i> </a>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Returns details about the landing zone. Displays a message in case of
         * error.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/GetLandingZone">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLandingZoneOutcome GetLandingZone(const Model::GetLandingZoneRequest& request) const;

        /**
         * A Callable wrapper for GetLandingZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLandingZoneRequestT = Model::GetLandingZoneRequest>
        Model::GetLandingZoneOutcomeCallable GetLandingZoneCallable(const GetLandingZoneRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::GetLandingZone, request);
        }

        /**
         * An Async wrapper for GetLandingZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLandingZoneRequestT = Model::GetLandingZoneRequest>
        void GetLandingZoneAsync(const GetLandingZoneRequestT& request, const GetLandingZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::GetLandingZone, request, handler, context);
        }

        /**
         * <p>Returns the status of the specified landing zone operation. Details for an
         * operation are available for 60 days.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/GetLandingZoneOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLandingZoneOperationOutcome GetLandingZoneOperation(const Model::GetLandingZoneOperationRequest& request) const;

        /**
         * A Callable wrapper for GetLandingZoneOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLandingZoneOperationRequestT = Model::GetLandingZoneOperationRequest>
        Model::GetLandingZoneOperationOutcomeCallable GetLandingZoneOperationCallable(const GetLandingZoneOperationRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::GetLandingZoneOperation, request);
        }

        /**
         * An Async wrapper for GetLandingZoneOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLandingZoneOperationRequestT = Model::GetLandingZoneOperationRequest>
        void GetLandingZoneOperationAsync(const GetLandingZoneOperationRequestT& request, const GetLandingZoneOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::GetLandingZoneOperation, request, handler, context);
        }

        /**
         * <p>Returns a summary list of all available baselines.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ListBaselines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBaselinesOutcome ListBaselines(const Model::ListBaselinesRequest& request) const;

        /**
         * A Callable wrapper for ListBaselines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListBaselinesRequestT = Model::ListBaselinesRequest>
        Model::ListBaselinesOutcomeCallable ListBaselinesCallable(const ListBaselinesRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::ListBaselines, request);
        }

        /**
         * An Async wrapper for ListBaselines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBaselinesRequestT = Model::ListBaselinesRequest>
        void ListBaselinesAsync(const ListBaselinesRequestT& request, const ListBaselinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::ListBaselines, request, handler, context);
        }

        /**
         * <p>Returns a list of summaries describing <code>EnabledBaseline</code>
         * resources. You can filter the list by the corresponding <code>Baseline</code> or
         * <code>Target</code> of the <code>EnabledBaseline</code> resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ListEnabledBaselines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnabledBaselinesOutcome ListEnabledBaselines(const Model::ListEnabledBaselinesRequest& request) const;

        /**
         * A Callable wrapper for ListEnabledBaselines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnabledBaselinesRequestT = Model::ListEnabledBaselinesRequest>
        Model::ListEnabledBaselinesOutcomeCallable ListEnabledBaselinesCallable(const ListEnabledBaselinesRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::ListEnabledBaselines, request);
        }

        /**
         * An Async wrapper for ListEnabledBaselines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnabledBaselinesRequestT = Model::ListEnabledBaselinesRequest>
        void ListEnabledBaselinesAsync(const ListEnabledBaselinesRequestT& request, const ListEnabledBaselinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::ListEnabledBaselines, request, handler, context);
        }

        /**
         * <p>Lists the controls enabled by Amazon Web Services Control Tower on the
         * specified organizational unit and the accounts it contains. For usage examples,
         * see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the Amazon Web Services Control Tower User Guide</i> </a>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Returns the landing zone ARN for the landing zone deployed in your managed
         * account. This API also creates an ARN for existing accounts that do not yet have
         * a landing zone ARN. </p> <p>Returns one landing zone ARN.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ListLandingZones">AWS
         * API Reference</a></p>
         */
        virtual Model::ListLandingZonesOutcome ListLandingZones(const Model::ListLandingZonesRequest& request) const;

        /**
         * A Callable wrapper for ListLandingZones that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListLandingZonesRequestT = Model::ListLandingZonesRequest>
        Model::ListLandingZonesOutcomeCallable ListLandingZonesCallable(const ListLandingZonesRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::ListLandingZones, request);
        }

        /**
         * An Async wrapper for ListLandingZones that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListLandingZonesRequestT = Model::ListLandingZonesRequest>
        void ListLandingZonesAsync(const ListLandingZonesRequestT& request, const ListLandingZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::ListLandingZones, request, handler, context);
        }

        /**
         * <p>Returns a list of tags associated with the resource. For usage examples, see
         * <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the Amazon Web Services Control Tower User Guide</i> </a>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <p>Re-enables an <code>EnabledBaseline</code> resource. For example, this API
         * can re-apply the existing <code>Baseline</code> after a new member account is
         * moved to the target OU.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ResetEnabledBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetEnabledBaselineOutcome ResetEnabledBaseline(const Model::ResetEnabledBaselineRequest& request) const;

        /**
         * A Callable wrapper for ResetEnabledBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetEnabledBaselineRequestT = Model::ResetEnabledBaselineRequest>
        Model::ResetEnabledBaselineOutcomeCallable ResetEnabledBaselineCallable(const ResetEnabledBaselineRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::ResetEnabledBaseline, request);
        }

        /**
         * An Async wrapper for ResetEnabledBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetEnabledBaselineRequestT = Model::ResetEnabledBaselineRequest>
        void ResetEnabledBaselineAsync(const ResetEnabledBaselineRequestT& request, const ResetEnabledBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::ResetEnabledBaseline, request, handler, context);
        }

        /**
         * <p>This API call resets a landing zone. It starts an asynchronous operation that
         * resets the landing zone to the parameters specified in its original
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/ResetLandingZone">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetLandingZoneOutcome ResetLandingZone(const Model::ResetLandingZoneRequest& request) const;

        /**
         * A Callable wrapper for ResetLandingZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetLandingZoneRequestT = Model::ResetLandingZoneRequest>
        Model::ResetLandingZoneOutcomeCallable ResetLandingZoneCallable(const ResetLandingZoneRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::ResetLandingZone, request);
        }

        /**
         * An Async wrapper for ResetLandingZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetLandingZoneRequestT = Model::ResetLandingZoneRequest>
        void ResetLandingZoneAsync(const ResetLandingZoneRequestT& request, const ResetLandingZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::ResetLandingZone, request, handler, context);
        }

        /**
         * <p>Applies tags to a resource. For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the Amazon Web Services Control Tower User Guide</i> </a>.</p><p><h3>See
         * Also:</h3>   <a
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
         * <i>the Amazon Web Services Control Tower User Guide</i> </a>.</p><p><h3>See
         * Also:</h3>   <a
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

        /**
         * <p>Updates an <code>EnabledBaseline</code> resource's applied parameters or
         * version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/UpdateEnabledBaseline">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnabledBaselineOutcome UpdateEnabledBaseline(const Model::UpdateEnabledBaselineRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnabledBaseline that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnabledBaselineRequestT = Model::UpdateEnabledBaselineRequest>
        Model::UpdateEnabledBaselineOutcomeCallable UpdateEnabledBaselineCallable(const UpdateEnabledBaselineRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::UpdateEnabledBaseline, request);
        }

        /**
         * An Async wrapper for UpdateEnabledBaseline that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnabledBaselineRequestT = Model::UpdateEnabledBaselineRequest>
        void UpdateEnabledBaselineAsync(const UpdateEnabledBaselineRequestT& request, const UpdateEnabledBaselineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::UpdateEnabledBaseline, request, handler, context);
        }

        /**
         * <p> Updates the configuration of an already enabled control.</p> <p>If the
         * enabled control shows an <code>EnablementStatus</code> of SUCCEEDED, supply
         * parameters that are different from the currently configured parameters.
         * Otherwise, Amazon Web Services Control Tower will not accept the request.</p>
         * <p>If the enabled control shows an <code>EnablementStatus</code> of FAILED,
         * Amazon Web Services Control Tower will update the control to match any valid
         * parameters that you supply.</p> <p>If the <code>DriftSummary</code> status for
         * the control shows as DRIFTED, you cannot call this API. Instead, you can update
         * the control by calling <code>DisableControl</code> and again calling
         * <code>EnableControl</code>, or you can run an extending governance operation.
         * For usage examples, see <a
         * href="https://docs.aws.amazon.com/controltower/latest/userguide/control-api-examples-short.html">
         * <i>the Amazon Web Services Control Tower User Guide</i> </a> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/UpdateEnabledControl">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEnabledControlOutcome UpdateEnabledControl(const Model::UpdateEnabledControlRequest& request) const;

        /**
         * A Callable wrapper for UpdateEnabledControl that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEnabledControlRequestT = Model::UpdateEnabledControlRequest>
        Model::UpdateEnabledControlOutcomeCallable UpdateEnabledControlCallable(const UpdateEnabledControlRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::UpdateEnabledControl, request);
        }

        /**
         * An Async wrapper for UpdateEnabledControl that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEnabledControlRequestT = Model::UpdateEnabledControlRequest>
        void UpdateEnabledControlAsync(const UpdateEnabledControlRequestT& request, const UpdateEnabledControlResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::UpdateEnabledControl, request, handler, context);
        }

        /**
         * <p>This API call updates the landing zone. It starts an asynchronous operation
         * that updates the landing zone based on the new landing zone version, or on the
         * changed parameters specified in the updated manifest file. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/controltower-2018-05-10/UpdateLandingZone">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLandingZoneOutcome UpdateLandingZone(const Model::UpdateLandingZoneRequest& request) const;

        /**
         * A Callable wrapper for UpdateLandingZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLandingZoneRequestT = Model::UpdateLandingZoneRequest>
        Model::UpdateLandingZoneOutcomeCallable UpdateLandingZoneCallable(const UpdateLandingZoneRequestT& request) const
        {
            return SubmitCallable(&ControlTowerClient::UpdateLandingZone, request);
        }

        /**
         * An Async wrapper for UpdateLandingZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLandingZoneRequestT = Model::UpdateLandingZoneRequest>
        void UpdateLandingZoneAsync(const UpdateLandingZoneRequestT& request, const UpdateLandingZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&ControlTowerClient::UpdateLandingZone, request, handler, context);
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
