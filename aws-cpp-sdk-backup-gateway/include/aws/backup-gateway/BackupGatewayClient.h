/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/backup-gateway/BackupGatewayServiceClientModel.h>

namespace Aws
{
namespace BackupGateway
{
  /**
   * <p><fullname>Backup gateway</fullname> <p>Backup gateway connects Backup to your
   * hypervisor, so you can create, store, and restore backups of your virtual
   * machines (VMs) anywhere, whether on-premises or in the VMware Cloud (VMC) on
   * Amazon Web Services.</p> <p>Add on-premises resources by connecting to a
   * hypervisor through a gateway. Backup will automatically discover the resources
   * in your hypervisor.</p> <p>Use Backup to assign virtual or on-premises resources
   * to a backup plan, or run on-demand backups. Once you have backed up your
   * resources, you can view them and restore them like any resource supported by
   * Backup.</p> <p>To download the Amazon Web Services software to get started,
   * navigate to the Backup console, choose <b>Gateways</b>, then choose <b>Create
   * gateway</b>.</p></p>
   */
  class AWS_BACKUPGATEWAY_API BackupGatewayClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupGatewayClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupGatewayClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupGatewayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~BackupGatewayClient();


        /**
         * <p>Associates a backup gateway with your server. After you complete the
         * association process, you can back up and restore your VMs through the
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/AssociateGatewayToServer">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateGatewayToServerOutcome AssociateGatewayToServer(const Model::AssociateGatewayToServerRequest& request) const;

        /**
         * A Callable wrapper for AssociateGatewayToServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateGatewayToServerOutcomeCallable AssociateGatewayToServerCallable(const Model::AssociateGatewayToServerRequest& request) const;

        /**
         * An Async wrapper for AssociateGatewayToServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateGatewayToServerAsync(const Model::AssociateGatewayToServerRequest& request, const AssociateGatewayToServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a backup gateway. After you create a gateway, you can associate it
         * with a server using the <code>AssociateGatewayToServer</code>
         * operation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/CreateGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGatewayOutcome CreateGateway(const Model::CreateGatewayRequest& request) const;

        /**
         * A Callable wrapper for CreateGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateGatewayOutcomeCallable CreateGatewayCallable(const Model::CreateGatewayRequest& request) const;

        /**
         * An Async wrapper for CreateGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateGatewayAsync(const Model::CreateGatewayRequest& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a backup gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/DeleteGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const Model::DeleteGatewayRequest& request) const;

        /**
         * An Async wrapper for DeleteGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteGatewayAsync(const Model::DeleteGatewayRequest& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a hypervisor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/DeleteHypervisor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHypervisorOutcome DeleteHypervisor(const Model::DeleteHypervisorRequest& request) const;

        /**
         * A Callable wrapper for DeleteHypervisor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHypervisorOutcomeCallable DeleteHypervisorCallable(const Model::DeleteHypervisorRequest& request) const;

        /**
         * An Async wrapper for DeleteHypervisor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHypervisorAsync(const Model::DeleteHypervisorRequest& request, const DeleteHypervisorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates a backup gateway from the specified server. After the
         * disassociation process finishes, the gateway can no longer access the virtual
         * machines on the server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/DisassociateGatewayFromServer">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateGatewayFromServerOutcome DisassociateGatewayFromServer(const Model::DisassociateGatewayFromServerRequest& request) const;

        /**
         * A Callable wrapper for DisassociateGatewayFromServer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateGatewayFromServerOutcomeCallable DisassociateGatewayFromServerCallable(const Model::DisassociateGatewayFromServerRequest& request) const;

        /**
         * An Async wrapper for DisassociateGatewayFromServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateGatewayFromServerAsync(const Model::DisassociateGatewayFromServerRequest& request, const DisassociateGatewayFromServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>By providing the ARN (Amazon Resource Name), this API returns the
         * gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/GetGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGatewayOutcome GetGateway(const Model::GetGatewayRequest& request) const;

        /**
         * A Callable wrapper for GetGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGatewayOutcomeCallable GetGatewayCallable(const Model::GetGatewayRequest& request) const;

        /**
         * An Async wrapper for GetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGatewayAsync(const Model::GetGatewayRequest& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>By providing the ARN (Amazon Resource Name), this API returns the virtual
         * machine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/GetVirtualMachine">AWS
         * API Reference</a></p>
         */
        virtual Model::GetVirtualMachineOutcome GetVirtualMachine(const Model::GetVirtualMachineRequest& request) const;

        /**
         * A Callable wrapper for GetVirtualMachine that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetVirtualMachineOutcomeCallable GetVirtualMachineCallable(const Model::GetVirtualMachineRequest& request) const;

        /**
         * An Async wrapper for GetVirtualMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetVirtualMachineAsync(const Model::GetVirtualMachineRequest& request, const GetVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Connect to a hypervisor by importing its configuration.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/ImportHypervisorConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportHypervisorConfigurationOutcome ImportHypervisorConfiguration(const Model::ImportHypervisorConfigurationRequest& request) const;

        /**
         * A Callable wrapper for ImportHypervisorConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ImportHypervisorConfigurationOutcomeCallable ImportHypervisorConfigurationCallable(const Model::ImportHypervisorConfigurationRequest& request) const;

        /**
         * An Async wrapper for ImportHypervisorConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ImportHypervisorConfigurationAsync(const Model::ImportHypervisorConfigurationRequest& request, const ImportHypervisorConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists backup gateways owned by an Amazon Web Services account in an Amazon
         * Web Services Region. The returned list is ordered by gateway Amazon Resource
         * Name (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/ListGateways">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGatewaysOutcome ListGateways(const Model::ListGatewaysRequest& request) const;

        /**
         * A Callable wrapper for ListGateways that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const Model::ListGatewaysRequest& request) const;

        /**
         * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGatewaysAsync(const Model::ListGatewaysRequest& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists your hypervisors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/ListHypervisors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHypervisorsOutcome ListHypervisors(const Model::ListHypervisorsRequest& request) const;

        /**
         * A Callable wrapper for ListHypervisors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHypervisorsOutcomeCallable ListHypervisorsCallable(const Model::ListHypervisorsRequest& request) const;

        /**
         * An Async wrapper for ListHypervisors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHypervisorsAsync(const Model::ListHypervisorsRequest& request, const ListHypervisorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the tags applied to the resource identified by its Amazon Resource Name
         * (ARN).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/ListTagsForResource">AWS
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
         * <p>Lists your virtual machines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/ListVirtualMachines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualMachinesOutcome ListVirtualMachines(const Model::ListVirtualMachinesRequest& request) const;

        /**
         * A Callable wrapper for ListVirtualMachines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualMachinesOutcomeCallable ListVirtualMachinesCallable(const Model::ListVirtualMachinesRequest& request) const;

        /**
         * An Async wrapper for ListVirtualMachines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualMachinesAsync(const Model::ListVirtualMachinesRequest& request, const ListVirtualMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Set the maintenance start time for a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/PutMaintenanceStartTime">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMaintenanceStartTimeOutcome PutMaintenanceStartTime(const Model::PutMaintenanceStartTimeRequest& request) const;

        /**
         * A Callable wrapper for PutMaintenanceStartTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutMaintenanceStartTimeOutcomeCallable PutMaintenanceStartTimeCallable(const Model::PutMaintenanceStartTimeRequest& request) const;

        /**
         * An Async wrapper for PutMaintenanceStartTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutMaintenanceStartTimeAsync(const Model::PutMaintenanceStartTimeRequest& request, const PutMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Tag the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/TagResource">AWS
         * API Reference</a></p>
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
         * <p>Tests your hypervisor configuration to validate that backup gateway can
         * connect with the hypervisor and its resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/TestHypervisorConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::TestHypervisorConfigurationOutcome TestHypervisorConfiguration(const Model::TestHypervisorConfigurationRequest& request) const;

        /**
         * A Callable wrapper for TestHypervisorConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestHypervisorConfigurationOutcomeCallable TestHypervisorConfigurationCallable(const Model::TestHypervisorConfigurationRequest& request) const;

        /**
         * An Async wrapper for TestHypervisorConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestHypervisorConfigurationAsync(const Model::TestHypervisorConfigurationRequest& request, const TestHypervisorConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes tags from the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/UntagResource">AWS
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
         * <p>Updates a gateway's name. Specify which gateway to update using the Amazon
         * Resource Name (ARN) of the gateway in your request.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/UpdateGatewayInformation">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewayInformationOutcome UpdateGatewayInformation(const Model::UpdateGatewayInformationRequest& request) const;

        /**
         * A Callable wrapper for UpdateGatewayInformation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewayInformationOutcomeCallable UpdateGatewayInformationCallable(const Model::UpdateGatewayInformationRequest& request) const;

        /**
         * An Async wrapper for UpdateGatewayInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewayInformationAsync(const Model::UpdateGatewayInformationRequest& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the gateway virtual machine (VM) software. The request immediately
         * triggers the software update.</p>  <p>When you make this request, you get
         * a <code>200 OK</code> success response immediately. However, it might take some
         * time for the update to complete.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/UpdateGatewaySoftwareNow">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateGatewaySoftwareNowOutcome UpdateGatewaySoftwareNow(const Model::UpdateGatewaySoftwareNowRequest& request) const;

        /**
         * A Callable wrapper for UpdateGatewaySoftwareNow that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateGatewaySoftwareNowOutcomeCallable UpdateGatewaySoftwareNowCallable(const Model::UpdateGatewaySoftwareNowRequest& request) const;

        /**
         * An Async wrapper for UpdateGatewaySoftwareNow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateGatewaySoftwareNowAsync(const Model::UpdateGatewaySoftwareNowRequest& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates a hypervisor metadata, including its host, username, and password.
         * Specify which hypervisor to update using the Amazon Resource Name (ARN) of the
         * hypervisor in your request.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/UpdateHypervisor">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHypervisorOutcome UpdateHypervisor(const Model::UpdateHypervisorRequest& request) const;

        /**
         * A Callable wrapper for UpdateHypervisor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHypervisorOutcomeCallable UpdateHypervisorCallable(const Model::UpdateHypervisorRequest& request) const;

        /**
         * An Async wrapper for UpdateHypervisor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHypervisorAsync(const Model::UpdateHypervisorRequest& request, const UpdateHypervisorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace BackupGateway
} // namespace Aws
