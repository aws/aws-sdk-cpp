﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/EKSServiceClientModel.h>

namespace Aws
{
namespace EKS
{
  /**
   * <p>Amazon Elastic Kubernetes Service (Amazon EKS) is a managed service that
   * makes it easy for you to run Kubernetes on Amazon Web Services without needing
   * to stand up or maintain your own Kubernetes control plane. Kubernetes is an
   * open-source system for automating the deployment, scaling, and management of
   * containerized applications. </p> <p>Amazon EKS runs up-to-date versions of the
   * open-source Kubernetes software, so you can use all the existing plugins and
   * tooling from the Kubernetes community. Applications running on Amazon EKS are
   * fully compatible with applications running on any standard Kubernetes
   * environment, whether running in on-premises data centers or public clouds. This
   * means that you can easily migrate any standard Kubernetes application to Amazon
   * EKS without any code modification required.</p>
   */
  class AWS_EKS_API EKSClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<EKSClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

      typedef EKSClientConfiguration ClientConfigurationType;
      typedef EKSEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EKSClient(const Aws::EKS::EKSClientConfiguration& clientConfiguration = Aws::EKS::EKSClientConfiguration(),
                  std::shared_ptr<EKSEndpointProviderBase> endpointProvider = Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EKSClient(const Aws::Auth::AWSCredentials& credentials,
                  std::shared_ptr<EKSEndpointProviderBase> endpointProvider = Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::EKS::EKSClientConfiguration& clientConfiguration = Aws::EKS::EKSClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EKSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  std::shared_ptr<EKSEndpointProviderBase> endpointProvider = Aws::MakeShared<EKSEndpointProvider>(ALLOCATION_TAG),
                  const Aws::EKS::EKSClientConfiguration& clientConfiguration = Aws::EKS::EKSClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EKSClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        EKSClient(const Aws::Auth::AWSCredentials& credentials,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        EKSClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                  const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~EKSClient();

        /**
         * <p>Associate encryption configuration to an existing cluster.</p> <p>You can use
         * this API to enable encryption on existing clusters which do not have encryption
         * already enabled. This allows you to implement a defense-in-depth security
         * strategy without migrating applications to new Amazon EKS
         * clusters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AssociateEncryptionConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateEncryptionConfigOutcome AssociateEncryptionConfig(const Model::AssociateEncryptionConfigRequest& request) const;

        /**
         * A Callable wrapper for AssociateEncryptionConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateEncryptionConfigRequestT = Model::AssociateEncryptionConfigRequest>
        Model::AssociateEncryptionConfigOutcomeCallable AssociateEncryptionConfigCallable(const AssociateEncryptionConfigRequestT& request) const
        {
            return SubmitCallable(&EKSClient::AssociateEncryptionConfig, request);
        }

        /**
         * An Async wrapper for AssociateEncryptionConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateEncryptionConfigRequestT = Model::AssociateEncryptionConfigRequest>
        void AssociateEncryptionConfigAsync(const AssociateEncryptionConfigRequestT& request, const AssociateEncryptionConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::AssociateEncryptionConfig, request, handler, context);
        }

        /**
         * <p>Associate an identity provider configuration to a cluster.</p> <p>If you want
         * to authenticate identities using an identity provider, you can create an
         * identity provider configuration and associate it to your cluster. After
         * configuring authentication to your cluster you can create Kubernetes
         * <code>roles</code> and <code>clusterroles</code> to assign permissions to the
         * roles, and then bind the roles to the identities using Kubernetes
         * <code>rolebindings</code> and <code>clusterrolebindings</code>. For more
         * information see <a
         * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Using RBAC
         * Authorization</a> in the Kubernetes documentation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/AssociateIdentityProviderConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateIdentityProviderConfigOutcome AssociateIdentityProviderConfig(const Model::AssociateIdentityProviderConfigRequest& request) const;

        /**
         * A Callable wrapper for AssociateIdentityProviderConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AssociateIdentityProviderConfigRequestT = Model::AssociateIdentityProviderConfigRequest>
        Model::AssociateIdentityProviderConfigOutcomeCallable AssociateIdentityProviderConfigCallable(const AssociateIdentityProviderConfigRequestT& request) const
        {
            return SubmitCallable(&EKSClient::AssociateIdentityProviderConfig, request);
        }

        /**
         * An Async wrapper for AssociateIdentityProviderConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AssociateIdentityProviderConfigRequestT = Model::AssociateIdentityProviderConfigRequest>
        void AssociateIdentityProviderConfigAsync(const AssociateIdentityProviderConfigRequestT& request, const AssociateIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::AssociateIdentityProviderConfig, request, handler, context);
        }

        /**
         * <p>Creates an Amazon EKS add-on.</p> <p>Amazon EKS add-ons help to automate the
         * provisioning and lifecycle management of common operational software for Amazon
         * EKS clusters. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-add-ons.html">Amazon
         * EKS add-ons</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See Also:</h3>  
         * <a href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateAddon">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateAddonOutcome CreateAddon(const Model::CreateAddonRequest& request) const;

        /**
         * A Callable wrapper for CreateAddon that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateAddonRequestT = Model::CreateAddonRequest>
        Model::CreateAddonOutcomeCallable CreateAddonCallable(const CreateAddonRequestT& request) const
        {
            return SubmitCallable(&EKSClient::CreateAddon, request);
        }

        /**
         * An Async wrapper for CreateAddon that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateAddonRequestT = Model::CreateAddonRequest>
        void CreateAddonAsync(const CreateAddonRequestT& request, const CreateAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::CreateAddon, request, handler, context);
        }

        /**
         * <p>Creates an Amazon EKS control plane. </p> <p>The Amazon EKS control plane
         * consists of control plane instances that run the Kubernetes software, such as
         * <code>etcd</code> and the API server. The control plane runs in an account
         * managed by Amazon Web Services, and the Kubernetes API is exposed by the Amazon
         * EKS API server endpoint. Each Amazon EKS cluster control plane is single tenant
         * and unique. It runs on its own set of Amazon EC2 instances.</p> <p>The cluster
         * control plane is provisioned across multiple Availability Zones and fronted by
         * an Elastic Load Balancing Network Load Balancer. Amazon EKS also provisions
         * elastic network interfaces in your VPC subnets to provide connectivity from the
         * control plane instances to the nodes (for example, to support <code>kubectl
         * exec</code>, <code>logs</code>, and <code>proxy</code> data flows).</p>
         * <p>Amazon EKS nodes run in your Amazon Web Services account and connect to your
         * cluster's control plane over the Kubernetes API server endpoint and a
         * certificate file that is created for your cluster.</p> <p>In most cases, it
         * takes several minutes to create a cluster. After you create an Amazon EKS
         * cluster, you must configure your Kubernetes tooling to communicate with the API
         * server and launch nodes into your cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/managing-auth.html">Managing
         * Cluster Authentication</a> and <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/launch-workers.html">Launching
         * Amazon EKS nodes</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateClusterOutcome CreateCluster(const Model::CreateClusterRequest& request) const;

        /**
         * A Callable wrapper for CreateCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        Model::CreateClusterOutcomeCallable CreateClusterCallable(const CreateClusterRequestT& request) const
        {
            return SubmitCallable(&EKSClient::CreateCluster, request);
        }

        /**
         * An Async wrapper for CreateCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateClusterRequestT = Model::CreateClusterRequest>
        void CreateClusterAsync(const CreateClusterRequestT& request, const CreateClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::CreateCluster, request, handler, context);
        }

        /**
         * <p>Creates an EKS Anywhere subscription. When a subscription is created, it is a
         * contract agreement for the length of the term specified in the request. Licenses
         * that are used to validate support are provisioned in Amazon Web Services License
         * Manager and the caller account is granted access to EKS Anywhere Curated
         * Packages.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateEksAnywhereSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateEksAnywhereSubscriptionOutcome CreateEksAnywhereSubscription(const Model::CreateEksAnywhereSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for CreateEksAnywhereSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateEksAnywhereSubscriptionRequestT = Model::CreateEksAnywhereSubscriptionRequest>
        Model::CreateEksAnywhereSubscriptionOutcomeCallable CreateEksAnywhereSubscriptionCallable(const CreateEksAnywhereSubscriptionRequestT& request) const
        {
            return SubmitCallable(&EKSClient::CreateEksAnywhereSubscription, request);
        }

        /**
         * An Async wrapper for CreateEksAnywhereSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateEksAnywhereSubscriptionRequestT = Model::CreateEksAnywhereSubscriptionRequest>
        void CreateEksAnywhereSubscriptionAsync(const CreateEksAnywhereSubscriptionRequestT& request, const CreateEksAnywhereSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::CreateEksAnywhereSubscription, request, handler, context);
        }

        /**
         * <p>Creates an Fargate profile for your Amazon EKS cluster. You must have at
         * least one Fargate profile in a cluster to be able to run pods on Fargate.</p>
         * <p>The Fargate profile allows an administrator to declare which pods run on
         * Fargate and specify which pods run on which Fargate profile. This declaration is
         * done through the profile’s selectors. Each profile can have up to five selectors
         * that contain a namespace and labels. A namespace is required for every selector.
         * The label field consists of multiple optional key-value pairs. Pods that match
         * the selectors are scheduled on Fargate. If a to-be-scheduled pod matches any of
         * the selectors in the Fargate profile, then that pod is run on Fargate.</p>
         * <p>When you create a Fargate profile, you must specify a pod execution role to
         * use with the pods that are scheduled with the profile. This role is added to the
         * cluster's Kubernetes <a
         * href="https://kubernetes.io/docs/reference/access-authn-authz/rbac/">Role Based
         * Access Control</a> (RBAC) for authorization so that the <code>kubelet</code>
         * that is running on the Fargate infrastructure can register with your Amazon EKS
         * cluster so that it can appear in your cluster as a node. The pod execution role
         * also provides IAM permissions to the Fargate infrastructure to allow read access
         * to Amazon ECR image repositories. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/pod-execution-role.html">Pod
         * Execution Role</a> in the <i>Amazon EKS User Guide</i>.</p> <p>Fargate profiles
         * are immutable. However, you can create a new updated profile to replace an
         * existing profile and then delete the original after the updated profile has
         * finished creating.</p> <p>If any Fargate profiles in a cluster are in the
         * <code>DELETING</code> status, you must wait for that Fargate profile to finish
         * deleting before you can create any other profiles in that cluster.</p> <p>For
         * more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/fargate-profile.html">Fargate
         * Profile</a> in the <i>Amazon EKS User Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateFargateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateFargateProfileOutcome CreateFargateProfile(const Model::CreateFargateProfileRequest& request) const;

        /**
         * A Callable wrapper for CreateFargateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateFargateProfileRequestT = Model::CreateFargateProfileRequest>
        Model::CreateFargateProfileOutcomeCallable CreateFargateProfileCallable(const CreateFargateProfileRequestT& request) const
        {
            return SubmitCallable(&EKSClient::CreateFargateProfile, request);
        }

        /**
         * An Async wrapper for CreateFargateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateFargateProfileRequestT = Model::CreateFargateProfileRequest>
        void CreateFargateProfileAsync(const CreateFargateProfileRequestT& request, const CreateFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::CreateFargateProfile, request, handler, context);
        }

        /**
         * <p>Creates a managed node group for an Amazon EKS cluster. You can only create a
         * node group for your cluster that is equal to the current Kubernetes version for
         * the cluster.</p> <p>An Amazon EKS managed node group is an Amazon EC2 Auto
         * Scaling group and associated Amazon EC2 instances that are managed by Amazon Web
         * Services for an Amazon EKS cluster. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/managed-node-groups.html">Managed
         * node groups</a> in the <i>Amazon EKS User Guide</i>.</p>  <p>Windows AMI
         * types are only supported for commercial Regions that support Windows Amazon
         * EKS.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/CreateNodegroup">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateNodegroupOutcome CreateNodegroup(const Model::CreateNodegroupRequest& request) const;

        /**
         * A Callable wrapper for CreateNodegroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateNodegroupRequestT = Model::CreateNodegroupRequest>
        Model::CreateNodegroupOutcomeCallable CreateNodegroupCallable(const CreateNodegroupRequestT& request) const
        {
            return SubmitCallable(&EKSClient::CreateNodegroup, request);
        }

        /**
         * An Async wrapper for CreateNodegroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateNodegroupRequestT = Model::CreateNodegroupRequest>
        void CreateNodegroupAsync(const CreateNodegroupRequestT& request, const CreateNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::CreateNodegroup, request, handler, context);
        }

        /**
         * <p>Delete an Amazon EKS add-on.</p> <p>When you remove the add-on, it will also
         * be deleted from the cluster. You can always manually start an add-on on the
         * cluster using the Kubernetes API.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteAddon">AWS API
         * Reference</a></p>
         */
        virtual Model::DeleteAddonOutcome DeleteAddon(const Model::DeleteAddonRequest& request) const;

        /**
         * A Callable wrapper for DeleteAddon that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAddonRequestT = Model::DeleteAddonRequest>
        Model::DeleteAddonOutcomeCallable DeleteAddonCallable(const DeleteAddonRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DeleteAddon, request);
        }

        /**
         * An Async wrapper for DeleteAddon that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAddonRequestT = Model::DeleteAddonRequest>
        void DeleteAddonAsync(const DeleteAddonRequestT& request, const DeleteAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DeleteAddon, request, handler, context);
        }

        /**
         * <p>Deletes the Amazon EKS cluster control plane.</p> <p>If you have active
         * services in your cluster that are associated with a load balancer, you must
         * delete those services before deleting the cluster so that the load balancers are
         * deleted properly. Otherwise, you can have orphaned resources in your VPC that
         * prevent you from being able to delete the VPC. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/delete-cluster.html">Deleting
         * a Cluster</a> in the <i>Amazon EKS User Guide</i>.</p> <p>If you have managed
         * node groups or Fargate profiles attached to the cluster, you must delete them
         * first. For more information, see <a>DeleteNodegroup</a> and
         * <a>DeleteFargateProfile</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteClusterOutcome DeleteCluster(const Model::DeleteClusterRequest& request) const;

        /**
         * A Callable wrapper for DeleteCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        Model::DeleteClusterOutcomeCallable DeleteClusterCallable(const DeleteClusterRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DeleteCluster, request);
        }

        /**
         * An Async wrapper for DeleteCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteClusterRequestT = Model::DeleteClusterRequest>
        void DeleteClusterAsync(const DeleteClusterRequestT& request, const DeleteClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DeleteCluster, request, handler, context);
        }

        /**
         * <p>Deletes an expired / inactive subscription. Deleting inactive subscriptions
         * removes them from the Amazon Web Services Management Console view and from
         * list/describe API responses. Subscriptions can only be cancelled within 7 days
         * of creation, and are cancelled by creating a ticket in the Amazon Web Services
         * Support Center. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteEksAnywhereSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteEksAnywhereSubscriptionOutcome DeleteEksAnywhereSubscription(const Model::DeleteEksAnywhereSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteEksAnywhereSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteEksAnywhereSubscriptionRequestT = Model::DeleteEksAnywhereSubscriptionRequest>
        Model::DeleteEksAnywhereSubscriptionOutcomeCallable DeleteEksAnywhereSubscriptionCallable(const DeleteEksAnywhereSubscriptionRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DeleteEksAnywhereSubscription, request);
        }

        /**
         * An Async wrapper for DeleteEksAnywhereSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteEksAnywhereSubscriptionRequestT = Model::DeleteEksAnywhereSubscriptionRequest>
        void DeleteEksAnywhereSubscriptionAsync(const DeleteEksAnywhereSubscriptionRequestT& request, const DeleteEksAnywhereSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DeleteEksAnywhereSubscription, request, handler, context);
        }

        /**
         * <p>Deletes an Fargate profile.</p> <p>When you delete a Fargate profile, any
         * pods running on Fargate that were created with the profile are deleted. If those
         * pods match another Fargate profile, then they are scheduled on Fargate with that
         * profile. If they no longer match any Fargate profiles, then they are not
         * scheduled on Fargate and they may remain in a pending state.</p> <p>Only one
         * Fargate profile in a cluster can be in the <code>DELETING</code> status at a
         * time. You must wait for a Fargate profile to finish deleting before you can
         * delete any other profiles in that cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteFargateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteFargateProfileOutcome DeleteFargateProfile(const Model::DeleteFargateProfileRequest& request) const;

        /**
         * A Callable wrapper for DeleteFargateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteFargateProfileRequestT = Model::DeleteFargateProfileRequest>
        Model::DeleteFargateProfileOutcomeCallable DeleteFargateProfileCallable(const DeleteFargateProfileRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DeleteFargateProfile, request);
        }

        /**
         * An Async wrapper for DeleteFargateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteFargateProfileRequestT = Model::DeleteFargateProfileRequest>
        void DeleteFargateProfileAsync(const DeleteFargateProfileRequestT& request, const DeleteFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DeleteFargateProfile, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon EKS node group for a cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeleteNodegroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteNodegroupOutcome DeleteNodegroup(const Model::DeleteNodegroupRequest& request) const;

        /**
         * A Callable wrapper for DeleteNodegroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteNodegroupRequestT = Model::DeleteNodegroupRequest>
        Model::DeleteNodegroupOutcomeCallable DeleteNodegroupCallable(const DeleteNodegroupRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DeleteNodegroup, request);
        }

        /**
         * An Async wrapper for DeleteNodegroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteNodegroupRequestT = Model::DeleteNodegroupRequest>
        void DeleteNodegroupAsync(const DeleteNodegroupRequestT& request, const DeleteNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DeleteNodegroup, request, handler, context);
        }

        /**
         * <p>Deregisters a connected cluster to remove it from the Amazon EKS control
         * plane.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DeregisterCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DeregisterClusterOutcome DeregisterCluster(const Model::DeregisterClusterRequest& request) const;

        /**
         * A Callable wrapper for DeregisterCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeregisterClusterRequestT = Model::DeregisterClusterRequest>
        Model::DeregisterClusterOutcomeCallable DeregisterClusterCallable(const DeregisterClusterRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DeregisterCluster, request);
        }

        /**
         * An Async wrapper for DeregisterCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeregisterClusterRequestT = Model::DeregisterClusterRequest>
        void DeregisterClusterAsync(const DeregisterClusterRequestT& request, const DeregisterClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DeregisterCluster, request, handler, context);
        }

        /**
         * <p>Describes an Amazon EKS add-on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeAddon">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddonOutcome DescribeAddon(const Model::DescribeAddonRequest& request) const;

        /**
         * A Callable wrapper for DescribeAddon that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAddonRequestT = Model::DescribeAddonRequest>
        Model::DescribeAddonOutcomeCallable DescribeAddonCallable(const DescribeAddonRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DescribeAddon, request);
        }

        /**
         * An Async wrapper for DescribeAddon that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAddonRequestT = Model::DescribeAddonRequest>
        void DescribeAddonAsync(const DescribeAddonRequestT& request, const DescribeAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DescribeAddon, request, handler, context);
        }

        /**
         * <p>Returns configuration options.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeAddonConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddonConfigurationOutcome DescribeAddonConfiguration(const Model::DescribeAddonConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DescribeAddonConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAddonConfigurationRequestT = Model::DescribeAddonConfigurationRequest>
        Model::DescribeAddonConfigurationOutcomeCallable DescribeAddonConfigurationCallable(const DescribeAddonConfigurationRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DescribeAddonConfiguration, request);
        }

        /**
         * An Async wrapper for DescribeAddonConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAddonConfigurationRequestT = Model::DescribeAddonConfigurationRequest>
        void DescribeAddonConfigurationAsync(const DescribeAddonConfigurationRequestT& request, const DescribeAddonConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DescribeAddonConfiguration, request, handler, context);
        }

        /**
         * <p>Describes the versions for an add-on. Information such as the Kubernetes
         * versions that you can use the add-on with, the <code>owner</code>,
         * <code>publisher</code>, and the <code>type</code> of the add-on are returned.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeAddonVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeAddonVersionsOutcome DescribeAddonVersions(const Model::DescribeAddonVersionsRequest& request) const;

        /**
         * A Callable wrapper for DescribeAddonVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeAddonVersionsRequestT = Model::DescribeAddonVersionsRequest>
        Model::DescribeAddonVersionsOutcomeCallable DescribeAddonVersionsCallable(const DescribeAddonVersionsRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DescribeAddonVersions, request);
        }

        /**
         * An Async wrapper for DescribeAddonVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeAddonVersionsRequestT = Model::DescribeAddonVersionsRequest>
        void DescribeAddonVersionsAsync(const DescribeAddonVersionsRequestT& request, const DescribeAddonVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DescribeAddonVersions, request, handler, context);
        }

        /**
         * <p>Returns descriptive information about an Amazon EKS cluster.</p> <p>The API
         * server endpoint and certificate authority data returned by this operation are
         * required for <code>kubelet</code> and <code>kubectl</code> to communicate with
         * your Kubernetes API server. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/create-kubeconfig.html">Create
         * a kubeconfig for Amazon EKS</a>.</p>  <p>The API server endpoint and
         * certificate authority data aren't available until the cluster reaches the
         * <code>ACTIVE</code> state.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeClusterOutcome DescribeCluster(const Model::DescribeClusterRequest& request) const;

        /**
         * A Callable wrapper for DescribeCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        Model::DescribeClusterOutcomeCallable DescribeClusterCallable(const DescribeClusterRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DescribeCluster, request);
        }

        /**
         * An Async wrapper for DescribeCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeClusterRequestT = Model::DescribeClusterRequest>
        void DescribeClusterAsync(const DescribeClusterRequestT& request, const DescribeClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DescribeCluster, request, handler, context);
        }

        /**
         * <p>Returns descriptive information about a subscription.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeEksAnywhereSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeEksAnywhereSubscriptionOutcome DescribeEksAnywhereSubscription(const Model::DescribeEksAnywhereSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for DescribeEksAnywhereSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeEksAnywhereSubscriptionRequestT = Model::DescribeEksAnywhereSubscriptionRequest>
        Model::DescribeEksAnywhereSubscriptionOutcomeCallable DescribeEksAnywhereSubscriptionCallable(const DescribeEksAnywhereSubscriptionRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DescribeEksAnywhereSubscription, request);
        }

        /**
         * An Async wrapper for DescribeEksAnywhereSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeEksAnywhereSubscriptionRequestT = Model::DescribeEksAnywhereSubscriptionRequest>
        void DescribeEksAnywhereSubscriptionAsync(const DescribeEksAnywhereSubscriptionRequestT& request, const DescribeEksAnywhereSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DescribeEksAnywhereSubscription, request, handler, context);
        }

        /**
         * <p>Returns descriptive information about an Fargate profile.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeFargateProfile">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeFargateProfileOutcome DescribeFargateProfile(const Model::DescribeFargateProfileRequest& request) const;

        /**
         * A Callable wrapper for DescribeFargateProfile that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeFargateProfileRequestT = Model::DescribeFargateProfileRequest>
        Model::DescribeFargateProfileOutcomeCallable DescribeFargateProfileCallable(const DescribeFargateProfileRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DescribeFargateProfile, request);
        }

        /**
         * An Async wrapper for DescribeFargateProfile that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeFargateProfileRequestT = Model::DescribeFargateProfileRequest>
        void DescribeFargateProfileAsync(const DescribeFargateProfileRequestT& request, const DescribeFargateProfileResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DescribeFargateProfile, request, handler, context);
        }

        /**
         * <p>Returns descriptive information about an identity provider
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeIdentityProviderConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeIdentityProviderConfigOutcome DescribeIdentityProviderConfig(const Model::DescribeIdentityProviderConfigRequest& request) const;

        /**
         * A Callable wrapper for DescribeIdentityProviderConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeIdentityProviderConfigRequestT = Model::DescribeIdentityProviderConfigRequest>
        Model::DescribeIdentityProviderConfigOutcomeCallable DescribeIdentityProviderConfigCallable(const DescribeIdentityProviderConfigRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DescribeIdentityProviderConfig, request);
        }

        /**
         * An Async wrapper for DescribeIdentityProviderConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeIdentityProviderConfigRequestT = Model::DescribeIdentityProviderConfigRequest>
        void DescribeIdentityProviderConfigAsync(const DescribeIdentityProviderConfigRequestT& request, const DescribeIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DescribeIdentityProviderConfig, request, handler, context);
        }

        /**
         * <p>Returns descriptive information about an Amazon EKS node group.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeNodegroup">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeNodegroupOutcome DescribeNodegroup(const Model::DescribeNodegroupRequest& request) const;

        /**
         * A Callable wrapper for DescribeNodegroup that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeNodegroupRequestT = Model::DescribeNodegroupRequest>
        Model::DescribeNodegroupOutcomeCallable DescribeNodegroupCallable(const DescribeNodegroupRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DescribeNodegroup, request);
        }

        /**
         * An Async wrapper for DescribeNodegroup that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeNodegroupRequestT = Model::DescribeNodegroupRequest>
        void DescribeNodegroupAsync(const DescribeNodegroupRequestT& request, const DescribeNodegroupResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DescribeNodegroup, request, handler, context);
        }

        /**
         * <p>Returns descriptive information about an update against your Amazon EKS
         * cluster or associated managed node group or Amazon EKS add-on.</p> <p>When the
         * status of the update is <code>Succeeded</code>, the update is complete. If an
         * update fails, the status is <code>Failed</code>, and an error detail explains
         * the reason for the failure.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DescribeUpdate">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeUpdateOutcome DescribeUpdate(const Model::DescribeUpdateRequest& request) const;

        /**
         * A Callable wrapper for DescribeUpdate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeUpdateRequestT = Model::DescribeUpdateRequest>
        Model::DescribeUpdateOutcomeCallable DescribeUpdateCallable(const DescribeUpdateRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DescribeUpdate, request);
        }

        /**
         * An Async wrapper for DescribeUpdate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeUpdateRequestT = Model::DescribeUpdateRequest>
        void DescribeUpdateAsync(const DescribeUpdateRequestT& request, const DescribeUpdateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DescribeUpdate, request, handler, context);
        }

        /**
         * <p>Disassociates an identity provider configuration from a cluster. If you
         * disassociate an identity provider from your cluster, users included in the
         * provider can no longer access the cluster. However, you can still access the
         * cluster with <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/id_roles_terms-and-concepts.html">IAM
         * principals</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/DisassociateIdentityProviderConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateIdentityProviderConfigOutcome DisassociateIdentityProviderConfig(const Model::DisassociateIdentityProviderConfigRequest& request) const;

        /**
         * A Callable wrapper for DisassociateIdentityProviderConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisassociateIdentityProviderConfigRequestT = Model::DisassociateIdentityProviderConfigRequest>
        Model::DisassociateIdentityProviderConfigOutcomeCallable DisassociateIdentityProviderConfigCallable(const DisassociateIdentityProviderConfigRequestT& request) const
        {
            return SubmitCallable(&EKSClient::DisassociateIdentityProviderConfig, request);
        }

        /**
         * An Async wrapper for DisassociateIdentityProviderConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisassociateIdentityProviderConfigRequestT = Model::DisassociateIdentityProviderConfigRequest>
        void DisassociateIdentityProviderConfigAsync(const DisassociateIdentityProviderConfigRequestT& request, const DisassociateIdentityProviderConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::DisassociateIdentityProviderConfig, request, handler, context);
        }

        /**
         * <p>Lists the installed add-ons.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListAddons">AWS API
         * Reference</a></p>
         */
        virtual Model::ListAddonsOutcome ListAddons(const Model::ListAddonsRequest& request) const;

        /**
         * A Callable wrapper for ListAddons that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListAddonsRequestT = Model::ListAddonsRequest>
        Model::ListAddonsOutcomeCallable ListAddonsCallable(const ListAddonsRequestT& request) const
        {
            return SubmitCallable(&EKSClient::ListAddons, request);
        }

        /**
         * An Async wrapper for ListAddons that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListAddonsRequestT = Model::ListAddonsRequest>
        void ListAddonsAsync(const ListAddonsRequestT& request, const ListAddonsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::ListAddons, request, handler, context);
        }

        /**
         * <p>Lists the Amazon EKS clusters in your Amazon Web Services account in the
         * specified Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListClusters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListClustersOutcome ListClusters(const Model::ListClustersRequest& request) const;

        /**
         * A Callable wrapper for ListClusters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        Model::ListClustersOutcomeCallable ListClustersCallable(const ListClustersRequestT& request) const
        {
            return SubmitCallable(&EKSClient::ListClusters, request);
        }

        /**
         * An Async wrapper for ListClusters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListClustersRequestT = Model::ListClustersRequest>
        void ListClustersAsync(const ListClustersRequestT& request, const ListClustersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::ListClusters, request, handler, context);
        }

        /**
         * <p>Displays the full description of the subscription.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListEksAnywhereSubscriptions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListEksAnywhereSubscriptionsOutcome ListEksAnywhereSubscriptions(const Model::ListEksAnywhereSubscriptionsRequest& request) const;

        /**
         * A Callable wrapper for ListEksAnywhereSubscriptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListEksAnywhereSubscriptionsRequestT = Model::ListEksAnywhereSubscriptionsRequest>
        Model::ListEksAnywhereSubscriptionsOutcomeCallable ListEksAnywhereSubscriptionsCallable(const ListEksAnywhereSubscriptionsRequestT& request) const
        {
            return SubmitCallable(&EKSClient::ListEksAnywhereSubscriptions, request);
        }

        /**
         * An Async wrapper for ListEksAnywhereSubscriptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListEksAnywhereSubscriptionsRequestT = Model::ListEksAnywhereSubscriptionsRequest>
        void ListEksAnywhereSubscriptionsAsync(const ListEksAnywhereSubscriptionsRequestT& request, const ListEksAnywhereSubscriptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::ListEksAnywhereSubscriptions, request, handler, context);
        }

        /**
         * <p>Lists the Fargate profiles associated with the specified cluster in your
         * Amazon Web Services account in the specified Region.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListFargateProfiles">AWS
         * API Reference</a></p>
         */
        virtual Model::ListFargateProfilesOutcome ListFargateProfiles(const Model::ListFargateProfilesRequest& request) const;

        /**
         * A Callable wrapper for ListFargateProfiles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListFargateProfilesRequestT = Model::ListFargateProfilesRequest>
        Model::ListFargateProfilesOutcomeCallable ListFargateProfilesCallable(const ListFargateProfilesRequestT& request) const
        {
            return SubmitCallable(&EKSClient::ListFargateProfiles, request);
        }

        /**
         * An Async wrapper for ListFargateProfiles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListFargateProfilesRequestT = Model::ListFargateProfilesRequest>
        void ListFargateProfilesAsync(const ListFargateProfilesRequestT& request, const ListFargateProfilesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::ListFargateProfiles, request, handler, context);
        }

        /**
         * <p>A list of identity provider configurations.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListIdentityProviderConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListIdentityProviderConfigsOutcome ListIdentityProviderConfigs(const Model::ListIdentityProviderConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListIdentityProviderConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListIdentityProviderConfigsRequestT = Model::ListIdentityProviderConfigsRequest>
        Model::ListIdentityProviderConfigsOutcomeCallable ListIdentityProviderConfigsCallable(const ListIdentityProviderConfigsRequestT& request) const
        {
            return SubmitCallable(&EKSClient::ListIdentityProviderConfigs, request);
        }

        /**
         * An Async wrapper for ListIdentityProviderConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListIdentityProviderConfigsRequestT = Model::ListIdentityProviderConfigsRequest>
        void ListIdentityProviderConfigsAsync(const ListIdentityProviderConfigsRequestT& request, const ListIdentityProviderConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::ListIdentityProviderConfigs, request, handler, context);
        }

        /**
         * <p>Lists the Amazon EKS managed node groups associated with the specified
         * cluster in your Amazon Web Services account in the specified Region.
         * Self-managed node groups are not listed.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListNodegroups">AWS
         * API Reference</a></p>
         */
        virtual Model::ListNodegroupsOutcome ListNodegroups(const Model::ListNodegroupsRequest& request) const;

        /**
         * A Callable wrapper for ListNodegroups that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListNodegroupsRequestT = Model::ListNodegroupsRequest>
        Model::ListNodegroupsOutcomeCallable ListNodegroupsCallable(const ListNodegroupsRequestT& request) const
        {
            return SubmitCallable(&EKSClient::ListNodegroups, request);
        }

        /**
         * An Async wrapper for ListNodegroups that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListNodegroupsRequestT = Model::ListNodegroupsRequest>
        void ListNodegroupsAsync(const ListNodegroupsRequestT& request, const ListNodegroupsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::ListNodegroups, request, handler, context);
        }

        /**
         * <p>List the tags for an Amazon EKS resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&EKSClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::ListTagsForResource, request, handler, context);
        }

        /**
         * <p>Lists the updates associated with an Amazon EKS cluster or managed node group
         * in your Amazon Web Services account, in the specified Region.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/ListUpdates">AWS API
         * Reference</a></p>
         */
        virtual Model::ListUpdatesOutcome ListUpdates(const Model::ListUpdatesRequest& request) const;

        /**
         * A Callable wrapper for ListUpdates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListUpdatesRequestT = Model::ListUpdatesRequest>
        Model::ListUpdatesOutcomeCallable ListUpdatesCallable(const ListUpdatesRequestT& request) const
        {
            return SubmitCallable(&EKSClient::ListUpdates, request);
        }

        /**
         * An Async wrapper for ListUpdates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListUpdatesRequestT = Model::ListUpdatesRequest>
        void ListUpdatesAsync(const ListUpdatesRequestT& request, const ListUpdatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::ListUpdates, request, handler, context);
        }

        /**
         * <p>Connects a Kubernetes cluster to the Amazon EKS control plane. </p> <p>Any
         * Kubernetes cluster can be connected to the Amazon EKS control plane to view
         * current information about the cluster and its nodes. </p> <p>Cluster connection
         * requires two steps. First, send a <code> <a>RegisterClusterRequest</a> </code>
         * to add it to the Amazon EKS control plane.</p> <p>Second, a <a
         * href="https://amazon-eks.s3.us-west-2.amazonaws.com/eks-connector/manifests/eks-connector/latest/eks-connector.yaml">Manifest</a>
         * containing the <code>activationID</code> and <code>activationCode</code> must be
         * applied to the Kubernetes cluster through it's native provider to provide
         * visibility.</p> <p>After the Manifest is updated and applied, then the connected
         * cluster is visible to the Amazon EKS control plane. If the Manifest is not
         * applied within three days, then the connected cluster will no longer be visible
         * and must be deregistered. See <a>DeregisterCluster</a>.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/RegisterCluster">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterClusterOutcome RegisterCluster(const Model::RegisterClusterRequest& request) const;

        /**
         * A Callable wrapper for RegisterCluster that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterClusterRequestT = Model::RegisterClusterRequest>
        Model::RegisterClusterOutcomeCallable RegisterClusterCallable(const RegisterClusterRequestT& request) const
        {
            return SubmitCallable(&EKSClient::RegisterCluster, request);
        }

        /**
         * An Async wrapper for RegisterCluster that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterClusterRequestT = Model::RegisterClusterRequest>
        void RegisterClusterAsync(const RegisterClusterRequestT& request, const RegisterClusterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::RegisterCluster, request, handler, context);
        }

        /**
         * <p>Associates the specified tags to a resource with the specified
         * <code>resourceArn</code>. If existing tags on a resource are not specified in
         * the request parameters, they are not changed. When a resource is deleted, the
         * tags associated with that resource are deleted as well. Tags that you create for
         * Amazon EKS resources do not propagate to any other resources associated with the
         * cluster. For example, if you tag a cluster with this operation, that tag does
         * not automatically propagate to the subnets and nodes associated with the
         * cluster.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/TagResource">AWS API
         * Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&EKSClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::TagResource, request, handler, context);
        }

        /**
         * <p>Deletes specified tags from a resource.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&EKSClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an Amazon EKS add-on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateAddon">AWS API
         * Reference</a></p>
         */
        virtual Model::UpdateAddonOutcome UpdateAddon(const Model::UpdateAddonRequest& request) const;

        /**
         * A Callable wrapper for UpdateAddon that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateAddonRequestT = Model::UpdateAddonRequest>
        Model::UpdateAddonOutcomeCallable UpdateAddonCallable(const UpdateAddonRequestT& request) const
        {
            return SubmitCallable(&EKSClient::UpdateAddon, request);
        }

        /**
         * An Async wrapper for UpdateAddon that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateAddonRequestT = Model::UpdateAddonRequest>
        void UpdateAddonAsync(const UpdateAddonRequestT& request, const UpdateAddonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::UpdateAddon, request, handler, context);
        }

        /**
         * <p>Updates an Amazon EKS cluster configuration. Your cluster continues to
         * function during the update. The response output includes an update ID that you
         * can use to track the status of your cluster update with the
         * <a>DescribeUpdate</a> API operation.</p> <p>You can use this API operation to
         * enable or disable exporting the Kubernetes control plane logs for your cluster
         * to CloudWatch Logs. By default, cluster control plane logs aren't exported to
         * CloudWatch Logs. For more information, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/control-plane-logs.html">Amazon
         * EKS Cluster Control Plane Logs</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>.</p>  <p>CloudWatch Logs ingestion, archive storage, and data
         * scanning rates apply to exported control plane logs. For more information, see
         * <a href="http://aws.amazon.com/cloudwatch/pricing/">CloudWatch Pricing</a>.</p>
         *  <p>You can also use this API operation to enable or disable public and
         * private access to your cluster's Kubernetes API server endpoint. By default,
         * public access is enabled, and private access is disabled. For more information,
         * see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
         * EKS cluster endpoint access control</a> in the <i> <i>Amazon EKS User Guide</i>
         * </i>. </p>  <p>You can't update the subnets or security group IDs for
         * an existing cluster.</p>  <p>Cluster updates are asynchronous, and
         * they should finish within a few minutes. During an update, the cluster status
         * moves to <code>UPDATING</code> (this status transition is eventually
         * consistent). When the update is complete (either <code>Failed</code> or
         * <code>Successful</code>), the cluster status moves to
         * <code>Active</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateClusterConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterConfigOutcome UpdateClusterConfig(const Model::UpdateClusterConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateClusterConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClusterConfigRequestT = Model::UpdateClusterConfigRequest>
        Model::UpdateClusterConfigOutcomeCallable UpdateClusterConfigCallable(const UpdateClusterConfigRequestT& request) const
        {
            return SubmitCallable(&EKSClient::UpdateClusterConfig, request);
        }

        /**
         * An Async wrapper for UpdateClusterConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterConfigRequestT = Model::UpdateClusterConfigRequest>
        void UpdateClusterConfigAsync(const UpdateClusterConfigRequestT& request, const UpdateClusterConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::UpdateClusterConfig, request, handler, context);
        }

        /**
         * <p>Updates an Amazon EKS cluster to the specified Kubernetes version. Your
         * cluster continues to function during the update. The response output includes an
         * update ID that you can use to track the status of your cluster update with the
         * <a>DescribeUpdate</a> API operation.</p> <p>Cluster updates are asynchronous,
         * and they should finish within a few minutes. During an update, the cluster
         * status moves to <code>UPDATING</code> (this status transition is eventually
         * consistent). When the update is complete (either <code>Failed</code> or
         * <code>Successful</code>), the cluster status moves to <code>Active</code>.</p>
         * <p>If your cluster has managed node groups attached to it, all of your node
         * groups’ Kubernetes versions must match the cluster’s Kubernetes version in order
         * to update the cluster to a new Kubernetes version.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateClusterVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateClusterVersionOutcome UpdateClusterVersion(const Model::UpdateClusterVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateClusterVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateClusterVersionRequestT = Model::UpdateClusterVersionRequest>
        Model::UpdateClusterVersionOutcomeCallable UpdateClusterVersionCallable(const UpdateClusterVersionRequestT& request) const
        {
            return SubmitCallable(&EKSClient::UpdateClusterVersion, request);
        }

        /**
         * An Async wrapper for UpdateClusterVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateClusterVersionRequestT = Model::UpdateClusterVersionRequest>
        void UpdateClusterVersionAsync(const UpdateClusterVersionRequestT& request, const UpdateClusterVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::UpdateClusterVersion, request, handler, context);
        }

        /**
         * <p>Update an EKS Anywhere Subscription. Only auto renewal and tags can be
         * updated after subscription creation.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateEksAnywhereSubscription">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateEksAnywhereSubscriptionOutcome UpdateEksAnywhereSubscription(const Model::UpdateEksAnywhereSubscriptionRequest& request) const;

        /**
         * A Callable wrapper for UpdateEksAnywhereSubscription that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateEksAnywhereSubscriptionRequestT = Model::UpdateEksAnywhereSubscriptionRequest>
        Model::UpdateEksAnywhereSubscriptionOutcomeCallable UpdateEksAnywhereSubscriptionCallable(const UpdateEksAnywhereSubscriptionRequestT& request) const
        {
            return SubmitCallable(&EKSClient::UpdateEksAnywhereSubscription, request);
        }

        /**
         * An Async wrapper for UpdateEksAnywhereSubscription that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateEksAnywhereSubscriptionRequestT = Model::UpdateEksAnywhereSubscriptionRequest>
        void UpdateEksAnywhereSubscriptionAsync(const UpdateEksAnywhereSubscriptionRequestT& request, const UpdateEksAnywhereSubscriptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::UpdateEksAnywhereSubscription, request, handler, context);
        }

        /**
         * <p>Updates an Amazon EKS managed node group configuration. Your node group
         * continues to function during the update. The response output includes an update
         * ID that you can use to track the status of your node group update with the
         * <a>DescribeUpdate</a> API operation. Currently you can update the Kubernetes
         * labels for a node group or the scaling configuration.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateNodegroupConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNodegroupConfigOutcome UpdateNodegroupConfig(const Model::UpdateNodegroupConfigRequest& request) const;

        /**
         * A Callable wrapper for UpdateNodegroupConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNodegroupConfigRequestT = Model::UpdateNodegroupConfigRequest>
        Model::UpdateNodegroupConfigOutcomeCallable UpdateNodegroupConfigCallable(const UpdateNodegroupConfigRequestT& request) const
        {
            return SubmitCallable(&EKSClient::UpdateNodegroupConfig, request);
        }

        /**
         * An Async wrapper for UpdateNodegroupConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNodegroupConfigRequestT = Model::UpdateNodegroupConfigRequest>
        void UpdateNodegroupConfigAsync(const UpdateNodegroupConfigRequestT& request, const UpdateNodegroupConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::UpdateNodegroupConfig, request, handler, context);
        }

        /**
         * <p>Updates the Kubernetes version or AMI version of an Amazon EKS managed node
         * group.</p> <p>You can update a node group using a launch template only if the
         * node group was originally deployed with a launch template. If you need to update
         * a custom AMI in a node group that was deployed with a launch template, then
         * update your custom AMI, specify the new ID in a new version of the launch
         * template, and then update the node group to the new version of the launch
         * template.</p> <p>If you update without a launch template, then you can update to
         * the latest available AMI version of a node group's current Kubernetes version by
         * not specifying a Kubernetes version in the request. You can update to the latest
         * AMI version of your cluster's current Kubernetes version by specifying your
         * cluster's Kubernetes version in the request. For information about Linux
         * versions, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-linux-ami-versions.html">Amazon
         * EKS optimized Amazon Linux AMI versions</a> in the <i>Amazon EKS User Guide</i>.
         * For information about Windows versions, see <a
         * href="https://docs.aws.amazon.com/eks/latest/userguide/eks-ami-versions-windows.html">Amazon
         * EKS optimized Windows AMI versions</a> in the <i>Amazon EKS User Guide</i>. </p>
         * <p>You cannot roll back a node group to an earlier Kubernetes version or AMI
         * version.</p> <p>When a node in a managed node group is terminated due to a
         * scaling action or update, the pods in that node are drained first. Amazon EKS
         * attempts to drain the nodes gracefully and will fail if it is unable to do so.
         * You can <code>force</code> the update if Amazon EKS is unable to drain the nodes
         * as a result of a pod disruption budget issue.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/UpdateNodegroupVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateNodegroupVersionOutcome UpdateNodegroupVersion(const Model::UpdateNodegroupVersionRequest& request) const;

        /**
         * A Callable wrapper for UpdateNodegroupVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateNodegroupVersionRequestT = Model::UpdateNodegroupVersionRequest>
        Model::UpdateNodegroupVersionOutcomeCallable UpdateNodegroupVersionCallable(const UpdateNodegroupVersionRequestT& request) const
        {
            return SubmitCallable(&EKSClient::UpdateNodegroupVersion, request);
        }

        /**
         * An Async wrapper for UpdateNodegroupVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateNodegroupVersionRequestT = Model::UpdateNodegroupVersionRequest>
        void UpdateNodegroupVersionAsync(const UpdateNodegroupVersionRequestT& request, const UpdateNodegroupVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&EKSClient::UpdateNodegroupVersion, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<EKSEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<EKSClient>;
      void init(const EKSClientConfiguration& clientConfiguration);

      EKSClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<EKSEndpointProviderBase> m_endpointProvider;
  };

} // namespace EKS
} // namespace Aws
