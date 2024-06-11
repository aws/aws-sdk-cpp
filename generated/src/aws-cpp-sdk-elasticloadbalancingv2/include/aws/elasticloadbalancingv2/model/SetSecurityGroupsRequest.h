/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class SetSecurityGroupsRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API SetSecurityGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetSecurityGroups"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::move(value); }
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }
    inline SetSecurityGroupsRequest& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}
    inline SetSecurityGroupsRequest& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}
    inline SetSecurityGroupsRequest& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IDs of the security groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroups() const{ return m_securityGroups; }
    inline bool SecurityGroupsHasBeenSet() const { return m_securityGroupsHasBeenSet; }
    inline void SetSecurityGroups(const Aws::Vector<Aws::String>& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = value; }
    inline void SetSecurityGroups(Aws::Vector<Aws::String>&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups = std::move(value); }
    inline SetSecurityGroupsRequest& WithSecurityGroups(const Aws::Vector<Aws::String>& value) { SetSecurityGroups(value); return *this;}
    inline SetSecurityGroupsRequest& WithSecurityGroups(Aws::Vector<Aws::String>&& value) { SetSecurityGroups(std::move(value)); return *this;}
    inline SetSecurityGroupsRequest& AddSecurityGroups(const Aws::String& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    inline SetSecurityGroupsRequest& AddSecurityGroups(Aws::String&& value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(std::move(value)); return *this; }
    inline SetSecurityGroupsRequest& AddSecurityGroups(const char* value) { m_securityGroupsHasBeenSet = true; m_securityGroups.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether to evaluate inbound security group rules for traffic sent
     * to a Network Load Balancer through Amazon Web Services PrivateLink. The default
     * is <code>on</code>.</p>
     */
    inline const EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum& GetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic() const{ return m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic; }
    inline bool EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet() const { return m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet; }
    inline void SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(const EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum& value) { m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = true; m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic = value; }
    inline void SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum&& value) { m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = true; m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic = std::move(value); }
    inline SetSecurityGroupsRequest& WithEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(const EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum& value) { SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(value); return *this;}
    inline SetSecurityGroupsRequest& WithEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum&& value) { SetEnforceSecurityGroupInboundRulesOnPrivateLinkTraffic(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroups;
    bool m_securityGroupsHasBeenSet = false;

    EnforceSecurityGroupInboundRulesOnPrivateLinkTrafficEnum m_enforceSecurityGroupInboundRulesOnPrivateLinkTraffic;
    bool m_enforceSecurityGroupInboundRulesOnPrivateLinkTrafficHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
