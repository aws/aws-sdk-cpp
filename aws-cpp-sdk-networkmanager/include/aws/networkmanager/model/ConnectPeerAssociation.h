/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/ConnectPeerAssociationState.h>
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
   * <p>Describes a core network Connect peer association.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/ConnectPeerAssociation">AWS
   * API Reference</a></p>
   */
  class ConnectPeerAssociation
  {
  public:
    AWS_NETWORKMANAGER_API ConnectPeerAssociation();
    AWS_NETWORKMANAGER_API ConnectPeerAssociation(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API ConnectPeerAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKMANAGER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline const Aws::String& GetConnectPeerId() const{ return m_connectPeerId; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline bool ConnectPeerIdHasBeenSet() const { return m_connectPeerIdHasBeenSet; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetConnectPeerId(const Aws::String& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = value; }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetConnectPeerId(Aws::String&& value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId = std::move(value); }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline void SetConnectPeerId(const char* value) { m_connectPeerIdHasBeenSet = true; m_connectPeerId.assign(value); }

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline ConnectPeerAssociation& WithConnectPeerId(const Aws::String& value) { SetConnectPeerId(value); return *this;}

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline ConnectPeerAssociation& WithConnectPeerId(Aws::String&& value) { SetConnectPeerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Connect peer.</p>
     */
    inline ConnectPeerAssociation& WithConnectPeerId(const char* value) { SetConnectPeerId(value); return *this;}


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
    inline ConnectPeerAssociation& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline ConnectPeerAssociation& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline ConnectPeerAssociation& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The ID of the device to connect to.</p>
     */
    inline const Aws::String& GetDeviceId() const{ return m_deviceId; }

    /**
     * <p>The ID of the device to connect to.</p>
     */
    inline bool DeviceIdHasBeenSet() const { return m_deviceIdHasBeenSet; }

    /**
     * <p>The ID of the device to connect to.</p>
     */
    inline void SetDeviceId(const Aws::String& value) { m_deviceIdHasBeenSet = true; m_deviceId = value; }

    /**
     * <p>The ID of the device to connect to.</p>
     */
    inline void SetDeviceId(Aws::String&& value) { m_deviceIdHasBeenSet = true; m_deviceId = std::move(value); }

    /**
     * <p>The ID of the device to connect to.</p>
     */
    inline void SetDeviceId(const char* value) { m_deviceIdHasBeenSet = true; m_deviceId.assign(value); }

    /**
     * <p>The ID of the device to connect to.</p>
     */
    inline ConnectPeerAssociation& WithDeviceId(const Aws::String& value) { SetDeviceId(value); return *this;}

    /**
     * <p>The ID of the device to connect to.</p>
     */
    inline ConnectPeerAssociation& WithDeviceId(Aws::String&& value) { SetDeviceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the device to connect to.</p>
     */
    inline ConnectPeerAssociation& WithDeviceId(const char* value) { SetDeviceId(value); return *this;}


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
    inline ConnectPeerAssociation& WithLinkId(const Aws::String& value) { SetLinkId(value); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline ConnectPeerAssociation& WithLinkId(Aws::String&& value) { SetLinkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the link.</p>
     */
    inline ConnectPeerAssociation& WithLinkId(const char* value) { SetLinkId(value); return *this;}


    /**
     * <p>The state of the Connect peer association.</p>
     */
    inline const ConnectPeerAssociationState& GetState() const{ return m_state; }

    /**
     * <p>The state of the Connect peer association.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The state of the Connect peer association.</p>
     */
    inline void SetState(const ConnectPeerAssociationState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The state of the Connect peer association.</p>
     */
    inline void SetState(ConnectPeerAssociationState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The state of the Connect peer association.</p>
     */
    inline ConnectPeerAssociation& WithState(const ConnectPeerAssociationState& value) { SetState(value); return *this;}

    /**
     * <p>The state of the Connect peer association.</p>
     */
    inline ConnectPeerAssociation& WithState(ConnectPeerAssociationState&& value) { SetState(std::move(value)); return *this;}

  private:

    Aws::String m_connectPeerId;
    bool m_connectPeerIdHasBeenSet = false;

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    Aws::String m_deviceId;
    bool m_deviceIdHasBeenSet = false;

    Aws::String m_linkId;
    bool m_linkIdHasBeenSet = false;

    ConnectPeerAssociationState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
