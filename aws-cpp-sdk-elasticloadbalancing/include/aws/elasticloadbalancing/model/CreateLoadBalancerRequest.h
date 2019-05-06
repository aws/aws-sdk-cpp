/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancing/model/Listener.h>
#include <aws/elasticloadbalancing/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for CreateLoadBalancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/CreateAccessPointInput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API CreateLoadBalancerRequest : public ElasticLoadBalancingRequest
  {
  public:
    CreateLoadBalancerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancer"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique within your
     * set of load balancers for the region, must have a maximum of 32 characters, must
     * contain only alphanumeric characters or hyphens, and cannot begin or end with a
     * hyphen.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique within your
     * set of load balancers for the region, must have a maximum of 32 characters, must
     * contain only alphanumeric characters or hyphens, and cannot begin or end with a
     * hyphen.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique within your
     * set of load balancers for the region, must have a maximum of 32 characters, must
     * contain only alphanumeric characters or hyphens, and cannot begin or end with a
     * hyphen.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique within your
     * set of load balancers for the region, must have a maximum of 32 characters, must
     * contain only alphanumeric characters or hyphens, and cannot begin or end with a
     * hyphen.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique within your
     * set of load balancers for the region, must have a maximum of 32 characters, must
     * contain only alphanumeric characters or hyphens, and cannot begin or end with a
     * hyphen.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique within your
     * set of load balancers for the region, must have a maximum of 32 characters, must
     * contain only alphanumeric characters or hyphens, and cannot begin or end with a
     * hyphen.</p>
     */
    inline CreateLoadBalancerRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique within your
     * set of load balancers for the region, must have a maximum of 32 characters, must
     * contain only alphanumeric characters or hyphens, and cannot begin or end with a
     * hyphen.</p>
     */
    inline CreateLoadBalancerRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique within your
     * set of load balancers for the region, must have a maximum of 32 characters, must
     * contain only alphanumeric characters or hyphens, and cannot begin or end with a
     * hyphen.</p>
     */
    inline CreateLoadBalancerRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The listeners.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
     * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Listener>& GetListeners() const{ return m_listeners; }

    /**
     * <p>The listeners.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
     * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
     * Guide</i>.</p>
     */
    inline bool ListenersHasBeenSet() const { return m_listenersHasBeenSet; }

    /**
     * <p>The listeners.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
     * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
     * Guide</i>.</p>
     */
    inline void SetListeners(const Aws::Vector<Listener>& value) { m_listenersHasBeenSet = true; m_listeners = value; }

    /**
     * <p>The listeners.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
     * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
     * Guide</i>.</p>
     */
    inline void SetListeners(Aws::Vector<Listener>&& value) { m_listenersHasBeenSet = true; m_listeners = std::move(value); }

    /**
     * <p>The listeners.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
     * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
     * Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& WithListeners(const Aws::Vector<Listener>& value) { SetListeners(value); return *this;}

    /**
     * <p>The listeners.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
     * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
     * Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& WithListeners(Aws::Vector<Listener>&& value) { SetListeners(std::move(value)); return *this;}

    /**
     * <p>The listeners.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
     * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
     * Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& AddListeners(const Listener& value) { m_listenersHasBeenSet = true; m_listeners.push_back(value); return *this; }

    /**
     * <p>The listeners.</p> <p>For more information, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
     * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
     * Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& AddListeners(Listener&& value) { m_listenersHasBeenSet = true; m_listeners.push_back(std::move(value)); return *this; }


    /**
     * <p>One or more Availability Zones from the same region as the load balancer.</p>
     * <p>You must specify at least one Availability Zone.</p> <p>You can add more
     * Availability Zones after you create the load balancer using
     * <a>EnableAvailabilityZonesForLoadBalancer</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const{ return m_availabilityZones; }

    /**
     * <p>One or more Availability Zones from the same region as the load balancer.</p>
     * <p>You must specify at least one Availability Zone.</p> <p>You can add more
     * Availability Zones after you create the load balancer using
     * <a>EnableAvailabilityZonesForLoadBalancer</a>.</p>
     */
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }

    /**
     * <p>One or more Availability Zones from the same region as the load balancer.</p>
     * <p>You must specify at least one Availability Zone.</p> <p>You can add more
     * Availability Zones after you create the load balancer using
     * <a>EnableAvailabilityZonesForLoadBalancer</a>.</p>
     */
    inline void SetAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = value; }

    /**
     * <p>One or more Availability Zones from the same region as the load balancer.</p>
     * <p>You must specify at least one Availability Zone.</p> <p>You can add more
     * Availability Zones after you create the load balancer using
     * <a>EnableAvailabilityZonesForLoadBalancer</a>.</p>
     */
    inline void SetAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::move(value); }

    /**
     * <p>One or more Availability Zones from the same region as the load balancer.</p>
     * <p>You must specify at least one Availability Zone.</p> <p>You can add more
     * Availability Zones after you create the load balancer using
     * <a>EnableAvailabilityZonesForLoadBalancer</a>.</p>
     */
    inline CreateLoadBalancerRequest& WithAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetAvailabilityZones(value); return *this;}

    /**
     * <p>One or more Availability Zones from the same region as the load balancer.</p>
     * <p>You must specify at least one Availability Zone.</p> <p>You can add more
     * Availability Zones after you create the load balancer using
     * <a>EnableAvailabilityZonesForLoadBalancer</a>.</p>
     */
    inline CreateLoadBalancerRequest& WithAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>One or more Availability Zones from the same region as the load balancer.</p>
     * <p>You must specify at least one Availability Zone.</p> <p>You can add more
     * Availability Zones after you create the load balancer using
     * <a>EnableAvailabilityZonesForLoadBalancer</a>.</p>
     */
    inline CreateLoadBalancerRequest& AddAvailabilityZones(const Aws::String& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }

    /**
     * <p>One or more Availability Zones from the same region as the load balancer.</p>
     * <p>You must specify at least one Availability Zone.</p> <p>You can add more
     * Availability Zones after you create the load balancer using
     * <a>EnableAvailabilityZonesForLoadBalancer</a>.</p>
     */
    inline CreateLoadBalancerRequest& AddAvailabilityZones(Aws::String&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more Availability Zones from the same region as the load balancer.</p>
     * <p>You must specify at least one Availability Zone.</p> <p>You can add more
     * Availability Zones after you create the load balancer using
     * <a>EnableAvailabilityZonesForLoadBalancer</a>.</p>
     */
    inline CreateLoadBalancerRequest& AddAvailabilityZones(const char* value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.push_back(value); return *this; }


    /**
     * <p>The IDs of the subnets in your VPC to attach to the load balancer. Specify
     * one subnet per Availability Zone specified in
     * <code>AvailabilityZones</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The IDs of the subnets in your VPC to attach to the load balancer. Specify
     * one subnet per Availability Zone specified in
     * <code>AvailabilityZones</code>.</p>
     */
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }

    /**
     * <p>The IDs of the subnets in your VPC to attach to the load balancer. Specify
     * one subnet per Availability Zone specified in
     * <code>AvailabilityZones</code>.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The IDs of the subnets in your VPC to attach to the load balancer. Specify
     * one subnet per Availability Zone specified in
     * <code>AvailabilityZones</code>.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = std::move(value); }

    /**
     * <p>The IDs of the subnets in your VPC to attach to the load balancer. Specify
     * one subnet per Availability Zone specified in
     * <code>AvailabilityZones</code>.</p>
     */
    inline CreateLoadBalancerRequest& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of the subnets in your VPC to attach to the load balancer. Specify
     * one subnet per Availability Zone specified in
     * <code>AvailabilityZones</code>.</p>
     */
    inline CreateLoadBalancerRequest& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(std::move(value)); return *this;}

    /**
     * <p>The IDs of the subnets in your VPC to attach to the load balancer. Specify
     * one subnet per Availability Zone specified in
     * <code>AvailabilityZones</code>.</p>
     */
    inline CreateLoadBalancerRequest& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of the subnets in your VPC to attach to the load balancer. Specify
     * one subnet per Availability Zone specified in
     * <code>AvailabilityZones</code>.</p>
     */
    inline CreateLoadBalancerRequest& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the subnets in your VPC to attach to the load balancer. Specify
     * one subnet per Availability Zone specified in
     * <code>AvailabilityZones</code>.</p>
     */
    inline CreateLoadBalancerRequest& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }


    /**
     * <p>The IDs of the security groups to assign to the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }

    /**
     * <p>The IDs of the security groups to assign to the load balancer.</p>
     */
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }

    /**
     * <p>The IDs of the security groups to assign to the load balancer.</p>
     */
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }

    /**
     * <p>The IDs of the security groups to assign to the load balancer.</p>
     */
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }

    /**
     * <p>The IDs of the security groups to assign to the load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}

    /**
     * <p>The IDs of the security groups to assign to the load balancer.</p>
     */
    inline CreateLoadBalancerRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}

    /**
     * <p>The IDs of the security groups to assign to the load balancer.</p>
     */
    inline CreateLoadBalancerRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }

    /**
     * <p>The IDs of the security groups to assign to the load balancer.</p>
     */
    inline CreateLoadBalancerRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the security groups to assign to the load balancer.</p>
     */
    inline CreateLoadBalancerRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }


    /**
     * <p>The type of a load balancer. Valid only for load balancers in a VPC.</p>
     * <p>By default, Elastic Load Balancing creates an Internet-facing load balancer
     * with a DNS name that resolves to public IP addresses. For more information about
     * Internet-facing and Internal load balancers, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/how-elastic-load-balancing-works.html#load-balancer-scheme">Load
     * Balancer Scheme</a> in the <i>Elastic Load Balancing User Guide</i>.</p>
     * <p>Specify <code>internal</code> to create a load balancer with a DNS name that
     * resolves to private IP addresses.</p>
     */
    inline const Aws::String& GetScheme() const{ return m_scheme; }

    /**
     * <p>The type of a load balancer. Valid only for load balancers in a VPC.</p>
     * <p>By default, Elastic Load Balancing creates an Internet-facing load balancer
     * with a DNS name that resolves to public IP addresses. For more information about
     * Internet-facing and Internal load balancers, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/how-elastic-load-balancing-works.html#load-balancer-scheme">Load
     * Balancer Scheme</a> in the <i>Elastic Load Balancing User Guide</i>.</p>
     * <p>Specify <code>internal</code> to create a load balancer with a DNS name that
     * resolves to private IP addresses.</p>
     */
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }

    /**
     * <p>The type of a load balancer. Valid only for load balancers in a VPC.</p>
     * <p>By default, Elastic Load Balancing creates an Internet-facing load balancer
     * with a DNS name that resolves to public IP addresses. For more information about
     * Internet-facing and Internal load balancers, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/how-elastic-load-balancing-works.html#load-balancer-scheme">Load
     * Balancer Scheme</a> in the <i>Elastic Load Balancing User Guide</i>.</p>
     * <p>Specify <code>internal</code> to create a load balancer with a DNS name that
     * resolves to private IP addresses.</p>
     */
    inline void SetScheme(const Aws::String& value) { m_schemeHasBeenSet = true; m_scheme = value; }

    /**
     * <p>The type of a load balancer. Valid only for load balancers in a VPC.</p>
     * <p>By default, Elastic Load Balancing creates an Internet-facing load balancer
     * with a DNS name that resolves to public IP addresses. For more information about
     * Internet-facing and Internal load balancers, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/how-elastic-load-balancing-works.html#load-balancer-scheme">Load
     * Balancer Scheme</a> in the <i>Elastic Load Balancing User Guide</i>.</p>
     * <p>Specify <code>internal</code> to create a load balancer with a DNS name that
     * resolves to private IP addresses.</p>
     */
    inline void SetScheme(Aws::String&& value) { m_schemeHasBeenSet = true; m_scheme = std::move(value); }

    /**
     * <p>The type of a load balancer. Valid only for load balancers in a VPC.</p>
     * <p>By default, Elastic Load Balancing creates an Internet-facing load balancer
     * with a DNS name that resolves to public IP addresses. For more information about
     * Internet-facing and Internal load balancers, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/how-elastic-load-balancing-works.html#load-balancer-scheme">Load
     * Balancer Scheme</a> in the <i>Elastic Load Balancing User Guide</i>.</p>
     * <p>Specify <code>internal</code> to create a load balancer with a DNS name that
     * resolves to private IP addresses.</p>
     */
    inline void SetScheme(const char* value) { m_schemeHasBeenSet = true; m_scheme.assign(value); }

    /**
     * <p>The type of a load balancer. Valid only for load balancers in a VPC.</p>
     * <p>By default, Elastic Load Balancing creates an Internet-facing load balancer
     * with a DNS name that resolves to public IP addresses. For more information about
     * Internet-facing and Internal load balancers, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/how-elastic-load-balancing-works.html#load-balancer-scheme">Load
     * Balancer Scheme</a> in the <i>Elastic Load Balancing User Guide</i>.</p>
     * <p>Specify <code>internal</code> to create a load balancer with a DNS name that
     * resolves to private IP addresses.</p>
     */
    inline CreateLoadBalancerRequest& WithScheme(const Aws::String& value) { SetScheme(value); return *this;}

    /**
     * <p>The type of a load balancer. Valid only for load balancers in a VPC.</p>
     * <p>By default, Elastic Load Balancing creates an Internet-facing load balancer
     * with a DNS name that resolves to public IP addresses. For more information about
     * Internet-facing and Internal load balancers, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/how-elastic-load-balancing-works.html#load-balancer-scheme">Load
     * Balancer Scheme</a> in the <i>Elastic Load Balancing User Guide</i>.</p>
     * <p>Specify <code>internal</code> to create a load balancer with a DNS name that
     * resolves to private IP addresses.</p>
     */
    inline CreateLoadBalancerRequest& WithScheme(Aws::String&& value) { SetScheme(std::move(value)); return *this;}

    /**
     * <p>The type of a load balancer. Valid only for load balancers in a VPC.</p>
     * <p>By default, Elastic Load Balancing creates an Internet-facing load balancer
     * with a DNS name that resolves to public IP addresses. For more information about
     * Internet-facing and Internal load balancers, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/how-elastic-load-balancing-works.html#load-balancer-scheme">Load
     * Balancer Scheme</a> in the <i>Elastic Load Balancing User Guide</i>.</p>
     * <p>Specify <code>internal</code> to create a load balancer with a DNS name that
     * resolves to private IP addresses.</p>
     */
    inline CreateLoadBalancerRequest& WithScheme(const char* value) { SetScheme(value); return *this;}


    /**
     * <p>A list of tags to assign to the load balancer.</p> <p>For more information
     * about tagging your load balancer, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
     * Your Classic Load Balancer</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>A list of tags to assign to the load balancer.</p> <p>For more information
     * about tagging your load balancer, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
     * Your Classic Load Balancer</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A list of tags to assign to the load balancer.</p> <p>For more information
     * about tagging your load balancer, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
     * Your Classic Load Balancer</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A list of tags to assign to the load balancer.</p> <p>For more information
     * about tagging your load balancer, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
     * Your Classic Load Balancer</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A list of tags to assign to the load balancer.</p> <p>For more information
     * about tagging your load balancer, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
     * Your Classic Load Balancer</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>A list of tags to assign to the load balancer.</p> <p>For more information
     * about tagging your load balancer, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
     * Your Classic Load Balancer</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A list of tags to assign to the load balancer.</p> <p>For more information
     * about tagging your load balancer, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
     * Your Classic Load Balancer</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>A list of tags to assign to the load balancer.</p> <p>For more information
     * about tagging your load balancer, see <a
     * href="http://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
     * Your Classic Load Balancer</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline CreateLoadBalancerRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    Aws::Vector<Listener> m_listeners;
    bool m_listenersHasBeenSet;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet;

    Aws::String m_scheme;
    bool m_schemeHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
