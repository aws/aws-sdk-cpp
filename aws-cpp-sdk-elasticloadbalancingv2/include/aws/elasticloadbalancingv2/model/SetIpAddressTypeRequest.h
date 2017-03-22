/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/IpAddressType.h>

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   */
  class AWS_ELASTICLOADBALANCINGV2_API SetIpAddressTypeRequest : public ElasticLoadBalancingv2Request
  {
  public:
    SetIpAddressTypeRequest();
    Aws::String SerializePayload() const override;


  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:
    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerArn() const{ return m_loadBalancerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(const Aws::String& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(Aws::String&& value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline void SetLoadBalancerArn(const char* value) { m_loadBalancerArnHasBeenSet = true; m_loadBalancerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline SetIpAddressTypeRequest& WithLoadBalancerArn(const Aws::String& value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline SetIpAddressTypeRequest& WithLoadBalancerArn(Aws::String&& value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the load balancer.</p>
     */
    inline SetIpAddressTypeRequest& WithLoadBalancerArn(const char* value) { SetLoadBalancerArn(value); return *this;}

    /**
     * <p>The IP address type. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline SetIpAddressTypeRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type. The possible values are <code>ipv4</code> (for IPv4
     * addresses) and <code>dualstack</code> (for IPv4 and IPv6 addresses). Internal
     * load balancers must use <code>ipv4</code>.</p>
     */
    inline SetIpAddressTypeRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(value); return *this;}

  private:
    Aws::String m_loadBalancerArn;
    bool m_loadBalancerArnHasBeenSet;
    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
