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
    AWS_LIGHTSAIL_API SetIpAddressTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetIpAddressType"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The resource type.</p> <p>The resource values are <code>Distribution</code>,
     * <code>Instance</code>, and <code>LoadBalancer</code>.</p> 
     * <p>Distribution-related APIs are available only in the N. Virginia
     * (<code>us-east-1</code>) Amazon Web Services Region. Set your Amazon Web
     * Services Region configuration to <code>us-east-1</code> to create, view, or edit
     * distributions.</p> 
     */
    inline ResourceType GetResourceType() const { return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(ResourceType value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline SetIpAddressTypeRequest& WithResourceType(ResourceType value) { SetResourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the resource for which to set the IP address type.</p>
     */
    inline const Aws::String& GetResourceName() const { return m_resourceName; }
    inline bool ResourceNameHasBeenSet() const { return m_resourceNameHasBeenSet; }
    template<typename ResourceNameT = Aws::String>
    void SetResourceName(ResourceNameT&& value) { m_resourceNameHasBeenSet = true; m_resourceName = std::forward<ResourceNameT>(value); }
    template<typename ResourceNameT = Aws::String>
    SetIpAddressTypeRequest& WithResourceName(ResourceNameT&& value) { SetResourceName(std::forward<ResourceNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP address type to set for the specified resource.</p> <p>The possible
     * values are <code>ipv4</code> for IPv4 only, <code>ipv6</code> for IPv6 only, and
     * <code>dualstack</code> for IPv4 and IPv6.</p>
     */
    inline IpAddressType GetIpAddressType() const { return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(IpAddressType value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline SetIpAddressTypeRequest& WithIpAddressType(IpAddressType value) { SetIpAddressType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Required parameter to accept the instance bundle update when changing to, and
     * from, IPv6-only.</p>  <p>An instance bundle will change when switching
     * from <code>dual-stack</code> or <code>ipv4</code>, to <code>ipv6</code>. It also
     * changes when switching from <code>ipv6</code>, to <code>dual-stack</code> or
     * <code>ipv4</code>.</p> <p>You must include this parameter in the command to
     * update the bundle. For example, if you switch from <code>dual-stack</code> to
     * <code>ipv6</code>, the bundle will be updated, and billing for the IPv6-only
     * instance bundle begins immediately.</p> 
     */
    inline bool GetAcceptBundleUpdate() const { return m_acceptBundleUpdate; }
    inline bool AcceptBundleUpdateHasBeenSet() const { return m_acceptBundleUpdateHasBeenSet; }
    inline void SetAcceptBundleUpdate(bool value) { m_acceptBundleUpdateHasBeenSet = true; m_acceptBundleUpdate = value; }
    inline SetIpAddressTypeRequest& WithAcceptBundleUpdate(bool value) { SetAcceptBundleUpdate(value); return *this;}
    ///@}
  private:

    ResourceType m_resourceType{ResourceType::NOT_SET};
    bool m_resourceTypeHasBeenSet = false;

    Aws::String m_resourceName;
    bool m_resourceNameHasBeenSet = false;

    IpAddressType m_ipAddressType{IpAddressType::NOT_SET};
    bool m_ipAddressTypeHasBeenSet = false;

    bool m_acceptBundleUpdate{false};
    bool m_acceptBundleUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
