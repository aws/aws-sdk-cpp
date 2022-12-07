/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53/Route53_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/AmazonSerializableWebServiceRequest.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/route53/Route53ServiceClientModel.h>

namespace Aws
{
namespace Route53
{
  /**
   * <p>Amazon Route 53 is a highly available and scalable Domain Name System (DNS)
   * web service.</p> <p>You can use Route 53 to:</p> <ul> <li> <p>Register domain
   * names.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/welcome-domain-registration.html">How
   * domain registration works</a>.</p> </li> <li> <p>Route internet traffic to the
   * resources for your domain</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/welcome-dns-service.html">How
   * internet traffic is routed to your website or web application</a>.</p> </li>
   * <li> <p>Check the health of your resources.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/welcome-health-checks.html">How
   * Route 53 checks the health of your resources</a>.</p> </li> </ul>
   */
  class AWS_ROUTE53_API Route53Client : public Aws::Client::AWSXMLClient, public Aws::Client::ClientWithAsyncTemplateMethods<Route53Client>
  {
    public:
      typedef Aws::Client::AWSXMLClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53Client(const Aws::Route53::Route53ClientConfiguration& clientConfiguration = Aws::Route53::Route53ClientConfiguration(),
                      std::shared_ptr<Route53EndpointProviderBase> endpointProvider = Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53Client(const Aws::Auth::AWSCredentials& credentials,
                      std::shared_ptr<Route53EndpointProviderBase> endpointProvider = Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG),
                      const Aws::Route53::Route53ClientConfiguration& clientConfiguration = Aws::Route53::Route53ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      std::shared_ptr<Route53EndpointProviderBase> endpointProvider = Aws::MakeShared<Route53EndpointProvider>(ALLOCATION_TAG),
                      const Aws::Route53::Route53ClientConfiguration& clientConfiguration = Aws::Route53::Route53ClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53Client(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        Route53Client(const Aws::Auth::AWSCredentials& credentials,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        Route53Client(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                      const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~Route53Client();


        /**
         * <p>Activates a key-signing key (KSK) so that it can be used for signing by
         * DNSSEC. This operation changes the KSK status to
         * <code>ACTIVE</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ActivateKeySigningKey">AWS
         * API Reference</a></p>
         */
        virtual Model::ActivateKeySigningKeyOutcome ActivateKeySigningKey(const Model::ActivateKeySigningKeyRequest& request) const;

        /**
         * A Callable wrapper for ActivateKeySigningKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ActivateKeySigningKeyOutcomeCallable ActivateKeySigningKeyCallable(const Model::ActivateKeySigningKeyRequest& request) const;

        /**
         * An Async wrapper for ActivateKeySigningKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ActivateKeySigningKeyAsync(const Model::ActivateKeySigningKeyRequest& request, const ActivateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Associates an Amazon VPC with a private hosted zone. </p>  <p>To
         * perform the association, the VPC and the private hosted zone must already exist.
         * You can't convert a public hosted zone into a private hosted zone.</p>
         *   <p>If you want to associate a VPC that was created by using
         * one Amazon Web Services account with a private hosted zone that was created by
         * using a different account, the Amazon Web Services account that created the
         * private hosted zone must first submit a
         * <code>CreateVPCAssociationAuthorization</code> request. Then the account that
         * created the VPC must submit an <code>AssociateVPCWithHostedZone</code>
         * request.</p>   <p>When granting access, the hosted zone and the
         * Amazon VPC must belong to the same partition. A partition is a group of Amazon
         * Web Services Regions. Each Amazon Web Services account is scoped to one
         * partition.</p> <p>The following are the supported partitions:</p> <ul> <li> <p>
         * <code>aws</code> - Amazon Web Services Regions</p> </li> <li> <p>
         * <code>aws-cn</code> - China Regions</p> </li> <li> <p> <code>aws-us-gov</code> -
         * Amazon Web Services GovCloud (US) Region</p> </li> </ul> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Access
         * Management</a> in the <i>Amazon Web Services General Reference</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/AssociateVPCWithHostedZone">AWS
         * API Reference</a></p>
         */
        virtual Model::AssociateVPCWithHostedZoneOutcome AssociateVPCWithHostedZone(const Model::AssociateVPCWithHostedZoneRequest& request) const;

        /**
         * A Callable wrapper for AssociateVPCWithHostedZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::AssociateVPCWithHostedZoneOutcomeCallable AssociateVPCWithHostedZoneCallable(const Model::AssociateVPCWithHostedZoneRequest& request) const;

        /**
         * An Async wrapper for AssociateVPCWithHostedZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void AssociateVPCWithHostedZoneAsync(const Model::AssociateVPCWithHostedZoneRequest& request, const AssociateVPCWithHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates, changes, or deletes CIDR blocks within a collection. Contains
         * authoritative IP information mapping blocks to one or multiple locations.</p>
         * <p>A change request can update multiple locations in a collection at a time,
         * which is helpful if you want to move one or more CIDR blocks from one location
         * to another in one transaction, without downtime. </p> <p> <b>Limits</b> </p>
         * <p>The max number of CIDR blocks included in the request is 1000. As a result,
         * big updates require multiple API calls.</p> <p> <b> PUT and DELETE_IF_EXISTS</b>
         * </p> <p>Use <code>ChangeCidrCollection</code> to perform the following
         * actions:</p> <ul> <li> <p> <code>PUT</code>: Create a CIDR block within the
         * specified collection.</p> </li> <li> <p> <code> DELETE_IF_EXISTS</code>: Delete
         * an existing CIDR block from the collection.</p> </li> </ul><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeCidrCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::ChangeCidrCollectionOutcome ChangeCidrCollection(const Model::ChangeCidrCollectionRequest& request) const;

        /**
         * A Callable wrapper for ChangeCidrCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeCidrCollectionOutcomeCallable ChangeCidrCollectionCallable(const Model::ChangeCidrCollectionRequest& request) const;

        /**
         * An Async wrapper for ChangeCidrCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeCidrCollectionAsync(const Model::ChangeCidrCollectionRequest& request, const ChangeCidrCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates, changes, or deletes a resource record set, which contains
         * authoritative DNS information for a specified domain name or subdomain name. For
         * example, you can use <code>ChangeResourceRecordSets</code> to create a resource
         * record set that routes traffic for test.example.com to a web server that has an
         * IP address of 192.0.2.44.</p> <p> <b>Deleting Resource Record Sets</b> </p>
         * <p>To delete a resource record set, you must specify all the same values that
         * you specified when you created it.</p> <p> <b>Change Batches and Transactional
         * Changes</b> </p> <p>The request body must include a document with a
         * <code>ChangeResourceRecordSetsRequest</code> element. The request body contains
         * a list of change items, known as a change batch. Change batches are considered
         * transactional changes. Route 53 validates the changes in the request and then
         * either makes all or none of the changes in the change batch request. This
         * ensures that DNS routing isn't adversely affected by partial changes to the
         * resource record sets in a hosted zone. </p> <p>For example, suppose a change
         * batch request contains two changes: it deletes the <code>CNAME</code> resource
         * record set for www.example.com and creates an alias resource record set for
         * www.example.com. If validation for both records succeeds, Route 53 deletes the
         * first resource record set and creates the second resource record set in a single
         * operation. If validation for either the <code>DELETE</code> or the
         * <code>CREATE</code> action fails, then the request is canceled, and the original
         * <code>CNAME</code> record continues to exist.</p>  <p>If you try to delete
         * the same resource record set more than once in a single change batch, Route 53
         * returns an <code>InvalidChangeBatch</code> error.</p>  <p> <b>Traffic
         * Flow</b> </p> <p>To create resource record sets for complex routing
         * configurations, use either the traffic flow visual editor in the Route 53
         * console or the API actions for traffic policies and traffic policy instances.
         * Save the configuration as a traffic policy, then associate the traffic policy
         * with one or more domain names (such as example.com) or subdomain names (such as
         * www.example.com), in the same hosted zone or in multiple hosted zones. You can
         * roll back the updates if the new configuration isn't performing as expected. For
         * more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/traffic-flow.html">Using
         * Traffic Flow to Route DNS Traffic</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p> <p> <b>Create, Delete, and Upsert</b> </p> <p>Use
         * <code>ChangeResourceRecordsSetsRequest</code> to perform the following
         * actions:</p> <ul> <li> <p> <code>CREATE</code>: Creates a resource record set
         * that has the specified values.</p> </li> <li> <p> <code>DELETE</code>: Deletes
         * an existing resource record set that has the specified values.</p> </li> <li>
         * <p> <code>UPSERT</code>: If a resource set exists Route 53 updates it with the
         * values in the request. </p> </li> </ul> <p> <b>Syntaxes for Creating, Updating,
         * and Deleting Resource Record Sets</b> </p> <p>The syntax for a request depends
         * on the type of resource record set that you want to create, delete, or update,
         * such as weighted, alias, or failover. The XML elements in your request must
         * appear in the order listed in the syntax. </p> <p>For an example for each type
         * of resource record set, see "Examples."</p> <p>Don't refer to the syntax in the
         * "Parameter Syntax" section, which includes all of the elements for every kind of
         * resource record set that you can create, delete, or update by using
         * <code>ChangeResourceRecordSets</code>. </p> <p> <b>Change Propagation to Route
         * 53 DNS Servers</b> </p> <p>When you submit a
         * <code>ChangeResourceRecordSets</code> request, Route 53 propagates your changes
         * to all of the Route 53 authoritative DNS servers. While your changes are
         * propagating, <code>GetChange</code> returns a status of <code>PENDING</code>.
         * When propagation is complete, <code>GetChange</code> returns a status of
         * <code>INSYNC</code>. Changes generally propagate to all Route 53 name servers
         * within 60 seconds. For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetChange.html">GetChange</a>.</p>
         * <p> <b>Limits on ChangeResourceRecordSets Requests</b> </p> <p>For information
         * about the limits on a <code>ChangeResourceRecordSets</code> request, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a>
         * in the <i>Amazon Route 53 Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeResourceRecordSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ChangeResourceRecordSetsOutcome ChangeResourceRecordSets(const Model::ChangeResourceRecordSetsRequest& request) const;

        /**
         * A Callable wrapper for ChangeResourceRecordSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeResourceRecordSetsOutcomeCallable ChangeResourceRecordSetsCallable(const Model::ChangeResourceRecordSetsRequest& request) const;

        /**
         * An Async wrapper for ChangeResourceRecordSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeResourceRecordSetsAsync(const Model::ChangeResourceRecordSetsRequest& request, const ChangeResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Adds, edits, or deletes tags for a health check or a hosted zone.</p> <p>For
         * information about using tags for cost allocation, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>Billing and Cost Management User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ChangeTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ChangeTagsForResourceOutcome ChangeTagsForResource(const Model::ChangeTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ChangeTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ChangeTagsForResourceOutcomeCallable ChangeTagsForResourceCallable(const Model::ChangeTagsForResourceRequest& request) const;

        /**
         * An Async wrapper for ChangeTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ChangeTagsForResourceAsync(const Model::ChangeTagsForResourceRequest& request, const ChangeTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a CIDR collection in the current Amazon Web Services
         * account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateCidrCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateCidrCollectionOutcome CreateCidrCollection(const Model::CreateCidrCollectionRequest& request) const;

        /**
         * A Callable wrapper for CreateCidrCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateCidrCollectionOutcomeCallable CreateCidrCollectionCallable(const Model::CreateCidrCollectionRequest& request) const;

        /**
         * An Async wrapper for CreateCidrCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateCidrCollectionAsync(const Model::CreateCidrCollectionRequest& request, const CreateCidrCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new health check.</p> <p>For information about adding health checks
         * to resource record sets, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ResourceRecordSet.html#Route53-Type-ResourceRecordSet-HealthCheckId">HealthCheckId</a>
         * in <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ChangeResourceRecordSets.html">ChangeResourceRecordSets</a>.
         * </p> <p> <b>ELB Load Balancers</b> </p> <p>If you're registering EC2 instances
         * with an Elastic Load Balancing (ELB) load balancer, do not create Amazon Route
         * 53 health checks for the EC2 instances. When you register an EC2 instance with a
         * load balancer, you configure settings for an ELB health check, which performs a
         * similar function to a Route 53 health check.</p> <p> <b>Private Hosted Zones</b>
         * </p> <p>You can associate health checks with failover resource record sets in a
         * private hosted zone. Note the following:</p> <ul> <li> <p>Route 53 health
         * checkers are outside the VPC. To check the health of an endpoint within a VPC by
         * IP address, you must assign a public IP address to the instance in the VPC.</p>
         * </li> <li> <p>You can configure a health checker to check the health of an
         * external resource that the instance relies on, such as a database server.</p>
         * </li> <li> <p>You can create a CloudWatch metric, associate an alarm with the
         * metric, and then create a health check that is based on the state of the alarm.
         * For example, you might create a CloudWatch metric that checks the status of the
         * Amazon EC2 <code>StatusCheckFailed</code> metric, add an alarm to the metric,
         * and then create a health check that is based on the state of the alarm. For
         * information about creating CloudWatch metrics and alarms by using the CloudWatch
         * console, see the <a
         * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/DeveloperGuide/WhatIsCloudWatch.html">Amazon
         * CloudWatch User Guide</a>.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateHealthCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHealthCheckOutcome CreateHealthCheck(const Model::CreateHealthCheckRequest& request) const;

        /**
         * A Callable wrapper for CreateHealthCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHealthCheckOutcomeCallable CreateHealthCheckCallable(const Model::CreateHealthCheckRequest& request) const;

        /**
         * An Async wrapper for CreateHealthCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHealthCheckAsync(const Model::CreateHealthCheckRequest& request, const CreateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new public or private hosted zone. You create records in a public
         * hosted zone to define how you want to route traffic on the internet for a
         * domain, such as example.com, and its subdomains (apex.example.com,
         * acme.example.com). You create records in a private hosted zone to define how you
         * want to route traffic for a domain and its subdomains within one or more Amazon
         * Virtual Private Clouds (Amazon VPCs). </p>  <p>You can't convert a
         * public hosted zone to a private hosted zone or vice versa. Instead, you must
         * create a new hosted zone with the same name and create new resource record
         * sets.</p>  <p>For more information about charges for hosted zones,
         * see <a href="http://aws.amazon.com/route53/pricing/">Amazon Route 53
         * Pricing</a>.</p> <p>Note the following:</p> <ul> <li> <p>You can't create a
         * hosted zone for a top-level domain (TLD) such as .com.</p> </li> <li> <p>For
         * public hosted zones, Route 53 automatically creates a default SOA record and
         * four NS records for the zone. For more information about SOA and NS records, see
         * <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/SOA-NSrecords.html">NS
         * and SOA Records that Route 53 Creates for a Hosted Zone</a> in the <i>Amazon
         * Route 53 Developer Guide</i>.</p> <p>If you want to use the same name servers
         * for multiple public hosted zones, you can optionally associate a reusable
         * delegation set with the hosted zone. See the <code>DelegationSetId</code>
         * element.</p> </li> <li> <p>If your domain is registered with a registrar other
         * than Route 53, you must update the name servers with your registrar to make
         * Route 53 the DNS service for the domain. For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/MigratingDNS.html">Migrating
         * DNS Service for an Existing Domain to Amazon Route 53</a> in the <i>Amazon Route
         * 53 Developer Guide</i>. </p> </li> </ul> <p>When you submit a
         * <code>CreateHostedZone</code> request, the initial status of the hosted zone is
         * <code>PENDING</code>. For public hosted zones, this means that the NS and SOA
         * records are not yet available on all Route 53 DNS servers. When the NS and SOA
         * records are available, the status of the zone changes to
         * <code>INSYNC</code>.</p> <p>The <code>CreateHostedZone</code> request requires
         * the caller to have an <code>ec2:DescribeVpcs</code> permission.</p> 
         * <p>When creating private hosted zones, the Amazon VPC must belong to the same
         * partition where the hosted zone is created. A partition is a group of Amazon Web
         * Services Regions. Each Amazon Web Services account is scoped to one
         * partition.</p> <p>The following are the supported partitions:</p> <ul> <li> <p>
         * <code>aws</code> - Amazon Web Services Regions</p> </li> <li> <p>
         * <code>aws-cn</code> - China Regions</p> </li> <li> <p> <code>aws-us-gov</code> -
         * Amazon Web Services GovCloud (US) Region</p> </li> </ul> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Access
         * Management</a> in the <i>Amazon Web Services General Reference</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateHostedZone">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateHostedZoneOutcome CreateHostedZone(const Model::CreateHostedZoneRequest& request) const;

        /**
         * A Callable wrapper for CreateHostedZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateHostedZoneOutcomeCallable CreateHostedZoneCallable(const Model::CreateHostedZoneRequest& request) const;

        /**
         * An Async wrapper for CreateHostedZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateHostedZoneAsync(const Model::CreateHostedZoneRequest& request, const CreateHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new key-signing key (KSK) associated with a hosted zone. You can
         * only have two KSKs per hosted zone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateKeySigningKey">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateKeySigningKeyOutcome CreateKeySigningKey(const Model::CreateKeySigningKeyRequest& request) const;

        /**
         * A Callable wrapper for CreateKeySigningKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateKeySigningKeyOutcomeCallable CreateKeySigningKeyCallable(const Model::CreateKeySigningKeyRequest& request) const;

        /**
         * An Async wrapper for CreateKeySigningKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateKeySigningKeyAsync(const Model::CreateKeySigningKeyRequest& request, const CreateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a configuration for DNS query logging. After you create a query
         * logging configuration, Amazon Route 53 begins to publish log data to an Amazon
         * CloudWatch Logs log group.</p> <p>DNS query logs contain information about the
         * queries that Route 53 receives for a specified public hosted zone, such as the
         * following:</p> <ul> <li> <p>Route 53 edge location that responded to the DNS
         * query</p> </li> <li> <p>Domain or subdomain that was requested</p> </li> <li>
         * <p>DNS record type, such as A or AAAA</p> </li> <li> <p>DNS response code, such
         * as <code>NoError</code> or <code>ServFail</code> </p> </li> </ul> <dl> <dt>Log
         * Group and Resource Policy</dt> <dd> <p>Before you create a query logging
         * configuration, perform the following operations.</p>  <p>If you create a
         * query logging configuration using the Route 53 console, Route 53 performs these
         * operations automatically.</p>  <ol> <li> <p>Create a CloudWatch Logs log
         * group, and make note of the ARN, which you specify when you create a query
         * logging configuration. Note the following:</p> <ul> <li> <p>You must create the
         * log group in the us-east-1 region.</p> </li> <li> <p>You must use the same
         * Amazon Web Services account to create the log group and the hosted zone that you
         * want to configure query logging for.</p> </li> <li> <p>When you create log
         * groups for query logging, we recommend that you use a consistent prefix, for
         * example:</p> <p> <code>/aws/route53/<i>hosted zone name</i> </code> </p> <p>In
         * the next step, you'll create a resource policy, which controls access to one or
         * more log groups and the associated Amazon Web Services resources, such as Route
         * 53 hosted zones. There's a limit on the number of resource policies that you can
         * create, so we recommend that you use a consistent prefix so you can use the same
         * resource policy for all the log groups that you create for query logging.</p>
         * </li> </ul> </li> <li> <p>Create a CloudWatch Logs resource policy, and give it
         * the permissions that Route 53 needs to create log streams and to send query logs
         * to log streams. For the value of <code>Resource</code>, specify the ARN for the
         * log group that you created in the previous step. To use the same resource policy
         * for all the CloudWatch Logs log groups that you created for query logging
         * configurations, replace the hosted zone name with <code>*</code>, for
         * example:</p> <p>
         * <code>arn:aws:logs:us-east-1:123412341234:log-group:/aws/route53/ *</code> </p>
         * <p>To avoid the confused deputy problem, a security issue where an entity
         * without a permission for an action can coerce a more-privileged entity to
         * perform it, you can optionally limit the permissions that a service has to a
         * resource in a resource-based policy by supplying the following values:</p> <ul>
         * <li> <p>For <code>aws:SourceArn</code>, supply the hosted zone ARN used in
         * creating the query logging configuration. For example, <code>aws:SourceArn:
         * arn:aws:route53:::hostedzone/hosted zone ID</code>.</p> </li> <li> <p>For
         * <code>aws:SourceAccount</code>, supply the account ID for the account that
         * creates the query logging configuration. For example,
         * <code>aws:SourceAccount:111111111111</code>.</p> </li> </ul> <p>For more
         * information, see <a
         * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/confused-deputy.html">The
         * confused deputy problem</a> in the <i>Amazon Web Services IAM User
         * Guide</i>.</p>  <p>You can't use the CloudWatch console to create or edit
         * a resource policy. You must use the CloudWatch API, one of the Amazon Web
         * Services SDKs, or the CLI.</p>  </li> </ol> </dd> <dt>Log Streams and
         * Edge Locations</dt> <dd> <p>When Route 53 finishes creating the configuration
         * for DNS query logging, it does the following:</p> <ul> <li> <p>Creates a log
         * stream for an edge location the first time that the edge location responds to
         * DNS queries for the specified hosted zone. That log stream is used to log all
         * queries that Route 53 responds to for that edge location.</p> </li> <li>
         * <p>Begins to send query logs to the applicable log stream.</p> </li> </ul>
         * <p>The name of each log stream is in the following format:</p> <p> <code>
         * <i>hosted zone ID</i>/<i>edge location code</i> </code> </p> <p>The edge
         * location code is a three-letter code and an arbitrarily assigned number, for
         * example, DFW3. The three-letter code typically corresponds with the
         * International Air Transport Association airport code for an airport near the
         * edge location. (These abbreviations might change in the future.) For a list of
         * edge locations, see "The Route 53 Global Network" on the <a
         * href="http://aws.amazon.com/route53/details/">Route 53 Product Details</a>
         * page.</p> </dd> <dt>Queries That Are Logged</dt> <dd> <p>Query logs contain only
         * the queries that DNS resolvers forward to Route 53. If a DNS resolver has
         * already cached the response to a query (such as the IP address for a load
         * balancer for example.com), the resolver will continue to return the cached
         * response. It doesn't forward another query to Route 53 until the TTL for the
         * corresponding resource record set expires. Depending on how many DNS queries are
         * submitted for a resource record set, and depending on the TTL for that resource
         * record set, query logs might contain information about only one query out of
         * every several thousand queries that are submitted to DNS. For more information
         * about how DNS works, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/welcome-dns-service.html">Routing
         * Internet Traffic to Your Website or Web Application</a> in the <i>Amazon Route
         * 53 Developer Guide</i>.</p> </dd> <dt>Log File Format</dt> <dd> <p>For a list of
         * the values in each query log and the format of each value, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/query-logs.html">Logging
         * DNS Queries</a> in the <i>Amazon Route 53 Developer Guide</i>.</p> </dd>
         * <dt>Pricing</dt> <dd> <p>For information about charges for query logs, see <a
         * href="http://aws.amazon.com/cloudwatch/pricing/">Amazon CloudWatch
         * Pricing</a>.</p> </dd> <dt>How to Stop Logging</dt> <dd> <p>If you want Route 53
         * to stop sending query logs to CloudWatch Logs, delete the query logging
         * configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_DeleteQueryLoggingConfig.html">DeleteQueryLoggingConfig</a>.</p>
         * </dd> </dl><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateQueryLoggingConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateQueryLoggingConfigOutcome CreateQueryLoggingConfig(const Model::CreateQueryLoggingConfigRequest& request) const;

        /**
         * A Callable wrapper for CreateQueryLoggingConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateQueryLoggingConfigOutcomeCallable CreateQueryLoggingConfigCallable(const Model::CreateQueryLoggingConfigRequest& request) const;

        /**
         * An Async wrapper for CreateQueryLoggingConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateQueryLoggingConfigAsync(const Model::CreateQueryLoggingConfigRequest& request, const CreateQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a delegation set (a group of four name servers) that can be reused by
         * multiple hosted zones that were created by the same Amazon Web Services account.
         * </p> <p>You can also create a reusable delegation set that uses the four name
         * servers that are associated with an existing hosted zone. Specify the hosted
         * zone ID in the <code>CreateReusableDelegationSet</code> request.</p> 
         * <p>You can't associate a reusable delegation set with a private hosted zone.</p>
         *  <p>For information about using a reusable delegation set to configure
         * white label name servers, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/white-label-name-servers.html">Configuring
         * White Label Name Servers</a>.</p> <p>The process for migrating existing hosted
         * zones to use a reusable delegation set is comparable to the process for
         * configuring white label name servers. You need to perform the following
         * steps:</p> <ol> <li> <p>Create a reusable delegation set.</p> </li> <li>
         * <p>Recreate hosted zones, and reduce the TTL to 60 seconds or less.</p> </li>
         * <li> <p>Recreate resource record sets in the new hosted zones.</p> </li> <li>
         * <p>Change the registrar's name servers to use the name servers for the new
         * hosted zones.</p> </li> <li> <p>Monitor traffic for the website or
         * application.</p> </li> <li> <p>Change TTLs back to their original values.</p>
         * </li> </ol> <p>If you want to migrate existing hosted zones to use a reusable
         * delegation set, the existing hosted zones can't use any of the name servers that
         * are assigned to the reusable delegation set. If one or more hosted zones do use
         * one or more name servers that are assigned to the reusable delegation set, you
         * can do one of the following:</p> <ul> <li> <p>For small numbers of hosted
         * zones—up to a few hundred—it's relatively easy to create reusable delegation
         * sets until you get one that has four name servers that don't overlap with any of
         * the name servers in your hosted zones.</p> </li> <li> <p>For larger numbers of
         * hosted zones, the easiest solution is to use more than one reusable delegation
         * set.</p> </li> <li> <p>For larger numbers of hosted zones, you can also migrate
         * hosted zones that have overlapping name servers to hosted zones that don't have
         * overlapping name servers, then migrate the hosted zones again to use the
         * reusable delegation set.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateReusableDelegationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateReusableDelegationSetOutcome CreateReusableDelegationSet(const Model::CreateReusableDelegationSetRequest& request) const;

        /**
         * A Callable wrapper for CreateReusableDelegationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateReusableDelegationSetOutcomeCallable CreateReusableDelegationSetCallable(const Model::CreateReusableDelegationSetRequest& request) const;

        /**
         * An Async wrapper for CreateReusableDelegationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateReusableDelegationSetAsync(const Model::CreateReusableDelegationSetRequest& request, const CreateReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a traffic policy, which you use to create multiple DNS resource
         * record sets for one domain name (such as example.com) or one subdomain name
         * (such as www.example.com).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateTrafficPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficPolicyOutcome CreateTrafficPolicy(const Model::CreateTrafficPolicyRequest& request) const;

        /**
         * A Callable wrapper for CreateTrafficPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficPolicyOutcomeCallable CreateTrafficPolicyCallable(const Model::CreateTrafficPolicyRequest& request) const;

        /**
         * An Async wrapper for CreateTrafficPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficPolicyAsync(const Model::CreateTrafficPolicyRequest& request, const CreateTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates resource record sets in a specified hosted zone based on the settings
         * in a specified traffic policy version. In addition,
         * <code>CreateTrafficPolicyInstance</code> associates the resource record sets
         * with a specified domain name (such as example.com) or subdomain name (such as
         * www.example.com). Amazon Route 53 responds to DNS queries for the domain or
         * subdomain name by using the resource record sets that
         * <code>CreateTrafficPolicyInstance</code> created.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateTrafficPolicyInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficPolicyInstanceOutcome CreateTrafficPolicyInstance(const Model::CreateTrafficPolicyInstanceRequest& request) const;

        /**
         * A Callable wrapper for CreateTrafficPolicyInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficPolicyInstanceOutcomeCallable CreateTrafficPolicyInstanceCallable(const Model::CreateTrafficPolicyInstanceRequest& request) const;

        /**
         * An Async wrapper for CreateTrafficPolicyInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficPolicyInstanceAsync(const Model::CreateTrafficPolicyInstanceRequest& request, const CreateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new version of an existing traffic policy. When you create a new
         * version of a traffic policy, you specify the ID of the traffic policy that you
         * want to update and a JSON-formatted document that describes the new version. You
         * use traffic policies to create multiple DNS resource record sets for one domain
         * name (such as example.com) or one subdomain name (such as www.example.com). You
         * can create a maximum of 1000 versions of a traffic policy. If you reach the
         * limit and need to create another version, you'll need to start a new traffic
         * policy.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateTrafficPolicyVersion">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateTrafficPolicyVersionOutcome CreateTrafficPolicyVersion(const Model::CreateTrafficPolicyVersionRequest& request) const;

        /**
         * A Callable wrapper for CreateTrafficPolicyVersion that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateTrafficPolicyVersionOutcomeCallable CreateTrafficPolicyVersionCallable(const Model::CreateTrafficPolicyVersionRequest& request) const;

        /**
         * An Async wrapper for CreateTrafficPolicyVersion that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateTrafficPolicyVersionAsync(const Model::CreateTrafficPolicyVersionRequest& request, const CreateTrafficPolicyVersionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Authorizes the Amazon Web Services account that created a specified VPC to
         * submit an <code>AssociateVPCWithHostedZone</code> request to associate the VPC
         * with a specified hosted zone that was created by a different account. To submit
         * a <code>CreateVPCAssociationAuthorization</code> request, you must use the
         * account that created the hosted zone. After you authorize the association, use
         * the account that created the VPC to submit an
         * <code>AssociateVPCWithHostedZone</code> request.</p>  <p>If you want to
         * associate multiple VPCs that you created by using one account with a hosted zone
         * that you created by using a different account, you must submit one authorization
         * request for each VPC.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/CreateVPCAssociationAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVPCAssociationAuthorizationOutcome CreateVPCAssociationAuthorization(const Model::CreateVPCAssociationAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for CreateVPCAssociationAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVPCAssociationAuthorizationOutcomeCallable CreateVPCAssociationAuthorizationCallable(const Model::CreateVPCAssociationAuthorizationRequest& request) const;

        /**
         * An Async wrapper for CreateVPCAssociationAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVPCAssociationAuthorizationAsync(const Model::CreateVPCAssociationAuthorizationRequest& request, const CreateVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deactivates a key-signing key (KSK) so that it will not be used for signing
         * by DNSSEC. This operation changes the KSK status to
         * <code>INACTIVE</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeactivateKeySigningKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeactivateKeySigningKeyOutcome DeactivateKeySigningKey(const Model::DeactivateKeySigningKeyRequest& request) const;

        /**
         * A Callable wrapper for DeactivateKeySigningKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeactivateKeySigningKeyOutcomeCallable DeactivateKeySigningKeyCallable(const Model::DeactivateKeySigningKeyRequest& request) const;

        /**
         * An Async wrapper for DeactivateKeySigningKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeactivateKeySigningKeyAsync(const Model::DeactivateKeySigningKeyRequest& request, const DeactivateKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a CIDR collection in the current Amazon Web Services account. The
         * collection must be empty before it can be deleted.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteCidrCollection">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteCidrCollectionOutcome DeleteCidrCollection(const Model::DeleteCidrCollectionRequest& request) const;

        /**
         * A Callable wrapper for DeleteCidrCollection that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteCidrCollectionOutcomeCallable DeleteCidrCollectionCallable(const Model::DeleteCidrCollectionRequest& request) const;

        /**
         * An Async wrapper for DeleteCidrCollection that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteCidrCollectionAsync(const Model::DeleteCidrCollectionRequest& request, const DeleteCidrCollectionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a health check.</p>  <p>Amazon Route 53 does not prevent
         * you from deleting a health check even if the health check is associated with one
         * or more resource record sets. If you delete a health check and you don't update
         * the associated resource record sets, the future status of the health check can't
         * be predicted and may change. This will affect the routing of DNS queries for
         * your DNS failover configuration. For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-creating-deleting.html#health-checks-deleting.html">Replacing
         * and Deleting Health Checks</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p>  <p>If you're using Cloud Map and you configured
         * Cloud Map to create a Route 53 health check when you register an instance, you
         * can't use the Route 53 <code>DeleteHealthCheck</code> command to delete the
         * health check. The health check is deleted automatically when you deregister the
         * instance; there can be a delay of several hours before the health check is
         * deleted from Route 53. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteHealthCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHealthCheckOutcome DeleteHealthCheck(const Model::DeleteHealthCheckRequest& request) const;

        /**
         * A Callable wrapper for DeleteHealthCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHealthCheckOutcomeCallable DeleteHealthCheckCallable(const Model::DeleteHealthCheckRequest& request) const;

        /**
         * An Async wrapper for DeleteHealthCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHealthCheckAsync(const Model::DeleteHealthCheckRequest& request, const DeleteHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a hosted zone.</p> <p>If the hosted zone was created by another
         * service, such as Cloud Map, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DeleteHostedZone.html#delete-public-hosted-zone-created-by-another-service">Deleting
         * Public Hosted Zones That Were Created by Another Service</a> in the <i>Amazon
         * Route 53 Developer Guide</i> for information about how to delete it. (The
         * process is the same for public and private hosted zones that were created by
         * another service.)</p> <p>If you want to keep your domain registration but you
         * want to stop routing internet traffic to your website or web application, we
         * recommend that you delete resource record sets in the hosted zone instead of
         * deleting the hosted zone.</p>  <p>If you delete a hosted zone, you
         * can't undelete it. You must create a new hosted zone and update the name servers
         * for your domain registration, which can require up to 48 hours to take effect.
         * (If you delegated responsibility for a subdomain to a hosted zone and you delete
         * the child hosted zone, you must update the name servers in the parent hosted
         * zone.) In addition, if you delete a hosted zone, someone could hijack the domain
         * and route traffic to their own resources using your domain name.</p>
         *  <p>If you want to avoid the monthly charge for the hosted zone, you
         * can transfer DNS service for the domain to a free DNS service. When you transfer
         * DNS service, you have to update the name servers for the domain registration. If
         * the domain is registered with Route 53, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_domains_UpdateDomainNameservers.html">UpdateDomainNameservers</a>
         * for information about how to replace Route 53 name servers with name servers for
         * the new DNS service. If the domain is registered with another registrar, use the
         * method provided by the registrar to update name servers for the domain
         * registration. For more information, perform an internet search on "free DNS
         * service."</p> <p>You can delete a hosted zone only if it contains only the
         * default SOA record and NS resource record sets. If the hosted zone contains
         * other resource record sets, you must delete them before you can delete the
         * hosted zone. If you try to delete a hosted zone that contains other resource
         * record sets, the request fails, and Route 53 returns a
         * <code>HostedZoneNotEmpty</code> error. For information about deleting records
         * from your hosted zone, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ChangeResourceRecordSets.html">ChangeResourceRecordSets</a>.</p>
         * <p>To verify that the hosted zone has been deleted, do one of the following:</p>
         * <ul> <li> <p>Use the <code>GetHostedZone</code> action to request information
         * about the hosted zone.</p> </li> <li> <p>Use the <code>ListHostedZones</code>
         * action to get a list of the hosted zones associated with the current Amazon Web
         * Services account.</p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteHostedZone">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteHostedZoneOutcome DeleteHostedZone(const Model::DeleteHostedZoneRequest& request) const;

        /**
         * A Callable wrapper for DeleteHostedZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteHostedZoneOutcomeCallable DeleteHostedZoneCallable(const Model::DeleteHostedZoneRequest& request) const;

        /**
         * An Async wrapper for DeleteHostedZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteHostedZoneAsync(const Model::DeleteHostedZoneRequest& request, const DeleteHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a key-signing key (KSK). Before you can delete a KSK, you must
         * deactivate it. The KSK must be deactivated before you can delete it regardless
         * of whether the hosted zone is enabled for DNSSEC signing.</p> <p>You can use <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_DeactivateKeySigningKey.html">DeactivateKeySigningKey</a>
         * to deactivate the key before you delete it.</p> <p>Use <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetDNSSEC.html">GetDNSSEC</a>
         * to verify that the KSK is in an <code>INACTIVE</code> status.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteKeySigningKey">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteKeySigningKeyOutcome DeleteKeySigningKey(const Model::DeleteKeySigningKeyRequest& request) const;

        /**
         * A Callable wrapper for DeleteKeySigningKey that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteKeySigningKeyOutcomeCallable DeleteKeySigningKeyCallable(const Model::DeleteKeySigningKeyRequest& request) const;

        /**
         * An Async wrapper for DeleteKeySigningKey that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteKeySigningKeyAsync(const Model::DeleteKeySigningKeyRequest& request, const DeleteKeySigningKeyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a configuration for DNS query logging. If you delete a configuration,
         * Amazon Route 53 stops sending query logs to CloudWatch Logs. Route 53 doesn't
         * delete any logs that are already in CloudWatch Logs.</p> <p>For more information
         * about DNS query logs, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateQueryLoggingConfig.html">CreateQueryLoggingConfig</a>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteQueryLoggingConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteQueryLoggingConfigOutcome DeleteQueryLoggingConfig(const Model::DeleteQueryLoggingConfigRequest& request) const;

        /**
         * A Callable wrapper for DeleteQueryLoggingConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteQueryLoggingConfigOutcomeCallable DeleteQueryLoggingConfigCallable(const Model::DeleteQueryLoggingConfigRequest& request) const;

        /**
         * An Async wrapper for DeleteQueryLoggingConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteQueryLoggingConfigAsync(const Model::DeleteQueryLoggingConfigRequest& request, const DeleteQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a reusable delegation set.</p>  <p>You can delete a
         * reusable delegation set only if it isn't associated with any hosted zones.</p>
         *  <p>To verify that the reusable delegation set is not associated
         * with any hosted zones, submit a <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetReusableDelegationSet.html">GetReusableDelegationSet</a>
         * request and specify the ID of the reusable delegation set that you want to
         * delete.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteReusableDelegationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteReusableDelegationSetOutcome DeleteReusableDelegationSet(const Model::DeleteReusableDelegationSetRequest& request) const;

        /**
         * A Callable wrapper for DeleteReusableDelegationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteReusableDelegationSetOutcomeCallable DeleteReusableDelegationSetCallable(const Model::DeleteReusableDelegationSetRequest& request) const;

        /**
         * An Async wrapper for DeleteReusableDelegationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteReusableDelegationSetAsync(const Model::DeleteReusableDelegationSetRequest& request, const DeleteReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a traffic policy.</p> <p>When you delete a traffic policy, Route 53
         * sets a flag on the policy to indicate that it has been deleted. However, Route
         * 53 never fully deletes the traffic policy. Note the following:</p> <ul> <li>
         * <p>Deleted traffic policies aren't listed if you run <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListTrafficPolicies.html">ListTrafficPolicies</a>.</p>
         * </li> <li> <p> There's no way to get a list of deleted policies.</p> </li> <li>
         * <p>If you retain the ID of the policy, you can get information about the policy,
         * including the traffic policy document, by running <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GetTrafficPolicy.html">GetTrafficPolicy</a>.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteTrafficPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficPolicyOutcome DeleteTrafficPolicy(const Model::DeleteTrafficPolicyRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrafficPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrafficPolicyOutcomeCallable DeleteTrafficPolicyCallable(const Model::DeleteTrafficPolicyRequest& request) const;

        /**
         * An Async wrapper for DeleteTrafficPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrafficPolicyAsync(const Model::DeleteTrafficPolicyRequest& request, const DeleteTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes a traffic policy instance and all of the resource record sets that
         * Amazon Route 53 created when you created the instance.</p>  <p>In the
         * Route 53 console, traffic policy instances are known as policy records.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteTrafficPolicyInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteTrafficPolicyInstanceOutcome DeleteTrafficPolicyInstance(const Model::DeleteTrafficPolicyInstanceRequest& request) const;

        /**
         * A Callable wrapper for DeleteTrafficPolicyInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteTrafficPolicyInstanceOutcomeCallable DeleteTrafficPolicyInstanceCallable(const Model::DeleteTrafficPolicyInstanceRequest& request) const;

        /**
         * An Async wrapper for DeleteTrafficPolicyInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteTrafficPolicyInstanceAsync(const Model::DeleteTrafficPolicyInstanceRequest& request, const DeleteTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Removes authorization to submit an <code>AssociateVPCWithHostedZone</code>
         * request to associate a specified VPC with a hosted zone that was created by a
         * different account. You must use the account that created the hosted zone to
         * submit a <code>DeleteVPCAssociationAuthorization</code> request.</p> 
         * <p>Sending this request only prevents the Amazon Web Services account that
         * created the VPC from associating the VPC with the Amazon Route 53 hosted zone in
         * the future. If the VPC is already associated with the hosted zone,
         * <code>DeleteVPCAssociationAuthorization</code> won't disassociate the VPC from
         * the hosted zone. If you want to delete an existing association, use
         * <code>DisassociateVPCFromHostedZone</code>.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DeleteVPCAssociationAuthorization">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVPCAssociationAuthorizationOutcome DeleteVPCAssociationAuthorization(const Model::DeleteVPCAssociationAuthorizationRequest& request) const;

        /**
         * A Callable wrapper for DeleteVPCAssociationAuthorization that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVPCAssociationAuthorizationOutcomeCallable DeleteVPCAssociationAuthorizationCallable(const Model::DeleteVPCAssociationAuthorizationRequest& request) const;

        /**
         * An Async wrapper for DeleteVPCAssociationAuthorization that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVPCAssociationAuthorizationAsync(const Model::DeleteVPCAssociationAuthorizationRequest& request, const DeleteVPCAssociationAuthorizationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disables DNSSEC signing in a specific hosted zone. This action does not
         * deactivate any key-signing keys (KSKs) that are active in the hosted
         * zone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DisableHostedZoneDNSSEC">AWS
         * API Reference</a></p>
         */
        virtual Model::DisableHostedZoneDNSSECOutcome DisableHostedZoneDNSSEC(const Model::DisableHostedZoneDNSSECRequest& request) const;

        /**
         * A Callable wrapper for DisableHostedZoneDNSSEC that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisableHostedZoneDNSSECOutcomeCallable DisableHostedZoneDNSSECCallable(const Model::DisableHostedZoneDNSSECRequest& request) const;

        /**
         * An Async wrapper for DisableHostedZoneDNSSEC that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisableHostedZoneDNSSECAsync(const Model::DisableHostedZoneDNSSECRequest& request, const DisableHostedZoneDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Disassociates an Amazon Virtual Private Cloud (Amazon VPC) from an Amazon
         * Route 53 private hosted zone. Note the following:</p> <ul> <li> <p>You can't
         * disassociate the last Amazon VPC from a private hosted zone.</p> </li> <li>
         * <p>You can't convert a private hosted zone into a public hosted zone.</p> </li>
         * <li> <p>You can submit a <code>DisassociateVPCFromHostedZone</code> request
         * using either the account that created the hosted zone or the account that
         * created the Amazon VPC.</p> </li> <li> <p>Some services, such as Cloud Map and
         * Amazon Elastic File System (Amazon EFS) automatically create hosted zones and
         * associate VPCs with the hosted zones. A service can create a hosted zone using
         * your account or using its own account. You can disassociate a VPC from a hosted
         * zone only if the service created the hosted zone using your account.</p> <p>When
         * you run <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_ListHostedZonesByVPC.html">DisassociateVPCFromHostedZone</a>,
         * if the hosted zone has a value for <code>OwningAccount</code>, you can use
         * <code>DisassociateVPCFromHostedZone</code>. If the hosted zone has a value for
         * <code>OwningService</code>, you can't use
         * <code>DisassociateVPCFromHostedZone</code>.</p> </li> </ul>  <p>When
         * revoking access, the hosted zone and the Amazon VPC must belong to the same
         * partition. A partition is a group of Amazon Web Services Regions. Each Amazon
         * Web Services account is scoped to one partition.</p> <p>The following are the
         * supported partitions:</p> <ul> <li> <p> <code>aws</code> - Amazon Web Services
         * Regions</p> </li> <li> <p> <code>aws-cn</code> - China Regions</p> </li> <li>
         * <p> <code>aws-us-gov</code> - Amazon Web Services GovCloud (US) Region</p> </li>
         * </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Access
         * Management</a> in the <i>Amazon Web Services General Reference</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/DisassociateVPCFromHostedZone">AWS
         * API Reference</a></p>
         */
        virtual Model::DisassociateVPCFromHostedZoneOutcome DisassociateVPCFromHostedZone(const Model::DisassociateVPCFromHostedZoneRequest& request) const;

        /**
         * A Callable wrapper for DisassociateVPCFromHostedZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DisassociateVPCFromHostedZoneOutcomeCallable DisassociateVPCFromHostedZoneCallable(const Model::DisassociateVPCFromHostedZoneRequest& request) const;

        /**
         * An Async wrapper for DisassociateVPCFromHostedZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DisassociateVPCFromHostedZoneAsync(const Model::DisassociateVPCFromHostedZoneRequest& request, const DisassociateVPCFromHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Enables DNSSEC signing in a specific hosted zone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/EnableHostedZoneDNSSEC">AWS
         * API Reference</a></p>
         */
        virtual Model::EnableHostedZoneDNSSECOutcome EnableHostedZoneDNSSEC(const Model::EnableHostedZoneDNSSECRequest& request) const;

        /**
         * A Callable wrapper for EnableHostedZoneDNSSEC that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::EnableHostedZoneDNSSECOutcomeCallable EnableHostedZoneDNSSECCallable(const Model::EnableHostedZoneDNSSECRequest& request) const;

        /**
         * An Async wrapper for EnableHostedZoneDNSSEC that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void EnableHostedZoneDNSSECAsync(const Model::EnableHostedZoneDNSSECRequest& request, const EnableHostedZoneDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified limit for the current account, for example, the maximum
         * number of health checks that you can create using the account.</p> <p>For the
         * default limit, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a>
         * in the <i>Amazon Route 53 Developer Guide</i>. To request a higher limit, <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase&amp;limitType=service-code-route53">open
         * a case</a>.</p>  <p>You can also view account limits in Amazon Web
         * Services Trusted Advisor. Sign in to the Amazon Web Services Management Console
         * and open the Trusted Advisor console at <a
         * href="https://console.aws.amazon.com/trustedadvisor">https://console.aws.amazon.com/trustedadvisor/</a>.
         * Then choose <b>Service limits</b> in the navigation pane.</p> <p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetAccountLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetAccountLimitOutcome GetAccountLimit(const Model::GetAccountLimitRequest& request) const;

        /**
         * A Callable wrapper for GetAccountLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetAccountLimitOutcomeCallable GetAccountLimitCallable(const Model::GetAccountLimitRequest& request) const;

        /**
         * An Async wrapper for GetAccountLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetAccountLimitAsync(const Model::GetAccountLimitRequest& request, const GetAccountLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns the current status of a change batch request. The status is one of
         * the following values:</p> <ul> <li> <p> <code>PENDING</code> indicates that the
         * changes in this request have not propagated to all Amazon Route 53 DNS servers.
         * This is the initial status of all change batch requests.</p> </li> <li> <p>
         * <code>INSYNC</code> indicates that the changes have propagated to all Route 53
         * DNS servers. </p> </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetChange">AWS
         * API Reference</a></p>
         */
        virtual Model::GetChangeOutcome GetChange(const Model::GetChangeRequest& request) const;

        /**
         * A Callable wrapper for GetChange that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetChangeOutcomeCallable GetChangeCallable(const Model::GetChangeRequest& request) const;

        /**
         * An Async wrapper for GetChange that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetChangeAsync(const Model::GetChangeRequest& request, const GetChangeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Route 53 does not perform authorization for this API because it retrieves
         * information that is already available to the public.</p>  <p>
         * <code>GetCheckerIpRanges</code> still works, but we recommend that you download
         * ip-ranges.json, which includes IP address ranges for all Amazon Web Services
         * services. For more information, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/route-53-ip-addresses.html">IP
         * Address Ranges of Amazon Route 53 Servers</a> in the <i>Amazon Route 53
         * Developer Guide</i>.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetCheckerIpRanges">AWS
         * API Reference</a></p>
         */
        virtual Model::GetCheckerIpRangesOutcome GetCheckerIpRanges(const Model::GetCheckerIpRangesRequest& request) const;

        /**
         * A Callable wrapper for GetCheckerIpRanges that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetCheckerIpRangesOutcomeCallable GetCheckerIpRangesCallable(const Model::GetCheckerIpRangesRequest& request) const;

        /**
         * An Async wrapper for GetCheckerIpRanges that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetCheckerIpRangesAsync(const Model::GetCheckerIpRangesRequest& request, const GetCheckerIpRangesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns information about DNSSEC for a specific hosted zone, including the
         * key-signing keys (KSKs) in the hosted zone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetDNSSEC">AWS
         * API Reference</a></p>
         */
        virtual Model::GetDNSSECOutcome GetDNSSEC(const Model::GetDNSSECRequest& request) const;

        /**
         * A Callable wrapper for GetDNSSEC that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetDNSSECOutcomeCallable GetDNSSECCallable(const Model::GetDNSSECRequest& request) const;

        /**
         * An Async wrapper for GetDNSSEC that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetDNSSECAsync(const Model::GetDNSSECRequest& request, const GetDNSSECResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about whether a specified geographic location is supported
         * for Amazon Route 53 geolocation resource record sets.</p> <p>Route 53 does not
         * perform authorization for this API because it retrieves information that is
         * already available to the public.</p> <p>Use the following syntax to determine
         * whether a continent is supported for geolocation:</p> <p> <code>GET
         * /2013-04-01/geolocation?continentcode=<i>two-letter abbreviation for a
         * continent</i> </code> </p> <p>Use the following syntax to determine whether a
         * country is supported for geolocation:</p> <p> <code>GET
         * /2013-04-01/geolocation?countrycode=<i>two-character country code</i> </code>
         * </p> <p>Use the following syntax to determine whether a subdivision of a country
         * is supported for geolocation:</p> <p> <code>GET
         * /2013-04-01/geolocation?countrycode=<i>two-character country
         * code</i>&amp;subdivisioncode=<i>subdivision code</i> </code> </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetGeoLocation">AWS
         * API Reference</a></p>
         */
        virtual Model::GetGeoLocationOutcome GetGeoLocation(const Model::GetGeoLocationRequest& request) const;

        /**
         * A Callable wrapper for GetGeoLocation that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetGeoLocationOutcomeCallable GetGeoLocationCallable(const Model::GetGeoLocationRequest& request) const;

        /**
         * An Async wrapper for GetGeoLocation that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetGeoLocationAsync(const Model::GetGeoLocationRequest& request, const GetGeoLocationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified health check.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHealthCheckOutcome GetHealthCheck(const Model::GetHealthCheckRequest& request) const;

        /**
         * A Callable wrapper for GetHealthCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckOutcomeCallable GetHealthCheckCallable(const Model::GetHealthCheckRequest& request) const;

        /**
         * An Async wrapper for GetHealthCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckAsync(const Model::GetHealthCheckRequest& request, const GetHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the number of health checks that are associated with the current
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHealthCheckCountOutcome GetHealthCheckCount(const Model::GetHealthCheckCountRequest& request) const;

        /**
         * A Callable wrapper for GetHealthCheckCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckCountOutcomeCallable GetHealthCheckCountCallable(const Model::GetHealthCheckCountRequest& request) const;

        /**
         * An Async wrapper for GetHealthCheckCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckCountAsync(const Model::GetHealthCheckCountRequest& request, const GetHealthCheckCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the reason that a specified health check failed most
         * recently.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckLastFailureReason">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHealthCheckLastFailureReasonOutcome GetHealthCheckLastFailureReason(const Model::GetHealthCheckLastFailureReasonRequest& request) const;

        /**
         * A Callable wrapper for GetHealthCheckLastFailureReason that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckLastFailureReasonOutcomeCallable GetHealthCheckLastFailureReasonCallable(const Model::GetHealthCheckLastFailureReasonRequest& request) const;

        /**
         * An Async wrapper for GetHealthCheckLastFailureReason that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckLastFailureReasonAsync(const Model::GetHealthCheckLastFailureReasonRequest& request, const GetHealthCheckLastFailureReasonResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets status of a specified health check. </p>  <p>This API is
         * intended for use during development to diagnose behavior. It doesn’t support
         * production use-cases with high query rates that require immediate and actionable
         * responses.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHealthCheckStatus">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHealthCheckStatusOutcome GetHealthCheckStatus(const Model::GetHealthCheckStatusRequest& request) const;

        /**
         * A Callable wrapper for GetHealthCheckStatus that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHealthCheckStatusOutcomeCallable GetHealthCheckStatusCallable(const Model::GetHealthCheckStatusRequest& request) const;

        /**
         * An Async wrapper for GetHealthCheckStatus that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHealthCheckStatusAsync(const Model::GetHealthCheckStatusRequest& request, const GetHealthCheckStatusResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified hosted zone including the four name
         * servers assigned to the hosted zone.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHostedZone">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHostedZoneOutcome GetHostedZone(const Model::GetHostedZoneRequest& request) const;

        /**
         * A Callable wrapper for GetHostedZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostedZoneOutcomeCallable GetHostedZoneCallable(const Model::GetHostedZoneRequest& request) const;

        /**
         * An Async wrapper for GetHostedZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostedZoneAsync(const Model::GetHostedZoneRequest& request, const GetHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves the number of hosted zones that are associated with the current
         * Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHostedZoneCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHostedZoneCountOutcome GetHostedZoneCount(const Model::GetHostedZoneCountRequest& request) const;

        /**
         * A Callable wrapper for GetHostedZoneCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostedZoneCountOutcomeCallable GetHostedZoneCountCallable(const Model::GetHostedZoneCountRequest& request) const;

        /**
         * An Async wrapper for GetHostedZoneCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostedZoneCountAsync(const Model::GetHostedZoneCountRequest& request, const GetHostedZoneCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the specified limit for a specified hosted zone, for example, the
         * maximum number of records that you can create in the hosted zone. </p> <p>For
         * the default limit, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a>
         * in the <i>Amazon Route 53 Developer Guide</i>. To request a higher limit, <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase&amp;limitType=service-code-route53">open
         * a case</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetHostedZoneLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetHostedZoneLimitOutcome GetHostedZoneLimit(const Model::GetHostedZoneLimitRequest& request) const;

        /**
         * A Callable wrapper for GetHostedZoneLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetHostedZoneLimitOutcomeCallable GetHostedZoneLimitCallable(const Model::GetHostedZoneLimitRequest& request) const;

        /**
         * An Async wrapper for GetHostedZoneLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetHostedZoneLimitAsync(const Model::GetHostedZoneLimitRequest& request, const GetHostedZoneLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified configuration for DNS query logging.</p>
         * <p>For more information about DNS query logs, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateQueryLoggingConfig.html">CreateQueryLoggingConfig</a>
         * and <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/query-logs.html">Logging
         * DNS Queries</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetQueryLoggingConfig">AWS
         * API Reference</a></p>
         */
        virtual Model::GetQueryLoggingConfigOutcome GetQueryLoggingConfig(const Model::GetQueryLoggingConfigRequest& request) const;

        /**
         * A Callable wrapper for GetQueryLoggingConfig that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetQueryLoggingConfigOutcomeCallable GetQueryLoggingConfigCallable(const Model::GetQueryLoggingConfigRequest& request) const;

        /**
         * An Async wrapper for GetQueryLoggingConfig that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetQueryLoggingConfigAsync(const Model::GetQueryLoggingConfigRequest& request, const GetQueryLoggingConfigResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves information about a specified reusable delegation set, including
         * the four name servers that are assigned to the delegation set.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetReusableDelegationSet">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReusableDelegationSetOutcome GetReusableDelegationSet(const Model::GetReusableDelegationSetRequest& request) const;

        /**
         * A Callable wrapper for GetReusableDelegationSet that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReusableDelegationSetOutcomeCallable GetReusableDelegationSetCallable(const Model::GetReusableDelegationSetRequest& request) const;

        /**
         * An Async wrapper for GetReusableDelegationSet that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReusableDelegationSetAsync(const Model::GetReusableDelegationSetRequest& request, const GetReusableDelegationSetResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the maximum number of hosted zones that you can associate with the
         * specified reusable delegation set.</p> <p>For the default limit, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DNSLimitations.html">Limits</a>
         * in the <i>Amazon Route 53 Developer Guide</i>. To request a higher limit, <a
         * href="https://console.aws.amazon.com/support/home#/case/create?issueType=service-limit-increase&amp;limitType=service-code-route53">open
         * a case</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetReusableDelegationSetLimit">AWS
         * API Reference</a></p>
         */
        virtual Model::GetReusableDelegationSetLimitOutcome GetReusableDelegationSetLimit(const Model::GetReusableDelegationSetLimitRequest& request) const;

        /**
         * A Callable wrapper for GetReusableDelegationSetLimit that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetReusableDelegationSetLimitOutcomeCallable GetReusableDelegationSetLimitCallable(const Model::GetReusableDelegationSetLimitRequest& request) const;

        /**
         * An Async wrapper for GetReusableDelegationSetLimit that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetReusableDelegationSetLimitAsync(const Model::GetReusableDelegationSetLimitRequest& request, const GetReusableDelegationSetLimitResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specific traffic policy version.</p> <p>For
         * information about how of deleting a traffic policy affects the response from
         * <code>GetTrafficPolicy</code>, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_DeleteTrafficPolicy.html">DeleteTrafficPolicy</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetTrafficPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrafficPolicyOutcome GetTrafficPolicy(const Model::GetTrafficPolicyRequest& request) const;

        /**
         * A Callable wrapper for GetTrafficPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrafficPolicyOutcomeCallable GetTrafficPolicyCallable(const Model::GetTrafficPolicyRequest& request) const;

        /**
         * An Async wrapper for GetTrafficPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrafficPolicyAsync(const Model::GetTrafficPolicyRequest& request, const GetTrafficPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about a specified traffic policy instance.</p> 
         * <p>After you submit a <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p>   <p>In the Route 53 console, traffic policy
         * instances are known as policy records.</p> <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetTrafficPolicyInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrafficPolicyInstanceOutcome GetTrafficPolicyInstance(const Model::GetTrafficPolicyInstanceRequest& request) const;

        /**
         * A Callable wrapper for GetTrafficPolicyInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrafficPolicyInstanceOutcomeCallable GetTrafficPolicyInstanceCallable(const Model::GetTrafficPolicyInstanceRequest& request) const;

        /**
         * An Async wrapper for GetTrafficPolicyInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrafficPolicyInstanceAsync(const Model::GetTrafficPolicyInstanceRequest& request, const GetTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the number of traffic policy instances that are associated with the
         * current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/GetTrafficPolicyInstanceCount">AWS
         * API Reference</a></p>
         */
        virtual Model::GetTrafficPolicyInstanceCountOutcome GetTrafficPolicyInstanceCount(const Model::GetTrafficPolicyInstanceCountRequest& request) const;

        /**
         * A Callable wrapper for GetTrafficPolicyInstanceCount that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::GetTrafficPolicyInstanceCountOutcomeCallable GetTrafficPolicyInstanceCountCallable(const Model::GetTrafficPolicyInstanceCountRequest& request) const;

        /**
         * An Async wrapper for GetTrafficPolicyInstanceCount that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void GetTrafficPolicyInstanceCountAsync(const Model::GetTrafficPolicyInstanceCountRequest& request, const GetTrafficPolicyInstanceCountResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of location objects and their CIDR
         * blocks.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListCidrBlocks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCidrBlocksOutcome ListCidrBlocks(const Model::ListCidrBlocksRequest& request) const;

        /**
         * A Callable wrapper for ListCidrBlocks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCidrBlocksOutcomeCallable ListCidrBlocksCallable(const Model::ListCidrBlocksRequest& request) const;

        /**
         * An Async wrapper for ListCidrBlocks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCidrBlocksAsync(const Model::ListCidrBlocksRequest& request, const ListCidrBlocksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of CIDR collections in the Amazon Web Services
         * account (metadata only).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListCidrCollections">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCidrCollectionsOutcome ListCidrCollections(const Model::ListCidrCollectionsRequest& request) const;

        /**
         * A Callable wrapper for ListCidrCollections that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCidrCollectionsOutcomeCallable ListCidrCollectionsCallable(const Model::ListCidrCollectionsRequest& request) const;

        /**
         * An Async wrapper for ListCidrCollections that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCidrCollectionsAsync(const Model::ListCidrCollectionsRequest& request, const ListCidrCollectionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a paginated list of CIDR locations for the given collection (metadata
         * only, does not include CIDR blocks).</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListCidrLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListCidrLocationsOutcome ListCidrLocations(const Model::ListCidrLocationsRequest& request) const;

        /**
         * A Callable wrapper for ListCidrLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListCidrLocationsOutcomeCallable ListCidrLocationsCallable(const Model::ListCidrLocationsRequest& request) const;

        /**
         * An Async wrapper for ListCidrLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListCidrLocationsAsync(const Model::ListCidrLocationsRequest& request, const ListCidrLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of supported geographic locations.</p> <p>Countries are
         * listed first, and continents are listed last. If Amazon Route 53 supports
         * subdivisions for a country (for example, states or provinces), the subdivisions
         * for that country are listed in alphabetical order immediately after the
         * corresponding country.</p> <p>Route 53 does not perform authorization for this
         * API because it retrieves information that is already available to the
         * public.</p> <p>For a list of supported geolocation codes, see the <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_GeoLocation.html">GeoLocation</a>
         * data type.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListGeoLocations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListGeoLocationsOutcome ListGeoLocations(const Model::ListGeoLocationsRequest& request) const;

        /**
         * A Callable wrapper for ListGeoLocations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListGeoLocationsOutcomeCallable ListGeoLocationsCallable(const Model::ListGeoLocationsRequest& request) const;

        /**
         * An Async wrapper for ListGeoLocations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListGeoLocationsAsync(const Model::ListGeoLocationsRequest& request, const ListGeoLocationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieve a list of the health checks that are associated with the current
         * Amazon Web Services account. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHealthChecks">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHealthChecksOutcome ListHealthChecks(const Model::ListHealthChecksRequest& request) const;

        /**
         * A Callable wrapper for ListHealthChecks that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHealthChecksOutcomeCallable ListHealthChecksCallable(const Model::ListHealthChecksRequest& request) const;

        /**
         * An Async wrapper for ListHealthChecks that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHealthChecksAsync(const Model::ListHealthChecksRequest& request, const ListHealthChecksResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of the public and private hosted zones that are associated
         * with the current Amazon Web Services account. The response includes a
         * <code>HostedZones</code> child element for each hosted zone.</p> <p>Amazon Route
         * 53 returns a maximum of 100 items in each response. If you have a lot of hosted
         * zones, you can use the <code>maxitems</code> parameter to list them in groups of
         * up to 100.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHostedZones">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHostedZonesOutcome ListHostedZones(const Model::ListHostedZonesRequest& request) const;

        /**
         * A Callable wrapper for ListHostedZones that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHostedZonesOutcomeCallable ListHostedZonesCallable(const Model::ListHostedZonesRequest& request) const;

        /**
         * An Async wrapper for ListHostedZones that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHostedZonesAsync(const Model::ListHostedZonesRequest& request, const ListHostedZonesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of your hosted zones in lexicographic order. The response
         * includes a <code>HostedZones</code> child element for each hosted zone created
         * by the current Amazon Web Services account. </p> <p>
         * <code>ListHostedZonesByName</code> sorts hosted zones by name with the labels
         * reversed. For example:</p> <p> <code>com.example.www.</code> </p> <p>Note the
         * trailing dot, which can change the sort order in some circumstances.</p> <p>If
         * the domain name includes escape characters or Punycode,
         * <code>ListHostedZonesByName</code> alphabetizes the domain name using the
         * escaped or Punycoded value, which is the format that Amazon Route 53 saves in
         * its database. For example, to create a hosted zone for exämple.com, you specify
         * ex\344mple.com for the domain name. <code>ListHostedZonesByName</code>
         * alphabetizes it as:</p> <p> <code>com.ex\344mple.</code> </p> <p>The labels are
         * reversed and alphabetized using the escaped value. For more information about
         * valid domain name formats, including internationalized domain names, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/DomainNameFormat.html">DNS
         * Domain Name Format</a> in the <i>Amazon Route 53 Developer Guide</i>.</p>
         * <p>Route 53 returns up to 100 items in each response. If you have a lot of
         * hosted zones, use the <code>MaxItems</code> parameter to list them in groups of
         * up to 100. The response includes values that help navigate from one group of
         * <code>MaxItems</code> hosted zones to the next:</p> <ul> <li> <p>The
         * <code>DNSName</code> and <code>HostedZoneId</code> elements in the response
         * contain the values, if any, specified for the <code>dnsname</code> and
         * <code>hostedzoneid</code> parameters in the request that produced the current
         * response.</p> </li> <li> <p>The <code>MaxItems</code> element in the response
         * contains the value, if any, that you specified for the <code>maxitems</code>
         * parameter in the request that produced the current response.</p> </li> <li>
         * <p>If the value of <code>IsTruncated</code> in the response is true, there are
         * more hosted zones associated with the current Amazon Web Services account. </p>
         * <p>If <code>IsTruncated</code> is false, this response includes the last hosted
         * zone that is associated with the current account. The <code>NextDNSName</code>
         * element and <code>NextHostedZoneId</code> elements are omitted from the
         * response.</p> </li> <li> <p>The <code>NextDNSName</code> and
         * <code>NextHostedZoneId</code> elements in the response contain the domain name
         * and the hosted zone ID of the next hosted zone that is associated with the
         * current Amazon Web Services account. If you want to list more hosted zones, make
         * another call to <code>ListHostedZonesByName</code>, and specify the value of
         * <code>NextDNSName</code> and <code>NextHostedZoneId</code> in the
         * <code>dnsname</code> and <code>hostedzoneid</code> parameters, respectively.</p>
         * </li> </ul><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHostedZonesByName">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHostedZonesByNameOutcome ListHostedZonesByName(const Model::ListHostedZonesByNameRequest& request) const;

        /**
         * A Callable wrapper for ListHostedZonesByName that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHostedZonesByNameOutcomeCallable ListHostedZonesByNameCallable(const Model::ListHostedZonesByNameRequest& request) const;

        /**
         * An Async wrapper for ListHostedZonesByName that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHostedZonesByNameAsync(const Model::ListHostedZonesByNameRequest& request, const ListHostedZonesByNameResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists all the private hosted zones that a specified VPC is associated with,
         * regardless of which Amazon Web Services account or Amazon Web Services service
         * owns the hosted zones. The <code>HostedZoneOwner</code> structure in the
         * response contains one of the following values:</p> <ul> <li> <p>An
         * <code>OwningAccount</code> element, which contains the account number of either
         * the current Amazon Web Services account or another Amazon Web Services account.
         * Some services, such as Cloud Map, create hosted zones using the current account.
         * </p> </li> <li> <p>An <code>OwningService</code> element, which identifies the
         * Amazon Web Services service that created and owns the hosted zone. For example,
         * if a hosted zone was created by Amazon Elastic File System (Amazon EFS), the
         * value of <code>Owner</code> is <code>efs.amazonaws.com</code>. </p> </li> </ul>
         *  <p>When listing private hosted zones, the hosted zone and the Amazon VPC
         * must belong to the same partition where the hosted zones were created. A
         * partition is a group of Amazon Web Services Regions. Each Amazon Web Services
         * account is scoped to one partition.</p> <p>The following are the supported
         * partitions:</p> <ul> <li> <p> <code>aws</code> - Amazon Web Services Regions</p>
         * </li> <li> <p> <code>aws-cn</code> - China Regions</p> </li> <li> <p>
         * <code>aws-us-gov</code> - Amazon Web Services GovCloud (US) Region</p> </li>
         * </ul> <p>For more information, see <a
         * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">Access
         * Management</a> in the <i>Amazon Web Services General Reference</i>.</p>
         * <p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListHostedZonesByVPC">AWS
         * API Reference</a></p>
         */
        virtual Model::ListHostedZonesByVPCOutcome ListHostedZonesByVPC(const Model::ListHostedZonesByVPCRequest& request) const;

        /**
         * A Callable wrapper for ListHostedZonesByVPC that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListHostedZonesByVPCOutcomeCallable ListHostedZonesByVPCCallable(const Model::ListHostedZonesByVPCRequest& request) const;

        /**
         * An Async wrapper for ListHostedZonesByVPC that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListHostedZonesByVPCAsync(const Model::ListHostedZonesByVPCRequest& request, const ListHostedZonesByVPCResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the configurations for DNS query logging that are associated with the
         * current Amazon Web Services account or the configuration that is associated with
         * a specified hosted zone.</p> <p>For more information about DNS query logs, see
         * <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_CreateQueryLoggingConfig.html">CreateQueryLoggingConfig</a>.
         * Additional information, including the format of DNS query logs, appears in <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/query-logs.html">Logging
         * DNS Queries</a> in the <i>Amazon Route 53 Developer Guide</i>.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListQueryLoggingConfigs">AWS
         * API Reference</a></p>
         */
        virtual Model::ListQueryLoggingConfigsOutcome ListQueryLoggingConfigs(const Model::ListQueryLoggingConfigsRequest& request) const;

        /**
         * A Callable wrapper for ListQueryLoggingConfigs that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListQueryLoggingConfigsOutcomeCallable ListQueryLoggingConfigsCallable(const Model::ListQueryLoggingConfigsRequest& request) const;

        /**
         * An Async wrapper for ListQueryLoggingConfigs that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListQueryLoggingConfigsAsync(const Model::ListQueryLoggingConfigsRequest& request, const ListQueryLoggingConfigsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists the resource record sets in a specified hosted zone.</p> <p>
         * <code>ListResourceRecordSets</code> returns up to 300 resource record sets at a
         * time in ASCII order, beginning at a position specified by the <code>name</code>
         * and <code>type</code> elements.</p> <p> <b>Sort order</b> </p> <p>
         * <code>ListResourceRecordSets</code> sorts results first by DNS name with the
         * labels reversed, for example:</p> <p> <code>com.example.www.</code> </p> <p>Note
         * the trailing dot, which can change the sort order when the record name contains
         * characters that appear before <code>.</code> (decimal 46) in the ASCII table.
         * These characters include the following: <code>! " # $ % &amp; ' ( ) * + ,
         * -</code> </p> <p>When multiple records have the same DNS name,
         * <code>ListResourceRecordSets</code> sorts results by the record type.</p> <p>
         * <b>Specifying where to start listing records</b> </p> <p>You can use the name
         * and type elements to specify the resource record set that the list begins
         * with:</p> <dl> <dt>If you do not specify Name or Type</dt> <dd> <p>The results
         * begin with the first resource record set that the hosted zone contains.</p>
         * </dd> <dt>If you specify Name but not Type</dt> <dd> <p>The results begin with
         * the first resource record set in the list whose name is greater than or equal to
         * <code>Name</code>.</p> </dd> <dt>If you specify Type but not Name</dt> <dd>
         * <p>Amazon Route 53 returns the <code>InvalidInput</code> error.</p> </dd> <dt>If
         * you specify both Name and Type</dt> <dd> <p>The results begin with the first
         * resource record set in the list whose name is greater than or equal to
         * <code>Name</code>, and whose type is greater than or equal to
         * <code>Type</code>.</p> </dd> </dl> <p> <b>Resource record sets that are
         * PENDING</b> </p> <p>This action returns the most current version of the records.
         * This includes records that are <code>PENDING</code>, and that are not yet
         * available on all Route 53 DNS servers.</p> <p> <b>Changing resource record
         * sets</b> </p> <p>To ensure that you get an accurate listing of the resource
         * record sets for a hosted zone at a point in time, do not submit a
         * <code>ChangeResourceRecordSets</code> request while you're paging through the
         * results of a <code>ListResourceRecordSets</code> request. If you do, some pages
         * may display results without the latest changes while other pages display results
         * with the latest changes.</p> <p> <b>Displaying the next page of results</b> </p>
         * <p>If a <code>ListResourceRecordSets</code> command returns more than one page
         * of results, the value of <code>IsTruncated</code> is <code>true</code>. To
         * display the next page of results, get the values of <code>NextRecordName</code>,
         * <code>NextRecordType</code>, and <code>NextRecordIdentifier</code> (if any) from
         * the response. Then submit another <code>ListResourceRecordSets</code> request,
         * and specify those values for <code>StartRecordName</code>,
         * <code>StartRecordType</code>, and
         * <code>StartRecordIdentifier</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListResourceRecordSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListResourceRecordSetsOutcome ListResourceRecordSets(const Model::ListResourceRecordSetsRequest& request) const;

        /**
         * A Callable wrapper for ListResourceRecordSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListResourceRecordSetsOutcomeCallable ListResourceRecordSetsCallable(const Model::ListResourceRecordSetsRequest& request) const;

        /**
         * An Async wrapper for ListResourceRecordSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListResourceRecordSetsAsync(const Model::ListResourceRecordSetsRequest& request, const ListResourceRecordSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Retrieves a list of the reusable delegation sets that are associated with the
         * current Amazon Web Services account.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListReusableDelegationSets">AWS
         * API Reference</a></p>
         */
        virtual Model::ListReusableDelegationSetsOutcome ListReusableDelegationSets(const Model::ListReusableDelegationSetsRequest& request) const;

        /**
         * A Callable wrapper for ListReusableDelegationSets that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListReusableDelegationSetsOutcomeCallable ListReusableDelegationSetsCallable(const Model::ListReusableDelegationSetsRequest& request) const;

        /**
         * An Async wrapper for ListReusableDelegationSets that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListReusableDelegationSetsAsync(const Model::ListReusableDelegationSetsRequest& request, const ListReusableDelegationSetsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Lists tags for one health check or hosted zone. </p> <p>For information about
         * using tags for cost allocation, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>Billing and Cost Management User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTagsForResource">AWS
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
         * <p>Lists tags for up to 10 health checks or hosted zones.</p> <p>For information
         * about using tags for cost allocation, see <a
         * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/cost-alloc-tags.html">Using
         * Cost Allocation Tags</a> in the <i>Billing and Cost Management User
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTagsForResources">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourcesOutcome ListTagsForResources(const Model::ListTagsForResourcesRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResources that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTagsForResourcesOutcomeCallable ListTagsForResourcesCallable(const Model::ListTagsForResourcesRequest& request) const;

        /**
         * An Async wrapper for ListTagsForResources that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTagsForResourcesAsync(const Model::ListTagsForResourcesRequest& request, const ListTagsForResourcesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the latest version for every traffic policy that is
         * associated with the current Amazon Web Services account. Policies are listed in
         * the order that they were created in. </p> <p>For information about how of
         * deleting a traffic policy affects the response from
         * <code>ListTrafficPolicies</code>, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_DeleteTrafficPolicy.html">DeleteTrafficPolicy</a>.
         * </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicies">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrafficPoliciesOutcome ListTrafficPolicies(const Model::ListTrafficPoliciesRequest& request) const;

        /**
         * A Callable wrapper for ListTrafficPolicies that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPoliciesOutcomeCallable ListTrafficPoliciesCallable(const Model::ListTrafficPoliciesRequest& request) const;

        /**
         * An Async wrapper for ListTrafficPolicies that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPoliciesAsync(const Model::ListTrafficPoliciesRequest& request, const ListTrafficPoliciesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * the current Amazon Web Services account.</p>  <p>After you submit an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p>  <p>Route 53 returns a maximum of 100 items in each
         * response. If you have a lot of traffic policy instances, you can use the
         * <code>MaxItems</code> parameter to list them in groups of up to
         * 100.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyInstances">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrafficPolicyInstancesOutcome ListTrafficPolicyInstances(const Model::ListTrafficPolicyInstancesRequest& request) const;

        /**
         * A Callable wrapper for ListTrafficPolicyInstances that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyInstancesOutcomeCallable ListTrafficPolicyInstancesCallable(const Model::ListTrafficPolicyInstancesRequest& request) const;

        /**
         * An Async wrapper for ListTrafficPolicyInstances that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyInstancesAsync(const Model::ListTrafficPolicyInstancesRequest& request, const ListTrafficPolicyInstancesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the traffic policy instances that you created in a
         * specified hosted zone.</p>  <p>After you submit a
         * <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p>  <p>Route 53 returns a maximum of 100 items in each
         * response. If you have a lot of traffic policy instances, you can use the
         * <code>MaxItems</code> parameter to list them in groups of up to
         * 100.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyInstancesByHostedZone">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrafficPolicyInstancesByHostedZoneOutcome ListTrafficPolicyInstancesByHostedZone(const Model::ListTrafficPolicyInstancesByHostedZoneRequest& request) const;

        /**
         * A Callable wrapper for ListTrafficPolicyInstancesByHostedZone that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyInstancesByHostedZoneOutcomeCallable ListTrafficPolicyInstancesByHostedZoneCallable(const Model::ListTrafficPolicyInstancesByHostedZoneRequest& request) const;

        /**
         * An Async wrapper for ListTrafficPolicyInstancesByHostedZone that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyInstancesByHostedZoneAsync(const Model::ListTrafficPolicyInstancesByHostedZoneRequest& request, const ListTrafficPolicyInstancesByHostedZoneResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about the traffic policy instances that you created by using
         * a specify traffic policy version.</p>  <p>After you submit a
         * <code>CreateTrafficPolicyInstance</code> or an
         * <code>UpdateTrafficPolicyInstance</code> request, there's a brief delay while
         * Amazon Route 53 creates the resource record sets that are specified in the
         * traffic policy definition. For more information, see the <code>State</code>
         * response element.</p>  <p>Route 53 returns a maximum of 100 items in each
         * response. If you have a lot of traffic policy instances, you can use the
         * <code>MaxItems</code> parameter to list them in groups of up to
         * 100.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyInstancesByPolicy">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrafficPolicyInstancesByPolicyOutcome ListTrafficPolicyInstancesByPolicy(const Model::ListTrafficPolicyInstancesByPolicyRequest& request) const;

        /**
         * A Callable wrapper for ListTrafficPolicyInstancesByPolicy that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyInstancesByPolicyOutcomeCallable ListTrafficPolicyInstancesByPolicyCallable(const Model::ListTrafficPolicyInstancesByPolicyRequest& request) const;

        /**
         * An Async wrapper for ListTrafficPolicyInstancesByPolicy that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyInstancesByPolicyAsync(const Model::ListTrafficPolicyInstancesByPolicyRequest& request, const ListTrafficPolicyInstancesByPolicyResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets information about all of the versions for a specified traffic
         * policy.</p> <p>Traffic policy versions are listed in numerical order by
         * <code>VersionNumber</code>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListTrafficPolicyVersions">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTrafficPolicyVersionsOutcome ListTrafficPolicyVersions(const Model::ListTrafficPolicyVersionsRequest& request) const;

        /**
         * A Callable wrapper for ListTrafficPolicyVersions that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListTrafficPolicyVersionsOutcomeCallable ListTrafficPolicyVersionsCallable(const Model::ListTrafficPolicyVersionsRequest& request) const;

        /**
         * An Async wrapper for ListTrafficPolicyVersions that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListTrafficPolicyVersionsAsync(const Model::ListTrafficPolicyVersionsRequest& request, const ListTrafficPolicyVersionsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets a list of the VPCs that were created by other accounts and that can be
         * associated with a specified hosted zone because you've submitted one or more
         * <code>CreateVPCAssociationAuthorization</code> requests. </p> <p>The response
         * includes a <code>VPCs</code> element with a <code>VPC</code> child element for
         * each VPC that can be associated with the hosted zone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/ListVPCAssociationAuthorizations">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVPCAssociationAuthorizationsOutcome ListVPCAssociationAuthorizations(const Model::ListVPCAssociationAuthorizationsRequest& request) const;

        /**
         * A Callable wrapper for ListVPCAssociationAuthorizations that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVPCAssociationAuthorizationsOutcomeCallable ListVPCAssociationAuthorizationsCallable(const Model::ListVPCAssociationAuthorizationsRequest& request) const;

        /**
         * An Async wrapper for ListVPCAssociationAuthorizations that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVPCAssociationAuthorizationsAsync(const Model::ListVPCAssociationAuthorizationsRequest& request, const ListVPCAssociationAuthorizationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Gets the value that Amazon Route 53 returns in response to a DNS request for
         * a specified record name and type. You can optionally specify the IP address of a
         * DNS resolver, an EDNS0 client subnet IP address, and a subnet mask. </p> <p>This
         * call only supports querying public hosted zones.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/TestDNSAnswer">AWS
         * API Reference</a></p>
         */
        virtual Model::TestDNSAnswerOutcome TestDNSAnswer(const Model::TestDNSAnswerRequest& request) const;

        /**
         * A Callable wrapper for TestDNSAnswer that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::TestDNSAnswerOutcomeCallable TestDNSAnswerCallable(const Model::TestDNSAnswerRequest& request) const;

        /**
         * An Async wrapper for TestDNSAnswer that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void TestDNSAnswerAsync(const Model::TestDNSAnswerRequest& request, const TestDNSAnswerResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing health check. Note that some values can't be updated.
         * </p> <p>For more information about updating health checks, see <a
         * href="https://docs.aws.amazon.com/Route53/latest/DeveloperGuide/health-checks-creating-deleting.html">Creating,
         * Updating, and Deleting Health Checks</a> in the <i>Amazon Route 53 Developer
         * Guide</i>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateHealthCheck">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHealthCheckOutcome UpdateHealthCheck(const Model::UpdateHealthCheckRequest& request) const;

        /**
         * A Callable wrapper for UpdateHealthCheck that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHealthCheckOutcomeCallable UpdateHealthCheckCallable(const Model::UpdateHealthCheckRequest& request) const;

        /**
         * An Async wrapper for UpdateHealthCheck that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHealthCheckAsync(const Model::UpdateHealthCheckRequest& request, const UpdateHealthCheckResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the comment for a specified hosted zone.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateHostedZoneComment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateHostedZoneCommentOutcome UpdateHostedZoneComment(const Model::UpdateHostedZoneCommentRequest& request) const;

        /**
         * A Callable wrapper for UpdateHostedZoneComment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateHostedZoneCommentOutcomeCallable UpdateHostedZoneCommentCallable(const Model::UpdateHostedZoneCommentRequest& request) const;

        /**
         * An Async wrapper for UpdateHostedZoneComment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateHostedZoneCommentAsync(const Model::UpdateHostedZoneCommentRequest& request, const UpdateHostedZoneCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the comment for a specified traffic policy version.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateTrafficPolicyComment">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrafficPolicyCommentOutcome UpdateTrafficPolicyComment(const Model::UpdateTrafficPolicyCommentRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrafficPolicyComment that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrafficPolicyCommentOutcomeCallable UpdateTrafficPolicyCommentCallable(const Model::UpdateTrafficPolicyCommentRequest& request) const;

        /**
         * An Async wrapper for UpdateTrafficPolicyComment that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrafficPolicyCommentAsync(const Model::UpdateTrafficPolicyCommentRequest& request, const UpdateTrafficPolicyCommentResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates the resource record sets in a specified hosted zone that were created
         * based on the settings in a specified traffic policy version.</p> <p>When you
         * update a traffic policy instance, Amazon Route 53 continues to respond to DNS
         * queries for the root resource record set name (such as example.com) while it
         * replaces one group of resource record sets with another. Route 53 performs the
         * following operations:</p> <ol> <li> <p>Route 53 creates a new group of resource
         * record sets based on the specified traffic policy. This is true regardless of
         * how significant the differences are between the existing resource record sets
         * and the new resource record sets. </p> </li> <li> <p>When all of the new
         * resource record sets have been created, Route 53 starts to respond to DNS
         * queries for the root resource record set name (such as example.com) by using the
         * new resource record sets.</p> </li> <li> <p>Route 53 deletes the old group of
         * resource record sets that are associated with the root resource record set
         * name.</p> </li> </ol><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/route53-2013-04-01/UpdateTrafficPolicyInstance">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateTrafficPolicyInstanceOutcome UpdateTrafficPolicyInstance(const Model::UpdateTrafficPolicyInstanceRequest& request) const;

        /**
         * A Callable wrapper for UpdateTrafficPolicyInstance that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateTrafficPolicyInstanceOutcomeCallable UpdateTrafficPolicyInstanceCallable(const Model::UpdateTrafficPolicyInstanceRequest& request) const;

        /**
         * An Async wrapper for UpdateTrafficPolicyInstance that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateTrafficPolicyInstanceAsync(const Model::UpdateTrafficPolicyInstanceRequest& request, const UpdateTrafficPolicyInstanceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;


        void OverrideEndpoint(const Aws::String& endpoint);
        std::shared_ptr<Route53EndpointProviderBase>& accessEndpointProvider();
  private:
        friend class Aws::Client::ClientWithAsyncTemplateMethods<Route53Client>;
        void init(const Route53ClientConfiguration& clientConfiguration);

        Route53ClientConfiguration m_clientConfiguration;
        std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
        std::shared_ptr<Route53EndpointProviderBase> m_endpointProvider;
  };

} // namespace Route53
} // namespace Aws
