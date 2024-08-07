﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   */
  class UpdateVirtualInterfaceAttributesRequest : public DirectConnectRequest
  {
  public:
    AWS_DIRECTCONNECT_API UpdateVirtualInterfaceAttributesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateVirtualInterfaceAttributes"; }

    AWS_DIRECTCONNECT_API Aws::String SerializePayload() const override;

    AWS_DIRECTCONNECT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the virtual private interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceId() const{ return m_virtualInterfaceId; }
    inline bool VirtualInterfaceIdHasBeenSet() const { return m_virtualInterfaceIdHasBeenSet; }
    inline void SetVirtualInterfaceId(const Aws::String& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = value; }
    inline void SetVirtualInterfaceId(Aws::String&& value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId = std::move(value); }
    inline void SetVirtualInterfaceId(const char* value) { m_virtualInterfaceIdHasBeenSet = true; m_virtualInterfaceId.assign(value); }
    inline UpdateVirtualInterfaceAttributesRequest& WithVirtualInterfaceId(const Aws::String& value) { SetVirtualInterfaceId(value); return *this;}
    inline UpdateVirtualInterfaceAttributesRequest& WithVirtualInterfaceId(Aws::String&& value) { SetVirtualInterfaceId(std::move(value)); return *this;}
    inline UpdateVirtualInterfaceAttributesRequest& WithVirtualInterfaceId(const char* value) { SetVirtualInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum transmission unit (MTU), in bytes. The supported values are 1500
     * and 8500. The default value is 1500.</p>
     */
    inline int GetMtu() const{ return m_mtu; }
    inline bool MtuHasBeenSet() const { return m_mtuHasBeenSet; }
    inline void SetMtu(int value) { m_mtuHasBeenSet = true; m_mtu = value; }
    inline UpdateVirtualInterfaceAttributesRequest& WithMtu(int value) { SetMtu(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to enable or disable SiteLink.</p>
     */
    inline bool GetEnableSiteLink() const{ return m_enableSiteLink; }
    inline bool EnableSiteLinkHasBeenSet() const { return m_enableSiteLinkHasBeenSet; }
    inline void SetEnableSiteLink(bool value) { m_enableSiteLinkHasBeenSet = true; m_enableSiteLink = value; }
    inline UpdateVirtualInterfaceAttributesRequest& WithEnableSiteLink(bool value) { SetEnableSiteLink(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the virtual private interface.</p>
     */
    inline const Aws::String& GetVirtualInterfaceName() const{ return m_virtualInterfaceName; }
    inline bool VirtualInterfaceNameHasBeenSet() const { return m_virtualInterfaceNameHasBeenSet; }
    inline void SetVirtualInterfaceName(const Aws::String& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = value; }
    inline void SetVirtualInterfaceName(Aws::String&& value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName = std::move(value); }
    inline void SetVirtualInterfaceName(const char* value) { m_virtualInterfaceNameHasBeenSet = true; m_virtualInterfaceName.assign(value); }
    inline UpdateVirtualInterfaceAttributesRequest& WithVirtualInterfaceName(const Aws::String& value) { SetVirtualInterfaceName(value); return *this;}
    inline UpdateVirtualInterfaceAttributesRequest& WithVirtualInterfaceName(Aws::String&& value) { SetVirtualInterfaceName(std::move(value)); return *this;}
    inline UpdateVirtualInterfaceAttributesRequest& WithVirtualInterfaceName(const char* value) { SetVirtualInterfaceName(value); return *this;}
    ///@}
  private:

    Aws::String m_virtualInterfaceId;
    bool m_virtualInterfaceIdHasBeenSet = false;

    int m_mtu;
    bool m_mtuHasBeenSet = false;

    bool m_enableSiteLink;
    bool m_enableSiteLinkHasBeenSet = false;

    Aws::String m_virtualInterfaceName;
    bool m_virtualInterfaceNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
