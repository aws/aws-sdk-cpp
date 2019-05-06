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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/LoadBalancerAttributeName.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API UpdateLoadBalancerAttributeRequest : public LightsailRequest
  {
  public:
    UpdateLoadBalancerAttributeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLoadBalancerAttribute"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline const Aws::String& GetLoadBalancerName() const{ return m_loadBalancerName; }

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline bool LoadBalancerNameHasBeenSet() const { return m_loadBalancerNameHasBeenSet; }

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline void SetLoadBalancerName(const Aws::String& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = value; }

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline void SetLoadBalancerName(Aws::String&& value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName = std::move(value); }

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline void SetLoadBalancerName(const char* value) { m_loadBalancerNameHasBeenSet = true; m_loadBalancerName.assign(value); }

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithLoadBalancerName(const Aws::String& value) { SetLoadBalancerName(value); return *this;}

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithLoadBalancerName(Aws::String&& value) { SetLoadBalancerName(std::move(value)); return *this;}

    /**
     * <p>The name of the load balancer that you want to modify (e.g.,
     * <code>my-load-balancer</code>.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithLoadBalancerName(const char* value) { SetLoadBalancerName(value); return *this;}


    /**
     * <p>The name of the attribute you want to update. Valid values are below.</p>
     */
    inline const LoadBalancerAttributeName& GetAttributeName() const{ return m_attributeName; }

    /**
     * <p>The name of the attribute you want to update. Valid values are below.</p>
     */
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }

    /**
     * <p>The name of the attribute you want to update. Valid values are below.</p>
     */
    inline void SetAttributeName(const LoadBalancerAttributeName& value) { m_attributeNameHasBeenSet = true; m_attributeName = value; }

    /**
     * <p>The name of the attribute you want to update. Valid values are below.</p>
     */
    inline void SetAttributeName(LoadBalancerAttributeName&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::move(value); }

    /**
     * <p>The name of the attribute you want to update. Valid values are below.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithAttributeName(const LoadBalancerAttributeName& value) { SetAttributeName(value); return *this;}

    /**
     * <p>The name of the attribute you want to update. Valid values are below.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithAttributeName(LoadBalancerAttributeName&& value) { SetAttributeName(std::move(value)); return *this;}


    /**
     * <p>The value that you want to specify for the attribute name.</p>
     */
    inline const Aws::String& GetAttributeValue() const{ return m_attributeValue; }

    /**
     * <p>The value that you want to specify for the attribute name.</p>
     */
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }

    /**
     * <p>The value that you want to specify for the attribute name.</p>
     */
    inline void SetAttributeValue(const Aws::String& value) { m_attributeValueHasBeenSet = true; m_attributeValue = value; }

    /**
     * <p>The value that you want to specify for the attribute name.</p>
     */
    inline void SetAttributeValue(Aws::String&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::move(value); }

    /**
     * <p>The value that you want to specify for the attribute name.</p>
     */
    inline void SetAttributeValue(const char* value) { m_attributeValueHasBeenSet = true; m_attributeValue.assign(value); }

    /**
     * <p>The value that you want to specify for the attribute name.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithAttributeValue(const Aws::String& value) { SetAttributeValue(value); return *this;}

    /**
     * <p>The value that you want to specify for the attribute name.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithAttributeValue(Aws::String&& value) { SetAttributeValue(std::move(value)); return *this;}

    /**
     * <p>The value that you want to specify for the attribute name.</p>
     */
    inline UpdateLoadBalancerAttributeRequest& WithAttributeValue(const char* value) { SetAttributeValue(value); return *this;}

  private:

    Aws::String m_loadBalancerName;
    bool m_loadBalancerNameHasBeenSet;

    LoadBalancerAttributeName m_attributeName;
    bool m_attributeNameHasBeenSet;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
