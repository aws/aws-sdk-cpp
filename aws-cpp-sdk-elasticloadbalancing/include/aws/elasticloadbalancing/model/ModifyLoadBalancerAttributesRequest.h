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
#include <aws/elasticloadbalancing/model/LoadBalancerAttributes.h>
#include <utility>

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

  /**
   * <p>Contains the parameters for ModifyLoadBalancerAttributes.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancing-2012-06-01/ModifyLoadBalancerAttributesInput">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCING_API ModifyLoadBalancerAttributesRequest : public ElasticLoadBalancingRequest
  {
  public:
    ModifyLoadBalancerAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyLoadBalancerAttributes"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the load balancer.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer.</p>
     */
    inline ModifyLoadBalancerAttributesRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline ModifyLoadBalancerAttributesRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer.</p>
     */
    inline ModifyLoadBalancerAttributesRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The attributes for the load balancer.</p>
     */
    inline const LoadBalancerAttributes& GetLoadBalancerAttributes() const{ return m_loadBalancerAttributes; }

    /**
     * <p>The attributes for the load balancer.</p>
     */
    inline bool LoadBalancerAttributesHasBeenSet() const { return m_loadBalancerAttributesHasBeenSet; }

    /**
     * <p>The attributes for the load balancer.</p>
     */
    inline void SetLoadBalancerAttributes(const LoadBalancerAttributes& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = value; }

    /**
     * <p>The attributes for the load balancer.</p>
     */
    inline void SetLoadBalancerAttributes(LoadBalancerAttributes&& value) { m_loadBalancerAttributesHasBeenSet = true; m_loadBalancerAttributes = std::move(value); }

    /**
     * <p>The attributes for the load balancer.</p>
     */
    inline ModifyLoadBalancerAttributesRequest& WithLoadBalancerAttributes(const LoadBalancerAttributes& value) { SetLoadBalancerAttributes(value); return *this;}

    /**
     * <p>The attributes for the load balancer.</p>
     */
    inline ModifyLoadBalancerAttributesRequest& WithLoadBalancerAttributes(LoadBalancerAttributes&& value) { SetLoadBalancerAttributes(std::move(value)); return *this;}

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    LoadBalancerAttributes m_loadBalancerAttributes;
    bool m_loadBalancerAttributesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
