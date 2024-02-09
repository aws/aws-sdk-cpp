/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/LightsailServiceClientModel.h>

namespace Aws
{
namespace Lightsail
{
  /**
   * <p>Amazon Lightsail is the easiest way to get started with Amazon Web Services
   * (Amazon Web Services) for developers who need to build websites or web
   * applications. It includes everything you need to launch your project quickly -
   * instances (virtual private servers), container services, storage buckets,
   * managed databases, SSD-based block storage, static IP addresses, load balancers,
   * content delivery network (CDN) distributions, DNS management of registered
   * domains, and resource snapshots (backups) - for a low, predictable monthly
   * price.</p> <p>You can manage your Lightsail resources using the Lightsail
   * console, Lightsail API, Command Line Interface (CLI), or SDKs. For more
   * information about Lightsail concepts and tasks, see the <a
   * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Amazon
   * Lightsail Developer Guide</a>.</p> <p>This API Reference provides detailed
   * information about the actions, data types, parameters, and errors of the
   * Lightsail service. For more information about the supported Amazon Web Services
   * Regions, endpoints, and service quotas of the Lightsail service, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon
   * Lightsail Endpoints and Quotas</a> in the <i>Amazon Web Services General
   * Reference</i>.</p>
   */
  class AWS_LIGHTSAIL_API LightsailClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<LightsailClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* GetServiceName();
      static const char* GetAllocationTag();

      typedef LightsailClientConfiguration ClientConfigurationType;
      typedef LightsailEndpointProvider EndpointProviderType;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LightsailClient(const Aws::Lightsail::LightsailClientConfiguration& clientConfiguration = Aws::Lightsail::LightsailClientConfiguration(),
                        std::shared_ptr<LightsailEndpointProviderBase> endpointProvider = nullptr);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LightsailClient(const Aws::Auth::AWSCredentials& credentials,
                        std::shared_ptr<LightsailEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Lightsail::LightsailClientConfiguration& clientConfiguration = Aws::Lightsail::LightsailClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LightsailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        std::shared_ptr<LightsailEndpointProviderBase> endpointProvider = nullptr,
                        const Aws::Lightsail::LightsailClientConfiguration& clientConfiguration = Aws::Lightsail::LightsailClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LightsailClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        LightsailClient(const Aws::Auth::AWSCredentials& credentials,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        LightsailClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                        const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~LightsailClient();

        /**
         * <p>Allocates a static IP address.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AllocateStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::AllocateStaticIpOutcome AllocateStaticIp(const Model::AllocateStaticIpRequest& request) const;

        /**
         * A Callable wrapper for AllocateStaticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AllocateStaticIpRequestT = Model::AllocateStaticIpRequest>
        Model::AllocateStaticIpOutcomeCallable AllocateStaticIpCallable(const AllocateStaticIpRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::AllocateStaticIp, request);
        }

        /**
         * An Async wrapper for AllocateStaticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AllocateStaticIpRequestT = Model::AllocateStaticIpRequest>
        void AllocateStaticIpAsync(const AllocateStaticIpRequestT& request, const AllocateStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::AllocateStaticIp, request, handler, context);
        }

        /**
         * <p>Attaches an SSL/TLS certificate to your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is attached, your
         * distribution accepts HTTPS traffic for all of the domains that are associated
         * with the certificate.</p> <p>Use the <code>CreateCertificate</code> action to
         * create a certificate that you can attach to your distribution.</p> 
         * <p>Only certificates created in the <code>us-east-1</code> Amazon Web Services
         * Region can be attached to Lightsail distributions. Lightsail distributions are
         * global resources that can reference an origin in any Amazon Web Services Region,
         * and distribute its content globally. However, all distributions are located in
         * the <code>us-east-1</code> Region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachCertificateToDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachCertificateToDistributionOutcome AttachCertificateToDistribution(const Model::AttachCertificateToDistributionRequest& request) const;

        /**
         * A Callable wrapper for AttachCertificateToDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachCertificateToDistributionRequestT = Model::AttachCertificateToDistributionRequest>
        Model::AttachCertificateToDistributionOutcomeCallable AttachCertificateToDistributionCallable(const AttachCertificateToDistributionRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::AttachCertificateToDistribution, request);
        }

        /**
         * An Async wrapper for AttachCertificateToDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachCertificateToDistributionRequestT = Model::AttachCertificateToDistributionRequest>
        void AttachCertificateToDistributionAsync(const AttachCertificateToDistributionRequestT& request, const AttachCertificateToDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::AttachCertificateToDistribution, request, handler, context);
        }

        /**
         * <p>Attaches a block storage disk to a running or stopped Lightsail instance and
         * exposes it to the instance with the specified disk name.</p> <p>The <code>attach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>disk name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachDiskOutcome AttachDisk(const Model::AttachDiskRequest& request) const;

        /**
         * A Callable wrapper for AttachDisk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachDiskRequestT = Model::AttachDiskRequest>
        Model::AttachDiskOutcomeCallable AttachDiskCallable(const AttachDiskRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::AttachDisk, request);
        }

        /**
         * An Async wrapper for AttachDisk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachDiskRequestT = Model::AttachDiskRequest>
        void AttachDiskAsync(const AttachDiskRequestT& request, const AttachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::AttachDisk, request, handler, context);
        }

        /**
         * <p>Attaches one or more Lightsail instances to a load balancer.</p> <p>After
         * some time, the instances are attached to the load balancer and the health check
         * status is available.</p> <p>The <code>attach instances to load balancer</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachInstancesToLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachInstancesToLoadBalancerOutcome AttachInstancesToLoadBalancer(const Model::AttachInstancesToLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for AttachInstancesToLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachInstancesToLoadBalancerRequestT = Model::AttachInstancesToLoadBalancerRequest>
        Model::AttachInstancesToLoadBalancerOutcomeCallable AttachInstancesToLoadBalancerCallable(const AttachInstancesToLoadBalancerRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::AttachInstancesToLoadBalancer, request);
        }

        /**
         * An Async wrapper for AttachInstancesToLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachInstancesToLoadBalancerRequestT = Model::AttachInstancesToLoadBalancerRequest>
        void AttachInstancesToLoadBalancerAsync(const AttachInstancesToLoadBalancerRequestT& request, const AttachInstancesToLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::AttachInstancesToLoadBalancer, request, handler, context);
        }

        /**
         * <p>Attaches a Transport Layer Security (TLS) certificate to your load balancer.
         * TLS is just an updated, more secure version of Secure Socket Layer (SSL).</p>
         * <p>Once you create and validate your certificate, you can attach it to your load
         * balancer. You can also use this API to rotate the certificates on your account.
         * Use the <code>AttachLoadBalancerTlsCertificate</code> action with the
         * non-attached certificate, and it will replace the existing one and become the
         * attached certificate.</p> <p>The <code>AttachLoadBalancerTlsCertificate</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachLoadBalancerTlsCertificateOutcome AttachLoadBalancerTlsCertificate(const Model::AttachLoadBalancerTlsCertificateRequest& request) const;

        /**
         * A Callable wrapper for AttachLoadBalancerTlsCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachLoadBalancerTlsCertificateRequestT = Model::AttachLoadBalancerTlsCertificateRequest>
        Model::AttachLoadBalancerTlsCertificateOutcomeCallable AttachLoadBalancerTlsCertificateCallable(const AttachLoadBalancerTlsCertificateRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::AttachLoadBalancerTlsCertificate, request);
        }

        /**
         * An Async wrapper for AttachLoadBalancerTlsCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachLoadBalancerTlsCertificateRequestT = Model::AttachLoadBalancerTlsCertificateRequest>
        void AttachLoadBalancerTlsCertificateAsync(const AttachLoadBalancerTlsCertificateRequestT& request, const AttachLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::AttachLoadBalancerTlsCertificate, request, handler, context);
        }

        /**
         * <p>Attaches a static IP address to a specific Amazon Lightsail
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/AttachStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::AttachStaticIpOutcome AttachStaticIp(const Model::AttachStaticIpRequest& request) const;

        /**
         * A Callable wrapper for AttachStaticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AttachStaticIpRequestT = Model::AttachStaticIpRequest>
        Model::AttachStaticIpOutcomeCallable AttachStaticIpCallable(const AttachStaticIpRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::AttachStaticIp, request);
        }

        /**
         * An Async wrapper for AttachStaticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AttachStaticIpRequestT = Model::AttachStaticIpRequest>
        void AttachStaticIpAsync(const AttachStaticIpRequestT& request, const AttachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::AttachStaticIp, request, handler, context);
        }

        /**
         * <p>Closes ports for a specific Amazon Lightsail instance.</p> <p>The
         * <code>CloseInstancePublicPorts</code> action supports tag-based access control
         * via resource tags applied to the resource identified by
         * <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CloseInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::CloseInstancePublicPortsOutcome CloseInstancePublicPorts(const Model::CloseInstancePublicPortsRequest& request) const;

        /**
         * A Callable wrapper for CloseInstancePublicPorts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CloseInstancePublicPortsRequestT = Model::CloseInstancePublicPortsRequest>
        Model::CloseInstancePublicPortsOutcomeCallable CloseInstancePublicPortsCallable(const CloseInstancePublicPortsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CloseInstancePublicPorts, request);
        }

        /**
         * An Async wrapper for CloseInstancePublicPorts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CloseInstancePublicPortsRequestT = Model::CloseInstancePublicPortsRequest>
        void CloseInstancePublicPortsAsync(const CloseInstancePublicPortsRequestT& request, const CloseInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CloseInstancePublicPorts, request, handler, context);
        }

        /**
         * <p>Copies a manual snapshot of an instance or disk as another manual snapshot,
         * or copies an automatic snapshot of an instance or disk as a manual snapshot.
         * This operation can also be used to copy a manual or automatic snapshot of an
         * instance or a disk from one Amazon Web Services Region to another in Amazon
         * Lightsail.</p> <p>When copying a <i>manual snapshot</i>, be sure to define the
         * <code>source region</code>, <code>source snapshot name</code>, and <code>target
         * snapshot name</code> parameters.</p> <p>When copying an <i>automatic
         * snapshot</i>, be sure to define the <code>source region</code>, <code>source
         * resource name</code>, <code>target snapshot name</code>, and either the
         * <code>restore date</code> or the <code>use latest restorable auto
         * snapshot</code> parameters.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CopySnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CopySnapshotOutcome CopySnapshot(const Model::CopySnapshotRequest& request) const;

        /**
         * A Callable wrapper for CopySnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CopySnapshotRequestT = Model::CopySnapshotRequest>
        Model::CopySnapshotOutcomeCallable CopySnapshotCallable(const CopySnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CopySnapshot, request);
        }

        /**
         * An Async wrapper for CopySnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CopySnapshotRequestT = Model::CopySnapshotRequest>
        void CopySnapshotAsync(const CopySnapshotRequestT& request, const CopySnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CopySnapshot, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Lightsail bucket.</p> <p>A bucket is a cloud storage
         * resource available in the Lightsail object storage service. Use buckets to store
         * objects such as data and its descriptive metadata. For more information about
         * buckets, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/buckets-in-amazon-lightsail">Buckets
         * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBucketOutcome CreateBucket(const Model::CreateBucketRequest& request) const;

        /**
         * A Callable wrapper for CreateBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBucketRequestT = Model::CreateBucketRequest>
        Model::CreateBucketOutcomeCallable CreateBucketCallable(const CreateBucketRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateBucket, request);
        }

        /**
         * An Async wrapper for CreateBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBucketRequestT = Model::CreateBucketRequest>
        void CreateBucketAsync(const CreateBucketRequestT& request, const CreateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateBucket, request, handler, context);
        }

        /**
         * <p>Creates a new access key for the specified Amazon Lightsail bucket. Access
         * keys consist of an access key ID and corresponding secret access key.</p>
         * <p>Access keys grant full programmatic access to the specified bucket and its
         * objects. You can have a maximum of two access keys per bucket. Use the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBucketAccessKeys.html">GetBucketAccessKeys</a>
         * action to get a list of current access keys for a specific bucket. For more
         * information about access keys, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-bucket-access-keys">Creating
         * access keys for a bucket in Amazon Lightsail</a> in the <i>Amazon Lightsail
         * Developer Guide</i>.</p>  <p>The <code>secretAccessKey</code> value
         * is returned only in response to the <code>CreateBucketAccessKey</code> action.
         * You can get a secret access key only when you first create an access key; you
         * cannot get the secret access key later. If you lose the secret access key, you
         * must create a new access key.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateBucketAccessKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateBucketAccessKeyOutcome CreateBucketAccessKey(const Model::CreateBucketAccessKeyRequest& request) const;

        /**
         * A Callable wrapper for CreateBucketAccessKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateBucketAccessKeyRequestT = Model::CreateBucketAccessKeyRequest>
        Model::CreateBucketAccessKeyOutcomeCallable CreateBucketAccessKeyCallable(const CreateBucketAccessKeyRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateBucketAccessKey, request);
        }

        /**
         * An Async wrapper for CreateBucketAccessKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateBucketAccessKeyRequestT = Model::CreateBucketAccessKeyRequest>
        void CreateBucketAccessKeyAsync(const CreateBucketAccessKeyRequestT& request, const CreateBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateBucketAccessKey, request, handler, context);
        }

        /**
         * <p>Creates an SSL/TLS certificate for an Amazon Lightsail content delivery
         * network (CDN) distribution and a container service.</p> <p>After the certificate
         * is valid, use the <code>AttachCertificateToDistribution</code> action to use the
         * certificate and its domains with your distribution. Or use the
         * <code>UpdateContainerService</code> action to use the certificate and its
         * domains with your container service.</p>  <p>Only certificates
         * created in the <code>us-east-1</code> Amazon Web Services Region can be attached
         * to Lightsail distributions. Lightsail distributions are global resources that
         * can reference an origin in any Amazon Web Services Region, and distribute its
         * content globally. However, all distributions are located in the
         * <code>us-east-1</code> Region.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCertificateOutcome CreateCertificate(const Model::CreateCertificateRequest& request) const;

        /**
         * A Callable wrapper for CreateCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCertificateRequestT = Model::CreateCertificateRequest>
        Model::CreateCertificateOutcomeCallable CreateCertificateCallable(const CreateCertificateRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateCertificate, request);
        }

        /**
         * An Async wrapper for CreateCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCertificateRequestT = Model::CreateCertificateRequest>
        void CreateCertificateAsync(const CreateCertificateRequestT& request, const CreateCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateCertificate, request, handler, context);
        }

        /**
         * <p>Creates an AWS CloudFormation stack, which creates a new Amazon EC2 instance
         * from an exported Amazon Lightsail snapshot. This operation results in a
         * CloudFormation stack record that can be used to track the AWS CloudFormation
         * stack created. Use the <code>get cloud formation stack records</code> operation
         * to get a list of the CloudFormation stacks created.</p>  <p>Wait
         * until after your new Amazon EC2 instance is created before running the
         * <code>create cloud formation stack</code> operation again with the same export
         * snapshot record.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateCloudFormationStack">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCloudFormationStackOutcome CreateCloudFormationStack(const Model::CreateCloudFormationStackRequest& request) const;

        /**
         * A Callable wrapper for CreateCloudFormationStack that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateCloudFormationStackRequestT = Model::CreateCloudFormationStackRequest>
        Model::CreateCloudFormationStackOutcomeCallable CreateCloudFormationStackCallable(const CreateCloudFormationStackRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateCloudFormationStack, request);
        }

        /**
         * An Async wrapper for CreateCloudFormationStack that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateCloudFormationStackRequestT = Model::CreateCloudFormationStackRequest>
        void CreateCloudFormationStackAsync(const CreateCloudFormationStackRequestT& request, const CreateCloudFormationStackResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateCloudFormationStack, request, handler, context);
        }

        /**
         * <p>Creates an email or SMS text message contact method.</p> <p>A contact method
         * is used to send you notifications about your Amazon Lightsail resources. You can
         * add one email address and one mobile phone number contact method in each Amazon
         * Web Services Region. However, SMS text messaging is not supported in some Amazon
         * Web Services Regions, and SMS text messages cannot be sent to some
         * countries/regions. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContactMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContactMethodOutcome CreateContactMethod(const Model::CreateContactMethodRequest& request) const;

        /**
         * A Callable wrapper for CreateContactMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContactMethodRequestT = Model::CreateContactMethodRequest>
        Model::CreateContactMethodOutcomeCallable CreateContactMethodCallable(const CreateContactMethodRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateContactMethod, request);
        }

        /**
         * An Async wrapper for CreateContactMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContactMethodRequestT = Model::CreateContactMethodRequest>
        void CreateContactMethodAsync(const CreateContactMethodRequestT& request, const CreateContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateContactMethod, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Lightsail container service.</p> <p>A Lightsail container
         * service is a compute resource to which you can deploy containers. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-container-services">Container
         * services in Amazon Lightsail</a> in the <i>Lightsail Dev
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerService">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerServiceOutcome CreateContainerService(const Model::CreateContainerServiceRequest& request) const;

        /**
         * A Callable wrapper for CreateContainerService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContainerServiceRequestT = Model::CreateContainerServiceRequest>
        Model::CreateContainerServiceOutcomeCallable CreateContainerServiceCallable(const CreateContainerServiceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateContainerService, request);
        }

        /**
         * An Async wrapper for CreateContainerService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContainerServiceRequestT = Model::CreateContainerServiceRequest>
        void CreateContainerServiceAsync(const CreateContainerServiceRequestT& request, const CreateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateContainerService, request, handler, context);
        }

        /**
         * <p>Creates a deployment for your Amazon Lightsail container service.</p> <p>A
         * deployment specifies the containers that will be launched on the container
         * service and their settings, such as the ports to open, the environment variables
         * to apply, and the launch command to run. It also specifies the container that
         * will serve as the public endpoint of the deployment and its settings, such as
         * the HTTP or HTTPS port to use, and the health check configuration.</p> <p>You
         * can deploy containers to your container service using container images from a
         * public registry such as Amazon ECR Public, or from your local machine. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-container-images">Creating
         * container images for your Amazon Lightsail container services</a> in the
         * <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerServiceDeployment">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerServiceDeploymentOutcome CreateContainerServiceDeployment(const Model::CreateContainerServiceDeploymentRequest& request) const;

        /**
         * A Callable wrapper for CreateContainerServiceDeployment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContainerServiceDeploymentRequestT = Model::CreateContainerServiceDeploymentRequest>
        Model::CreateContainerServiceDeploymentOutcomeCallable CreateContainerServiceDeploymentCallable(const CreateContainerServiceDeploymentRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateContainerServiceDeployment, request);
        }

        /**
         * An Async wrapper for CreateContainerServiceDeployment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContainerServiceDeploymentRequestT = Model::CreateContainerServiceDeploymentRequest>
        void CreateContainerServiceDeploymentAsync(const CreateContainerServiceDeploymentRequestT& request, const CreateContainerServiceDeploymentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateContainerServiceDeployment, request, handler, context);
        }

        /**
         * <p>Creates a temporary set of log in credentials that you can use to log in to
         * the Docker process on your local machine. After you're logged in, you can use
         * the native Docker commands to push your local container images to the container
         * image registry of your Amazon Lightsail account so that you can use them with
         * your Lightsail container service. The log in credentials expire 12 hours after
         * they are created, at which point you will need to create a new set of log in
         * credentials.</p>  <p>You can only push container images to the container
         * service registry of your Lightsail account. You cannot pull container images or
         * perform any other container image management actions on the container service
         * registry.</p>  <p>After you push your container images to the container
         * image registry of your Lightsail account, use the
         * <code>RegisterContainerImage</code> action to register the pushed images to a
         * specific Lightsail container service.</p>  <p>This action is not required
         * if you install and use the Lightsail Control (lightsailctl) plugin to push
         * container images to your Lightsail container service. For more information, see
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-pushing-container-images">Pushing
         * and managing container images on your Amazon Lightsail container services</a> in
         * the <i>Amazon Lightsail Developer Guide</i>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateContainerServiceRegistryLogin">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateContainerServiceRegistryLoginOutcome CreateContainerServiceRegistryLogin(const Model::CreateContainerServiceRegistryLoginRequest& request) const;

        /**
         * A Callable wrapper for CreateContainerServiceRegistryLogin that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateContainerServiceRegistryLoginRequestT = Model::CreateContainerServiceRegistryLoginRequest>
        Model::CreateContainerServiceRegistryLoginOutcomeCallable CreateContainerServiceRegistryLoginCallable(const CreateContainerServiceRegistryLoginRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateContainerServiceRegistryLogin, request);
        }

        /**
         * An Async wrapper for CreateContainerServiceRegistryLogin that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateContainerServiceRegistryLoginRequestT = Model::CreateContainerServiceRegistryLoginRequest>
        void CreateContainerServiceRegistryLoginAsync(const CreateContainerServiceRegistryLoginRequestT& request, const CreateContainerServiceRegistryLoginResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateContainerServiceRegistryLogin, request, handler, context);
        }

        /**
         * <p>Creates a block storage disk that can be attached to an Amazon Lightsail
         * instance in the same Availability Zone (<code>us-east-2a</code>).</p> <p>The
         * <code>create disk</code> operation supports tag-based access control via request
         * tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskOutcome CreateDisk(const Model::CreateDiskRequest& request) const;

        /**
         * A Callable wrapper for CreateDisk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDiskRequestT = Model::CreateDiskRequest>
        Model::CreateDiskOutcomeCallable CreateDiskCallable(const CreateDiskRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateDisk, request);
        }

        /**
         * An Async wrapper for CreateDisk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDiskRequestT = Model::CreateDiskRequest>
        void CreateDiskAsync(const CreateDiskRequestT& request, const CreateDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateDisk, request, handler, context);
        }

        /**
         * <p>Creates a block storage disk from a manual or automatic snapshot of a disk.
         * The resulting disk can be attached to an Amazon Lightsail instance in the same
         * Availability Zone (<code>us-east-2a</code>).</p> <p>The <code>create disk from
         * snapshot</code> operation supports tag-based access control via request tags and
         * resource tags applied to the resource identified by <code>disk snapshot
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskFromSnapshotOutcome CreateDiskFromSnapshot(const Model::CreateDiskFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateDiskFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDiskFromSnapshotRequestT = Model::CreateDiskFromSnapshotRequest>
        Model::CreateDiskFromSnapshotOutcomeCallable CreateDiskFromSnapshotCallable(const CreateDiskFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateDiskFromSnapshot, request);
        }

        /**
         * An Async wrapper for CreateDiskFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDiskFromSnapshotRequestT = Model::CreateDiskFromSnapshotRequest>
        void CreateDiskFromSnapshotAsync(const CreateDiskFromSnapshotRequestT& request, const CreateDiskFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateDiskFromSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of a block storage disk. You can use snapshots for
         * backups, to make copies of disks, and to save data before shutting down a
         * Lightsail instance.</p> <p>You can take a snapshot of an attached disk that is
         * in use; however, snapshots only capture data that has been written to your disk
         * at the time the snapshot command is issued. This may exclude any data that has
         * been cached by any applications or the operating system. If you can pause any
         * file systems on the disk long enough to take a snapshot, your snapshot should be
         * complete. Nevertheless, if you cannot pause all file writes to the disk, you
         * should unmount the disk from within the Lightsail instance, issue the create
         * disk snapshot command, and then remount the disk to ensure a consistent and
         * complete snapshot. You may remount and use your disk while the snapshot status
         * is pending.</p> <p>You can also use this operation to create a snapshot of an
         * instance's system volume. You might want to do this, for example, to recover
         * data from the system volume of a botched instance or to create a backup of the
         * system volume like you would for a block storage disk. To create a snapshot of a
         * system volume, just define the <code>instance name</code> parameter when issuing
         * the snapshot command, and a snapshot of the defined instance's system volume
         * will be created. After the snapshot is available, you can create a block storage
         * disk from the snapshot and attach it to a running instance to access the data on
         * the disk.</p> <p>The <code>create disk snapshot</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDiskSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDiskSnapshotOutcome CreateDiskSnapshot(const Model::CreateDiskSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateDiskSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDiskSnapshotRequestT = Model::CreateDiskSnapshotRequest>
        Model::CreateDiskSnapshotOutcomeCallable CreateDiskSnapshotCallable(const CreateDiskSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateDiskSnapshot, request);
        }

        /**
         * An Async wrapper for CreateDiskSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDiskSnapshotRequestT = Model::CreateDiskSnapshotRequest>
        void CreateDiskSnapshotAsync(const CreateDiskSnapshotRequestT& request, const CreateDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateDiskSnapshot, request, handler, context);
        }

        /**
         * <p>Creates an Amazon Lightsail content delivery network (CDN) distribution.</p>
         * <p>A distribution is a globally distributed network of caching servers that
         * improve the performance of your website or web application hosted on a Lightsail
         * instance. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-content-delivery-network-distributions">Content
         * delivery networks in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDistributionOutcome CreateDistribution(const Model::CreateDistributionRequest& request) const;

        /**
         * A Callable wrapper for CreateDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDistributionRequestT = Model::CreateDistributionRequest>
        Model::CreateDistributionOutcomeCallable CreateDistributionCallable(const CreateDistributionRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateDistribution, request);
        }

        /**
         * An Async wrapper for CreateDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDistributionRequestT = Model::CreateDistributionRequest>
        void CreateDistributionAsync(const CreateDistributionRequestT& request, const CreateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateDistribution, request, handler, context);
        }

        /**
         * <p>Creates a domain resource for the specified domain (example.com).</p> <p>The
         * <code>create domain</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainOutcome CreateDomain(const Model::CreateDomainRequest& request) const;

        /**
         * A Callable wrapper for CreateDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        Model::CreateDomainOutcomeCallable CreateDomainCallable(const CreateDomainRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateDomain, request);
        }

        /**
         * An Async wrapper for CreateDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainRequestT = Model::CreateDomainRequest>
        void CreateDomainAsync(const CreateDomainRequestT& request, const CreateDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateDomain, request, handler, context);
        }

        /**
         * <p>Creates one of the following domain name system (DNS) records in a domain DNS
         * zone: Address (A), canonical name (CNAME), mail exchanger (MX), name server
         * (NS), start of authority (SOA), service locator (SRV), or text (TXT).</p> <p>The
         * <code>create domain entry</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by <code>domain name</code>.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateDomainEntryOutcome CreateDomainEntry(const Model::CreateDomainEntryRequest& request) const;

        /**
         * A Callable wrapper for CreateDomainEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateDomainEntryRequestT = Model::CreateDomainEntryRequest>
        Model::CreateDomainEntryOutcomeCallable CreateDomainEntryCallable(const CreateDomainEntryRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateDomainEntry, request);
        }

        /**
         * An Async wrapper for CreateDomainEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateDomainEntryRequestT = Model::CreateDomainEntryRequest>
        void CreateDomainEntryAsync(const CreateDomainEntryRequestT& request, const CreateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateDomainEntry, request, handler, context);
        }

        /**
         * <p>Creates two URLs that are used to access a virtual computer’s graphical user
         * interface (GUI) session. The primary URL initiates a web-based NICE DCV session
         * to the virtual computer's application. The secondary URL initiates a web-based
         * NICE DCV session to the virtual computer's operating session. </p> <p>Use
         * <code>StartGUISession</code> to open the session.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateGUISessionAccessDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateGUISessionAccessDetailsOutcome CreateGUISessionAccessDetails(const Model::CreateGUISessionAccessDetailsRequest& request) const;

        /**
         * A Callable wrapper for CreateGUISessionAccessDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateGUISessionAccessDetailsRequestT = Model::CreateGUISessionAccessDetailsRequest>
        Model::CreateGUISessionAccessDetailsOutcomeCallable CreateGUISessionAccessDetailsCallable(const CreateGUISessionAccessDetailsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateGUISessionAccessDetails, request);
        }

        /**
         * An Async wrapper for CreateGUISessionAccessDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateGUISessionAccessDetailsRequestT = Model::CreateGUISessionAccessDetailsRequest>
        void CreateGUISessionAccessDetailsAsync(const CreateGUISessionAccessDetailsRequestT& request, const CreateGUISessionAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateGUISessionAccessDetails, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of a specific virtual private server, or <i>instance</i>.
         * You can use a snapshot to create a new instance that is based on that
         * snapshot.</p> <p>The <code>create instance snapshot</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstanceSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstanceSnapshotOutcome CreateInstanceSnapshot(const Model::CreateInstanceSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateInstanceSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInstanceSnapshotRequestT = Model::CreateInstanceSnapshotRequest>
        Model::CreateInstanceSnapshotOutcomeCallable CreateInstanceSnapshotCallable(const CreateInstanceSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateInstanceSnapshot, request);
        }

        /**
         * An Async wrapper for CreateInstanceSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInstanceSnapshotRequestT = Model::CreateInstanceSnapshotRequest>
        void CreateInstanceSnapshotAsync(const CreateInstanceSnapshotRequestT& request, const CreateInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateInstanceSnapshot, request, handler, context);
        }

        /**
         * <p>Creates one or more Amazon Lightsail instances.</p> <p>The <code>create
         * instances</code> operation supports tag-based access control via request tags.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Lightsail
         * Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstancesOutcome CreateInstances(const Model::CreateInstancesRequest& request) const;

        /**
         * A Callable wrapper for CreateInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInstancesRequestT = Model::CreateInstancesRequest>
        Model::CreateInstancesOutcomeCallable CreateInstancesCallable(const CreateInstancesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateInstances, request);
        }

        /**
         * An Async wrapper for CreateInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInstancesRequestT = Model::CreateInstancesRequest>
        void CreateInstancesAsync(const CreateInstancesRequestT& request, const CreateInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateInstances, request, handler, context);
        }

        /**
         * <p>Creates one or more new instances from a manual or automatic snapshot of an
         * instance.</p> <p>The <code>create instances from snapshot</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>instance snapshot name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateInstancesFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateInstancesFromSnapshotOutcome CreateInstancesFromSnapshot(const Model::CreateInstancesFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateInstancesFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateInstancesFromSnapshotRequestT = Model::CreateInstancesFromSnapshotRequest>
        Model::CreateInstancesFromSnapshotOutcomeCallable CreateInstancesFromSnapshotCallable(const CreateInstancesFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateInstancesFromSnapshot, request);
        }

        /**
         * An Async wrapper for CreateInstancesFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateInstancesFromSnapshotRequestT = Model::CreateInstancesFromSnapshotRequest>
        void CreateInstancesFromSnapshotAsync(const CreateInstancesFromSnapshotRequestT& request, const CreateInstancesFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateInstancesFromSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a custom SSH key pair that you can use with an Amazon Lightsail
         * instance.</p>  <p>Use the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_DownloadDefaultKeyPair.html">DownloadDefaultKeyPair</a>
         * action to create a Lightsail default key pair in an Amazon Web Services Region
         * where a default key pair does not currently exist.</p>  <p>The
         * <code>create key pair</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeyPairOutcome CreateKeyPair(const Model::CreateKeyPairRequest& request) const;

        /**
         * A Callable wrapper for CreateKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateKeyPairRequestT = Model::CreateKeyPairRequest>
        Model::CreateKeyPairOutcomeCallable CreateKeyPairCallable(const CreateKeyPairRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateKeyPair, request);
        }

        /**
         * An Async wrapper for CreateKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateKeyPairRequestT = Model::CreateKeyPairRequest>
        void CreateKeyPairAsync(const CreateKeyPairRequestT& request, const CreateKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateKeyPair, request, handler, context);
        }

        /**
         * <p>Creates a Lightsail load balancer. To learn more about deciding whether to
         * load balance your application, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/configure-lightsail-instances-for-load-balancing">Configure
         * your Lightsail instances for load balancing</a>. You can create up to 5 load
         * balancers per AWS Region in your account.</p> <p>When you create a load
         * balancer, you can specify a unique name and port settings. To change additional
         * load balancer settings, use the <code>UpdateLoadBalancerAttribute</code>
         * operation.</p> <p>The <code>create load balancer</code> operation supports
         * tag-based access control via request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerOutcome CreateLoadBalancer(const Model::CreateLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for CreateLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLoadBalancerRequestT = Model::CreateLoadBalancerRequest>
        Model::CreateLoadBalancerOutcomeCallable CreateLoadBalancerCallable(const CreateLoadBalancerRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateLoadBalancer, request);
        }

        /**
         * An Async wrapper for CreateLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLoadBalancerRequestT = Model::CreateLoadBalancerRequest>
        void CreateLoadBalancerAsync(const CreateLoadBalancerRequestT& request, const CreateLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateLoadBalancer, request, handler, context);
        }

        /**
         * <p>Creates an SSL/TLS certificate for an Amazon Lightsail load balancer.</p>
         * <p>TLS is just an updated, more secure version of Secure Socket Layer (SSL).</p>
         * <p>The <code>CreateLoadBalancerTlsCertificate</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>load balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateLoadBalancerTlsCertificateOutcome CreateLoadBalancerTlsCertificate(const Model::CreateLoadBalancerTlsCertificateRequest& request) const;

        /**
         * A Callable wrapper for CreateLoadBalancerTlsCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateLoadBalancerTlsCertificateRequestT = Model::CreateLoadBalancerTlsCertificateRequest>
        Model::CreateLoadBalancerTlsCertificateOutcomeCallable CreateLoadBalancerTlsCertificateCallable(const CreateLoadBalancerTlsCertificateRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateLoadBalancerTlsCertificate, request);
        }

        /**
         * An Async wrapper for CreateLoadBalancerTlsCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateLoadBalancerTlsCertificateRequestT = Model::CreateLoadBalancerTlsCertificateRequest>
        void CreateLoadBalancerTlsCertificateAsync(const CreateLoadBalancerTlsCertificateRequestT& request, const CreateLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateLoadBalancerTlsCertificate, request, handler, context);
        }

        /**
         * <p>Creates a new database in Amazon Lightsail.</p> <p>The <code>create
         * relational database</code> operation supports tag-based access control via
         * request tags. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelationalDatabaseOutcome CreateRelationalDatabase(const Model::CreateRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for CreateRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRelationalDatabaseRequestT = Model::CreateRelationalDatabaseRequest>
        Model::CreateRelationalDatabaseOutcomeCallable CreateRelationalDatabaseCallable(const CreateRelationalDatabaseRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateRelationalDatabase, request);
        }

        /**
         * An Async wrapper for CreateRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRelationalDatabaseRequestT = Model::CreateRelationalDatabaseRequest>
        void CreateRelationalDatabaseAsync(const CreateRelationalDatabaseRequestT& request, const CreateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateRelationalDatabase, request, handler, context);
        }

        /**
         * <p>Creates a new database from an existing database snapshot in Amazon
         * Lightsail.</p> <p>You can create a new database from a snapshot in if something
         * goes wrong with your original database, or to change it to a different plan,
         * such as a high availability or standard plan.</p> <p>The <code>create relational
         * database from snapshot</code> operation supports tag-based access control via
         * request tags and resource tags applied to the resource identified by
         * relationalDatabaseSnapshotName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabaseFromSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelationalDatabaseFromSnapshotOutcome CreateRelationalDatabaseFromSnapshot(const Model::CreateRelationalDatabaseFromSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateRelationalDatabaseFromSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRelationalDatabaseFromSnapshotRequestT = Model::CreateRelationalDatabaseFromSnapshotRequest>
        Model::CreateRelationalDatabaseFromSnapshotOutcomeCallable CreateRelationalDatabaseFromSnapshotCallable(const CreateRelationalDatabaseFromSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateRelationalDatabaseFromSnapshot, request);
        }

        /**
         * An Async wrapper for CreateRelationalDatabaseFromSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRelationalDatabaseFromSnapshotRequestT = Model::CreateRelationalDatabaseFromSnapshotRequest>
        void CreateRelationalDatabaseFromSnapshotAsync(const CreateRelationalDatabaseFromSnapshotRequestT& request, const CreateRelationalDatabaseFromSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateRelationalDatabaseFromSnapshot, request, handler, context);
        }

        /**
         * <p>Creates a snapshot of your database in Amazon Lightsail. You can use
         * snapshots for backups, to make copies of a database, and to save data before
         * deleting a database.</p> <p>The <code>create relational database snapshot</code>
         * operation supports tag-based access control via request tags. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/CreateRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRelationalDatabaseSnapshotOutcome CreateRelationalDatabaseSnapshot(const Model::CreateRelationalDatabaseSnapshotRequest& request) const;

        /**
         * A Callable wrapper for CreateRelationalDatabaseSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateRelationalDatabaseSnapshotRequestT = Model::CreateRelationalDatabaseSnapshotRequest>
        Model::CreateRelationalDatabaseSnapshotOutcomeCallable CreateRelationalDatabaseSnapshotCallable(const CreateRelationalDatabaseSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::CreateRelationalDatabaseSnapshot, request);
        }

        /**
         * An Async wrapper for CreateRelationalDatabaseSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateRelationalDatabaseSnapshotRequestT = Model::CreateRelationalDatabaseSnapshotRequest>
        void CreateRelationalDatabaseSnapshotAsync(const CreateRelationalDatabaseSnapshotRequestT& request, const CreateRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::CreateRelationalDatabaseSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes an alarm.</p> <p>An alarm is used to monitor a single metric for one
         * of your resources. When a metric condition is met, the alarm can notify you by
         * email, SMS text message, and a banner displayed on the Amazon Lightsail console.
         * For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAlarmOutcome DeleteAlarm(const Model::DeleteAlarmRequest& request) const;

        /**
         * A Callable wrapper for DeleteAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAlarmRequestT = Model::DeleteAlarmRequest>
        Model::DeleteAlarmOutcomeCallable DeleteAlarmCallable(const DeleteAlarmRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteAlarm, request);
        }

        /**
         * An Async wrapper for DeleteAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAlarmRequestT = Model::DeleteAlarmRequest>
        void DeleteAlarmAsync(const DeleteAlarmRequestT& request, const DeleteAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteAlarm, request, handler, context);
        }

        /**
         * <p>Deletes an automatic snapshot of an instance or disk. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteAutoSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteAutoSnapshotOutcome DeleteAutoSnapshot(const Model::DeleteAutoSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteAutoSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteAutoSnapshotRequestT = Model::DeleteAutoSnapshotRequest>
        Model::DeleteAutoSnapshotOutcomeCallable DeleteAutoSnapshotCallable(const DeleteAutoSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteAutoSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteAutoSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteAutoSnapshotRequestT = Model::DeleteAutoSnapshotRequest>
        void DeleteAutoSnapshotAsync(const DeleteAutoSnapshotRequestT& request, const DeleteAutoSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteAutoSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes a Amazon Lightsail bucket.</p>  <p>When you delete your bucket,
         * the bucket name is released and can be reused for a new bucket in your account
         * or another Amazon Web Services account.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketOutcome DeleteBucket(const Model::DeleteBucketRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBucketRequestT = Model::DeleteBucketRequest>
        Model::DeleteBucketOutcomeCallable DeleteBucketCallable(const DeleteBucketRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteBucket, request);
        }

        /**
         * An Async wrapper for DeleteBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBucketRequestT = Model::DeleteBucketRequest>
        void DeleteBucketAsync(const DeleteBucketRequestT& request, const DeleteBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteBucket, request, handler, context);
        }

        /**
         * <p>Deletes an access key for the specified Amazon Lightsail bucket.</p> <p>We
         * recommend that you delete an access key if the secret access key is
         * compromised.</p> <p>For more information about access keys, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-creating-bucket-access-keys">Creating
         * access keys for a bucket in Amazon Lightsail</a> in the <i>Amazon Lightsail
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteBucketAccessKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteBucketAccessKeyOutcome DeleteBucketAccessKey(const Model::DeleteBucketAccessKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteBucketAccessKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteBucketAccessKeyRequestT = Model::DeleteBucketAccessKeyRequest>
        Model::DeleteBucketAccessKeyOutcomeCallable DeleteBucketAccessKeyCallable(const DeleteBucketAccessKeyRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteBucketAccessKey, request);
        }

        /**
         * An Async wrapper for DeleteBucketAccessKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteBucketAccessKeyRequestT = Model::DeleteBucketAccessKeyRequest>
        void DeleteBucketAccessKeyAsync(const DeleteBucketAccessKeyRequestT& request, const DeleteBucketAccessKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteBucketAccessKey, request, handler, context);
        }

        /**
         * <p>Deletes an SSL/TLS certificate for your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>Certificates that are currently attached to a
         * distribution cannot be deleted. Use the
         * <code>DetachCertificateFromDistribution</code> action to detach a certificate
         * from a distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCertificateOutcome DeleteCertificate(const Model::DeleteCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteCertificateRequestT = Model::DeleteCertificateRequest>
        Model::DeleteCertificateOutcomeCallable DeleteCertificateCallable(const DeleteCertificateRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteCertificate, request);
        }

        /**
         * An Async wrapper for DeleteCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteCertificateRequestT = Model::DeleteCertificateRequest>
        void DeleteCertificateAsync(const DeleteCertificateRequestT& request, const DeleteCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteCertificate, request, handler, context);
        }

        /**
         * <p>Deletes a contact method.</p> <p>A contact method is used to send you
         * notifications about your Amazon Lightsail resources. You can add one email
         * address and one mobile phone number contact method in each Amazon Web Services
         * Region. However, SMS text messaging is not supported in some Amazon Web Services
         * Regions, and SMS text messages cannot be sent to some countries/regions. For
         * more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContactMethod">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContactMethodOutcome DeleteContactMethod(const Model::DeleteContactMethodRequest& request) const;

        /**
         * A Callable wrapper for DeleteContactMethod that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContactMethodRequestT = Model::DeleteContactMethodRequest>
        Model::DeleteContactMethodOutcomeCallable DeleteContactMethodCallable(const DeleteContactMethodRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteContactMethod, request);
        }

        /**
         * An Async wrapper for DeleteContactMethod that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContactMethodRequestT = Model::DeleteContactMethodRequest>
        void DeleteContactMethodAsync(const DeleteContactMethodRequestT& request, const DeleteContactMethodResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteContactMethod, request, handler, context);
        }

        /**
         * <p>Deletes a container image that is registered to your Amazon Lightsail
         * container service.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContainerImage">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerImageOutcome DeleteContainerImage(const Model::DeleteContainerImageRequest& request) const;

        /**
         * A Callable wrapper for DeleteContainerImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContainerImageRequestT = Model::DeleteContainerImageRequest>
        Model::DeleteContainerImageOutcomeCallable DeleteContainerImageCallable(const DeleteContainerImageRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteContainerImage, request);
        }

        /**
         * An Async wrapper for DeleteContainerImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContainerImageRequestT = Model::DeleteContainerImageRequest>
        void DeleteContainerImageAsync(const DeleteContainerImageRequestT& request, const DeleteContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteContainerImage, request, handler, context);
        }

        /**
         * <p>Deletes your Amazon Lightsail container service.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteContainerService">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteContainerServiceOutcome DeleteContainerService(const Model::DeleteContainerServiceRequest& request) const;

        /**
         * A Callable wrapper for DeleteContainerService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteContainerServiceRequestT = Model::DeleteContainerServiceRequest>
        Model::DeleteContainerServiceOutcomeCallable DeleteContainerServiceCallable(const DeleteContainerServiceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteContainerService, request);
        }

        /**
         * An Async wrapper for DeleteContainerService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteContainerServiceRequestT = Model::DeleteContainerServiceRequest>
        void DeleteContainerServiceAsync(const DeleteContainerServiceRequestT& request, const DeleteContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteContainerService, request, handler, context);
        }

        /**
         * <p>Deletes the specified block storage disk. The disk must be in the
         * <code>available</code> state (not attached to a Lightsail instance).</p> 
         * <p>The disk may remain in the <code>deleting</code> state for several
         * minutes.</p>  <p>The <code>delete disk</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>disk name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiskOutcome DeleteDisk(const Model::DeleteDiskRequest& request) const;

        /**
         * A Callable wrapper for DeleteDisk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDiskRequestT = Model::DeleteDiskRequest>
        Model::DeleteDiskOutcomeCallable DeleteDiskCallable(const DeleteDiskRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteDisk, request);
        }

        /**
         * An Async wrapper for DeleteDisk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDiskRequestT = Model::DeleteDiskRequest>
        void DeleteDiskAsync(const DeleteDiskRequestT& request, const DeleteDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteDisk, request, handler, context);
        }

        /**
         * <p>Deletes the specified disk snapshot.</p> <p>When you make periodic snapshots
         * of a disk, the snapshots are incremental, and only the blocks on the device that
         * have changed since your last snapshot are saved in the new snapshot. When you
         * delete a snapshot, only the data not needed for any other snapshot is removed.
         * So regardless of which prior snapshots have been deleted, all active snapshots
         * will have access to all the information needed to restore the disk.</p> <p>The
         * <code>delete disk snapshot</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by <code>disk snapshot
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDiskSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDiskSnapshotOutcome DeleteDiskSnapshot(const Model::DeleteDiskSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteDiskSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDiskSnapshotRequestT = Model::DeleteDiskSnapshotRequest>
        Model::DeleteDiskSnapshotOutcomeCallable DeleteDiskSnapshotCallable(const DeleteDiskSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteDiskSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteDiskSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDiskSnapshotRequestT = Model::DeleteDiskSnapshotRequest>
        void DeleteDiskSnapshotAsync(const DeleteDiskSnapshotRequestT& request, const DeleteDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteDiskSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes your Amazon Lightsail content delivery network (CDN)
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDistributionOutcome DeleteDistribution(const Model::DeleteDistributionRequest& request) const;

        /**
         * A Callable wrapper for DeleteDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDistributionRequestT = Model::DeleteDistributionRequest>
        Model::DeleteDistributionOutcomeCallable DeleteDistributionCallable(const DeleteDistributionRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteDistribution, request);
        }

        /**
         * An Async wrapper for DeleteDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDistributionRequestT = Model::DeleteDistributionRequest>
        void DeleteDistributionAsync(const DeleteDistributionRequestT& request, const DeleteDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteDistribution, request, handler, context);
        }

        /**
         * <p>Deletes the specified domain recordset and all of its domain records.</p>
         * <p>The <code>delete domain</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by <code>domain
         * name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainOutcome DeleteDomain(const Model::DeleteDomainRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        Model::DeleteDomainOutcomeCallable DeleteDomainCallable(const DeleteDomainRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteDomain, request);
        }

        /**
         * An Async wrapper for DeleteDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainRequestT = Model::DeleteDomainRequest>
        void DeleteDomainAsync(const DeleteDomainRequestT& request, const DeleteDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteDomain, request, handler, context);
        }

        /**
         * <p>Deletes a specific domain entry.</p> <p>The <code>delete domain entry</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>domain name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteDomainEntryOutcome DeleteDomainEntry(const Model::DeleteDomainEntryRequest& request) const;

        /**
         * A Callable wrapper for DeleteDomainEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteDomainEntryRequestT = Model::DeleteDomainEntryRequest>
        Model::DeleteDomainEntryOutcomeCallable DeleteDomainEntryCallable(const DeleteDomainEntryRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteDomainEntry, request);
        }

        /**
         * An Async wrapper for DeleteDomainEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteDomainEntryRequestT = Model::DeleteDomainEntryRequest>
        void DeleteDomainEntryAsync(const DeleteDomainEntryRequestT& request, const DeleteDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteDomainEntry, request, handler, context);
        }

        /**
         * <p>Deletes an Amazon Lightsail instance.</p> <p>The <code>delete instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceOutcome DeleteInstance(const Model::DeleteInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInstanceRequestT = Model::DeleteInstanceRequest>
        Model::DeleteInstanceOutcomeCallable DeleteInstanceCallable(const DeleteInstanceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteInstance, request);
        }

        /**
         * An Async wrapper for DeleteInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInstanceRequestT = Model::DeleteInstanceRequest>
        void DeleteInstanceAsync(const DeleteInstanceRequestT& request, const DeleteInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteInstance, request, handler, context);
        }

        /**
         * <p>Deletes a specific snapshot of a virtual private server (or
         * <i>instance</i>).</p> <p>The <code>delete instance snapshot</code> operation
         * supports tag-based access control via resource tags applied to the resource
         * identified by <code>instance snapshot name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteInstanceSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteInstanceSnapshotOutcome DeleteInstanceSnapshot(const Model::DeleteInstanceSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteInstanceSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteInstanceSnapshotRequestT = Model::DeleteInstanceSnapshotRequest>
        Model::DeleteInstanceSnapshotOutcomeCallable DeleteInstanceSnapshotCallable(const DeleteInstanceSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteInstanceSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteInstanceSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteInstanceSnapshotRequestT = Model::DeleteInstanceSnapshotRequest>
        void DeleteInstanceSnapshotAsync(const DeleteInstanceSnapshotRequestT& request, const DeleteInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteInstanceSnapshot, request, handler, context);
        }

        /**
         * <p>Deletes the specified key pair by removing the public key from Amazon
         * Lightsail.</p> <p>You can delete key pairs that were created using the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_ImportKeyPair.html">ImportKeyPair</a>
         * and <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateKeyPair.html">CreateKeyPair</a>
         * actions, as well as the Lightsail default key pair. A new default key pair will
         * not be created unless you launch an instance without specifying a custom key
         * pair, or you call the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_DownloadDefaultKeyPair.html">DownloadDefaultKeyPair</a>
         * API. </p> <p>The <code>delete key pair</code> operation supports tag-based
         * access control via resource tags applied to the resource identified by <code>key
         * pair name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeyPairOutcome DeleteKeyPair(const Model::DeleteKeyPairRequest& request) const;

        /**
         * A Callable wrapper for DeleteKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKeyPairRequestT = Model::DeleteKeyPairRequest>
        Model::DeleteKeyPairOutcomeCallable DeleteKeyPairCallable(const DeleteKeyPairRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteKeyPair, request);
        }

        /**
         * An Async wrapper for DeleteKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKeyPairRequestT = Model::DeleteKeyPairRequest>
        void DeleteKeyPairAsync(const DeleteKeyPairRequestT& request, const DeleteKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteKeyPair, request, handler, context);
        }

        /**
         * <p>Deletes the known host key or certificate used by the Amazon Lightsail
         * browser-based SSH or RDP clients to authenticate an instance. This operation
         * enables the Lightsail browser-based SSH or RDP clients to connect to the
         * instance after a host key mismatch.</p>  <p>Perform this operation
         * only if you were expecting the host key or certificate mismatch or if you are
         * familiar with the new host key or certificate on the instance. For more
         * information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-troubleshooting-browser-based-ssh-rdp-client-connection">Troubleshooting
         * connection issues when using the Amazon Lightsail browser-based SSH or RDP
         * client</a>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteKnownHostKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKnownHostKeysOutcome DeleteKnownHostKeys(const Model::DeleteKnownHostKeysRequest& request) const;

        /**
         * A Callable wrapper for DeleteKnownHostKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteKnownHostKeysRequestT = Model::DeleteKnownHostKeysRequest>
        Model::DeleteKnownHostKeysOutcomeCallable DeleteKnownHostKeysCallable(const DeleteKnownHostKeysRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteKnownHostKeys, request);
        }

        /**
         * An Async wrapper for DeleteKnownHostKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteKnownHostKeysRequestT = Model::DeleteKnownHostKeysRequest>
        void DeleteKnownHostKeysAsync(const DeleteKnownHostKeysRequestT& request, const DeleteKnownHostKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteKnownHostKeys, request, handler, context);
        }

        /**
         * <p>Deletes a Lightsail load balancer and all its associated SSL/TLS
         * certificates. Once the load balancer is deleted, you will need to create a new
         * load balancer, create a new certificate, and verify domain ownership again.</p>
         * <p>The <code>delete load balancer</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by <code>load
         * balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerOutcome DeleteLoadBalancer(const Model::DeleteLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLoadBalancerRequestT = Model::DeleteLoadBalancerRequest>
        Model::DeleteLoadBalancerOutcomeCallable DeleteLoadBalancerCallable(const DeleteLoadBalancerRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteLoadBalancer, request);
        }

        /**
         * An Async wrapper for DeleteLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLoadBalancerRequestT = Model::DeleteLoadBalancerRequest>
        void DeleteLoadBalancerAsync(const DeleteLoadBalancerRequestT& request, const DeleteLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteLoadBalancer, request, handler, context);
        }

        /**
         * <p>Deletes an SSL/TLS certificate associated with a Lightsail load balancer.</p>
         * <p>The <code>DeleteLoadBalancerTlsCertificate</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>load balancer name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteLoadBalancerTlsCertificate">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteLoadBalancerTlsCertificateOutcome DeleteLoadBalancerTlsCertificate(const Model::DeleteLoadBalancerTlsCertificateRequest& request) const;

        /**
         * A Callable wrapper for DeleteLoadBalancerTlsCertificate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteLoadBalancerTlsCertificateRequestT = Model::DeleteLoadBalancerTlsCertificateRequest>
        Model::DeleteLoadBalancerTlsCertificateOutcomeCallable DeleteLoadBalancerTlsCertificateCallable(const DeleteLoadBalancerTlsCertificateRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteLoadBalancerTlsCertificate, request);
        }

        /**
         * An Async wrapper for DeleteLoadBalancerTlsCertificate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteLoadBalancerTlsCertificateRequestT = Model::DeleteLoadBalancerTlsCertificateRequest>
        void DeleteLoadBalancerTlsCertificateAsync(const DeleteLoadBalancerTlsCertificateRequestT& request, const DeleteLoadBalancerTlsCertificateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteLoadBalancerTlsCertificate, request, handler, context);
        }

        /**
         * <p>Deletes a database in Amazon Lightsail.</p> <p>The <code>delete relational
         * database</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by relationalDatabaseName. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRelationalDatabaseOutcome DeleteRelationalDatabase(const Model::DeleteRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for DeleteRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRelationalDatabaseRequestT = Model::DeleteRelationalDatabaseRequest>
        Model::DeleteRelationalDatabaseOutcomeCallable DeleteRelationalDatabaseCallable(const DeleteRelationalDatabaseRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteRelationalDatabase, request);
        }

        /**
         * An Async wrapper for DeleteRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRelationalDatabaseRequestT = Model::DeleteRelationalDatabaseRequest>
        void DeleteRelationalDatabaseAsync(const DeleteRelationalDatabaseRequestT& request, const DeleteRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteRelationalDatabase, request, handler, context);
        }

        /**
         * <p>Deletes a database snapshot in Amazon Lightsail.</p> <p>The <code>delete
         * relational database snapshot</code> operation supports tag-based access control
         * via resource tags applied to the resource identified by relationalDatabaseName.
         * For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DeleteRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRelationalDatabaseSnapshotOutcome DeleteRelationalDatabaseSnapshot(const Model::DeleteRelationalDatabaseSnapshotRequest& request) const;

        /**
         * A Callable wrapper for DeleteRelationalDatabaseSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteRelationalDatabaseSnapshotRequestT = Model::DeleteRelationalDatabaseSnapshotRequest>
        Model::DeleteRelationalDatabaseSnapshotOutcomeCallable DeleteRelationalDatabaseSnapshotCallable(const DeleteRelationalDatabaseSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DeleteRelationalDatabaseSnapshot, request);
        }

        /**
         * An Async wrapper for DeleteRelationalDatabaseSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteRelationalDatabaseSnapshotRequestT = Model::DeleteRelationalDatabaseSnapshotRequest>
        void DeleteRelationalDatabaseSnapshotAsync(const DeleteRelationalDatabaseSnapshotRequestT& request, const DeleteRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DeleteRelationalDatabaseSnapshot, request, handler, context);
        }

        /**
         * <p>Detaches an SSL/TLS certificate from your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After the certificate is detached, your
         * distribution stops accepting traffic for all of the domains that are associated
         * with the certificate.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachCertificateFromDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachCertificateFromDistributionOutcome DetachCertificateFromDistribution(const Model::DetachCertificateFromDistributionRequest& request) const;

        /**
         * A Callable wrapper for DetachCertificateFromDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachCertificateFromDistributionRequestT = Model::DetachCertificateFromDistributionRequest>
        Model::DetachCertificateFromDistributionOutcomeCallable DetachCertificateFromDistributionCallable(const DetachCertificateFromDistributionRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DetachCertificateFromDistribution, request);
        }

        /**
         * An Async wrapper for DetachCertificateFromDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachCertificateFromDistributionRequestT = Model::DetachCertificateFromDistributionRequest>
        void DetachCertificateFromDistributionAsync(const DetachCertificateFromDistributionRequestT& request, const DetachCertificateFromDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DetachCertificateFromDistribution, request, handler, context);
        }

        /**
         * <p>Detaches a stopped block storage disk from a Lightsail instance. Make sure to
         * unmount any file systems on the device within your operating system before
         * stopping the instance and detaching the disk.</p> <p>The <code>detach
         * disk</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>disk name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachDiskOutcome DetachDisk(const Model::DetachDiskRequest& request) const;

        /**
         * A Callable wrapper for DetachDisk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachDiskRequestT = Model::DetachDiskRequest>
        Model::DetachDiskOutcomeCallable DetachDiskCallable(const DetachDiskRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DetachDisk, request);
        }

        /**
         * An Async wrapper for DetachDisk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachDiskRequestT = Model::DetachDiskRequest>
        void DetachDiskAsync(const DetachDiskRequestT& request, const DetachDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DetachDisk, request, handler, context);
        }

        /**
         * <p>Detaches the specified instances from a Lightsail load balancer.</p> <p>This
         * operation waits until the instances are no longer needed before they are
         * detached from the load balancer.</p> <p>The <code>detach instances from load
         * balancer</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>load balancer name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachInstancesFromLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachInstancesFromLoadBalancerOutcome DetachInstancesFromLoadBalancer(const Model::DetachInstancesFromLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for DetachInstancesFromLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachInstancesFromLoadBalancerRequestT = Model::DetachInstancesFromLoadBalancerRequest>
        Model::DetachInstancesFromLoadBalancerOutcomeCallable DetachInstancesFromLoadBalancerCallable(const DetachInstancesFromLoadBalancerRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DetachInstancesFromLoadBalancer, request);
        }

        /**
         * An Async wrapper for DetachInstancesFromLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachInstancesFromLoadBalancerRequestT = Model::DetachInstancesFromLoadBalancerRequest>
        void DetachInstancesFromLoadBalancerAsync(const DetachInstancesFromLoadBalancerRequestT& request, const DetachInstancesFromLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DetachInstancesFromLoadBalancer, request, handler, context);
        }

        /**
         * <p>Detaches a static IP from the Amazon Lightsail instance to which it is
         * attached.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DetachStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::DetachStaticIpOutcome DetachStaticIp(const Model::DetachStaticIpRequest& request) const;

        /**
         * A Callable wrapper for DetachStaticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DetachStaticIpRequestT = Model::DetachStaticIpRequest>
        Model::DetachStaticIpOutcomeCallable DetachStaticIpCallable(const DetachStaticIpRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DetachStaticIp, request);
        }

        /**
         * An Async wrapper for DetachStaticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DetachStaticIpRequestT = Model::DetachStaticIpRequest>
        void DetachStaticIpAsync(const DetachStaticIpRequestT& request, const DetachStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DetachStaticIp, request, handler, context);
        }

        /**
         * <p>Disables an add-on for an Amazon Lightsail resource. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DisableAddOn">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableAddOnOutcome DisableAddOn(const Model::DisableAddOnRequest& request) const;

        /**
         * A Callable wrapper for DisableAddOn that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DisableAddOnRequestT = Model::DisableAddOnRequest>
        Model::DisableAddOnOutcomeCallable DisableAddOnCallable(const DisableAddOnRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DisableAddOn, request);
        }

        /**
         * An Async wrapper for DisableAddOn that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DisableAddOnRequestT = Model::DisableAddOnRequest>
        void DisableAddOnAsync(const DisableAddOnRequestT& request, const DisableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DisableAddOn, request, handler, context);
        }

        /**
         * <p>Downloads the regional Amazon Lightsail default key pair.</p> <p>This action
         * also creates a Lightsail default key pair if a default key pair does not
         * currently exist in the Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DownloadDefaultKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::DownloadDefaultKeyPairOutcome DownloadDefaultKeyPair(const Model::DownloadDefaultKeyPairRequest& request) const;

        /**
         * A Callable wrapper for DownloadDefaultKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DownloadDefaultKeyPairRequestT = Model::DownloadDefaultKeyPairRequest>
        Model::DownloadDefaultKeyPairOutcomeCallable DownloadDefaultKeyPairCallable(const DownloadDefaultKeyPairRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::DownloadDefaultKeyPair, request);
        }

        /**
         * An Async wrapper for DownloadDefaultKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DownloadDefaultKeyPairRequestT = Model::DownloadDefaultKeyPairRequest>
        void DownloadDefaultKeyPairAsync(const DownloadDefaultKeyPairRequestT& request, const DownloadDefaultKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::DownloadDefaultKeyPair, request, handler, context);
        }

        /**
         * <p>Enables or modifies an add-on for an Amazon Lightsail resource. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/EnableAddOn">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableAddOnOutcome EnableAddOn(const Model::EnableAddOnRequest& request) const;

        /**
         * A Callable wrapper for EnableAddOn that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename EnableAddOnRequestT = Model::EnableAddOnRequest>
        Model::EnableAddOnOutcomeCallable EnableAddOnCallable(const EnableAddOnRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::EnableAddOn, request);
        }

        /**
         * An Async wrapper for EnableAddOn that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename EnableAddOnRequestT = Model::EnableAddOnRequest>
        void EnableAddOnAsync(const EnableAddOnRequestT& request, const EnableAddOnResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::EnableAddOn, request, handler, context);
        }

        /**
         * <p>Exports an Amazon Lightsail instance or block storage disk snapshot to Amazon
         * Elastic Compute Cloud (Amazon EC2). This operation results in an export snapshot
         * record that can be used with the <code>create cloud formation stack</code>
         * operation to create new Amazon EC2 instances.</p> <p>Exported instance snapshots
         * appear in Amazon EC2 as Amazon Machine Images (AMIs), and the instance system
         * disk appears as an Amazon Elastic Block Store (Amazon EBS) volume. Exported disk
         * snapshots appear in Amazon EC2 as Amazon EBS volumes. Snapshots are exported to
         * the same Amazon Web Services Region in Amazon EC2 as the source Lightsail
         * snapshot.</p> <p/> <p>The <code>export snapshot</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>source snapshot name</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p>  <p>Use the <code>get instance
         * snapshots</code> or <code>get disk snapshots</code> operations to get a list of
         * snapshots that you can export to Amazon EC2.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ExportSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::ExportSnapshotOutcome ExportSnapshot(const Model::ExportSnapshotRequest& request) const;

        /**
         * A Callable wrapper for ExportSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ExportSnapshotRequestT = Model::ExportSnapshotRequest>
        Model::ExportSnapshotOutcomeCallable ExportSnapshotCallable(const ExportSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::ExportSnapshot, request);
        }

        /**
         * An Async wrapper for ExportSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ExportSnapshotRequestT = Model::ExportSnapshotRequest>
        void ExportSnapshotAsync(const ExportSnapshotRequestT& request, const ExportSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::ExportSnapshot, request, handler, context);
        }

        /**
         * <p>Returns the names of all active (not deleted) resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetActiveNames">AWS
         * API Reference</a></p>
         */
        virtual Model::GetActiveNamesOutcome GetActiveNames(const Model::GetActiveNamesRequest& request) const;

        /**
         * A Callable wrapper for GetActiveNames that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetActiveNamesRequestT = Model::GetActiveNamesRequest>
        Model::GetActiveNamesOutcomeCallable GetActiveNamesCallable(const GetActiveNamesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetActiveNames, request);
        }

        /**
         * An Async wrapper for GetActiveNames that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetActiveNamesRequestT = Model::GetActiveNamesRequest>
        void GetActiveNamesAsync(const GetActiveNamesRequestT& request, const GetActiveNamesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetActiveNames, request, handler, context);
        }

        /**
         * <p>Returns information about the configured alarms. Specify an alarm name in
         * your request to return information about a specific alarm, or specify a
         * monitored resource name to return information about all alarms for a specific
         * resource.</p> <p>An alarm is used to monitor a single metric for one of your
         * resources. When a metric condition is met, the alarm can notify you by email,
         * SMS text message, and a banner displayed on the Amazon Lightsail console. For
         * more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetAlarms">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAlarmsOutcome GetAlarms(const Model::GetAlarmsRequest& request) const;

        /**
         * A Callable wrapper for GetAlarms that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAlarmsRequestT = Model::GetAlarmsRequest>
        Model::GetAlarmsOutcomeCallable GetAlarmsCallable(const GetAlarmsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetAlarms, request);
        }

        /**
         * An Async wrapper for GetAlarms that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAlarmsRequestT = Model::GetAlarmsRequest>
        void GetAlarmsAsync(const GetAlarmsRequestT& request, const GetAlarmsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetAlarms, request, handler, context);
        }

        /**
         * <p>Returns the available automatic snapshots for an instance or disk. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-automatic-snapshots">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetAutoSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAutoSnapshotsOutcome GetAutoSnapshots(const Model::GetAutoSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for GetAutoSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetAutoSnapshotsRequestT = Model::GetAutoSnapshotsRequest>
        Model::GetAutoSnapshotsOutcomeCallable GetAutoSnapshotsCallable(const GetAutoSnapshotsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetAutoSnapshots, request);
        }

        /**
         * An Async wrapper for GetAutoSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetAutoSnapshotsRequestT = Model::GetAutoSnapshotsRequest>
        void GetAutoSnapshotsAsync(const GetAutoSnapshotsRequestT& request, const GetAutoSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetAutoSnapshots, request, handler, context);
        }

        /**
         * <p>Returns the list of available instance images, or <i>blueprints</i>. You can
         * use a blueprint to create a new instance already running a specific operating
         * system, as well as a preinstalled app or development stack. The software each
         * instance is running depends on the blueprint image you choose.</p>  <p>Use
         * active blueprints when creating new instances. Inactive blueprints are listed to
         * support customers with existing instances and are not necessarily available to
         * create new instances. Blueprints are marked inactive when they become outdated
         * due to operating system updates or new application releases.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBlueprintsOutcome GetBlueprints(const Model::GetBlueprintsRequest& request) const;

        /**
         * A Callable wrapper for GetBlueprints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBlueprintsRequestT = Model::GetBlueprintsRequest>
        Model::GetBlueprintsOutcomeCallable GetBlueprintsCallable(const GetBlueprintsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetBlueprints, request);
        }

        /**
         * An Async wrapper for GetBlueprints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBlueprintsRequestT = Model::GetBlueprintsRequest>
        void GetBlueprintsAsync(const GetBlueprintsRequestT& request, const GetBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetBlueprints, request, handler, context);
        }

        /**
         * <p>Returns the existing access key IDs for the specified Amazon Lightsail
         * bucket.</p>  <p>This action does not return the secret access key
         * value of an access key. You can get a secret access key only when you create it
         * from the response of the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateBucketAccessKey.html">CreateBucketAccessKey</a>
         * action. If you lose the secret access key, you must create a new access key.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBucketAccessKeys">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketAccessKeysOutcome GetBucketAccessKeys(const Model::GetBucketAccessKeysRequest& request) const;

        /**
         * A Callable wrapper for GetBucketAccessKeys that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBucketAccessKeysRequestT = Model::GetBucketAccessKeysRequest>
        Model::GetBucketAccessKeysOutcomeCallable GetBucketAccessKeysCallable(const GetBucketAccessKeysRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetBucketAccessKeys, request);
        }

        /**
         * An Async wrapper for GetBucketAccessKeys that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketAccessKeysRequestT = Model::GetBucketAccessKeysRequest>
        void GetBucketAccessKeysAsync(const GetBucketAccessKeysRequestT& request, const GetBucketAccessKeysResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetBucketAccessKeys, request, handler, context);
        }

        /**
         * <p>Returns the bundles that you can apply to a Amazon Lightsail bucket.</p>
         * <p>The bucket bundle specifies the monthly cost, storage quota, and data
         * transfer quota for a bucket.</p> <p>Use the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_UpdateBucketBundle.html">UpdateBucketBundle</a>
         * action to update the bundle for a bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBucketBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketBundlesOutcome GetBucketBundles(const Model::GetBucketBundlesRequest& request) const;

        /**
         * A Callable wrapper for GetBucketBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBucketBundlesRequestT = Model::GetBucketBundlesRequest>
        Model::GetBucketBundlesOutcomeCallable GetBucketBundlesCallable(const GetBucketBundlesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetBucketBundles, request);
        }

        /**
         * An Async wrapper for GetBucketBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketBundlesRequestT = Model::GetBucketBundlesRequest>
        void GetBucketBundlesAsync(const GetBucketBundlesRequestT& request, const GetBucketBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetBucketBundles, request, handler, context);
        }

        /**
         * <p>Returns the data points of a specific metric for an Amazon Lightsail
         * bucket.</p> <p>Metrics report the utilization of a bucket. View and collect
         * metric data regularly to monitor the number of objects stored in a bucket
         * (including object versions) and the storage space used by those
         * objects.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBucketMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketMetricDataOutcome GetBucketMetricData(const Model::GetBucketMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetBucketMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBucketMetricDataRequestT = Model::GetBucketMetricDataRequest>
        Model::GetBucketMetricDataOutcomeCallable GetBucketMetricDataCallable(const GetBucketMetricDataRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetBucketMetricData, request);
        }

        /**
         * An Async wrapper for GetBucketMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketMetricDataRequestT = Model::GetBucketMetricDataRequest>
        void GetBucketMetricDataAsync(const GetBucketMetricDataRequestT& request, const GetBucketMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetBucketMetricData, request, handler, context);
        }

        /**
         * <p>Returns information about one or more Amazon Lightsail buckets. The
         * information returned includes the synchronization status of the Amazon Simple
         * Storage Service (Amazon S3) account-level block public access feature for your
         * Lightsail buckets.</p> <p>For more information about buckets, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/buckets-in-amazon-lightsail">Buckets
         * in Amazon Lightsail</a> in the <i>Amazon Lightsail Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBuckets">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBucketsOutcome GetBuckets(const Model::GetBucketsRequest& request) const;

        /**
         * A Callable wrapper for GetBuckets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBucketsRequestT = Model::GetBucketsRequest>
        Model::GetBucketsOutcomeCallable GetBucketsCallable(const GetBucketsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetBuckets, request);
        }

        /**
         * An Async wrapper for GetBuckets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBucketsRequestT = Model::GetBucketsRequest>
        void GetBucketsAsync(const GetBucketsRequestT& request, const GetBucketsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetBuckets, request, handler, context);
        }

        /**
         * <p>Returns the bundles that you can apply to an Amazon Lightsail instance when
         * you create it.</p> <p>A bundle describes the specifications of an instance, such
         * as the monthly cost, amount of memory, the number of vCPUs, amount of storage
         * space, and monthly network data transfer quota.</p>  <p>Bundles are
         * referred to as <i>instance plans</i> in the Lightsail console.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetBundlesOutcome GetBundles(const Model::GetBundlesRequest& request) const;

        /**
         * A Callable wrapper for GetBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetBundlesRequestT = Model::GetBundlesRequest>
        Model::GetBundlesOutcomeCallable GetBundlesCallable(const GetBundlesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetBundles, request);
        }

        /**
         * An Async wrapper for GetBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetBundlesRequestT = Model::GetBundlesRequest>
        void GetBundlesAsync(const GetBundlesRequestT& request, const GetBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetBundles, request, handler, context);
        }

        /**
         * <p>Returns information about one or more Amazon Lightsail SSL/TLS
         * certificates.</p>  <p>To get a summary of a certificate, omit
         * <code>includeCertificateDetails</code> from your request. The response will
         * include only the certificate Amazon Resource Name (ARN), certificate name,
         * domain name, and tags.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCertificatesOutcome GetCertificates(const Model::GetCertificatesRequest& request) const;

        /**
         * A Callable wrapper for GetCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCertificatesRequestT = Model::GetCertificatesRequest>
        Model::GetCertificatesOutcomeCallable GetCertificatesCallable(const GetCertificatesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetCertificates, request);
        }

        /**
         * An Async wrapper for GetCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCertificatesRequestT = Model::GetCertificatesRequest>
        void GetCertificatesAsync(const GetCertificatesRequestT& request, const GetCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetCertificates, request, handler, context);
        }

        /**
         * <p>Returns the CloudFormation stack record created as a result of the
         * <code>create cloud formation stack</code> operation.</p> <p>An AWS
         * CloudFormation stack is used to create a new Amazon EC2 instance from an
         * exported Lightsail snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetCloudFormationStackRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCloudFormationStackRecordsOutcome GetCloudFormationStackRecords(const Model::GetCloudFormationStackRecordsRequest& request) const;

        /**
         * A Callable wrapper for GetCloudFormationStackRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCloudFormationStackRecordsRequestT = Model::GetCloudFormationStackRecordsRequest>
        Model::GetCloudFormationStackRecordsOutcomeCallable GetCloudFormationStackRecordsCallable(const GetCloudFormationStackRecordsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetCloudFormationStackRecords, request);
        }

        /**
         * An Async wrapper for GetCloudFormationStackRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCloudFormationStackRecordsRequestT = Model::GetCloudFormationStackRecordsRequest>
        void GetCloudFormationStackRecordsAsync(const GetCloudFormationStackRecordsRequestT& request, const GetCloudFormationStackRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetCloudFormationStackRecords, request, handler, context);
        }

        /**
         * <p>Returns information about the configured contact methods. Specify a protocol
         * in your request to return information about a specific contact method.</p> <p>A
         * contact method is used to send you notifications about your Amazon Lightsail
         * resources. You can add one email address and one mobile phone number contact
         * method in each Amazon Web Services Region. However, SMS text messaging is not
         * supported in some Amazon Web Services Regions, and SMS text messages cannot be
         * sent to some countries/regions. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContactMethods">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContactMethodsOutcome GetContactMethods(const Model::GetContactMethodsRequest& request) const;

        /**
         * A Callable wrapper for GetContactMethods that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContactMethodsRequestT = Model::GetContactMethodsRequest>
        Model::GetContactMethodsOutcomeCallable GetContactMethodsCallable(const GetContactMethodsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetContactMethods, request);
        }

        /**
         * An Async wrapper for GetContactMethods that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContactMethodsRequestT = Model::GetContactMethodsRequest>
        void GetContactMethodsAsync(const GetContactMethodsRequestT& request, const GetContactMethodsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetContactMethods, request, handler, context);
        }

        /**
         * <p>Returns information about Amazon Lightsail containers, such as the current
         * version of the Lightsail Control (lightsailctl) plugin.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerAPIMetadata">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerAPIMetadataOutcome GetContainerAPIMetadata(const Model::GetContainerAPIMetadataRequest& request) const;

        /**
         * A Callable wrapper for GetContainerAPIMetadata that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContainerAPIMetadataRequestT = Model::GetContainerAPIMetadataRequest>
        Model::GetContainerAPIMetadataOutcomeCallable GetContainerAPIMetadataCallable(const GetContainerAPIMetadataRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetContainerAPIMetadata, request);
        }

        /**
         * An Async wrapper for GetContainerAPIMetadata that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContainerAPIMetadataRequestT = Model::GetContainerAPIMetadataRequest>
        void GetContainerAPIMetadataAsync(const GetContainerAPIMetadataRequestT& request, const GetContainerAPIMetadataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetContainerAPIMetadata, request, handler, context);
        }

        /**
         * <p>Returns the container images that are registered to your Amazon Lightsail
         * container service.</p>  <p>If you created a deployment on your Lightsail
         * container service that uses container images from a public registry like Docker
         * Hub, those images are not returned as part of this action. Those images are not
         * registered to your Lightsail container service.</p> <p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerImages">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerImagesOutcome GetContainerImages(const Model::GetContainerImagesRequest& request) const;

        /**
         * A Callable wrapper for GetContainerImages that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContainerImagesRequestT = Model::GetContainerImagesRequest>
        Model::GetContainerImagesOutcomeCallable GetContainerImagesCallable(const GetContainerImagesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetContainerImages, request);
        }

        /**
         * An Async wrapper for GetContainerImages that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContainerImagesRequestT = Model::GetContainerImagesRequest>
        void GetContainerImagesAsync(const GetContainerImagesRequestT& request, const GetContainerImagesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetContainerImages, request, handler, context);
        }

        /**
         * <p>Returns the log events of a container of your Amazon Lightsail container
         * service.</p> <p>If your container service has more than one node (i.e., a scale
         * greater than 1), then the log events that are returned for the specified
         * container are merged from all nodes on your container service.</p> 
         * <p>Container logs are retained for a certain amount of time. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon
         * Lightsail endpoints and quotas</a> in the <i>Amazon Web Services General
         * Reference</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerLog">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerLogOutcome GetContainerLog(const Model::GetContainerLogRequest& request) const;

        /**
         * A Callable wrapper for GetContainerLog that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContainerLogRequestT = Model::GetContainerLogRequest>
        Model::GetContainerLogOutcomeCallable GetContainerLogCallable(const GetContainerLogRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetContainerLog, request);
        }

        /**
         * An Async wrapper for GetContainerLog that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContainerLogRequestT = Model::GetContainerLogRequest>
        void GetContainerLogAsync(const GetContainerLogRequestT& request, const GetContainerLogResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetContainerLog, request, handler, context);
        }

        /**
         * <p>Returns the deployments for your Amazon Lightsail container service</p> <p>A
         * deployment specifies the settings, such as the ports and launch command, of
         * containers that are deployed to your container service.</p> <p>The deployments
         * are ordered by version in ascending order. The newest version is listed at the
         * top of the response.</p>  <p>A set number of deployments are kept before
         * the oldest one is replaced with the newest one. For more information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon
         * Lightsail endpoints and quotas</a> in the <i>Amazon Web Services General
         * Reference</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServiceDeployments">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerServiceDeploymentsOutcome GetContainerServiceDeployments(const Model::GetContainerServiceDeploymentsRequest& request) const;

        /**
         * A Callable wrapper for GetContainerServiceDeployments that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContainerServiceDeploymentsRequestT = Model::GetContainerServiceDeploymentsRequest>
        Model::GetContainerServiceDeploymentsOutcomeCallable GetContainerServiceDeploymentsCallable(const GetContainerServiceDeploymentsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetContainerServiceDeployments, request);
        }

        /**
         * An Async wrapper for GetContainerServiceDeployments that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContainerServiceDeploymentsRequestT = Model::GetContainerServiceDeploymentsRequest>
        void GetContainerServiceDeploymentsAsync(const GetContainerServiceDeploymentsRequestT& request, const GetContainerServiceDeploymentsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetContainerServiceDeployments, request, handler, context);
        }

        /**
         * <p>Returns the data points of a specific metric of your Amazon Lightsail
         * container service.</p> <p>Metrics report the utilization of your resources.
         * Monitor and collect metric data regularly to maintain the reliability,
         * availability, and performance of your resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServiceMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerServiceMetricDataOutcome GetContainerServiceMetricData(const Model::GetContainerServiceMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetContainerServiceMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContainerServiceMetricDataRequestT = Model::GetContainerServiceMetricDataRequest>
        Model::GetContainerServiceMetricDataOutcomeCallable GetContainerServiceMetricDataCallable(const GetContainerServiceMetricDataRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetContainerServiceMetricData, request);
        }

        /**
         * An Async wrapper for GetContainerServiceMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContainerServiceMetricDataRequestT = Model::GetContainerServiceMetricDataRequest>
        void GetContainerServiceMetricDataAsync(const GetContainerServiceMetricDataRequestT& request, const GetContainerServiceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetContainerServiceMetricData, request, handler, context);
        }

        /**
         * <p>Returns the list of powers that can be specified for your Amazon Lightsail
         * container services.</p> <p>The power specifies the amount of memory, the number
         * of vCPUs, and the base price of the container service.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServicePowers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerServicePowersOutcome GetContainerServicePowers(const Model::GetContainerServicePowersRequest& request) const;

        /**
         * A Callable wrapper for GetContainerServicePowers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContainerServicePowersRequestT = Model::GetContainerServicePowersRequest>
        Model::GetContainerServicePowersOutcomeCallable GetContainerServicePowersCallable(const GetContainerServicePowersRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetContainerServicePowers, request);
        }

        /**
         * An Async wrapper for GetContainerServicePowers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContainerServicePowersRequestT = Model::GetContainerServicePowersRequest>
        void GetContainerServicePowersAsync(const GetContainerServicePowersRequestT& request, const GetContainerServicePowersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetContainerServicePowers, request, handler, context);
        }

        /**
         * <p>Returns information about one or more of your Amazon Lightsail container
         * services.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetContainerServices">AWS
         * API Reference</a></p>
         */
        virtual Model::GetContainerServicesOutcome GetContainerServices(const Model::GetContainerServicesRequest& request) const;

        /**
         * A Callable wrapper for GetContainerServices that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetContainerServicesRequestT = Model::GetContainerServicesRequest>
        Model::GetContainerServicesOutcomeCallable GetContainerServicesCallable(const GetContainerServicesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetContainerServices, request);
        }

        /**
         * An Async wrapper for GetContainerServices that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetContainerServicesRequestT = Model::GetContainerServicesRequest>
        void GetContainerServicesAsync(const GetContainerServicesRequestT& request, const GetContainerServicesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetContainerServices, request, handler, context);
        }

        /**
         * <p>Retrieves information about the cost estimate for a specified resource. A
         * cost estimate will not generate for a resource that has been
         * deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetCostEstimate">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCostEstimateOutcome GetCostEstimate(const Model::GetCostEstimateRequest& request) const;

        /**
         * A Callable wrapper for GetCostEstimate that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetCostEstimateRequestT = Model::GetCostEstimateRequest>
        Model::GetCostEstimateOutcomeCallable GetCostEstimateCallable(const GetCostEstimateRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetCostEstimate, request);
        }

        /**
         * An Async wrapper for GetCostEstimate that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetCostEstimateRequestT = Model::GetCostEstimateRequest>
        void GetCostEstimateAsync(const GetCostEstimateRequestT& request, const GetCostEstimateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetCostEstimate, request, handler, context);
        }

        /**
         * <p>Returns information about a specific block storage disk.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisk">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiskOutcome GetDisk(const Model::GetDiskRequest& request) const;

        /**
         * A Callable wrapper for GetDisk that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDiskRequestT = Model::GetDiskRequest>
        Model::GetDiskOutcomeCallable GetDiskCallable(const GetDiskRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetDisk, request);
        }

        /**
         * An Async wrapper for GetDisk that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDiskRequestT = Model::GetDiskRequest>
        void GetDiskAsync(const GetDiskRequestT& request, const GetDiskResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetDisk, request, handler, context);
        }

        /**
         * <p>Returns information about a specific block storage disk
         * snapshot.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiskSnapshotOutcome GetDiskSnapshot(const Model::GetDiskSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetDiskSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDiskSnapshotRequestT = Model::GetDiskSnapshotRequest>
        Model::GetDiskSnapshotOutcomeCallable GetDiskSnapshotCallable(const GetDiskSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetDiskSnapshot, request);
        }

        /**
         * An Async wrapper for GetDiskSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDiskSnapshotRequestT = Model::GetDiskSnapshotRequest>
        void GetDiskSnapshotAsync(const GetDiskSnapshotRequestT& request, const GetDiskSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetDiskSnapshot, request, handler, context);
        }

        /**
         * <p>Returns information about all block storage disk snapshots in your AWS
         * account and region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDiskSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDiskSnapshotsOutcome GetDiskSnapshots(const Model::GetDiskSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for GetDiskSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDiskSnapshotsRequestT = Model::GetDiskSnapshotsRequest>
        Model::GetDiskSnapshotsOutcomeCallable GetDiskSnapshotsCallable(const GetDiskSnapshotsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetDiskSnapshots, request);
        }

        /**
         * An Async wrapper for GetDiskSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDiskSnapshotsRequestT = Model::GetDiskSnapshotsRequest>
        void GetDiskSnapshotsAsync(const GetDiskSnapshotsRequestT& request, const GetDiskSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetDiskSnapshots, request, handler, context);
        }

        /**
         * <p>Returns information about all block storage disks in your AWS account and
         * region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDisks">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDisksOutcome GetDisks(const Model::GetDisksRequest& request) const;

        /**
         * A Callable wrapper for GetDisks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDisksRequestT = Model::GetDisksRequest>
        Model::GetDisksOutcomeCallable GetDisksCallable(const GetDisksRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetDisks, request);
        }

        /**
         * An Async wrapper for GetDisks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDisksRequestT = Model::GetDisksRequest>
        void GetDisksAsync(const GetDisksRequestT& request, const GetDisksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetDisks, request, handler, context);
        }

        /**
         * <p>Returns the bundles that can be applied to your Amazon Lightsail content
         * delivery network (CDN) distributions.</p> <p>A distribution bundle specifies the
         * monthly network transfer quota and monthly cost of your
         * distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionBundlesOutcome GetDistributionBundles(const Model::GetDistributionBundlesRequest& request) const;

        /**
         * A Callable wrapper for GetDistributionBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDistributionBundlesRequestT = Model::GetDistributionBundlesRequest>
        Model::GetDistributionBundlesOutcomeCallable GetDistributionBundlesCallable(const GetDistributionBundlesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetDistributionBundles, request);
        }

        /**
         * An Async wrapper for GetDistributionBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDistributionBundlesRequestT = Model::GetDistributionBundlesRequest>
        void GetDistributionBundlesAsync(const GetDistributionBundlesRequestT& request, const GetDistributionBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetDistributionBundles, request, handler, context);
        }

        /**
         * <p>Returns the timestamp and status of the last cache reset of a specific Amazon
         * Lightsail content delivery network (CDN) distribution.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionLatestCacheReset">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionLatestCacheResetOutcome GetDistributionLatestCacheReset(const Model::GetDistributionLatestCacheResetRequest& request) const;

        /**
         * A Callable wrapper for GetDistributionLatestCacheReset that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDistributionLatestCacheResetRequestT = Model::GetDistributionLatestCacheResetRequest>
        Model::GetDistributionLatestCacheResetOutcomeCallable GetDistributionLatestCacheResetCallable(const GetDistributionLatestCacheResetRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetDistributionLatestCacheReset, request);
        }

        /**
         * An Async wrapper for GetDistributionLatestCacheReset that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDistributionLatestCacheResetRequestT = Model::GetDistributionLatestCacheResetRequest>
        void GetDistributionLatestCacheResetAsync(const GetDistributionLatestCacheResetRequestT& request, const GetDistributionLatestCacheResetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetDistributionLatestCacheReset, request, handler, context);
        }

        /**
         * <p>Returns the data points of a specific metric for an Amazon Lightsail content
         * delivery network (CDN) distribution.</p> <p>Metrics report the utilization of
         * your resources, and the error counts generated by them. Monitor and collect
         * metric data regularly to maintain the reliability, availability, and performance
         * of your resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributionMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionMetricDataOutcome GetDistributionMetricData(const Model::GetDistributionMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetDistributionMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDistributionMetricDataRequestT = Model::GetDistributionMetricDataRequest>
        Model::GetDistributionMetricDataOutcomeCallable GetDistributionMetricDataCallable(const GetDistributionMetricDataRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetDistributionMetricData, request);
        }

        /**
         * An Async wrapper for GetDistributionMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDistributionMetricDataRequestT = Model::GetDistributionMetricDataRequest>
        void GetDistributionMetricDataAsync(const GetDistributionMetricDataRequestT& request, const GetDistributionMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetDistributionMetricData, request, handler, context);
        }

        /**
         * <p>Returns information about one or more of your Amazon Lightsail content
         * delivery network (CDN) distributions.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDistributions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDistributionsOutcome GetDistributions(const Model::GetDistributionsRequest& request) const;

        /**
         * A Callable wrapper for GetDistributions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDistributionsRequestT = Model::GetDistributionsRequest>
        Model::GetDistributionsOutcomeCallable GetDistributionsCallable(const GetDistributionsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetDistributions, request);
        }

        /**
         * An Async wrapper for GetDistributions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDistributionsRequestT = Model::GetDistributionsRequest>
        void GetDistributionsAsync(const GetDistributionsRequestT& request, const GetDistributionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetDistributions, request, handler, context);
        }

        /**
         * <p>Returns information about a specific domain recordset.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDomain">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainOutcome GetDomain(const Model::GetDomainRequest& request) const;

        /**
         * A Callable wrapper for GetDomain that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainRequestT = Model::GetDomainRequest>
        Model::GetDomainOutcomeCallable GetDomainCallable(const GetDomainRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetDomain, request);
        }

        /**
         * An Async wrapper for GetDomain that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainRequestT = Model::GetDomainRequest>
        void GetDomainAsync(const GetDomainRequestT& request, const GetDomainResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetDomain, request, handler, context);
        }

        /**
         * <p>Returns a list of all domains in the user's account.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetDomains">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDomainsOutcome GetDomains(const Model::GetDomainsRequest& request) const;

        /**
         * A Callable wrapper for GetDomains that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetDomainsRequestT = Model::GetDomainsRequest>
        Model::GetDomainsOutcomeCallable GetDomainsCallable(const GetDomainsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetDomains, request);
        }

        /**
         * An Async wrapper for GetDomains that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetDomainsRequestT = Model::GetDomainsRequest>
        void GetDomainsAsync(const GetDomainsRequestT& request, const GetDomainsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetDomains, request, handler, context);
        }

        /**
         * <p>Returns all export snapshot records created as a result of the <code>export
         * snapshot</code> operation.</p> <p>An export snapshot record can be used to
         * create a new Amazon EC2 instance and its related resources with the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_CreateCloudFormationStack.html">CreateCloudFormationStack</a>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetExportSnapshotRecords">AWS
         * API Reference</a></p>
         */
        virtual Model::GetExportSnapshotRecordsOutcome GetExportSnapshotRecords(const Model::GetExportSnapshotRecordsRequest& request) const;

        /**
         * A Callable wrapper for GetExportSnapshotRecords that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetExportSnapshotRecordsRequestT = Model::GetExportSnapshotRecordsRequest>
        Model::GetExportSnapshotRecordsOutcomeCallable GetExportSnapshotRecordsCallable(const GetExportSnapshotRecordsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetExportSnapshotRecords, request);
        }

        /**
         * An Async wrapper for GetExportSnapshotRecords that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetExportSnapshotRecordsRequestT = Model::GetExportSnapshotRecordsRequest>
        void GetExportSnapshotRecordsAsync(const GetExportSnapshotRecordsRequestT& request, const GetExportSnapshotRecordsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetExportSnapshotRecords, request, handler, context);
        }

        /**
         * <p>Returns information about a specific Amazon Lightsail instance, which is a
         * virtual private server.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceOutcome GetInstance(const Model::GetInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstanceRequestT = Model::GetInstanceRequest>
        Model::GetInstanceOutcomeCallable GetInstanceCallable(const GetInstanceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetInstance, request);
        }

        /**
         * An Async wrapper for GetInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceRequestT = Model::GetInstanceRequest>
        void GetInstanceAsync(const GetInstanceRequestT& request, const GetInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetInstance, request, handler, context);
        }

        /**
         * <p>Returns temporary SSH keys you can use to connect to a specific virtual
         * private server, or <i>instance</i>.</p> <p>The <code>get instance access
         * details</code> operation supports tag-based access control via resource tags
         * applied to the resource identified by <code>instance name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceAccessDetails">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceAccessDetailsOutcome GetInstanceAccessDetails(const Model::GetInstanceAccessDetailsRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceAccessDetails that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstanceAccessDetailsRequestT = Model::GetInstanceAccessDetailsRequest>
        Model::GetInstanceAccessDetailsOutcomeCallable GetInstanceAccessDetailsCallable(const GetInstanceAccessDetailsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetInstanceAccessDetails, request);
        }

        /**
         * An Async wrapper for GetInstanceAccessDetails that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceAccessDetailsRequestT = Model::GetInstanceAccessDetailsRequest>
        void GetInstanceAccessDetailsAsync(const GetInstanceAccessDetailsRequestT& request, const GetInstanceAccessDetailsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetInstanceAccessDetails, request, handler, context);
        }

        /**
         * <p>Returns the data points for the specified Amazon Lightsail instance metric,
         * given an instance name.</p> <p>Metrics report the utilization of your resources,
         * and the error counts generated by them. Monitor and collect metric data
         * regularly to maintain the reliability, availability, and performance of your
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceMetricDataOutcome GetInstanceMetricData(const Model::GetInstanceMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstanceMetricDataRequestT = Model::GetInstanceMetricDataRequest>
        Model::GetInstanceMetricDataOutcomeCallable GetInstanceMetricDataCallable(const GetInstanceMetricDataRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetInstanceMetricData, request);
        }

        /**
         * An Async wrapper for GetInstanceMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceMetricDataRequestT = Model::GetInstanceMetricDataRequest>
        void GetInstanceMetricDataAsync(const GetInstanceMetricDataRequestT& request, const GetInstanceMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetInstanceMetricData, request, handler, context);
        }

        /**
         * <p>Returns the firewall port states for a specific Amazon Lightsail instance,
         * the IP addresses allowed to connect to the instance through the ports, and the
         * protocol.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstancePortStates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstancePortStatesOutcome GetInstancePortStates(const Model::GetInstancePortStatesRequest& request) const;

        /**
         * A Callable wrapper for GetInstancePortStates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstancePortStatesRequestT = Model::GetInstancePortStatesRequest>
        Model::GetInstancePortStatesOutcomeCallable GetInstancePortStatesCallable(const GetInstancePortStatesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetInstancePortStates, request);
        }

        /**
         * An Async wrapper for GetInstancePortStates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstancePortStatesRequestT = Model::GetInstancePortStatesRequest>
        void GetInstancePortStatesAsync(const GetInstancePortStatesRequestT& request, const GetInstancePortStatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetInstancePortStates, request, handler, context);
        }

        /**
         * <p>Returns information about a specific instance snapshot.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceSnapshotOutcome GetInstanceSnapshot(const Model::GetInstanceSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstanceSnapshotRequestT = Model::GetInstanceSnapshotRequest>
        Model::GetInstanceSnapshotOutcomeCallable GetInstanceSnapshotCallable(const GetInstanceSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetInstanceSnapshot, request);
        }

        /**
         * An Async wrapper for GetInstanceSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceSnapshotRequestT = Model::GetInstanceSnapshotRequest>
        void GetInstanceSnapshotAsync(const GetInstanceSnapshotRequestT& request, const GetInstanceSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetInstanceSnapshot, request, handler, context);
        }

        /**
         * <p>Returns all instance snapshots for the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceSnapshotsOutcome GetInstanceSnapshots(const Model::GetInstanceSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstanceSnapshotsRequestT = Model::GetInstanceSnapshotsRequest>
        Model::GetInstanceSnapshotsOutcomeCallable GetInstanceSnapshotsCallable(const GetInstanceSnapshotsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetInstanceSnapshots, request);
        }

        /**
         * An Async wrapper for GetInstanceSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceSnapshotsRequestT = Model::GetInstanceSnapshotsRequest>
        void GetInstanceSnapshotsAsync(const GetInstanceSnapshotsRequestT& request, const GetInstanceSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetInstanceSnapshots, request, handler, context);
        }

        /**
         * <p>Returns the state of a specific instance. Works on one instance at a
         * time.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstanceState">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstanceStateOutcome GetInstanceState(const Model::GetInstanceStateRequest& request) const;

        /**
         * A Callable wrapper for GetInstanceState that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstanceStateRequestT = Model::GetInstanceStateRequest>
        Model::GetInstanceStateOutcomeCallable GetInstanceStateCallable(const GetInstanceStateRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetInstanceState, request);
        }

        /**
         * An Async wrapper for GetInstanceState that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstanceStateRequestT = Model::GetInstanceStateRequest>
        void GetInstanceStateAsync(const GetInstanceStateRequestT& request, const GetInstanceStateResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetInstanceState, request, handler, context);
        }

        /**
         * <p>Returns information about all Amazon Lightsail virtual private servers, or
         * <i>instances</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::GetInstancesOutcome GetInstances(const Model::GetInstancesRequest& request) const;

        /**
         * A Callable wrapper for GetInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetInstancesRequestT = Model::GetInstancesRequest>
        Model::GetInstancesOutcomeCallable GetInstancesCallable(const GetInstancesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetInstances, request);
        }

        /**
         * An Async wrapper for GetInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetInstancesRequestT = Model::GetInstancesRequest>
        void GetInstancesAsync(const GetInstancesRequestT& request, const GetInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetInstances, request, handler, context);
        }

        /**
         * <p>Returns information about a specific key pair.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyPairOutcome GetKeyPair(const Model::GetKeyPairRequest& request) const;

        /**
         * A Callable wrapper for GetKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKeyPairRequestT = Model::GetKeyPairRequest>
        Model::GetKeyPairOutcomeCallable GetKeyPairCallable(const GetKeyPairRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetKeyPair, request);
        }

        /**
         * An Async wrapper for GetKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKeyPairRequestT = Model::GetKeyPairRequest>
        void GetKeyPairAsync(const GetKeyPairRequestT& request, const GetKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetKeyPair, request, handler, context);
        }

        /**
         * <p>Returns information about all key pairs in the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetKeyPairs">AWS
         * API Reference</a></p>
         */
        virtual Model::GetKeyPairsOutcome GetKeyPairs(const Model::GetKeyPairsRequest& request) const;

        /**
         * A Callable wrapper for GetKeyPairs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetKeyPairsRequestT = Model::GetKeyPairsRequest>
        Model::GetKeyPairsOutcomeCallable GetKeyPairsCallable(const GetKeyPairsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetKeyPairs, request);
        }

        /**
         * An Async wrapper for GetKeyPairs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetKeyPairsRequestT = Model::GetKeyPairsRequest>
        void GetKeyPairsAsync(const GetKeyPairsRequestT& request, const GetKeyPairsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetKeyPairs, request, handler, context);
        }

        /**
         * <p>Returns information about the specified Lightsail load
         * balancer.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancer">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancerOutcome GetLoadBalancer(const Model::GetLoadBalancerRequest& request) const;

        /**
         * A Callable wrapper for GetLoadBalancer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLoadBalancerRequestT = Model::GetLoadBalancerRequest>
        Model::GetLoadBalancerOutcomeCallable GetLoadBalancerCallable(const GetLoadBalancerRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetLoadBalancer, request);
        }

        /**
         * An Async wrapper for GetLoadBalancer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoadBalancerRequestT = Model::GetLoadBalancerRequest>
        void GetLoadBalancerAsync(const GetLoadBalancerRequestT& request, const GetLoadBalancerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetLoadBalancer, request, handler, context);
        }

        /**
         * <p>Returns information about health metrics for your Lightsail load
         * balancer.</p> <p>Metrics report the utilization of your resources, and the error
         * counts generated by them. Monitor and collect metric data regularly to maintain
         * the reliability, availability, and performance of your resources.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancerMetricDataOutcome GetLoadBalancerMetricData(const Model::GetLoadBalancerMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetLoadBalancerMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLoadBalancerMetricDataRequestT = Model::GetLoadBalancerMetricDataRequest>
        Model::GetLoadBalancerMetricDataOutcomeCallable GetLoadBalancerMetricDataCallable(const GetLoadBalancerMetricDataRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetLoadBalancerMetricData, request);
        }

        /**
         * An Async wrapper for GetLoadBalancerMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoadBalancerMetricDataRequestT = Model::GetLoadBalancerMetricDataRequest>
        void GetLoadBalancerMetricDataAsync(const GetLoadBalancerMetricDataRequestT& request, const GetLoadBalancerMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetLoadBalancerMetricData, request, handler, context);
        }

        /**
         * <p>Returns information about the TLS certificates that are associated with the
         * specified Lightsail load balancer.</p> <p>TLS is just an updated, more secure
         * version of Secure Socket Layer (SSL).</p> <p>You can have a maximum of 2
         * certificates associated with a Lightsail load balancer. One is active and the
         * other is inactive.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerTlsCertificates">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancerTlsCertificatesOutcome GetLoadBalancerTlsCertificates(const Model::GetLoadBalancerTlsCertificatesRequest& request) const;

        /**
         * A Callable wrapper for GetLoadBalancerTlsCertificates that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLoadBalancerTlsCertificatesRequestT = Model::GetLoadBalancerTlsCertificatesRequest>
        Model::GetLoadBalancerTlsCertificatesOutcomeCallable GetLoadBalancerTlsCertificatesCallable(const GetLoadBalancerTlsCertificatesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetLoadBalancerTlsCertificates, request);
        }

        /**
         * An Async wrapper for GetLoadBalancerTlsCertificates that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoadBalancerTlsCertificatesRequestT = Model::GetLoadBalancerTlsCertificatesRequest>
        void GetLoadBalancerTlsCertificatesAsync(const GetLoadBalancerTlsCertificatesRequestT& request, const GetLoadBalancerTlsCertificatesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetLoadBalancerTlsCertificates, request, handler, context);
        }

        /**
         * <p>Returns a list of TLS security policies that you can apply to Lightsail load
         * balancers.</p> <p>For more information about load balancer TLS security
         * policies, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configure-load-balancer-tls-security-policy">Configuring
         * TLS security policies on your Amazon Lightsail load balancers</a> in the
         * <i>Amazon Lightsail Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancerTlsPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancerTlsPoliciesOutcome GetLoadBalancerTlsPolicies(const Model::GetLoadBalancerTlsPoliciesRequest& request) const;

        /**
         * A Callable wrapper for GetLoadBalancerTlsPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLoadBalancerTlsPoliciesRequestT = Model::GetLoadBalancerTlsPoliciesRequest>
        Model::GetLoadBalancerTlsPoliciesOutcomeCallable GetLoadBalancerTlsPoliciesCallable(const GetLoadBalancerTlsPoliciesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetLoadBalancerTlsPolicies, request);
        }

        /**
         * An Async wrapper for GetLoadBalancerTlsPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoadBalancerTlsPoliciesRequestT = Model::GetLoadBalancerTlsPoliciesRequest>
        void GetLoadBalancerTlsPoliciesAsync(const GetLoadBalancerTlsPoliciesRequestT& request, const GetLoadBalancerTlsPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetLoadBalancerTlsPolicies, request, handler, context);
        }

        /**
         * <p>Returns information about all load balancers in an account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetLoadBalancers">AWS
         * API Reference</a></p>
         */
        virtual Model::GetLoadBalancersOutcome GetLoadBalancers(const Model::GetLoadBalancersRequest& request) const;

        /**
         * A Callable wrapper for GetLoadBalancers that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetLoadBalancersRequestT = Model::GetLoadBalancersRequest>
        Model::GetLoadBalancersOutcomeCallable GetLoadBalancersCallable(const GetLoadBalancersRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetLoadBalancers, request);
        }

        /**
         * An Async wrapper for GetLoadBalancers that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetLoadBalancersRequestT = Model::GetLoadBalancersRequest>
        void GetLoadBalancersAsync(const GetLoadBalancersRequestT& request, const GetLoadBalancersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetLoadBalancers, request, handler, context);
        }

        /**
         * <p>Returns information about a specific operation. Operations include events
         * such as when you create an instance, allocate a static IP, attach a static IP,
         * and so on.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationOutcome GetOperation(const Model::GetOperationRequest& request) const;

        /**
         * A Callable wrapper for GetOperation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOperationRequestT = Model::GetOperationRequest>
        Model::GetOperationOutcomeCallable GetOperationCallable(const GetOperationRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetOperation, request);
        }

        /**
         * An Async wrapper for GetOperation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOperationRequestT = Model::GetOperationRequest>
        void GetOperationAsync(const GetOperationRequestT& request, const GetOperationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetOperation, request, handler, context);
        }

        /**
         * <p>Returns information about all operations.</p> <p>Results are returned from
         * oldest to newest, up to a maximum of 200. Results can be paged by making each
         * subsequent call to <code>GetOperations</code> use the maximum (last)
         * <code>statusChangedAt</code> value from the previous request.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperations">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationsOutcome GetOperations(const Model::GetOperationsRequest& request) const;

        /**
         * A Callable wrapper for GetOperations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOperationsRequestT = Model::GetOperationsRequest>
        Model::GetOperationsOutcomeCallable GetOperationsCallable(const GetOperationsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetOperations, request);
        }

        /**
         * An Async wrapper for GetOperations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOperationsRequestT = Model::GetOperationsRequest>
        void GetOperationsAsync(const GetOperationsRequestT& request, const GetOperationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetOperations, request, handler, context);
        }

        /**
         * <p>Gets operations for a specific resource (an instance or a static
         * IP).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetOperationsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::GetOperationsForResourceOutcome GetOperationsForResource(const Model::GetOperationsForResourceRequest& request) const;

        /**
         * A Callable wrapper for GetOperationsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetOperationsForResourceRequestT = Model::GetOperationsForResourceRequest>
        Model::GetOperationsForResourceOutcomeCallable GetOperationsForResourceCallable(const GetOperationsForResourceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetOperationsForResource, request);
        }

        /**
         * An Async wrapper for GetOperationsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetOperationsForResourceRequestT = Model::GetOperationsForResourceRequest>
        void GetOperationsForResourceAsync(const GetOperationsForResourceRequestT& request, const GetOperationsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetOperationsForResource, request, handler, context);
        }

        /**
         * <p>Returns a list of all valid regions for Amazon Lightsail. Use the
         * <code>include availability zones</code> parameter to also return the
         * Availability Zones in a region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRegions">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRegionsOutcome GetRegions(const Model::GetRegionsRequest& request) const;

        /**
         * A Callable wrapper for GetRegions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRegionsRequestT = Model::GetRegionsRequest>
        Model::GetRegionsOutcomeCallable GetRegionsCallable(const GetRegionsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRegions, request);
        }

        /**
         * An Async wrapper for GetRegions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRegionsRequestT = Model::GetRegionsRequest>
        void GetRegionsAsync(const GetRegionsRequestT& request, const GetRegionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRegions, request, handler, context);
        }

        /**
         * <p>Returns information about a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseOutcome GetRelationalDatabase(const Model::GetRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseRequestT = Model::GetRelationalDatabaseRequest>
        Model::GetRelationalDatabaseOutcomeCallable GetRelationalDatabaseCallable(const GetRelationalDatabaseRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabase, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseRequestT = Model::GetRelationalDatabaseRequest>
        void GetRelationalDatabaseAsync(const GetRelationalDatabaseRequestT& request, const GetRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabase, request, handler, context);
        }

        /**
         * <p>Returns a list of available database blueprints in Amazon Lightsail. A
         * blueprint describes the major engine version of a database.</p> <p>You can use a
         * blueprint ID to create a new database that runs a specific database
         * engine.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseBlueprints">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseBlueprintsOutcome GetRelationalDatabaseBlueprints(const Model::GetRelationalDatabaseBlueprintsRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseBlueprints that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseBlueprintsRequestT = Model::GetRelationalDatabaseBlueprintsRequest>
        Model::GetRelationalDatabaseBlueprintsOutcomeCallable GetRelationalDatabaseBlueprintsCallable(const GetRelationalDatabaseBlueprintsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabaseBlueprints, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabaseBlueprints that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseBlueprintsRequestT = Model::GetRelationalDatabaseBlueprintsRequest>
        void GetRelationalDatabaseBlueprintsAsync(const GetRelationalDatabaseBlueprintsRequestT& request, const GetRelationalDatabaseBlueprintsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabaseBlueprints, request, handler, context);
        }

        /**
         * <p>Returns the list of bundles that are available in Amazon Lightsail. A bundle
         * describes the performance specifications for a database.</p> <p>You can use a
         * bundle ID to create a new database with explicit performance
         * specifications.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseBundles">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseBundlesOutcome GetRelationalDatabaseBundles(const Model::GetRelationalDatabaseBundlesRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseBundles that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseBundlesRequestT = Model::GetRelationalDatabaseBundlesRequest>
        Model::GetRelationalDatabaseBundlesOutcomeCallable GetRelationalDatabaseBundlesCallable(const GetRelationalDatabaseBundlesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabaseBundles, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabaseBundles that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseBundlesRequestT = Model::GetRelationalDatabaseBundlesRequest>
        void GetRelationalDatabaseBundlesAsync(const GetRelationalDatabaseBundlesRequestT& request, const GetRelationalDatabaseBundlesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabaseBundles, request, handler, context);
        }

        /**
         * <p>Returns a list of events for a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseEventsOutcome GetRelationalDatabaseEvents(const Model::GetRelationalDatabaseEventsRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseEventsRequestT = Model::GetRelationalDatabaseEventsRequest>
        Model::GetRelationalDatabaseEventsOutcomeCallable GetRelationalDatabaseEventsCallable(const GetRelationalDatabaseEventsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabaseEvents, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabaseEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseEventsRequestT = Model::GetRelationalDatabaseEventsRequest>
        void GetRelationalDatabaseEventsAsync(const GetRelationalDatabaseEventsRequestT& request, const GetRelationalDatabaseEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabaseEvents, request, handler, context);
        }

        /**
         * <p>Returns a list of log events for a database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseLogEvents">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseLogEventsOutcome GetRelationalDatabaseLogEvents(const Model::GetRelationalDatabaseLogEventsRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseLogEvents that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseLogEventsRequestT = Model::GetRelationalDatabaseLogEventsRequest>
        Model::GetRelationalDatabaseLogEventsOutcomeCallable GetRelationalDatabaseLogEventsCallable(const GetRelationalDatabaseLogEventsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabaseLogEvents, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabaseLogEvents that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseLogEventsRequestT = Model::GetRelationalDatabaseLogEventsRequest>
        void GetRelationalDatabaseLogEventsAsync(const GetRelationalDatabaseLogEventsRequestT& request, const GetRelationalDatabaseLogEventsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabaseLogEvents, request, handler, context);
        }

        /**
         * <p>Returns a list of available log streams for a specific database in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseLogStreams">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseLogStreamsOutcome GetRelationalDatabaseLogStreams(const Model::GetRelationalDatabaseLogStreamsRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseLogStreams that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseLogStreamsRequestT = Model::GetRelationalDatabaseLogStreamsRequest>
        Model::GetRelationalDatabaseLogStreamsOutcomeCallable GetRelationalDatabaseLogStreamsCallable(const GetRelationalDatabaseLogStreamsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabaseLogStreams, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabaseLogStreams that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseLogStreamsRequestT = Model::GetRelationalDatabaseLogStreamsRequest>
        void GetRelationalDatabaseLogStreamsAsync(const GetRelationalDatabaseLogStreamsRequestT& request, const GetRelationalDatabaseLogStreamsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabaseLogStreams, request, handler, context);
        }

        /**
         * <p>Returns the current, previous, or pending versions of the master user
         * password for a Lightsail database.</p> <p>The
         * <code>GetRelationalDatabaseMasterUserPassword</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * relationalDatabaseName.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMasterUserPassword">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseMasterUserPasswordOutcome GetRelationalDatabaseMasterUserPassword(const Model::GetRelationalDatabaseMasterUserPasswordRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseMasterUserPassword that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseMasterUserPasswordRequestT = Model::GetRelationalDatabaseMasterUserPasswordRequest>
        Model::GetRelationalDatabaseMasterUserPasswordOutcomeCallable GetRelationalDatabaseMasterUserPasswordCallable(const GetRelationalDatabaseMasterUserPasswordRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabaseMasterUserPassword, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabaseMasterUserPassword that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseMasterUserPasswordRequestT = Model::GetRelationalDatabaseMasterUserPasswordRequest>
        void GetRelationalDatabaseMasterUserPasswordAsync(const GetRelationalDatabaseMasterUserPasswordRequestT& request, const GetRelationalDatabaseMasterUserPasswordResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabaseMasterUserPassword, request, handler, context);
        }

        /**
         * <p>Returns the data points of the specified metric for a database in Amazon
         * Lightsail.</p> <p>Metrics report the utilization of your resources, and the
         * error counts generated by them. Monitor and collect metric data regularly to
         * maintain the reliability, availability, and performance of your
         * resources.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseMetricData">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseMetricDataOutcome GetRelationalDatabaseMetricData(const Model::GetRelationalDatabaseMetricDataRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseMetricData that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseMetricDataRequestT = Model::GetRelationalDatabaseMetricDataRequest>
        Model::GetRelationalDatabaseMetricDataOutcomeCallable GetRelationalDatabaseMetricDataCallable(const GetRelationalDatabaseMetricDataRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabaseMetricData, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabaseMetricData that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseMetricDataRequestT = Model::GetRelationalDatabaseMetricDataRequest>
        void GetRelationalDatabaseMetricDataAsync(const GetRelationalDatabaseMetricDataRequestT& request, const GetRelationalDatabaseMetricDataResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabaseMetricData, request, handler, context);
        }

        /**
         * <p>Returns all of the runtime parameters offered by the underlying database
         * software, or engine, for a specific database in Amazon Lightsail.</p> <p>In
         * addition to the parameter names and values, this operation returns other
         * information about each parameter. This information includes whether changes
         * require a reboot, whether the parameter is modifiable, the allowed values, and
         * the data types.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseParametersOutcome GetRelationalDatabaseParameters(const Model::GetRelationalDatabaseParametersRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseParametersRequestT = Model::GetRelationalDatabaseParametersRequest>
        Model::GetRelationalDatabaseParametersOutcomeCallable GetRelationalDatabaseParametersCallable(const GetRelationalDatabaseParametersRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabaseParameters, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabaseParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseParametersRequestT = Model::GetRelationalDatabaseParametersRequest>
        void GetRelationalDatabaseParametersAsync(const GetRelationalDatabaseParametersRequestT& request, const GetRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabaseParameters, request, handler, context);
        }

        /**
         * <p>Returns information about a specific database snapshot in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseSnapshot">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseSnapshotOutcome GetRelationalDatabaseSnapshot(const Model::GetRelationalDatabaseSnapshotRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseSnapshot that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseSnapshotRequestT = Model::GetRelationalDatabaseSnapshotRequest>
        Model::GetRelationalDatabaseSnapshotOutcomeCallable GetRelationalDatabaseSnapshotCallable(const GetRelationalDatabaseSnapshotRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabaseSnapshot, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabaseSnapshot that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseSnapshotRequestT = Model::GetRelationalDatabaseSnapshotRequest>
        void GetRelationalDatabaseSnapshotAsync(const GetRelationalDatabaseSnapshotRequestT& request, const GetRelationalDatabaseSnapshotResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabaseSnapshot, request, handler, context);
        }

        /**
         * <p>Returns information about all of your database snapshots in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabaseSnapshots">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabaseSnapshotsOutcome GetRelationalDatabaseSnapshots(const Model::GetRelationalDatabaseSnapshotsRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabaseSnapshots that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabaseSnapshotsRequestT = Model::GetRelationalDatabaseSnapshotsRequest>
        Model::GetRelationalDatabaseSnapshotsOutcomeCallable GetRelationalDatabaseSnapshotsCallable(const GetRelationalDatabaseSnapshotsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabaseSnapshots, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabaseSnapshots that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabaseSnapshotsRequestT = Model::GetRelationalDatabaseSnapshotsRequest>
        void GetRelationalDatabaseSnapshotsAsync(const GetRelationalDatabaseSnapshotsRequestT& request, const GetRelationalDatabaseSnapshotsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabaseSnapshots, request, handler, context);
        }

        /**
         * <p>Returns information about all of your databases in Amazon
         * Lightsail.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetRelationalDatabases">AWS
         * API Reference</a></p>
         */
        virtual Model::GetRelationalDatabasesOutcome GetRelationalDatabases(const Model::GetRelationalDatabasesRequest& request) const;

        /**
         * A Callable wrapper for GetRelationalDatabases that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetRelationalDatabasesRequestT = Model::GetRelationalDatabasesRequest>
        Model::GetRelationalDatabasesOutcomeCallable GetRelationalDatabasesCallable(const GetRelationalDatabasesRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetRelationalDatabases, request);
        }

        /**
         * An Async wrapper for GetRelationalDatabases that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetRelationalDatabasesRequestT = Model::GetRelationalDatabasesRequest>
        void GetRelationalDatabasesAsync(const GetRelationalDatabasesRequestT& request, const GetRelationalDatabasesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetRelationalDatabases, request, handler, context);
        }

        /**
         * <p>Returns detailed information for five of the most recent
         * <code>SetupInstanceHttps</code> requests that were ran on the target
         * instance.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetSetupHistory">AWS
         * API Reference</a></p>
         */
        virtual Model::GetSetupHistoryOutcome GetSetupHistory(const Model::GetSetupHistoryRequest& request) const;

        /**
         * A Callable wrapper for GetSetupHistory that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetSetupHistoryRequestT = Model::GetSetupHistoryRequest>
        Model::GetSetupHistoryOutcomeCallable GetSetupHistoryCallable(const GetSetupHistoryRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetSetupHistory, request);
        }

        /**
         * An Async wrapper for GetSetupHistory that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetSetupHistoryRequestT = Model::GetSetupHistoryRequest>
        void GetSetupHistoryAsync(const GetSetupHistoryRequestT& request, const GetSetupHistoryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetSetupHistory, request, handler, context);
        }

        /**
         * <p>Returns information about an Amazon Lightsail static IP.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStaticIpOutcome GetStaticIp(const Model::GetStaticIpRequest& request) const;

        /**
         * A Callable wrapper for GetStaticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStaticIpRequestT = Model::GetStaticIpRequest>
        Model::GetStaticIpOutcomeCallable GetStaticIpCallable(const GetStaticIpRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetStaticIp, request);
        }

        /**
         * An Async wrapper for GetStaticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStaticIpRequestT = Model::GetStaticIpRequest>
        void GetStaticIpAsync(const GetStaticIpRequestT& request, const GetStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetStaticIp, request, handler, context);
        }

        /**
         * <p>Returns information about all static IPs in the user's account.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/GetStaticIps">AWS
         * API Reference</a></p>
         */
        virtual Model::GetStaticIpsOutcome GetStaticIps(const Model::GetStaticIpsRequest& request) const;

        /**
         * A Callable wrapper for GetStaticIps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename GetStaticIpsRequestT = Model::GetStaticIpsRequest>
        Model::GetStaticIpsOutcomeCallable GetStaticIpsCallable(const GetStaticIpsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::GetStaticIps, request);
        }

        /**
         * An Async wrapper for GetStaticIps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename GetStaticIpsRequestT = Model::GetStaticIpsRequest>
        void GetStaticIpsAsync(const GetStaticIpsRequestT& request, const GetStaticIpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::GetStaticIps, request, handler, context);
        }

        /**
         * <p>Imports a public SSH key from a specific key pair.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ImportKeyPair">AWS
         * API Reference</a></p>
         */
        virtual Model::ImportKeyPairOutcome ImportKeyPair(const Model::ImportKeyPairRequest& request) const;

        /**
         * A Callable wrapper for ImportKeyPair that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ImportKeyPairRequestT = Model::ImportKeyPairRequest>
        Model::ImportKeyPairOutcomeCallable ImportKeyPairCallable(const ImportKeyPairRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::ImportKeyPair, request);
        }

        /**
         * An Async wrapper for ImportKeyPair that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ImportKeyPairRequestT = Model::ImportKeyPairRequest>
        void ImportKeyPairAsync(const ImportKeyPairRequestT& request, const ImportKeyPairResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::ImportKeyPair, request, handler, context);
        }

        /**
         * <p>Returns a Boolean value indicating whether your Lightsail VPC is
         * peered.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/IsVpcPeered">AWS
         * API Reference</a></p>
         */
        virtual Model::IsVpcPeeredOutcome IsVpcPeered(const Model::IsVpcPeeredRequest& request) const;

        /**
         * A Callable wrapper for IsVpcPeered that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename IsVpcPeeredRequestT = Model::IsVpcPeeredRequest>
        Model::IsVpcPeeredOutcomeCallable IsVpcPeeredCallable(const IsVpcPeeredRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::IsVpcPeered, request);
        }

        /**
         * An Async wrapper for IsVpcPeered that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename IsVpcPeeredRequestT = Model::IsVpcPeeredRequest>
        void IsVpcPeeredAsync(const IsVpcPeeredRequestT& request, const IsVpcPeeredResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::IsVpcPeered, request, handler, context);
        }

        /**
         * <p>Opens ports for a specific Amazon Lightsail instance, and specifies the IP
         * addresses allowed to connect to the instance through the ports, and the
         * protocol.</p> <p>The <code>OpenInstancePublicPorts</code> action supports
         * tag-based access control via resource tags applied to the resource identified by
         * <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/OpenInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::OpenInstancePublicPortsOutcome OpenInstancePublicPorts(const Model::OpenInstancePublicPortsRequest& request) const;

        /**
         * A Callable wrapper for OpenInstancePublicPorts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename OpenInstancePublicPortsRequestT = Model::OpenInstancePublicPortsRequest>
        Model::OpenInstancePublicPortsOutcomeCallable OpenInstancePublicPortsCallable(const OpenInstancePublicPortsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::OpenInstancePublicPorts, request);
        }

        /**
         * An Async wrapper for OpenInstancePublicPorts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename OpenInstancePublicPortsRequestT = Model::OpenInstancePublicPortsRequest>
        void OpenInstancePublicPortsAsync(const OpenInstancePublicPortsRequestT& request, const OpenInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::OpenInstancePublicPorts, request, handler, context);
        }

        /**
         * <p>Peers the Lightsail VPC with the user's default VPC.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PeerVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::PeerVpcOutcome PeerVpc(const Model::PeerVpcRequest& request) const;

        /**
         * A Callable wrapper for PeerVpc that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PeerVpcRequestT = Model::PeerVpcRequest>
        Model::PeerVpcOutcomeCallable PeerVpcCallable(const PeerVpcRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::PeerVpc, request);
        }

        /**
         * An Async wrapper for PeerVpc that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PeerVpcRequestT = Model::PeerVpcRequest>
        void PeerVpcAsync(const PeerVpcRequestT& request, const PeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::PeerVpc, request, handler, context);
        }

        /**
         * <p>Creates or updates an alarm, and associates it with the specified metric.</p>
         * <p>An alarm is used to monitor a single metric for one of your resources. When a
         * metric condition is met, the alarm can notify you by email, SMS text message,
         * and a banner displayed on the Amazon Lightsail console. For more information,
         * see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
         * in Amazon Lightsail</a>.</p> <p>When this action creates an alarm, the alarm
         * state is immediately set to <code>INSUFFICIENT_DATA</code>. The alarm is then
         * evaluated and its state is set appropriately. Any actions associated with the
         * new state are then executed.</p> <p>When you update an existing alarm, its state
         * is left unchanged, but the update completely overwrites the previous
         * configuration of the alarm. The alarm is then evaluated with the updated
         * configuration.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PutAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::PutAlarmOutcome PutAlarm(const Model::PutAlarmRequest& request) const;

        /**
         * A Callable wrapper for PutAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutAlarmRequestT = Model::PutAlarmRequest>
        Model::PutAlarmOutcomeCallable PutAlarmCallable(const PutAlarmRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::PutAlarm, request);
        }

        /**
         * An Async wrapper for PutAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutAlarmRequestT = Model::PutAlarmRequest>
        void PutAlarmAsync(const PutAlarmRequestT& request, const PutAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::PutAlarm, request, handler, context);
        }

        /**
         * <p>Opens ports for a specific Amazon Lightsail instance, and specifies the IP
         * addresses allowed to connect to the instance through the ports, and the
         * protocol. This action also closes all currently open ports that are not included
         * in the request. Include all of the ports and the protocols you want to open in
         * your <code>PutInstancePublicPorts</code>request. Or use the
         * <code>OpenInstancePublicPorts</code> action to open ports without closing
         * currently open ports.</p> <p>The <code>PutInstancePublicPorts</code> action
         * supports tag-based access control via resource tags applied to the resource
         * identified by <code>instanceName</code>. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/PutInstancePublicPorts">AWS
         * API Reference</a></p>
         */
        virtual Model::PutInstancePublicPortsOutcome PutInstancePublicPorts(const Model::PutInstancePublicPortsRequest& request) const;

        /**
         * A Callable wrapper for PutInstancePublicPorts that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename PutInstancePublicPortsRequestT = Model::PutInstancePublicPortsRequest>
        Model::PutInstancePublicPortsOutcomeCallable PutInstancePublicPortsCallable(const PutInstancePublicPortsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::PutInstancePublicPorts, request);
        }

        /**
         * An Async wrapper for PutInstancePublicPorts that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename PutInstancePublicPortsRequestT = Model::PutInstancePublicPortsRequest>
        void PutInstancePublicPortsAsync(const PutInstancePublicPortsRequestT& request, const PutInstancePublicPortsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::PutInstancePublicPorts, request, handler, context);
        }

        /**
         * <p>Restarts a specific instance.</p> <p>The <code>reboot instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootInstanceOutcome RebootInstance(const Model::RebootInstanceRequest& request) const;

        /**
         * A Callable wrapper for RebootInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootInstanceRequestT = Model::RebootInstanceRequest>
        Model::RebootInstanceOutcomeCallable RebootInstanceCallable(const RebootInstanceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::RebootInstance, request);
        }

        /**
         * An Async wrapper for RebootInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootInstanceRequestT = Model::RebootInstanceRequest>
        void RebootInstanceAsync(const RebootInstanceRequestT& request, const RebootInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::RebootInstance, request, handler, context);
        }

        /**
         * <p>Restarts a specific database in Amazon Lightsail.</p> <p>The <code>reboot
         * relational database</code> operation supports tag-based access control via
         * resource tags applied to the resource identified by relationalDatabaseName. For
         * more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RebootRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::RebootRelationalDatabaseOutcome RebootRelationalDatabase(const Model::RebootRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for RebootRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RebootRelationalDatabaseRequestT = Model::RebootRelationalDatabaseRequest>
        Model::RebootRelationalDatabaseOutcomeCallable RebootRelationalDatabaseCallable(const RebootRelationalDatabaseRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::RebootRelationalDatabase, request);
        }

        /**
         * An Async wrapper for RebootRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RebootRelationalDatabaseRequestT = Model::RebootRelationalDatabaseRequest>
        void RebootRelationalDatabaseAsync(const RebootRelationalDatabaseRequestT& request, const RebootRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::RebootRelationalDatabase, request, handler, context);
        }

        /**
         * <p>Registers a container image to your Amazon Lightsail container service.</p>
         *  <p>This action is not required if you install and use the Lightsail
         * Control (lightsailctl) plugin to push container images to your Lightsail
         * container service. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-pushing-container-images">Pushing
         * and managing container images on your Amazon Lightsail container services</a> in
         * the <i>Amazon Lightsail Developer Guide</i>.</p> <p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/RegisterContainerImage">AWS
         * API Reference</a></p>
         */
        virtual Model::RegisterContainerImageOutcome RegisterContainerImage(const Model::RegisterContainerImageRequest& request) const;

        /**
         * A Callable wrapper for RegisterContainerImage that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename RegisterContainerImageRequestT = Model::RegisterContainerImageRequest>
        Model::RegisterContainerImageOutcomeCallable RegisterContainerImageCallable(const RegisterContainerImageRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::RegisterContainerImage, request);
        }

        /**
         * An Async wrapper for RegisterContainerImage that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename RegisterContainerImageRequestT = Model::RegisterContainerImageRequest>
        void RegisterContainerImageAsync(const RegisterContainerImageRequestT& request, const RegisterContainerImageResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::RegisterContainerImage, request, handler, context);
        }

        /**
         * <p>Deletes a specific static IP from your account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ReleaseStaticIp">AWS
         * API Reference</a></p>
         */
        virtual Model::ReleaseStaticIpOutcome ReleaseStaticIp(const Model::ReleaseStaticIpRequest& request) const;

        /**
         * A Callable wrapper for ReleaseStaticIp that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ReleaseStaticIpRequestT = Model::ReleaseStaticIpRequest>
        Model::ReleaseStaticIpOutcomeCallable ReleaseStaticIpCallable(const ReleaseStaticIpRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::ReleaseStaticIp, request);
        }

        /**
         * An Async wrapper for ReleaseStaticIp that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ReleaseStaticIpRequestT = Model::ReleaseStaticIpRequest>
        void ReleaseStaticIpAsync(const ReleaseStaticIpRequestT& request, const ReleaseStaticIpResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::ReleaseStaticIp, request, handler, context);
        }

        /**
         * <p>Deletes currently cached content from your Amazon Lightsail content delivery
         * network (CDN) distribution.</p> <p>After resetting the cache, the next time a
         * content request is made, your distribution pulls, serves, and caches it from the
         * origin.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/ResetDistributionCache">AWS
         * API Reference</a></p>
         */
        virtual Model::ResetDistributionCacheOutcome ResetDistributionCache(const Model::ResetDistributionCacheRequest& request) const;

        /**
         * A Callable wrapper for ResetDistributionCache that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ResetDistributionCacheRequestT = Model::ResetDistributionCacheRequest>
        Model::ResetDistributionCacheOutcomeCallable ResetDistributionCacheCallable(const ResetDistributionCacheRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::ResetDistributionCache, request);
        }

        /**
         * An Async wrapper for ResetDistributionCache that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ResetDistributionCacheRequestT = Model::ResetDistributionCacheRequest>
        void ResetDistributionCacheAsync(const ResetDistributionCacheRequestT& request, const ResetDistributionCacheResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::ResetDistributionCache, request, handler, context);
        }

        /**
         * <p>Sends a verification request to an email contact method to ensure it's owned
         * by the requester. SMS contact methods don't need to be verified.</p> <p>A
         * contact method is used to send you notifications about your Amazon Lightsail
         * resources. You can add one email address and one mobile phone number contact
         * method in each Amazon Web Services Region. However, SMS text messaging is not
         * supported in some Amazon Web Services Regions, and SMS text messages cannot be
         * sent to some countries/regions. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-notifications">Notifications
         * in Amazon Lightsail</a>.</p> <p>A verification request is sent to the contact
         * method when you initially create it. Use this action to send another
         * verification request if a previous verification request was deleted, or has
         * expired.</p>  <p>Notifications are not sent to an email contact
         * method until after it is verified, and confirmed as valid.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SendContactMethodVerification">AWS
         * API Reference</a></p>
         */
        virtual Model::SendContactMethodVerificationOutcome SendContactMethodVerification(const Model::SendContactMethodVerificationRequest& request) const;

        /**
         * A Callable wrapper for SendContactMethodVerification that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SendContactMethodVerificationRequestT = Model::SendContactMethodVerificationRequest>
        Model::SendContactMethodVerificationOutcomeCallable SendContactMethodVerificationCallable(const SendContactMethodVerificationRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::SendContactMethodVerification, request);
        }

        /**
         * An Async wrapper for SendContactMethodVerification that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SendContactMethodVerificationRequestT = Model::SendContactMethodVerificationRequest>
        void SendContactMethodVerificationAsync(const SendContactMethodVerificationRequestT& request, const SendContactMethodVerificationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::SendContactMethodVerification, request, handler, context);
        }

        /**
         * <p>Sets the IP address type for an Amazon Lightsail resource.</p> <p>Use this
         * action to enable dual-stack for a resource, which enables IPv4 and IPv6 for the
         * specified resource. Alternately, you can use this action to disable dual-stack,
         * and enable IPv4 only.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SetIpAddressType">AWS
         * API Reference</a></p>
         */
        virtual Model::SetIpAddressTypeOutcome SetIpAddressType(const Model::SetIpAddressTypeRequest& request) const;

        /**
         * A Callable wrapper for SetIpAddressType that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetIpAddressTypeRequestT = Model::SetIpAddressTypeRequest>
        Model::SetIpAddressTypeOutcomeCallable SetIpAddressTypeCallable(const SetIpAddressTypeRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::SetIpAddressType, request);
        }

        /**
         * An Async wrapper for SetIpAddressType that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetIpAddressTypeRequestT = Model::SetIpAddressTypeRequest>
        void SetIpAddressTypeAsync(const SetIpAddressTypeRequestT& request, const SetIpAddressTypeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::SetIpAddressType, request, handler, context);
        }

        /**
         * <p>Sets the Amazon Lightsail resources that can access the specified Lightsail
         * bucket.</p> <p>Lightsail buckets currently support setting access for Lightsail
         * instances in the same Amazon Web Services Region.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SetResourceAccessForBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::SetResourceAccessForBucketOutcome SetResourceAccessForBucket(const Model::SetResourceAccessForBucketRequest& request) const;

        /**
         * A Callable wrapper for SetResourceAccessForBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetResourceAccessForBucketRequestT = Model::SetResourceAccessForBucketRequest>
        Model::SetResourceAccessForBucketOutcomeCallable SetResourceAccessForBucketCallable(const SetResourceAccessForBucketRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::SetResourceAccessForBucket, request);
        }

        /**
         * An Async wrapper for SetResourceAccessForBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetResourceAccessForBucketRequestT = Model::SetResourceAccessForBucketRequest>
        void SetResourceAccessForBucketAsync(const SetResourceAccessForBucketRequestT& request, const SetResourceAccessForBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::SetResourceAccessForBucket, request, handler, context);
        }

        /**
         * <p>Creates an SSL/TLS certificate that secures traffic for your website. After
         * the certificate is created, it is installed on the specified Lightsail
         * instance.</p> <p>If you provide more than one domain name in the request, at
         * least one name must be less than or equal to 63 characters in
         * length.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/SetupInstanceHttps">AWS
         * API Reference</a></p>
         */
        virtual Model::SetupInstanceHttpsOutcome SetupInstanceHttps(const Model::SetupInstanceHttpsRequest& request) const;

        /**
         * A Callable wrapper for SetupInstanceHttps that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename SetupInstanceHttpsRequestT = Model::SetupInstanceHttpsRequest>
        Model::SetupInstanceHttpsOutcomeCallable SetupInstanceHttpsCallable(const SetupInstanceHttpsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::SetupInstanceHttps, request);
        }

        /**
         * An Async wrapper for SetupInstanceHttps that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename SetupInstanceHttpsRequestT = Model::SetupInstanceHttpsRequest>
        void SetupInstanceHttpsAsync(const SetupInstanceHttpsRequestT& request, const SetupInstanceHttpsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::SetupInstanceHttps, request, handler, context);
        }

        /**
         * <p>Initiates a graphical user interface (GUI) session that’s used to access a
         * virtual computer’s operating system and application. The session will be active
         * for 1 hour. Use this action to resume the session after it expires.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartGUISession">AWS
         * API Reference</a></p>
         */
        virtual Model::StartGUISessionOutcome StartGUISession(const Model::StartGUISessionRequest& request) const;

        /**
         * A Callable wrapper for StartGUISession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartGUISessionRequestT = Model::StartGUISessionRequest>
        Model::StartGUISessionOutcomeCallable StartGUISessionCallable(const StartGUISessionRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::StartGUISession, request);
        }

        /**
         * An Async wrapper for StartGUISession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartGUISessionRequestT = Model::StartGUISessionRequest>
        void StartGUISessionAsync(const StartGUISessionRequestT& request, const StartGUISessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::StartGUISession, request, handler, context);
        }

        /**
         * <p>Starts a specific Amazon Lightsail instance from a stopped state. To restart
         * an instance, use the <code>reboot instance</code> operation.</p>  <p>When
         * you start a stopped instance, Lightsail assigns a new public IP address to the
         * instance. To use the same IP address after stopping and starting an instance,
         * create a static IP address and attach it to the instance. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-create-static-ip">Amazon
         * Lightsail Developer Guide</a>.</p>  <p>The <code>start instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StartInstanceOutcome StartInstance(const Model::StartInstanceRequest& request) const;

        /**
         * A Callable wrapper for StartInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartInstanceRequestT = Model::StartInstanceRequest>
        Model::StartInstanceOutcomeCallable StartInstanceCallable(const StartInstanceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::StartInstance, request);
        }

        /**
         * An Async wrapper for StartInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartInstanceRequestT = Model::StartInstanceRequest>
        void StartInstanceAsync(const StartInstanceRequestT& request, const StartInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::StartInstance, request, handler, context);
        }

        /**
         * <p>Starts a specific database from a stopped state in Amazon Lightsail. To
         * restart a database, use the <code>reboot relational database</code>
         * operation.</p> <p>The <code>start relational database</code> operation supports
         * tag-based access control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StartRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::StartRelationalDatabaseOutcome StartRelationalDatabase(const Model::StartRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for StartRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartRelationalDatabaseRequestT = Model::StartRelationalDatabaseRequest>
        Model::StartRelationalDatabaseOutcomeCallable StartRelationalDatabaseCallable(const StartRelationalDatabaseRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::StartRelationalDatabase, request);
        }

        /**
         * An Async wrapper for StartRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartRelationalDatabaseRequestT = Model::StartRelationalDatabaseRequest>
        void StartRelationalDatabaseAsync(const StartRelationalDatabaseRequestT& request, const StartRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::StartRelationalDatabase, request, handler, context);
        }

        /**
         * <p>Terminates a web-based NICE DCV session that’s used to access a virtual
         * computer’s operating system or application. The session will close and any
         * unsaved data will be lost.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopGUISession">AWS
         * API Reference</a></p>
         */
        virtual Model::StopGUISessionOutcome StopGUISession(const Model::StopGUISessionRequest& request) const;

        /**
         * A Callable wrapper for StopGUISession that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopGUISessionRequestT = Model::StopGUISessionRequest>
        Model::StopGUISessionOutcomeCallable StopGUISessionCallable(const StopGUISessionRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::StopGUISession, request);
        }

        /**
         * An Async wrapper for StopGUISession that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopGUISessionRequestT = Model::StopGUISessionRequest>
        void StopGUISessionAsync(const StopGUISessionRequestT& request, const StopGUISessionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::StopGUISession, request, handler, context);
        }

        /**
         * <p>Stops a specific Amazon Lightsail instance that is currently running.</p>
         *  <p>When you start a stopped instance, Lightsail assigns a new public IP
         * address to the instance. To use the same IP address after stopping and starting
         * an instance, create a static IP address and attach it to the instance. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-create-static-ip">Amazon
         * Lightsail Developer Guide</a>.</p>  <p>The <code>stop instance</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>instance name</code>. For more information, see the
         * <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::StopInstanceOutcome StopInstance(const Model::StopInstanceRequest& request) const;

        /**
         * A Callable wrapper for StopInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopInstanceRequestT = Model::StopInstanceRequest>
        Model::StopInstanceOutcomeCallable StopInstanceCallable(const StopInstanceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::StopInstance, request);
        }

        /**
         * An Async wrapper for StopInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopInstanceRequestT = Model::StopInstanceRequest>
        void StopInstanceAsync(const StopInstanceRequestT& request, const StopInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::StopInstance, request, handler, context);
        }

        /**
         * <p>Stops a specific database that is currently running in Amazon Lightsail.</p>
         * <p>The <code>stop relational database</code> operation supports tag-based access
         * control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/StopRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::StopRelationalDatabaseOutcome StopRelationalDatabase(const Model::StopRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for StopRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopRelationalDatabaseRequestT = Model::StopRelationalDatabaseRequest>
        Model::StopRelationalDatabaseOutcomeCallable StopRelationalDatabaseCallable(const StopRelationalDatabaseRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::StopRelationalDatabase, request);
        }

        /**
         * An Async wrapper for StopRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopRelationalDatabaseRequestT = Model::StopRelationalDatabaseRequest>
        void StopRelationalDatabaseAsync(const StopRelationalDatabaseRequestT& request, const StopRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::StopRelationalDatabase, request, handler, context);
        }

        /**
         * <p>Adds one or more tags to the specified Amazon Lightsail resource. Each
         * resource can have a maximum of 50 tags. Each tag consists of a key and an
         * optional value. Tag keys must be unique per resource. For more information about
         * tags, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-tags">Amazon
         * Lightsail Developer Guide</a>.</p> <p>The <code>tag resource</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>resource name</code>. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::TagResource, request, handler, context);
        }

        /**
         * <p>Tests an alarm by displaying a banner on the Amazon Lightsail console. If a
         * notification trigger is configured for the specified alarm, the test also sends
         * a notification to the notification protocol (<code>Email</code> and/or
         * <code>SMS</code>) configured for the alarm.</p> <p>An alarm is used to monitor a
         * single metric for one of your resources. When a metric condition is met, the
         * alarm can notify you by email, SMS text message, and a banner displayed on the
         * Amazon Lightsail console. For more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-alarms">Alarms
         * in Amazon Lightsail</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/TestAlarm">AWS
         * API Reference</a></p>
         */
        virtual Model::TestAlarmOutcome TestAlarm(const Model::TestAlarmRequest& request) const;

        /**
         * A Callable wrapper for TestAlarm that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TestAlarmRequestT = Model::TestAlarmRequest>
        Model::TestAlarmOutcomeCallable TestAlarmCallable(const TestAlarmRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::TestAlarm, request);
        }

        /**
         * An Async wrapper for TestAlarm that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TestAlarmRequestT = Model::TestAlarmRequest>
        void TestAlarmAsync(const TestAlarmRequestT& request, const TestAlarmResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::TestAlarm, request, handler, context);
        }

        /**
         * <p>Unpeers the Lightsail VPC from the user's default VPC.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UnpeerVpc">AWS
         * API Reference</a></p>
         */
        virtual Model::UnpeerVpcOutcome UnpeerVpc(const Model::UnpeerVpcRequest& request) const;

        /**
         * A Callable wrapper for UnpeerVpc that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UnpeerVpcRequestT = Model::UnpeerVpcRequest>
        Model::UnpeerVpcOutcomeCallable UnpeerVpcCallable(const UnpeerVpcRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UnpeerVpc, request);
        }

        /**
         * An Async wrapper for UnpeerVpc that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UnpeerVpcRequestT = Model::UnpeerVpcRequest>
        void UnpeerVpcAsync(const UnpeerVpcRequestT& request, const UnpeerVpcResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UnpeerVpc, request, handler, context);
        }

        /**
         * <p>Deletes the specified set of tag keys and their values from the specified
         * Amazon Lightsail resource.</p> <p>The <code>untag resource</code> operation
         * supports tag-based access control via request tags and resource tags applied to
         * the resource identified by <code>resource name</code>. For more information, see
         * the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UntagResource, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Lightsail bucket.</p> <p>Use this action to update
         * the configuration of an existing bucket, such as versioning, public
         * accessibility, and the Amazon Web Services accounts that can access the
         * bucket.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateBucket">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBucketOutcome UpdateBucket(const Model::UpdateBucketRequest& request) const;

        /**
         * A Callable wrapper for UpdateBucket that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBucketRequestT = Model::UpdateBucketRequest>
        Model::UpdateBucketOutcomeCallable UpdateBucketCallable(const UpdateBucketRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UpdateBucket, request);
        }

        /**
         * An Async wrapper for UpdateBucket that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBucketRequestT = Model::UpdateBucketRequest>
        void UpdateBucketAsync(const UpdateBucketRequestT& request, const UpdateBucketResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UpdateBucket, request, handler, context);
        }

        /**
         * <p>Updates the bundle, or storage plan, of an existing Amazon Lightsail
         * bucket.</p> <p>A bucket bundle specifies the monthly cost, storage space, and
         * data transfer quota for a bucket. You can update a bucket's bundle only one time
         * within a monthly Amazon Web Services billing cycle. To determine if you can
         * update a bucket's bundle, use the <a
         * href="https://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetBuckets.html">GetBuckets</a>
         * action. The <code>ableToUpdateBundle</code> parameter in the response will
         * indicate whether you can currently update a bucket's bundle.</p> <p>Update a
         * bucket's bundle if it's consistently going over its storage space or data
         * transfer quota, or if a bucket's usage is consistently in the lower range of its
         * storage space or data transfer quota. Due to the unpredictable usage
         * fluctuations that a bucket might experience, we strongly recommend that you
         * update a bucket's bundle only as a long-term strategy, instead of as a
         * short-term, monthly cost-cutting measure. Choose a bucket bundle that will
         * provide the bucket with ample storage space and data transfer for a long time to
         * come.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateBucketBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateBucketBundleOutcome UpdateBucketBundle(const Model::UpdateBucketBundleRequest& request) const;

        /**
         * A Callable wrapper for UpdateBucketBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateBucketBundleRequestT = Model::UpdateBucketBundleRequest>
        Model::UpdateBucketBundleOutcomeCallable UpdateBucketBundleCallable(const UpdateBucketBundleRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UpdateBucketBundle, request);
        }

        /**
         * An Async wrapper for UpdateBucketBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateBucketBundleRequestT = Model::UpdateBucketBundleRequest>
        void UpdateBucketBundleAsync(const UpdateBucketBundleRequestT& request, const UpdateBucketBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UpdateBucketBundle, request, handler, context);
        }

        /**
         * <p>Updates the configuration of your Amazon Lightsail container service, such as
         * its power, scale, and public domain names.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateContainerService">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateContainerServiceOutcome UpdateContainerService(const Model::UpdateContainerServiceRequest& request) const;

        /**
         * A Callable wrapper for UpdateContainerService that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateContainerServiceRequestT = Model::UpdateContainerServiceRequest>
        Model::UpdateContainerServiceOutcomeCallable UpdateContainerServiceCallable(const UpdateContainerServiceRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UpdateContainerService, request);
        }

        /**
         * An Async wrapper for UpdateContainerService that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateContainerServiceRequestT = Model::UpdateContainerServiceRequest>
        void UpdateContainerServiceAsync(const UpdateContainerServiceRequestT& request, const UpdateContainerServiceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UpdateContainerService, request, handler, context);
        }

        /**
         * <p>Updates an existing Amazon Lightsail content delivery network (CDN)
         * distribution.</p> <p>Use this action to update the configuration of your
         * existing distribution.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDistribution">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistributionOutcome UpdateDistribution(const Model::UpdateDistributionRequest& request) const;

        /**
         * A Callable wrapper for UpdateDistribution that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDistributionRequestT = Model::UpdateDistributionRequest>
        Model::UpdateDistributionOutcomeCallable UpdateDistributionCallable(const UpdateDistributionRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UpdateDistribution, request);
        }

        /**
         * An Async wrapper for UpdateDistribution that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDistributionRequestT = Model::UpdateDistributionRequest>
        void UpdateDistributionAsync(const UpdateDistributionRequestT& request, const UpdateDistributionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UpdateDistribution, request, handler, context);
        }

        /**
         * <p>Updates the bundle of your Amazon Lightsail content delivery network (CDN)
         * distribution.</p> <p>A distribution bundle specifies the monthly network
         * transfer quota and monthly cost of your distribution.</p> <p>Update your
         * distribution's bundle if your distribution is going over its monthly network
         * transfer quota and is incurring an overage fee.</p> <p>You can update your
         * distribution's bundle only one time within your monthly Amazon Web Services
         * billing cycle. To determine if you can update your distribution's bundle, use
         * the <code>GetDistributions</code> action. The <code>ableToUpdateBundle</code>
         * parameter in the result will indicate whether you can currently update your
         * distribution's bundle.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDistributionBundle">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDistributionBundleOutcome UpdateDistributionBundle(const Model::UpdateDistributionBundleRequest& request) const;

        /**
         * A Callable wrapper for UpdateDistributionBundle that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDistributionBundleRequestT = Model::UpdateDistributionBundleRequest>
        Model::UpdateDistributionBundleOutcomeCallable UpdateDistributionBundleCallable(const UpdateDistributionBundleRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UpdateDistributionBundle, request);
        }

        /**
         * An Async wrapper for UpdateDistributionBundle that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDistributionBundleRequestT = Model::UpdateDistributionBundleRequest>
        void UpdateDistributionBundleAsync(const UpdateDistributionBundleRequestT& request, const UpdateDistributionBundleResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UpdateDistributionBundle, request, handler, context);
        }

        /**
         * <p>Updates a domain recordset after it is created.</p> <p>The <code>update
         * domain entry</code> operation supports tag-based access control via resource
         * tags applied to the resource identified by <code>domain name</code>. For more
         * information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateDomainEntry">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateDomainEntryOutcome UpdateDomainEntry(const Model::UpdateDomainEntryRequest& request) const;

        /**
         * A Callable wrapper for UpdateDomainEntry that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateDomainEntryRequestT = Model::UpdateDomainEntryRequest>
        Model::UpdateDomainEntryOutcomeCallable UpdateDomainEntryCallable(const UpdateDomainEntryRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UpdateDomainEntry, request);
        }

        /**
         * An Async wrapper for UpdateDomainEntry that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateDomainEntryRequestT = Model::UpdateDomainEntryRequest>
        void UpdateDomainEntryAsync(const UpdateDomainEntryRequestT& request, const UpdateDomainEntryResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UpdateDomainEntry, request, handler, context);
        }

        /**
         * <p>Modifies the Amazon Lightsail instance metadata parameters on a running or
         * stopped instance. When you modify the parameters on a running instance, the
         * <code>GetInstance</code> or <code>GetInstances</code> API operation initially
         * responds with a state of <code>pending</code>. After the parameter modifications
         * are successfully applied, the state changes to <code>applied</code> in
         * subsequent <code>GetInstance</code> or <code>GetInstances</code> API calls. For
         * more information, see <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-configuring-instance-metadata-service">Use
         * IMDSv2 with an Amazon Lightsail instance</a> in the <i>Amazon Lightsail
         * Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateInstanceMetadataOptions">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateInstanceMetadataOptionsOutcome UpdateInstanceMetadataOptions(const Model::UpdateInstanceMetadataOptionsRequest& request) const;

        /**
         * A Callable wrapper for UpdateInstanceMetadataOptions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateInstanceMetadataOptionsRequestT = Model::UpdateInstanceMetadataOptionsRequest>
        Model::UpdateInstanceMetadataOptionsOutcomeCallable UpdateInstanceMetadataOptionsCallable(const UpdateInstanceMetadataOptionsRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UpdateInstanceMetadataOptions, request);
        }

        /**
         * An Async wrapper for UpdateInstanceMetadataOptions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateInstanceMetadataOptionsRequestT = Model::UpdateInstanceMetadataOptionsRequest>
        void UpdateInstanceMetadataOptionsAsync(const UpdateInstanceMetadataOptionsRequestT& request, const UpdateInstanceMetadataOptionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UpdateInstanceMetadataOptions, request, handler, context);
        }

        /**
         * <p>Updates the specified attribute for a load balancer. You can only update one
         * attribute at a time.</p> <p>The <code>update load balancer attribute</code>
         * operation supports tag-based access control via resource tags applied to the
         * resource identified by <code>load balancer name</code>. For more information,
         * see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateLoadBalancerAttribute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateLoadBalancerAttributeOutcome UpdateLoadBalancerAttribute(const Model::UpdateLoadBalancerAttributeRequest& request) const;

        /**
         * A Callable wrapper for UpdateLoadBalancerAttribute that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateLoadBalancerAttributeRequestT = Model::UpdateLoadBalancerAttributeRequest>
        Model::UpdateLoadBalancerAttributeOutcomeCallable UpdateLoadBalancerAttributeCallable(const UpdateLoadBalancerAttributeRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UpdateLoadBalancerAttribute, request);
        }

        /**
         * An Async wrapper for UpdateLoadBalancerAttribute that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateLoadBalancerAttributeRequestT = Model::UpdateLoadBalancerAttributeRequest>
        void UpdateLoadBalancerAttributeAsync(const UpdateLoadBalancerAttributeRequestT& request, const UpdateLoadBalancerAttributeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UpdateLoadBalancerAttribute, request, handler, context);
        }

        /**
         * <p>Allows the update of one or more attributes of a database in Amazon
         * Lightsail.</p> <p>Updates are applied immediately, or in cases where the updates
         * could result in an outage, are applied during the database's predefined
         * maintenance window.</p> <p>The <code>update relational database</code> operation
         * supports tag-based access control via resource tags applied to the resource
         * identified by relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateRelationalDatabase">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRelationalDatabaseOutcome UpdateRelationalDatabase(const Model::UpdateRelationalDatabaseRequest& request) const;

        /**
         * A Callable wrapper for UpdateRelationalDatabase that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRelationalDatabaseRequestT = Model::UpdateRelationalDatabaseRequest>
        Model::UpdateRelationalDatabaseOutcomeCallable UpdateRelationalDatabaseCallable(const UpdateRelationalDatabaseRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UpdateRelationalDatabase, request);
        }

        /**
         * An Async wrapper for UpdateRelationalDatabase that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRelationalDatabaseRequestT = Model::UpdateRelationalDatabaseRequest>
        void UpdateRelationalDatabaseAsync(const UpdateRelationalDatabaseRequestT& request, const UpdateRelationalDatabaseResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UpdateRelationalDatabase, request, handler, context);
        }

        /**
         * <p>Allows the update of one or more parameters of a database in Amazon
         * Lightsail.</p> <p>Parameter updates don't cause outages; therefore, their
         * application is not subject to the preferred maintenance window. However, there
         * are two ways in which parameter updates are applied: <code>dynamic</code> or
         * <code>pending-reboot</code>. Parameters marked with a <code>dynamic</code> apply
         * type are applied immediately. Parameters marked with a
         * <code>pending-reboot</code> apply type are applied only after the database is
         * rebooted using the <code>reboot relational database</code> operation.</p> <p>The
         * <code>update relational database parameters</code> operation supports tag-based
         * access control via resource tags applied to the resource identified by
         * relationalDatabaseName. For more information, see the <a
         * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/amazon-lightsail-controlling-access-using-tags">Amazon
         * Lightsail Developer Guide</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/UpdateRelationalDatabaseParameters">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRelationalDatabaseParametersOutcome UpdateRelationalDatabaseParameters(const Model::UpdateRelationalDatabaseParametersRequest& request) const;

        /**
         * A Callable wrapper for UpdateRelationalDatabaseParameters that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateRelationalDatabaseParametersRequestT = Model::UpdateRelationalDatabaseParametersRequest>
        Model::UpdateRelationalDatabaseParametersOutcomeCallable UpdateRelationalDatabaseParametersCallable(const UpdateRelationalDatabaseParametersRequestT& request) const
        {
            return SubmitCallable(&LightsailClient::UpdateRelationalDatabaseParameters, request);
        }

        /**
         * An Async wrapper for UpdateRelationalDatabaseParameters that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateRelationalDatabaseParametersRequestT = Model::UpdateRelationalDatabaseParametersRequest>
        void UpdateRelationalDatabaseParametersAsync(const UpdateRelationalDatabaseParametersRequestT& request, const UpdateRelationalDatabaseParametersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&LightsailClient::UpdateRelationalDatabaseParameters, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<LightsailEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<LightsailClient>;
      void init(const LightsailClientConfiguration& clientConfiguration);

      LightsailClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<LightsailEndpointProviderBase> m_endpointProvider;
  };

} // namespace Lightsail
} // namespace Aws
