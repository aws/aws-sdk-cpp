/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateLoadBalancerRequest : public ElasticLoadBalancingRequest
  {
  public:
    AWS_ELASTICLOADBALANCING_API CreateLoadBalancerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateLoadBalancer"; }

    AWS_ELASTICLOADBALANCING_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCING_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the load balancer.</p> <p>This name must be unique within your
     * set of load balancers for the region, must have a maximum of 32 characters, must
     * contain only alphanumeric characters or hyphens, and cannot begin or end with a
     * hyphen.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const { return m_loadBalancerName; }
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }
    template<typename LoadBalancerNameT = Aws::String>
    void SetLoadBalancerName(LoadBalancerNameT&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::forward<LoadBalancerNameT>(value); }
    template<typename LoadBalancerNameT = Aws::String>
    CreateLoadBalancerRequest& WithLoadBalancerName(LoadBalancerNameT&& value) { SetLoadBalancerName(std::forward<LoadBalancerNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The listeners.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/classic/elb-listener-config.html">Listeners
     * for Your Classic Load Balancer</a> in the <i>Classic Load Balancers
     * Guide</i>.</p>
     */
    inline const Aws::Vector<Listener>& GetListeners() const { return m_listeners; }
    inline bool ListenersHasBeenSet() const { return m_listenersHasBeenSet; }
    template<typename ListenersT = Aws::Vector<Listener>>
    void SetListeners(ListenersT&& value) { m_listenersHasBeenSet = true; m_listeners = std::forward<ListenersT>(value); }
    template<typename ListenersT = Aws::Vector<Listener>>
    CreateLoadBalancerRequest& WithListeners(ListenersT&& value) { SetListeners(std::forward<ListenersT>(value)); return *this;}
    template<typename ListenersT = Listener>
    CreateLoadBalancerRequest& AddListeners(ListenersT&& value) { m_listenersHasBeenSet = true; m_listeners.emplace_back(std::forward<ListenersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more Availability Zones from the same region as the load balancer.</p>
     * <p>You must specify at least one Availability Zone.</p> <p>You can add more
     * Availability Zones after you create the load balancer using
     * <a>EnableAvailabilityZonesForLoadBalancer</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAvailabilityZones() const { return m_availabilityZones; }
    inline bool AvailabilityZonesHasBeenSet() const { return m_availabilityZonesHasBeenSet; }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones = std::forward<AvailabilityZonesT>(value); }
    template<typename AvailabilityZonesT = Aws::Vector<Aws::String>>
    CreateLoadBalancerRequest& WithAvailabilityZones(AvailabilityZonesT&& value) { SetAvailabilityZones(std::forward<AvailabilityZonesT>(value)); return *this;}
    template<typename AvailabilityZonesT = Aws::String>
    CreateLoadBalancerRequest& AddAvailabilityZones(AvailabilityZonesT&& value) { m_availabilityZonesHasBeenSet = true; m_availabilityZones.emplace_back(std::forward<AvailabilityZonesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the subnets in your VPC to attach to the load balancer. Specify
     * one subnet per Availability Zone specified in
     * <code>AvailabilityZones</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const { return m_subnets; }
    inline bool SubnetsHasBeenSet() const { return m_subnetsHasBeenSet; }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    void SetSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets = std::forward<SubnetsT>(value); }
    template<typename SubnetsT = Aws::Vector<Aws::String>>
    CreateLoadBalancerRequest& WithSubnets(SubnetsT&& value) { SetSubnets(std::forward<SubnetsT>(value)); return *this;}
    template<typename SubnetsT = Aws::String>
    CreateLoadBalancerRequest& AddSubnets(SubnetsT&& value) { m_subnetsHasBeenSet = true; m_subnets.emplace_back(std::forward<SubnetsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups to assign to the load balancer.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const { return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    void SetSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::forward<SecurityGroupsT>(value); }
    template<typename SecurityGroupsT = Aws::Vector<Aws::String>>
    CreateLoadBalancerRequest& WithSecurityGroups(SecurityGroupsT&& value) { SetSecurityGroups(std::forward<SecurityGroupsT>(value)); return *this;}
    template<typename SecurityGroupsT = Aws::String>
    CreateLoadBalancerRequest& AddSecurityGroups(SecurityGroupsT&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.emplace_back(std::forward<SecurityGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of a load balancer. Valid only for load balancers in a VPC.</p>
     * <p>By default, Elastic Load Balancing creates an Internet-facing load balancer
     * with a DNS name that resolves to public IP addresses. For more information about
     * Internet-facing and Internal load balancers, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/userguide/how-elastic-load-balancing-works.html#load-balancer-scheme">Load
     * Balancer Scheme</a> in the <i>Elastic Load Balancing User Guide</i>.</p>
     * <p>Specify <code>internal</code> to create a load balancer with a DNS name that
     * resolves to private IP addresses.</p>
     */
    inline const Aws::String& GetScheme() const { return m_scheme; }
    inline bool SchemeHasBeenSet() const { return m_schemeHasBeenSet; }
    template<typename SchemeT = Aws::String>
    void SetScheme(SchemeT&& value) { m_schemeHasBeenSet = true; m_scheme = std::forward<SchemeT>(value); }
    template<typename SchemeT = Aws::String>
    CreateLoadBalancerRequest& WithScheme(SchemeT&& value) { SetScheme(std::forward<SchemeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to assign to the load balancer.</p> <p>For more information
     * about tagging your load balancer, see <a
     * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/classic/add-remove-tags.html">Tag
     * Your Classic Load Balancer</a> in the <i>Classic Load Balancers Guide</i>.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateLoadBalancerRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateLoadBalancerRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet = false;

    Aws::Vector<Listener> m_listeners;
    bool m_listenersHasBeenSet = false;

    Aws::Vector<Aws::String> m_availabilityZones;
    bool m_availabilityZonesHasBeenSet = false;

    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    Aws::String m_scheme;
    bool m_schemeHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
