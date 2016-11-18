﻿/*
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
#include <aws/elasticloadbalancing/ElasticLoadBalancing_EXPORTS.h>
#include <aws/elasticloadbalancing/ElasticLoadBalancingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for AttachLoaBalancerToSubnets.</p>
   */
  class AWS_ELASTICLOADBALANCING_API AttachLoadBalancerToSubnetsRequest : public ElasticLoadBalancingRequest
  {
  public:
    AttachLoadBalancerToSubnetsRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline AttachLoadBalancerToSubnetsRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline AttachLoadBalancerToSubnetsRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline AttachLoadBalancerToSubnetsRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The IDs of the subnets to add. You can add only one subnet per Availability
     * Zone.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnets() const{ return m_subnets; }

    /**
     * <p>The IDs of the subnets to add. You can add only one subnet per Availability
     * Zone.</p>
     */
    inline void SetSubnets(const Aws::Vector<Aws::String>& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The IDs of the subnets to add. You can add only one subnet per Availability
     * Zone.</p>
     */
    inline void SetSubnets(Aws::Vector<Aws::String>&& value) { m_subnetsHasBeenSet = true; m_subnets = value; }

    /**
     * <p>The IDs of the subnets to add. You can add only one subnet per Availability
     * Zone.</p>
     */
    inline AttachLoadBalancerToSubnetsRequest& WithSubnets(const Aws::Vector<Aws::String>& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of the subnets to add. You can add only one subnet per Availability
     * Zone.</p>
     */
    inline AttachLoadBalancerToSubnetsRequest& WithSubnets(Aws::Vector<Aws::String>&& value) { SetSubnets(value); return *this;}

    /**
     * <p>The IDs of the subnets to add. You can add only one subnet per Availability
     * Zone.</p>
     */
    inline AttachLoadBalancerToSubnetsRequest& AddSubnets(const Aws::String& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of the subnets to add. You can add only one subnet per Availability
     * Zone.</p>
     */
    inline AttachLoadBalancerToSubnetsRequest& AddSubnets(Aws::String&& value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

    /**
     * <p>The IDs of the subnets to add. You can add only one subnet per Availability
     * Zone.</p>
     */
    inline AttachLoadBalancerToSubnetsRequest& AddSubnets(const char* value) { m_subnetsHasBeenSet = true; m_subnets.push_back(value); return *this; }

  private:
    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;
    Aws::Vector<Aws::String> m_subnets;
    bool m_subnetsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
