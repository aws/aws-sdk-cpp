/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evs/EVS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/evs/EVSServiceClientModel.h>

namespace Aws
{
namespace EVS
{
  /**
   * <p>Amazon Elastic VMware Service (Amazon EVS) is a service that you can use to
   * deploy a VMware Cloud Foundation (VCF) software environment directly on EC2 bare
   * metal instances within an Amazon Virtual Private Cloud (VPC).</p> <p>Workloads
   * running on Amazon EVS are fully compatible with workloads running on any
   * standard VMware vSphere environment. This means that you can migrate any
   * VMware-based workload to Amazon EVS without workload modification.</p>
   */
  class AWS_EVS_API EVSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<EVSClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef EVSClientConfiguration ClientConfigurationType;
      typedef EVSEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EVSClient(const Aws::EVS::EVSClientConfiguration& clientConfiguration = Aws::EVS::EVSClientConfiguration(),
                  std::shared_ptr<EVSEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EVSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<EVSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::EVS::EVSClientConfiguration& clientConfiguration = Aws::EVS::EVSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EVSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<EVSEndpointProviderBase> endpointProvider = nullptr,
                  const Aws::EVS::EVSClientConfiguration& clientConfiguration = Aws::EVS::EVSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EVSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EVSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EVSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EVSClient();

        /**
         * <p>Associates an Elastic IP address with a public HCX VLAN. This operation is
         * only allowed for public HCX VLANs at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/AssociateEipToVlan">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateEipToVlanOutcome AssociateEipToVlan(const Model::AssociateEipToVlanRequest& request) const;

        /**
         * A Callable wrapper for AssociateEipToVlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateEipToVlanRequestT = Model::AssociateEipToVlanRequest>
        Model::AssociateEipToVlanOutcomeCallable AssociateEipToVlanCallable(const AssociateEipToVlanRequestT& request) const
        {
            return SubmitCallable(&EVSClient::AssociateEipToVlan, request);
        }

        /**
         * An Async wrapper for AssociateEipToVlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateEipToVlanRequestT = Model::AssociateEipToVlanRequest>
        void AssociateEipToVlanAsync(const AssociateEipToVlanRequestT& request, const AssociateEipToVlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::AssociateEipToVlan, request, handler, context);
        }

        /**
         * <p>Creates an Amazon EVS environment that runs VCF software, such as SDDC
         * Manager, NSX Manager, and vCenter Server.</p> <p>During environment creation,
         * Amazon EVS performs validations on DNS settings, provisions VLAN subnets and
         * hosts, and deploys the supplied version of VCF.</p> <p>It can take several hours
         * to create an environment. After the deployment completes, you can configure VCF
         * in the vSphere user interface according to your needs.</p>  <p>You cannot
         * use the <code>dedicatedHostId</code> and <code>placementGroupId</code>
         * parameters together in the same <code>CreateEnvironment</code> action. This
         * results in a <code>ValidationException</code> response.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/CreateEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentOutcome CreateEnvironment(const Model::CreateEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        Model::CreateEnvironmentOutcomeCallable CreateEnvironmentCallable(const CreateEnvironmentRequestT& request) const
        {
            return SubmitCallable(&EVSClient::CreateEnvironment, request);
        }

        /**
         * An Async wrapper for CreateEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentRequestT = Model::CreateEnvironmentRequest>
        void CreateEnvironmentAsync(const CreateEnvironmentRequestT& request, const CreateEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::CreateEnvironment, request, handler, context);
        }

        /**
         * <p>Creates an ESXi host and adds it to an Amazon EVS environment. Amazon EVS
         * supports 4-16 hosts per environment.</p> <p>This action can only be used after
         * the Amazon EVS environment is deployed.</p> <p>You can use the
         * <code>dedicatedHostId</code> parameter to specify an Amazon EC2 Dedicated Host
         * for ESXi host creation.</p> <p> You can use the <code>placementGroupId</code>
         * parameter to specify a cluster or partition placement group to launch EC2
         * instances into.</p>  <p>You cannot use the <code>dedicatedHostId</code>
         * and <code>placementGroupId</code> parameters together in the same
         * <code>CreateEnvironmentHost</code> action. This results in a
         * <code>ValidationException</code> response.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/CreateEnvironmentHost">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEnvironmentHostOutcome CreateEnvironmentHost(const Model::CreateEnvironmentHostRequest& request) const;

        /**
         * A Callable wrapper for CreateEnvironmentHost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEnvironmentHostRequestT = Model::CreateEnvironmentHostRequest>
        Model::CreateEnvironmentHostOutcomeCallable CreateEnvironmentHostCallable(const CreateEnvironmentHostRequestT& request) const
        {
            return SubmitCallable(&EVSClient::CreateEnvironmentHost, request);
        }

        /**
         * An Async wrapper for CreateEnvironmentHost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEnvironmentHostRequestT = Model::CreateEnvironmentHostRequest>
        void CreateEnvironmentHostAsync(const CreateEnvironmentHostRequestT& request, const CreateEnvironmentHostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::CreateEnvironmentHost, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon EVS environment.</p> <p>Amazon EVS environments will only
         * be enabled for deletion once the hosts are deleted. You can delete hosts using
         * the <code>DeleteEnvironmentHost</code> action.</p> <p>Environment deletion also
         * deletes the associated Amazon EVS VLAN subnets and Amazon Web Services Secrets
         * Manager secrets that Amazon EVS created. Amazon Web Services resources that you
         * create are not deleted. These resources may continue to incur
         * costs.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/DeleteEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentOutcome DeleteEnvironment(const Model::DeleteEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        Model::DeleteEnvironmentOutcomeCallable DeleteEnvironmentCallable(const DeleteEnvironmentRequestT& request) const
        {
            return SubmitCallable(&EVSClient::DeleteEnvironment, request);
        }

        /**
         * An Async wrapper for DeleteEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentRequestT = Model::DeleteEnvironmentRequest>
        void DeleteEnvironmentAsync(const DeleteEnvironmentRequestT& request, const DeleteEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::DeleteEnvironment, request, handler, context);
        }

        /**
         * <p>Deletes a host from an Amazon EVS environment.</p>  <p>Before deleting
         * a host, you must unassign and decommission the host from within the SDDC Manager
         * user interface. Not doing so could impact the availability of your virtual
         * machines or result in data loss.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/DeleteEnvironmentHost">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEnvironmentHostOutcome DeleteEnvironmentHost(const Model::DeleteEnvironmentHostRequest& request) const;

        /**
         * A Callable wrapper for DeleteEnvironmentHost that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEnvironmentHostRequestT = Model::DeleteEnvironmentHostRequest>
        Model::DeleteEnvironmentHostOutcomeCallable DeleteEnvironmentHostCallable(const DeleteEnvironmentHostRequestT& request) const
        {
            return SubmitCallable(&EVSClient::DeleteEnvironmentHost, request);
        }

        /**
         * An Async wrapper for DeleteEnvironmentHost that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEnvironmentHostRequestT = Model::DeleteEnvironmentHostRequest>
        void DeleteEnvironmentHostAsync(const DeleteEnvironmentHostRequestT& request, const DeleteEnvironmentHostResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::DeleteEnvironmentHost, request, handler, context);
        }

        /**
         * <p>Disassociates an Elastic IP address from a public HCX VLAN. This operation is
         * only allowed for public HCX VLANs at this time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/DisassociateEipFromVlan">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateEipFromVlanOutcome DisassociateEipFromVlan(const Model::DisassociateEipFromVlanRequest& request) const;

        /**
         * A Callable wrapper for DisassociateEipFromVlan that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateEipFromVlanRequestT = Model::DisassociateEipFromVlanRequest>
        Model::DisassociateEipFromVlanOutcomeCallable DisassociateEipFromVlanCallable(const DisassociateEipFromVlanRequestT& request) const
        {
            return SubmitCallable(&EVSClient::DisassociateEipFromVlan, request);
        }

        /**
         * An Async wrapper for DisassociateEipFromVlan that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateEipFromVlanRequestT = Model::DisassociateEipFromVlanRequest>
        void DisassociateEipFromVlanAsync(const DisassociateEipFromVlanRequestT& request, const DisassociateEipFromVlanResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::DisassociateEipFromVlan, request, handler, context);
        }

        /**
         * <p>Returns a description of the specified environment.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/GetEnvironment">AWS
         * API Reference</a></p>
         */
        virtual Model::GetEnvironmentOutcome GetEnvironment(const Model::GetEnvironmentRequest& request) const;

        /**
         * A Callable wrapper for GetEnvironment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        Model::GetEnvironmentOutcomeCallable GetEnvironmentCallable(const GetEnvironmentRequestT& request) const
        {
            return SubmitCallable(&EVSClient::GetEnvironment, request);
        }

        /**
         * An Async wrapper for GetEnvironment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetEnvironmentRequestT = Model::GetEnvironmentRequest>
        void GetEnvironmentAsync(const GetEnvironmentRequestT& request, const GetEnvironmentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::GetEnvironment, request, handler, context);
        }

        /**
         * <p>List the hosts within an environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/ListEnvironmentHosts">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentHostsOutcome ListEnvironmentHosts(const Model::ListEnvironmentHostsRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentHosts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentHostsRequestT = Model::ListEnvironmentHostsRequest>
        Model::ListEnvironmentHostsOutcomeCallable ListEnvironmentHostsCallable(const ListEnvironmentHostsRequestT& request) const
        {
            return SubmitCallable(&EVSClient::ListEnvironmentHosts, request);
        }

        /**
         * An Async wrapper for ListEnvironmentHosts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentHostsRequestT = Model::ListEnvironmentHostsRequest>
        void ListEnvironmentHostsAsync(const ListEnvironmentHostsRequestT& request, const ListEnvironmentHostsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::ListEnvironmentHosts, request, handler, context);
        }

        /**
         * <p>Lists environment VLANs that are associated with the specified
         * environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/ListEnvironmentVlans">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentVlansOutcome ListEnvironmentVlans(const Model::ListEnvironmentVlansRequest& request) const;

        /**
         * A Callable wrapper for ListEnvironmentVlans that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentVlansRequestT = Model::ListEnvironmentVlansRequest>
        Model::ListEnvironmentVlansOutcomeCallable ListEnvironmentVlansCallable(const ListEnvironmentVlansRequestT& request) const
        {
            return SubmitCallable(&EVSClient::ListEnvironmentVlans, request);
        }

        /**
         * An Async wrapper for ListEnvironmentVlans that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentVlansRequestT = Model::ListEnvironmentVlansRequest>
        void ListEnvironmentVlansAsync(const ListEnvironmentVlansRequestT& request, const ListEnvironmentVlansResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::ListEnvironmentVlans, request, handler, context);
        }

        /**
         * <p>Lists the Amazon EVS environments in your Amazon Web Services account in the
         * specified Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/ListEnvironments">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEnvironmentsOutcome ListEnvironments(const Model::ListEnvironmentsRequest& request = {}) const;

        /**
         * A Callable wrapper for ListEnvironments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        Model::ListEnvironmentsOutcomeCallable ListEnvironmentsCallable(const ListEnvironmentsRequestT& request = {}) const
        {
            return SubmitCallable(&EVSClient::ListEnvironments, request);
        }

        /**
         * An Async wrapper for ListEnvironments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEnvironmentsRequestT = Model::ListEnvironmentsRequest>
        void ListEnvironmentsAsync(const ListEnvironmentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr, const ListEnvironmentsRequestT& request = {}) const
        {
            return SubmitAsync(&EVSClient::ListEnvironments, request, handler, context);
        }

        /**
         * <p>Lists the tags for an Amazon EVS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&EVSClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Associates the specified tags to an Amazon EVS resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they aren't changed. When a resource is deleted, the
         * tags associated with that resource are also deleted. Tags that you create for
         * Amazon EVS resources don't propagate to any other resources associated with the
         * environment. For example, if you tag an environment with this operation, that
         * tag doesn't automatically propagate to the VLAN subnets and hosts associated
         * with the environment.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&EVSClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes specified tags from an Amazon EVS resource.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/evs-2023-07-27/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&EVSClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EVSClient::UntagResource, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EVSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<EVSClient>;
      void init(const EVSClientConfiguration& clientConfiguration);

      EVSClientConfiguration m_clientConfiguration;
      std::shared_ptr<EVSEndpointProviderBase> m_endpointProvider;
  };

} // namespace EVS
} // namespace Aws
