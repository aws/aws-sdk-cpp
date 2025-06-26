/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot-managed-integrations/IoTManagedIntegrationsServiceClientModel.h>

namespace Aws
{
namespace IoTManagedIntegrations
{
  /**
   * <p>Managed integrations is a feature of AWS IoT Device Management that enables
   * developers to quickly build innovative IoT solutions. Customers can use managed
   * integrations to automate device setup workflows and support interoperability
   * across many devices, regardless of device vendor or connectivity protocol. This
   * allows developers to use a single user-interface to control, manage, and operate
   * a range of devices.</p>
   */
  class AWS_IOTMANAGEDINTEGRATIONS_API IoTManagedIntegrationsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<IoTManagedIntegrationsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef IoTManagedIntegrationsClientConfiguration ClientConfigurationType;
      typedef IoTManagedIntegrationsEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTManagedIntegrationsClient(const Aws::IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration& clientConfiguration = Aws::IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration(),
                                     std::shared_ptr<IoTManagedIntegrationsEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTManagedIntegrationsClient(const Aws::Auth::AWSCredentials& credentials,
                                     std::shared_ptr<IoTManagedIntegrationsEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration& clientConfiguration = Aws::IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTManagedIntegrationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     std::shared_ptr<IoTManagedIntegrationsEndpointProviderBase> endpointProvider = nullptr,
                                     const Aws::IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration& clientConfiguration = Aws::IoTManagedIntegrations::IoTManagedIntegrationsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTManagedIntegrationsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        IoTManagedIntegrationsClient(const Aws::Auth::AWSCredentials& credentials,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        IoTManagedIntegrationsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                                     const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~IoTManagedIntegrationsClient();

        /**
         * <p>Creates a new account association via the destination id.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateAccountAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAccountAssociationOutcome CreateAccountAssociation(const Model::CreateAccountAssociationRequest& request) const;

        /**
         * A Callable wrapper for CreateAccountAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAccountAssociationRequestT = Model::CreateAccountAssociationRequest>
        Model::CreateAccountAssociationOutcomeCallable CreateAccountAssociationCallable(const CreateAccountAssociationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateAccountAssociation, request);
        }

        /**
         * An Async wrapper for CreateAccountAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAccountAssociationRequestT = Model::CreateAccountAssociationRequest>
        void CreateAccountAssociationAsync(const CreateAccountAssociationRequestT& request, const CreateAccountAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateAccountAssociation, request, handler, context);
        }

        /**
         * <p>Creates a C2C (cloud-to-cloud) connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateCloudConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudConnectorOutcome CreateCloudConnector(const Model::CreateCloudConnectorRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCloudConnectorRequestT = Model::CreateCloudConnectorRequest>
        Model::CreateCloudConnectorOutcomeCallable CreateCloudConnectorCallable(const CreateCloudConnectorRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateCloudConnector, request);
        }

        /**
         * An Async wrapper for CreateCloudConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCloudConnectorRequestT = Model::CreateCloudConnectorRequest>
        void CreateCloudConnectorAsync(const CreateCloudConnectorRequestT& request, const CreateCloudConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateCloudConnector, request, handler, context);
        }

        /**
         * <p>Create a connector destination for connecting a cloud-to-cloud (C2C)
         * connector to the customer's Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateConnectorDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateConnectorDestinationOutcome CreateConnectorDestination(const Model::CreateConnectorDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateConnectorDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateConnectorDestinationRequestT = Model::CreateConnectorDestinationRequest>
        Model::CreateConnectorDestinationOutcomeCallable CreateConnectorDestinationCallable(const CreateConnectorDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateConnectorDestination, request);
        }

        /**
         * An Async wrapper for CreateConnectorDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateConnectorDestinationRequestT = Model::CreateConnectorDestinationRequest>
        void CreateConnectorDestinationAsync(const CreateConnectorDestinationRequestT& request, const CreateConnectorDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateConnectorDestination, request, handler, context);
        }

        /**
         * <p>Create a product credential locker. This operation will trigger the creation
         * of all the manufacturing resources including the Wi-Fi setup key pair and device
         * certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateCredentialLocker">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCredentialLockerOutcome CreateCredentialLocker(const Model::CreateCredentialLockerRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateCredentialLocker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCredentialLockerRequestT = Model::CreateCredentialLockerRequest>
        Model::CreateCredentialLockerOutcomeCallable CreateCredentialLockerCallable(const CreateCredentialLockerRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateCredentialLocker, request);
        }

        /**
         * An Async wrapper for CreateCredentialLocker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCredentialLockerRequestT = Model::CreateCredentialLockerRequest>
        void CreateCredentialLockerAsync(const CreateCredentialLockerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateCredentialLockerRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateCredentialLocker, request, handler, context);
        }

        /**
         * <p> Create a destination. IoT managed integrations uses the destination to
         * determine where to deliver notifications for a device. </p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDestinationOutcome CreateDestination(const Model::CreateDestinationRequest& request) const;

        /**
         * A Callable wrapper for CreateDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDestinationRequestT = Model::CreateDestinationRequest>
        Model::CreateDestinationOutcomeCallable CreateDestinationCallable(const CreateDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateDestination, request);
        }

        /**
         * An Async wrapper for CreateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDestinationRequestT = Model::CreateDestinationRequest>
        void CreateDestinationAsync(const CreateDestinationRequestT& request, const CreateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateDestination, request, handler, context);
        }

        /**
         * <p>Set the event log configuration for the account, resource type, or specific
         * resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateEventLogConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEventLogConfigurationOutcome CreateEventLogConfiguration(const Model::CreateEventLogConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateEventLogConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEventLogConfigurationRequestT = Model::CreateEventLogConfigurationRequest>
        Model::CreateEventLogConfigurationOutcomeCallable CreateEventLogConfigurationCallable(const CreateEventLogConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateEventLogConfiguration, request);
        }

        /**
         * An Async wrapper for CreateEventLogConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEventLogConfigurationRequestT = Model::CreateEventLogConfigurationRequest>
        void CreateEventLogConfigurationAsync(const CreateEventLogConfigurationRequestT& request, const CreateEventLogConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateEventLogConfiguration, request, handler, context);
        }

        /**
         * <p>Creates a managed thing. A managed thing contains the device identifier,
         * protocol supported, and capabilities of the device in a protocol-specific
         * format.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateManagedThing">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateManagedThingOutcome CreateManagedThing(const Model::CreateManagedThingRequest& request) const;

        /**
         * A Callable wrapper for CreateManagedThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateManagedThingRequestT = Model::CreateManagedThingRequest>
        Model::CreateManagedThingOutcomeCallable CreateManagedThingCallable(const CreateManagedThingRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateManagedThing, request);
        }

        /**
         * An Async wrapper for CreateManagedThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateManagedThingRequestT = Model::CreateManagedThingRequest>
        void CreateManagedThingAsync(const CreateManagedThingRequestT& request, const CreateManagedThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateManagedThing, request, handler, context);
        }

        /**
         * <p>Creates a notification configuration. A configuration is a connection between
         * an event type and a destination that you have already created. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNotificationConfigurationOutcome CreateNotificationConfiguration(const Model::CreateNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for CreateNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNotificationConfigurationRequestT = Model::CreateNotificationConfigurationRequest>
        Model::CreateNotificationConfigurationOutcomeCallable CreateNotificationConfigurationCallable(const CreateNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for CreateNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNotificationConfigurationRequestT = Model::CreateNotificationConfigurationRequest>
        void CreateNotificationConfigurationAsync(const CreateNotificationConfigurationRequestT& request, const CreateNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Create an over-the-air (OTA) task to update a device.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateOtaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOtaTaskOutcome CreateOtaTask(const Model::CreateOtaTaskRequest& request) const;

        /**
         * A Callable wrapper for CreateOtaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOtaTaskRequestT = Model::CreateOtaTaskRequest>
        Model::CreateOtaTaskOutcomeCallable CreateOtaTaskCallable(const CreateOtaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateOtaTask, request);
        }

        /**
         * An Async wrapper for CreateOtaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOtaTaskRequestT = Model::CreateOtaTaskRequest>
        void CreateOtaTaskAsync(const CreateOtaTaskRequestT& request, const CreateOtaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateOtaTask, request, handler, context);
        }

        /**
         * <p>Create a configuraiton for the over-the-air (OTA) task.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateOtaTaskConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateOtaTaskConfigurationOutcome CreateOtaTaskConfiguration(const Model::CreateOtaTaskConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for CreateOtaTaskConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateOtaTaskConfigurationRequestT = Model::CreateOtaTaskConfigurationRequest>
        Model::CreateOtaTaskConfigurationOutcomeCallable CreateOtaTaskConfigurationCallable(const CreateOtaTaskConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateOtaTaskConfiguration, request);
        }

        /**
         * An Async wrapper for CreateOtaTaskConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateOtaTaskConfigurationRequestT = Model::CreateOtaTaskConfigurationRequest>
        void CreateOtaTaskConfigurationAsync(const CreateOtaTaskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const CreateOtaTaskConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateOtaTaskConfiguration, request, handler, context);
        }

        /**
         * <p>Create a provisioning profile for a device to execute the provisioning flows
         * using a provisioning template. The provisioning template is a document that
         * defines the set of resources and policies applied to a device during the
         * provisioning process.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/CreateProvisioningProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateProvisioningProfileOutcome CreateProvisioningProfile(const Model::CreateProvisioningProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateProvisioningProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateProvisioningProfileRequestT = Model::CreateProvisioningProfileRequest>
        Model::CreateProvisioningProfileOutcomeCallable CreateProvisioningProfileCallable(const CreateProvisioningProfileRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::CreateProvisioningProfile, request);
        }

        /**
         * An Async wrapper for CreateProvisioningProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateProvisioningProfileRequestT = Model::CreateProvisioningProfileRequest>
        void CreateProvisioningProfileAsync(const CreateProvisioningProfileRequestT& request, const CreateProvisioningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::CreateProvisioningProfile, request, handler, context);
        }

        /**
         * <p>Remove a third party account and related devices from an end
         * user.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteAccountAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAccountAssociationOutcome DeleteAccountAssociation(const Model::DeleteAccountAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeleteAccountAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAccountAssociationRequestT = Model::DeleteAccountAssociationRequest>
        Model::DeleteAccountAssociationOutcomeCallable DeleteAccountAssociationCallable(const DeleteAccountAssociationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteAccountAssociation, request);
        }

        /**
         * An Async wrapper for DeleteAccountAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAccountAssociationRequestT = Model::DeleteAccountAssociationRequest>
        void DeleteAccountAssociationAsync(const DeleteAccountAssociationRequestT& request, const DeleteAccountAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteAccountAssociation, request, handler, context);
        }

        /**
         * <p>Delete a cloud connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteCloudConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCloudConnectorOutcome DeleteCloudConnector(const Model::DeleteCloudConnectorRequest& request) const;

        /**
         * A Callable wrapper for DeleteCloudConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCloudConnectorRequestT = Model::DeleteCloudConnectorRequest>
        Model::DeleteCloudConnectorOutcomeCallable DeleteCloudConnectorCallable(const DeleteCloudConnectorRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteCloudConnector, request);
        }

        /**
         * An Async wrapper for DeleteCloudConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCloudConnectorRequestT = Model::DeleteCloudConnectorRequest>
        void DeleteCloudConnectorAsync(const DeleteCloudConnectorRequestT& request, const DeleteCloudConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteCloudConnector, request, handler, context);
        }

        /**
         * <p>Delete a connector destination for connecting a cloud-to-cloud (C2C)
         * connector to the customer's Amazon Web Services account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteConnectorDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteConnectorDestinationOutcome DeleteConnectorDestination(const Model::DeleteConnectorDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteConnectorDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteConnectorDestinationRequestT = Model::DeleteConnectorDestinationRequest>
        Model::DeleteConnectorDestinationOutcomeCallable DeleteConnectorDestinationCallable(const DeleteConnectorDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteConnectorDestination, request);
        }

        /**
         * An Async wrapper for DeleteConnectorDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteConnectorDestinationRequestT = Model::DeleteConnectorDestinationRequest>
        void DeleteConnectorDestinationAsync(const DeleteConnectorDestinationRequestT& request, const DeleteConnectorDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteConnectorDestination, request, handler, context);
        }

        /**
         * <p>Delete a credential locker. </p>  <p>This operation can't be undone and
         * any existing device won't be able to use IoT managed integrations.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteCredentialLocker">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCredentialLockerOutcome DeleteCredentialLocker(const Model::DeleteCredentialLockerRequest& request) const;

        /**
         * A Callable wrapper for DeleteCredentialLocker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCredentialLockerRequestT = Model::DeleteCredentialLockerRequest>
        Model::DeleteCredentialLockerOutcomeCallable DeleteCredentialLockerCallable(const DeleteCredentialLockerRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteCredentialLocker, request);
        }

        /**
         * An Async wrapper for DeleteCredentialLocker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCredentialLockerRequestT = Model::DeleteCredentialLockerRequest>
        void DeleteCredentialLockerAsync(const DeleteCredentialLockerRequestT& request, const DeleteCredentialLockerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteCredentialLocker, request, handler, context);
        }

        /**
         * <p>Deletes a customer-managed destination specified by id. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDestinationOutcome DeleteDestination(const Model::DeleteDestinationRequest& request) const;

        /**
         * A Callable wrapper for DeleteDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDestinationRequestT = Model::DeleteDestinationRequest>
        Model::DeleteDestinationOutcomeCallable DeleteDestinationCallable(const DeleteDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteDestination, request);
        }

        /**
         * An Async wrapper for DeleteDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDestinationRequestT = Model::DeleteDestinationRequest>
        void DeleteDestinationAsync(const DeleteDestinationRequestT& request, const DeleteDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteDestination, request, handler, context);
        }

        /**
         * <p>Delete an event log configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteEventLogConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEventLogConfigurationOutcome DeleteEventLogConfiguration(const Model::DeleteEventLogConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteEventLogConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEventLogConfigurationRequestT = Model::DeleteEventLogConfigurationRequest>
        Model::DeleteEventLogConfigurationOutcomeCallable DeleteEventLogConfigurationCallable(const DeleteEventLogConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteEventLogConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteEventLogConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEventLogConfigurationRequestT = Model::DeleteEventLogConfigurationRequest>
        void DeleteEventLogConfigurationAsync(const DeleteEventLogConfigurationRequestT& request, const DeleteEventLogConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteEventLogConfiguration, request, handler, context);
        }

        /**
         * <p>Delete a managed thing. If a controller is deleted, all of the devices
         * connected to it will have their status changed to <code>PENDING</code>. It is
         * not possible to remove a cloud device.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteManagedThing">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteManagedThingOutcome DeleteManagedThing(const Model::DeleteManagedThingRequest& request) const;

        /**
         * A Callable wrapper for DeleteManagedThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteManagedThingRequestT = Model::DeleteManagedThingRequest>
        Model::DeleteManagedThingOutcomeCallable DeleteManagedThingCallable(const DeleteManagedThingRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteManagedThing, request);
        }

        /**
         * An Async wrapper for DeleteManagedThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteManagedThingRequestT = Model::DeleteManagedThingRequest>
        void DeleteManagedThingAsync(const DeleteManagedThingRequestT& request, const DeleteManagedThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteManagedThing, request, handler, context);
        }

        /**
         * <p>Deletes a notification configuration. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNotificationConfigurationOutcome DeleteNotificationConfiguration(const Model::DeleteNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNotificationConfigurationRequestT = Model::DeleteNotificationConfigurationRequest>
        Model::DeleteNotificationConfigurationOutcomeCallable DeleteNotificationConfigurationCallable(const DeleteNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNotificationConfigurationRequestT = Model::DeleteNotificationConfigurationRequest>
        void DeleteNotificationConfigurationAsync(const DeleteNotificationConfigurationRequestT& request, const DeleteNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Delete the over-the-air (OTA) task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteOtaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOtaTaskOutcome DeleteOtaTask(const Model::DeleteOtaTaskRequest& request) const;

        /**
         * A Callable wrapper for DeleteOtaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOtaTaskRequestT = Model::DeleteOtaTaskRequest>
        Model::DeleteOtaTaskOutcomeCallable DeleteOtaTaskCallable(const DeleteOtaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteOtaTask, request);
        }

        /**
         * An Async wrapper for DeleteOtaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOtaTaskRequestT = Model::DeleteOtaTaskRequest>
        void DeleteOtaTaskAsync(const DeleteOtaTaskRequestT& request, const DeleteOtaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteOtaTask, request, handler, context);
        }

        /**
         * <p>Delete the over-the-air (OTA) task configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteOtaTaskConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteOtaTaskConfigurationOutcome DeleteOtaTaskConfiguration(const Model::DeleteOtaTaskConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteOtaTaskConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteOtaTaskConfigurationRequestT = Model::DeleteOtaTaskConfigurationRequest>
        Model::DeleteOtaTaskConfigurationOutcomeCallable DeleteOtaTaskConfigurationCallable(const DeleteOtaTaskConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteOtaTaskConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteOtaTaskConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteOtaTaskConfigurationRequestT = Model::DeleteOtaTaskConfigurationRequest>
        void DeleteOtaTaskConfigurationAsync(const DeleteOtaTaskConfigurationRequestT& request, const DeleteOtaTaskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteOtaTaskConfiguration, request, handler, context);
        }

        /**
         * <p>Delete a provisioning profile.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeleteProvisioningProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteProvisioningProfileOutcome DeleteProvisioningProfile(const Model::DeleteProvisioningProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteProvisioningProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteProvisioningProfileRequestT = Model::DeleteProvisioningProfileRequest>
        Model::DeleteProvisioningProfileOutcomeCallable DeleteProvisioningProfileCallable(const DeleteProvisioningProfileRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeleteProvisioningProfile, request);
        }

        /**
         * An Async wrapper for DeleteProvisioningProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteProvisioningProfileRequestT = Model::DeleteProvisioningProfileRequest>
        void DeleteProvisioningProfileAsync(const DeleteProvisioningProfileRequestT& request, const DeleteProvisioningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeleteProvisioningProfile, request, handler, context);
        }

        /**
         * <p>Deregisters an account association, removing the connection between a managed
         * thing and a third-party account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/DeregisterAccountAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterAccountAssociationOutcome DeregisterAccountAssociation(const Model::DeregisterAccountAssociationRequest& request) const;

        /**
         * A Callable wrapper for DeregisterAccountAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterAccountAssociationRequestT = Model::DeregisterAccountAssociationRequest>
        Model::DeregisterAccountAssociationOutcomeCallable DeregisterAccountAssociationCallable(const DeregisterAccountAssociationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::DeregisterAccountAssociation, request);
        }

        /**
         * An Async wrapper for DeregisterAccountAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterAccountAssociationRequestT = Model::DeregisterAccountAssociationRequest>
        void DeregisterAccountAssociationAsync(const DeregisterAccountAssociationRequestT& request, const DeregisterAccountAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::DeregisterAccountAssociation, request, handler, context);
        }

        /**
         * <p>Get an account association for an Amazon Web Services account linked to a
         * customer-managed destination.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetAccountAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountAssociationOutcome GetAccountAssociation(const Model::GetAccountAssociationRequest& request) const;

        /**
         * A Callable wrapper for GetAccountAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAccountAssociationRequestT = Model::GetAccountAssociationRequest>
        Model::GetAccountAssociationOutcomeCallable GetAccountAssociationCallable(const GetAccountAssociationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetAccountAssociation, request);
        }

        /**
         * An Async wrapper for GetAccountAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAccountAssociationRequestT = Model::GetAccountAssociationRequest>
        void GetAccountAssociationAsync(const GetAccountAssociationRequestT& request, const GetAccountAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetAccountAssociation, request, handler, context);
        }

        /**
         * <p>Gets all the information about a connector for a connector
         * developer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetCloudConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudConnectorOutcome GetCloudConnector(const Model::GetCloudConnectorRequest& request) const;

        /**
         * A Callable wrapper for GetCloudConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudConnectorRequestT = Model::GetCloudConnectorRequest>
        Model::GetCloudConnectorOutcomeCallable GetCloudConnectorCallable(const GetCloudConnectorRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetCloudConnector, request);
        }

        /**
         * An Async wrapper for GetCloudConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudConnectorRequestT = Model::GetCloudConnectorRequest>
        void GetCloudConnectorAsync(const GetCloudConnectorRequestT& request, const GetCloudConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetCloudConnector, request, handler, context);
        }

        /**
         * <p>Get a connector destination of a cloud-to-cloud (C2C) connector connecting to
         * a customer's Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetConnectorDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetConnectorDestinationOutcome GetConnectorDestination(const Model::GetConnectorDestinationRequest& request) const;

        /**
         * A Callable wrapper for GetConnectorDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetConnectorDestinationRequestT = Model::GetConnectorDestinationRequest>
        Model::GetConnectorDestinationOutcomeCallable GetConnectorDestinationCallable(const GetConnectorDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetConnectorDestination, request);
        }

        /**
         * An Async wrapper for GetConnectorDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetConnectorDestinationRequestT = Model::GetConnectorDestinationRequest>
        void GetConnectorDestinationAsync(const GetConnectorDestinationRequestT& request, const GetConnectorDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetConnectorDestination, request, handler, context);
        }

        /**
         * <p>Get information on an existing credential locker</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetCredentialLocker">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCredentialLockerOutcome GetCredentialLocker(const Model::GetCredentialLockerRequest& request) const;

        /**
         * A Callable wrapper for GetCredentialLocker that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCredentialLockerRequestT = Model::GetCredentialLockerRequest>
        Model::GetCredentialLockerOutcomeCallable GetCredentialLockerCallable(const GetCredentialLockerRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetCredentialLocker, request);
        }

        /**
         * An Async wrapper for GetCredentialLocker that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCredentialLockerRequestT = Model::GetCredentialLockerRequest>
        void GetCredentialLockerAsync(const GetCredentialLockerRequestT& request, const GetCredentialLockerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetCredentialLocker, request, handler, context);
        }

        /**
         * <p>Returns the IoT managed integrations custom endpoint.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetCustomEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCustomEndpointOutcome GetCustomEndpoint(const Model::GetCustomEndpointRequest& request = {}) const;

        /**
         * A Callable wrapper for GetCustomEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCustomEndpointRequestT = Model::GetCustomEndpointRequest>
        Model::GetCustomEndpointOutcomeCallable GetCustomEndpointCallable(const GetCustomEndpointRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetCustomEndpoint, request);
        }

        /**
         * An Async wrapper for GetCustomEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCustomEndpointRequestT = Model::GetCustomEndpointRequest>
        void GetCustomEndpointAsync(const GetCustomEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetCustomEndpointRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetCustomEndpoint, request, handler, context);
        }

        /**
         * <p> Retrieves information about the default encryption configuration for the
         * Amazon Web Services account in the default or specified region. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
         * management</a> in the <i>AWS IoT SiteWise User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetDefaultEncryptionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDefaultEncryptionConfigurationOutcome GetDefaultEncryptionConfiguration(const Model::GetDefaultEncryptionConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetDefaultEncryptionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDefaultEncryptionConfigurationRequestT = Model::GetDefaultEncryptionConfigurationRequest>
        Model::GetDefaultEncryptionConfigurationOutcomeCallable GetDefaultEncryptionConfigurationCallable(const GetDefaultEncryptionConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetDefaultEncryptionConfiguration, request);
        }

        /**
         * An Async wrapper for GetDefaultEncryptionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDefaultEncryptionConfigurationRequestT = Model::GetDefaultEncryptionConfigurationRequest>
        void GetDefaultEncryptionConfigurationAsync(const GetDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetDefaultEncryptionConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetDefaultEncryptionConfiguration, request, handler, context);
        }

        /**
         * <p>Gets a destination by ID. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDestinationOutcome GetDestination(const Model::GetDestinationRequest& request) const;

        /**
         * A Callable wrapper for GetDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDestinationRequestT = Model::GetDestinationRequest>
        Model::GetDestinationOutcomeCallable GetDestinationCallable(const GetDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetDestination, request);
        }

        /**
         * An Async wrapper for GetDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDestinationRequestT = Model::GetDestinationRequest>
        void GetDestinationAsync(const GetDestinationRequestT& request, const GetDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetDestination, request, handler, context);
        }

        /**
         * <p> Get the current state of a device discovery.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetDeviceDiscovery">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDeviceDiscoveryOutcome GetDeviceDiscovery(const Model::GetDeviceDiscoveryRequest& request) const;

        /**
         * A Callable wrapper for GetDeviceDiscovery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDeviceDiscoveryRequestT = Model::GetDeviceDiscoveryRequest>
        Model::GetDeviceDiscoveryOutcomeCallable GetDeviceDiscoveryCallable(const GetDeviceDiscoveryRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetDeviceDiscovery, request);
        }

        /**
         * An Async wrapper for GetDeviceDiscovery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDeviceDiscoveryRequestT = Model::GetDeviceDiscoveryRequest>
        void GetDeviceDiscoveryAsync(const GetDeviceDiscoveryRequestT& request, const GetDeviceDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetDeviceDiscovery, request, handler, context);
        }

        /**
         * <p>Get an event log configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetEventLogConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEventLogConfigurationOutcome GetEventLogConfiguration(const Model::GetEventLogConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetEventLogConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEventLogConfigurationRequestT = Model::GetEventLogConfigurationRequest>
        Model::GetEventLogConfigurationOutcomeCallable GetEventLogConfigurationCallable(const GetEventLogConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetEventLogConfiguration, request);
        }

        /**
         * An Async wrapper for GetEventLogConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEventLogConfigurationRequestT = Model::GetEventLogConfigurationRequest>
        void GetEventLogConfigurationAsync(const GetEventLogConfigurationRequestT& request, const GetEventLogConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetEventLogConfiguration, request, handler, context);
        }

        /**
         * <p>Get a hub configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetHubConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHubConfigurationOutcome GetHubConfiguration(const Model::GetHubConfigurationRequest& request = {}) const;

        /**
         * A Callable wrapper for GetHubConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetHubConfigurationRequestT = Model::GetHubConfigurationRequest>
        Model::GetHubConfigurationOutcomeCallable GetHubConfigurationCallable(const GetHubConfigurationRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetHubConfiguration, request);
        }

        /**
         * An Async wrapper for GetHubConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetHubConfigurationRequestT = Model::GetHubConfigurationRequest>
        void GetHubConfigurationAsync(const GetHubConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const GetHubConfigurationRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetHubConfiguration, request, handler, context);
        }

        /**
         * <p> Get the attributes and capabilities associated with a managed
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetManagedThing">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedThingOutcome GetManagedThing(const Model::GetManagedThingRequest& request) const;

        /**
         * A Callable wrapper for GetManagedThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedThingRequestT = Model::GetManagedThingRequest>
        Model::GetManagedThingOutcomeCallable GetManagedThingCallable(const GetManagedThingRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetManagedThing, request);
        }

        /**
         * An Async wrapper for GetManagedThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedThingRequestT = Model::GetManagedThingRequest>
        void GetManagedThingAsync(const GetManagedThingRequestT& request, const GetManagedThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetManagedThing, request, handler, context);
        }

        /**
         * <p>Get the capabilities for a managed thing using the device ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetManagedThingCapabilities">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedThingCapabilitiesOutcome GetManagedThingCapabilities(const Model::GetManagedThingCapabilitiesRequest& request) const;

        /**
         * A Callable wrapper for GetManagedThingCapabilities that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedThingCapabilitiesRequestT = Model::GetManagedThingCapabilitiesRequest>
        Model::GetManagedThingCapabilitiesOutcomeCallable GetManagedThingCapabilitiesCallable(const GetManagedThingCapabilitiesRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetManagedThingCapabilities, request);
        }

        /**
         * An Async wrapper for GetManagedThingCapabilities that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedThingCapabilitiesRequestT = Model::GetManagedThingCapabilitiesRequest>
        void GetManagedThingCapabilitiesAsync(const GetManagedThingCapabilitiesRequestT& request, const GetManagedThingCapabilitiesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetManagedThingCapabilities, request, handler, context);
        }

        /**
         * <p>Get the connectivity status of a managed thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetManagedThingConnectivityData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedThingConnectivityDataOutcome GetManagedThingConnectivityData(const Model::GetManagedThingConnectivityDataRequest& request) const;

        /**
         * A Callable wrapper for GetManagedThingConnectivityData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedThingConnectivityDataRequestT = Model::GetManagedThingConnectivityDataRequest>
        Model::GetManagedThingConnectivityDataOutcomeCallable GetManagedThingConnectivityDataCallable(const GetManagedThingConnectivityDataRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetManagedThingConnectivityData, request);
        }

        /**
         * An Async wrapper for GetManagedThingConnectivityData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedThingConnectivityDataRequestT = Model::GetManagedThingConnectivityDataRequest>
        void GetManagedThingConnectivityDataAsync(const GetManagedThingConnectivityDataRequestT& request, const GetManagedThingConnectivityDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetManagedThingConnectivityData, request, handler, context);
        }

        /**
         * <p>Get the metadata information for a managed thing.</p>  <p>The
         * <code>managedThing</code> <code>metadata</code> parameter is used for
         * associating attributes with a <code>managedThing</code> that can be used for
         * grouping over-the-air (OTA) tasks. Name value pairs in <code>metadata</code> can
         * be used in the <code>OtaTargetQueryString</code> parameter for the
         * <code>CreateOtaTask</code> API operation.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetManagedThingMetaData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedThingMetaDataOutcome GetManagedThingMetaData(const Model::GetManagedThingMetaDataRequest& request) const;

        /**
         * A Callable wrapper for GetManagedThingMetaData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedThingMetaDataRequestT = Model::GetManagedThingMetaDataRequest>
        Model::GetManagedThingMetaDataOutcomeCallable GetManagedThingMetaDataCallable(const GetManagedThingMetaDataRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetManagedThingMetaData, request);
        }

        /**
         * An Async wrapper for GetManagedThingMetaData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedThingMetaDataRequestT = Model::GetManagedThingMetaDataRequest>
        void GetManagedThingMetaDataAsync(const GetManagedThingMetaDataRequestT& request, const GetManagedThingMetaDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetManagedThingMetaData, request, handler, context);
        }

        /**
         * <p> Returns the managed thing state for the given device Id.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetManagedThingState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetManagedThingStateOutcome GetManagedThingState(const Model::GetManagedThingStateRequest& request) const;

        /**
         * A Callable wrapper for GetManagedThingState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetManagedThingStateRequestT = Model::GetManagedThingStateRequest>
        Model::GetManagedThingStateOutcomeCallable GetManagedThingStateCallable(const GetManagedThingStateRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetManagedThingState, request);
        }

        /**
         * An Async wrapper for GetManagedThingState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetManagedThingStateRequestT = Model::GetManagedThingStateRequest>
        void GetManagedThingStateAsync(const GetManagedThingStateRequestT& request, const GetManagedThingStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetManagedThingState, request, handler, context);
        }

        /**
         * <p> Get a notification configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetNotificationConfigurationOutcome GetNotificationConfiguration(const Model::GetNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetNotificationConfigurationRequestT = Model::GetNotificationConfigurationRequest>
        Model::GetNotificationConfigurationOutcomeCallable GetNotificationConfigurationCallable(const GetNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for GetNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetNotificationConfigurationRequestT = Model::GetNotificationConfigurationRequest>
        void GetNotificationConfigurationAsync(const GetNotificationConfigurationRequestT& request, const GetNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Get the over-the-air (OTA) task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetOtaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOtaTaskOutcome GetOtaTask(const Model::GetOtaTaskRequest& request) const;

        /**
         * A Callable wrapper for GetOtaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOtaTaskRequestT = Model::GetOtaTaskRequest>
        Model::GetOtaTaskOutcomeCallable GetOtaTaskCallable(const GetOtaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetOtaTask, request);
        }

        /**
         * An Async wrapper for GetOtaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOtaTaskRequestT = Model::GetOtaTaskRequest>
        void GetOtaTaskAsync(const GetOtaTaskRequestT& request, const GetOtaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetOtaTask, request, handler, context);
        }

        /**
         * <p>Get a configuraiton for the over-the-air (OTA) task.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetOtaTaskConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOtaTaskConfigurationOutcome GetOtaTaskConfiguration(const Model::GetOtaTaskConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetOtaTaskConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOtaTaskConfigurationRequestT = Model::GetOtaTaskConfigurationRequest>
        Model::GetOtaTaskConfigurationOutcomeCallable GetOtaTaskConfigurationCallable(const GetOtaTaskConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetOtaTaskConfiguration, request);
        }

        /**
         * An Async wrapper for GetOtaTaskConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOtaTaskConfigurationRequestT = Model::GetOtaTaskConfigurationRequest>
        void GetOtaTaskConfigurationAsync(const GetOtaTaskConfigurationRequestT& request, const GetOtaTaskConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetOtaTaskConfiguration, request, handler, context);
        }

        /**
         * <p>Get a provisioning profile by template name.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetProvisioningProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::GetProvisioningProfileOutcome GetProvisioningProfile(const Model::GetProvisioningProfileRequest& request) const;

        /**
         * A Callable wrapper for GetProvisioningProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetProvisioningProfileRequestT = Model::GetProvisioningProfileRequest>
        Model::GetProvisioningProfileOutcomeCallable GetProvisioningProfileCallable(const GetProvisioningProfileRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetProvisioningProfile, request);
        }

        /**
         * An Async wrapper for GetProvisioningProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetProvisioningProfileRequestT = Model::GetProvisioningProfileRequest>
        void GetProvisioningProfileAsync(const GetProvisioningProfileRequestT& request, const GetProvisioningProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetProvisioningProfile, request, handler, context);
        }

        /**
         * <p>Get the runtime log configuration for a specific managed thing or for all
         * managed things as a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetRuntimeLogConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRuntimeLogConfigurationOutcome GetRuntimeLogConfiguration(const Model::GetRuntimeLogConfigurationRequest& request) const;

        /**
         * A Callable wrapper for GetRuntimeLogConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRuntimeLogConfigurationRequestT = Model::GetRuntimeLogConfigurationRequest>
        Model::GetRuntimeLogConfigurationOutcomeCallable GetRuntimeLogConfigurationCallable(const GetRuntimeLogConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetRuntimeLogConfiguration, request);
        }

        /**
         * An Async wrapper for GetRuntimeLogConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRuntimeLogConfigurationRequestT = Model::GetRuntimeLogConfigurationRequest>
        void GetRuntimeLogConfigurationAsync(const GetRuntimeLogConfigurationRequestT& request, const GetRuntimeLogConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetRuntimeLogConfiguration, request, handler, context);
        }

        /**
         * <p>Gets a schema version with the provided information.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/GetSchemaVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSchemaVersionOutcome GetSchemaVersion(const Model::GetSchemaVersionRequest& request) const;

        /**
         * A Callable wrapper for GetSchemaVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSchemaVersionRequestT = Model::GetSchemaVersionRequest>
        Model::GetSchemaVersionOutcomeCallable GetSchemaVersionCallable(const GetSchemaVersionRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::GetSchemaVersion, request);
        }

        /**
         * An Async wrapper for GetSchemaVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSchemaVersionRequestT = Model::GetSchemaVersionRequest>
        void GetSchemaVersionAsync(const GetSchemaVersionRequestT& request, const GetSchemaVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::GetSchemaVersion, request, handler, context);
        }

        /**
         * <p>Lists all account associations, with optional filtering by connector
         * destination ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListAccountAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListAccountAssociationsOutcome ListAccountAssociations(const Model::ListAccountAssociationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListAccountAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAccountAssociationsRequestT = Model::ListAccountAssociationsRequest>
        Model::ListAccountAssociationsOutcomeCallable ListAccountAssociationsCallable(const ListAccountAssociationsRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListAccountAssociations, request);
        }

        /**
         * An Async wrapper for ListAccountAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAccountAssociationsRequestT = Model::ListAccountAssociationsRequest>
        void ListAccountAssociationsAsync(const ListAccountAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListAccountAssociationsRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListAccountAssociations, request, handler, context);
        }

        /**
         * <p>Returns a list of connectors based on permissions. </p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListCloudConnectors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCloudConnectorsOutcome ListCloudConnectors(const Model::ListCloudConnectorsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCloudConnectors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCloudConnectorsRequestT = Model::ListCloudConnectorsRequest>
        Model::ListCloudConnectorsOutcomeCallable ListCloudConnectorsCallable(const ListCloudConnectorsRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListCloudConnectors, request);
        }

        /**
         * An Async wrapper for ListCloudConnectors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCloudConnectorsRequestT = Model::ListCloudConnectorsRequest>
        void ListCloudConnectorsAsync(const ListCloudConnectorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCloudConnectorsRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListCloudConnectors, request, handler, context);
        }

        /**
         * <p>Lists all connector destinations, with optional filtering by cloud connector
         * ID.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListConnectorDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListConnectorDestinationsOutcome ListConnectorDestinations(const Model::ListConnectorDestinationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListConnectorDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListConnectorDestinationsRequestT = Model::ListConnectorDestinationsRequest>
        Model::ListConnectorDestinationsOutcomeCallable ListConnectorDestinationsCallable(const ListConnectorDestinationsRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListConnectorDestinations, request);
        }

        /**
         * An Async wrapper for ListConnectorDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListConnectorDestinationsRequestT = Model::ListConnectorDestinationsRequest>
        void ListConnectorDestinationsAsync(const ListConnectorDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListConnectorDestinationsRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListConnectorDestinations, request, handler, context);
        }

        /**
         * <p>List information on an existing credential locker.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListCredentialLockers">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCredentialLockersOutcome ListCredentialLockers(const Model::ListCredentialLockersRequest& request = {}) const;

        /**
         * A Callable wrapper for ListCredentialLockers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListCredentialLockersRequestT = Model::ListCredentialLockersRequest>
        Model::ListCredentialLockersOutcomeCallable ListCredentialLockersCallable(const ListCredentialLockersRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListCredentialLockers, request);
        }

        /**
         * An Async wrapper for ListCredentialLockers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListCredentialLockersRequestT = Model::ListCredentialLockersRequest>
        void ListCredentialLockersAsync(const ListCredentialLockersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListCredentialLockersRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListCredentialLockers, request, handler, context);
        }

        /**
         * <p> List all destination names under one Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListDestinations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDestinationsOutcome ListDestinations(const Model::ListDestinationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListDestinations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDestinationsRequestT = Model::ListDestinationsRequest>
        Model::ListDestinationsOutcomeCallable ListDestinationsCallable(const ListDestinationsRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListDestinations, request);
        }

        /**
         * An Async wrapper for ListDestinations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDestinationsRequestT = Model::ListDestinationsRequest>
        void ListDestinationsAsync(const ListDestinationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListDestinationsRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListDestinations, request, handler, context);
        }

        /**
         * <p>Lists all device discovery tasks, with optional filtering by type and
         * status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListDeviceDiscoveries">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDeviceDiscoveriesOutcome ListDeviceDiscoveries(const Model::ListDeviceDiscoveriesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListDeviceDiscoveries that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDeviceDiscoveriesRequestT = Model::ListDeviceDiscoveriesRequest>
        Model::ListDeviceDiscoveriesOutcomeCallable ListDeviceDiscoveriesCallable(const ListDeviceDiscoveriesRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListDeviceDiscoveries, request);
        }

        /**
         * An Async wrapper for ListDeviceDiscoveries that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDeviceDiscoveriesRequestT = Model::ListDeviceDiscoveriesRequest>
        void ListDeviceDiscoveriesAsync(const ListDeviceDiscoveriesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListDeviceDiscoveriesRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListDeviceDiscoveries, request, handler, context);
        }

        /**
         * <p>Lists all devices discovered during a specific device discovery
         * task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListDiscoveredDevices">AWS
         * API Reference</a></p>
         */
        virtual Model::ListDiscoveredDevicesOutcome ListDiscoveredDevices(const Model::ListDiscoveredDevicesRequest& request) const;

        /**
         * A Callable wrapper for ListDiscoveredDevices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListDiscoveredDevicesRequestT = Model::ListDiscoveredDevicesRequest>
        Model::ListDiscoveredDevicesOutcomeCallable ListDiscoveredDevicesCallable(const ListDiscoveredDevicesRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListDiscoveredDevices, request);
        }

        /**
         * An Async wrapper for ListDiscoveredDevices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListDiscoveredDevicesRequestT = Model::ListDiscoveredDevicesRequest>
        void ListDiscoveredDevicesAsync(const ListDiscoveredDevicesRequestT& request, const ListDiscoveredDevicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListDiscoveredDevices, request, handler, context);
        }

        /**
         * <p>List all event log configurations for an account.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListEventLogConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEventLogConfigurationsOutcome ListEventLogConfigurations(const Model::ListEventLogConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListEventLogConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEventLogConfigurationsRequestT = Model::ListEventLogConfigurationsRequest>
        Model::ListEventLogConfigurationsOutcomeCallable ListEventLogConfigurationsCallable(const ListEventLogConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListEventLogConfigurations, request);
        }

        /**
         * An Async wrapper for ListEventLogConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEventLogConfigurationsRequestT = Model::ListEventLogConfigurationsRequest>
        void ListEventLogConfigurationsAsync(const ListEventLogConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListEventLogConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListEventLogConfigurations, request, handler, context);
        }

        /**
         * <p>Lists all account associations for a specific managed thing.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListManagedThingAccountAssociations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedThingAccountAssociationsOutcome ListManagedThingAccountAssociations(const Model::ListManagedThingAccountAssociationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListManagedThingAccountAssociations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedThingAccountAssociationsRequestT = Model::ListManagedThingAccountAssociationsRequest>
        Model::ListManagedThingAccountAssociationsOutcomeCallable ListManagedThingAccountAssociationsCallable(const ListManagedThingAccountAssociationsRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListManagedThingAccountAssociations, request);
        }

        /**
         * An Async wrapper for ListManagedThingAccountAssociations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedThingAccountAssociationsRequestT = Model::ListManagedThingAccountAssociationsRequest>
        void ListManagedThingAccountAssociationsAsync(const ListManagedThingAccountAssociationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListManagedThingAccountAssociationsRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListManagedThingAccountAssociations, request, handler, context);
        }

        /**
         * <p>List schemas associated with a managed thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListManagedThingSchemas">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedThingSchemasOutcome ListManagedThingSchemas(const Model::ListManagedThingSchemasRequest& request) const;

        /**
         * A Callable wrapper for ListManagedThingSchemas that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedThingSchemasRequestT = Model::ListManagedThingSchemasRequest>
        Model::ListManagedThingSchemasOutcomeCallable ListManagedThingSchemasCallable(const ListManagedThingSchemasRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListManagedThingSchemas, request);
        }

        /**
         * An Async wrapper for ListManagedThingSchemas that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedThingSchemasRequestT = Model::ListManagedThingSchemasRequest>
        void ListManagedThingSchemasAsync(const ListManagedThingSchemasRequestT& request, const ListManagedThingSchemasResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListManagedThingSchemas, request, handler, context);
        }

        /**
         * <p>Listing all managed things with provision for filters.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListManagedThings">AWS
         * API Reference</a></p>
         */
        virtual Model::ListManagedThingsOutcome ListManagedThings(const Model::ListManagedThingsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListManagedThings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListManagedThingsRequestT = Model::ListManagedThingsRequest>
        Model::ListManagedThingsOutcomeCallable ListManagedThingsCallable(const ListManagedThingsRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListManagedThings, request);
        }

        /**
         * An Async wrapper for ListManagedThings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListManagedThingsRequestT = Model::ListManagedThingsRequest>
        void ListManagedThingsAsync(const ListManagedThingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListManagedThingsRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListManagedThings, request, handler, context);
        }

        /**
         * <p> List all notification configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListNotificationConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNotificationConfigurationsOutcome ListNotificationConfigurations(const Model::ListNotificationConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListNotificationConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNotificationConfigurationsRequestT = Model::ListNotificationConfigurationsRequest>
        Model::ListNotificationConfigurationsOutcomeCallable ListNotificationConfigurationsCallable(const ListNotificationConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListNotificationConfigurations, request);
        }

        /**
         * An Async wrapper for ListNotificationConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNotificationConfigurationsRequestT = Model::ListNotificationConfigurationsRequest>
        void ListNotificationConfigurationsAsync(const ListNotificationConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListNotificationConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListNotificationConfigurations, request, handler, context);
        }

        /**
         * <p>List all of the over-the-air (OTA) task configurations.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListOtaTaskConfigurations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOtaTaskConfigurationsOutcome ListOtaTaskConfigurations(const Model::ListOtaTaskConfigurationsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListOtaTaskConfigurations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOtaTaskConfigurationsRequestT = Model::ListOtaTaskConfigurationsRequest>
        Model::ListOtaTaskConfigurationsOutcomeCallable ListOtaTaskConfigurationsCallable(const ListOtaTaskConfigurationsRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListOtaTaskConfigurations, request);
        }

        /**
         * An Async wrapper for ListOtaTaskConfigurations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOtaTaskConfigurationsRequestT = Model::ListOtaTaskConfigurationsRequest>
        void ListOtaTaskConfigurationsAsync(const ListOtaTaskConfigurationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListOtaTaskConfigurationsRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListOtaTaskConfigurations, request, handler, context);
        }

        /**
         * <p>List all of the over-the-air (OTA) task executions.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListOtaTaskExecutions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOtaTaskExecutionsOutcome ListOtaTaskExecutions(const Model::ListOtaTaskExecutionsRequest& request) const;

        /**
         * A Callable wrapper for ListOtaTaskExecutions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOtaTaskExecutionsRequestT = Model::ListOtaTaskExecutionsRequest>
        Model::ListOtaTaskExecutionsOutcomeCallable ListOtaTaskExecutionsCallable(const ListOtaTaskExecutionsRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListOtaTaskExecutions, request);
        }

        /**
         * An Async wrapper for ListOtaTaskExecutions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOtaTaskExecutionsRequestT = Model::ListOtaTaskExecutionsRequest>
        void ListOtaTaskExecutionsAsync(const ListOtaTaskExecutionsRequestT& request, const ListOtaTaskExecutionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListOtaTaskExecutions, request, handler, context);
        }

        /**
         * <p>List all of the over-the-air (OTA) tasks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListOtaTasks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListOtaTasksOutcome ListOtaTasks(const Model::ListOtaTasksRequest& request = {}) const;

        /**
         * A Callable wrapper for ListOtaTasks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListOtaTasksRequestT = Model::ListOtaTasksRequest>
        Model::ListOtaTasksOutcomeCallable ListOtaTasksCallable(const ListOtaTasksRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListOtaTasks, request);
        }

        /**
         * An Async wrapper for ListOtaTasks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListOtaTasksRequestT = Model::ListOtaTasksRequest>
        void ListOtaTasksAsync(const ListOtaTasksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListOtaTasksRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListOtaTasks, request, handler, context);
        }

        /**
         * <p>List the provisioning profiles within the Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListProvisioningProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListProvisioningProfilesOutcome ListProvisioningProfiles(const Model::ListProvisioningProfilesRequest& request = {}) const;

        /**
         * A Callable wrapper for ListProvisioningProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListProvisioningProfilesRequestT = Model::ListProvisioningProfilesRequest>
        Model::ListProvisioningProfilesOutcomeCallable ListProvisioningProfilesCallable(const ListProvisioningProfilesRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListProvisioningProfiles, request);
        }

        /**
         * An Async wrapper for ListProvisioningProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListProvisioningProfilesRequestT = Model::ListProvisioningProfilesRequest>
        void ListProvisioningProfilesAsync(const ListProvisioningProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListProvisioningProfilesRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListProvisioningProfiles, request, handler, context);
        }

        /**
         * <p>Lists schema versions with the provided information.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListSchemaVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListSchemaVersionsOutcome ListSchemaVersions(const Model::ListSchemaVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListSchemaVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListSchemaVersionsRequestT = Model::ListSchemaVersionsRequest>
        Model::ListSchemaVersionsOutcomeCallable ListSchemaVersionsCallable(const ListSchemaVersionsRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListSchemaVersions, request);
        }

        /**
         * An Async wrapper for ListSchemaVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListSchemaVersionsRequestT = Model::ListSchemaVersionsRequest>
        void ListSchemaVersionsAsync(const ListSchemaVersionsRequestT& request, const ListSchemaVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListSchemaVersions, request, handler, context);
        }

        /**
         * <p>List tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Sets the default encryption configuration for the Amazon Web Services
         * account. For more information, see <a
         * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/key-management.html">Key
         * management</a> in the AWS IoT SiteWise User Guide.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/PutDefaultEncryptionConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutDefaultEncryptionConfigurationOutcome PutDefaultEncryptionConfiguration(const Model::PutDefaultEncryptionConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutDefaultEncryptionConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutDefaultEncryptionConfigurationRequestT = Model::PutDefaultEncryptionConfigurationRequest>
        Model::PutDefaultEncryptionConfigurationOutcomeCallable PutDefaultEncryptionConfigurationCallable(const PutDefaultEncryptionConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::PutDefaultEncryptionConfiguration, request);
        }

        /**
         * An Async wrapper for PutDefaultEncryptionConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutDefaultEncryptionConfigurationRequestT = Model::PutDefaultEncryptionConfigurationRequest>
        void PutDefaultEncryptionConfigurationAsync(const PutDefaultEncryptionConfigurationRequestT& request, const PutDefaultEncryptionConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::PutDefaultEncryptionConfiguration, request, handler, context);
        }

        /**
         * <p>Update a hub configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/PutHubConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutHubConfigurationOutcome PutHubConfiguration(const Model::PutHubConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutHubConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutHubConfigurationRequestT = Model::PutHubConfigurationRequest>
        Model::PutHubConfigurationOutcomeCallable PutHubConfigurationCallable(const PutHubConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::PutHubConfiguration, request);
        }

        /**
         * An Async wrapper for PutHubConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutHubConfigurationRequestT = Model::PutHubConfigurationRequest>
        void PutHubConfigurationAsync(const PutHubConfigurationRequestT& request, const PutHubConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::PutHubConfiguration, request, handler, context);
        }

        /**
         * <p>Set the runtime log configuration for a specific managed thing or for all
         * managed things as a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/PutRuntimeLogConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::PutRuntimeLogConfigurationOutcome PutRuntimeLogConfiguration(const Model::PutRuntimeLogConfigurationRequest& request) const;

        /**
         * A Callable wrapper for PutRuntimeLogConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutRuntimeLogConfigurationRequestT = Model::PutRuntimeLogConfigurationRequest>
        Model::PutRuntimeLogConfigurationOutcomeCallable PutRuntimeLogConfigurationCallable(const PutRuntimeLogConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::PutRuntimeLogConfiguration, request);
        }

        /**
         * An Async wrapper for PutRuntimeLogConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutRuntimeLogConfigurationRequestT = Model::PutRuntimeLogConfigurationRequest>
        void PutRuntimeLogConfigurationAsync(const PutRuntimeLogConfigurationRequestT& request, const PutRuntimeLogConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::PutRuntimeLogConfiguration, request, handler, context);
        }

        /**
         * <p>Registers an account association with a managed thing, establishing a
         * connection between a device and a third-party account.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/RegisterAccountAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterAccountAssociationOutcome RegisterAccountAssociation(const Model::RegisterAccountAssociationRequest& request) const;

        /**
         * A Callable wrapper for RegisterAccountAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterAccountAssociationRequestT = Model::RegisterAccountAssociationRequest>
        Model::RegisterAccountAssociationOutcomeCallable RegisterAccountAssociationCallable(const RegisterAccountAssociationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::RegisterAccountAssociation, request);
        }

        /**
         * An Async wrapper for RegisterAccountAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterAccountAssociationRequestT = Model::RegisterAccountAssociationRequest>
        void RegisterAccountAssociationAsync(const RegisterAccountAssociationRequestT& request, const RegisterAccountAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::RegisterAccountAssociation, request, handler, context);
        }

        /**
         * <p>Customers can request IoT managed integrations to manage the server trust for
         * them or bring their own external server trusts for the custom domain. Returns an
         * IoT managed integrations endpoint.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/RegisterCustomEndpoint">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterCustomEndpointOutcome RegisterCustomEndpoint(const Model::RegisterCustomEndpointRequest& request = {}) const;

        /**
         * A Callable wrapper for RegisterCustomEndpoint that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterCustomEndpointRequestT = Model::RegisterCustomEndpointRequest>
        Model::RegisterCustomEndpointOutcomeCallable RegisterCustomEndpointCallable(const RegisterCustomEndpointRequestT& request = {}) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::RegisterCustomEndpoint, request);
        }

        /**
         * An Async wrapper for RegisterCustomEndpoint that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterCustomEndpointRequestT = Model::RegisterCustomEndpointRequest>
        void RegisterCustomEndpointAsync(const RegisterCustomEndpointResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const RegisterCustomEndpointRequestT& request = {}) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::RegisterCustomEndpoint, request, handler, context);
        }

        /**
         * <p>Reset a runtime log configuration for a specific managed thing or for all
         * managed things as a group.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/ResetRuntimeLogConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetRuntimeLogConfigurationOutcome ResetRuntimeLogConfiguration(const Model::ResetRuntimeLogConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ResetRuntimeLogConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetRuntimeLogConfigurationRequestT = Model::ResetRuntimeLogConfigurationRequest>
        Model::ResetRuntimeLogConfigurationOutcomeCallable ResetRuntimeLogConfigurationCallable(const ResetRuntimeLogConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::ResetRuntimeLogConfiguration, request);
        }

        /**
         * An Async wrapper for ResetRuntimeLogConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetRuntimeLogConfigurationRequestT = Model::ResetRuntimeLogConfigurationRequest>
        void ResetRuntimeLogConfigurationAsync(const ResetRuntimeLogConfigurationRequestT& request, const ResetRuntimeLogConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::ResetRuntimeLogConfiguration, request, handler, context);
        }

        /**
         * <p>Relays third-party device events for a connector such as a new device or a
         * device state change event.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/SendConnectorEvent">AWS
         * API Reference</a></p>
         */
        virtual Model::SendConnectorEventOutcome SendConnectorEvent(const Model::SendConnectorEventRequest& request) const;

        /**
         * A Callable wrapper for SendConnectorEvent that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendConnectorEventRequestT = Model::SendConnectorEventRequest>
        Model::SendConnectorEventOutcomeCallable SendConnectorEventCallable(const SendConnectorEventRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::SendConnectorEvent, request);
        }

        /**
         * An Async wrapper for SendConnectorEvent that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendConnectorEventRequestT = Model::SendConnectorEventRequest>
        void SendConnectorEventAsync(const SendConnectorEventRequestT& request, const SendConnectorEventResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::SendConnectorEvent, request, handler, context);
        }

        /**
         * <p>Send the command to the device represented by the managed thing.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/SendManagedThingCommand">AWS
         * API Reference</a></p>
         */
        virtual Model::SendManagedThingCommandOutcome SendManagedThingCommand(const Model::SendManagedThingCommandRequest& request) const;

        /**
         * A Callable wrapper for SendManagedThingCommand that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendManagedThingCommandRequestT = Model::SendManagedThingCommandRequest>
        Model::SendManagedThingCommandOutcomeCallable SendManagedThingCommandCallable(const SendManagedThingCommandRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::SendManagedThingCommand, request);
        }

        /**
         * An Async wrapper for SendManagedThingCommand that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendManagedThingCommandRequestT = Model::SendManagedThingCommandRequest>
        void SendManagedThingCommandAsync(const SendManagedThingCommandRequestT& request, const SendManagedThingCommandResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::SendManagedThingCommand, request, handler, context);
        }

        /**
         * <p>Initiates a refresh of an existing account association to update its
         * authorization and connection status.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/StartAccountAssociationRefresh">AWS
         * API Reference</a></p>
         */
        virtual Model::StartAccountAssociationRefreshOutcome StartAccountAssociationRefresh(const Model::StartAccountAssociationRefreshRequest& request) const;

        /**
         * A Callable wrapper for StartAccountAssociationRefresh that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartAccountAssociationRefreshRequestT = Model::StartAccountAssociationRefreshRequest>
        Model::StartAccountAssociationRefreshOutcomeCallable StartAccountAssociationRefreshCallable(const StartAccountAssociationRefreshRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::StartAccountAssociationRefresh, request);
        }

        /**
         * An Async wrapper for StartAccountAssociationRefresh that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartAccountAssociationRefreshRequestT = Model::StartAccountAssociationRefreshRequest>
        void StartAccountAssociationRefreshAsync(const StartAccountAssociationRefreshRequestT& request, const StartAccountAssociationRefreshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::StartAccountAssociationRefresh, request, handler, context);
        }

        /**
         * <p> This API is used to start device discovery for hub-connected and
         * third-party-connected devices. The authentication material (install code) is
         * passed as a message to the controller telling it to start the
         * discovery.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/StartDeviceDiscovery">AWS
         * API Reference</a></p>
         */
        virtual Model::StartDeviceDiscoveryOutcome StartDeviceDiscovery(const Model::StartDeviceDiscoveryRequest& request) const;

        /**
         * A Callable wrapper for StartDeviceDiscovery that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartDeviceDiscoveryRequestT = Model::StartDeviceDiscoveryRequest>
        Model::StartDeviceDiscoveryOutcomeCallable StartDeviceDiscoveryCallable(const StartDeviceDiscoveryRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::StartDeviceDiscovery, request);
        }

        /**
         * An Async wrapper for StartDeviceDiscovery that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartDeviceDiscoveryRequestT = Model::StartDeviceDiscoveryRequest>
        void StartDeviceDiscoveryAsync(const StartDeviceDiscoveryRequestT& request, const StartDeviceDiscoveryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::StartDeviceDiscovery, request, handler, context);
        }

        /**
         * <p>Add tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Remove tags for the specified resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates the properties of an existing account association.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/UpdateAccountAssociation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateAccountAssociationOutcome UpdateAccountAssociation(const Model::UpdateAccountAssociationRequest& request) const;

        /**
         * A Callable wrapper for UpdateAccountAssociation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAccountAssociationRequestT = Model::UpdateAccountAssociationRequest>
        Model::UpdateAccountAssociationOutcomeCallable UpdateAccountAssociationCallable(const UpdateAccountAssociationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::UpdateAccountAssociation, request);
        }

        /**
         * An Async wrapper for UpdateAccountAssociation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAccountAssociationRequestT = Model::UpdateAccountAssociationRequest>
        void UpdateAccountAssociationAsync(const UpdateAccountAssociationRequestT& request, const UpdateAccountAssociationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::UpdateAccountAssociation, request, handler, context);
        }

        /**
         * <p>Update an existing cloud connector.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/UpdateCloudConnector">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateCloudConnectorOutcome UpdateCloudConnector(const Model::UpdateCloudConnectorRequest& request) const;

        /**
         * A Callable wrapper for UpdateCloudConnector that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateCloudConnectorRequestT = Model::UpdateCloudConnectorRequest>
        Model::UpdateCloudConnectorOutcomeCallable UpdateCloudConnectorCallable(const UpdateCloudConnectorRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::UpdateCloudConnector, request);
        }

        /**
         * An Async wrapper for UpdateCloudConnector that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateCloudConnectorRequestT = Model::UpdateCloudConnectorRequest>
        void UpdateCloudConnectorAsync(const UpdateCloudConnectorRequestT& request, const UpdateCloudConnectorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::UpdateCloudConnector, request, handler, context);
        }

        /**
         * <p>Updates the properties of an existing connector destination.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/UpdateConnectorDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateConnectorDestinationOutcome UpdateConnectorDestination(const Model::UpdateConnectorDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateConnectorDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateConnectorDestinationRequestT = Model::UpdateConnectorDestinationRequest>
        Model::UpdateConnectorDestinationOutcomeCallable UpdateConnectorDestinationCallable(const UpdateConnectorDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::UpdateConnectorDestination, request);
        }

        /**
         * An Async wrapper for UpdateConnectorDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateConnectorDestinationRequestT = Model::UpdateConnectorDestinationRequest>
        void UpdateConnectorDestinationAsync(const UpdateConnectorDestinationRequestT& request, const UpdateConnectorDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::UpdateConnectorDestination, request, handler, context);
        }

        /**
         * <p> Update a destination specified by id. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/UpdateDestination">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDestinationOutcome UpdateDestination(const Model::UpdateDestinationRequest& request) const;

        /**
         * A Callable wrapper for UpdateDestination that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDestinationRequestT = Model::UpdateDestinationRequest>
        Model::UpdateDestinationOutcomeCallable UpdateDestinationCallable(const UpdateDestinationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::UpdateDestination, request);
        }

        /**
         * An Async wrapper for UpdateDestination that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDestinationRequestT = Model::UpdateDestinationRequest>
        void UpdateDestinationAsync(const UpdateDestinationRequestT& request, const UpdateDestinationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::UpdateDestination, request, handler, context);
        }

        /**
         * <p>Update an event log configuration by log configuration ID.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/UpdateEventLogConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEventLogConfigurationOutcome UpdateEventLogConfiguration(const Model::UpdateEventLogConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateEventLogConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEventLogConfigurationRequestT = Model::UpdateEventLogConfigurationRequest>
        Model::UpdateEventLogConfigurationOutcomeCallable UpdateEventLogConfigurationCallable(const UpdateEventLogConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::UpdateEventLogConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateEventLogConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEventLogConfigurationRequestT = Model::UpdateEventLogConfigurationRequest>
        void UpdateEventLogConfigurationAsync(const UpdateEventLogConfigurationRequestT& request, const UpdateEventLogConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::UpdateEventLogConfiguration, request, handler, context);
        }

        /**
         * <p>Update the attributes and capabilities associated with a managed
         * thing.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/UpdateManagedThing">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateManagedThingOutcome UpdateManagedThing(const Model::UpdateManagedThingRequest& request) const;

        /**
         * A Callable wrapper for UpdateManagedThing that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateManagedThingRequestT = Model::UpdateManagedThingRequest>
        Model::UpdateManagedThingOutcomeCallable UpdateManagedThingCallable(const UpdateManagedThingRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::UpdateManagedThing, request);
        }

        /**
         * An Async wrapper for UpdateManagedThing that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateManagedThingRequestT = Model::UpdateManagedThingRequest>
        void UpdateManagedThingAsync(const UpdateManagedThingRequestT& request, const UpdateManagedThingResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::UpdateManagedThing, request, handler, context);
        }

        /**
         * <p> Update a notification configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/UpdateNotificationConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNotificationConfigurationOutcome UpdateNotificationConfiguration(const Model::UpdateNotificationConfigurationRequest& request) const;

        /**
         * A Callable wrapper for UpdateNotificationConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNotificationConfigurationRequestT = Model::UpdateNotificationConfigurationRequest>
        Model::UpdateNotificationConfigurationOutcomeCallable UpdateNotificationConfigurationCallable(const UpdateNotificationConfigurationRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::UpdateNotificationConfiguration, request);
        }

        /**
         * An Async wrapper for UpdateNotificationConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNotificationConfigurationRequestT = Model::UpdateNotificationConfigurationRequest>
        void UpdateNotificationConfigurationAsync(const UpdateNotificationConfigurationRequestT& request, const UpdateNotificationConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::UpdateNotificationConfiguration, request, handler, context);
        }

        /**
         * <p>Update an over-the-air (OTA) task.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/UpdateOtaTask">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateOtaTaskOutcome UpdateOtaTask(const Model::UpdateOtaTaskRequest& request) const;

        /**
         * A Callable wrapper for UpdateOtaTask that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateOtaTaskRequestT = Model::UpdateOtaTaskRequest>
        Model::UpdateOtaTaskOutcomeCallable UpdateOtaTaskCallable(const UpdateOtaTaskRequestT& request) const
        {
            return SubmitCallable(&IoTManagedIntegrationsClient::UpdateOtaTask, request);
        }

        /**
         * An Async wrapper for UpdateOtaTask that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateOtaTaskRequestT = Model::UpdateOtaTaskRequest>
        void UpdateOtaTaskAsync(const UpdateOtaTaskRequestT& request, const UpdateOtaTaskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&IoTManagedIntegrationsClient::UpdateOtaTask, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<IoTManagedIntegrationsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<IoTManagedIntegrationsClient>;
      void init(const IoTManagedIntegrationsClientConfiguration& clientConfiguration);

      IoTManagedIntegrationsClientConfiguration m_clientConfiguration;
      std::shared_ptr<IoTManagedIntegrationsEndpointProviderBase> m_endpointProvider;
  };

} // namespace IoTManagedIntegrations
} // namespace Aws
