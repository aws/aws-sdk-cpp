/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/IpamPools.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/RemoveIpamPoolEnum.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class ModifyIpPoolsRequest : public ElasticLoadBalancingv2Request
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API ModifyIpPoolsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyIpPools"; }

    AWS_ELASTICLOADBALANCINGV2_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICLOADBALANCINGV2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const { return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    template<typename LoadBalancerArnT = Aws::String>
    void SetLoadBalancerArn(LoadBalancerArnT&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::forward<LoadBalancerArnT>(value); }
    template<typename LoadBalancerArnT = Aws::String>
    ModifyIpPoolsRequest& WithLoadBalancerArn(LoadBalancerArnT&& value) { SetLoadBalancerArn(std::forward<LoadBalancerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM pools to be modified.</p>
     */
    inline const IpamPools& GetIpamPools() const { return m_ipamPools; }
    inline bool IpamPoolsHasBeenSet() const { return m_ipamPoolsHasBeenSet; }
    template<typename IpamPoolsT = IpamPools>
    void SetIpamPools(IpamPoolsT&& value) { m_ipamPoolsHasBeenSet = true; m_ipamPools = std::forward<IpamPoolsT>(value); }
    template<typename IpamPoolsT = IpamPools>
    ModifyIpPoolsRequest& WithIpamPools(IpamPoolsT&& value) { SetIpamPools(std::forward<IpamPoolsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Remove the IP pools in use by the load balancer.</p>
     */
    inline const Aws::Vector<RemoveIpamPoolEnum>& GetRemoveIpamPools() const { return m_removeIpamPools; }
    inline bool RemoveIpamPoolsHasBeenSet() const { return m_removeIpamPoolsHasBeenSet; }
    template<typename RemoveIpamPoolsT = Aws::Vector<RemoveIpamPoolEnum>>
    void SetRemoveIpamPools(RemoveIpamPoolsT&& value) { m_removeIpamPoolsHasBeenSet = true; m_removeIpamPools = std::forward<RemoveIpamPoolsT>(value); }
    template<typename RemoveIpamPoolsT = Aws::Vector<RemoveIpamPoolEnum>>
    ModifyIpPoolsRequest& WithRemoveIpamPools(RemoveIpamPoolsT&& value) { SetRemoveIpamPools(std::forward<RemoveIpamPoolsT>(value)); return *this;}
    inline ModifyIpPoolsRequest& AddRemoveIpamPools(RemoveIpamPoolEnum value) { m_removeIpamPoolsHasBeenSet = true; m_removeIpamPools.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet = false;

    IpamPools m_ipamPools;
    bool m_ipamPoolsHasBeenSet = false;

    Aws::Vector<RemoveIpamPoolEnum> m_removeIpamPools;
    bool m_removeIpamPoolsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
