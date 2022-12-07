/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/IoTServiceClientModel.h>

namespace Aws
{
namespace IoT
{
  /**
   * <fullname>IoT</fullname> <p>IoT provides secure, bi-directional communication
   * between Internet-connected devices (such as sensors, actuators, embedded
   * devices, or smart appliances) and the Amazon Web Services cloud. You can
   * discover your custom IoT-Data endpoint to communicate with, configure rules for
   * data processing and integration with other services, organize resources
   * associated with each device (Registry), configure logging, and create and manage
   * policies and credentials to authenticate devices.</p> <p>The service endpoints
   * that expose this API are listed in <a
   * href="https://docs.aws.amazon.com/general/latest/gr/iot-core.html">Amazon Web
   * Services IoT Core Endpoints and Quotas</a>. You must use the endpoint for the
   * region that has the resources you want to access.</p> <p>The service name used
   * by <a
   * href="https://docs.aws.amazon.com/general/latest/gr/signature-version-4.html">Amazon
   * Web Services Signature Version 4</a> to sign the request is:
   * <i>execute-api</i>.</p> <p>For more information about how IoT works, see the <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/aws-iot-how-it-works.html">Developer
   * Guide</a>.</p> <p>For information about how to use the credentials provider for
   * IoT, see <a
   * href="https://docs.aws.amazon.com/iot/latest/developerguide/authorizing-direct-aws.html">Authorizing
   * Direct Calls to Amazon Web Services Services</a>.</p>
   */
  class AWS_IOT_API IoTClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTClient(const Aws::IoT::IoTClientConfiguration& clientConfiguration = Aws::IoT::IoTClientConfiguration(),
                  std::shared_ptr<IoTEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<IoTEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTEndpointProvider>(ALLOCATION_TAG),
                  const Aws::IoT::IoTClientConfiguration& clientConfiguration = Aws::IoT::IoTClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<IoTEndpointProviderBase> endpointProvider = Aws::MakeShared<IoTEndpointProvider>(ALLOCATION_TAG),
                  const Aws::IoT::IoTClientConfiguration& clientConfiguration = Aws::IoT::IoTClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTClient();

        /**
         * <p>Accepts a pending certificate transfer. The default state of the certificate
         * is INACTIVE.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AcceptCertificateTransfer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AcceptCertificateTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::AcceptCertificateTransferOutcome AcceptCertificateTransfer(const Model::AcceptCertificateTransferRequest& request) const;

        /**
         * A Callable wrapper for AcceptCertificateTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AcceptCertificateTransferOutcomeCallable AcceptCertificateTransferCallable(const Model::AcceptCertificateTransferRequest& request) const;

        /**
         * An Async wrapper for AcceptCertificateTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AcceptCertificateTransferAsync(const Model::AcceptCertificateTransferRequest& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a thing to a billing group.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AddThingToBillingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AddThingToBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AddThingToBillingGroupOutcome AddThingToBillingGroup(const Model::AddThingToBillingGroupRequest& request) const;

        /**
         * A Callable wrapper for AddThingToBillingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddThingToBillingGroupOutcomeCallable AddThingToBillingGroupCallable(const Model::AddThingToBillingGroupRequest& request) const;

        /**
         * An Async wrapper for AddThingToBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddThingToBillingGroupAsync(const Model::AddThingToBillingGroupRequest& request, const AddThingToBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds a thing to a thing group.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AddThingToThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AddThingToThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::AddThingToThingGroupOutcome AddThingToThingGroup(const Model::AddThingToThingGroupRequest& request) const;

        /**
         * A Callable wrapper for AddThingToThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AddThingToThingGroupOutcomeCallable AddThingToThingGroupCallable(const Model::AddThingToThingGroupRequest& request) const;

        /**
         * An Async wrapper for AddThingToThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AddThingToThingGroupAsync(const Model::AddThingToThingGroupRequest& request, const AddThingToThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a group with a continuous job. The following criteria must be met:
         * </p> <ul> <li> <p>The job must have been created with the
         * <code>targetSelection</code> field set to "CONTINUOUS".</p> </li> <li> <p>The
         * job status must currently be "IN_PROGRESS".</p> </li> <li> <p>The total number
         * of targets associated with a job must not exceed 100.</p> </li> </ul>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AssociateTargetsWithJob</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AssociateTargetsWithJob">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateTargetsWithJobOutcome AssociateTargetsWithJob(const Model::AssociateTargetsWithJobRequest& request) const;

        /**
         * A Callable wrapper for AssociateTargetsWithJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateTargetsWithJobOutcomeCallable AssociateTargetsWithJobCallable(const Model::AssociateTargetsWithJobRequest& request) const;

        /**
         * An Async wrapper for AssociateTargetsWithJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateTargetsWithJobAsync(const Model::AssociateTargetsWithJobRequest& request, const AssociateTargetsWithJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified policy to the specified principal (certificate or
         * other credential).</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AttachPolicy</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachPolicyOutcome AttachPolicy(const Model::AttachPolicyRequest& request) const;

        /**
         * A Callable wrapper for AttachPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachPolicyOutcomeCallable AttachPolicyCallable(const Model::AttachPolicyRequest& request) const;

        /**
         * An Async wrapper for AttachPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachPolicyAsync(const Model::AttachPolicyRequest& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates a Device Defender security profile with a thing group or this
         * account. Each thing group or account can have up to five security profiles
         * associated with it.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AttachSecurityProfile</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachSecurityProfileOutcome AttachSecurityProfile(const Model::AttachSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for AttachSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachSecurityProfileOutcomeCallable AttachSecurityProfileCallable(const Model::AttachSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for AttachSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachSecurityProfileAsync(const Model::AttachSecurityProfileRequest& request, const AttachSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Attaches the specified principal to the specified thing. A principal can be
         * X.509 certificates, Amazon Cognito identities or federated identities.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">AttachThingPrincipal</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/AttachThingPrincipal">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachThingPrincipalOutcome AttachThingPrincipal(const Model::AttachThingPrincipalRequest& request) const;

        /**
         * A Callable wrapper for AttachThingPrincipal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AttachThingPrincipalOutcomeCallable AttachThingPrincipalCallable(const Model::AttachThingPrincipalRequest& request) const;

        /**
         * An Async wrapper for AttachThingPrincipal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AttachThingPrincipalAsync(const Model::AttachThingPrincipalRequest& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a mitigation action task that is in progress. If the task is not in
         * progress, an InvalidRequestException occurs.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelAuditMitigationActionsTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelAuditMitigationActionsTaskOutcome CancelAuditMitigationActionsTask(const Model::CancelAuditMitigationActionsTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelAuditMitigationActionsTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelAuditMitigationActionsTaskOutcomeCallable CancelAuditMitigationActionsTaskCallable(const Model::CancelAuditMitigationActionsTaskRequest& request) const;

        /**
         * An Async wrapper for CancelAuditMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelAuditMitigationActionsTaskAsync(const Model::CancelAuditMitigationActionsTaskRequest& request, const CancelAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels an audit that is in progress. The audit can be either scheduled or on
         * demand. If the audit isn't in progress, an "InvalidRequestException" occurs.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelAuditTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelAuditTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelAuditTaskOutcome CancelAuditTask(const Model::CancelAuditTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelAuditTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelAuditTaskOutcomeCallable CancelAuditTaskCallable(const Model::CancelAuditTaskRequest& request) const;

        /**
         * An Async wrapper for CancelAuditTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelAuditTaskAsync(const Model::CancelAuditTaskRequest& request, const CancelAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a pending transfer for the specified certificate.</p> <p> <b>Note</b>
         * Only the transfer source account can use this operation to cancel a transfer.
         * (Transfer destinations can use <a>RejectCertificateTransfer</a> instead.) After
         * transfer, IoT returns the certificate to the source account in the INACTIVE
         * state. After the destination account has accepted the transfer, the transfer
         * cannot be cancelled.</p> <p>After a certificate transfer is cancelled, the
         * status of the certificate changes from PENDING_TRANSFER to INACTIVE.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelCertificateTransfer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelCertificateTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelCertificateTransferOutcome CancelCertificateTransfer(const Model::CancelCertificateTransferRequest& request) const;

        /**
         * A Callable wrapper for CancelCertificateTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelCertificateTransferOutcomeCallable CancelCertificateTransferCallable(const Model::CancelCertificateTransferRequest& request) const;

        /**
         * An Async wrapper for CancelCertificateTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelCertificateTransferAsync(const Model::CancelCertificateTransferRequest& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Cancels a Device Defender ML Detect mitigation action. </p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelDetectMitigationActionsTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelDetectMitigationActionsTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelDetectMitigationActionsTaskOutcome CancelDetectMitigationActionsTask(const Model::CancelDetectMitigationActionsTaskRequest& request) const;

        /**
         * A Callable wrapper for CancelDetectMitigationActionsTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelDetectMitigationActionsTaskOutcomeCallable CancelDetectMitigationActionsTaskCallable(const Model::CancelDetectMitigationActionsTaskRequest& request) const;

        /**
         * An Async wrapper for CancelDetectMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelDetectMitigationActionsTaskAsync(const Model::CancelDetectMitigationActionsTaskRequest& request, const CancelDetectMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a job.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelJob</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelJob">AWS API
         * Reference</a></p>
         */
        virtual Model::CancelJobOutcome CancelJob(const Model::CancelJobRequest& request) const;

        /**
         * A Callable wrapper for CancelJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobOutcomeCallable CancelJobCallable(const Model::CancelJobRequest& request) const;

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobAsync(const Model::CancelJobRequest& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels the execution of a job for a given thing.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CancelJobExecution</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CancelJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::CancelJobExecutionOutcome CancelJobExecution(const Model::CancelJobExecutionRequest& request) const;

        /**
         * A Callable wrapper for CancelJobExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CancelJobExecutionOutcomeCallable CancelJobExecutionCallable(const Model::CancelJobExecutionRequest& request) const;

        /**
         * An Async wrapper for CancelJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CancelJobExecutionAsync(const Model::CancelJobExecutionRequest& request, const CancelJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Clears the default authorizer.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ClearDefaultAuthorizer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ClearDefaultAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::ClearDefaultAuthorizerOutcome ClearDefaultAuthorizer(const Model::ClearDefaultAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for ClearDefaultAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ClearDefaultAuthorizerOutcomeCallable ClearDefaultAuthorizerCallable(const Model::ClearDefaultAuthorizerRequest& request) const;

        /**
         * An Async wrapper for ClearDefaultAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ClearDefaultAuthorizerAsync(const Model::ClearDefaultAuthorizerRequest& request, const ClearDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Confirms a topic rule destination. When you create a rule requiring a
         * destination, IoT sends a confirmation message to the endpoint or base address
         * you specify. The message includes a token which you pass back when calling
         * <code>ConfirmTopicRuleDestination</code> to confirm that you own or have access
         * to the endpoint.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ConfirmTopicRuleDestination</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ConfirmTopicRuleDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::ConfirmTopicRuleDestinationOutcome ConfirmTopicRuleDestination(const Model::ConfirmTopicRuleDestinationRequest& request) const;

        /**
         * A Callable wrapper for ConfirmTopicRuleDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ConfirmTopicRuleDestinationOutcomeCallable ConfirmTopicRuleDestinationCallable(const Model::ConfirmTopicRuleDestinationRequest& request) const;

        /**
         * An Async wrapper for ConfirmTopicRuleDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ConfirmTopicRuleDestinationAsync(const Model::ConfirmTopicRuleDestinationRequest& request, const ConfirmTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Creates a Device Defender audit suppression. </p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateAuditSuppression</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateAuditSuppression">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAuditSuppressionOutcome CreateAuditSuppression(const Model::CreateAuditSuppressionRequest& request) const;

        /**
         * A Callable wrapper for CreateAuditSuppression that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAuditSuppressionOutcomeCallable CreateAuditSuppressionCallable(const Model::CreateAuditSuppressionRequest& request) const;

        /**
         * An Async wrapper for CreateAuditSuppression that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAuditSuppressionAsync(const Model::CreateAuditSuppressionRequest& request, const CreateAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an authorizer.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateAuthorizer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAuthorizerOutcome CreateAuthorizer(const Model::CreateAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for CreateAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateAuthorizerOutcomeCallable CreateAuthorizerCallable(const Model::CreateAuthorizerRequest& request) const;

        /**
         * An Async wrapper for CreateAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateAuthorizerAsync(const Model::CreateAuthorizerRequest& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a billing group.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateBillingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBillingGroupOutcome CreateBillingGroup(const Model::CreateBillingGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateBillingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateBillingGroupOutcomeCallable CreateBillingGroupCallable(const Model::CreateBillingGroupRequest& request) const;

        /**
         * An Async wrapper for CreateBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateBillingGroupAsync(const Model::CreateBillingGroupRequest& request, const CreateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an X.509 certificate using the specified certificate signing
         * request.</p> <p> <b>Note:</b> The CSR must include a public key that is either
         * an RSA key with a length of at least 2048 bits or an ECC key from NIST P-256,
         * NIST P-384, or NIST P-512 curves. For supported certificates, consult <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/x509-client-certs.html#x509-cert-algorithms">
         * Certificate signing algorithms supported by IoT</a>.</p> <p> <b>Note:</b>
         * Reusing the same certificate signing request (CSR) results in a distinct
         * certificate.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateCertificateFromCsr</a>
         * action.</p> <p>You can create multiple certificates in a batch by creating a
         * directory, copying multiple .csr files into that directory, and then specifying
         * that directory on the command line. The following commands show how to create a
         * batch of certificates given a batch of CSRs.</p> <p>Assuming a set of CSRs are
         * located inside of the directory my-csr-directory:</p> <p>On Linux and OS X, the
         * command is:</p> <p>$ ls my-csr-directory/ | xargs -I {} aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://my-csr-directory/{}</p> <p>This command lists all of the CSRs in
         * my-csr-directory and pipes each CSR file name to the aws iot
         * create-certificate-from-csr Amazon Web Services CLI command to create a
         * certificate for the corresponding CSR.</p> <p>The aws iot
         * create-certificate-from-csr part of the command can also be run in parallel to
         * speed up the certificate creation process:</p> <p>$ ls my-csr-directory/ | xargs
         * -P 10 -I {} aws iot create-certificate-from-csr --certificate-signing-request
         * file://my-csr-directory/{}</p> <p>On Windows PowerShell, the command to create
         * certificates for all CSRs in my-csr-directory is:</p> <p>&gt; ls -Name
         * my-csr-directory | %{aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/$_}</p> <p>On a Windows
         * command prompt, the command to create certificates for all CSRs in
         * my-csr-directory is:</p> <p>&gt; forfiles /p my-csr-directory /c "cmd /c aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://@path"</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateCertificateFromCsr">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateFromCsrOutcome CreateCertificateFromCsr(const Model::CreateCertificateFromCsrRequest& request) const;

        /**
         * A Callable wrapper for CreateCertificateFromCsr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCertificateFromCsrOutcomeCallable CreateCertificateFromCsrCallable(const Model::CreateCertificateFromCsrRequest& request) const;

        /**
         * An Async wrapper for CreateCertificateFromCsr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCertificateFromCsrAsync(const Model::CreateCertificateFromCsrRequest& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Use this API to define a Custom Metric published by your devices to Device
         * Defender. </p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateCustomMetric</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateCustomMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCustomMetricOutcome CreateCustomMetric(const Model::CreateCustomMetricRequest& request) const;

        /**
         * A Callable wrapper for CreateCustomMetric that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCustomMetricOutcomeCallable CreateCustomMetricCallable(const Model::CreateCustomMetricRequest& request) const;

        /**
         * An Async wrapper for CreateCustomMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCustomMetricAsync(const Model::CreateCustomMetricRequest& request, const CreateCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a dimension that you can use to limit the scope of a metric used in a
         * security profile for IoT Device Defender. For example, using a
         * <code>TOPIC_FILTER</code> dimension, you can narrow down the scope of the metric
         * only to MQTT topics whose name match the pattern specified in the dimension.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateDimension</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDimension">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDimensionOutcome CreateDimension(const Model::CreateDimensionRequest& request) const;

        /**
         * A Callable wrapper for CreateDimension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDimensionOutcomeCallable CreateDimensionCallable(const Model::CreateDimensionRequest& request) const;

        /**
         * An Async wrapper for CreateDimension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDimensionAsync(const Model::CreateDimensionRequest& request, const CreateDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a domain configuration.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateDomainConfiguration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDomainConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainConfigurationOutcome CreateDomainConfiguration(const Model::CreateDomainConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateDomainConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDomainConfigurationOutcomeCallable CreateDomainConfigurationCallable(const Model::CreateDomainConfigurationRequest& request) const;

        /**
         * An Async wrapper for CreateDomainConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDomainConfigurationAsync(const Model::CreateDomainConfigurationRequest& request, const CreateDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a dynamic thing group.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateDynamicThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateDynamicThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDynamicThingGroupOutcome CreateDynamicThingGroup(const Model::CreateDynamicThingGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateDynamicThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateDynamicThingGroupOutcomeCallable CreateDynamicThingGroupCallable(const Model::CreateDynamicThingGroupRequest& request) const;

        /**
         * An Async wrapper for CreateDynamicThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateDynamicThingGroupAsync(const Model::CreateDynamicThingGroupRequest& request, const CreateDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a fleet metric.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateFleetMetric</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateFleetMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFleetMetricOutcome CreateFleetMetric(const Model::CreateFleetMetricRequest& request) const;

        /**
         * A Callable wrapper for CreateFleetMetric that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateFleetMetricOutcomeCallable CreateFleetMetricCallable(const Model::CreateFleetMetricRequest& request) const;

        /**
         * An Async wrapper for CreateFleetMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateFleetMetricAsync(const Model::CreateFleetMetricRequest& request, const CreateFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a job.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateJob</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateJobOutcome CreateJob(const Model::CreateJobRequest& request) const;

        /**
         * A Callable wrapper for CreateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobOutcomeCallable CreateJobCallable(const Model::CreateJobRequest& request) const;

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobAsync(const Model::CreateJobRequest& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a job template.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateJobTemplate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateJobTemplateOutcome CreateJobTemplate(const Model::CreateJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateJobTemplateOutcomeCallable CreateJobTemplateCallable(const Model::CreateJobTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateJobTemplateAsync(const Model::CreateJobTemplateRequest& request, const CreateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a 2048-bit RSA key pair and issues an X.509 certificate using the
         * issued public key. You can also call <code>CreateKeysAndCertificate</code> over
         * MQTT from a device, for more information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/provision-wo-cert.html#provision-mqtt-api">Provisioning
         * MQTT API</a>.</p> <p> <b>Note</b> This is the only time IoT issues the private
         * key for this certificate, so it is important to keep it in a secure
         * location.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateKeysAndCertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateKeysAndCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeysAndCertificateOutcome CreateKeysAndCertificate(const Model::CreateKeysAndCertificateRequest& request) const;

        /**
         * A Callable wrapper for CreateKeysAndCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeysAndCertificateOutcomeCallable CreateKeysAndCertificateCallable(const Model::CreateKeysAndCertificateRequest& request) const;

        /**
         * An Async wrapper for CreateKeysAndCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeysAndCertificateAsync(const Model::CreateKeysAndCertificateRequest& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Defines an action that can be applied to audit findings by using
         * StartAuditMitigationActionsTask. Only certain types of mitigation actions can be
         * applied to specific check names. For more information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/device-defender-mitigation-actions.html">Mitigation
         * actions</a>. Each mitigation action can apply only one type of change.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateMitigationAction</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateMitigationAction">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMitigationActionOutcome CreateMitigationAction(const Model::CreateMitigationActionRequest& request) const;

        /**
         * A Callable wrapper for CreateMitigationAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMitigationActionOutcomeCallable CreateMitigationActionCallable(const Model::CreateMitigationActionRequest& request) const;

        /**
         * An Async wrapper for CreateMitigationAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMitigationActionAsync(const Model::CreateMitigationActionRequest& request, const CreateMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IoT OTA update on a target group of things or groups.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateOTAUpdate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateOTAUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOTAUpdateOutcome CreateOTAUpdate(const Model::CreateOTAUpdateRequest& request) const;

        /**
         * A Callable wrapper for CreateOTAUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateOTAUpdateOutcomeCallable CreateOTAUpdateCallable(const Model::CreateOTAUpdateRequest& request) const;

        /**
         * An Async wrapper for CreateOTAUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateOTAUpdateAsync(const Model::CreateOTAUpdateRequest& request, const CreateOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates an IoT policy.</p> <p>The created policy is the default version for
         * the policy. This operation creates a policy version with a version identifier of
         * <b>1</b> and sets <b>1</b> as the policy's default version.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreatePolicy</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyOutcome CreatePolicy(const Model::CreatePolicyRequest& request) const;

        /**
         * A Callable wrapper for CreatePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const Model::CreatePolicyRequest& request) const;

        /**
         * An Async wrapper for CreatePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyAsync(const Model::CreatePolicyRequest& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of the specified IoT policy. To update a policy, create
         * a new policy version. A managed policy can have up to five versions. If the
         * policy has five versions, you must use <a>DeletePolicyVersion</a> to delete an
         * existing version before you create a new one.</p> <p>Optionally, you can set the
         * new version as the policy's default version. The default version is the
         * operative version (that is, the version that is in effect for the certificates
         * to which the policy is attached).</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreatePolicyVersion</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePolicyVersionOutcome CreatePolicyVersion(const Model::CreatePolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for CreatePolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreatePolicyVersionOutcomeCallable CreatePolicyVersionCallable(const Model::CreatePolicyVersionRequest& request) const;

        /**
         * An Async wrapper for CreatePolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreatePolicyVersionAsync(const Model::CreatePolicyVersionRequest& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a provisioning claim.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateProvisioningClaim</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningClaim">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisioningClaimOutcome CreateProvisioningClaim(const Model::CreateProvisioningClaimRequest& request) const;

        /**
         * A Callable wrapper for CreateProvisioningClaim that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisioningClaimOutcomeCallable CreateProvisioningClaimCallable(const Model::CreateProvisioningClaimRequest& request) const;

        /**
         * An Async wrapper for CreateProvisioningClaim that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisioningClaimAsync(const Model::CreateProvisioningClaimRequest& request, const CreateProvisioningClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a provisioning template.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateProvisioningTemplate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisioningTemplateOutcome CreateProvisioningTemplate(const Model::CreateProvisioningTemplateRequest& request) const;

        /**
         * A Callable wrapper for CreateProvisioningTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisioningTemplateOutcomeCallable CreateProvisioningTemplateCallable(const Model::CreateProvisioningTemplateRequest& request) const;

        /**
         * An Async wrapper for CreateProvisioningTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisioningTemplateAsync(const Model::CreateProvisioningTemplateRequest& request, const CreateProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of a provisioning template.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateProvisioningTemplateVersion</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisioningTemplateVersionOutcome CreateProvisioningTemplateVersion(const Model::CreateProvisioningTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateProvisioningTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateProvisioningTemplateVersionOutcomeCallable CreateProvisioningTemplateVersionCallable(const Model::CreateProvisioningTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for CreateProvisioningTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateProvisioningTemplateVersionAsync(const Model::CreateProvisioningTemplateVersionRequest& request, const CreateProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a role alias.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateRoleAlias</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateRoleAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRoleAliasOutcome CreateRoleAlias(const Model::CreateRoleAliasRequest& request) const;

        /**
         * A Callable wrapper for CreateRoleAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRoleAliasOutcomeCallable CreateRoleAliasCallable(const Model::CreateRoleAliasRequest& request) const;

        /**
         * An Async wrapper for CreateRoleAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRoleAliasAsync(const Model::CreateRoleAliasRequest& request, const CreateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a scheduled audit that is run at a specified time interval.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateScheduledAudit</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateScheduledAudit">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateScheduledAuditOutcome CreateScheduledAudit(const Model::CreateScheduledAuditRequest& request) const;

        /**
         * A Callable wrapper for CreateScheduledAudit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateScheduledAuditOutcomeCallable CreateScheduledAuditCallable(const Model::CreateScheduledAuditRequest& request) const;

        /**
         * An Async wrapper for CreateScheduledAudit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateScheduledAuditAsync(const Model::CreateScheduledAuditRequest& request, const CreateScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a Device Defender security profile.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateSecurityProfile</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateSecurityProfileOutcome CreateSecurityProfile(const Model::CreateSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateSecurityProfileOutcomeCallable CreateSecurityProfileCallable(const Model::CreateSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for CreateSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateSecurityProfileAsync(const Model::CreateSecurityProfileRequest& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a stream for delivering one or more large files in chunks over MQTT.
         * A stream transports data bytes in chunks or blocks packaged as MQTT messages
         * from a source like S3. You can have one or more files associated with a
         * stream.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateStream</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateStream">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateStreamOutcome CreateStream(const Model::CreateStreamRequest& request) const;

        /**
         * A Callable wrapper for CreateStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateStreamOutcomeCallable CreateStreamCallable(const Model::CreateStreamRequest& request) const;

        /**
         * An Async wrapper for CreateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateStreamAsync(const Model::CreateStreamRequest& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a thing record in the registry. If this call is made multiple times
         * using the same thing name and configuration, the call will succeed. If this call
         * is made with the same thing name but different configuration a
         * <code>ResourceAlreadyExistsException</code> is thrown.</p>  <p>This is a
         * control plane operation. See <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a>
         * for information about authorizing control plane actions.</p>  <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateThing</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThing">AWS API
         * Reference</a></p>
         */
        virtual Model::CreateThingOutcome CreateThing(const Model::CreateThingRequest& request) const;

        /**
         * A Callable wrapper for CreateThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThingOutcomeCallable CreateThingCallable(const Model::CreateThingRequest& request) const;

        /**
         * An Async wrapper for CreateThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThingAsync(const Model::CreateThingRequest& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Create a thing group.</p>  <p>This is a control plane operation. See <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a>
         * for information about authorizing control plane actions.</p>  <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThingGroupOutcome CreateThingGroup(const Model::CreateThingGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThingGroupOutcomeCallable CreateThingGroupCallable(const Model::CreateThingGroupRequest& request) const;

        /**
         * An Async wrapper for CreateThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThingGroupAsync(const Model::CreateThingGroupRequest& request, const CreateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new thing type.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateThingType</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingType">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThingTypeOutcome CreateThingType(const Model::CreateThingTypeRequest& request) const;

        /**
         * A Callable wrapper for CreateThingType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateThingTypeOutcomeCallable CreateThingTypeCallable(const Model::CreateThingTypeRequest& request) const;

        /**
         * An Async wrapper for CreateThingType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateThingTypeAsync(const Model::CreateThingTypeRequest& request, const CreateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a rule. Creating rules is an administrator-level action. Any user who
         * has permission to create rules will be able to access data processed by the
         * rule.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateTopicRule</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTopicRuleOutcome CreateTopicRule(const Model::CreateTopicRuleRequest& request) const;

        /**
         * A Callable wrapper for CreateTopicRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTopicRuleOutcomeCallable CreateTopicRuleCallable(const Model::CreateTopicRuleRequest& request) const;

        /**
         * An Async wrapper for CreateTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTopicRuleAsync(const Model::CreateTopicRuleRequest& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a topic rule destination. The destination must be confirmed prior to
         * use.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateTopicRuleDestination</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateTopicRuleDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTopicRuleDestinationOutcome CreateTopicRuleDestination(const Model::CreateTopicRuleDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateTopicRuleDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTopicRuleDestinationOutcomeCallable CreateTopicRuleDestinationCallable(const Model::CreateTopicRuleDestinationRequest& request) const;

        /**
         * An Async wrapper for CreateTopicRuleDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTopicRuleDestinationAsync(const Model::CreateTopicRuleDestinationRequest& request, const CreateTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Restores the default settings for Device Defender audits for this account.
         * Any configuration data you entered is deleted and all audit checks are reset to
         * disabled. </p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteAccountAuditConfiguration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAccountAuditConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountAuditConfigurationOutcome DeleteAccountAuditConfiguration(const Model::DeleteAccountAuditConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountAuditConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAccountAuditConfigurationOutcomeCallable DeleteAccountAuditConfigurationCallable(const Model::DeleteAccountAuditConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteAccountAuditConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAccountAuditConfigurationAsync(const Model::DeleteAccountAuditConfigurationRequest& request, const DeleteAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a Device Defender audit suppression. </p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteAuditSuppression</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAuditSuppression">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuditSuppressionOutcome DeleteAuditSuppression(const Model::DeleteAuditSuppressionRequest& request) const;

        /**
         * A Callable wrapper for DeleteAuditSuppression that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAuditSuppressionOutcomeCallable DeleteAuditSuppressionCallable(const Model::DeleteAuditSuppressionRequest& request) const;

        /**
         * An Async wrapper for DeleteAuditSuppression that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAuditSuppressionAsync(const Model::DeleteAuditSuppressionRequest& request, const DeleteAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an authorizer.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteAuthorizer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAuthorizerOutcome DeleteAuthorizer(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for DeleteAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteAuthorizerOutcomeCallable DeleteAuthorizerCallable(const Model::DeleteAuthorizerRequest& request) const;

        /**
         * An Async wrapper for DeleteAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteAuthorizerAsync(const Model::DeleteAuthorizerRequest& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the billing group.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteBillingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBillingGroupOutcome DeleteBillingGroup(const Model::DeleteBillingGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteBillingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteBillingGroupOutcomeCallable DeleteBillingGroupCallable(const Model::DeleteBillingGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteBillingGroupAsync(const Model::DeleteBillingGroupRequest& request, const DeleteBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a registered CA certificate.</p> <p>Requires permission to access the
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteCACertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteCACertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCACertificateOutcome DeleteCACertificate(const Model::DeleteCACertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCACertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCACertificateOutcomeCallable DeleteCACertificateCallable(const Model::DeleteCACertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteCACertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCACertificateAsync(const Model::DeleteCACertificateRequest& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified certificate.</p> <p>A certificate cannot be deleted if
         * it has a policy or IoT thing attached to it or if its status is set to ACTIVE.
         * To delete a certificate, first use the <a>DetachPolicy</a> action to detach all
         * policies. Next, use the <a>UpdateCertificate</a> action to set the certificate
         * to the INACTIVE status.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteCertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const Model::DeleteCertificateRequest& request) const;

        /**
         * An Async wrapper for DeleteCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCertificateAsync(const Model::DeleteCertificateRequest& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Deletes a Device Defender detect custom metric. </p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteCustomMetric</a>
         * action.</p>  <p>Before you can delete a custom metric, you must first
         * remove the custom metric from all security profiles it's a part of. The security
         * profile associated with the custom metric can be found using the <a
         * href="https://docs.aws.amazon.com/iot/latest/apireference/API_ListSecurityProfiles.html">ListSecurityProfiles</a>
         * API with <code>metricName</code> set to your custom metric name.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteCustomMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCustomMetricOutcome DeleteCustomMetric(const Model::DeleteCustomMetricRequest& request) const;

        /**
         * A Callable wrapper for DeleteCustomMetric that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCustomMetricOutcomeCallable DeleteCustomMetricCallable(const Model::DeleteCustomMetricRequest& request) const;

        /**
         * An Async wrapper for DeleteCustomMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCustomMetricAsync(const Model::DeleteCustomMetricRequest& request, const DeleteCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the specified dimension from your Amazon Web Services accounts.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteDimension</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDimension">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDimensionOutcome DeleteDimension(const Model::DeleteDimensionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDimension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDimensionOutcomeCallable DeleteDimensionCallable(const Model::DeleteDimensionRequest& request) const;

        /**
         * An Async wrapper for DeleteDimension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDimensionAsync(const Model::DeleteDimensionRequest& request, const DeleteDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified domain configuration.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteDomainConfiguration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDomainConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainConfigurationOutcome DeleteDomainConfiguration(const Model::DeleteDomainConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDomainConfigurationOutcomeCallable DeleteDomainConfigurationCallable(const Model::DeleteDomainConfigurationRequest& request) const;

        /**
         * An Async wrapper for DeleteDomainConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDomainConfigurationAsync(const Model::DeleteDomainConfigurationRequest& request, const DeleteDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a dynamic thing group.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteDynamicThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteDynamicThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDynamicThingGroupOutcome DeleteDynamicThingGroup(const Model::DeleteDynamicThingGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteDynamicThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteDynamicThingGroupOutcomeCallable DeleteDynamicThingGroupCallable(const Model::DeleteDynamicThingGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteDynamicThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteDynamicThingGroupAsync(const Model::DeleteDynamicThingGroupRequest& request, const DeleteDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified fleet metric. Returns successfully with no error if the
         * deletion is successful or you specify a fleet metric that doesn't exist.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteFleetMetric</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteFleetMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFleetMetricOutcome DeleteFleetMetric(const Model::DeleteFleetMetricRequest& request) const;

        /**
         * A Callable wrapper for DeleteFleetMetric that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteFleetMetricOutcomeCallable DeleteFleetMetricCallable(const Model::DeleteFleetMetricRequest& request) const;

        /**
         * An Async wrapper for DeleteFleetMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteFleetMetricAsync(const Model::DeleteFleetMetricRequest& request, const DeleteFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a job and its related job executions.</p> <p>Deleting a job may take
         * time, depending on the number of job executions created for the job and various
         * other factors. While the job is being deleted, the status of the job will be
         * shown as "DELETION_IN_PROGRESS". Attempting to delete or cancel a job whose
         * status is already "DELETION_IN_PROGRESS" will result in an error.</p> <p>Only 10
         * jobs may have status "DELETION_IN_PROGRESS" at the same time, or a
         * LimitExceededException will occur.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteJob</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteJobOutcome DeleteJob(const Model::DeleteJobRequest& request) const;

        /**
         * A Callable wrapper for DeleteJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobOutcomeCallable DeleteJobCallable(const Model::DeleteJobRequest& request) const;

        /**
         * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobAsync(const Model::DeleteJobRequest& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a job execution.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteJobExecution</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobExecutionOutcome DeleteJobExecution(const Model::DeleteJobExecutionRequest& request) const;

        /**
         * A Callable wrapper for DeleteJobExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobExecutionOutcomeCallable DeleteJobExecutionCallable(const Model::DeleteJobExecutionRequest& request) const;

        /**
         * An Async wrapper for DeleteJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobExecutionAsync(const Model::DeleteJobExecutionRequest& request, const DeleteJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified job template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTemplateOutcome DeleteJobTemplate(const Model::DeleteJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteJobTemplateOutcomeCallable DeleteJobTemplateCallable(const Model::DeleteJobTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteJobTemplateAsync(const Model::DeleteJobTemplateRequest& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a defined mitigation action from your Amazon Web Services
         * accounts.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteMitigationAction</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteMitigationAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMitigationActionOutcome DeleteMitigationAction(const Model::DeleteMitigationActionRequest& request) const;

        /**
         * A Callable wrapper for DeleteMitigationAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMitigationActionOutcomeCallable DeleteMitigationActionCallable(const Model::DeleteMitigationActionRequest& request) const;

        /**
         * An Async wrapper for DeleteMitigationAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMitigationActionAsync(const Model::DeleteMitigationActionRequest& request, const DeleteMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Delete an OTA update.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteOTAUpdate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteOTAUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOTAUpdateOutcome DeleteOTAUpdate(const Model::DeleteOTAUpdateRequest& request) const;

        /**
         * A Callable wrapper for DeleteOTAUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteOTAUpdateOutcomeCallable DeleteOTAUpdateCallable(const Model::DeleteOTAUpdateRequest& request) const;

        /**
         * An Async wrapper for DeleteOTAUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteOTAUpdateAsync(const Model::DeleteOTAUpdateRequest& request, const DeleteOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified policy.</p> <p>A policy cannot be deleted if it has
         * non-default versions or it is attached to any certificate.</p> <p>To delete a
         * policy, use the <a>DeletePolicyVersion</a> action to delete all non-default
         * versions of the policy; use the <a>DetachPolicy</a> action to detach the policy
         * from any certificate; and then use the DeletePolicy action to delete the
         * policy.</p> <p>When a policy is deleted using DeletePolicy, its default version
         * is deleted with it.</p>  <p>Because of the distributed nature of Amazon
         * Web Services, it can take up to five minutes after a policy is detached before
         * it's ready to be deleted.</p>  <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeletePolicy</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeletePolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyOutcome DeletePolicy(const Model::DeletePolicyRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const Model::DeletePolicyRequest& request) const;

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyAsync(const Model::DeletePolicyRequest& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified version of the specified policy. You cannot delete the
         * default version of a policy using this action. To delete the default version of
         * a policy, use <a>DeletePolicy</a>. To find out which version of a policy is
         * marked as the default version, use ListPolicyVersions.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeletePolicyVersion</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeletePolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePolicyVersionOutcome DeletePolicyVersion(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for DeletePolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeletePolicyVersionOutcomeCallable DeletePolicyVersionCallable(const Model::DeletePolicyVersionRequest& request) const;

        /**
         * An Async wrapper for DeletePolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeletePolicyVersionAsync(const Model::DeletePolicyVersionRequest& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a provisioning template.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteProvisioningTemplate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteProvisioningTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisioningTemplateOutcome DeleteProvisioningTemplate(const Model::DeleteProvisioningTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteProvisioningTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisioningTemplateOutcomeCallable DeleteProvisioningTemplateCallable(const Model::DeleteProvisioningTemplateRequest& request) const;

        /**
         * An Async wrapper for DeleteProvisioningTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProvisioningTemplateAsync(const Model::DeleteProvisioningTemplateRequest& request, const DeleteProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a provisioning template version.</p> <p>Requires permission to access
         * the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteProvisioningTemplateVersion</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisioningTemplateVersionOutcome DeleteProvisioningTemplateVersion(const Model::DeleteProvisioningTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for DeleteProvisioningTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteProvisioningTemplateVersionOutcomeCallable DeleteProvisioningTemplateVersionCallable(const Model::DeleteProvisioningTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for DeleteProvisioningTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteProvisioningTemplateVersionAsync(const Model::DeleteProvisioningTemplateVersionRequest& request, const DeleteProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a CA certificate registration code.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteRegistrationCode</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteRegistrationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRegistrationCodeOutcome DeleteRegistrationCode(const Model::DeleteRegistrationCodeRequest& request) const;

        /**
         * A Callable wrapper for DeleteRegistrationCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRegistrationCodeOutcomeCallable DeleteRegistrationCodeCallable(const Model::DeleteRegistrationCodeRequest& request) const;

        /**
         * An Async wrapper for DeleteRegistrationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRegistrationCodeAsync(const Model::DeleteRegistrationCodeRequest& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a role alias</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteRoleAlias</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteRoleAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRoleAliasOutcome DeleteRoleAlias(const Model::DeleteRoleAliasRequest& request) const;

        /**
         * A Callable wrapper for DeleteRoleAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRoleAliasOutcomeCallable DeleteRoleAliasCallable(const Model::DeleteRoleAliasRequest& request) const;

        /**
         * An Async wrapper for DeleteRoleAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRoleAliasAsync(const Model::DeleteRoleAliasRequest& request, const DeleteRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a scheduled audit.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteScheduledAudit</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteScheduledAudit">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteScheduledAuditOutcome DeleteScheduledAudit(const Model::DeleteScheduledAuditRequest& request) const;

        /**
         * A Callable wrapper for DeleteScheduledAudit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteScheduledAuditOutcomeCallable DeleteScheduledAuditCallable(const Model::DeleteScheduledAuditRequest& request) const;

        /**
         * An Async wrapper for DeleteScheduledAudit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteScheduledAuditAsync(const Model::DeleteScheduledAuditRequest& request, const DeleteScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a Device Defender security profile.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteSecurityProfile</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteSecurityProfileOutcome DeleteSecurityProfile(const Model::DeleteSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteSecurityProfileOutcomeCallable DeleteSecurityProfileCallable(const Model::DeleteSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for DeleteSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteSecurityProfileAsync(const Model::DeleteSecurityProfileRequest& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a stream.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteStream</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteStreamOutcome DeleteStream(const Model::DeleteStreamRequest& request) const;

        /**
         * A Callable wrapper for DeleteStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteStreamOutcomeCallable DeleteStreamCallable(const Model::DeleteStreamRequest& request) const;

        /**
         * An Async wrapper for DeleteStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteStreamAsync(const Model::DeleteStreamRequest& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified thing. Returns successfully with no error if the
         * deletion is successful or you specify a thing that doesn't exist.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteThing</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThing">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteThingOutcome DeleteThing(const Model::DeleteThingRequest& request) const;

        /**
         * A Callable wrapper for DeleteThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThingOutcomeCallable DeleteThingCallable(const Model::DeleteThingRequest& request) const;

        /**
         * An Async wrapper for DeleteThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThingAsync(const Model::DeleteThingRequest& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a thing group.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThingGroupOutcome DeleteThingGroup(const Model::DeleteThingGroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThingGroupOutcomeCallable DeleteThingGroupCallable(const Model::DeleteThingGroupRequest& request) const;

        /**
         * An Async wrapper for DeleteThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThingGroupAsync(const Model::DeleteThingGroupRequest& request, const DeleteThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the specified thing type. You cannot delete a thing type if it has
         * things associated with it. To delete a thing type, first mark it as deprecated
         * by calling <a>DeprecateThingType</a>, then remove any associated things by
         * calling <a>UpdateThing</a> to change the thing type on any associated thing, and
         * finally use <a>DeleteThingType</a> to delete the thing type.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteThingType</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteThingType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteThingTypeOutcome DeleteThingType(const Model::DeleteThingTypeRequest& request) const;

        /**
         * A Callable wrapper for DeleteThingType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteThingTypeOutcomeCallable DeleteThingTypeCallable(const Model::DeleteThingTypeRequest& request) const;

        /**
         * An Async wrapper for DeleteThingType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteThingTypeAsync(const Model::DeleteThingTypeRequest& request, const DeleteThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes the rule.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteTopicRule</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTopicRuleOutcome DeleteTopicRule(const Model::DeleteTopicRuleRequest& request) const;

        /**
         * A Callable wrapper for DeleteTopicRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTopicRuleOutcomeCallable DeleteTopicRuleCallable(const Model::DeleteTopicRuleRequest& request) const;

        /**
         * An Async wrapper for DeleteTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTopicRuleAsync(const Model::DeleteTopicRuleRequest& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a topic rule destination.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteTopicRuleDestination</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteTopicRuleDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTopicRuleDestinationOutcome DeleteTopicRuleDestination(const Model::DeleteTopicRuleDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteTopicRuleDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTopicRuleDestinationOutcomeCallable DeleteTopicRuleDestinationCallable(const Model::DeleteTopicRuleDestinationRequest& request) const;

        /**
         * An Async wrapper for DeleteTopicRuleDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTopicRuleDestinationAsync(const Model::DeleteTopicRuleDestinationRequest& request, const DeleteTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a logging level.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteV2LoggingLevel</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteV2LoggingLevel">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteV2LoggingLevelOutcome DeleteV2LoggingLevel(const Model::DeleteV2LoggingLevelRequest& request) const;

        /**
         * A Callable wrapper for DeleteV2LoggingLevel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteV2LoggingLevelOutcomeCallable DeleteV2LoggingLevelCallable(const Model::DeleteV2LoggingLevelRequest& request) const;

        /**
         * An Async wrapper for DeleteV2LoggingLevel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteV2LoggingLevelAsync(const Model::DeleteV2LoggingLevelRequest& request, const DeleteV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deprecates a thing type. You can not associate new things with deprecated
         * thing type.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeprecateThingType</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeprecateThingType">AWS
         * API Reference</a></p>
         */
        virtual Model::DeprecateThingTypeOutcome DeprecateThingType(const Model::DeprecateThingTypeRequest& request) const;

        /**
         * A Callable wrapper for DeprecateThingType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeprecateThingTypeOutcomeCallable DeprecateThingTypeCallable(const Model::DeprecateThingTypeRequest& request) const;

        /**
         * An Async wrapper for DeprecateThingType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeprecateThingTypeAsync(const Model::DeprecateThingTypeRequest& request, const DeprecateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the Device Defender audit settings for this account.
         * Settings include how audit notifications are sent and which audit checks are
         * enabled or disabled.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeAccountAuditConfiguration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAccountAuditConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAccountAuditConfigurationOutcome DescribeAccountAuditConfiguration(const Model::DescribeAccountAuditConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeAccountAuditConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAccountAuditConfigurationOutcomeCallable DescribeAccountAuditConfigurationCallable(const Model::DescribeAccountAuditConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeAccountAuditConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAccountAuditConfigurationAsync(const Model::DescribeAccountAuditConfigurationRequest& request, const DescribeAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a single audit finding. Properties include the reason
         * for noncompliance, the severity of the issue, and the start time when the audit
         * that returned the finding.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeAuditFinding</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditFinding">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuditFindingOutcome DescribeAuditFinding(const Model::DescribeAuditFindingRequest& request) const;

        /**
         * A Callable wrapper for DescribeAuditFinding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuditFindingOutcomeCallable DescribeAuditFindingCallable(const Model::DescribeAuditFindingRequest& request) const;

        /**
         * An Async wrapper for DescribeAuditFinding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuditFindingAsync(const Model::DescribeAuditFindingRequest& request, const DescribeAuditFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about an audit mitigation task that is used to apply
         * mitigation actions to a set of audit findings. Properties include the actions
         * being applied, the audit checks to which they're being applied, the task status,
         * and aggregated task statistics.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuditMitigationActionsTaskOutcome DescribeAuditMitigationActionsTask(const Model::DescribeAuditMitigationActionsTaskRequest& request) const;

        /**
         * A Callable wrapper for DescribeAuditMitigationActionsTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuditMitigationActionsTaskOutcomeCallable DescribeAuditMitigationActionsTaskCallable(const Model::DescribeAuditMitigationActionsTaskRequest& request) const;

        /**
         * An Async wrapper for DescribeAuditMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuditMitigationActionsTaskAsync(const Model::DescribeAuditMitigationActionsTaskRequest& request, const DescribeAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets information about a Device Defender audit suppression. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditSuppression">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuditSuppressionOutcome DescribeAuditSuppression(const Model::DescribeAuditSuppressionRequest& request) const;

        /**
         * A Callable wrapper for DescribeAuditSuppression that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuditSuppressionOutcomeCallable DescribeAuditSuppressionCallable(const Model::DescribeAuditSuppressionRequest& request) const;

        /**
         * An Async wrapper for DescribeAuditSuppression that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuditSuppressionAsync(const Model::DescribeAuditSuppressionRequest& request, const DescribeAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a Device Defender audit.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeAuditTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuditTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuditTaskOutcome DescribeAuditTask(const Model::DescribeAuditTaskRequest& request) const;

        /**
         * A Callable wrapper for DescribeAuditTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuditTaskOutcomeCallable DescribeAuditTaskCallable(const Model::DescribeAuditTaskRequest& request) const;

        /**
         * An Async wrapper for DescribeAuditTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuditTaskAsync(const Model::DescribeAuditTaskRequest& request, const DescribeAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an authorizer.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeAuthorizer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAuthorizerOutcome DescribeAuthorizer(const Model::DescribeAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for DescribeAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeAuthorizerOutcomeCallable DescribeAuthorizerCallable(const Model::DescribeAuthorizerRequest& request) const;

        /**
         * An Async wrapper for DescribeAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeAuthorizerAsync(const Model::DescribeAuthorizerRequest& request, const DescribeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a billing group.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeBillingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeBillingGroupOutcome DescribeBillingGroup(const Model::DescribeBillingGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeBillingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeBillingGroupOutcomeCallable DescribeBillingGroupCallable(const Model::DescribeBillingGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeBillingGroupAsync(const Model::DescribeBillingGroupRequest& request, const DescribeBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a registered CA certificate.</p> <p>Requires permission to access
         * the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeCACertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCACertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCACertificateOutcome DescribeCACertificate(const Model::DescribeCACertificateRequest& request) const;

        /**
         * A Callable wrapper for DescribeCACertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCACertificateOutcomeCallable DescribeCACertificateCallable(const Model::DescribeCACertificateRequest& request) const;

        /**
         * An Async wrapper for DescribeCACertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCACertificateAsync(const Model::DescribeCACertificateRequest& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified certificate.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeCertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateOutcome DescribeCertificate(const Model::DescribeCertificateRequest& request) const;

        /**
         * A Callable wrapper for DescribeCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCertificateOutcomeCallable DescribeCertificateCallable(const Model::DescribeCertificateRequest& request) const;

        /**
         * An Async wrapper for DescribeCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCertificateAsync(const Model::DescribeCertificateRequest& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets information about a Device Defender detect custom metric. </p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeCustomMetric</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCustomMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCustomMetricOutcome DescribeCustomMetric(const Model::DescribeCustomMetricRequest& request) const;

        /**
         * A Callable wrapper for DescribeCustomMetric that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeCustomMetricOutcomeCallable DescribeCustomMetricCallable(const Model::DescribeCustomMetricRequest& request) const;

        /**
         * An Async wrapper for DescribeCustomMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeCustomMetricAsync(const Model::DescribeCustomMetricRequest& request, const DescribeCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes the default authorizer.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeDefaultAuthorizer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDefaultAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDefaultAuthorizerOutcome DescribeDefaultAuthorizer(const Model::DescribeDefaultAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for DescribeDefaultAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDefaultAuthorizerOutcomeCallable DescribeDefaultAuthorizerCallable(const Model::DescribeDefaultAuthorizerRequest& request) const;

        /**
         * An Async wrapper for DescribeDefaultAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDefaultAuthorizerAsync(const Model::DescribeDefaultAuthorizerRequest& request, const DescribeDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Gets information about a Device Defender ML Detect mitigation action. </p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeDetectMitigationActionsTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDetectMitigationActionsTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDetectMitigationActionsTaskOutcome DescribeDetectMitigationActionsTask(const Model::DescribeDetectMitigationActionsTaskRequest& request) const;

        /**
         * A Callable wrapper for DescribeDetectMitigationActionsTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDetectMitigationActionsTaskOutcomeCallable DescribeDetectMitigationActionsTaskCallable(const Model::DescribeDetectMitigationActionsTaskRequest& request) const;

        /**
         * An Async wrapper for DescribeDetectMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDetectMitigationActionsTaskAsync(const Model::DescribeDetectMitigationActionsTaskRequest& request, const DescribeDetectMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provides details about a dimension that is defined in your Amazon Web
         * Services accounts.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeDimension</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDimension">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDimensionOutcome DescribeDimension(const Model::DescribeDimensionRequest& request) const;

        /**
         * A Callable wrapper for DescribeDimension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDimensionOutcomeCallable DescribeDimensionCallable(const Model::DescribeDimensionRequest& request) const;

        /**
         * An Async wrapper for DescribeDimension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDimensionAsync(const Model::DescribeDimensionRequest& request, const DescribeDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets summary information about a domain configuration.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeDomainConfiguration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeDomainConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeDomainConfigurationOutcome DescribeDomainConfiguration(const Model::DescribeDomainConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeDomainConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeDomainConfigurationOutcomeCallable DescribeDomainConfigurationCallable(const Model::DescribeDomainConfigurationRequest& request) const;

        /**
         * An Async wrapper for DescribeDomainConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeDomainConfigurationAsync(const Model::DescribeDomainConfigurationRequest& request, const DescribeDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a unique endpoint specific to the Amazon Web Services account making
         * the call.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeEndpoint</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointOutcome DescribeEndpoint(const Model::DescribeEndpointRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const Model::DescribeEndpointRequest& request) const;

        /**
         * An Async wrapper for DescribeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEndpointAsync(const Model::DescribeEndpointRequest& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes event configurations.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeEventConfigurations</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEventConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEventConfigurationsOutcome DescribeEventConfigurations(const Model::DescribeEventConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for DescribeEventConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeEventConfigurationsOutcomeCallable DescribeEventConfigurationsCallable(const Model::DescribeEventConfigurationsRequest& request) const;

        /**
         * An Async wrapper for DescribeEventConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeEventConfigurationsAsync(const Model::DescribeEventConfigurationsRequest& request, const DescribeEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified fleet metric.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeFleetMetric</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeFleetMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFleetMetricOutcome DescribeFleetMetric(const Model::DescribeFleetMetricRequest& request) const;

        /**
         * A Callable wrapper for DescribeFleetMetric that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeFleetMetricOutcomeCallable DescribeFleetMetricCallable(const Model::DescribeFleetMetricRequest& request) const;

        /**
         * An Async wrapper for DescribeFleetMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeFleetMetricAsync(const Model::DescribeFleetMetricRequest& request, const DescribeFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a search index.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeIndex</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeIndex">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIndexOutcome DescribeIndex(const Model::DescribeIndexRequest& request) const;

        /**
         * A Callable wrapper for DescribeIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeIndexOutcomeCallable DescribeIndexCallable(const Model::DescribeIndexRequest& request) const;

        /**
         * An Async wrapper for DescribeIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeIndexAsync(const Model::DescribeIndexRequest& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a job.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeJob</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeJob">AWS API
         * Reference</a></p>
         */
        virtual Model::DescribeJobOutcome DescribeJob(const Model::DescribeJobRequest& request) const;

        /**
         * A Callable wrapper for DescribeJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobOutcomeCallable DescribeJobCallable(const Model::DescribeJobRequest& request) const;

        /**
         * An Async wrapper for DescribeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobAsync(const Model::DescribeJobRequest& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a job execution.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeJobExecution</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeJobExecution">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobExecutionOutcome DescribeJobExecution(const Model::DescribeJobExecutionRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobExecution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobExecutionOutcomeCallable DescribeJobExecutionCallable(const Model::DescribeJobExecutionRequest& request) const;

        /**
         * An Async wrapper for DescribeJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobExecutionAsync(const Model::DescribeJobExecutionRequest& request, const DescribeJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a job template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobTemplateOutcome DescribeJobTemplate(const Model::DescribeJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeJobTemplateOutcomeCallable DescribeJobTemplateCallable(const Model::DescribeJobTemplateRequest& request) const;

        /**
         * An Async wrapper for DescribeJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeJobTemplateAsync(const Model::DescribeJobTemplateRequest& request, const DescribeJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>View details of a managed job template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeManagedJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeManagedJobTemplateOutcome DescribeManagedJobTemplate(const Model::DescribeManagedJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeManagedJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeManagedJobTemplateOutcomeCallable DescribeManagedJobTemplateCallable(const Model::DescribeManagedJobTemplateRequest& request) const;

        /**
         * An Async wrapper for DescribeManagedJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeManagedJobTemplateAsync(const Model::DescribeManagedJobTemplateRequest& request, const DescribeManagedJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a mitigation action.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeMitigationAction</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeMitigationAction">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMitigationActionOutcome DescribeMitigationAction(const Model::DescribeMitigationActionRequest& request) const;

        /**
         * A Callable wrapper for DescribeMitigationAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMitigationActionOutcomeCallable DescribeMitigationActionCallable(const Model::DescribeMitigationActionRequest& request) const;

        /**
         * An Async wrapper for DescribeMitigationAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMitigationActionAsync(const Model::DescribeMitigationActionRequest& request, const DescribeMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a provisioning template.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeProvisioningTemplate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeProvisioningTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisioningTemplateOutcome DescribeProvisioningTemplate(const Model::DescribeProvisioningTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeProvisioningTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningTemplateOutcomeCallable DescribeProvisioningTemplateCallable(const Model::DescribeProvisioningTemplateRequest& request) const;

        /**
         * An Async wrapper for DescribeProvisioningTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisioningTemplateAsync(const Model::DescribeProvisioningTemplateRequest& request, const DescribeProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about a provisioning template version.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeProvisioningTemplateVersion</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeProvisioningTemplateVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeProvisioningTemplateVersionOutcome DescribeProvisioningTemplateVersion(const Model::DescribeProvisioningTemplateVersionRequest& request) const;

        /**
         * A Callable wrapper for DescribeProvisioningTemplateVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeProvisioningTemplateVersionOutcomeCallable DescribeProvisioningTemplateVersionCallable(const Model::DescribeProvisioningTemplateVersionRequest& request) const;

        /**
         * An Async wrapper for DescribeProvisioningTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeProvisioningTemplateVersionAsync(const Model::DescribeProvisioningTemplateVersionRequest& request, const DescribeProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a role alias.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeRoleAlias</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeRoleAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRoleAliasOutcome DescribeRoleAlias(const Model::DescribeRoleAliasRequest& request) const;

        /**
         * A Callable wrapper for DescribeRoleAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRoleAliasOutcomeCallable DescribeRoleAliasCallable(const Model::DescribeRoleAliasRequest& request) const;

        /**
         * An Async wrapper for DescribeRoleAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRoleAliasAsync(const Model::DescribeRoleAliasRequest& request, const DescribeRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a scheduled audit.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeScheduledAudit</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeScheduledAudit">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeScheduledAuditOutcome DescribeScheduledAudit(const Model::DescribeScheduledAuditRequest& request) const;

        /**
         * A Callable wrapper for DescribeScheduledAudit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeScheduledAuditOutcomeCallable DescribeScheduledAuditCallable(const Model::DescribeScheduledAuditRequest& request) const;

        /**
         * An Async wrapper for DescribeScheduledAudit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeScheduledAuditAsync(const Model::DescribeScheduledAuditRequest& request, const DescribeScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a Device Defender security profile.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeSecurityProfile</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeSecurityProfileOutcome DescribeSecurityProfile(const Model::DescribeSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for DescribeSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeSecurityProfileOutcomeCallable DescribeSecurityProfileCallable(const Model::DescribeSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for DescribeSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeSecurityProfileAsync(const Model::DescribeSecurityProfileRequest& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a stream.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeStream</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeStream">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeStreamOutcome DescribeStream(const Model::DescribeStreamRequest& request) const;

        /**
         * A Callable wrapper for DescribeStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeStreamOutcomeCallable DescribeStreamCallable(const Model::DescribeStreamRequest& request) const;

        /**
         * An Async wrapper for DescribeStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeStreamAsync(const Model::DescribeStreamRequest& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified thing.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeThing</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThing">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThingOutcome DescribeThing(const Model::DescribeThingRequest& request) const;

        /**
         * A Callable wrapper for DescribeThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThingOutcomeCallable DescribeThingCallable(const Model::DescribeThingRequest& request) const;

        /**
         * An Async wrapper for DescribeThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThingAsync(const Model::DescribeThingRequest& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describe a thing group.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThingGroupOutcome DescribeThingGroup(const Model::DescribeThingGroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThingGroupOutcomeCallable DescribeThingGroupCallable(const Model::DescribeThingGroupRequest& request) const;

        /**
         * An Async wrapper for DescribeThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThingGroupAsync(const Model::DescribeThingGroupRequest& request, const DescribeThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes a bulk thing provisioning task.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeThingRegistrationTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingRegistrationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThingRegistrationTaskOutcome DescribeThingRegistrationTask(const Model::DescribeThingRegistrationTaskRequest& request) const;

        /**
         * A Callable wrapper for DescribeThingRegistrationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThingRegistrationTaskOutcomeCallable DescribeThingRegistrationTaskCallable(const Model::DescribeThingRegistrationTaskRequest& request) const;

        /**
         * An Async wrapper for DescribeThingRegistrationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThingRegistrationTaskAsync(const Model::DescribeThingRegistrationTaskRequest& request, const DescribeThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified thing type.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeThingType</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeThingType">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeThingTypeOutcome DescribeThingType(const Model::DescribeThingTypeRequest& request) const;

        /**
         * A Callable wrapper for DescribeThingType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeThingTypeOutcomeCallable DescribeThingTypeCallable(const Model::DescribeThingTypeRequest& request) const;

        /**
         * An Async wrapper for DescribeThingType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeThingTypeAsync(const Model::DescribeThingTypeRequest& request, const DescribeThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches a policy from the specified target.</p>  <p>Because of the
         * distributed nature of Amazon Web Services, it can take up to five minutes after
         * a policy is detached before it's ready to be deleted.</p>  <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DetachPolicy</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachPolicyOutcome DetachPolicy(const Model::DetachPolicyRequest& request) const;

        /**
         * A Callable wrapper for DetachPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachPolicyOutcomeCallable DetachPolicyCallable(const Model::DetachPolicyRequest& request) const;

        /**
         * An Async wrapper for DetachPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachPolicyAsync(const Model::DetachPolicyRequest& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a Device Defender security profile from a thing group or from
         * this account.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DetachSecurityProfile</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachSecurityProfileOutcome DetachSecurityProfile(const Model::DetachSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for DetachSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachSecurityProfileOutcomeCallable DetachSecurityProfileCallable(const Model::DetachSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for DetachSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachSecurityProfileAsync(const Model::DetachSecurityProfileRequest& request, const DetachSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Detaches the specified principal from the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p>  <p>This call is asynchronous. It might take
         * several seconds for the detachment to propagate.</p>  <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DetachThingPrincipal</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DetachThingPrincipal">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachThingPrincipalOutcome DetachThingPrincipal(const Model::DetachThingPrincipalRequest& request) const;

        /**
         * A Callable wrapper for DetachThingPrincipal that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DetachThingPrincipalOutcomeCallable DetachThingPrincipalCallable(const Model::DetachThingPrincipalRequest& request) const;

        /**
         * An Async wrapper for DetachThingPrincipal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DetachThingPrincipalAsync(const Model::DetachThingPrincipalRequest& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables the rule.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DisableTopicRule</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DisableTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableTopicRuleOutcome DisableTopicRule(const Model::DisableTopicRuleRequest& request) const;

        /**
         * A Callable wrapper for DisableTopicRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableTopicRuleOutcomeCallable DisableTopicRuleCallable(const Model::DisableTopicRuleRequest& request) const;

        /**
         * An Async wrapper for DisableTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableTopicRuleAsync(const Model::DisableTopicRuleRequest& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables the rule.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">EnableTopicRule</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/EnableTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableTopicRuleOutcome EnableTopicRule(const Model::EnableTopicRuleRequest& request) const;

        /**
         * A Callable wrapper for EnableTopicRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableTopicRuleOutcomeCallable EnableTopicRuleCallable(const Model::EnableTopicRuleRequest& request) const;

        /**
         * An Async wrapper for EnableTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableTopicRuleAsync(const Model::EnableTopicRuleRequest& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Returns a Device Defender's ML Detect Security Profile training model's
         * status. </p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetBehaviorModelTrainingSummaries</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetBehaviorModelTrainingSummaries">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBehaviorModelTrainingSummariesOutcome GetBehaviorModelTrainingSummaries(const Model::GetBehaviorModelTrainingSummariesRequest& request) const;

        /**
         * A Callable wrapper for GetBehaviorModelTrainingSummaries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBehaviorModelTrainingSummariesOutcomeCallable GetBehaviorModelTrainingSummariesCallable(const Model::GetBehaviorModelTrainingSummariesRequest& request) const;

        /**
         * An Async wrapper for GetBehaviorModelTrainingSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBehaviorModelTrainingSummariesAsync(const Model::GetBehaviorModelTrainingSummariesRequest& request, const GetBehaviorModelTrainingSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Aggregates on indexed data with search queries pertaining to particular
         * fields. </p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetBucketsAggregation</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetBucketsAggregation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketsAggregationOutcome GetBucketsAggregation(const Model::GetBucketsAggregationRequest& request) const;

        /**
         * A Callable wrapper for GetBucketsAggregation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBucketsAggregationOutcomeCallable GetBucketsAggregationCallable(const Model::GetBucketsAggregationRequest& request) const;

        /**
         * An Async wrapper for GetBucketsAggregation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBucketsAggregationAsync(const Model::GetBucketsAggregationRequest& request, const GetBucketsAggregationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the approximate count of unique values that match the query.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetCardinality</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetCardinality">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCardinalityOutcome GetCardinality(const Model::GetCardinalityRequest& request) const;

        /**
         * A Callable wrapper for GetCardinality that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCardinalityOutcomeCallable GetCardinalityCallable(const Model::GetCardinalityRequest& request) const;

        /**
         * An Async wrapper for GetCardinality that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCardinalityAsync(const Model::GetCardinalityRequest& request, const GetCardinalityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the policies that have an effect on the authorization behavior
         * of the specified device when it connects to the IoT device gateway.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetEffectivePolicies</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetEffectivePolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEffectivePoliciesOutcome GetEffectivePolicies(const Model::GetEffectivePoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetEffectivePolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetEffectivePoliciesOutcomeCallable GetEffectivePoliciesCallable(const Model::GetEffectivePoliciesRequest& request) const;

        /**
         * An Async wrapper for GetEffectivePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetEffectivePoliciesAsync(const Model::GetEffectivePoliciesRequest& request, const GetEffectivePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the indexing configuration.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetIndexingConfiguration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetIndexingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetIndexingConfigurationOutcome GetIndexingConfiguration(const Model::GetIndexingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetIndexingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetIndexingConfigurationOutcomeCallable GetIndexingConfigurationCallable(const Model::GetIndexingConfigurationRequest& request) const;

        /**
         * An Async wrapper for GetIndexingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetIndexingConfigurationAsync(const Model::GetIndexingConfigurationRequest& request, const GetIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a job document.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetJobDocument</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetJobDocument">AWS
         * API Reference</a></p>
         */
        virtual Model::GetJobDocumentOutcome GetJobDocument(const Model::GetJobDocumentRequest& request) const;

        /**
         * A Callable wrapper for GetJobDocument that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetJobDocumentOutcomeCallable GetJobDocumentCallable(const Model::GetJobDocumentRequest& request) const;

        /**
         * An Async wrapper for GetJobDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetJobDocumentAsync(const Model::GetJobDocumentRequest& request, const GetJobDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the logging options.</p> <p>NOTE: use of this command is not
         * recommended. Use <code>GetV2LoggingOptions</code> instead.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetLoggingOptions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoggingOptionsOutcome GetLoggingOptions(const Model::GetLoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for GetLoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetLoggingOptionsOutcomeCallable GetLoggingOptionsCallable(const Model::GetLoggingOptionsRequest& request) const;

        /**
         * An Async wrapper for GetLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetLoggingOptionsAsync(const Model::GetLoggingOptionsRequest& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets an OTA update.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetOTAUpdate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetOTAUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOTAUpdateOutcome GetOTAUpdate(const Model::GetOTAUpdateRequest& request) const;

        /**
         * A Callable wrapper for GetOTAUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetOTAUpdateOutcomeCallable GetOTAUpdateCallable(const Model::GetOTAUpdateRequest& request) const;

        /**
         * An Async wrapper for GetOTAUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetOTAUpdateAsync(const Model::GetOTAUpdateRequest& request, const GetOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Groups the aggregated values that match the query into percentile groupings.
         * The default percentile groupings are: 1,5,25,50,75,95,99, although you can
         * specify your own when you call <code>GetPercentiles</code>. This function
         * returns a value for each percentile group specified (or the default percentile
         * groupings). The percentile group "1" contains the aggregated field value that
         * occurs in approximately one percent of the values that match the query. The
         * percentile group "5" contains the aggregated field value that occurs in
         * approximately five percent of the values that match the query, and so on. The
         * result is an approximation, the more values that match the query, the more
         * accurate the percentile values.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetPercentiles</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPercentiles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPercentilesOutcome GetPercentiles(const Model::GetPercentilesRequest& request) const;

        /**
         * A Callable wrapper for GetPercentiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPercentilesOutcomeCallable GetPercentilesCallable(const Model::GetPercentilesRequest& request) const;

        /**
         * An Async wrapper for GetPercentiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPercentilesAsync(const Model::GetPercentilesRequest& request, const GetPercentilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified policy with the policy document of the
         * default version.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetPolicy</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicy">AWS API
         * Reference</a></p>
         */
        virtual Model::GetPolicyOutcome GetPolicy(const Model::GetPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyOutcomeCallable GetPolicyCallable(const Model::GetPolicyRequest& request) const;

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyAsync(const Model::GetPolicyRequest& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the specified policy version.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetPolicyVersion</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPolicyVersionOutcome GetPolicyVersion(const Model::GetPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for GetPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetPolicyVersionOutcomeCallable GetPolicyVersionCallable(const Model::GetPolicyVersionRequest& request) const;

        /**
         * An Async wrapper for GetPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetPolicyVersionAsync(const Model::GetPolicyVersionRequest& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a registration code used to register a CA certificate with IoT.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetRegistrationCode</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetRegistrationCode">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegistrationCodeOutcome GetRegistrationCode(const Model::GetRegistrationCodeRequest& request) const;

        /**
         * A Callable wrapper for GetRegistrationCode that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetRegistrationCodeOutcomeCallable GetRegistrationCodeCallable(const Model::GetRegistrationCodeRequest& request) const;

        /**
         * An Async wrapper for GetRegistrationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetRegistrationCodeAsync(const Model::GetRegistrationCodeRequest& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the count, average, sum, minimum, maximum, sum of squares, variance,
         * and standard deviation for the specified aggregated field. If the aggregation
         * field is of type <code>String</code>, only the count statistic is returned.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetStatistics</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetStatistics">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStatisticsOutcome GetStatistics(const Model::GetStatisticsRequest& request) const;

        /**
         * A Callable wrapper for GetStatistics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetStatisticsOutcomeCallable GetStatisticsCallable(const Model::GetStatisticsRequest& request) const;

        /**
         * An Async wrapper for GetStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetStatisticsAsync(const Model::GetStatisticsRequest& request, const GetStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the rule.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetTopicRule</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTopicRuleOutcome GetTopicRule(const Model::GetTopicRuleRequest& request) const;

        /**
         * A Callable wrapper for GetTopicRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTopicRuleOutcomeCallable GetTopicRuleCallable(const Model::GetTopicRuleRequest& request) const;

        /**
         * An Async wrapper for GetTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTopicRuleAsync(const Model::GetTopicRuleRequest& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a topic rule destination.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetTopicRuleDestination</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetTopicRuleDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTopicRuleDestinationOutcome GetTopicRuleDestination(const Model::GetTopicRuleDestinationRequest& request) const;

        /**
         * A Callable wrapper for GetTopicRuleDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTopicRuleDestinationOutcomeCallable GetTopicRuleDestinationCallable(const Model::GetTopicRuleDestinationRequest& request) const;

        /**
         * An Async wrapper for GetTopicRuleDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTopicRuleDestinationAsync(const Model::GetTopicRuleDestinationRequest& request, const GetTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the fine grained logging options.</p> <p>Requires permission to access
         * the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetV2LoggingOptions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetV2LoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetV2LoggingOptionsOutcome GetV2LoggingOptions(const Model::GetV2LoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for GetV2LoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetV2LoggingOptionsOutcomeCallable GetV2LoggingOptionsCallable(const Model::GetV2LoggingOptionsRequest& request) const;

        /**
         * An Async wrapper for GetV2LoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetV2LoggingOptionsAsync(const Model::GetV2LoggingOptionsRequest& request, const GetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the active violations for a given Device Defender security profile.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListActiveViolations</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListActiveViolations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListActiveViolationsOutcome ListActiveViolations(const Model::ListActiveViolationsRequest& request) const;

        /**
         * A Callable wrapper for ListActiveViolations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListActiveViolationsOutcomeCallable ListActiveViolationsCallable(const Model::ListActiveViolationsRequest& request) const;

        /**
         * An Async wrapper for ListActiveViolations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListActiveViolationsAsync(const Model::ListActiveViolationsRequest& request, const ListActiveViolationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the policies attached to the specified thing group.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAttachedPolicies</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAttachedPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAttachedPoliciesOutcome ListAttachedPolicies(const Model::ListAttachedPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListAttachedPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAttachedPoliciesOutcomeCallable ListAttachedPoliciesCallable(const Model::ListAttachedPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListAttachedPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAttachedPoliciesAsync(const Model::ListAttachedPoliciesRequest& request, const ListAttachedPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the findings (results) of a Device Defender audit or of the audits
         * performed during a specified time period. (Findings are retained for 90
         * days.)</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuditFindings</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditFindings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuditFindingsOutcome ListAuditFindings(const Model::ListAuditFindingsRequest& request) const;

        /**
         * A Callable wrapper for ListAuditFindings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuditFindingsOutcomeCallable ListAuditFindingsCallable(const Model::ListAuditFindingsRequest& request) const;

        /**
         * An Async wrapper for ListAuditFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuditFindingsAsync(const Model::ListAuditFindingsRequest& request, const ListAuditFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the status of audit mitigation action tasks that were executed.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuditMitigationActionsExecutions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditMitigationActionsExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuditMitigationActionsExecutionsOutcome ListAuditMitigationActionsExecutions(const Model::ListAuditMitigationActionsExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListAuditMitigationActionsExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuditMitigationActionsExecutionsOutcomeCallable ListAuditMitigationActionsExecutionsCallable(const Model::ListAuditMitigationActionsExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListAuditMitigationActionsExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuditMitigationActionsExecutionsAsync(const Model::ListAuditMitigationActionsExecutionsRequest& request, const ListAuditMitigationActionsExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of audit mitigation action tasks that match the specified
         * filters.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuditMitigationActionsTasks</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditMitigationActionsTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuditMitigationActionsTasksOutcome ListAuditMitigationActionsTasks(const Model::ListAuditMitigationActionsTasksRequest& request) const;

        /**
         * A Callable wrapper for ListAuditMitigationActionsTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuditMitigationActionsTasksOutcomeCallable ListAuditMitigationActionsTasksCallable(const Model::ListAuditMitigationActionsTasksRequest& request) const;

        /**
         * An Async wrapper for ListAuditMitigationActionsTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuditMitigationActionsTasksAsync(const Model::ListAuditMitigationActionsTasksRequest& request, const ListAuditMitigationActionsTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists your Device Defender audit listings. </p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuditSuppressions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditSuppressions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuditSuppressionsOutcome ListAuditSuppressions(const Model::ListAuditSuppressionsRequest& request) const;

        /**
         * A Callable wrapper for ListAuditSuppressions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuditSuppressionsOutcomeCallable ListAuditSuppressionsCallable(const Model::ListAuditSuppressionsRequest& request) const;

        /**
         * An Async wrapper for ListAuditSuppressions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuditSuppressionsAsync(const Model::ListAuditSuppressionsRequest& request, const ListAuditSuppressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Device Defender audits that have been performed during a given time
         * period.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuditTasks</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuditTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuditTasksOutcome ListAuditTasks(const Model::ListAuditTasksRequest& request) const;

        /**
         * A Callable wrapper for ListAuditTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuditTasksOutcomeCallable ListAuditTasksCallable(const Model::ListAuditTasksRequest& request) const;

        /**
         * An Async wrapper for ListAuditTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuditTasksAsync(const Model::ListAuditTasksRequest& request, const ListAuditTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the authorizers registered in your account.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListAuthorizers</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListAuthorizers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAuthorizersOutcome ListAuthorizers(const Model::ListAuthorizersRequest& request) const;

        /**
         * A Callable wrapper for ListAuthorizers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListAuthorizersOutcomeCallable ListAuthorizersCallable(const Model::ListAuthorizersRequest& request) const;

        /**
         * An Async wrapper for ListAuthorizers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListAuthorizersAsync(const Model::ListAuthorizersRequest& request, const ListAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the billing groups you have created.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListBillingGroups</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListBillingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListBillingGroupsOutcome ListBillingGroups(const Model::ListBillingGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListBillingGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListBillingGroupsOutcomeCallable ListBillingGroupsCallable(const Model::ListBillingGroupsRequest& request) const;

        /**
         * An Async wrapper for ListBillingGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListBillingGroupsAsync(const Model::ListBillingGroupsRequest& request, const ListBillingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the CA certificates registered for your Amazon Web Services
         * account.</p> <p>The results are paginated with a default page size of 25. You
         * can use the returned marker to retrieve additional results.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListCACertificates</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCACertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCACertificatesOutcome ListCACertificates(const Model::ListCACertificatesRequest& request) const;

        /**
         * A Callable wrapper for ListCACertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCACertificatesOutcomeCallable ListCACertificatesCallable(const Model::ListCACertificatesRequest& request) const;

        /**
         * An Async wrapper for ListCACertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCACertificatesAsync(const Model::ListCACertificatesRequest& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the certificates registered in your Amazon Web Services account.</p>
         * <p>The results are paginated with a default page size of 25. You can use the
         * returned marker to retrieve additional results.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListCertificates</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificatesOutcome ListCertificates(const Model::ListCertificatesRequest& request) const;

        /**
         * A Callable wrapper for ListCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificatesOutcomeCallable ListCertificatesCallable(const Model::ListCertificatesRequest& request) const;

        /**
         * An Async wrapper for ListCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificatesAsync(const Model::ListCertificatesRequest& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the device certificates signed by the specified CA certificate.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListCertificatesByCA</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificatesByCA">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificatesByCAOutcome ListCertificatesByCA(const Model::ListCertificatesByCARequest& request) const;

        /**
         * A Callable wrapper for ListCertificatesByCA that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCertificatesByCAOutcomeCallable ListCertificatesByCACallable(const Model::ListCertificatesByCARequest& request) const;

        /**
         * An Async wrapper for ListCertificatesByCA that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCertificatesByCAAsync(const Model::ListCertificatesByCARequest& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists your Device Defender detect custom metrics. </p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListCustomMetrics</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCustomMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCustomMetricsOutcome ListCustomMetrics(const Model::ListCustomMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListCustomMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCustomMetricsOutcomeCallable ListCustomMetricsCallable(const Model::ListCustomMetricsRequest& request) const;

        /**
         * An Async wrapper for ListCustomMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCustomMetricsAsync(const Model::ListCustomMetricsRequest& request, const ListCustomMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Lists mitigation actions executions for a Device Defender ML Detect Security
         * Profile. </p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListDetectMitigationActionsExecutions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListDetectMitigationActionsExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectMitigationActionsExecutionsOutcome ListDetectMitigationActionsExecutions(const Model::ListDetectMitigationActionsExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListDetectMitigationActionsExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDetectMitigationActionsExecutionsOutcomeCallable ListDetectMitigationActionsExecutionsCallable(const Model::ListDetectMitigationActionsExecutionsRequest& request) const;

        /**
         * An Async wrapper for ListDetectMitigationActionsExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDetectMitigationActionsExecutionsAsync(const Model::ListDetectMitigationActionsExecutionsRequest& request, const ListDetectMitigationActionsExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> List of Device Defender ML Detect mitigation actions tasks. </p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListDetectMitigationActionsTasks</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListDetectMitigationActionsTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDetectMitigationActionsTasksOutcome ListDetectMitigationActionsTasks(const Model::ListDetectMitigationActionsTasksRequest& request) const;

        /**
         * A Callable wrapper for ListDetectMitigationActionsTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDetectMitigationActionsTasksOutcomeCallable ListDetectMitigationActionsTasksCallable(const Model::ListDetectMitigationActionsTasksRequest& request) const;

        /**
         * An Async wrapper for ListDetectMitigationActionsTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDetectMitigationActionsTasksAsync(const Model::ListDetectMitigationActionsTasksRequest& request, const ListDetectMitigationActionsTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the set of dimensions that are defined for your Amazon Web Services
         * accounts.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListDimensions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListDimensions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDimensionsOutcome ListDimensions(const Model::ListDimensionsRequest& request) const;

        /**
         * A Callable wrapper for ListDimensions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDimensionsOutcomeCallable ListDimensionsCallable(const Model::ListDimensionsRequest& request) const;

        /**
         * An Async wrapper for ListDimensions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDimensionsAsync(const Model::ListDimensionsRequest& request, const ListDimensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of domain configurations for the user. This list is sorted
         * alphabetically by domain configuration name.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListDomainConfigurations</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListDomainConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDomainConfigurationsOutcome ListDomainConfigurations(const Model::ListDomainConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for ListDomainConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListDomainConfigurationsOutcomeCallable ListDomainConfigurationsCallable(const Model::ListDomainConfigurationsRequest& request) const;

        /**
         * An Async wrapper for ListDomainConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListDomainConfigurationsAsync(const Model::ListDomainConfigurationsRequest& request, const ListDomainConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all your fleet metrics. </p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListFleetMetrics</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListFleetMetrics">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFleetMetricsOutcome ListFleetMetrics(const Model::ListFleetMetricsRequest& request) const;

        /**
         * A Callable wrapper for ListFleetMetrics that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListFleetMetricsOutcomeCallable ListFleetMetricsCallable(const Model::ListFleetMetricsRequest& request) const;

        /**
         * An Async wrapper for ListFleetMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListFleetMetricsAsync(const Model::ListFleetMetricsRequest& request, const ListFleetMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the search indices.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListIndices</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListIndices">AWS API
         * Reference</a></p>
         */
        virtual Model::ListIndicesOutcome ListIndices(const Model::ListIndicesRequest& request) const;

        /**
         * A Callable wrapper for ListIndices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListIndicesOutcomeCallable ListIndicesCallable(const Model::ListIndicesRequest& request) const;

        /**
         * An Async wrapper for ListIndices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListIndicesAsync(const Model::ListIndicesRequest& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the job executions for a job.</p> <p>Requires permission to access the
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListJobExecutionsForJob</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobExecutionsForJob">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobExecutionsForJobOutcome ListJobExecutionsForJob(const Model::ListJobExecutionsForJobRequest& request) const;

        /**
         * A Callable wrapper for ListJobExecutionsForJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobExecutionsForJobOutcomeCallable ListJobExecutionsForJobCallable(const Model::ListJobExecutionsForJobRequest& request) const;

        /**
         * An Async wrapper for ListJobExecutionsForJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobExecutionsForJobAsync(const Model::ListJobExecutionsForJobRequest& request, const ListJobExecutionsForJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the job executions for the specified thing.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListJobExecutionsForThing</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobExecutionsForThing">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobExecutionsForThingOutcome ListJobExecutionsForThing(const Model::ListJobExecutionsForThingRequest& request) const;

        /**
         * A Callable wrapper for ListJobExecutionsForThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobExecutionsForThingOutcomeCallable ListJobExecutionsForThingCallable(const Model::ListJobExecutionsForThingRequest& request) const;

        /**
         * An Async wrapper for ListJobExecutionsForThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobExecutionsForThingAsync(const Model::ListJobExecutionsForThingRequest& request, const ListJobExecutionsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of job templates.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListJobTemplates</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListJobTemplatesOutcome ListJobTemplates(const Model::ListJobTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListJobTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobTemplatesOutcomeCallable ListJobTemplatesCallable(const Model::ListJobTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListJobTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobTemplatesAsync(const Model::ListJobTemplatesRequest& request, const ListJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists jobs.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListJobs</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListJobs">AWS API
         * Reference</a></p>
         */
        virtual Model::ListJobsOutcome ListJobs(const Model::ListJobsRequest& request) const;

        /**
         * A Callable wrapper for ListJobs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListJobsOutcomeCallable ListJobsCallable(const Model::ListJobsRequest& request) const;

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListJobsAsync(const Model::ListJobsRequest& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of managed job templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListManagedJobTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedJobTemplatesOutcome ListManagedJobTemplates(const Model::ListManagedJobTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListManagedJobTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListManagedJobTemplatesOutcomeCallable ListManagedJobTemplatesCallable(const Model::ListManagedJobTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListManagedJobTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListManagedJobTemplatesAsync(const Model::ListManagedJobTemplatesRequest& request, const ListManagedJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the values reported for an IoT Device Defender metric (device-side
         * metric, cloud-side metric, or custom metric) by the given thing during the
         * specified time period.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListMetricValues">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMetricValuesOutcome ListMetricValues(const Model::ListMetricValuesRequest& request) const;

        /**
         * A Callable wrapper for ListMetricValues that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMetricValuesOutcomeCallable ListMetricValuesCallable(const Model::ListMetricValuesRequest& request) const;

        /**
         * An Async wrapper for ListMetricValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMetricValuesAsync(const Model::ListMetricValuesRequest& request, const ListMetricValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of all mitigation actions that match the specified filter
         * criteria.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListMitigationActions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListMitigationActions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMitigationActionsOutcome ListMitigationActions(const Model::ListMitigationActionsRequest& request) const;

        /**
         * A Callable wrapper for ListMitigationActions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMitigationActionsOutcomeCallable ListMitigationActionsCallable(const Model::ListMitigationActionsRequest& request) const;

        /**
         * An Async wrapper for ListMitigationActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMitigationActionsAsync(const Model::ListMitigationActionsRequest& request, const ListMitigationActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists OTA updates.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListOTAUpdates</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListOTAUpdates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOTAUpdatesOutcome ListOTAUpdates(const Model::ListOTAUpdatesRequest& request) const;

        /**
         * A Callable wrapper for ListOTAUpdates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOTAUpdatesOutcomeCallable ListOTAUpdatesCallable(const Model::ListOTAUpdatesRequest& request) const;

        /**
         * An Async wrapper for ListOTAUpdates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOTAUpdatesAsync(const Model::ListOTAUpdatesRequest& request, const ListOTAUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists certificates that are being transferred but not yet accepted.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListOutgoingCertificates</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListOutgoingCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOutgoingCertificatesOutcome ListOutgoingCertificates(const Model::ListOutgoingCertificatesRequest& request) const;

        /**
         * A Callable wrapper for ListOutgoingCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListOutgoingCertificatesOutcomeCallable ListOutgoingCertificatesCallable(const Model::ListOutgoingCertificatesRequest& request) const;

        /**
         * An Async wrapper for ListOutgoingCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListOutgoingCertificatesAsync(const Model::ListOutgoingCertificatesRequest& request, const ListOutgoingCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your policies.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListPolicies</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPoliciesOutcome ListPolicies(const Model::ListPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const Model::ListPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPoliciesAsync(const Model::ListPoliciesRequest& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the versions of the specified policy and identifies the default
         * version.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListPolicyVersions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPolicyVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPolicyVersionsOutcome ListPolicyVersions(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListPolicyVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const Model::ListPolicyVersionsRequest& request) const;

        /**
         * An Async wrapper for ListPolicyVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPolicyVersionsAsync(const Model::ListPolicyVersionsRequest& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the things associated with the specified principal. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities. </p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListPrincipalThings</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPrincipalThings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPrincipalThingsOutcome ListPrincipalThings(const Model::ListPrincipalThingsRequest& request) const;

        /**
         * A Callable wrapper for ListPrincipalThings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListPrincipalThingsOutcomeCallable ListPrincipalThingsCallable(const Model::ListPrincipalThingsRequest& request) const;

        /**
         * An Async wrapper for ListPrincipalThings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListPrincipalThingsAsync(const Model::ListPrincipalThingsRequest& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>A list of provisioning template versions.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListProvisioningTemplateVersions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListProvisioningTemplateVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningTemplateVersionsOutcome ListProvisioningTemplateVersions(const Model::ListProvisioningTemplateVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListProvisioningTemplateVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisioningTemplateVersionsOutcomeCallable ListProvisioningTemplateVersionsCallable(const Model::ListProvisioningTemplateVersionsRequest& request) const;

        /**
         * An Async wrapper for ListProvisioningTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProvisioningTemplateVersionsAsync(const Model::ListProvisioningTemplateVersionsRequest& request, const ListProvisioningTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the provisioning templates in your Amazon Web Services account.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListProvisioningTemplates</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListProvisioningTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningTemplatesOutcome ListProvisioningTemplates(const Model::ListProvisioningTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListProvisioningTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListProvisioningTemplatesOutcomeCallable ListProvisioningTemplatesCallable(const Model::ListProvisioningTemplatesRequest& request) const;

        /**
         * An Async wrapper for ListProvisioningTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListProvisioningTemplatesAsync(const Model::ListProvisioningTemplatesRequest& request, const ListProvisioningTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The related resources of an Audit finding. The following resources can be
         * returned from calling this API:</p> <ul> <li> <p>DEVICE_CERTIFICATE</p> </li>
         * <li> <p>CA_CERTIFICATE</p> </li> <li> <p>IOT_POLICY</p> </li> <li>
         * <p>COGNITO_IDENTITY_POOL</p> </li> <li> <p>CLIENT_ID</p> </li> <li>
         * <p>ACCOUNT_SETTINGS</p> </li> <li> <p>ROLE_ALIAS</p> </li> <li> <p>IAM_ROLE</p>
         * </li> <li> <p>ISSUER_CERTIFICATE</p> </li> </ul>  <p>This API is similar
         * to DescribeAuditFinding's <a
         * href="https://docs.aws.amazon.com/iot/latest/apireference/API_DescribeAuditFinding.html">RelatedResources</a>
         * but provides pagination and is not limited to 10 resources. When calling <a
         * href="https://docs.aws.amazon.com/iot/latest/apireference/API_DescribeAuditFinding.html">DescribeAuditFinding</a>
         * for the intermediate CA revoked for active device certificates check,
         * RelatedResources will not be populated. You must use this API,
         * ListRelatedResourcesForAuditFinding, to list the certificates.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListRelatedResourcesForAuditFinding">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRelatedResourcesForAuditFindingOutcome ListRelatedResourcesForAuditFinding(const Model::ListRelatedResourcesForAuditFindingRequest& request) const;

        /**
         * A Callable wrapper for ListRelatedResourcesForAuditFinding that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRelatedResourcesForAuditFindingOutcomeCallable ListRelatedResourcesForAuditFindingCallable(const Model::ListRelatedResourcesForAuditFindingRequest& request) const;

        /**
         * An Async wrapper for ListRelatedResourcesForAuditFinding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRelatedResourcesForAuditFindingAsync(const Model::ListRelatedResourcesForAuditFindingRequest& request, const ListRelatedResourcesForAuditFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the role aliases registered in your account.</p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListRoleAliases</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListRoleAliases">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoleAliasesOutcome ListRoleAliases(const Model::ListRoleAliasesRequest& request) const;

        /**
         * A Callable wrapper for ListRoleAliases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoleAliasesOutcomeCallable ListRoleAliasesCallable(const Model::ListRoleAliasesRequest& request) const;

        /**
         * An Async wrapper for ListRoleAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoleAliasesAsync(const Model::ListRoleAliasesRequest& request, const ListRoleAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of your scheduled audits.</p> <p>Requires permission to access the
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListScheduledAudits</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListScheduledAudits">AWS
         * API Reference</a></p>
         */
        virtual Model::ListScheduledAuditsOutcome ListScheduledAudits(const Model::ListScheduledAuditsRequest& request) const;

        /**
         * A Callable wrapper for ListScheduledAudits that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListScheduledAuditsOutcomeCallable ListScheduledAuditsCallable(const Model::ListScheduledAuditsRequest& request) const;

        /**
         * An Async wrapper for ListScheduledAudits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListScheduledAuditsAsync(const Model::ListScheduledAuditsRequest& request, const ListScheduledAuditsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Device Defender security profiles you've created. You can filter
         * security profiles by dimension or custom metric.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListSecurityProfiles</a>
         * action.</p>  <p> <code>dimensionName</code> and <code>metricName</code>
         * cannot be used in the same request.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListSecurityProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilesOutcome ListSecurityProfiles(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityProfilesOutcomeCallable ListSecurityProfilesCallable(const Model::ListSecurityProfilesRequest& request) const;

        /**
         * An Async wrapper for ListSecurityProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityProfilesAsync(const Model::ListSecurityProfilesRequest& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Device Defender security profiles attached to a target (thing
         * group).</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListSecurityProfilesForTarget</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListSecurityProfilesForTarget">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSecurityProfilesForTargetOutcome ListSecurityProfilesForTarget(const Model::ListSecurityProfilesForTargetRequest& request) const;

        /**
         * A Callable wrapper for ListSecurityProfilesForTarget that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListSecurityProfilesForTargetOutcomeCallable ListSecurityProfilesForTargetCallable(const Model::ListSecurityProfilesForTargetRequest& request) const;

        /**
         * An Async wrapper for ListSecurityProfilesForTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListSecurityProfilesForTargetAsync(const Model::ListSecurityProfilesForTargetRequest& request, const ListSecurityProfilesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all of the streams in your Amazon Web Services account.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListStreams</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListStreams">AWS API
         * Reference</a></p>
         */
        virtual Model::ListStreamsOutcome ListStreams(const Model::ListStreamsRequest& request) const;

        /**
         * A Callable wrapper for ListStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListStreamsOutcomeCallable ListStreamsCallable(const Model::ListStreamsRequest& request) const;

        /**
         * An Async wrapper for ListStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListStreamsAsync(const Model::ListStreamsRequest& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags (metadata) you have assigned to the resource.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTagsForResource</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const Model::ListTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourceAsync(const Model::ListTagsForResourceRequest& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List targets for the specified policy.</p> <p>Requires permission to access
         * the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTargetsForPolicy</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTargetsForPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsForPolicyOutcome ListTargetsForPolicy(const Model::ListTargetsForPolicyRequest& request) const;

        /**
         * A Callable wrapper for ListTargetsForPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsForPolicyOutcomeCallable ListTargetsForPolicyCallable(const Model::ListTargetsForPolicyRequest& request) const;

        /**
         * An Async wrapper for ListTargetsForPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsForPolicyAsync(const Model::ListTargetsForPolicyRequest& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the targets (thing groups) associated with a given Device Defender
         * security profile.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTargetsForSecurityProfile</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTargetsForSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTargetsForSecurityProfileOutcome ListTargetsForSecurityProfile(const Model::ListTargetsForSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for ListTargetsForSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTargetsForSecurityProfileOutcomeCallable ListTargetsForSecurityProfileCallable(const Model::ListTargetsForSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for ListTargetsForSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTargetsForSecurityProfileAsync(const Model::ListTargetsForSecurityProfileRequest& request, const ListTargetsForSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the thing groups in your account.</p> <p>Requires permission to access
         * the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingGroups</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingGroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingGroupsOutcome ListThingGroups(const Model::ListThingGroupsRequest& request) const;

        /**
         * A Callable wrapper for ListThingGroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingGroupsOutcomeCallable ListThingGroupsCallable(const Model::ListThingGroupsRequest& request) const;

        /**
         * An Async wrapper for ListThingGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingGroupsAsync(const Model::ListThingGroupsRequest& request, const ListThingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List the thing groups to which the specified thing belongs.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingGroupsForThing</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingGroupsForThing">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingGroupsForThingOutcome ListThingGroupsForThing(const Model::ListThingGroupsForThingRequest& request) const;

        /**
         * A Callable wrapper for ListThingGroupsForThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingGroupsForThingOutcomeCallable ListThingGroupsForThingCallable(const Model::ListThingGroupsForThingRequest& request) const;

        /**
         * An Async wrapper for ListThingGroupsForThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingGroupsForThingAsync(const Model::ListThingGroupsForThingRequest& request, const ListThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the principals associated with the specified thing. A principal can be
         * X.509 certificates, IAM users, groups, and roles, Amazon Cognito identities or
         * federated identities.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingPrincipals</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingPrincipals">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingPrincipalsOutcome ListThingPrincipals(const Model::ListThingPrincipalsRequest& request) const;

        /**
         * A Callable wrapper for ListThingPrincipals that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingPrincipalsOutcomeCallable ListThingPrincipalsCallable(const Model::ListThingPrincipalsRequest& request) const;

        /**
         * An Async wrapper for ListThingPrincipals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingPrincipalsAsync(const Model::ListThingPrincipalsRequest& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Information about the thing registration tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingRegistrationTaskReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingRegistrationTaskReportsOutcome ListThingRegistrationTaskReports(const Model::ListThingRegistrationTaskReportsRequest& request) const;

        /**
         * A Callable wrapper for ListThingRegistrationTaskReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingRegistrationTaskReportsOutcomeCallable ListThingRegistrationTaskReportsCallable(const Model::ListThingRegistrationTaskReportsRequest& request) const;

        /**
         * An Async wrapper for ListThingRegistrationTaskReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingRegistrationTaskReportsAsync(const Model::ListThingRegistrationTaskReportsRequest& request, const ListThingRegistrationTaskReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>List bulk thing provisioning tasks.</p> <p>Requires permission to access the
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingRegistrationTasks</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingRegistrationTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingRegistrationTasksOutcome ListThingRegistrationTasks(const Model::ListThingRegistrationTasksRequest& request) const;

        /**
         * A Callable wrapper for ListThingRegistrationTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingRegistrationTasksOutcomeCallable ListThingRegistrationTasksCallable(const Model::ListThingRegistrationTasksRequest& request) const;

        /**
         * An Async wrapper for ListThingRegistrationTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingRegistrationTasksAsync(const Model::ListThingRegistrationTasksRequest& request, const ListThingRegistrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the existing thing types.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingTypes</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingTypes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingTypesOutcome ListThingTypes(const Model::ListThingTypesRequest& request) const;

        /**
         * A Callable wrapper for ListThingTypes that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingTypesOutcomeCallable ListThingTypesCallable(const Model::ListThingTypesRequest& request) const;

        /**
         * An Async wrapper for ListThingTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingTypesAsync(const Model::ListThingTypesRequest& request, const ListThingTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your things. Use the <b>attributeName</b> and <b>attributeValue</b>
         * parameters to filter your things. For example, calling <code>ListThings</code>
         * with attributeName=Color and attributeValue=Red retrieves all things in the
         * registry that contain an attribute <b>Color</b> with the value <b>Red</b>. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/thing-registry.html#list-things">List
         * Things</a> from the <i>Amazon Web Services IoT Core Developer Guide</i>.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThings</a>
         * action.</p>  <p>You will not be charged for calling this API if an
         * <code>Access denied</code> error is returned. You will also not be charged if no
         * attributes or pagination token was provided in request and no pagination token
         * and no results were returned.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThings">AWS API
         * Reference</a></p>
         */
        virtual Model::ListThingsOutcome ListThings(const Model::ListThingsRequest& request) const;

        /**
         * A Callable wrapper for ListThings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingsOutcomeCallable ListThingsCallable(const Model::ListThingsRequest& request) const;

        /**
         * An Async wrapper for ListThings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingsAsync(const Model::ListThingsRequest& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the things you have added to the given billing group.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingsInBillingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingsInBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingsInBillingGroupOutcome ListThingsInBillingGroup(const Model::ListThingsInBillingGroupRequest& request) const;

        /**
         * A Callable wrapper for ListThingsInBillingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingsInBillingGroupOutcomeCallable ListThingsInBillingGroupCallable(const Model::ListThingsInBillingGroupRequest& request) const;

        /**
         * An Async wrapper for ListThingsInBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingsInBillingGroupAsync(const Model::ListThingsInBillingGroupRequest& request, const ListThingsInBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the things in the specified group.</p> <p>Requires permission to access
         * the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListThingsInThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingsInThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingsInThingGroupOutcome ListThingsInThingGroup(const Model::ListThingsInThingGroupRequest& request) const;

        /**
         * A Callable wrapper for ListThingsInThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListThingsInThingGroupOutcomeCallable ListThingsInThingGroupCallable(const Model::ListThingsInThingGroupRequest& request) const;

        /**
         * An Async wrapper for ListThingsInThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListThingsInThingGroupAsync(const Model::ListThingsInThingGroupRequest& request, const ListThingsInThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the topic rule destinations in your Amazon Web Services
         * account.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTopicRuleDestinations</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTopicRuleDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTopicRuleDestinationsOutcome ListTopicRuleDestinations(const Model::ListTopicRuleDestinationsRequest& request) const;

        /**
         * A Callable wrapper for ListTopicRuleDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTopicRuleDestinationsOutcomeCallable ListTopicRuleDestinationsCallable(const Model::ListTopicRuleDestinationsRequest& request) const;

        /**
         * An Async wrapper for ListTopicRuleDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTopicRuleDestinationsAsync(const Model::ListTopicRuleDestinationsRequest& request, const ListTopicRuleDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the rules for the specific topic.</p> <p>Requires permission to access
         * the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListTopicRules</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListTopicRules">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTopicRulesOutcome ListTopicRules(const Model::ListTopicRulesRequest& request) const;

        /**
         * A Callable wrapper for ListTopicRules that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTopicRulesOutcomeCallable ListTopicRulesCallable(const Model::ListTopicRulesRequest& request) const;

        /**
         * An Async wrapper for ListTopicRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTopicRulesAsync(const Model::ListTopicRulesRequest& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists logging levels.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListV2LoggingLevels</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListV2LoggingLevels">AWS
         * API Reference</a></p>
         */
        virtual Model::ListV2LoggingLevelsOutcome ListV2LoggingLevels(const Model::ListV2LoggingLevelsRequest& request) const;

        /**
         * A Callable wrapper for ListV2LoggingLevels that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListV2LoggingLevelsOutcomeCallable ListV2LoggingLevelsCallable(const Model::ListV2LoggingLevelsRequest& request) const;

        /**
         * An Async wrapper for ListV2LoggingLevels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListV2LoggingLevelsAsync(const Model::ListV2LoggingLevelsRequest& request, const ListV2LoggingLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the Device Defender security profile violations discovered during the
         * given time period. You can use filters to limit the results to those alerts
         * issued for a particular security profile, behavior, or thing (device).</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListViolationEvents</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListViolationEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::ListViolationEventsOutcome ListViolationEvents(const Model::ListViolationEventsRequest& request) const;

        /**
         * A Callable wrapper for ListViolationEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListViolationEventsOutcomeCallable ListViolationEventsCallable(const Model::ListViolationEventsRequest& request) const;

        /**
         * An Async wrapper for ListViolationEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListViolationEventsAsync(const Model::ListViolationEventsRequest& request, const ListViolationEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set a verification state and provide a description of that verification state
         * on a violation (detect alarm).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/PutVerificationStateOnViolation">AWS
         * API Reference</a></p>
         */
        virtual Model::PutVerificationStateOnViolationOutcome PutVerificationStateOnViolation(const Model::PutVerificationStateOnViolationRequest& request) const;

        /**
         * A Callable wrapper for PutVerificationStateOnViolation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutVerificationStateOnViolationOutcomeCallable PutVerificationStateOnViolationCallable(const Model::PutVerificationStateOnViolationRequest& request) const;

        /**
         * An Async wrapper for PutVerificationStateOnViolation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutVerificationStateOnViolationAsync(const Model::PutVerificationStateOnViolationRequest& request, const PutVerificationStateOnViolationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a CA certificate with Amazon Web Services IoT Core. There is no
         * limit to the number of CA certificates you can register in your Amazon Web
         * Services account. You can register up to 10 CA certificates with the same
         * <code>CA subject field</code> per Amazon Web Services account.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RegisterCACertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCACertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCACertificateOutcome RegisterCACertificate(const Model::RegisterCACertificateRequest& request) const;

        /**
         * A Callable wrapper for RegisterCACertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCACertificateOutcomeCallable RegisterCACertificateCallable(const Model::RegisterCACertificateRequest& request) const;

        /**
         * An Async wrapper for RegisterCACertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCACertificateAsync(const Model::RegisterCACertificateRequest& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Registers a device certificate with IoT in the same <a
         * href="https://docs.aws.amazon.com/iot/latest/apireference/API_CertificateDescription.html#iot-Type-CertificateDescription-certificateMode">certificate
         * mode</a> as the signing CA. If you have more than one CA certificate that has
         * the same subject field, you must specify the CA certificate that was used to
         * sign the device certificate being registered.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RegisterCertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCertificateOutcome RegisterCertificate(const Model::RegisterCertificateRequest& request) const;

        /**
         * A Callable wrapper for RegisterCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCertificateOutcomeCallable RegisterCertificateCallable(const Model::RegisterCertificateRequest& request) const;

        /**
         * An Async wrapper for RegisterCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCertificateAsync(const Model::RegisterCertificateRequest& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Register a certificate that does not have a certificate authority (CA). For
         * supported certificates, consult <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/x509-client-certs.html#x509-cert-algorithms">
         * Certificate signing algorithms supported by IoT</a>. </p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterCertificateWithoutCA">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCertificateWithoutCAOutcome RegisterCertificateWithoutCA(const Model::RegisterCertificateWithoutCARequest& request) const;

        /**
         * A Callable wrapper for RegisterCertificateWithoutCA that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterCertificateWithoutCAOutcomeCallable RegisterCertificateWithoutCACallable(const Model::RegisterCertificateWithoutCARequest& request) const;

        /**
         * An Async wrapper for RegisterCertificateWithoutCA that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterCertificateWithoutCAAsync(const Model::RegisterCertificateWithoutCARequest& request, const RegisterCertificateWithoutCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Provisions a thing in the device registry. RegisterThing calls other IoT
         * control plane APIs. These calls might exceed your account level <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws_service_limits.html#limits_iot">
         * IoT Throttling Limits</a> and cause throttle errors. Please contact <a
         * href="https://console.aws.amazon.com/support/home">Amazon Web Services Customer
         * Support</a> to raise your throttling limits if necessary.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RegisterThing</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RegisterThing">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterThingOutcome RegisterThing(const Model::RegisterThingRequest& request) const;

        /**
         * A Callable wrapper for RegisterThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RegisterThingOutcomeCallable RegisterThingCallable(const Model::RegisterThingRequest& request) const;

        /**
         * An Async wrapper for RegisterThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RegisterThingAsync(const Model::RegisterThingRequest& request, const RegisterThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Rejects a pending certificate transfer. After IoT rejects a certificate
         * transfer, the certificate status changes from <b>PENDING_TRANSFER</b> to
         * <b>INACTIVE</b>.</p> <p>To check for pending certificate transfers, call
         * <a>ListCertificates</a> to enumerate your certificates.</p> <p>This operation
         * can only be called by the transfer destination. After it is called, the
         * certificate will be returned to the source's account in the INACTIVE state.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RejectCertificateTransfer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RejectCertificateTransfer">AWS
         * API Reference</a></p>
         */
        virtual Model::RejectCertificateTransferOutcome RejectCertificateTransfer(const Model::RejectCertificateTransferRequest& request) const;

        /**
         * A Callable wrapper for RejectCertificateTransfer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RejectCertificateTransferOutcomeCallable RejectCertificateTransferCallable(const Model::RejectCertificateTransferRequest& request) const;

        /**
         * An Async wrapper for RejectCertificateTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RejectCertificateTransferAsync(const Model::RejectCertificateTransferRequest& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the given thing from the billing group.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RemoveThingFromBillingGroup</a>
         * action.</p>  <p>This call is asynchronous. It might take several seconds
         * for the detachment to propagate.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RemoveThingFromBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveThingFromBillingGroupOutcome RemoveThingFromBillingGroup(const Model::RemoveThingFromBillingGroupRequest& request) const;

        /**
         * A Callable wrapper for RemoveThingFromBillingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveThingFromBillingGroupOutcomeCallable RemoveThingFromBillingGroupCallable(const Model::RemoveThingFromBillingGroupRequest& request) const;

        /**
         * An Async wrapper for RemoveThingFromBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveThingFromBillingGroupAsync(const Model::RemoveThingFromBillingGroupRequest& request, const RemoveThingFromBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Remove the specified thing from the specified group.</p> <p>You must specify
         * either a <code>thingGroupArn</code> or a <code>thingGroupName</code> to identify
         * the thing group and either a <code>thingArn</code> or a <code>thingName</code>
         * to identify the thing to remove from the thing group. </p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">RemoveThingFromThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/RemoveThingFromThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::RemoveThingFromThingGroupOutcome RemoveThingFromThingGroup(const Model::RemoveThingFromThingGroupRequest& request) const;

        /**
         * A Callable wrapper for RemoveThingFromThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::RemoveThingFromThingGroupOutcomeCallable RemoveThingFromThingGroupCallable(const Model::RemoveThingFromThingGroupRequest& request) const;

        /**
         * An Async wrapper for RemoveThingFromThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void RemoveThingFromThingGroupAsync(const Model::RemoveThingFromThingGroupRequest& request, const RemoveThingFromThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Replaces the rule. You must specify all parameters for the new rule. Creating
         * rules is an administrator-level action. Any user who has permission to create
         * rules will be able to access data processed by the rule.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ReplaceTopicRule</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ReplaceTopicRule">AWS
         * API Reference</a></p>
         */
        virtual Model::ReplaceTopicRuleOutcome ReplaceTopicRule(const Model::ReplaceTopicRuleRequest& request) const;

        /**
         * A Callable wrapper for ReplaceTopicRule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ReplaceTopicRuleOutcomeCallable ReplaceTopicRuleCallable(const Model::ReplaceTopicRuleRequest& request) const;

        /**
         * An Async wrapper for ReplaceTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ReplaceTopicRuleAsync(const Model::ReplaceTopicRuleRequest& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>The query search index.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SearchIndex</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SearchIndex">AWS API
         * Reference</a></p>
         */
        virtual Model::SearchIndexOutcome SearchIndex(const Model::SearchIndexRequest& request) const;

        /**
         * A Callable wrapper for SearchIndex that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SearchIndexOutcomeCallable SearchIndexCallable(const Model::SearchIndexRequest& request) const;

        /**
         * An Async wrapper for SearchIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SearchIndexAsync(const Model::SearchIndexRequest& request, const SearchIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the default authorizer. This will be used if a websocket connection is
         * made without specifying an authorizer.</p> <p>Requires permission to access the
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SetDefaultAuthorizer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetDefaultAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultAuthorizerOutcome SetDefaultAuthorizer(const Model::SetDefaultAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for SetDefaultAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDefaultAuthorizerOutcomeCallable SetDefaultAuthorizerCallable(const Model::SetDefaultAuthorizerRequest& request) const;

        /**
         * An Async wrapper for SetDefaultAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDefaultAuthorizerAsync(const Model::SetDefaultAuthorizerRequest& request, const SetDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the specified version of the specified policy as the policy's default
         * (operative) version. This action affects all certificates to which the policy is
         * attached. To list the principals the policy is attached to, use the
         * <a>ListPrincipalPolicies</a> action.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SetDefaultPolicyVersion</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetDefaultPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::SetDefaultPolicyVersionOutcome SetDefaultPolicyVersion(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for SetDefaultPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetDefaultPolicyVersionOutcomeCallable SetDefaultPolicyVersionCallable(const Model::SetDefaultPolicyVersionRequest& request) const;

        /**
         * An Async wrapper for SetDefaultPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetDefaultPolicyVersionAsync(const Model::SetDefaultPolicyVersionRequest& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the logging options.</p> <p>NOTE: use of this command is not
         * recommended. Use <code>SetV2LoggingOptions</code> instead.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SetLoggingOptions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetLoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::SetLoggingOptionsOutcome SetLoggingOptions(const Model::SetLoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for SetLoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetLoggingOptionsOutcomeCallable SetLoggingOptionsCallable(const Model::SetLoggingOptionsRequest& request) const;

        /**
         * An Async wrapper for SetLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetLoggingOptionsAsync(const Model::SetLoggingOptionsRequest& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the logging level.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SetV2LoggingLevel</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetV2LoggingLevel">AWS
         * API Reference</a></p>
         */
        virtual Model::SetV2LoggingLevelOutcome SetV2LoggingLevel(const Model::SetV2LoggingLevelRequest& request) const;

        /**
         * A Callable wrapper for SetV2LoggingLevel that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetV2LoggingLevelOutcomeCallable SetV2LoggingLevelCallable(const Model::SetV2LoggingLevelRequest& request) const;

        /**
         * An Async wrapper for SetV2LoggingLevel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetV2LoggingLevelAsync(const Model::SetV2LoggingLevelRequest& request, const SetV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Sets the logging options for the V2 logging service.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">SetV2LoggingOptions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/SetV2LoggingOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::SetV2LoggingOptionsOutcome SetV2LoggingOptions(const Model::SetV2LoggingOptionsRequest& request) const;

        /**
         * A Callable wrapper for SetV2LoggingOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::SetV2LoggingOptionsOutcomeCallable SetV2LoggingOptionsCallable(const Model::SetV2LoggingOptionsRequest& request) const;

        /**
         * An Async wrapper for SetV2LoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void SetV2LoggingOptionsAsync(const Model::SetV2LoggingOptionsRequest& request, const SetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts a task that applies a set of mitigation actions to the specified
         * target.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StartAuditMitigationActionsTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartAuditMitigationActionsTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAuditMitigationActionsTaskOutcome StartAuditMitigationActionsTask(const Model::StartAuditMitigationActionsTaskRequest& request) const;

        /**
         * A Callable wrapper for StartAuditMitigationActionsTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartAuditMitigationActionsTaskOutcomeCallable StartAuditMitigationActionsTaskCallable(const Model::StartAuditMitigationActionsTaskRequest& request) const;

        /**
         * An Async wrapper for StartAuditMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartAuditMitigationActionsTaskAsync(const Model::StartAuditMitigationActionsTaskRequest& request, const StartAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Starts a Device Defender ML Detect mitigation actions task. </p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StartDetectMitigationActionsTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartDetectMitigationActionsTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDetectMitigationActionsTaskOutcome StartDetectMitigationActionsTask(const Model::StartDetectMitigationActionsTaskRequest& request) const;

        /**
         * A Callable wrapper for StartDetectMitigationActionsTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartDetectMitigationActionsTaskOutcomeCallable StartDetectMitigationActionsTaskCallable(const Model::StartDetectMitigationActionsTaskRequest& request) const;

        /**
         * An Async wrapper for StartDetectMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartDetectMitigationActionsTaskAsync(const Model::StartDetectMitigationActionsTaskRequest& request, const StartDetectMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Starts an on-demand Device Defender audit.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StartOnDemandAuditTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartOnDemandAuditTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartOnDemandAuditTaskOutcome StartOnDemandAuditTask(const Model::StartOnDemandAuditTaskRequest& request) const;

        /**
         * A Callable wrapper for StartOnDemandAuditTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartOnDemandAuditTaskOutcomeCallable StartOnDemandAuditTaskCallable(const Model::StartOnDemandAuditTaskRequest& request) const;

        /**
         * An Async wrapper for StartOnDemandAuditTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartOnDemandAuditTaskAsync(const Model::StartOnDemandAuditTaskRequest& request, const StartOnDemandAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a bulk thing provisioning task.</p> <p>Requires permission to access
         * the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StartThingRegistrationTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StartThingRegistrationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StartThingRegistrationTaskOutcome StartThingRegistrationTask(const Model::StartThingRegistrationTaskRequest& request) const;

        /**
         * A Callable wrapper for StartThingRegistrationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartThingRegistrationTaskOutcomeCallable StartThingRegistrationTaskCallable(const Model::StartThingRegistrationTaskRequest& request) const;

        /**
         * An Async wrapper for StartThingRegistrationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartThingRegistrationTaskAsync(const Model::StartThingRegistrationTaskRequest& request, const StartThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Cancels a bulk thing provisioning task.</p> <p>Requires permission to access
         * the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">StopThingRegistrationTask</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/StopThingRegistrationTask">AWS
         * API Reference</a></p>
         */
        virtual Model::StopThingRegistrationTaskOutcome StopThingRegistrationTask(const Model::StopThingRegistrationTaskRequest& request) const;

        /**
         * A Callable wrapper for StopThingRegistrationTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StopThingRegistrationTaskOutcomeCallable StopThingRegistrationTaskCallable(const Model::StopThingRegistrationTaskRequest& request) const;

        /**
         * An Async wrapper for StopThingRegistrationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StopThingRegistrationTaskAsync(const Model::StopThingRegistrationTaskRequest& request, const StopThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds to or modifies the tags of the given resource. Tags are metadata which
         * can be used to manage a resource.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">TagResource</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TagResourceOutcomeCallable TagResourceCallable(const Model::TagResourceRequest& request) const;

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TagResourceAsync(const Model::TagResourceRequest& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests if a specified principal is authorized to perform an IoT action on a
         * specified resource. Use this to test and debug the authorization behavior of
         * devices that connect to the IoT device gateway.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">TestAuthorization</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TestAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::TestAuthorizationOutcome TestAuthorization(const Model::TestAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for TestAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestAuthorizationOutcomeCallable TestAuthorizationCallable(const Model::TestAuthorizationRequest& request) const;

        /**
         * An Async wrapper for TestAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestAuthorizationAsync(const Model::TestAuthorizationRequest& request, const TestAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tests a custom authorization behavior by invoking a specified custom
         * authorizer. Use this to test and debug the custom authorization behavior of
         * devices that connect to the IoT device gateway.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">TestInvokeAuthorizer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TestInvokeAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::TestInvokeAuthorizerOutcome TestInvokeAuthorizer(const Model::TestInvokeAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for TestInvokeAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestInvokeAuthorizerOutcomeCallable TestInvokeAuthorizerCallable(const Model::TestInvokeAuthorizerRequest& request) const;

        /**
         * An Async wrapper for TestInvokeAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestInvokeAuthorizerAsync(const Model::TestInvokeAuthorizerRequest& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Transfers the specified certificate to the specified Amazon Web Services
         * account.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">TransferCertificate</a>
         * action.</p> <p>You can cancel the transfer until it is acknowledged by the
         * recipient.</p> <p>No notification is sent to the transfer destination's account.
         * It is up to the caller to notify the transfer target.</p> <p>The certificate
         * being transferred must not be in the ACTIVE state. You can use the
         * <a>UpdateCertificate</a> action to deactivate it.</p> <p>The certificate must
         * not have any policies attached to it. You can use the <a>DetachPolicy</a> action
         * to detach them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/TransferCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::TransferCertificateOutcome TransferCertificate(const Model::TransferCertificateRequest& request) const;

        /**
         * A Callable wrapper for TransferCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TransferCertificateOutcomeCallable TransferCertificateCallable(const Model::TransferCertificateRequest& request) const;

        /**
         * An Async wrapper for TransferCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TransferCertificateAsync(const Model::TransferCertificateRequest& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes the given tags (metadata) from the resource.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UntagResource</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UntagResourceOutcomeCallable UntagResourceCallable(const Model::UntagResourceRequest& request) const;

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UntagResourceAsync(const Model::UntagResourceRequest& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Configures or reconfigures the Device Defender audit settings for this
         * account. Settings include how audit notifications are sent and which audit
         * checks are enabled or disabled.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateAccountAuditConfiguration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAccountAuditConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountAuditConfigurationOutcome UpdateAccountAuditConfiguration(const Model::UpdateAccountAuditConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountAuditConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAccountAuditConfigurationOutcomeCallable UpdateAccountAuditConfigurationCallable(const Model::UpdateAccountAuditConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateAccountAuditConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAccountAuditConfigurationAsync(const Model::UpdateAccountAuditConfigurationRequest& request, const UpdateAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p> Updates a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAuditSuppression">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuditSuppressionOutcome UpdateAuditSuppression(const Model::UpdateAuditSuppressionRequest& request) const;

        /**
         * A Callable wrapper for UpdateAuditSuppression that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAuditSuppressionOutcomeCallable UpdateAuditSuppressionCallable(const Model::UpdateAuditSuppressionRequest& request) const;

        /**
         * An Async wrapper for UpdateAuditSuppression that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAuditSuppressionAsync(const Model::UpdateAuditSuppressionRequest& request, const UpdateAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an authorizer.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateAuthorizer</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAuthorizer">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuthorizerOutcome UpdateAuthorizer(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * A Callable wrapper for UpdateAuthorizer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateAuthorizerOutcomeCallable UpdateAuthorizerCallable(const Model::UpdateAuthorizerRequest& request) const;

        /**
         * An Async wrapper for UpdateAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateAuthorizerAsync(const Model::UpdateAuthorizerRequest& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates information about the billing group.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateBillingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateBillingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBillingGroupOutcome UpdateBillingGroup(const Model::UpdateBillingGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateBillingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateBillingGroupOutcomeCallable UpdateBillingGroupCallable(const Model::UpdateBillingGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateBillingGroupAsync(const Model::UpdateBillingGroupRequest& request, const UpdateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a registered CA certificate.</p> <p>Requires permission to access the
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateCACertificate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCACertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCACertificateOutcome UpdateCACertificate(const Model::UpdateCACertificateRequest& request) const;

        /**
         * A Callable wrapper for UpdateCACertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCACertificateOutcomeCallable UpdateCACertificateCallable(const Model::UpdateCACertificateRequest& request) const;

        /**
         * An Async wrapper for UpdateCACertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCACertificateAsync(const Model::UpdateCACertificateRequest& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the status of the specified certificate. This operation is
         * idempotent.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateCertificate</a>
         * action.</p> <p>Certificates must be in the ACTIVE state to authenticate devices
         * that use a certificate to connect to IoT.</p> <p>Within a few minutes of
         * updating a certificate from the ACTIVE state to any other state, IoT disconnects
         * all devices that used that certificate to connect. Devices cannot use a
         * certificate that is not in the ACTIVE state to reconnect.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCertificateOutcome UpdateCertificate(const Model::UpdateCertificateRequest& request) const;

        /**
         * A Callable wrapper for UpdateCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCertificateOutcomeCallable UpdateCertificateCallable(const Model::UpdateCertificateRequest& request) const;

        /**
         * An Async wrapper for UpdateCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCertificateAsync(const Model::UpdateCertificateRequest& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Device Defender detect custom metric. </p> <p>Requires permission
         * to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateCustomMetric</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCustomMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCustomMetricOutcome UpdateCustomMetric(const Model::UpdateCustomMetricRequest& request) const;

        /**
         * A Callable wrapper for UpdateCustomMetric that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateCustomMetricOutcomeCallable UpdateCustomMetricCallable(const Model::UpdateCustomMetricRequest& request) const;

        /**
         * An Async wrapper for UpdateCustomMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateCustomMetricAsync(const Model::UpdateCustomMetricRequest& request, const UpdateCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the definition for a dimension. You cannot change the type of a
         * dimension after it is created (you can delete it and recreate it).</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateDimension</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDimension">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDimensionOutcome UpdateDimension(const Model::UpdateDimensionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDimension that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDimensionOutcomeCallable UpdateDimensionCallable(const Model::UpdateDimensionRequest& request) const;

        /**
         * An Async wrapper for UpdateDimension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDimensionAsync(const Model::UpdateDimensionRequest& request, const UpdateDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates values stored in the domain configuration. Domain configurations for
         * default endpoints can't be updated.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateDomainConfiguration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDomainConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainConfigurationOutcome UpdateDomainConfiguration(const Model::UpdateDomainConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDomainConfigurationOutcomeCallable UpdateDomainConfigurationCallable(const Model::UpdateDomainConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateDomainConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDomainConfigurationAsync(const Model::UpdateDomainConfigurationRequest& request, const UpdateDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a dynamic thing group.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateDynamicThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateDynamicThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDynamicThingGroupOutcome UpdateDynamicThingGroup(const Model::UpdateDynamicThingGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateDynamicThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateDynamicThingGroupOutcomeCallable UpdateDynamicThingGroupCallable(const Model::UpdateDynamicThingGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateDynamicThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateDynamicThingGroupAsync(const Model::UpdateDynamicThingGroupRequest& request, const UpdateDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the event configurations.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateEventConfigurations</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateEventConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventConfigurationsOutcome UpdateEventConfigurations(const Model::UpdateEventConfigurationsRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateEventConfigurationsOutcomeCallable UpdateEventConfigurationsCallable(const Model::UpdateEventConfigurationsRequest& request) const;

        /**
         * An Async wrapper for UpdateEventConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateEventConfigurationsAsync(const Model::UpdateEventConfigurationsRequest& request, const UpdateEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the data for a fleet metric.</p> <p>Requires permission to access the
         * <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateFleetMetric</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateFleetMetric">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateFleetMetricOutcome UpdateFleetMetric(const Model::UpdateFleetMetricRequest& request) const;

        /**
         * A Callable wrapper for UpdateFleetMetric that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateFleetMetricOutcomeCallable UpdateFleetMetricCallable(const Model::UpdateFleetMetricRequest& request) const;

        /**
         * An Async wrapper for UpdateFleetMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateFleetMetricAsync(const Model::UpdateFleetMetricRequest& request, const UpdateFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the search configuration.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateIndexingConfiguration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateIndexingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateIndexingConfigurationOutcome UpdateIndexingConfiguration(const Model::UpdateIndexingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateIndexingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateIndexingConfigurationOutcomeCallable UpdateIndexingConfigurationCallable(const Model::UpdateIndexingConfigurationRequest& request) const;

        /**
         * An Async wrapper for UpdateIndexingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateIndexingConfigurationAsync(const Model::UpdateIndexingConfigurationRequest& request, const UpdateIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates supported fields of the specified job.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateJob</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateJob">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateJobOutcome UpdateJob(const Model::UpdateJobRequest& request) const;

        /**
         * A Callable wrapper for UpdateJob that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateJobOutcomeCallable UpdateJobCallable(const Model::UpdateJobRequest& request) const;

        /**
         * An Async wrapper for UpdateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateJobAsync(const Model::UpdateJobRequest& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the definition for the specified mitigation action.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateMitigationAction</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateMitigationAction">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateMitigationActionOutcome UpdateMitigationAction(const Model::UpdateMitigationActionRequest& request) const;

        /**
         * A Callable wrapper for UpdateMitigationAction that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateMitigationActionOutcomeCallable UpdateMitigationActionCallable(const Model::UpdateMitigationActionRequest& request) const;

        /**
         * An Async wrapper for UpdateMitigationAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateMitigationActionAsync(const Model::UpdateMitigationActionRequest& request, const UpdateMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a provisioning template.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateProvisioningTemplate</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateProvisioningTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateProvisioningTemplateOutcome UpdateProvisioningTemplate(const Model::UpdateProvisioningTemplateRequest& request) const;

        /**
         * A Callable wrapper for UpdateProvisioningTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateProvisioningTemplateOutcomeCallable UpdateProvisioningTemplateCallable(const Model::UpdateProvisioningTemplateRequest& request) const;

        /**
         * An Async wrapper for UpdateProvisioningTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateProvisioningTemplateAsync(const Model::UpdateProvisioningTemplateRequest& request, const UpdateProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a role alias.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateRoleAlias</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateRoleAlias">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRoleAliasOutcome UpdateRoleAlias(const Model::UpdateRoleAliasRequest& request) const;

        /**
         * A Callable wrapper for UpdateRoleAlias that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRoleAliasOutcomeCallable UpdateRoleAliasCallable(const Model::UpdateRoleAliasRequest& request) const;

        /**
         * An Async wrapper for UpdateRoleAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRoleAliasAsync(const Model::UpdateRoleAliasRequest& request, const UpdateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a scheduled audit, including which checks are performed and how often
         * the audit takes place.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateScheduledAudit</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateScheduledAudit">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateScheduledAuditOutcome UpdateScheduledAudit(const Model::UpdateScheduledAuditRequest& request) const;

        /**
         * A Callable wrapper for UpdateScheduledAudit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateScheduledAuditOutcomeCallable UpdateScheduledAuditCallable(const Model::UpdateScheduledAuditRequest& request) const;

        /**
         * An Async wrapper for UpdateScheduledAudit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateScheduledAuditAsync(const Model::UpdateScheduledAuditRequest& request, const UpdateScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a Device Defender security profile.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateSecurityProfile</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateSecurityProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateSecurityProfileOutcome UpdateSecurityProfile(const Model::UpdateSecurityProfileRequest& request) const;

        /**
         * A Callable wrapper for UpdateSecurityProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateSecurityProfileOutcomeCallable UpdateSecurityProfileCallable(const Model::UpdateSecurityProfileRequest& request) const;

        /**
         * An Async wrapper for UpdateSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateSecurityProfileAsync(const Model::UpdateSecurityProfileRequest& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing stream. The stream version will be incremented by
         * one.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateStream</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateStream">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateStreamOutcome UpdateStream(const Model::UpdateStreamRequest& request) const;

        /**
         * A Callable wrapper for UpdateStream that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateStreamOutcomeCallable UpdateStreamCallable(const Model::UpdateStreamRequest& request) const;

        /**
         * An Async wrapper for UpdateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateStreamAsync(const Model::UpdateStreamRequest& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the data for a thing.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateThing</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThing">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateThingOutcome UpdateThing(const Model::UpdateThingRequest& request) const;

        /**
         * A Callable wrapper for UpdateThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThingOutcomeCallable UpdateThingCallable(const Model::UpdateThingRequest& request) const;

        /**
         * An Async wrapper for UpdateThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThingAsync(const Model::UpdateThingRequest& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Update a thing group.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThingGroupOutcome UpdateThingGroup(const Model::UpdateThingGroupRequest& request) const;

        /**
         * A Callable wrapper for UpdateThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThingGroupOutcomeCallable UpdateThingGroupCallable(const Model::UpdateThingGroupRequest& request) const;

        /**
         * An Async wrapper for UpdateThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThingGroupAsync(const Model::UpdateThingGroupRequest& request, const UpdateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the groups to which the thing belongs.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateThingGroupsForThing</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateThingGroupsForThing">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateThingGroupsForThingOutcome UpdateThingGroupsForThing(const Model::UpdateThingGroupsForThingRequest& request) const;

        /**
         * A Callable wrapper for UpdateThingGroupsForThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateThingGroupsForThingOutcomeCallable UpdateThingGroupsForThingCallable(const Model::UpdateThingGroupsForThingRequest& request) const;

        /**
         * An Async wrapper for UpdateThingGroupsForThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateThingGroupsForThingAsync(const Model::UpdateThingGroupsForThingRequest& request, const UpdateThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a topic rule destination. You use this to change the status, endpoint
         * URL, or confirmation URL of the destination.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateTopicRuleDestination</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateTopicRuleDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTopicRuleDestinationOutcome UpdateTopicRuleDestination(const Model::UpdateTopicRuleDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateTopicRuleDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTopicRuleDestinationOutcomeCallable UpdateTopicRuleDestinationCallable(const Model::UpdateTopicRuleDestinationRequest& request) const;

        /**
         * An Async wrapper for UpdateTopicRuleDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTopicRuleDestinationAsync(const Model::UpdateTopicRuleDestinationRequest& request, const UpdateTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Validates a Device Defender security profile behaviors specification.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ValidateSecurityProfileBehaviors</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ValidateSecurityProfileBehaviors">AWS
         * API Reference</a></p>
         */
        virtual Model::ValidateSecurityProfileBehaviorsOutcome ValidateSecurityProfileBehaviors(const Model::ValidateSecurityProfileBehaviorsRequest& request) const;

        /**
         * A Callable wrapper for ValidateSecurityProfileBehaviors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ValidateSecurityProfileBehaviorsOutcomeCallable ValidateSecurityProfileBehaviorsCallable(const Model::ValidateSecurityProfileBehaviorsRequest& request) const;

        /**
         * An Async wrapper for ValidateSecurityProfileBehaviors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ValidateSecurityProfileBehaviorsAsync(const Model::ValidateSecurityProfileBehaviorsRequest& request, const ValidateSecurityProfileBehaviorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTClient>;
      void init(const IoTClientConfiguration& clientConfiguration);

      IoTClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<IoTEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoT
} // namespace Aws
