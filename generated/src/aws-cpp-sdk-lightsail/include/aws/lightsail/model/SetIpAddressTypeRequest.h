/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/lightsail/model/ResourceType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/IpAddressType.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class SetIpAddressTypeRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API SetIpAddressTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetIpAddressType"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The resource type.</p> <p>The possible values are <code>Distribution</code>,
     * <code>Instance</code>, and <code>LoadBalancer</code>.</p> 
     * <p>Distribution-related APIs are available only in the N. Virginia
     * (<code>us-east-1</code>) Amazon Web Services Region. Set your Amazon Web
     * Services Region configuration to <code>us-east-1</code> to create, view, or edit
     * distributions.</p> 
     */
    inline const ResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The resource type.</p> <p>The possible values are <code>Distribution</code>,
     * <code>Instance</code>, and <code>LoadBalancer</code>.</p> 
     * <p>Distribution-related APIs are available only in the N. Virginia
     * (<code>us-east-1</code>) Amazon Web Services Region. Set your Amazon Web
     * Services Region configuration to <code>us-east-1</code> to create, view, or edit
     * distributions.</p> 
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The resource type.</p> <p>The possible values are <code>Distribution</code>,
     * <code>Instance</code>, and <code>LoadBalancer</code>.</p> 
     * <p>Distribution-related APIs are available only in the N. Virginia
     * (<code>us-east-1</code>) Amazon Web Services Region. Set your Amazon Web
     * Services Region configuration to <code>us-east-1</code> to create, view, or edit
     * distributions.</p> 
     */
    inline void SetResourceType(const ResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The resource type.</p> <p>The possible values are <code>Distribution</code>,
     * <code>Instance</code>, and <code>LoadBalancer</code>.</p> 
     * <p>Distribution-related APIs are available only in the N. Virginia
     * (<code>us-east-1</code>) Amazon Web Services Region. Set your Amazon Web
     * Services Region configuration to <code>us-east-1</code> to create, view, or edit
     * distributions.</p> 
     */
    inline void SetResourceType(ResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The resource type.</p> <p>The possible values are <code>Distribution</code>,
     * <code>Instance</code>, and <code>LoadBalancer</code>.</p> 
     * <p>Distribution-related APIs are available only in the N. Virginia
     * (<code>us-east-1</code>) Amazon Web Services Region. Set your Amazon Web
     * Services Region configuration to <code>us-east-1</code> to create, view, or edit
     * distributions.</p> 
     */
    inline SetIpAddressTypeRequest& WithResourceType(const ResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The resource type.</p> <p>The possible values are <code>Distribution</code>,
     * <code>Instance</code>, and <code>LoadBalancer</code>.</p> 
     * <p>Distribution-related APIs are available only in the N. Virginia
     * (<code>us-east-1</code>) Amazon Web Services Region. Set your Amazon Web
     * Services Region configuration to <code>us-east-1</code> to create, view, or edit
     * distributions.</p> 
     */
    inline SetIpAddressTypeRequest& WithResourceType(ResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The name of the resource for which to set the IP address type.</p>
     */
    inline const Aws::String& GetResourceName() const{ return m_resourceName; }

    /**
     * <p>The name of the resource for which to set the IP address type.</p>
     */
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }

    /**
     * <p>The name of the resource for which to set the IP address type.</p>
     */
    inline void SetResourceName(const Aws::String& value) { m_resourceNameHasBeenSet = true; m_resourceName = value; }

    /**
     * <p>The name of the resource for which to set the IP address type.</p>
     */
    inline void SetResourceName(Aws::String&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::move(value); }

    /**
     * <p>The name of the resource for which to set the IP address type.</p>
     */
    inline void SetResourceName(const char* value) { m_resourceNameHasBeenSet = true; m_resourceName.assign(value); }

    /**
     * <p>The name of the resource for which to set the IP address type.</p>
     */
    inline SetIpAddressTypeRequest& WithResourceName(const Aws::String& value) { SetResourceName(value); return *this;}

    /**
     * <p>The name of the resource for which to set the IP address type.</p>
     */
    inline SetIpAddressTypeRequest& WithResourceName(Aws::String&& value) { SetResourceName(std::move(value)); return *this;}

    /**
     * <p>The name of the resource for which to set the IP address type.</p>
     */
    inline SetIpAddressTypeRequest& WithResourceName(const char* value) { SetResourceName(value); return *this;}


    /**
     * <p>The IP address type to set for the specified resource.</p> <p>The possible
     * values are <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4
     * and IPv6.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }

    /**
     * <p>The IP address type to set for the specified resource.</p> <p>The possible
     * values are <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4
     * and IPv6.</p>
     */
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }

    /**
     * <p>The IP address type to set for the specified resource.</p> <p>The possible
     * values are <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4
     * and IPv6.</p>
     */
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }

    /**
     * <p>The IP address type to set for the specified resource.</p> <p>The possible
     * values are <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4
     * and IPv6.</p>
     */
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }

    /**
     * <p>The IP address type to set for the specified resource.</p> <p>The possible
     * values are <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4
     * and IPv6.</p>
     */
    inline SetIpAddressTypeRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}

    /**
     * <p>The IP address type to set for the specified resource.</p> <p>The possible
     * values are <code>ipv4</code> for IPv4 only, and <code>dualstack</code> for IPv4
     * and IPv6.</p>
     */
    inline SetIpAddressTypeRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}

  private:

    ResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
