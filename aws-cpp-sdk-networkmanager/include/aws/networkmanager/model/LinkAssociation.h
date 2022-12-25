/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/LinkAssociationState.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the association between a device and a link.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/LinkAssociation">AWS
   * API Reference</a></p>
   */
  class LinkAssociation
  {
  public:
    AWS_NETWORKMANAGER_API LinkAssociation();
    AWS_NETWORKMANAGER_API LinkAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API LinkAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline LinkAssociation& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline LinkAssociation& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline LinkAssociation& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The device ID for the link association.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The device ID for the link association.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The device ID for the link association.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The device ID for the link association.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The device ID for the link association.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The device ID for the link association.</p>
     */
    inline LinkAssociation& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The device ID for the link association.</p>
     */
    inline LinkAssociation& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The device ID for the link association.</p>
     */
    inline LinkAssociation& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


    /**
     * <p>The ID of the link.</p>
     */
    inline const Aws::String& GetLinkId() const{ return m_linkId; }

    /**
     * <p>The ID of the link.</p>
     */
    inline bool LinkIdHasBeenSet() const { return m_linkIdHasBeenSet; }

    /**
     * <p>The ID of the link.</p>
     */
    inline void SetLinkId(const Aws::String& value) { m_linkIdHasBeenSet = true; m_linkId = value; }

    /**
     * <p>The ID of the link.</p>
     */
    inline void SetLinkId(Aws::String&& value) { m_linkIdHasBeenSet = true; m_linkId = std::move(value); }

    /**
     * <p>The ID of the link.</p>
     */
    inline void SetLinkId(const char* value) { m_linkIdHasBeenSet = true; m_linkId.assign(value); }

    /**
     * <p>The ID of the link.</p>
     */
    inline LinkAssociation& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline LinkAssociation& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline LinkAssociation& WithLinkId(const char* value) { SetLinkId(value); return *this;}


    /**
     * <p>The state of the association.</p>
     */
    inline const LinkAssociationState& GetLinkAssociationState() const{ return m_linkAssociationState; }

    /**
     * <p>The state of the association.</p>
     */
    inline bool LinkAssociationStateHasBeenSet() const { return m_linkAssociationStateHasBeenSet; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetLinkAssociationState(const LinkAssociationState& value) { m_linkAssociationStateHasBeenSet = true; m_linkAssociationState = value; }

    /**
     * <p>The state of the association.</p>
     */
    inline void SetLinkAssociationState(LinkAssociationState&& value) { m_linkAssociationStateHasBeenSet = true; m_linkAssociationState = std::move(value); }

    /**
     * <p>The state of the association.</p>
     */
    inline LinkAssociation& WithLinkAssociationState(const LinkAssociationState& value) { SetLinkAssociationState(value); return *this;}

    /**
     * <p>The state of the association.</p>
     */
    inline LinkAssociation& WithLinkAssociationState(LinkAssociationState&& value) { SetLinkAssociationState(std::move(value)); return *this;}

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    LinkAssociationState m_linkAssociationState;
    bool m_linkAssociationStateHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
