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
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef BackupGatewayClientConfiguration ClientConfigurationType;
      typedef BackupGatewayEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupGatewayClient(const Aws::BackupGateway::BackupGatewayClientConfiguration& clientConfiguration = Aws::BackupGateway::BackupGatewayClientConfiguration(),
                            std::shared_ptr<BackupGatewayEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        BackupGatewayClient(const Aws::Auth::AWSCredentials& credentials,
                            std::shared_ptr<BackupGatewayEndpointProviderBase> endpointProvider = nullptr,
                            const Aws::BackupGateway::BackupGatewayClientConfiguration& clientConfiguration = Aws::BackupGateway::BackupGatewayClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        BackupGatewayClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                            std::shared_ptr<BackupGatewayEndpointProviderBase> endpointProvider = nullptr,
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
        template<typename AssociateGatewayToServerRequestT = Model::AssociateGatewayToServerRequest>
        Model::AssociateGatewayToServerOutcomeCallable AssociateGatewayToServerCallable(const AssociateGatewayToServerRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::AssociateGatewayToServer, request);
        }

        /**
         * An Async wrapper for AssociateGatewayToServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateGatewayToServerRequestT = Model::AssociateGatewayToServerRequest>
        void AssociateGatewayToServerAsync(const AssociateGatewayToServerRequestT& request, const AssociateGatewayToServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::AssociateGatewayToServer, request, handler, context);
        }

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
        template<typename CreateGatewayRequestT = Model::CreateGatewayRequest>
        Model::CreateGatewayOutcomeCallable CreateGatewayCallable(const CreateGatewayRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::CreateGateway, request);
        }

        /**
         * An Async wrapper for CreateGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGatewayRequestT = Model::CreateGatewayRequest>
        void CreateGatewayAsync(const CreateGatewayRequestT& request, const CreateGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::CreateGateway, request, handler, context);
        }

        /**
         * <p>Deletes a backup gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/DeleteGateway">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteGatewayOutcome DeleteGateway(const Model::DeleteGatewayRequest& request) const;

        /**
         * A Callable wrapper for DeleteGateway that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
        Model::DeleteGatewayOutcomeCallable DeleteGatewayCallable(const DeleteGatewayRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::DeleteGateway, request);
        }

        /**
         * An Async wrapper for DeleteGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteGatewayRequestT = Model::DeleteGatewayRequest>
        void DeleteGatewayAsync(const DeleteGatewayRequestT& request, const DeleteGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::DeleteGateway, request, handler, context);
        }

        /**
         * <p>Deletes a hypervisor.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/DeleteHypervisor">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHypervisorOutcome DeleteHypervisor(const Model::DeleteHypervisorRequest& request) const;

        /**
         * A Callable wrapper for DeleteHypervisor that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteHypervisorRequestT = Model::DeleteHypervisorRequest>
        Model::DeleteHypervisorOutcomeCallable DeleteHypervisorCallable(const DeleteHypervisorRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::DeleteHypervisor, request);
        }

        /**
         * An Async wrapper for DeleteHypervisor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteHypervisorRequestT = Model::DeleteHypervisorRequest>
        void DeleteHypervisorAsync(const DeleteHypervisorRequestT& request, const DeleteHypervisorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::DeleteHypervisor, request, handler, context);
        }

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
        template<typename DisassociateGatewayFromServerRequestT = Model::DisassociateGatewayFromServerRequest>
        Model::DisassociateGatewayFromServerOutcomeCallable DisassociateGatewayFromServerCallable(const DisassociateGatewayFromServerRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::DisassociateGatewayFromServer, request);
        }

        /**
         * An Async wrapper for DisassociateGatewayFromServer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateGatewayFromServerRequestT = Model::DisassociateGatewayFromServerRequest>
        void DisassociateGatewayFromServerAsync(const DisassociateGatewayFromServerRequestT& request, const DisassociateGatewayFromServerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::DisassociateGatewayFromServer, request, handler, context);
        }

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
        template<typename GetBandwidthRateLimitScheduleRequestT = Model::GetBandwidthRateLimitScheduleRequest>
        Model::GetBandwidthRateLimitScheduleOutcomeCallable GetBandwidthRateLimitScheduleCallable(const GetBandwidthRateLimitScheduleRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::GetBandwidthRateLimitSchedule, request);
        }

        /**
         * An Async wrapper for GetBandwidthRateLimitSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBandwidthRateLimitScheduleRequestT = Model::GetBandwidthRateLimitScheduleRequest>
        void GetBandwidthRateLimitScheduleAsync(const GetBandwidthRateLimitScheduleRequestT& request, const GetBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::GetBandwidthRateLimitSchedule, request, handler, context);
        }

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
        template<typename GetGatewayRequestT = Model::GetGatewayRequest>
        Model::GetGatewayOutcomeCallable GetGatewayCallable(const GetGatewayRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::GetGateway, request);
        }

        /**
         * An Async wrapper for GetGateway that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetGatewayRequestT = Model::GetGatewayRequest>
        void GetGatewayAsync(const GetGatewayRequestT& request, const GetGatewayResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::GetGateway, request, handler, context);
        }

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
        template<typename GetHypervisorRequestT = Model::GetHypervisorRequest>
        Model::GetHypervisorOutcomeCallable GetHypervisorCallable(const GetHypervisorRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::GetHypervisor, request);
        }

        /**
         * An Async wrapper for GetHypervisor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetHypervisorRequestT = Model::GetHypervisorRequest>
        void GetHypervisorAsync(const GetHypervisorRequestT& request, const GetHypervisorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::GetHypervisor, request, handler, context);
        }

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
        template<typename GetHypervisorPropertyMappingsRequestT = Model::GetHypervisorPropertyMappingsRequest>
        Model::GetHypervisorPropertyMappingsOutcomeCallable GetHypervisorPropertyMappingsCallable(const GetHypervisorPropertyMappingsRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::GetHypervisorPropertyMappings, request);
        }

        /**
         * An Async wrapper for GetHypervisorPropertyMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetHypervisorPropertyMappingsRequestT = Model::GetHypervisorPropertyMappingsRequest>
        void GetHypervisorPropertyMappingsAsync(const GetHypervisorPropertyMappingsRequestT& request, const GetHypervisorPropertyMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::GetHypervisorPropertyMappings, request, handler, context);
        }

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
        template<typename GetVirtualMachineRequestT = Model::GetVirtualMachineRequest>
        Model::GetVirtualMachineOutcomeCallable GetVirtualMachineCallable(const GetVirtualMachineRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::GetVirtualMachine, request);
        }

        /**
         * An Async wrapper for GetVirtualMachine that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetVirtualMachineRequestT = Model::GetVirtualMachineRequest>
        void GetVirtualMachineAsync(const GetVirtualMachineRequestT& request, const GetVirtualMachineResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::GetVirtualMachine, request, handler, context);
        }

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
        template<typename ImportHypervisorConfigurationRequestT = Model::ImportHypervisorConfigurationRequest>
        Model::ImportHypervisorConfigurationOutcomeCallable ImportHypervisorConfigurationCallable(const ImportHypervisorConfigurationRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::ImportHypervisorConfiguration, request);
        }

        /**
         * An Async wrapper for ImportHypervisorConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportHypervisorConfigurationRequestT = Model::ImportHypervisorConfigurationRequest>
        void ImportHypervisorConfigurationAsync(const ImportHypervisorConfigurationRequestT& request, const ImportHypervisorConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::ImportHypervisorConfiguration, request, handler, context);
        }

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
        template<typename ListGatewaysRequestT = Model::ListGatewaysRequest>
        Model::ListGatewaysOutcomeCallable ListGatewaysCallable(const ListGatewaysRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::ListGateways, request);
        }

        /**
         * An Async wrapper for ListGateways that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListGatewaysRequestT = Model::ListGatewaysRequest>
        void ListGatewaysAsync(const ListGatewaysRequestT& request, const ListGatewaysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::ListGateways, request, handler, context);
        }

        /**
         * <p>Lists your hypervisors.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/ListHypervisors">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHypervisorsOutcome ListHypervisors(const Model::ListHypervisorsRequest& request) const;

        /**
         * A Callable wrapper for ListHypervisors that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListHypervisorsRequestT = Model::ListHypervisorsRequest>
        Model::ListHypervisorsOutcomeCallable ListHypervisorsCallable(const ListHypervisorsRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::ListHypervisors, request);
        }

        /**
         * An Async wrapper for ListHypervisors that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListHypervisorsRequestT = Model::ListHypervisorsRequest>
        void ListHypervisorsAsync(const ListHypervisorsRequestT& request, const ListHypervisorsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::ListHypervisors, request, handler, context);
        }

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
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists your virtual machines.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/ListVirtualMachines">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualMachinesOutcome ListVirtualMachines(const Model::ListVirtualMachinesRequest& request) const;

        /**
         * A Callable wrapper for ListVirtualMachines that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListVirtualMachinesRequestT = Model::ListVirtualMachinesRequest>
        Model::ListVirtualMachinesOutcomeCallable ListVirtualMachinesCallable(const ListVirtualMachinesRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::ListVirtualMachines, request);
        }

        /**
         * An Async wrapper for ListVirtualMachines that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListVirtualMachinesRequestT = Model::ListVirtualMachinesRequest>
        void ListVirtualMachinesAsync(const ListVirtualMachinesRequestT& request, const ListVirtualMachinesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::ListVirtualMachines, request, handler, context);
        }

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
        template<typename PutBandwidthRateLimitScheduleRequestT = Model::PutBandwidthRateLimitScheduleRequest>
        Model::PutBandwidthRateLimitScheduleOutcomeCallable PutBandwidthRateLimitScheduleCallable(const PutBandwidthRateLimitScheduleRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::PutBandwidthRateLimitSchedule, request);
        }

        /**
         * An Async wrapper for PutBandwidthRateLimitSchedule that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutBandwidthRateLimitScheduleRequestT = Model::PutBandwidthRateLimitScheduleRequest>
        void PutBandwidthRateLimitScheduleAsync(const PutBandwidthRateLimitScheduleRequestT& request, const PutBandwidthRateLimitScheduleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::PutBandwidthRateLimitSchedule, request, handler, context);
        }

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
        template<typename PutHypervisorPropertyMappingsRequestT = Model::PutHypervisorPropertyMappingsRequest>
        Model::PutHypervisorPropertyMappingsOutcomeCallable PutHypervisorPropertyMappingsCallable(const PutHypervisorPropertyMappingsRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::PutHypervisorPropertyMappings, request);
        }

        /**
         * An Async wrapper for PutHypervisorPropertyMappings that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutHypervisorPropertyMappingsRequestT = Model::PutHypervisorPropertyMappingsRequest>
        void PutHypervisorPropertyMappingsAsync(const PutHypervisorPropertyMappingsRequestT& request, const PutHypervisorPropertyMappingsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::PutHypervisorPropertyMappings, request, handler, context);
        }

        /**
         * <p>Set the maintenance start time for a gateway.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/PutMaintenanceStartTime">AWS
         * API Reference</a></p>
         */
        virtual Model::PutMaintenanceStartTimeOutcome PutMaintenanceStartTime(const Model::PutMaintenanceStartTimeRequest& request) const;

        /**
         * A Callable wrapper for PutMaintenanceStartTime that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutMaintenanceStartTimeRequestT = Model::PutMaintenanceStartTimeRequest>
        Model::PutMaintenanceStartTimeOutcomeCallable PutMaintenanceStartTimeCallable(const PutMaintenanceStartTimeRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::PutMaintenanceStartTime, request);
        }

        /**
         * An Async wrapper for PutMaintenanceStartTime that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutMaintenanceStartTimeRequestT = Model::PutMaintenanceStartTimeRequest>
        void PutMaintenanceStartTimeAsync(const PutMaintenanceStartTimeRequestT& request, const PutMaintenanceStartTimeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::PutMaintenanceStartTime, request, handler, context);
        }

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
        template<typename StartVirtualMachinesMetadataSyncRequestT = Model::StartVirtualMachinesMetadataSyncRequest>
        Model::StartVirtualMachinesMetadataSyncOutcomeCallable StartVirtualMachinesMetadataSyncCallable(const StartVirtualMachinesMetadataSyncRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::StartVirtualMachinesMetadataSync, request);
        }

        /**
         * An Async wrapper for StartVirtualMachinesMetadataSync that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartVirtualMachinesMetadataSyncRequestT = Model::StartVirtualMachinesMetadataSyncRequest>
        void StartVirtualMachinesMetadataSyncAsync(const StartVirtualMachinesMetadataSyncRequestT& request, const StartVirtualMachinesMetadataSyncResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::StartVirtualMachinesMetadataSync, request, handler, context);
        }

        /**
         * <p>Tag the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::TagResource, request, handler, context);
        }

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
        template<typename TestHypervisorConfigurationRequestT = Model::TestHypervisorConfigurationRequest>
        Model::TestHypervisorConfigurationOutcomeCallable TestHypervisorConfigurationCallable(const TestHypervisorConfigurationRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::TestHypervisorConfiguration, request);
        }

        /**
         * An Async wrapper for TestHypervisorConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestHypervisorConfigurationRequestT = Model::TestHypervisorConfigurationRequest>
        void TestHypervisorConfigurationAsync(const TestHypervisorConfigurationRequestT& request, const TestHypervisorConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::TestHypervisorConfiguration, request, handler, context);
        }

        /**
         * <p>Removes tags from the resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/backup-gateway-2021-01-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::UntagResource, request, handler, context);
        }

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
        template<typename UpdateGatewayInformationRequestT = Model::UpdateGatewayInformationRequest>
        Model::UpdateGatewayInformationOutcomeCallable UpdateGatewayInformationCallable(const UpdateGatewayInformationRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::UpdateGatewayInformation, request);
        }

        /**
         * An Async wrapper for UpdateGatewayInformation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGatewayInformationRequestT = Model::UpdateGatewayInformationRequest>
        void UpdateGatewayInformationAsync(const UpdateGatewayInformationRequestT& request, const UpdateGatewayInformationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::UpdateGatewayInformation, request, handler, context);
        }

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
        template<typename UpdateGatewaySoftwareNowRequestT = Model::UpdateGatewaySoftwareNowRequest>
        Model::UpdateGatewaySoftwareNowOutcomeCallable UpdateGatewaySoftwareNowCallable(const UpdateGatewaySoftwareNowRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::UpdateGatewaySoftwareNow, request);
        }

        /**
         * An Async wrapper for UpdateGatewaySoftwareNow that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateGatewaySoftwareNowRequestT = Model::UpdateGatewaySoftwareNowRequest>
        void UpdateGatewaySoftwareNowAsync(const UpdateGatewaySoftwareNowRequestT& request, const UpdateGatewaySoftwareNowResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::UpdateGatewaySoftwareNow, request, handler, context);
        }

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
        template<typename UpdateHypervisorRequestT = Model::UpdateHypervisorRequest>
        Model::UpdateHypervisorOutcomeCallable UpdateHypervisorCallable(const UpdateHypervisorRequestT& request) const
        {
            return SubmitCallable(&BackupGatewayClient::UpdateHypervisor, request);
        }

        /**
         * An Async wrapper for UpdateHypervisor that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateHypervisorRequestT = Model::UpdateHypervisorRequest>
        void UpdateHypervisorAsync(const UpdateHypervisorRequestT& request, const UpdateHypervisorResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&BackupGatewayClient::UpdateHypervisor, request, handler, context);
        }


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
