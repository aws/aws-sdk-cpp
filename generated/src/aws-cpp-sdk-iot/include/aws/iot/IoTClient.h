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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTClientConfiguration ClientConfigurationType;
      typedef IoTEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTClient(const Aws::IoT::IoTClientConfiguration& clientConfiguration = Aws::IoT::IoTClientConfiguration(),
                  std::shared_ptr<IoTEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<IoTEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::IoT::IoTClientConfiguration& clientConfiguration = Aws::IoT::IoTClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<IoTEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AcceptCertificateTransferRequestT = Model::AcceptCertificateTransferRequest>
        Model::AcceptCertificateTransferOutcomeCallable AcceptCertificateTransferCallable(const AcceptCertificateTransferRequestT& request) const
        {
            return SubmitCallable(&IoTClient::AcceptCertificateTransfer, request);
        }

        /**
         * An Async wrapper for AcceptCertificateTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AcceptCertificateTransferRequestT = Model::AcceptCertificateTransferRequest>
        void AcceptCertificateTransferAsync(const AcceptCertificateTransferRequestT& request, const AcceptCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::AcceptCertificateTransfer, request, handler, context);
        }

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
        template<typename AddThingToBillingGroupRequestT = Model::AddThingToBillingGroupRequest>
        Model::AddThingToBillingGroupOutcomeCallable AddThingToBillingGroupCallable(const AddThingToBillingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::AddThingToBillingGroup, request);
        }

        /**
         * An Async wrapper for AddThingToBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddThingToBillingGroupRequestT = Model::AddThingToBillingGroupRequest>
        void AddThingToBillingGroupAsync(const AddThingToBillingGroupRequestT& request, const AddThingToBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::AddThingToBillingGroup, request, handler, context);
        }

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
        template<typename AddThingToThingGroupRequestT = Model::AddThingToThingGroupRequest>
        Model::AddThingToThingGroupOutcomeCallable AddThingToThingGroupCallable(const AddThingToThingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::AddThingToThingGroup, request);
        }

        /**
         * An Async wrapper for AddThingToThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddThingToThingGroupRequestT = Model::AddThingToThingGroupRequest>
        void AddThingToThingGroupAsync(const AddThingToThingGroupRequestT& request, const AddThingToThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::AddThingToThingGroup, request, handler, context);
        }

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
        template<typename AssociateTargetsWithJobRequestT = Model::AssociateTargetsWithJobRequest>
        Model::AssociateTargetsWithJobOutcomeCallable AssociateTargetsWithJobCallable(const AssociateTargetsWithJobRequestT& request) const
        {
            return SubmitCallable(&IoTClient::AssociateTargetsWithJob, request);
        }

        /**
         * An Async wrapper for AssociateTargetsWithJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateTargetsWithJobRequestT = Model::AssociateTargetsWithJobRequest>
        void AssociateTargetsWithJobAsync(const AssociateTargetsWithJobRequestT& request, const AssociateTargetsWithJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::AssociateTargetsWithJob, request, handler, context);
        }

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
        template<typename AttachPolicyRequestT = Model::AttachPolicyRequest>
        Model::AttachPolicyOutcomeCallable AttachPolicyCallable(const AttachPolicyRequestT& request) const
        {
            return SubmitCallable(&IoTClient::AttachPolicy, request);
        }

        /**
         * An Async wrapper for AttachPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachPolicyRequestT = Model::AttachPolicyRequest>
        void AttachPolicyAsync(const AttachPolicyRequestT& request, const AttachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::AttachPolicy, request, handler, context);
        }

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
        template<typename AttachSecurityProfileRequestT = Model::AttachSecurityProfileRequest>
        Model::AttachSecurityProfileOutcomeCallable AttachSecurityProfileCallable(const AttachSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&IoTClient::AttachSecurityProfile, request);
        }

        /**
         * An Async wrapper for AttachSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachSecurityProfileRequestT = Model::AttachSecurityProfileRequest>
        void AttachSecurityProfileAsync(const AttachSecurityProfileRequestT& request, const AttachSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::AttachSecurityProfile, request, handler, context);
        }

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
        template<typename AttachThingPrincipalRequestT = Model::AttachThingPrincipalRequest>
        Model::AttachThingPrincipalOutcomeCallable AttachThingPrincipalCallable(const AttachThingPrincipalRequestT& request) const
        {
            return SubmitCallable(&IoTClient::AttachThingPrincipal, request);
        }

        /**
         * An Async wrapper for AttachThingPrincipal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachThingPrincipalRequestT = Model::AttachThingPrincipalRequest>
        void AttachThingPrincipalAsync(const AttachThingPrincipalRequestT& request, const AttachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::AttachThingPrincipal, request, handler, context);
        }

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
        template<typename CancelAuditMitigationActionsTaskRequestT = Model::CancelAuditMitigationActionsTaskRequest>
        Model::CancelAuditMitigationActionsTaskOutcomeCallable CancelAuditMitigationActionsTaskCallable(const CancelAuditMitigationActionsTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CancelAuditMitigationActionsTask, request);
        }

        /**
         * An Async wrapper for CancelAuditMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelAuditMitigationActionsTaskRequestT = Model::CancelAuditMitigationActionsTaskRequest>
        void CancelAuditMitigationActionsTaskAsync(const CancelAuditMitigationActionsTaskRequestT& request, const CancelAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CancelAuditMitigationActionsTask, request, handler, context);
        }

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
        template<typename CancelAuditTaskRequestT = Model::CancelAuditTaskRequest>
        Model::CancelAuditTaskOutcomeCallable CancelAuditTaskCallable(const CancelAuditTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CancelAuditTask, request);
        }

        /**
         * An Async wrapper for CancelAuditTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelAuditTaskRequestT = Model::CancelAuditTaskRequest>
        void CancelAuditTaskAsync(const CancelAuditTaskRequestT& request, const CancelAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CancelAuditTask, request, handler, context);
        }

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
        template<typename CancelCertificateTransferRequestT = Model::CancelCertificateTransferRequest>
        Model::CancelCertificateTransferOutcomeCallable CancelCertificateTransferCallable(const CancelCertificateTransferRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CancelCertificateTransfer, request);
        }

        /**
         * An Async wrapper for CancelCertificateTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelCertificateTransferRequestT = Model::CancelCertificateTransferRequest>
        void CancelCertificateTransferAsync(const CancelCertificateTransferRequestT& request, const CancelCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CancelCertificateTransfer, request, handler, context);
        }

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
        template<typename CancelDetectMitigationActionsTaskRequestT = Model::CancelDetectMitigationActionsTaskRequest>
        Model::CancelDetectMitigationActionsTaskOutcomeCallable CancelDetectMitigationActionsTaskCallable(const CancelDetectMitigationActionsTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CancelDetectMitigationActionsTask, request);
        }

        /**
         * An Async wrapper for CancelDetectMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelDetectMitigationActionsTaskRequestT = Model::CancelDetectMitigationActionsTaskRequest>
        void CancelDetectMitigationActionsTaskAsync(const CancelDetectMitigationActionsTaskRequestT& request, const CancelDetectMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CancelDetectMitigationActionsTask, request, handler, context);
        }

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
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        Model::CancelJobOutcomeCallable CancelJobCallable(const CancelJobRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CancelJob, request);
        }

        /**
         * An Async wrapper for CancelJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelJobRequestT = Model::CancelJobRequest>
        void CancelJobAsync(const CancelJobRequestT& request, const CancelJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CancelJob, request, handler, context);
        }

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
        template<typename CancelJobExecutionRequestT = Model::CancelJobExecutionRequest>
        Model::CancelJobExecutionOutcomeCallable CancelJobExecutionCallable(const CancelJobExecutionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CancelJobExecution, request);
        }

        /**
         * An Async wrapper for CancelJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CancelJobExecutionRequestT = Model::CancelJobExecutionRequest>
        void CancelJobExecutionAsync(const CancelJobExecutionRequestT& request, const CancelJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CancelJobExecution, request, handler, context);
        }

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
        template<typename ClearDefaultAuthorizerRequestT = Model::ClearDefaultAuthorizerRequest>
        Model::ClearDefaultAuthorizerOutcomeCallable ClearDefaultAuthorizerCallable(const ClearDefaultAuthorizerRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ClearDefaultAuthorizer, request);
        }

        /**
         * An Async wrapper for ClearDefaultAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ClearDefaultAuthorizerRequestT = Model::ClearDefaultAuthorizerRequest>
        void ClearDefaultAuthorizerAsync(const ClearDefaultAuthorizerRequestT& request, const ClearDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ClearDefaultAuthorizer, request, handler, context);
        }

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
        template<typename ConfirmTopicRuleDestinationRequestT = Model::ConfirmTopicRuleDestinationRequest>
        Model::ConfirmTopicRuleDestinationOutcomeCallable ConfirmTopicRuleDestinationCallable(const ConfirmTopicRuleDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ConfirmTopicRuleDestination, request);
        }

        /**
         * An Async wrapper for ConfirmTopicRuleDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ConfirmTopicRuleDestinationRequestT = Model::ConfirmTopicRuleDestinationRequest>
        void ConfirmTopicRuleDestinationAsync(const ConfirmTopicRuleDestinationRequestT& request, const ConfirmTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ConfirmTopicRuleDestination, request, handler, context);
        }

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
        template<typename CreateAuditSuppressionRequestT = Model::CreateAuditSuppressionRequest>
        Model::CreateAuditSuppressionOutcomeCallable CreateAuditSuppressionCallable(const CreateAuditSuppressionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateAuditSuppression, request);
        }

        /**
         * An Async wrapper for CreateAuditSuppression that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAuditSuppressionRequestT = Model::CreateAuditSuppressionRequest>
        void CreateAuditSuppressionAsync(const CreateAuditSuppressionRequestT& request, const CreateAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateAuditSuppression, request, handler, context);
        }

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
        template<typename CreateAuthorizerRequestT = Model::CreateAuthorizerRequest>
        Model::CreateAuthorizerOutcomeCallable CreateAuthorizerCallable(const CreateAuthorizerRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateAuthorizer, request);
        }

        /**
         * An Async wrapper for CreateAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAuthorizerRequestT = Model::CreateAuthorizerRequest>
        void CreateAuthorizerAsync(const CreateAuthorizerRequestT& request, const CreateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateAuthorizer, request, handler, context);
        }

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
        template<typename CreateBillingGroupRequestT = Model::CreateBillingGroupRequest>
        Model::CreateBillingGroupOutcomeCallable CreateBillingGroupCallable(const CreateBillingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateBillingGroup, request);
        }

        /**
         * An Async wrapper for CreateBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBillingGroupRequestT = Model::CreateBillingGroupRequest>
        void CreateBillingGroupAsync(const CreateBillingGroupRequestT& request, const CreateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateBillingGroup, request, handler, context);
        }

        /**
         * <p>Creates an X.509 certificate using the specified certificate signing request.
         * </p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateCertificateFromCsr</a>
         * action. </p>  <p>The CSR must include a public key that is either an RSA
         * key with a length of at least 2048 bits or an ECC key from NIST P-256, NIST
         * P-384, or NIST P-521 curves. For supported certificates, consult <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/x509-client-certs.html#x509-cert-algorithms">
         * Certificate signing algorithms supported by IoT</a>. </p>  
         * <p>Reusing the same certificate signing request (CSR) results in a distinct
         * certificate.</p>  <p>You can create multiple certificates in a batch by
         * creating a directory, copying multiple <code>.csr</code> files into that
         * directory, and then specifying that directory on the command line. The following
         * commands show how to create a batch of certificates given a batch of CSRs. In
         * the following commands, we assume that a set of CSRs are located inside of the
         * directory my-csr-directory:</p> <p>On Linux and OS X, the command is: </p> <p>
         * <code>$ ls my-csr-directory/ | xargs -I {} aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/{}</code> </p> <p>This
         * command lists all of the CSRs in my-csr-directory and pipes each CSR file name
         * to the <code>aws iot create-certificate-from-csr</code> Amazon Web Services CLI
         * command to create a certificate for the corresponding CSR. </p> <p>You can also
         * run the <code>aws iot create-certificate-from-csr</code> part of the command in
         * parallel to speed up the certificate creation process:</p> <p> <code>$ ls
         * my-csr-directory/ | xargs -P 10 -I {} aws iot create-certificate-from-csr
         * --certificate-signing-request file://my-csr-directory/{} </code> </p> <p>On
         * Windows PowerShell, the command to create certificates for all CSRs in
         * my-csr-directory is:</p> <p> <code>&gt; ls -Name my-csr-directory | %{aws iot
         * create-certificate-from-csr --certificate-signing-request
         * file://my-csr-directory/$_} </code> </p> <p>On a Windows command prompt, the
         * command to create certificates for all CSRs in my-csr-directory is:</p> <p>
         * <code>&gt; forfiles /p my-csr-directory /c "cmd /c aws iot
         * create-certificate-from-csr --certificate-signing-request file://@path" </code>
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateCertificateFromCsr">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateFromCsrOutcome CreateCertificateFromCsr(const Model::CreateCertificateFromCsrRequest& request) const;

        /**
         * A Callable wrapper for CreateCertificateFromCsr that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCertificateFromCsrRequestT = Model::CreateCertificateFromCsrRequest>
        Model::CreateCertificateFromCsrOutcomeCallable CreateCertificateFromCsrCallable(const CreateCertificateFromCsrRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateCertificateFromCsr, request);
        }

        /**
         * An Async wrapper for CreateCertificateFromCsr that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCertificateFromCsrRequestT = Model::CreateCertificateFromCsrRequest>
        void CreateCertificateFromCsrAsync(const CreateCertificateFromCsrRequestT& request, const CreateCertificateFromCsrResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateCertificateFromCsr, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Web Services IoT Core certificate provider. You can use
         * Amazon Web Services IoT Core certificate provider to customize how to sign a
         * certificate signing request (CSR) in IoT fleet provisioning. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/provisioning-cert-provider.html">Customizing
         * certificate signing using Amazon Web Services IoT Core certificate provider</a>
         * from <i>Amazon Web Services IoT Core Developer Guide</i>.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateCertificateProvider</a>
         * action.</p>  <p>After you create a certificate provider, the behavior
         * of <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/fleet-provision-api.html#create-cert-csr">
         * <code>CreateCertificateFromCsr</code> API for fleet provisioning</a> will change
         * and all API calls to <code>CreateCertificateFromCsr</code> will invoke the
         * certificate provider to create the certificates. It can take up to a few minutes
         * for this behavior to change after a certificate provider is created.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateCertificateProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateProviderOutcome CreateCertificateProvider(const Model::CreateCertificateProviderRequest& request) const;

        /**
         * A Callable wrapper for CreateCertificateProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCertificateProviderRequestT = Model::CreateCertificateProviderRequest>
        Model::CreateCertificateProviderOutcomeCallable CreateCertificateProviderCallable(const CreateCertificateProviderRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateCertificateProvider, request);
        }

        /**
         * An Async wrapper for CreateCertificateProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCertificateProviderRequestT = Model::CreateCertificateProviderRequest>
        void CreateCertificateProviderAsync(const CreateCertificateProviderRequestT& request, const CreateCertificateProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateCertificateProvider, request, handler, context);
        }

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
        template<typename CreateCustomMetricRequestT = Model::CreateCustomMetricRequest>
        Model::CreateCustomMetricOutcomeCallable CreateCustomMetricCallable(const CreateCustomMetricRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateCustomMetric, request);
        }

        /**
         * An Async wrapper for CreateCustomMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCustomMetricRequestT = Model::CreateCustomMetricRequest>
        void CreateCustomMetricAsync(const CreateCustomMetricRequestT& request, const CreateCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateCustomMetric, request, handler, context);
        }

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
        template<typename CreateDimensionRequestT = Model::CreateDimensionRequest>
        Model::CreateDimensionOutcomeCallable CreateDimensionCallable(const CreateDimensionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateDimension, request);
        }

        /**
         * An Async wrapper for CreateDimension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDimensionRequestT = Model::CreateDimensionRequest>
        void CreateDimensionAsync(const CreateDimensionRequestT& request, const CreateDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateDimension, request, handler, context);
        }

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
        template<typename CreateDomainConfigurationRequestT = Model::CreateDomainConfigurationRequest>
        Model::CreateDomainConfigurationOutcomeCallable CreateDomainConfigurationCallable(const CreateDomainConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateDomainConfiguration, request);
        }

        /**
         * An Async wrapper for CreateDomainConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainConfigurationRequestT = Model::CreateDomainConfigurationRequest>
        void CreateDomainConfigurationAsync(const CreateDomainConfigurationRequestT& request, const CreateDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateDomainConfiguration, request, handler, context);
        }

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
        template<typename CreateDynamicThingGroupRequestT = Model::CreateDynamicThingGroupRequest>
        Model::CreateDynamicThingGroupOutcomeCallable CreateDynamicThingGroupCallable(const CreateDynamicThingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateDynamicThingGroup, request);
        }

        /**
         * An Async wrapper for CreateDynamicThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDynamicThingGroupRequestT = Model::CreateDynamicThingGroupRequest>
        void CreateDynamicThingGroupAsync(const CreateDynamicThingGroupRequestT& request, const CreateDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateDynamicThingGroup, request, handler, context);
        }

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
        template<typename CreateFleetMetricRequestT = Model::CreateFleetMetricRequest>
        Model::CreateFleetMetricOutcomeCallable CreateFleetMetricCallable(const CreateFleetMetricRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateFleetMetric, request);
        }

        /**
         * An Async wrapper for CreateFleetMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFleetMetricRequestT = Model::CreateFleetMetricRequest>
        void CreateFleetMetricAsync(const CreateFleetMetricRequestT& request, const CreateFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateFleetMetric, request, handler, context);
        }

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
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        Model::CreateJobOutcomeCallable CreateJobCallable(const CreateJobRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateJob, request);
        }

        /**
         * An Async wrapper for CreateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobRequestT = Model::CreateJobRequest>
        void CreateJobAsync(const CreateJobRequestT& request, const CreateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateJob, request, handler, context);
        }

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
        template<typename CreateJobTemplateRequestT = Model::CreateJobTemplateRequest>
        Model::CreateJobTemplateOutcomeCallable CreateJobTemplateCallable(const CreateJobTemplateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateJobTemplate, request);
        }

        /**
         * An Async wrapper for CreateJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateJobTemplateRequestT = Model::CreateJobTemplateRequest>
        void CreateJobTemplateAsync(const CreateJobTemplateRequestT& request, const CreateJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateJobTemplate, request, handler, context);
        }

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
        template<typename CreateKeysAndCertificateRequestT = Model::CreateKeysAndCertificateRequest>
        Model::CreateKeysAndCertificateOutcomeCallable CreateKeysAndCertificateCallable(const CreateKeysAndCertificateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateKeysAndCertificate, request);
        }

        /**
         * An Async wrapper for CreateKeysAndCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKeysAndCertificateRequestT = Model::CreateKeysAndCertificateRequest>
        void CreateKeysAndCertificateAsync(const CreateKeysAndCertificateRequestT& request, const CreateKeysAndCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateKeysAndCertificate, request, handler, context);
        }

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
        template<typename CreateMitigationActionRequestT = Model::CreateMitigationActionRequest>
        Model::CreateMitigationActionOutcomeCallable CreateMitigationActionCallable(const CreateMitigationActionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateMitigationAction, request);
        }

        /**
         * An Async wrapper for CreateMitigationAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateMitigationActionRequestT = Model::CreateMitigationActionRequest>
        void CreateMitigationActionAsync(const CreateMitigationActionRequestT& request, const CreateMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateMitigationAction, request, handler, context);
        }

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
        template<typename CreateOTAUpdateRequestT = Model::CreateOTAUpdateRequest>
        Model::CreateOTAUpdateOutcomeCallable CreateOTAUpdateCallable(const CreateOTAUpdateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateOTAUpdate, request);
        }

        /**
         * An Async wrapper for CreateOTAUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOTAUpdateRequestT = Model::CreateOTAUpdateRequest>
        void CreateOTAUpdateAsync(const CreateOTAUpdateRequestT& request, const CreateOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateOTAUpdate, request, handler, context);
        }

        /**
         * <p>Creates an IoT software package that can be deployed to your fleet.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreatePackage</a>
         * and <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetIndexingConfiguration</a>
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageOutcome CreatePackage(const Model::CreatePackageRequest& request) const;

        /**
         * A Callable wrapper for CreatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePackageRequestT = Model::CreatePackageRequest>
        Model::CreatePackageOutcomeCallable CreatePackageCallable(const CreatePackageRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreatePackage, request);
        }

        /**
         * An Async wrapper for CreatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePackageRequestT = Model::CreatePackageRequest>
        void CreatePackageAsync(const CreatePackageRequestT& request, const CreatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreatePackage, request, handler, context);
        }

        /**
         * <p>Creates a new version for an existing IoT software package.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreatePackageVersion</a>
         * and <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetIndexingConfiguration</a>
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreatePackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreatePackageVersionOutcome CreatePackageVersion(const Model::CreatePackageVersionRequest& request) const;

        /**
         * A Callable wrapper for CreatePackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreatePackageVersionRequestT = Model::CreatePackageVersionRequest>
        Model::CreatePackageVersionOutcomeCallable CreatePackageVersionCallable(const CreatePackageVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreatePackageVersion, request);
        }

        /**
         * An Async wrapper for CreatePackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePackageVersionRequestT = Model::CreatePackageVersionRequest>
        void CreatePackageVersionAsync(const CreatePackageVersionRequestT& request, const CreatePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreatePackageVersion, request, handler, context);
        }

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
        template<typename CreatePolicyRequestT = Model::CreatePolicyRequest>
        Model::CreatePolicyOutcomeCallable CreatePolicyCallable(const CreatePolicyRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreatePolicy, request);
        }

        /**
         * An Async wrapper for CreatePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePolicyRequestT = Model::CreatePolicyRequest>
        void CreatePolicyAsync(const CreatePolicyRequestT& request, const CreatePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreatePolicy, request, handler, context);
        }

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
        template<typename CreatePolicyVersionRequestT = Model::CreatePolicyVersionRequest>
        Model::CreatePolicyVersionOutcomeCallable CreatePolicyVersionCallable(const CreatePolicyVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreatePolicyVersion, request);
        }

        /**
         * An Async wrapper for CreatePolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreatePolicyVersionRequestT = Model::CreatePolicyVersionRequest>
        void CreatePolicyVersionAsync(const CreatePolicyVersionRequestT& request, const CreatePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreatePolicyVersion, request, handler, context);
        }

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
        template<typename CreateProvisioningClaimRequestT = Model::CreateProvisioningClaimRequest>
        Model::CreateProvisioningClaimOutcomeCallable CreateProvisioningClaimCallable(const CreateProvisioningClaimRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateProvisioningClaim, request);
        }

        /**
         * An Async wrapper for CreateProvisioningClaim that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProvisioningClaimRequestT = Model::CreateProvisioningClaimRequest>
        void CreateProvisioningClaimAsync(const CreateProvisioningClaimRequestT& request, const CreateProvisioningClaimResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateProvisioningClaim, request, handler, context);
        }

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
        template<typename CreateProvisioningTemplateRequestT = Model::CreateProvisioningTemplateRequest>
        Model::CreateProvisioningTemplateOutcomeCallable CreateProvisioningTemplateCallable(const CreateProvisioningTemplateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateProvisioningTemplate, request);
        }

        /**
         * An Async wrapper for CreateProvisioningTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProvisioningTemplateRequestT = Model::CreateProvisioningTemplateRequest>
        void CreateProvisioningTemplateAsync(const CreateProvisioningTemplateRequestT& request, const CreateProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateProvisioningTemplate, request, handler, context);
        }

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
        template<typename CreateProvisioningTemplateVersionRequestT = Model::CreateProvisioningTemplateVersionRequest>
        Model::CreateProvisioningTemplateVersionOutcomeCallable CreateProvisioningTemplateVersionCallable(const CreateProvisioningTemplateVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateProvisioningTemplateVersion, request);
        }

        /**
         * An Async wrapper for CreateProvisioningTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProvisioningTemplateVersionRequestT = Model::CreateProvisioningTemplateVersionRequest>
        void CreateProvisioningTemplateVersionAsync(const CreateProvisioningTemplateVersionRequestT& request, const CreateProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateProvisioningTemplateVersion, request, handler, context);
        }

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
        template<typename CreateRoleAliasRequestT = Model::CreateRoleAliasRequest>
        Model::CreateRoleAliasOutcomeCallable CreateRoleAliasCallable(const CreateRoleAliasRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateRoleAlias, request);
        }

        /**
         * An Async wrapper for CreateRoleAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRoleAliasRequestT = Model::CreateRoleAliasRequest>
        void CreateRoleAliasAsync(const CreateRoleAliasRequestT& request, const CreateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateRoleAlias, request, handler, context);
        }

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
        template<typename CreateScheduledAuditRequestT = Model::CreateScheduledAuditRequest>
        Model::CreateScheduledAuditOutcomeCallable CreateScheduledAuditCallable(const CreateScheduledAuditRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateScheduledAudit, request);
        }

        /**
         * An Async wrapper for CreateScheduledAudit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateScheduledAuditRequestT = Model::CreateScheduledAuditRequest>
        void CreateScheduledAuditAsync(const CreateScheduledAuditRequestT& request, const CreateScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateScheduledAudit, request, handler, context);
        }

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
        template<typename CreateSecurityProfileRequestT = Model::CreateSecurityProfileRequest>
        Model::CreateSecurityProfileOutcomeCallable CreateSecurityProfileCallable(const CreateSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateSecurityProfile, request);
        }

        /**
         * An Async wrapper for CreateSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateSecurityProfileRequestT = Model::CreateSecurityProfileRequest>
        void CreateSecurityProfileAsync(const CreateSecurityProfileRequestT& request, const CreateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateSecurityProfile, request, handler, context);
        }

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
        template<typename CreateStreamRequestT = Model::CreateStreamRequest>
        Model::CreateStreamOutcomeCallable CreateStreamCallable(const CreateStreamRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateStream, request);
        }

        /**
         * An Async wrapper for CreateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateStreamRequestT = Model::CreateStreamRequest>
        void CreateStreamAsync(const CreateStreamRequestT& request, const CreateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateStream, request, handler, context);
        }

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
        template<typename CreateThingRequestT = Model::CreateThingRequest>
        Model::CreateThingOutcomeCallable CreateThingCallable(const CreateThingRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateThing, request);
        }

        /**
         * An Async wrapper for CreateThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateThingRequestT = Model::CreateThingRequest>
        void CreateThingAsync(const CreateThingRequestT& request, const CreateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateThing, request, handler, context);
        }

        /**
         * <p>Create a thing group.</p>  <p>This is a control plane operation. See <a
         * href="https://docs.aws.amazon.com/iot/latest/developerguide/iot-authorization.html">Authorization</a>
         * for information about authorizing control plane actions.</p> <p>If the
         * <code>ThingGroup</code> that you create has the exact same attributes as an
         * existing <code>ThingGroup</code>, you will get a 200 success response. </p>
         *  <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">CreateThingGroup</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CreateThingGroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateThingGroupOutcome CreateThingGroup(const Model::CreateThingGroupRequest& request) const;

        /**
         * A Callable wrapper for CreateThingGroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateThingGroupRequestT = Model::CreateThingGroupRequest>
        Model::CreateThingGroupOutcomeCallable CreateThingGroupCallable(const CreateThingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateThingGroup, request);
        }

        /**
         * An Async wrapper for CreateThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateThingGroupRequestT = Model::CreateThingGroupRequest>
        void CreateThingGroupAsync(const CreateThingGroupRequestT& request, const CreateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateThingGroup, request, handler, context);
        }

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
        template<typename CreateThingTypeRequestT = Model::CreateThingTypeRequest>
        Model::CreateThingTypeOutcomeCallable CreateThingTypeCallable(const CreateThingTypeRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateThingType, request);
        }

        /**
         * An Async wrapper for CreateThingType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateThingTypeRequestT = Model::CreateThingTypeRequest>
        void CreateThingTypeAsync(const CreateThingTypeRequestT& request, const CreateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateThingType, request, handler, context);
        }

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
        template<typename CreateTopicRuleRequestT = Model::CreateTopicRuleRequest>
        Model::CreateTopicRuleOutcomeCallable CreateTopicRuleCallable(const CreateTopicRuleRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateTopicRule, request);
        }

        /**
         * An Async wrapper for CreateTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTopicRuleRequestT = Model::CreateTopicRuleRequest>
        void CreateTopicRuleAsync(const CreateTopicRuleRequestT& request, const CreateTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateTopicRule, request, handler, context);
        }

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
        template<typename CreateTopicRuleDestinationRequestT = Model::CreateTopicRuleDestinationRequest>
        Model::CreateTopicRuleDestinationOutcomeCallable CreateTopicRuleDestinationCallable(const CreateTopicRuleDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::CreateTopicRuleDestination, request);
        }

        /**
         * An Async wrapper for CreateTopicRuleDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateTopicRuleDestinationRequestT = Model::CreateTopicRuleDestinationRequest>
        void CreateTopicRuleDestinationAsync(const CreateTopicRuleDestinationRequestT& request, const CreateTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::CreateTopicRuleDestination, request, handler, context);
        }

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
        template<typename DeleteAccountAuditConfigurationRequestT = Model::DeleteAccountAuditConfigurationRequest>
        Model::DeleteAccountAuditConfigurationOutcomeCallable DeleteAccountAuditConfigurationCallable(const DeleteAccountAuditConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteAccountAuditConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteAccountAuditConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccountAuditConfigurationRequestT = Model::DeleteAccountAuditConfigurationRequest>
        void DeleteAccountAuditConfigurationAsync(const DeleteAccountAuditConfigurationRequestT& request, const DeleteAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteAccountAuditConfiguration, request, handler, context);
        }

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
        template<typename DeleteAuditSuppressionRequestT = Model::DeleteAuditSuppressionRequest>
        Model::DeleteAuditSuppressionOutcomeCallable DeleteAuditSuppressionCallable(const DeleteAuditSuppressionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteAuditSuppression, request);
        }

        /**
         * An Async wrapper for DeleteAuditSuppression that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAuditSuppressionRequestT = Model::DeleteAuditSuppressionRequest>
        void DeleteAuditSuppressionAsync(const DeleteAuditSuppressionRequestT& request, const DeleteAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteAuditSuppression, request, handler, context);
        }

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
        template<typename DeleteAuthorizerRequestT = Model::DeleteAuthorizerRequest>
        Model::DeleteAuthorizerOutcomeCallable DeleteAuthorizerCallable(const DeleteAuthorizerRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteAuthorizer, request);
        }

        /**
         * An Async wrapper for DeleteAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAuthorizerRequestT = Model::DeleteAuthorizerRequest>
        void DeleteAuthorizerAsync(const DeleteAuthorizerRequestT& request, const DeleteAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteAuthorizer, request, handler, context);
        }

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
        template<typename DeleteBillingGroupRequestT = Model::DeleteBillingGroupRequest>
        Model::DeleteBillingGroupOutcomeCallable DeleteBillingGroupCallable(const DeleteBillingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteBillingGroup, request);
        }

        /**
         * An Async wrapper for DeleteBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBillingGroupRequestT = Model::DeleteBillingGroupRequest>
        void DeleteBillingGroupAsync(const DeleteBillingGroupRequestT& request, const DeleteBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteBillingGroup, request, handler, context);
        }

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
        template<typename DeleteCACertificateRequestT = Model::DeleteCACertificateRequest>
        Model::DeleteCACertificateOutcomeCallable DeleteCACertificateCallable(const DeleteCACertificateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteCACertificate, request);
        }

        /**
         * An Async wrapper for DeleteCACertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCACertificateRequestT = Model::DeleteCACertificateRequest>
        void DeleteCACertificateAsync(const DeleteCACertificateRequestT& request, const DeleteCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteCACertificate, request, handler, context);
        }

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
        template<typename DeleteCertificateRequestT = Model::DeleteCertificateRequest>
        Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const DeleteCertificateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteCertificate, request);
        }

        /**
         * An Async wrapper for DeleteCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCertificateRequestT = Model::DeleteCertificateRequest>
        void DeleteCertificateAsync(const DeleteCertificateRequestT& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteCertificate, request, handler, context);
        }

        /**
         * <p>Deletes a certificate provider.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeleteCertificateProvider</a>
         * action. </p> <p>If you delete the certificate provider resource, the behavior of
         * <code>CreateCertificateFromCsr</code> will resume, and IoT will create
         * certificates signed by IoT from a certificate signing request
         * (CSR).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteCertificateProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateProviderOutcome DeleteCertificateProvider(const Model::DeleteCertificateProviderRequest& request) const;

        /**
         * A Callable wrapper for DeleteCertificateProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCertificateProviderRequestT = Model::DeleteCertificateProviderRequest>
        Model::DeleteCertificateProviderOutcomeCallable DeleteCertificateProviderCallable(const DeleteCertificateProviderRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteCertificateProvider, request);
        }

        /**
         * An Async wrapper for DeleteCertificateProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCertificateProviderRequestT = Model::DeleteCertificateProviderRequest>
        void DeleteCertificateProviderAsync(const DeleteCertificateProviderRequestT& request, const DeleteCertificateProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteCertificateProvider, request, handler, context);
        }

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
        template<typename DeleteCustomMetricRequestT = Model::DeleteCustomMetricRequest>
        Model::DeleteCustomMetricOutcomeCallable DeleteCustomMetricCallable(const DeleteCustomMetricRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteCustomMetric, request);
        }

        /**
         * An Async wrapper for DeleteCustomMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCustomMetricRequestT = Model::DeleteCustomMetricRequest>
        void DeleteCustomMetricAsync(const DeleteCustomMetricRequestT& request, const DeleteCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteCustomMetric, request, handler, context);
        }

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
        template<typename DeleteDimensionRequestT = Model::DeleteDimensionRequest>
        Model::DeleteDimensionOutcomeCallable DeleteDimensionCallable(const DeleteDimensionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteDimension, request);
        }

        /**
         * An Async wrapper for DeleteDimension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDimensionRequestT = Model::DeleteDimensionRequest>
        void DeleteDimensionAsync(const DeleteDimensionRequestT& request, const DeleteDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteDimension, request, handler, context);
        }

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
        template<typename DeleteDomainConfigurationRequestT = Model::DeleteDomainConfigurationRequest>
        Model::DeleteDomainConfigurationOutcomeCallable DeleteDomainConfigurationCallable(const DeleteDomainConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteDomainConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteDomainConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainConfigurationRequestT = Model::DeleteDomainConfigurationRequest>
        void DeleteDomainConfigurationAsync(const DeleteDomainConfigurationRequestT& request, const DeleteDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteDomainConfiguration, request, handler, context);
        }

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
        template<typename DeleteDynamicThingGroupRequestT = Model::DeleteDynamicThingGroupRequest>
        Model::DeleteDynamicThingGroupOutcomeCallable DeleteDynamicThingGroupCallable(const DeleteDynamicThingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteDynamicThingGroup, request);
        }

        /**
         * An Async wrapper for DeleteDynamicThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDynamicThingGroupRequestT = Model::DeleteDynamicThingGroupRequest>
        void DeleteDynamicThingGroupAsync(const DeleteDynamicThingGroupRequestT& request, const DeleteDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteDynamicThingGroup, request, handler, context);
        }

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
        template<typename DeleteFleetMetricRequestT = Model::DeleteFleetMetricRequest>
        Model::DeleteFleetMetricOutcomeCallable DeleteFleetMetricCallable(const DeleteFleetMetricRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteFleetMetric, request);
        }

        /**
         * An Async wrapper for DeleteFleetMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFleetMetricRequestT = Model::DeleteFleetMetricRequest>
        void DeleteFleetMetricAsync(const DeleteFleetMetricRequestT& request, const DeleteFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteFleetMetric, request, handler, context);
        }

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
        template<typename DeleteJobRequestT = Model::DeleteJobRequest>
        Model::DeleteJobOutcomeCallable DeleteJobCallable(const DeleteJobRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteJob, request);
        }

        /**
         * An Async wrapper for DeleteJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobRequestT = Model::DeleteJobRequest>
        void DeleteJobAsync(const DeleteJobRequestT& request, const DeleteJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteJob, request, handler, context);
        }

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
        template<typename DeleteJobExecutionRequestT = Model::DeleteJobExecutionRequest>
        Model::DeleteJobExecutionOutcomeCallable DeleteJobExecutionCallable(const DeleteJobExecutionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteJobExecution, request);
        }

        /**
         * An Async wrapper for DeleteJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobExecutionRequestT = Model::DeleteJobExecutionRequest>
        void DeleteJobExecutionAsync(const DeleteJobExecutionRequestT& request, const DeleteJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteJobExecution, request, handler, context);
        }

        /**
         * <p>Deletes the specified job template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeleteJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteJobTemplateOutcome DeleteJobTemplate(const Model::DeleteJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for DeleteJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteJobTemplateRequestT = Model::DeleteJobTemplateRequest>
        Model::DeleteJobTemplateOutcomeCallable DeleteJobTemplateCallable(const DeleteJobTemplateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteJobTemplate, request);
        }

        /**
         * An Async wrapper for DeleteJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteJobTemplateRequestT = Model::DeleteJobTemplateRequest>
        void DeleteJobTemplateAsync(const DeleteJobTemplateRequestT& request, const DeleteJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteJobTemplate, request, handler, context);
        }

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
        template<typename DeleteMitigationActionRequestT = Model::DeleteMitigationActionRequest>
        Model::DeleteMitigationActionOutcomeCallable DeleteMitigationActionCallable(const DeleteMitigationActionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteMitigationAction, request);
        }

        /**
         * An Async wrapper for DeleteMitigationAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteMitigationActionRequestT = Model::DeleteMitigationActionRequest>
        void DeleteMitigationActionAsync(const DeleteMitigationActionRequestT& request, const DeleteMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteMitigationAction, request, handler, context);
        }

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
        template<typename DeleteOTAUpdateRequestT = Model::DeleteOTAUpdateRequest>
        Model::DeleteOTAUpdateOutcomeCallable DeleteOTAUpdateCallable(const DeleteOTAUpdateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteOTAUpdate, request);
        }

        /**
         * An Async wrapper for DeleteOTAUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOTAUpdateRequestT = Model::DeleteOTAUpdateRequest>
        void DeleteOTAUpdateAsync(const DeleteOTAUpdateRequestT& request, const DeleteOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteOTAUpdate, request, handler, context);
        }

        /**
         * <p>Deletes a specific version from a software package.</p> <p> <b>Note:</b> All
         * package versions must be deleted before deleting the software package.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DeletePackageVersion</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeletePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageOutcome DeletePackage(const Model::DeletePackageRequest& request) const;

        /**
         * A Callable wrapper for DeletePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePackageRequestT = Model::DeletePackageRequest>
        Model::DeletePackageOutcomeCallable DeletePackageCallable(const DeletePackageRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeletePackage, request);
        }

        /**
         * An Async wrapper for DeletePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePackageRequestT = Model::DeletePackageRequest>
        void DeletePackageAsync(const DeletePackageRequestT& request, const DeletePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeletePackage, request, handler, context);
        }

        /**
         * <p>Deletes a specific version from a software package.</p> <p> <b>Note:</b> If a
         * package version is designated as default, you must remove the designation from
         * the software package using the <a>UpdatePackage</a> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DeletePackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::DeletePackageVersionOutcome DeletePackageVersion(const Model::DeletePackageVersionRequest& request) const;

        /**
         * A Callable wrapper for DeletePackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeletePackageVersionRequestT = Model::DeletePackageVersionRequest>
        Model::DeletePackageVersionOutcomeCallable DeletePackageVersionCallable(const DeletePackageVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeletePackageVersion, request);
        }

        /**
         * An Async wrapper for DeletePackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePackageVersionRequestT = Model::DeletePackageVersionRequest>
        void DeletePackageVersionAsync(const DeletePackageVersionRequestT& request, const DeletePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeletePackageVersion, request, handler, context);
        }

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
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        Model::DeletePolicyOutcomeCallable DeletePolicyCallable(const DeletePolicyRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeletePolicy, request);
        }

        /**
         * An Async wrapper for DeletePolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePolicyRequestT = Model::DeletePolicyRequest>
        void DeletePolicyAsync(const DeletePolicyRequestT& request, const DeletePolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeletePolicy, request, handler, context);
        }

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
        template<typename DeletePolicyVersionRequestT = Model::DeletePolicyVersionRequest>
        Model::DeletePolicyVersionOutcomeCallable DeletePolicyVersionCallable(const DeletePolicyVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeletePolicyVersion, request);
        }

        /**
         * An Async wrapper for DeletePolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeletePolicyVersionRequestT = Model::DeletePolicyVersionRequest>
        void DeletePolicyVersionAsync(const DeletePolicyVersionRequestT& request, const DeletePolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeletePolicyVersion, request, handler, context);
        }

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
        template<typename DeleteProvisioningTemplateRequestT = Model::DeleteProvisioningTemplateRequest>
        Model::DeleteProvisioningTemplateOutcomeCallable DeleteProvisioningTemplateCallable(const DeleteProvisioningTemplateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteProvisioningTemplate, request);
        }

        /**
         * An Async wrapper for DeleteProvisioningTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProvisioningTemplateRequestT = Model::DeleteProvisioningTemplateRequest>
        void DeleteProvisioningTemplateAsync(const DeleteProvisioningTemplateRequestT& request, const DeleteProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteProvisioningTemplate, request, handler, context);
        }

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
        template<typename DeleteProvisioningTemplateVersionRequestT = Model::DeleteProvisioningTemplateVersionRequest>
        Model::DeleteProvisioningTemplateVersionOutcomeCallable DeleteProvisioningTemplateVersionCallable(const DeleteProvisioningTemplateVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteProvisioningTemplateVersion, request);
        }

        /**
         * An Async wrapper for DeleteProvisioningTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProvisioningTemplateVersionRequestT = Model::DeleteProvisioningTemplateVersionRequest>
        void DeleteProvisioningTemplateVersionAsync(const DeleteProvisioningTemplateVersionRequestT& request, const DeleteProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteProvisioningTemplateVersion, request, handler, context);
        }

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
        template<typename DeleteRegistrationCodeRequestT = Model::DeleteRegistrationCodeRequest>
        Model::DeleteRegistrationCodeOutcomeCallable DeleteRegistrationCodeCallable(const DeleteRegistrationCodeRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteRegistrationCode, request);
        }

        /**
         * An Async wrapper for DeleteRegistrationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRegistrationCodeRequestT = Model::DeleteRegistrationCodeRequest>
        void DeleteRegistrationCodeAsync(const DeleteRegistrationCodeRequestT& request, const DeleteRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteRegistrationCode, request, handler, context);
        }

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
        template<typename DeleteRoleAliasRequestT = Model::DeleteRoleAliasRequest>
        Model::DeleteRoleAliasOutcomeCallable DeleteRoleAliasCallable(const DeleteRoleAliasRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteRoleAlias, request);
        }

        /**
         * An Async wrapper for DeleteRoleAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRoleAliasRequestT = Model::DeleteRoleAliasRequest>
        void DeleteRoleAliasAsync(const DeleteRoleAliasRequestT& request, const DeleteRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteRoleAlias, request, handler, context);
        }

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
        template<typename DeleteScheduledAuditRequestT = Model::DeleteScheduledAuditRequest>
        Model::DeleteScheduledAuditOutcomeCallable DeleteScheduledAuditCallable(const DeleteScheduledAuditRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteScheduledAudit, request);
        }

        /**
         * An Async wrapper for DeleteScheduledAudit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteScheduledAuditRequestT = Model::DeleteScheduledAuditRequest>
        void DeleteScheduledAuditAsync(const DeleteScheduledAuditRequestT& request, const DeleteScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteScheduledAudit, request, handler, context);
        }

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
        template<typename DeleteSecurityProfileRequestT = Model::DeleteSecurityProfileRequest>
        Model::DeleteSecurityProfileOutcomeCallable DeleteSecurityProfileCallable(const DeleteSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteSecurityProfile, request);
        }

        /**
         * An Async wrapper for DeleteSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteSecurityProfileRequestT = Model::DeleteSecurityProfileRequest>
        void DeleteSecurityProfileAsync(const DeleteSecurityProfileRequestT& request, const DeleteSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteSecurityProfile, request, handler, context);
        }

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
        template<typename DeleteStreamRequestT = Model::DeleteStreamRequest>
        Model::DeleteStreamOutcomeCallable DeleteStreamCallable(const DeleteStreamRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteStream, request);
        }

        /**
         * An Async wrapper for DeleteStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteStreamRequestT = Model::DeleteStreamRequest>
        void DeleteStreamAsync(const DeleteStreamRequestT& request, const DeleteStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteStream, request, handler, context);
        }

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
        template<typename DeleteThingRequestT = Model::DeleteThingRequest>
        Model::DeleteThingOutcomeCallable DeleteThingCallable(const DeleteThingRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteThing, request);
        }

        /**
         * An Async wrapper for DeleteThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteThingRequestT = Model::DeleteThingRequest>
        void DeleteThingAsync(const DeleteThingRequestT& request, const DeleteThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteThing, request, handler, context);
        }

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
        template<typename DeleteThingGroupRequestT = Model::DeleteThingGroupRequest>
        Model::DeleteThingGroupOutcomeCallable DeleteThingGroupCallable(const DeleteThingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteThingGroup, request);
        }

        /**
         * An Async wrapper for DeleteThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteThingGroupRequestT = Model::DeleteThingGroupRequest>
        void DeleteThingGroupAsync(const DeleteThingGroupRequestT& request, const DeleteThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteThingGroup, request, handler, context);
        }

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
        template<typename DeleteThingTypeRequestT = Model::DeleteThingTypeRequest>
        Model::DeleteThingTypeOutcomeCallable DeleteThingTypeCallable(const DeleteThingTypeRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteThingType, request);
        }

        /**
         * An Async wrapper for DeleteThingType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteThingTypeRequestT = Model::DeleteThingTypeRequest>
        void DeleteThingTypeAsync(const DeleteThingTypeRequestT& request, const DeleteThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteThingType, request, handler, context);
        }

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
        template<typename DeleteTopicRuleRequestT = Model::DeleteTopicRuleRequest>
        Model::DeleteTopicRuleOutcomeCallable DeleteTopicRuleCallable(const DeleteTopicRuleRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteTopicRule, request);
        }

        /**
         * An Async wrapper for DeleteTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTopicRuleRequestT = Model::DeleteTopicRuleRequest>
        void DeleteTopicRuleAsync(const DeleteTopicRuleRequestT& request, const DeleteTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteTopicRule, request, handler, context);
        }

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
        template<typename DeleteTopicRuleDestinationRequestT = Model::DeleteTopicRuleDestinationRequest>
        Model::DeleteTopicRuleDestinationOutcomeCallable DeleteTopicRuleDestinationCallable(const DeleteTopicRuleDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteTopicRuleDestination, request);
        }

        /**
         * An Async wrapper for DeleteTopicRuleDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteTopicRuleDestinationRequestT = Model::DeleteTopicRuleDestinationRequest>
        void DeleteTopicRuleDestinationAsync(const DeleteTopicRuleDestinationRequestT& request, const DeleteTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteTopicRuleDestination, request, handler, context);
        }

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
        template<typename DeleteV2LoggingLevelRequestT = Model::DeleteV2LoggingLevelRequest>
        Model::DeleteV2LoggingLevelOutcomeCallable DeleteV2LoggingLevelCallable(const DeleteV2LoggingLevelRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeleteV2LoggingLevel, request);
        }

        /**
         * An Async wrapper for DeleteV2LoggingLevel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteV2LoggingLevelRequestT = Model::DeleteV2LoggingLevelRequest>
        void DeleteV2LoggingLevelAsync(const DeleteV2LoggingLevelRequestT& request, const DeleteV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeleteV2LoggingLevel, request, handler, context);
        }

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
        template<typename DeprecateThingTypeRequestT = Model::DeprecateThingTypeRequest>
        Model::DeprecateThingTypeOutcomeCallable DeprecateThingTypeCallable(const DeprecateThingTypeRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DeprecateThingType, request);
        }

        /**
         * An Async wrapper for DeprecateThingType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeprecateThingTypeRequestT = Model::DeprecateThingTypeRequest>
        void DeprecateThingTypeAsync(const DeprecateThingTypeRequestT& request, const DeprecateThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DeprecateThingType, request, handler, context);
        }

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
        template<typename DescribeAccountAuditConfigurationRequestT = Model::DescribeAccountAuditConfigurationRequest>
        Model::DescribeAccountAuditConfigurationOutcomeCallable DescribeAccountAuditConfigurationCallable(const DescribeAccountAuditConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeAccountAuditConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeAccountAuditConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAccountAuditConfigurationRequestT = Model::DescribeAccountAuditConfigurationRequest>
        void DescribeAccountAuditConfigurationAsync(const DescribeAccountAuditConfigurationRequestT& request, const DescribeAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeAccountAuditConfiguration, request, handler, context);
        }

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
        template<typename DescribeAuditFindingRequestT = Model::DescribeAuditFindingRequest>
        Model::DescribeAuditFindingOutcomeCallable DescribeAuditFindingCallable(const DescribeAuditFindingRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeAuditFinding, request);
        }

        /**
         * An Async wrapper for DescribeAuditFinding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAuditFindingRequestT = Model::DescribeAuditFindingRequest>
        void DescribeAuditFindingAsync(const DescribeAuditFindingRequestT& request, const DescribeAuditFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeAuditFinding, request, handler, context);
        }

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
        template<typename DescribeAuditMitigationActionsTaskRequestT = Model::DescribeAuditMitigationActionsTaskRequest>
        Model::DescribeAuditMitigationActionsTaskOutcomeCallable DescribeAuditMitigationActionsTaskCallable(const DescribeAuditMitigationActionsTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeAuditMitigationActionsTask, request);
        }

        /**
         * An Async wrapper for DescribeAuditMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAuditMitigationActionsTaskRequestT = Model::DescribeAuditMitigationActionsTaskRequest>
        void DescribeAuditMitigationActionsTaskAsync(const DescribeAuditMitigationActionsTaskRequestT& request, const DescribeAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeAuditMitigationActionsTask, request, handler, context);
        }

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
        template<typename DescribeAuditSuppressionRequestT = Model::DescribeAuditSuppressionRequest>
        Model::DescribeAuditSuppressionOutcomeCallable DescribeAuditSuppressionCallable(const DescribeAuditSuppressionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeAuditSuppression, request);
        }

        /**
         * An Async wrapper for DescribeAuditSuppression that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAuditSuppressionRequestT = Model::DescribeAuditSuppressionRequest>
        void DescribeAuditSuppressionAsync(const DescribeAuditSuppressionRequestT& request, const DescribeAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeAuditSuppression, request, handler, context);
        }

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
        template<typename DescribeAuditTaskRequestT = Model::DescribeAuditTaskRequest>
        Model::DescribeAuditTaskOutcomeCallable DescribeAuditTaskCallable(const DescribeAuditTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeAuditTask, request);
        }

        /**
         * An Async wrapper for DescribeAuditTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAuditTaskRequestT = Model::DescribeAuditTaskRequest>
        void DescribeAuditTaskAsync(const DescribeAuditTaskRequestT& request, const DescribeAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeAuditTask, request, handler, context);
        }

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
        template<typename DescribeAuthorizerRequestT = Model::DescribeAuthorizerRequest>
        Model::DescribeAuthorizerOutcomeCallable DescribeAuthorizerCallable(const DescribeAuthorizerRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeAuthorizer, request);
        }

        /**
         * An Async wrapper for DescribeAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAuthorizerRequestT = Model::DescribeAuthorizerRequest>
        void DescribeAuthorizerAsync(const DescribeAuthorizerRequestT& request, const DescribeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeAuthorizer, request, handler, context);
        }

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
        template<typename DescribeBillingGroupRequestT = Model::DescribeBillingGroupRequest>
        Model::DescribeBillingGroupOutcomeCallable DescribeBillingGroupCallable(const DescribeBillingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeBillingGroup, request);
        }

        /**
         * An Async wrapper for DescribeBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeBillingGroupRequestT = Model::DescribeBillingGroupRequest>
        void DescribeBillingGroupAsync(const DescribeBillingGroupRequestT& request, const DescribeBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeBillingGroup, request, handler, context);
        }

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
        template<typename DescribeCACertificateRequestT = Model::DescribeCACertificateRequest>
        Model::DescribeCACertificateOutcomeCallable DescribeCACertificateCallable(const DescribeCACertificateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeCACertificate, request);
        }

        /**
         * An Async wrapper for DescribeCACertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCACertificateRequestT = Model::DescribeCACertificateRequest>
        void DescribeCACertificateAsync(const DescribeCACertificateRequestT& request, const DescribeCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeCACertificate, request, handler, context);
        }

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
        template<typename DescribeCertificateRequestT = Model::DescribeCertificateRequest>
        Model::DescribeCertificateOutcomeCallable DescribeCertificateCallable(const DescribeCertificateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeCertificate, request);
        }

        /**
         * An Async wrapper for DescribeCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCertificateRequestT = Model::DescribeCertificateRequest>
        void DescribeCertificateAsync(const DescribeCertificateRequestT& request, const DescribeCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeCertificate, request, handler, context);
        }

        /**
         * <p>Describes a certificate provider.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeCertificateProvider</a>
         * action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeCertificateProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeCertificateProviderOutcome DescribeCertificateProvider(const Model::DescribeCertificateProviderRequest& request) const;

        /**
         * A Callable wrapper for DescribeCertificateProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeCertificateProviderRequestT = Model::DescribeCertificateProviderRequest>
        Model::DescribeCertificateProviderOutcomeCallable DescribeCertificateProviderCallable(const DescribeCertificateProviderRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeCertificateProvider, request);
        }

        /**
         * An Async wrapper for DescribeCertificateProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCertificateProviderRequestT = Model::DescribeCertificateProviderRequest>
        void DescribeCertificateProviderAsync(const DescribeCertificateProviderRequestT& request, const DescribeCertificateProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeCertificateProvider, request, handler, context);
        }

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
        template<typename DescribeCustomMetricRequestT = Model::DescribeCustomMetricRequest>
        Model::DescribeCustomMetricOutcomeCallable DescribeCustomMetricCallable(const DescribeCustomMetricRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeCustomMetric, request);
        }

        /**
         * An Async wrapper for DescribeCustomMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeCustomMetricRequestT = Model::DescribeCustomMetricRequest>
        void DescribeCustomMetricAsync(const DescribeCustomMetricRequestT& request, const DescribeCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeCustomMetric, request, handler, context);
        }

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
        template<typename DescribeDefaultAuthorizerRequestT = Model::DescribeDefaultAuthorizerRequest>
        Model::DescribeDefaultAuthorizerOutcomeCallable DescribeDefaultAuthorizerCallable(const DescribeDefaultAuthorizerRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeDefaultAuthorizer, request);
        }

        /**
         * An Async wrapper for DescribeDefaultAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDefaultAuthorizerRequestT = Model::DescribeDefaultAuthorizerRequest>
        void DescribeDefaultAuthorizerAsync(const DescribeDefaultAuthorizerRequestT& request, const DescribeDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeDefaultAuthorizer, request, handler, context);
        }

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
        template<typename DescribeDetectMitigationActionsTaskRequestT = Model::DescribeDetectMitigationActionsTaskRequest>
        Model::DescribeDetectMitigationActionsTaskOutcomeCallable DescribeDetectMitigationActionsTaskCallable(const DescribeDetectMitigationActionsTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeDetectMitigationActionsTask, request);
        }

        /**
         * An Async wrapper for DescribeDetectMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDetectMitigationActionsTaskRequestT = Model::DescribeDetectMitigationActionsTaskRequest>
        void DescribeDetectMitigationActionsTaskAsync(const DescribeDetectMitigationActionsTaskRequestT& request, const DescribeDetectMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeDetectMitigationActionsTask, request, handler, context);
        }

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
        template<typename DescribeDimensionRequestT = Model::DescribeDimensionRequest>
        Model::DescribeDimensionOutcomeCallable DescribeDimensionCallable(const DescribeDimensionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeDimension, request);
        }

        /**
         * An Async wrapper for DescribeDimension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDimensionRequestT = Model::DescribeDimensionRequest>
        void DescribeDimensionAsync(const DescribeDimensionRequestT& request, const DescribeDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeDimension, request, handler, context);
        }

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
        template<typename DescribeDomainConfigurationRequestT = Model::DescribeDomainConfigurationRequest>
        Model::DescribeDomainConfigurationOutcomeCallable DescribeDomainConfigurationCallable(const DescribeDomainConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeDomainConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeDomainConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeDomainConfigurationRequestT = Model::DescribeDomainConfigurationRequest>
        void DescribeDomainConfigurationAsync(const DescribeDomainConfigurationRequestT& request, const DescribeDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeDomainConfiguration, request, handler, context);
        }

        /**
         * <p>Returns or creates a unique endpoint specific to the Amazon Web Services
         * account making the call.</p>  <p>The first time
         * <code>DescribeEndpoint</code> is called, an endpoint is created. All subsequent
         * calls to <code>DescribeEndpoint</code> return the same endpoint.</p> 
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">DescribeEndpoint</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEndpointOutcome DescribeEndpoint(const Model::DescribeEndpointRequest& request) const;

        /**
         * A Callable wrapper for DescribeEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEndpointRequestT = Model::DescribeEndpointRequest>
        Model::DescribeEndpointOutcomeCallable DescribeEndpointCallable(const DescribeEndpointRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeEndpoint, request);
        }

        /**
         * An Async wrapper for DescribeEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEndpointRequestT = Model::DescribeEndpointRequest>
        void DescribeEndpointAsync(const DescribeEndpointRequestT& request, const DescribeEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeEndpoint, request, handler, context);
        }

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
        template<typename DescribeEventConfigurationsRequestT = Model::DescribeEventConfigurationsRequest>
        Model::DescribeEventConfigurationsOutcomeCallable DescribeEventConfigurationsCallable(const DescribeEventConfigurationsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeEventConfigurations, request);
        }

        /**
         * An Async wrapper for DescribeEventConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEventConfigurationsRequestT = Model::DescribeEventConfigurationsRequest>
        void DescribeEventConfigurationsAsync(const DescribeEventConfigurationsRequestT& request, const DescribeEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeEventConfigurations, request, handler, context);
        }

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
        template<typename DescribeFleetMetricRequestT = Model::DescribeFleetMetricRequest>
        Model::DescribeFleetMetricOutcomeCallable DescribeFleetMetricCallable(const DescribeFleetMetricRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeFleetMetric, request);
        }

        /**
         * An Async wrapper for DescribeFleetMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFleetMetricRequestT = Model::DescribeFleetMetricRequest>
        void DescribeFleetMetricAsync(const DescribeFleetMetricRequestT& request, const DescribeFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeFleetMetric, request, handler, context);
        }

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
        template<typename DescribeIndexRequestT = Model::DescribeIndexRequest>
        Model::DescribeIndexOutcomeCallable DescribeIndexCallable(const DescribeIndexRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeIndex, request);
        }

        /**
         * An Async wrapper for DescribeIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIndexRequestT = Model::DescribeIndexRequest>
        void DescribeIndexAsync(const DescribeIndexRequestT& request, const DescribeIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeIndex, request, handler, context);
        }

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
        template<typename DescribeJobRequestT = Model::DescribeJobRequest>
        Model::DescribeJobOutcomeCallable DescribeJobCallable(const DescribeJobRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeJob, request);
        }

        /**
         * An Async wrapper for DescribeJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobRequestT = Model::DescribeJobRequest>
        void DescribeJobAsync(const DescribeJobRequestT& request, const DescribeJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeJob, request, handler, context);
        }

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
        template<typename DescribeJobExecutionRequestT = Model::DescribeJobExecutionRequest>
        Model::DescribeJobExecutionOutcomeCallable DescribeJobExecutionCallable(const DescribeJobExecutionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeJobExecution, request);
        }

        /**
         * An Async wrapper for DescribeJobExecution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobExecutionRequestT = Model::DescribeJobExecutionRequest>
        void DescribeJobExecutionAsync(const DescribeJobExecutionRequestT& request, const DescribeJobExecutionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeJobExecution, request, handler, context);
        }

        /**
         * <p>Returns information about a job template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeJobTemplateOutcome DescribeJobTemplate(const Model::DescribeJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeJobTemplateRequestT = Model::DescribeJobTemplateRequest>
        Model::DescribeJobTemplateOutcomeCallable DescribeJobTemplateCallable(const DescribeJobTemplateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeJobTemplate, request);
        }

        /**
         * An Async wrapper for DescribeJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeJobTemplateRequestT = Model::DescribeJobTemplateRequest>
        void DescribeJobTemplateAsync(const DescribeJobTemplateRequestT& request, const DescribeJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeJobTemplate, request, handler, context);
        }

        /**
         * <p>View details of a managed job template.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/DescribeManagedJobTemplate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeManagedJobTemplateOutcome DescribeManagedJobTemplate(const Model::DescribeManagedJobTemplateRequest& request) const;

        /**
         * A Callable wrapper for DescribeManagedJobTemplate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeManagedJobTemplateRequestT = Model::DescribeManagedJobTemplateRequest>
        Model::DescribeManagedJobTemplateOutcomeCallable DescribeManagedJobTemplateCallable(const DescribeManagedJobTemplateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeManagedJobTemplate, request);
        }

        /**
         * An Async wrapper for DescribeManagedJobTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeManagedJobTemplateRequestT = Model::DescribeManagedJobTemplateRequest>
        void DescribeManagedJobTemplateAsync(const DescribeManagedJobTemplateRequestT& request, const DescribeManagedJobTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeManagedJobTemplate, request, handler, context);
        }

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
        template<typename DescribeMitigationActionRequestT = Model::DescribeMitigationActionRequest>
        Model::DescribeMitigationActionOutcomeCallable DescribeMitigationActionCallable(const DescribeMitigationActionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeMitigationAction, request);
        }

        /**
         * An Async wrapper for DescribeMitigationAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeMitigationActionRequestT = Model::DescribeMitigationActionRequest>
        void DescribeMitigationActionAsync(const DescribeMitigationActionRequestT& request, const DescribeMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeMitigationAction, request, handler, context);
        }

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
        template<typename DescribeProvisioningTemplateRequestT = Model::DescribeProvisioningTemplateRequest>
        Model::DescribeProvisioningTemplateOutcomeCallable DescribeProvisioningTemplateCallable(const DescribeProvisioningTemplateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeProvisioningTemplate, request);
        }

        /**
         * An Async wrapper for DescribeProvisioningTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProvisioningTemplateRequestT = Model::DescribeProvisioningTemplateRequest>
        void DescribeProvisioningTemplateAsync(const DescribeProvisioningTemplateRequestT& request, const DescribeProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeProvisioningTemplate, request, handler, context);
        }

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
        template<typename DescribeProvisioningTemplateVersionRequestT = Model::DescribeProvisioningTemplateVersionRequest>
        Model::DescribeProvisioningTemplateVersionOutcomeCallable DescribeProvisioningTemplateVersionCallable(const DescribeProvisioningTemplateVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeProvisioningTemplateVersion, request);
        }

        /**
         * An Async wrapper for DescribeProvisioningTemplateVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeProvisioningTemplateVersionRequestT = Model::DescribeProvisioningTemplateVersionRequest>
        void DescribeProvisioningTemplateVersionAsync(const DescribeProvisioningTemplateVersionRequestT& request, const DescribeProvisioningTemplateVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeProvisioningTemplateVersion, request, handler, context);
        }

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
        template<typename DescribeRoleAliasRequestT = Model::DescribeRoleAliasRequest>
        Model::DescribeRoleAliasOutcomeCallable DescribeRoleAliasCallable(const DescribeRoleAliasRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeRoleAlias, request);
        }

        /**
         * An Async wrapper for DescribeRoleAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeRoleAliasRequestT = Model::DescribeRoleAliasRequest>
        void DescribeRoleAliasAsync(const DescribeRoleAliasRequestT& request, const DescribeRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeRoleAlias, request, handler, context);
        }

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
        template<typename DescribeScheduledAuditRequestT = Model::DescribeScheduledAuditRequest>
        Model::DescribeScheduledAuditOutcomeCallable DescribeScheduledAuditCallable(const DescribeScheduledAuditRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeScheduledAudit, request);
        }

        /**
         * An Async wrapper for DescribeScheduledAudit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeScheduledAuditRequestT = Model::DescribeScheduledAuditRequest>
        void DescribeScheduledAuditAsync(const DescribeScheduledAuditRequestT& request, const DescribeScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeScheduledAudit, request, handler, context);
        }

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
        template<typename DescribeSecurityProfileRequestT = Model::DescribeSecurityProfileRequest>
        Model::DescribeSecurityProfileOutcomeCallable DescribeSecurityProfileCallable(const DescribeSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeSecurityProfile, request);
        }

        /**
         * An Async wrapper for DescribeSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeSecurityProfileRequestT = Model::DescribeSecurityProfileRequest>
        void DescribeSecurityProfileAsync(const DescribeSecurityProfileRequestT& request, const DescribeSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeSecurityProfile, request, handler, context);
        }

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
        template<typename DescribeStreamRequestT = Model::DescribeStreamRequest>
        Model::DescribeStreamOutcomeCallable DescribeStreamCallable(const DescribeStreamRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeStream, request);
        }

        /**
         * An Async wrapper for DescribeStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeStreamRequestT = Model::DescribeStreamRequest>
        void DescribeStreamAsync(const DescribeStreamRequestT& request, const DescribeStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeStream, request, handler, context);
        }

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
        template<typename DescribeThingRequestT = Model::DescribeThingRequest>
        Model::DescribeThingOutcomeCallable DescribeThingCallable(const DescribeThingRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeThing, request);
        }

        /**
         * An Async wrapper for DescribeThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeThingRequestT = Model::DescribeThingRequest>
        void DescribeThingAsync(const DescribeThingRequestT& request, const DescribeThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeThing, request, handler, context);
        }

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
        template<typename DescribeThingGroupRequestT = Model::DescribeThingGroupRequest>
        Model::DescribeThingGroupOutcomeCallable DescribeThingGroupCallable(const DescribeThingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeThingGroup, request);
        }

        /**
         * An Async wrapper for DescribeThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeThingGroupRequestT = Model::DescribeThingGroupRequest>
        void DescribeThingGroupAsync(const DescribeThingGroupRequestT& request, const DescribeThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeThingGroup, request, handler, context);
        }

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
        template<typename DescribeThingRegistrationTaskRequestT = Model::DescribeThingRegistrationTaskRequest>
        Model::DescribeThingRegistrationTaskOutcomeCallable DescribeThingRegistrationTaskCallable(const DescribeThingRegistrationTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeThingRegistrationTask, request);
        }

        /**
         * An Async wrapper for DescribeThingRegistrationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeThingRegistrationTaskRequestT = Model::DescribeThingRegistrationTaskRequest>
        void DescribeThingRegistrationTaskAsync(const DescribeThingRegistrationTaskRequestT& request, const DescribeThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeThingRegistrationTask, request, handler, context);
        }

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
        template<typename DescribeThingTypeRequestT = Model::DescribeThingTypeRequest>
        Model::DescribeThingTypeOutcomeCallable DescribeThingTypeCallable(const DescribeThingTypeRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DescribeThingType, request);
        }

        /**
         * An Async wrapper for DescribeThingType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeThingTypeRequestT = Model::DescribeThingTypeRequest>
        void DescribeThingTypeAsync(const DescribeThingTypeRequestT& request, const DescribeThingTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DescribeThingType, request, handler, context);
        }

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
        template<typename DetachPolicyRequestT = Model::DetachPolicyRequest>
        Model::DetachPolicyOutcomeCallable DetachPolicyCallable(const DetachPolicyRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DetachPolicy, request);
        }

        /**
         * An Async wrapper for DetachPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachPolicyRequestT = Model::DetachPolicyRequest>
        void DetachPolicyAsync(const DetachPolicyRequestT& request, const DetachPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DetachPolicy, request, handler, context);
        }

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
        template<typename DetachSecurityProfileRequestT = Model::DetachSecurityProfileRequest>
        Model::DetachSecurityProfileOutcomeCallable DetachSecurityProfileCallable(const DetachSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DetachSecurityProfile, request);
        }

        /**
         * An Async wrapper for DetachSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachSecurityProfileRequestT = Model::DetachSecurityProfileRequest>
        void DetachSecurityProfileAsync(const DetachSecurityProfileRequestT& request, const DetachSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DetachSecurityProfile, request, handler, context);
        }

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
        template<typename DetachThingPrincipalRequestT = Model::DetachThingPrincipalRequest>
        Model::DetachThingPrincipalOutcomeCallable DetachThingPrincipalCallable(const DetachThingPrincipalRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DetachThingPrincipal, request);
        }

        /**
         * An Async wrapper for DetachThingPrincipal that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachThingPrincipalRequestT = Model::DetachThingPrincipalRequest>
        void DetachThingPrincipalAsync(const DetachThingPrincipalRequestT& request, const DetachThingPrincipalResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DetachThingPrincipal, request, handler, context);
        }

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
        template<typename DisableTopicRuleRequestT = Model::DisableTopicRuleRequest>
        Model::DisableTopicRuleOutcomeCallable DisableTopicRuleCallable(const DisableTopicRuleRequestT& request) const
        {
            return SubmitCallable(&IoTClient::DisableTopicRule, request);
        }

        /**
         * An Async wrapper for DisableTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableTopicRuleRequestT = Model::DisableTopicRuleRequest>
        void DisableTopicRuleAsync(const DisableTopicRuleRequestT& request, const DisableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::DisableTopicRule, request, handler, context);
        }

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
        template<typename EnableTopicRuleRequestT = Model::EnableTopicRuleRequest>
        Model::EnableTopicRuleOutcomeCallable EnableTopicRuleCallable(const EnableTopicRuleRequestT& request) const
        {
            return SubmitCallable(&IoTClient::EnableTopicRule, request);
        }

        /**
         * An Async wrapper for EnableTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableTopicRuleRequestT = Model::EnableTopicRuleRequest>
        void EnableTopicRuleAsync(const EnableTopicRuleRequestT& request, const EnableTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::EnableTopicRule, request, handler, context);
        }

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
        template<typename GetBehaviorModelTrainingSummariesRequestT = Model::GetBehaviorModelTrainingSummariesRequest>
        Model::GetBehaviorModelTrainingSummariesOutcomeCallable GetBehaviorModelTrainingSummariesCallable(const GetBehaviorModelTrainingSummariesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetBehaviorModelTrainingSummaries, request);
        }

        /**
         * An Async wrapper for GetBehaviorModelTrainingSummaries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBehaviorModelTrainingSummariesRequestT = Model::GetBehaviorModelTrainingSummariesRequest>
        void GetBehaviorModelTrainingSummariesAsync(const GetBehaviorModelTrainingSummariesRequestT& request, const GetBehaviorModelTrainingSummariesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetBehaviorModelTrainingSummaries, request, handler, context);
        }

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
        template<typename GetBucketsAggregationRequestT = Model::GetBucketsAggregationRequest>
        Model::GetBucketsAggregationOutcomeCallable GetBucketsAggregationCallable(const GetBucketsAggregationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetBucketsAggregation, request);
        }

        /**
         * An Async wrapper for GetBucketsAggregation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketsAggregationRequestT = Model::GetBucketsAggregationRequest>
        void GetBucketsAggregationAsync(const GetBucketsAggregationRequestT& request, const GetBucketsAggregationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetBucketsAggregation, request, handler, context);
        }

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
        template<typename GetCardinalityRequestT = Model::GetCardinalityRequest>
        Model::GetCardinalityOutcomeCallable GetCardinalityCallable(const GetCardinalityRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetCardinality, request);
        }

        /**
         * An Async wrapper for GetCardinality that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCardinalityRequestT = Model::GetCardinalityRequest>
        void GetCardinalityAsync(const GetCardinalityRequestT& request, const GetCardinalityResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetCardinality, request, handler, context);
        }

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
        template<typename GetEffectivePoliciesRequestT = Model::GetEffectivePoliciesRequest>
        Model::GetEffectivePoliciesOutcomeCallable GetEffectivePoliciesCallable(const GetEffectivePoliciesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetEffectivePolicies, request);
        }

        /**
         * An Async wrapper for GetEffectivePolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEffectivePoliciesRequestT = Model::GetEffectivePoliciesRequest>
        void GetEffectivePoliciesAsync(const GetEffectivePoliciesRequestT& request, const GetEffectivePoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetEffectivePolicies, request, handler, context);
        }

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
        template<typename GetIndexingConfigurationRequestT = Model::GetIndexingConfigurationRequest>
        Model::GetIndexingConfigurationOutcomeCallable GetIndexingConfigurationCallable(const GetIndexingConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetIndexingConfiguration, request);
        }

        /**
         * An Async wrapper for GetIndexingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetIndexingConfigurationRequestT = Model::GetIndexingConfigurationRequest>
        void GetIndexingConfigurationAsync(const GetIndexingConfigurationRequestT& request, const GetIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetIndexingConfiguration, request, handler, context);
        }

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
        template<typename GetJobDocumentRequestT = Model::GetJobDocumentRequest>
        Model::GetJobDocumentOutcomeCallable GetJobDocumentCallable(const GetJobDocumentRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetJobDocument, request);
        }

        /**
         * An Async wrapper for GetJobDocument that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetJobDocumentRequestT = Model::GetJobDocumentRequest>
        void GetJobDocumentAsync(const GetJobDocumentRequestT& request, const GetJobDocumentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetJobDocument, request, handler, context);
        }

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
        template<typename GetLoggingOptionsRequestT = Model::GetLoggingOptionsRequest>
        Model::GetLoggingOptionsOutcomeCallable GetLoggingOptionsCallable(const GetLoggingOptionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetLoggingOptions, request);
        }

        /**
         * An Async wrapper for GetLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoggingOptionsRequestT = Model::GetLoggingOptionsRequest>
        void GetLoggingOptionsAsync(const GetLoggingOptionsRequestT& request, const GetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetLoggingOptions, request, handler, context);
        }

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
        template<typename GetOTAUpdateRequestT = Model::GetOTAUpdateRequest>
        Model::GetOTAUpdateOutcomeCallable GetOTAUpdateCallable(const GetOTAUpdateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetOTAUpdate, request);
        }

        /**
         * An Async wrapper for GetOTAUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOTAUpdateRequestT = Model::GetOTAUpdateRequest>
        void GetOTAUpdateAsync(const GetOTAUpdateRequestT& request, const GetOTAUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetOTAUpdate, request, handler, context);
        }

        /**
         * <p>Gets information about the specified software package.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetPackage</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPackage">AWS API
         * Reference</a></p>
         */
        virtual Model::GetPackageOutcome GetPackage(const Model::GetPackageRequest& request) const;

        /**
         * A Callable wrapper for GetPackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPackageRequestT = Model::GetPackageRequest>
        Model::GetPackageOutcomeCallable GetPackageCallable(const GetPackageRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetPackage, request);
        }

        /**
         * An Async wrapper for GetPackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPackageRequestT = Model::GetPackageRequest>
        void GetPackageAsync(const GetPackageRequestT& request, const GetPackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetPackage, request, handler, context);
        }

        /**
         * <p>Gets information about the specified software package's configuration.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetPackageConfiguration</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPackageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPackageConfigurationOutcome GetPackageConfiguration(const Model::GetPackageConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetPackageConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPackageConfigurationRequestT = Model::GetPackageConfigurationRequest>
        Model::GetPackageConfigurationOutcomeCallable GetPackageConfigurationCallable(const GetPackageConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetPackageConfiguration, request);
        }

        /**
         * An Async wrapper for GetPackageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPackageConfigurationRequestT = Model::GetPackageConfigurationRequest>
        void GetPackageConfigurationAsync(const GetPackageConfigurationRequestT& request, const GetPackageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetPackageConfiguration, request, handler, context);
        }

        /**
         * <p>Gets information about the specified package version. </p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetPackageVersion</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/GetPackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetPackageVersionOutcome GetPackageVersion(const Model::GetPackageVersionRequest& request) const;

        /**
         * A Callable wrapper for GetPackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetPackageVersionRequestT = Model::GetPackageVersionRequest>
        Model::GetPackageVersionOutcomeCallable GetPackageVersionCallable(const GetPackageVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetPackageVersion, request);
        }

        /**
         * An Async wrapper for GetPackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPackageVersionRequestT = Model::GetPackageVersionRequest>
        void GetPackageVersionAsync(const GetPackageVersionRequestT& request, const GetPackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetPackageVersion, request, handler, context);
        }

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
        template<typename GetPercentilesRequestT = Model::GetPercentilesRequest>
        Model::GetPercentilesOutcomeCallable GetPercentilesCallable(const GetPercentilesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetPercentiles, request);
        }

        /**
         * An Async wrapper for GetPercentiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPercentilesRequestT = Model::GetPercentilesRequest>
        void GetPercentilesAsync(const GetPercentilesRequestT& request, const GetPercentilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetPercentiles, request, handler, context);
        }

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
        template<typename GetPolicyRequestT = Model::GetPolicyRequest>
        Model::GetPolicyOutcomeCallable GetPolicyCallable(const GetPolicyRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetPolicy, request);
        }

        /**
         * An Async wrapper for GetPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPolicyRequestT = Model::GetPolicyRequest>
        void GetPolicyAsync(const GetPolicyRequestT& request, const GetPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetPolicy, request, handler, context);
        }

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
        template<typename GetPolicyVersionRequestT = Model::GetPolicyVersionRequest>
        Model::GetPolicyVersionOutcomeCallable GetPolicyVersionCallable(const GetPolicyVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetPolicyVersion, request);
        }

        /**
         * An Async wrapper for GetPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetPolicyVersionRequestT = Model::GetPolicyVersionRequest>
        void GetPolicyVersionAsync(const GetPolicyVersionRequestT& request, const GetPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetPolicyVersion, request, handler, context);
        }

        /**
         * <p>Gets a registration code used to register a CA certificate with IoT.</p>
         * <p>IoT will create a registration code as part of this API call if the
         * registration code doesn't exist or has been deleted. If you already have a
         * registration code, this API call will return the same registration code.</p>
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
        template<typename GetRegistrationCodeRequestT = Model::GetRegistrationCodeRequest>
        Model::GetRegistrationCodeOutcomeCallable GetRegistrationCodeCallable(const GetRegistrationCodeRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetRegistrationCode, request);
        }

        /**
         * An Async wrapper for GetRegistrationCode that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRegistrationCodeRequestT = Model::GetRegistrationCodeRequest>
        void GetRegistrationCodeAsync(const GetRegistrationCodeRequestT& request, const GetRegistrationCodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetRegistrationCode, request, handler, context);
        }

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
        template<typename GetStatisticsRequestT = Model::GetStatisticsRequest>
        Model::GetStatisticsOutcomeCallable GetStatisticsCallable(const GetStatisticsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetStatistics, request);
        }

        /**
         * An Async wrapper for GetStatistics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStatisticsRequestT = Model::GetStatisticsRequest>
        void GetStatisticsAsync(const GetStatisticsRequestT& request, const GetStatisticsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetStatistics, request, handler, context);
        }

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
        template<typename GetTopicRuleRequestT = Model::GetTopicRuleRequest>
        Model::GetTopicRuleOutcomeCallable GetTopicRuleCallable(const GetTopicRuleRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetTopicRule, request);
        }

        /**
         * An Async wrapper for GetTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTopicRuleRequestT = Model::GetTopicRuleRequest>
        void GetTopicRuleAsync(const GetTopicRuleRequestT& request, const GetTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetTopicRule, request, handler, context);
        }

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
        template<typename GetTopicRuleDestinationRequestT = Model::GetTopicRuleDestinationRequest>
        Model::GetTopicRuleDestinationOutcomeCallable GetTopicRuleDestinationCallable(const GetTopicRuleDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetTopicRuleDestination, request);
        }

        /**
         * An Async wrapper for GetTopicRuleDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetTopicRuleDestinationRequestT = Model::GetTopicRuleDestinationRequest>
        void GetTopicRuleDestinationAsync(const GetTopicRuleDestinationRequestT& request, const GetTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetTopicRuleDestination, request, handler, context);
        }

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
        template<typename GetV2LoggingOptionsRequestT = Model::GetV2LoggingOptionsRequest>
        Model::GetV2LoggingOptionsOutcomeCallable GetV2LoggingOptionsCallable(const GetV2LoggingOptionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::GetV2LoggingOptions, request);
        }

        /**
         * An Async wrapper for GetV2LoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetV2LoggingOptionsRequestT = Model::GetV2LoggingOptionsRequest>
        void GetV2LoggingOptionsAsync(const GetV2LoggingOptionsRequestT& request, const GetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::GetV2LoggingOptions, request, handler, context);
        }

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
        template<typename ListActiveViolationsRequestT = Model::ListActiveViolationsRequest>
        Model::ListActiveViolationsOutcomeCallable ListActiveViolationsCallable(const ListActiveViolationsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListActiveViolations, request);
        }

        /**
         * An Async wrapper for ListActiveViolations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListActiveViolationsRequestT = Model::ListActiveViolationsRequest>
        void ListActiveViolationsAsync(const ListActiveViolationsRequestT& request, const ListActiveViolationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListActiveViolations, request, handler, context);
        }

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
        template<typename ListAttachedPoliciesRequestT = Model::ListAttachedPoliciesRequest>
        Model::ListAttachedPoliciesOutcomeCallable ListAttachedPoliciesCallable(const ListAttachedPoliciesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListAttachedPolicies, request);
        }

        /**
         * An Async wrapper for ListAttachedPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAttachedPoliciesRequestT = Model::ListAttachedPoliciesRequest>
        void ListAttachedPoliciesAsync(const ListAttachedPoliciesRequestT& request, const ListAttachedPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListAttachedPolicies, request, handler, context);
        }

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
        template<typename ListAuditFindingsRequestT = Model::ListAuditFindingsRequest>
        Model::ListAuditFindingsOutcomeCallable ListAuditFindingsCallable(const ListAuditFindingsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListAuditFindings, request);
        }

        /**
         * An Async wrapper for ListAuditFindings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAuditFindingsRequestT = Model::ListAuditFindingsRequest>
        void ListAuditFindingsAsync(const ListAuditFindingsRequestT& request, const ListAuditFindingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListAuditFindings, request, handler, context);
        }

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
        template<typename ListAuditMitigationActionsExecutionsRequestT = Model::ListAuditMitigationActionsExecutionsRequest>
        Model::ListAuditMitigationActionsExecutionsOutcomeCallable ListAuditMitigationActionsExecutionsCallable(const ListAuditMitigationActionsExecutionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListAuditMitigationActionsExecutions, request);
        }

        /**
         * An Async wrapper for ListAuditMitigationActionsExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAuditMitigationActionsExecutionsRequestT = Model::ListAuditMitigationActionsExecutionsRequest>
        void ListAuditMitigationActionsExecutionsAsync(const ListAuditMitigationActionsExecutionsRequestT& request, const ListAuditMitigationActionsExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListAuditMitigationActionsExecutions, request, handler, context);
        }

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
        template<typename ListAuditMitigationActionsTasksRequestT = Model::ListAuditMitigationActionsTasksRequest>
        Model::ListAuditMitigationActionsTasksOutcomeCallable ListAuditMitigationActionsTasksCallable(const ListAuditMitigationActionsTasksRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListAuditMitigationActionsTasks, request);
        }

        /**
         * An Async wrapper for ListAuditMitigationActionsTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAuditMitigationActionsTasksRequestT = Model::ListAuditMitigationActionsTasksRequest>
        void ListAuditMitigationActionsTasksAsync(const ListAuditMitigationActionsTasksRequestT& request, const ListAuditMitigationActionsTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListAuditMitigationActionsTasks, request, handler, context);
        }

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
        template<typename ListAuditSuppressionsRequestT = Model::ListAuditSuppressionsRequest>
        Model::ListAuditSuppressionsOutcomeCallable ListAuditSuppressionsCallable(const ListAuditSuppressionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListAuditSuppressions, request);
        }

        /**
         * An Async wrapper for ListAuditSuppressions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAuditSuppressionsRequestT = Model::ListAuditSuppressionsRequest>
        void ListAuditSuppressionsAsync(const ListAuditSuppressionsRequestT& request, const ListAuditSuppressionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListAuditSuppressions, request, handler, context);
        }

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
        template<typename ListAuditTasksRequestT = Model::ListAuditTasksRequest>
        Model::ListAuditTasksOutcomeCallable ListAuditTasksCallable(const ListAuditTasksRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListAuditTasks, request);
        }

        /**
         * An Async wrapper for ListAuditTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAuditTasksRequestT = Model::ListAuditTasksRequest>
        void ListAuditTasksAsync(const ListAuditTasksRequestT& request, const ListAuditTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListAuditTasks, request, handler, context);
        }

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
        template<typename ListAuthorizersRequestT = Model::ListAuthorizersRequest>
        Model::ListAuthorizersOutcomeCallable ListAuthorizersCallable(const ListAuthorizersRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListAuthorizers, request);
        }

        /**
         * An Async wrapper for ListAuthorizers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAuthorizersRequestT = Model::ListAuthorizersRequest>
        void ListAuthorizersAsync(const ListAuthorizersRequestT& request, const ListAuthorizersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListAuthorizers, request, handler, context);
        }

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
        template<typename ListBillingGroupsRequestT = Model::ListBillingGroupsRequest>
        Model::ListBillingGroupsOutcomeCallable ListBillingGroupsCallable(const ListBillingGroupsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListBillingGroups, request);
        }

        /**
         * An Async wrapper for ListBillingGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListBillingGroupsRequestT = Model::ListBillingGroupsRequest>
        void ListBillingGroupsAsync(const ListBillingGroupsRequestT& request, const ListBillingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListBillingGroups, request, handler, context);
        }

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
        template<typename ListCACertificatesRequestT = Model::ListCACertificatesRequest>
        Model::ListCACertificatesOutcomeCallable ListCACertificatesCallable(const ListCACertificatesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListCACertificates, request);
        }

        /**
         * An Async wrapper for ListCACertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCACertificatesRequestT = Model::ListCACertificatesRequest>
        void ListCACertificatesAsync(const ListCACertificatesRequestT& request, const ListCACertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListCACertificates, request, handler, context);
        }

        /**
         * <p>Lists all your certificate providers in your Amazon Web Services account.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListCertificateProviders</a>
         * action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListCertificateProviders">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCertificateProvidersOutcome ListCertificateProviders(const Model::ListCertificateProvidersRequest& request) const;

        /**
         * A Callable wrapper for ListCertificateProviders that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCertificateProvidersRequestT = Model::ListCertificateProvidersRequest>
        Model::ListCertificateProvidersOutcomeCallable ListCertificateProvidersCallable(const ListCertificateProvidersRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListCertificateProviders, request);
        }

        /**
         * An Async wrapper for ListCertificateProviders that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCertificateProvidersRequestT = Model::ListCertificateProvidersRequest>
        void ListCertificateProvidersAsync(const ListCertificateProvidersRequestT& request, const ListCertificateProvidersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListCertificateProviders, request, handler, context);
        }

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
        template<typename ListCertificatesRequestT = Model::ListCertificatesRequest>
        Model::ListCertificatesOutcomeCallable ListCertificatesCallable(const ListCertificatesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListCertificates, request);
        }

        /**
         * An Async wrapper for ListCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCertificatesRequestT = Model::ListCertificatesRequest>
        void ListCertificatesAsync(const ListCertificatesRequestT& request, const ListCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListCertificates, request, handler, context);
        }

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
        template<typename ListCertificatesByCARequestT = Model::ListCertificatesByCARequest>
        Model::ListCertificatesByCAOutcomeCallable ListCertificatesByCACallable(const ListCertificatesByCARequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListCertificatesByCA, request);
        }

        /**
         * An Async wrapper for ListCertificatesByCA that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCertificatesByCARequestT = Model::ListCertificatesByCARequest>
        void ListCertificatesByCAAsync(const ListCertificatesByCARequestT& request, const ListCertificatesByCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListCertificatesByCA, request, handler, context);
        }

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
        template<typename ListCustomMetricsRequestT = Model::ListCustomMetricsRequest>
        Model::ListCustomMetricsOutcomeCallable ListCustomMetricsCallable(const ListCustomMetricsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListCustomMetrics, request);
        }

        /**
         * An Async wrapper for ListCustomMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCustomMetricsRequestT = Model::ListCustomMetricsRequest>
        void ListCustomMetricsAsync(const ListCustomMetricsRequestT& request, const ListCustomMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListCustomMetrics, request, handler, context);
        }

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
        template<typename ListDetectMitigationActionsExecutionsRequestT = Model::ListDetectMitigationActionsExecutionsRequest>
        Model::ListDetectMitigationActionsExecutionsOutcomeCallable ListDetectMitigationActionsExecutionsCallable(const ListDetectMitigationActionsExecutionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListDetectMitigationActionsExecutions, request);
        }

        /**
         * An Async wrapper for ListDetectMitigationActionsExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDetectMitigationActionsExecutionsRequestT = Model::ListDetectMitigationActionsExecutionsRequest>
        void ListDetectMitigationActionsExecutionsAsync(const ListDetectMitigationActionsExecutionsRequestT& request, const ListDetectMitigationActionsExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListDetectMitigationActionsExecutions, request, handler, context);
        }

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
        template<typename ListDetectMitigationActionsTasksRequestT = Model::ListDetectMitigationActionsTasksRequest>
        Model::ListDetectMitigationActionsTasksOutcomeCallable ListDetectMitigationActionsTasksCallable(const ListDetectMitigationActionsTasksRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListDetectMitigationActionsTasks, request);
        }

        /**
         * An Async wrapper for ListDetectMitigationActionsTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDetectMitigationActionsTasksRequestT = Model::ListDetectMitigationActionsTasksRequest>
        void ListDetectMitigationActionsTasksAsync(const ListDetectMitigationActionsTasksRequestT& request, const ListDetectMitigationActionsTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListDetectMitigationActionsTasks, request, handler, context);
        }

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
        template<typename ListDimensionsRequestT = Model::ListDimensionsRequest>
        Model::ListDimensionsOutcomeCallable ListDimensionsCallable(const ListDimensionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListDimensions, request);
        }

        /**
         * An Async wrapper for ListDimensions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDimensionsRequestT = Model::ListDimensionsRequest>
        void ListDimensionsAsync(const ListDimensionsRequestT& request, const ListDimensionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListDimensions, request, handler, context);
        }

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
        template<typename ListDomainConfigurationsRequestT = Model::ListDomainConfigurationsRequest>
        Model::ListDomainConfigurationsOutcomeCallable ListDomainConfigurationsCallable(const ListDomainConfigurationsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListDomainConfigurations, request);
        }

        /**
         * An Async wrapper for ListDomainConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDomainConfigurationsRequestT = Model::ListDomainConfigurationsRequest>
        void ListDomainConfigurationsAsync(const ListDomainConfigurationsRequestT& request, const ListDomainConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListDomainConfigurations, request, handler, context);
        }

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
        template<typename ListFleetMetricsRequestT = Model::ListFleetMetricsRequest>
        Model::ListFleetMetricsOutcomeCallable ListFleetMetricsCallable(const ListFleetMetricsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListFleetMetrics, request);
        }

        /**
         * An Async wrapper for ListFleetMetrics that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFleetMetricsRequestT = Model::ListFleetMetricsRequest>
        void ListFleetMetricsAsync(const ListFleetMetricsRequestT& request, const ListFleetMetricsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListFleetMetrics, request, handler, context);
        }

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
        template<typename ListIndicesRequestT = Model::ListIndicesRequest>
        Model::ListIndicesOutcomeCallable ListIndicesCallable(const ListIndicesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListIndices, request);
        }

        /**
         * An Async wrapper for ListIndices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIndicesRequestT = Model::ListIndicesRequest>
        void ListIndicesAsync(const ListIndicesRequestT& request, const ListIndicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListIndices, request, handler, context);
        }

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
        template<typename ListJobExecutionsForJobRequestT = Model::ListJobExecutionsForJobRequest>
        Model::ListJobExecutionsForJobOutcomeCallable ListJobExecutionsForJobCallable(const ListJobExecutionsForJobRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListJobExecutionsForJob, request);
        }

        /**
         * An Async wrapper for ListJobExecutionsForJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobExecutionsForJobRequestT = Model::ListJobExecutionsForJobRequest>
        void ListJobExecutionsForJobAsync(const ListJobExecutionsForJobRequestT& request, const ListJobExecutionsForJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListJobExecutionsForJob, request, handler, context);
        }

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
        template<typename ListJobExecutionsForThingRequestT = Model::ListJobExecutionsForThingRequest>
        Model::ListJobExecutionsForThingOutcomeCallable ListJobExecutionsForThingCallable(const ListJobExecutionsForThingRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListJobExecutionsForThing, request);
        }

        /**
         * An Async wrapper for ListJobExecutionsForThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobExecutionsForThingRequestT = Model::ListJobExecutionsForThingRequest>
        void ListJobExecutionsForThingAsync(const ListJobExecutionsForThingRequestT& request, const ListJobExecutionsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListJobExecutionsForThing, request, handler, context);
        }

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
        template<typename ListJobTemplatesRequestT = Model::ListJobTemplatesRequest>
        Model::ListJobTemplatesOutcomeCallable ListJobTemplatesCallable(const ListJobTemplatesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListJobTemplates, request);
        }

        /**
         * An Async wrapper for ListJobTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobTemplatesRequestT = Model::ListJobTemplatesRequest>
        void ListJobTemplatesAsync(const ListJobTemplatesRequestT& request, const ListJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListJobTemplates, request, handler, context);
        }

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
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        Model::ListJobsOutcomeCallable ListJobsCallable(const ListJobsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListJobs, request);
        }

        /**
         * An Async wrapper for ListJobs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListJobsRequestT = Model::ListJobsRequest>
        void ListJobsAsync(const ListJobsRequestT& request, const ListJobsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListJobs, request, handler, context);
        }

        /**
         * <p>Returns a list of managed job templates.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListManagedJobTemplates">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedJobTemplatesOutcome ListManagedJobTemplates(const Model::ListManagedJobTemplatesRequest& request) const;

        /**
         * A Callable wrapper for ListManagedJobTemplates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedJobTemplatesRequestT = Model::ListManagedJobTemplatesRequest>
        Model::ListManagedJobTemplatesOutcomeCallable ListManagedJobTemplatesCallable(const ListManagedJobTemplatesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListManagedJobTemplates, request);
        }

        /**
         * An Async wrapper for ListManagedJobTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedJobTemplatesRequestT = Model::ListManagedJobTemplatesRequest>
        void ListManagedJobTemplatesAsync(const ListManagedJobTemplatesRequestT& request, const ListManagedJobTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListManagedJobTemplates, request, handler, context);
        }

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
        template<typename ListMetricValuesRequestT = Model::ListMetricValuesRequest>
        Model::ListMetricValuesOutcomeCallable ListMetricValuesCallable(const ListMetricValuesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListMetricValues, request);
        }

        /**
         * An Async wrapper for ListMetricValues that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMetricValuesRequestT = Model::ListMetricValuesRequest>
        void ListMetricValuesAsync(const ListMetricValuesRequestT& request, const ListMetricValuesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListMetricValues, request, handler, context);
        }

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
        template<typename ListMitigationActionsRequestT = Model::ListMitigationActionsRequest>
        Model::ListMitigationActionsOutcomeCallable ListMitigationActionsCallable(const ListMitigationActionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListMitigationActions, request);
        }

        /**
         * An Async wrapper for ListMitigationActions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListMitigationActionsRequestT = Model::ListMitigationActionsRequest>
        void ListMitigationActionsAsync(const ListMitigationActionsRequestT& request, const ListMitigationActionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListMitigationActions, request, handler, context);
        }

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
        template<typename ListOTAUpdatesRequestT = Model::ListOTAUpdatesRequest>
        Model::ListOTAUpdatesOutcomeCallable ListOTAUpdatesCallable(const ListOTAUpdatesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListOTAUpdates, request);
        }

        /**
         * An Async wrapper for ListOTAUpdates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOTAUpdatesRequestT = Model::ListOTAUpdatesRequest>
        void ListOTAUpdatesAsync(const ListOTAUpdatesRequestT& request, const ListOTAUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListOTAUpdates, request, handler, context);
        }

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
        template<typename ListOutgoingCertificatesRequestT = Model::ListOutgoingCertificatesRequest>
        Model::ListOutgoingCertificatesOutcomeCallable ListOutgoingCertificatesCallable(const ListOutgoingCertificatesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListOutgoingCertificates, request);
        }

        /**
         * An Async wrapper for ListOutgoingCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOutgoingCertificatesRequestT = Model::ListOutgoingCertificatesRequest>
        void ListOutgoingCertificatesAsync(const ListOutgoingCertificatesRequestT& request, const ListOutgoingCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListOutgoingCertificates, request, handler, context);
        }

        /**
         * <p>Lists the software package versions associated to the account.</p>
         * <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListPackageVersions</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPackageVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackageVersionsOutcome ListPackageVersions(const Model::ListPackageVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListPackageVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPackageVersionsRequestT = Model::ListPackageVersionsRequest>
        Model::ListPackageVersionsOutcomeCallable ListPackageVersionsCallable(const ListPackageVersionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListPackageVersions, request);
        }

        /**
         * An Async wrapper for ListPackageVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackageVersionsRequestT = Model::ListPackageVersionsRequest>
        void ListPackageVersionsAsync(const ListPackageVersionsRequestT& request, const ListPackageVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListPackageVersions, request, handler, context);
        }

        /**
         * <p>Lists the software packages associated to the account.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">ListPackages</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListPackages">AWS
         * API Reference</a></p>
         */
        virtual Model::ListPackagesOutcome ListPackages(const Model::ListPackagesRequest& request) const;

        /**
         * A Callable wrapper for ListPackages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListPackagesRequestT = Model::ListPackagesRequest>
        Model::ListPackagesOutcomeCallable ListPackagesCallable(const ListPackagesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListPackages, request);
        }

        /**
         * An Async wrapper for ListPackages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPackagesRequestT = Model::ListPackagesRequest>
        void ListPackagesAsync(const ListPackagesRequestT& request, const ListPackagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListPackages, request, handler, context);
        }

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
        template<typename ListPoliciesRequestT = Model::ListPoliciesRequest>
        Model::ListPoliciesOutcomeCallable ListPoliciesCallable(const ListPoliciesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListPolicies, request);
        }

        /**
         * An Async wrapper for ListPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPoliciesRequestT = Model::ListPoliciesRequest>
        void ListPoliciesAsync(const ListPoliciesRequestT& request, const ListPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListPolicies, request, handler, context);
        }

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
        template<typename ListPolicyVersionsRequestT = Model::ListPolicyVersionsRequest>
        Model::ListPolicyVersionsOutcomeCallable ListPolicyVersionsCallable(const ListPolicyVersionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListPolicyVersions, request);
        }

        /**
         * An Async wrapper for ListPolicyVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPolicyVersionsRequestT = Model::ListPolicyVersionsRequest>
        void ListPolicyVersionsAsync(const ListPolicyVersionsRequestT& request, const ListPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListPolicyVersions, request, handler, context);
        }

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
        template<typename ListPrincipalThingsRequestT = Model::ListPrincipalThingsRequest>
        Model::ListPrincipalThingsOutcomeCallable ListPrincipalThingsCallable(const ListPrincipalThingsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListPrincipalThings, request);
        }

        /**
         * An Async wrapper for ListPrincipalThings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListPrincipalThingsRequestT = Model::ListPrincipalThingsRequest>
        void ListPrincipalThingsAsync(const ListPrincipalThingsRequestT& request, const ListPrincipalThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListPrincipalThings, request, handler, context);
        }

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
        template<typename ListProvisioningTemplateVersionsRequestT = Model::ListProvisioningTemplateVersionsRequest>
        Model::ListProvisioningTemplateVersionsOutcomeCallable ListProvisioningTemplateVersionsCallable(const ListProvisioningTemplateVersionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListProvisioningTemplateVersions, request);
        }

        /**
         * An Async wrapper for ListProvisioningTemplateVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProvisioningTemplateVersionsRequestT = Model::ListProvisioningTemplateVersionsRequest>
        void ListProvisioningTemplateVersionsAsync(const ListProvisioningTemplateVersionsRequestT& request, const ListProvisioningTemplateVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListProvisioningTemplateVersions, request, handler, context);
        }

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
        template<typename ListProvisioningTemplatesRequestT = Model::ListProvisioningTemplatesRequest>
        Model::ListProvisioningTemplatesOutcomeCallable ListProvisioningTemplatesCallable(const ListProvisioningTemplatesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListProvisioningTemplates, request);
        }

        /**
         * An Async wrapper for ListProvisioningTemplates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProvisioningTemplatesRequestT = Model::ListProvisioningTemplatesRequest>
        void ListProvisioningTemplatesAsync(const ListProvisioningTemplatesRequestT& request, const ListProvisioningTemplatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListProvisioningTemplates, request, handler, context);
        }

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
        template<typename ListRelatedResourcesForAuditFindingRequestT = Model::ListRelatedResourcesForAuditFindingRequest>
        Model::ListRelatedResourcesForAuditFindingOutcomeCallable ListRelatedResourcesForAuditFindingCallable(const ListRelatedResourcesForAuditFindingRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListRelatedResourcesForAuditFinding, request);
        }

        /**
         * An Async wrapper for ListRelatedResourcesForAuditFinding that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRelatedResourcesForAuditFindingRequestT = Model::ListRelatedResourcesForAuditFindingRequest>
        void ListRelatedResourcesForAuditFindingAsync(const ListRelatedResourcesForAuditFindingRequestT& request, const ListRelatedResourcesForAuditFindingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListRelatedResourcesForAuditFinding, request, handler, context);
        }

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
        template<typename ListRoleAliasesRequestT = Model::ListRoleAliasesRequest>
        Model::ListRoleAliasesOutcomeCallable ListRoleAliasesCallable(const ListRoleAliasesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListRoleAliases, request);
        }

        /**
         * An Async wrapper for ListRoleAliases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListRoleAliasesRequestT = Model::ListRoleAliasesRequest>
        void ListRoleAliasesAsync(const ListRoleAliasesRequestT& request, const ListRoleAliasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListRoleAliases, request, handler, context);
        }

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
        template<typename ListScheduledAuditsRequestT = Model::ListScheduledAuditsRequest>
        Model::ListScheduledAuditsOutcomeCallable ListScheduledAuditsCallable(const ListScheduledAuditsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListScheduledAudits, request);
        }

        /**
         * An Async wrapper for ListScheduledAudits that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListScheduledAuditsRequestT = Model::ListScheduledAuditsRequest>
        void ListScheduledAuditsAsync(const ListScheduledAuditsRequestT& request, const ListScheduledAuditsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListScheduledAudits, request, handler, context);
        }

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
        template<typename ListSecurityProfilesRequestT = Model::ListSecurityProfilesRequest>
        Model::ListSecurityProfilesOutcomeCallable ListSecurityProfilesCallable(const ListSecurityProfilesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListSecurityProfiles, request);
        }

        /**
         * An Async wrapper for ListSecurityProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityProfilesRequestT = Model::ListSecurityProfilesRequest>
        void ListSecurityProfilesAsync(const ListSecurityProfilesRequestT& request, const ListSecurityProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListSecurityProfiles, request, handler, context);
        }

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
        template<typename ListSecurityProfilesForTargetRequestT = Model::ListSecurityProfilesForTargetRequest>
        Model::ListSecurityProfilesForTargetOutcomeCallable ListSecurityProfilesForTargetCallable(const ListSecurityProfilesForTargetRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListSecurityProfilesForTarget, request);
        }

        /**
         * An Async wrapper for ListSecurityProfilesForTarget that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSecurityProfilesForTargetRequestT = Model::ListSecurityProfilesForTargetRequest>
        void ListSecurityProfilesForTargetAsync(const ListSecurityProfilesForTargetRequestT& request, const ListSecurityProfilesForTargetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListSecurityProfilesForTarget, request, handler, context);
        }

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
        template<typename ListStreamsRequestT = Model::ListStreamsRequest>
        Model::ListStreamsOutcomeCallable ListStreamsCallable(const ListStreamsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListStreams, request);
        }

        /**
         * An Async wrapper for ListStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListStreamsRequestT = Model::ListStreamsRequest>
        void ListStreamsAsync(const ListStreamsRequestT& request, const ListStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListStreams, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListTagsForResource, request, handler, context);
        }

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
        template<typename ListTargetsForPolicyRequestT = Model::ListTargetsForPolicyRequest>
        Model::ListTargetsForPolicyOutcomeCallable ListTargetsForPolicyCallable(const ListTargetsForPolicyRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListTargetsForPolicy, request);
        }

        /**
         * An Async wrapper for ListTargetsForPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTargetsForPolicyRequestT = Model::ListTargetsForPolicyRequest>
        void ListTargetsForPolicyAsync(const ListTargetsForPolicyRequestT& request, const ListTargetsForPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListTargetsForPolicy, request, handler, context);
        }

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
        template<typename ListTargetsForSecurityProfileRequestT = Model::ListTargetsForSecurityProfileRequest>
        Model::ListTargetsForSecurityProfileOutcomeCallable ListTargetsForSecurityProfileCallable(const ListTargetsForSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListTargetsForSecurityProfile, request);
        }

        /**
         * An Async wrapper for ListTargetsForSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTargetsForSecurityProfileRequestT = Model::ListTargetsForSecurityProfileRequest>
        void ListTargetsForSecurityProfileAsync(const ListTargetsForSecurityProfileRequestT& request, const ListTargetsForSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListTargetsForSecurityProfile, request, handler, context);
        }

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
        template<typename ListThingGroupsRequestT = Model::ListThingGroupsRequest>
        Model::ListThingGroupsOutcomeCallable ListThingGroupsCallable(const ListThingGroupsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListThingGroups, request);
        }

        /**
         * An Async wrapper for ListThingGroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThingGroupsRequestT = Model::ListThingGroupsRequest>
        void ListThingGroupsAsync(const ListThingGroupsRequestT& request, const ListThingGroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListThingGroups, request, handler, context);
        }

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
        template<typename ListThingGroupsForThingRequestT = Model::ListThingGroupsForThingRequest>
        Model::ListThingGroupsForThingOutcomeCallable ListThingGroupsForThingCallable(const ListThingGroupsForThingRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListThingGroupsForThing, request);
        }

        /**
         * An Async wrapper for ListThingGroupsForThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThingGroupsForThingRequestT = Model::ListThingGroupsForThingRequest>
        void ListThingGroupsForThingAsync(const ListThingGroupsForThingRequestT& request, const ListThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListThingGroupsForThing, request, handler, context);
        }

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
        template<typename ListThingPrincipalsRequestT = Model::ListThingPrincipalsRequest>
        Model::ListThingPrincipalsOutcomeCallable ListThingPrincipalsCallable(const ListThingPrincipalsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListThingPrincipals, request);
        }

        /**
         * An Async wrapper for ListThingPrincipals that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThingPrincipalsRequestT = Model::ListThingPrincipalsRequest>
        void ListThingPrincipalsAsync(const ListThingPrincipalsRequestT& request, const ListThingPrincipalsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListThingPrincipals, request, handler, context);
        }

        /**
         * <p>Information about the thing registration tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/ListThingRegistrationTaskReports">AWS
         * API Reference</a></p>
         */
        virtual Model::ListThingRegistrationTaskReportsOutcome ListThingRegistrationTaskReports(const Model::ListThingRegistrationTaskReportsRequest& request) const;

        /**
         * A Callable wrapper for ListThingRegistrationTaskReports that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListThingRegistrationTaskReportsRequestT = Model::ListThingRegistrationTaskReportsRequest>
        Model::ListThingRegistrationTaskReportsOutcomeCallable ListThingRegistrationTaskReportsCallable(const ListThingRegistrationTaskReportsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListThingRegistrationTaskReports, request);
        }

        /**
         * An Async wrapper for ListThingRegistrationTaskReports that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThingRegistrationTaskReportsRequestT = Model::ListThingRegistrationTaskReportsRequest>
        void ListThingRegistrationTaskReportsAsync(const ListThingRegistrationTaskReportsRequestT& request, const ListThingRegistrationTaskReportsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListThingRegistrationTaskReports, request, handler, context);
        }

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
        template<typename ListThingRegistrationTasksRequestT = Model::ListThingRegistrationTasksRequest>
        Model::ListThingRegistrationTasksOutcomeCallable ListThingRegistrationTasksCallable(const ListThingRegistrationTasksRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListThingRegistrationTasks, request);
        }

        /**
         * An Async wrapper for ListThingRegistrationTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThingRegistrationTasksRequestT = Model::ListThingRegistrationTasksRequest>
        void ListThingRegistrationTasksAsync(const ListThingRegistrationTasksRequestT& request, const ListThingRegistrationTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListThingRegistrationTasks, request, handler, context);
        }

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
        template<typename ListThingTypesRequestT = Model::ListThingTypesRequest>
        Model::ListThingTypesOutcomeCallable ListThingTypesCallable(const ListThingTypesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListThingTypes, request);
        }

        /**
         * An Async wrapper for ListThingTypes that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThingTypesRequestT = Model::ListThingTypesRequest>
        void ListThingTypesAsync(const ListThingTypesRequestT& request, const ListThingTypesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListThingTypes, request, handler, context);
        }

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
        template<typename ListThingsRequestT = Model::ListThingsRequest>
        Model::ListThingsOutcomeCallable ListThingsCallable(const ListThingsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListThings, request);
        }

        /**
         * An Async wrapper for ListThings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThingsRequestT = Model::ListThingsRequest>
        void ListThingsAsync(const ListThingsRequestT& request, const ListThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListThings, request, handler, context);
        }

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
        template<typename ListThingsInBillingGroupRequestT = Model::ListThingsInBillingGroupRequest>
        Model::ListThingsInBillingGroupOutcomeCallable ListThingsInBillingGroupCallable(const ListThingsInBillingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListThingsInBillingGroup, request);
        }

        /**
         * An Async wrapper for ListThingsInBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThingsInBillingGroupRequestT = Model::ListThingsInBillingGroupRequest>
        void ListThingsInBillingGroupAsync(const ListThingsInBillingGroupRequestT& request, const ListThingsInBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListThingsInBillingGroup, request, handler, context);
        }

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
        template<typename ListThingsInThingGroupRequestT = Model::ListThingsInThingGroupRequest>
        Model::ListThingsInThingGroupOutcomeCallable ListThingsInThingGroupCallable(const ListThingsInThingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListThingsInThingGroup, request);
        }

        /**
         * An Async wrapper for ListThingsInThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListThingsInThingGroupRequestT = Model::ListThingsInThingGroupRequest>
        void ListThingsInThingGroupAsync(const ListThingsInThingGroupRequestT& request, const ListThingsInThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListThingsInThingGroup, request, handler, context);
        }

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
        template<typename ListTopicRuleDestinationsRequestT = Model::ListTopicRuleDestinationsRequest>
        Model::ListTopicRuleDestinationsOutcomeCallable ListTopicRuleDestinationsCallable(const ListTopicRuleDestinationsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListTopicRuleDestinations, request);
        }

        /**
         * An Async wrapper for ListTopicRuleDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTopicRuleDestinationsRequestT = Model::ListTopicRuleDestinationsRequest>
        void ListTopicRuleDestinationsAsync(const ListTopicRuleDestinationsRequestT& request, const ListTopicRuleDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListTopicRuleDestinations, request, handler, context);
        }

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
        template<typename ListTopicRulesRequestT = Model::ListTopicRulesRequest>
        Model::ListTopicRulesOutcomeCallable ListTopicRulesCallable(const ListTopicRulesRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListTopicRules, request);
        }

        /**
         * An Async wrapper for ListTopicRules that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTopicRulesRequestT = Model::ListTopicRulesRequest>
        void ListTopicRulesAsync(const ListTopicRulesRequestT& request, const ListTopicRulesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListTopicRules, request, handler, context);
        }

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
        template<typename ListV2LoggingLevelsRequestT = Model::ListV2LoggingLevelsRequest>
        Model::ListV2LoggingLevelsOutcomeCallable ListV2LoggingLevelsCallable(const ListV2LoggingLevelsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListV2LoggingLevels, request);
        }

        /**
         * An Async wrapper for ListV2LoggingLevels that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListV2LoggingLevelsRequestT = Model::ListV2LoggingLevelsRequest>
        void ListV2LoggingLevelsAsync(const ListV2LoggingLevelsRequestT& request, const ListV2LoggingLevelsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListV2LoggingLevels, request, handler, context);
        }

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
        template<typename ListViolationEventsRequestT = Model::ListViolationEventsRequest>
        Model::ListViolationEventsOutcomeCallable ListViolationEventsCallable(const ListViolationEventsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ListViolationEvents, request);
        }

        /**
         * An Async wrapper for ListViolationEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListViolationEventsRequestT = Model::ListViolationEventsRequest>
        void ListViolationEventsAsync(const ListViolationEventsRequestT& request, const ListViolationEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ListViolationEvents, request, handler, context);
        }

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
        template<typename PutVerificationStateOnViolationRequestT = Model::PutVerificationStateOnViolationRequest>
        Model::PutVerificationStateOnViolationOutcomeCallable PutVerificationStateOnViolationCallable(const PutVerificationStateOnViolationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::PutVerificationStateOnViolation, request);
        }

        /**
         * An Async wrapper for PutVerificationStateOnViolation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutVerificationStateOnViolationRequestT = Model::PutVerificationStateOnViolationRequest>
        void PutVerificationStateOnViolationAsync(const PutVerificationStateOnViolationRequestT& request, const PutVerificationStateOnViolationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::PutVerificationStateOnViolation, request, handler, context);
        }

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
        template<typename RegisterCACertificateRequestT = Model::RegisterCACertificateRequest>
        Model::RegisterCACertificateOutcomeCallable RegisterCACertificateCallable(const RegisterCACertificateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::RegisterCACertificate, request);
        }

        /**
         * An Async wrapper for RegisterCACertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterCACertificateRequestT = Model::RegisterCACertificateRequest>
        void RegisterCACertificateAsync(const RegisterCACertificateRequestT& request, const RegisterCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::RegisterCACertificate, request, handler, context);
        }

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
        template<typename RegisterCertificateRequestT = Model::RegisterCertificateRequest>
        Model::RegisterCertificateOutcomeCallable RegisterCertificateCallable(const RegisterCertificateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::RegisterCertificate, request);
        }

        /**
         * An Async wrapper for RegisterCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterCertificateRequestT = Model::RegisterCertificateRequest>
        void RegisterCertificateAsync(const RegisterCertificateRequestT& request, const RegisterCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::RegisterCertificate, request, handler, context);
        }

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
        template<typename RegisterCertificateWithoutCARequestT = Model::RegisterCertificateWithoutCARequest>
        Model::RegisterCertificateWithoutCAOutcomeCallable RegisterCertificateWithoutCACallable(const RegisterCertificateWithoutCARequestT& request) const
        {
            return SubmitCallable(&IoTClient::RegisterCertificateWithoutCA, request);
        }

        /**
         * An Async wrapper for RegisterCertificateWithoutCA that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterCertificateWithoutCARequestT = Model::RegisterCertificateWithoutCARequest>
        void RegisterCertificateWithoutCAAsync(const RegisterCertificateWithoutCARequestT& request, const RegisterCertificateWithoutCAResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::RegisterCertificateWithoutCA, request, handler, context);
        }

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
        template<typename RegisterThingRequestT = Model::RegisterThingRequest>
        Model::RegisterThingOutcomeCallable RegisterThingCallable(const RegisterThingRequestT& request) const
        {
            return SubmitCallable(&IoTClient::RegisterThing, request);
        }

        /**
         * An Async wrapper for RegisterThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterThingRequestT = Model::RegisterThingRequest>
        void RegisterThingAsync(const RegisterThingRequestT& request, const RegisterThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::RegisterThing, request, handler, context);
        }

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
        template<typename RejectCertificateTransferRequestT = Model::RejectCertificateTransferRequest>
        Model::RejectCertificateTransferOutcomeCallable RejectCertificateTransferCallable(const RejectCertificateTransferRequestT& request) const
        {
            return SubmitCallable(&IoTClient::RejectCertificateTransfer, request);
        }

        /**
         * An Async wrapper for RejectCertificateTransfer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RejectCertificateTransferRequestT = Model::RejectCertificateTransferRequest>
        void RejectCertificateTransferAsync(const RejectCertificateTransferRequestT& request, const RejectCertificateTransferResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::RejectCertificateTransfer, request, handler, context);
        }

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
        template<typename RemoveThingFromBillingGroupRequestT = Model::RemoveThingFromBillingGroupRequest>
        Model::RemoveThingFromBillingGroupOutcomeCallable RemoveThingFromBillingGroupCallable(const RemoveThingFromBillingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::RemoveThingFromBillingGroup, request);
        }

        /**
         * An Async wrapper for RemoveThingFromBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveThingFromBillingGroupRequestT = Model::RemoveThingFromBillingGroupRequest>
        void RemoveThingFromBillingGroupAsync(const RemoveThingFromBillingGroupRequestT& request, const RemoveThingFromBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::RemoveThingFromBillingGroup, request, handler, context);
        }

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
        template<typename RemoveThingFromThingGroupRequestT = Model::RemoveThingFromThingGroupRequest>
        Model::RemoveThingFromThingGroupOutcomeCallable RemoveThingFromThingGroupCallable(const RemoveThingFromThingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::RemoveThingFromThingGroup, request);
        }

        /**
         * An Async wrapper for RemoveThingFromThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RemoveThingFromThingGroupRequestT = Model::RemoveThingFromThingGroupRequest>
        void RemoveThingFromThingGroupAsync(const RemoveThingFromThingGroupRequestT& request, const RemoveThingFromThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::RemoveThingFromThingGroup, request, handler, context);
        }

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
        template<typename ReplaceTopicRuleRequestT = Model::ReplaceTopicRuleRequest>
        Model::ReplaceTopicRuleOutcomeCallable ReplaceTopicRuleCallable(const ReplaceTopicRuleRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ReplaceTopicRule, request);
        }

        /**
         * An Async wrapper for ReplaceTopicRule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReplaceTopicRuleRequestT = Model::ReplaceTopicRuleRequest>
        void ReplaceTopicRuleAsync(const ReplaceTopicRuleRequestT& request, const ReplaceTopicRuleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ReplaceTopicRule, request, handler, context);
        }

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
        template<typename SearchIndexRequestT = Model::SearchIndexRequest>
        Model::SearchIndexOutcomeCallable SearchIndexCallable(const SearchIndexRequestT& request) const
        {
            return SubmitCallable(&IoTClient::SearchIndex, request);
        }

        /**
         * An Async wrapper for SearchIndex that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SearchIndexRequestT = Model::SearchIndexRequest>
        void SearchIndexAsync(const SearchIndexRequestT& request, const SearchIndexResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::SearchIndex, request, handler, context);
        }

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
        template<typename SetDefaultAuthorizerRequestT = Model::SetDefaultAuthorizerRequest>
        Model::SetDefaultAuthorizerOutcomeCallable SetDefaultAuthorizerCallable(const SetDefaultAuthorizerRequestT& request) const
        {
            return SubmitCallable(&IoTClient::SetDefaultAuthorizer, request);
        }

        /**
         * An Async wrapper for SetDefaultAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetDefaultAuthorizerRequestT = Model::SetDefaultAuthorizerRequest>
        void SetDefaultAuthorizerAsync(const SetDefaultAuthorizerRequestT& request, const SetDefaultAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::SetDefaultAuthorizer, request, handler, context);
        }

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
        template<typename SetDefaultPolicyVersionRequestT = Model::SetDefaultPolicyVersionRequest>
        Model::SetDefaultPolicyVersionOutcomeCallable SetDefaultPolicyVersionCallable(const SetDefaultPolicyVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::SetDefaultPolicyVersion, request);
        }

        /**
         * An Async wrapper for SetDefaultPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetDefaultPolicyVersionRequestT = Model::SetDefaultPolicyVersionRequest>
        void SetDefaultPolicyVersionAsync(const SetDefaultPolicyVersionRequestT& request, const SetDefaultPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::SetDefaultPolicyVersion, request, handler, context);
        }

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
        template<typename SetLoggingOptionsRequestT = Model::SetLoggingOptionsRequest>
        Model::SetLoggingOptionsOutcomeCallable SetLoggingOptionsCallable(const SetLoggingOptionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::SetLoggingOptions, request);
        }

        /**
         * An Async wrapper for SetLoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetLoggingOptionsRequestT = Model::SetLoggingOptionsRequest>
        void SetLoggingOptionsAsync(const SetLoggingOptionsRequestT& request, const SetLoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::SetLoggingOptions, request, handler, context);
        }

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
        template<typename SetV2LoggingLevelRequestT = Model::SetV2LoggingLevelRequest>
        Model::SetV2LoggingLevelOutcomeCallable SetV2LoggingLevelCallable(const SetV2LoggingLevelRequestT& request) const
        {
            return SubmitCallable(&IoTClient::SetV2LoggingLevel, request);
        }

        /**
         * An Async wrapper for SetV2LoggingLevel that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetV2LoggingLevelRequestT = Model::SetV2LoggingLevelRequest>
        void SetV2LoggingLevelAsync(const SetV2LoggingLevelRequestT& request, const SetV2LoggingLevelResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::SetV2LoggingLevel, request, handler, context);
        }

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
        template<typename SetV2LoggingOptionsRequestT = Model::SetV2LoggingOptionsRequest>
        Model::SetV2LoggingOptionsOutcomeCallable SetV2LoggingOptionsCallable(const SetV2LoggingOptionsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::SetV2LoggingOptions, request);
        }

        /**
         * An Async wrapper for SetV2LoggingOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetV2LoggingOptionsRequestT = Model::SetV2LoggingOptionsRequest>
        void SetV2LoggingOptionsAsync(const SetV2LoggingOptionsRequestT& request, const SetV2LoggingOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::SetV2LoggingOptions, request, handler, context);
        }

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
        template<typename StartAuditMitigationActionsTaskRequestT = Model::StartAuditMitigationActionsTaskRequest>
        Model::StartAuditMitigationActionsTaskOutcomeCallable StartAuditMitigationActionsTaskCallable(const StartAuditMitigationActionsTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::StartAuditMitigationActionsTask, request);
        }

        /**
         * An Async wrapper for StartAuditMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAuditMitigationActionsTaskRequestT = Model::StartAuditMitigationActionsTaskRequest>
        void StartAuditMitigationActionsTaskAsync(const StartAuditMitigationActionsTaskRequestT& request, const StartAuditMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::StartAuditMitigationActionsTask, request, handler, context);
        }

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
        template<typename StartDetectMitigationActionsTaskRequestT = Model::StartDetectMitigationActionsTaskRequest>
        Model::StartDetectMitigationActionsTaskOutcomeCallable StartDetectMitigationActionsTaskCallable(const StartDetectMitigationActionsTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::StartDetectMitigationActionsTask, request);
        }

        /**
         * An Async wrapper for StartDetectMitigationActionsTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDetectMitigationActionsTaskRequestT = Model::StartDetectMitigationActionsTaskRequest>
        void StartDetectMitigationActionsTaskAsync(const StartDetectMitigationActionsTaskRequestT& request, const StartDetectMitigationActionsTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::StartDetectMitigationActionsTask, request, handler, context);
        }

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
        template<typename StartOnDemandAuditTaskRequestT = Model::StartOnDemandAuditTaskRequest>
        Model::StartOnDemandAuditTaskOutcomeCallable StartOnDemandAuditTaskCallable(const StartOnDemandAuditTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::StartOnDemandAuditTask, request);
        }

        /**
         * An Async wrapper for StartOnDemandAuditTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartOnDemandAuditTaskRequestT = Model::StartOnDemandAuditTaskRequest>
        void StartOnDemandAuditTaskAsync(const StartOnDemandAuditTaskRequestT& request, const StartOnDemandAuditTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::StartOnDemandAuditTask, request, handler, context);
        }

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
        template<typename StartThingRegistrationTaskRequestT = Model::StartThingRegistrationTaskRequest>
        Model::StartThingRegistrationTaskOutcomeCallable StartThingRegistrationTaskCallable(const StartThingRegistrationTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::StartThingRegistrationTask, request);
        }

        /**
         * An Async wrapper for StartThingRegistrationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartThingRegistrationTaskRequestT = Model::StartThingRegistrationTaskRequest>
        void StartThingRegistrationTaskAsync(const StartThingRegistrationTaskRequestT& request, const StartThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::StartThingRegistrationTask, request, handler, context);
        }

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
        template<typename StopThingRegistrationTaskRequestT = Model::StopThingRegistrationTaskRequest>
        Model::StopThingRegistrationTaskOutcomeCallable StopThingRegistrationTaskCallable(const StopThingRegistrationTaskRequestT& request) const
        {
            return SubmitCallable(&IoTClient::StopThingRegistrationTask, request);
        }

        /**
         * An Async wrapper for StopThingRegistrationTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopThingRegistrationTaskRequestT = Model::StopThingRegistrationTaskRequest>
        void StopThingRegistrationTaskAsync(const StopThingRegistrationTaskRequestT& request, const StopThingRegistrationTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::StopThingRegistrationTask, request, handler, context);
        }

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
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::TagResource, request, handler, context);
        }

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
        template<typename TestAuthorizationRequestT = Model::TestAuthorizationRequest>
        Model::TestAuthorizationOutcomeCallable TestAuthorizationCallable(const TestAuthorizationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::TestAuthorization, request);
        }

        /**
         * An Async wrapper for TestAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestAuthorizationRequestT = Model::TestAuthorizationRequest>
        void TestAuthorizationAsync(const TestAuthorizationRequestT& request, const TestAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::TestAuthorization, request, handler, context);
        }

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
        template<typename TestInvokeAuthorizerRequestT = Model::TestInvokeAuthorizerRequest>
        Model::TestInvokeAuthorizerOutcomeCallable TestInvokeAuthorizerCallable(const TestInvokeAuthorizerRequestT& request) const
        {
            return SubmitCallable(&IoTClient::TestInvokeAuthorizer, request);
        }

        /**
         * An Async wrapper for TestInvokeAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestInvokeAuthorizerRequestT = Model::TestInvokeAuthorizerRequest>
        void TestInvokeAuthorizerAsync(const TestInvokeAuthorizerRequestT& request, const TestInvokeAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::TestInvokeAuthorizer, request, handler, context);
        }

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
        template<typename TransferCertificateRequestT = Model::TransferCertificateRequest>
        Model::TransferCertificateOutcomeCallable TransferCertificateCallable(const TransferCertificateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::TransferCertificate, request);
        }

        /**
         * An Async wrapper for TransferCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TransferCertificateRequestT = Model::TransferCertificateRequest>
        void TransferCertificateAsync(const TransferCertificateRequestT& request, const TransferCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::TransferCertificate, request, handler, context);
        }

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
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateAccountAuditConfigurationRequestT = Model::UpdateAccountAuditConfigurationRequest>
        Model::UpdateAccountAuditConfigurationOutcomeCallable UpdateAccountAuditConfigurationCallable(const UpdateAccountAuditConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateAccountAuditConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateAccountAuditConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountAuditConfigurationRequestT = Model::UpdateAccountAuditConfigurationRequest>
        void UpdateAccountAuditConfigurationAsync(const UpdateAccountAuditConfigurationRequestT& request, const UpdateAccountAuditConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateAccountAuditConfiguration, request, handler, context);
        }

        /**
         * <p> Updates a Device Defender audit suppression. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateAuditSuppression">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAuditSuppressionOutcome UpdateAuditSuppression(const Model::UpdateAuditSuppressionRequest& request) const;

        /**
         * A Callable wrapper for UpdateAuditSuppression that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAuditSuppressionRequestT = Model::UpdateAuditSuppressionRequest>
        Model::UpdateAuditSuppressionOutcomeCallable UpdateAuditSuppressionCallable(const UpdateAuditSuppressionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateAuditSuppression, request);
        }

        /**
         * An Async wrapper for UpdateAuditSuppression that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAuditSuppressionRequestT = Model::UpdateAuditSuppressionRequest>
        void UpdateAuditSuppressionAsync(const UpdateAuditSuppressionRequestT& request, const UpdateAuditSuppressionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateAuditSuppression, request, handler, context);
        }

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
        template<typename UpdateAuthorizerRequestT = Model::UpdateAuthorizerRequest>
        Model::UpdateAuthorizerOutcomeCallable UpdateAuthorizerCallable(const UpdateAuthorizerRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateAuthorizer, request);
        }

        /**
         * An Async wrapper for UpdateAuthorizer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAuthorizerRequestT = Model::UpdateAuthorizerRequest>
        void UpdateAuthorizerAsync(const UpdateAuthorizerRequestT& request, const UpdateAuthorizerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateAuthorizer, request, handler, context);
        }

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
        template<typename UpdateBillingGroupRequestT = Model::UpdateBillingGroupRequest>
        Model::UpdateBillingGroupOutcomeCallable UpdateBillingGroupCallable(const UpdateBillingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateBillingGroup, request);
        }

        /**
         * An Async wrapper for UpdateBillingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBillingGroupRequestT = Model::UpdateBillingGroupRequest>
        void UpdateBillingGroupAsync(const UpdateBillingGroupRequestT& request, const UpdateBillingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateBillingGroup, request, handler, context);
        }

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
        template<typename UpdateCACertificateRequestT = Model::UpdateCACertificateRequest>
        Model::UpdateCACertificateOutcomeCallable UpdateCACertificateCallable(const UpdateCACertificateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateCACertificate, request);
        }

        /**
         * An Async wrapper for UpdateCACertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCACertificateRequestT = Model::UpdateCACertificateRequest>
        void UpdateCACertificateAsync(const UpdateCACertificateRequestT& request, const UpdateCACertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateCACertificate, request, handler, context);
        }

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
        template<typename UpdateCertificateRequestT = Model::UpdateCertificateRequest>
        Model::UpdateCertificateOutcomeCallable UpdateCertificateCallable(const UpdateCertificateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateCertificate, request);
        }

        /**
         * An Async wrapper for UpdateCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCertificateRequestT = Model::UpdateCertificateRequest>
        void UpdateCertificateAsync(const UpdateCertificateRequestT& request, const UpdateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateCertificate, request, handler, context);
        }

        /**
         * <p>Updates a certificate provider.</p> <p>Requires permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdateCertificateProvider</a>
         * action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdateCertificateProvider">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCertificateProviderOutcome UpdateCertificateProvider(const Model::UpdateCertificateProviderRequest& request) const;

        /**
         * A Callable wrapper for UpdateCertificateProvider that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCertificateProviderRequestT = Model::UpdateCertificateProviderRequest>
        Model::UpdateCertificateProviderOutcomeCallable UpdateCertificateProviderCallable(const UpdateCertificateProviderRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateCertificateProvider, request);
        }

        /**
         * An Async wrapper for UpdateCertificateProvider that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCertificateProviderRequestT = Model::UpdateCertificateProviderRequest>
        void UpdateCertificateProviderAsync(const UpdateCertificateProviderRequestT& request, const UpdateCertificateProviderResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateCertificateProvider, request, handler, context);
        }

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
        template<typename UpdateCustomMetricRequestT = Model::UpdateCustomMetricRequest>
        Model::UpdateCustomMetricOutcomeCallable UpdateCustomMetricCallable(const UpdateCustomMetricRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateCustomMetric, request);
        }

        /**
         * An Async wrapper for UpdateCustomMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCustomMetricRequestT = Model::UpdateCustomMetricRequest>
        void UpdateCustomMetricAsync(const UpdateCustomMetricRequestT& request, const UpdateCustomMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateCustomMetric, request, handler, context);
        }

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
        template<typename UpdateDimensionRequestT = Model::UpdateDimensionRequest>
        Model::UpdateDimensionOutcomeCallable UpdateDimensionCallable(const UpdateDimensionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateDimension, request);
        }

        /**
         * An Async wrapper for UpdateDimension that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDimensionRequestT = Model::UpdateDimensionRequest>
        void UpdateDimensionAsync(const UpdateDimensionRequestT& request, const UpdateDimensionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateDimension, request, handler, context);
        }

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
        template<typename UpdateDomainConfigurationRequestT = Model::UpdateDomainConfigurationRequest>
        Model::UpdateDomainConfigurationOutcomeCallable UpdateDomainConfigurationCallable(const UpdateDomainConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateDomainConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateDomainConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainConfigurationRequestT = Model::UpdateDomainConfigurationRequest>
        void UpdateDomainConfigurationAsync(const UpdateDomainConfigurationRequestT& request, const UpdateDomainConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateDomainConfiguration, request, handler, context);
        }

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
        template<typename UpdateDynamicThingGroupRequestT = Model::UpdateDynamicThingGroupRequest>
        Model::UpdateDynamicThingGroupOutcomeCallable UpdateDynamicThingGroupCallable(const UpdateDynamicThingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateDynamicThingGroup, request);
        }

        /**
         * An Async wrapper for UpdateDynamicThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDynamicThingGroupRequestT = Model::UpdateDynamicThingGroupRequest>
        void UpdateDynamicThingGroupAsync(const UpdateDynamicThingGroupRequestT& request, const UpdateDynamicThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateDynamicThingGroup, request, handler, context);
        }

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
        template<typename UpdateEventConfigurationsRequestT = Model::UpdateEventConfigurationsRequest>
        Model::UpdateEventConfigurationsOutcomeCallable UpdateEventConfigurationsCallable(const UpdateEventConfigurationsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateEventConfigurations, request);
        }

        /**
         * An Async wrapper for UpdateEventConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventConfigurationsRequestT = Model::UpdateEventConfigurationsRequest>
        void UpdateEventConfigurationsAsync(const UpdateEventConfigurationsRequestT& request, const UpdateEventConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateEventConfigurations, request, handler, context);
        }

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
        template<typename UpdateFleetMetricRequestT = Model::UpdateFleetMetricRequest>
        Model::UpdateFleetMetricOutcomeCallable UpdateFleetMetricCallable(const UpdateFleetMetricRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateFleetMetric, request);
        }

        /**
         * An Async wrapper for UpdateFleetMetric that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateFleetMetricRequestT = Model::UpdateFleetMetricRequest>
        void UpdateFleetMetricAsync(const UpdateFleetMetricRequestT& request, const UpdateFleetMetricResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateFleetMetric, request, handler, context);
        }

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
        template<typename UpdateIndexingConfigurationRequestT = Model::UpdateIndexingConfigurationRequest>
        Model::UpdateIndexingConfigurationOutcomeCallable UpdateIndexingConfigurationCallable(const UpdateIndexingConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateIndexingConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateIndexingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateIndexingConfigurationRequestT = Model::UpdateIndexingConfigurationRequest>
        void UpdateIndexingConfigurationAsync(const UpdateIndexingConfigurationRequestT& request, const UpdateIndexingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateIndexingConfiguration, request, handler, context);
        }

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
        template<typename UpdateJobRequestT = Model::UpdateJobRequest>
        Model::UpdateJobOutcomeCallable UpdateJobCallable(const UpdateJobRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateJob, request);
        }

        /**
         * An Async wrapper for UpdateJob that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateJobRequestT = Model::UpdateJobRequest>
        void UpdateJobAsync(const UpdateJobRequestT& request, const UpdateJobResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateJob, request, handler, context);
        }

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
        template<typename UpdateMitigationActionRequestT = Model::UpdateMitigationActionRequest>
        Model::UpdateMitigationActionOutcomeCallable UpdateMitigationActionCallable(const UpdateMitigationActionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateMitigationAction, request);
        }

        /**
         * An Async wrapper for UpdateMitigationAction that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateMitigationActionRequestT = Model::UpdateMitigationActionRequest>
        void UpdateMitigationActionAsync(const UpdateMitigationActionRequestT& request, const UpdateMitigationActionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateMitigationAction, request, handler, context);
        }

        /**
         * <p>Updates the supported fields for a specific software package.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdatePackage</a>
         * and <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetIndexingConfiguration</a>
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdatePackage">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackageOutcome UpdatePackage(const Model::UpdatePackageRequest& request) const;

        /**
         * A Callable wrapper for UpdatePackage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePackageRequestT = Model::UpdatePackageRequest>
        Model::UpdatePackageOutcomeCallable UpdatePackageCallable(const UpdatePackageRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdatePackage, request);
        }

        /**
         * An Async wrapper for UpdatePackage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePackageRequestT = Model::UpdatePackageRequest>
        void UpdatePackageAsync(const UpdatePackageRequestT& request, const UpdatePackageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdatePackage, request, handler, context);
        }

        /**
         * <p>Updates the software package configuration.</p> <p>Requires permission to
         * access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdatePackageConfiguration</a>
         * and <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_use_passrole.html">iam:PassRole</a>
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdatePackageConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackageConfigurationOutcome UpdatePackageConfiguration(const Model::UpdatePackageConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdatePackageConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePackageConfigurationRequestT = Model::UpdatePackageConfigurationRequest>
        Model::UpdatePackageConfigurationOutcomeCallable UpdatePackageConfigurationCallable(const UpdatePackageConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdatePackageConfiguration, request);
        }

        /**
         * An Async wrapper for UpdatePackageConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePackageConfigurationRequestT = Model::UpdatePackageConfigurationRequest>
        void UpdatePackageConfigurationAsync(const UpdatePackageConfigurationRequestT& request, const UpdatePackageConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdatePackageConfiguration, request, handler, context);
        }

        /**
         * <p>Updates the supported fields for a specific package version.</p> <p>Requires
         * permission to access the <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">UpdatePackageVersion</a>
         * and <a
         * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsiot.html#awsiot-actions-as-permissions">GetIndexingConfiguration</a>
         * actions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/UpdatePackageVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdatePackageVersionOutcome UpdatePackageVersion(const Model::UpdatePackageVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdatePackageVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdatePackageVersionRequestT = Model::UpdatePackageVersionRequest>
        Model::UpdatePackageVersionOutcomeCallable UpdatePackageVersionCallable(const UpdatePackageVersionRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdatePackageVersion, request);
        }

        /**
         * An Async wrapper for UpdatePackageVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdatePackageVersionRequestT = Model::UpdatePackageVersionRequest>
        void UpdatePackageVersionAsync(const UpdatePackageVersionRequestT& request, const UpdatePackageVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdatePackageVersion, request, handler, context);
        }

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
        template<typename UpdateProvisioningTemplateRequestT = Model::UpdateProvisioningTemplateRequest>
        Model::UpdateProvisioningTemplateOutcomeCallable UpdateProvisioningTemplateCallable(const UpdateProvisioningTemplateRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateProvisioningTemplate, request);
        }

        /**
         * An Async wrapper for UpdateProvisioningTemplate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateProvisioningTemplateRequestT = Model::UpdateProvisioningTemplateRequest>
        void UpdateProvisioningTemplateAsync(const UpdateProvisioningTemplateRequestT& request, const UpdateProvisioningTemplateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateProvisioningTemplate, request, handler, context);
        }

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
        template<typename UpdateRoleAliasRequestT = Model::UpdateRoleAliasRequest>
        Model::UpdateRoleAliasOutcomeCallable UpdateRoleAliasCallable(const UpdateRoleAliasRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateRoleAlias, request);
        }

        /**
         * An Async wrapper for UpdateRoleAlias that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRoleAliasRequestT = Model::UpdateRoleAliasRequest>
        void UpdateRoleAliasAsync(const UpdateRoleAliasRequestT& request, const UpdateRoleAliasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateRoleAlias, request, handler, context);
        }

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
        template<typename UpdateScheduledAuditRequestT = Model::UpdateScheduledAuditRequest>
        Model::UpdateScheduledAuditOutcomeCallable UpdateScheduledAuditCallable(const UpdateScheduledAuditRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateScheduledAudit, request);
        }

        /**
         * An Async wrapper for UpdateScheduledAudit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateScheduledAuditRequestT = Model::UpdateScheduledAuditRequest>
        void UpdateScheduledAuditAsync(const UpdateScheduledAuditRequestT& request, const UpdateScheduledAuditResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateScheduledAudit, request, handler, context);
        }

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
        template<typename UpdateSecurityProfileRequestT = Model::UpdateSecurityProfileRequest>
        Model::UpdateSecurityProfileOutcomeCallable UpdateSecurityProfileCallable(const UpdateSecurityProfileRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateSecurityProfile, request);
        }

        /**
         * An Async wrapper for UpdateSecurityProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateSecurityProfileRequestT = Model::UpdateSecurityProfileRequest>
        void UpdateSecurityProfileAsync(const UpdateSecurityProfileRequestT& request, const UpdateSecurityProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateSecurityProfile, request, handler, context);
        }

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
        template<typename UpdateStreamRequestT = Model::UpdateStreamRequest>
        Model::UpdateStreamOutcomeCallable UpdateStreamCallable(const UpdateStreamRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateStream, request);
        }

        /**
         * An Async wrapper for UpdateStream that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateStreamRequestT = Model::UpdateStreamRequest>
        void UpdateStreamAsync(const UpdateStreamRequestT& request, const UpdateStreamResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateStream, request, handler, context);
        }

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
        template<typename UpdateThingRequestT = Model::UpdateThingRequest>
        Model::UpdateThingOutcomeCallable UpdateThingCallable(const UpdateThingRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateThing, request);
        }

        /**
         * An Async wrapper for UpdateThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateThingRequestT = Model::UpdateThingRequest>
        void UpdateThingAsync(const UpdateThingRequestT& request, const UpdateThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateThing, request, handler, context);
        }

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
        template<typename UpdateThingGroupRequestT = Model::UpdateThingGroupRequest>
        Model::UpdateThingGroupOutcomeCallable UpdateThingGroupCallable(const UpdateThingGroupRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateThingGroup, request);
        }

        /**
         * An Async wrapper for UpdateThingGroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateThingGroupRequestT = Model::UpdateThingGroupRequest>
        void UpdateThingGroupAsync(const UpdateThingGroupRequestT& request, const UpdateThingGroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateThingGroup, request, handler, context);
        }

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
        template<typename UpdateThingGroupsForThingRequestT = Model::UpdateThingGroupsForThingRequest>
        Model::UpdateThingGroupsForThingOutcomeCallable UpdateThingGroupsForThingCallable(const UpdateThingGroupsForThingRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateThingGroupsForThing, request);
        }

        /**
         * An Async wrapper for UpdateThingGroupsForThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateThingGroupsForThingRequestT = Model::UpdateThingGroupsForThingRequest>
        void UpdateThingGroupsForThingAsync(const UpdateThingGroupsForThingRequestT& request, const UpdateThingGroupsForThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateThingGroupsForThing, request, handler, context);
        }

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
        template<typename UpdateTopicRuleDestinationRequestT = Model::UpdateTopicRuleDestinationRequest>
        Model::UpdateTopicRuleDestinationOutcomeCallable UpdateTopicRuleDestinationCallable(const UpdateTopicRuleDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTClient::UpdateTopicRuleDestination, request);
        }

        /**
         * An Async wrapper for UpdateTopicRuleDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateTopicRuleDestinationRequestT = Model::UpdateTopicRuleDestinationRequest>
        void UpdateTopicRuleDestinationAsync(const UpdateTopicRuleDestinationRequestT& request, const UpdateTopicRuleDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::UpdateTopicRuleDestination, request, handler, context);
        }

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
        template<typename ValidateSecurityProfileBehaviorsRequestT = Model::ValidateSecurityProfileBehaviorsRequest>
        Model::ValidateSecurityProfileBehaviorsOutcomeCallable ValidateSecurityProfileBehaviorsCallable(const ValidateSecurityProfileBehaviorsRequestT& request) const
        {
            return SubmitCallable(&IoTClient::ValidateSecurityProfileBehaviors, request);
        }

        /**
         * An Async wrapper for ValidateSecurityProfileBehaviors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ValidateSecurityProfileBehaviorsRequestT = Model::ValidateSecurityProfileBehaviorsRequest>
        void ValidateSecurityProfileBehaviorsAsync(const ValidateSecurityProfileBehaviorsRequestT& request, const ValidateSecurityProfileBehaviorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTClient::ValidateSecurityProfileBehaviors, request, handler, context);
        }


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
