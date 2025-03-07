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
    AWS_ELASTICLOADBALANCINGV2_API ModifyIpPoolsRequest();

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
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }
    inline bool LoadBalancerArnHasBeenSet() const { return m_loadBalancerArnHasBeenSet; }
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = std::move(value); }
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }
    inline ModifyIpPoolsRequest& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}
    inline ModifyIpPoolsRequest& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(std::move(value)); return *this;}
    inline ModifyIpPoolsRequest& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM pools to be modified.</p>
     */
    inline const IpamPools& GetIpamPools() const{ return m_ipamPools; }
    inline bool IpamPoolsHasBeenSet() const { return m_ipamPoolsHasBeenSet; }
    inline void SetIpamPools(const IpamPools& value) { m_ipamPoolsHasBeenSet = true; m_ipamPools = value; }
    inline void SetIpamPools(IpamPools&& value) { m_ipamPoolsHasBeenSet = true; m_ipamPools = std::move(value); }
    inline ModifyIpPoolsRequest& WithIpamPools(const IpamPools& value) { SetIpamPools(value); return *this;}
    inline ModifyIpPoolsRequest& WithIpamPools(IpamPools&& value) { SetIpamPools(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Remove the IP pools in use by the load balancer.</p>
     */
    inline const Aws::Vector<RemoveIpamPoolEnum>& GetRemoveIpamPools() const{ return m_removeIpamPools; }
    inline bool RemoveIpamPoolsHasBeenSet() const { return m_removeIpamPoolsHasBeenSet; }
    inline void SetRemoveIpamPools(const Aws::Vector<RemoveIpamPoolEnum>& value) { m_removeIpamPoolsHasBeenSet = true; m_removeIpamPools = value; }
    inline void SetRemoveIpamPools(Aws::Vector<RemoveIpamPoolEnum>&& value) { m_removeIpamPoolsHasBeenSet = true; m_removeIpamPools = std::move(value); }
    inline ModifyIpPoolsRequest& WithRemoveIpamPools(const Aws::Vector<RemoveIpamPoolEnum>& value) { SetRemoveIpamPools(value); return *this;}
    inline ModifyIpPoolsRequest& WithRemoveIpamPools(Aws::Vector<RemoveIpamPoolEnum>&& value) { SetRemoveIpamPools(std::move(value)); return *this;}
    inline ModifyIpPoolsRequest& AddRemoveIpamPools(const RemoveIpamPoolEnum& value) { m_removeIpamPoolsHasBeenSet = true; m_removeIpamPools.push_back(value); return *this; }
    inline ModifyIpPoolsRequest& AddRemoveIpamPools(RemoveIpamPoolEnum&& value) { m_removeIpamPoolsHasBeenSet = true; m_removeIpamPools.push_back(std::move(value)); return *this; }
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
