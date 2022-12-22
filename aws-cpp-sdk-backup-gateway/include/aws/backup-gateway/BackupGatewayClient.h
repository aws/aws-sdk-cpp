/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/backup-gateway/BackupGateway_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
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
  class AWS_BACKUPGATEWAY_API BackupGatewayClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<BackupGatewayClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupGatewayClient(const Aws::BackupGateway::BackupGatewayClientConfiguration& clientConfiguration = Aws::BackupGateway::BackupGatewayClientConfiguration(),
                            std::shared_ptr<BackupGatewayEndpointProviderBase> endpointProvider = Aws::MakeShared<BackupGatewayEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupGatewayClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<BackupGatewayEndpointProviderBase> endpointProvider = Aws::MakeShared<BackupGatewayEndpointProvider>(ALLOCATION_TAG),
                            const Aws::BackupGateway::BackupGatewayClientConfiguration& clientConfiguration = Aws::BackupGateway::BackupGatewayClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupGatewayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<BackupGatewayEndpointProviderBase> endpointProvider = Aws::MakeShared<BackupGatewayEndpointProvider>(ALLOCATION_TAG),
                            const Aws::BackupGateway::BackupGatewayClientConfiguration& clientConfiguration = Aws::BackupGateway::BackupGatewayClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupGatewayClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupGatewayClient(const Aws::Auth::AWSCredentials& credentials,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupGatewayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
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
         * <p>Retrieves the bandwidth rate limit schedule for a specified gateway. By
         * default, gateways do not have bandwidth rate limit schedules, which means no
         * bandwidth rate limiting is in effect. Use this to get a gateway's bandwidth rate
         * limit schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/GetBandwidthRateLimitSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBandwidthRateLimitScheduleOutcome GetBandwidthRateLimitSchedule(const Model::GetBandwidthRateLimitScheduleRequest& request) const;

        /**
         * A Callable wrapper for GetBandwidthRateLimitSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetBandwidthRateLimitScheduleOutcomeCallable GetBandwidthRateLimitScheduleCallable(const Model::GetBandwidthRateLimitScheduleRequest& request) const;

        /**
         * An Async wrapper for GetBandwidthRateLimitSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetBandwidthRateLimitScheduleAsync(const Model::GetBandwidthRateLimitScheduleRequest& request, const GetBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>This action requests information about the specified hypervisor to which the
         * gateway will connect. A hypervisor is hardware, software, or firmware that
         * creates and manages virtual machines, and allocates resources to
         * them.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/GetHypervisor">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHypervisorOutcome GetHypervisor(const Model::GetHypervisorRequest& request) const;

        /**
         * A Callable wrapper for GetHypervisor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHypervisorOutcomeCallable GetHypervisorCallable(const Model::GetHypervisorRequest& request) const;

        /**
         * An Async wrapper for GetHypervisor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHypervisorAsync(const Model::GetHypervisorRequest& request, const GetHypervisorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action retrieves the property mappings for the specified hypervisor. A
         * hypervisor property mapping displays the relationship of entity properties
         * available from the on-premises hypervisor to the properties available in Amazon
         * Web Services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/GetHypervisorPropertyMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHypervisorPropertyMappingsOutcome GetHypervisorPropertyMappings(const Model::GetHypervisorPropertyMappingsRequest& request) const;

        /**
         * A Callable wrapper for GetHypervisorPropertyMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHypervisorPropertyMappingsOutcomeCallable GetHypervisorPropertyMappingsCallable(const Model::GetHypervisorPropertyMappingsRequest& request) const;

        /**
         * An Async wrapper for GetHypervisorPropertyMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHypervisorPropertyMappingsAsync(const Model::GetHypervisorPropertyMappingsRequest& request, const GetHypervisorPropertyMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>This action sets the bandwidth rate limit schedule for a specified gateway.
         * By default, gateways do not have a bandwidth rate limit schedule, which means no
         * bandwidth rate limiting is in effect. Use this to initiate a gateway's bandwidth
         * rate limit schedule.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/PutBandwidthRateLimitSchedule">AWS
         * API Reference</a></p>
         */
        virtual Model::PutBandwidthRateLimitScheduleOutcome PutBandwidthRateLimitSchedule(const Model::PutBandwidthRateLimitScheduleRequest& request) const;

        /**
         * A Callable wrapper for PutBandwidthRateLimitSchedule that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutBandwidthRateLimitScheduleOutcomeCallable PutBandwidthRateLimitScheduleCallable(const Model::PutBandwidthRateLimitScheduleRequest& request) const;

        /**
         * An Async wrapper for PutBandwidthRateLimitSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutBandwidthRateLimitScheduleAsync(const Model::PutBandwidthRateLimitScheduleRequest& request, const PutBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>This action sets the property mappings for the specified hypervisor. A
         * hypervisor property mapping displays the relationship of entity properties
         * available from the on-premises hypervisor to the properties available in Amazon
         * Web Services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/PutHypervisorPropertyMappings">AWS
         * API Reference</a></p>
         */
        virtual Model::PutHypervisorPropertyMappingsOutcome PutHypervisorPropertyMappings(const Model::PutHypervisorPropertyMappingsRequest& request) const;

        /**
         * A Callable wrapper for PutHypervisorPropertyMappings that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::PutHypervisorPropertyMappingsOutcomeCallable PutHypervisorPropertyMappingsCallable(const Model::PutHypervisorPropertyMappingsRequest& request) const;

        /**
         * An Async wrapper for PutHypervisorPropertyMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void PutHypervisorPropertyMappingsAsync(const Model::PutHypervisorPropertyMappingsRequest& request, const PutHypervisorPropertyMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
         * <p>This action sends a request to sync metadata across the specified virtual
         * machines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/StartVirtualMachinesMetadataSync">AWS
         * API Reference</a></p>
         */
        virtual Model::StartVirtualMachinesMetadataSyncOutcome StartVirtualMachinesMetadataSync(const Model::StartVirtualMachinesMetadataSyncRequest& request) const;

        /**
         * A Callable wrapper for StartVirtualMachinesMetadataSync that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::StartVirtualMachinesMetadataSyncOutcomeCallable StartVirtualMachinesMetadataSyncCallable(const Model::StartVirtualMachinesMetadataSyncRequest& request) const;

        /**
         * An Async wrapper for StartVirtualMachinesMetadataSync that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void StartVirtualMachinesMetadataSyncAsync(const Model::StartVirtualMachinesMetadataSyncRequest& request, const StartVirtualMachinesMetadataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

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
      std::shared_ptr<BackupGatewayEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<BackupGatewayClient>;
      void init(const BackupGatewayClientConfiguration& clientConfiguration);

      BackupGatewayClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<BackupGatewayEndpointProviderBase> m_endpointProvider;
  };

} // namespace BackupGateway
} // namespace Aws
