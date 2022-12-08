/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/outposts/Outposts_EXPORTS.h>
#include <aws/outposts/OutpostsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Outposts
{
namespace Model
{

  /**
   */
  class StartConnectionRequest : public OutpostsRequest
  {
  public:
    AWS_OUTPOSTS_API StartConnectionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartConnection"; }

    AWS_OUTPOSTS_API Aws::String SerializePayload() const override;


    /**
     * <p> The serial number of the dongle. </p>
     */
    inline const Aws::String& GetDeviceSerialNumber() const{ return m_deviceSerialNumber; }

    /**
     * <p> The serial number of the dongle. </p>
     */
    inline bool DeviceSerialNumberHasBeenSet() const { return m_deviceSerialNumberHasBeenSet; }

    /**
     * <p> The serial number of the dongle. </p>
     */
    inline void SetDeviceSerialNumber(const Aws::String& value) { m_deviceSerialNumberHasBeenSet = true; m_deviceSerialNumber = value; }

    /**
     * <p> The serial number of the dongle. </p>
     */
    inline void SetDeviceSerialNumber(Aws::String&& value) { m_deviceSerialNumberHasBeenSet = true; m_deviceSerialNumber = std::move(value); }

    /**
     * <p> The serial number of the dongle. </p>
     */
    inline void SetDeviceSerialNumber(const char* value) { m_deviceSerialNumberHasBeenSet = true; m_deviceSerialNumber.assign(value); }

    /**
     * <p> The serial number of the dongle. </p>
     */
    inline StartConnectionRequest& WithDeviceSerialNumber(const Aws::String& value) { SetDeviceSerialNumber(value); return *this;}

    /**
     * <p> The serial number of the dongle. </p>
     */
    inline StartConnectionRequest& WithDeviceSerialNumber(Aws::String&& value) { SetDeviceSerialNumber(std::move(value)); return *this;}

    /**
     * <p> The serial number of the dongle. </p>
     */
    inline StartConnectionRequest& WithDeviceSerialNumber(const char* value) { SetDeviceSerialNumber(value); return *this;}


    /**
     * <p> The ID of the Outpost server. </p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p> The ID of the Outpost server. </p>
     */
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }

    /**
     * <p> The ID of the Outpost server. </p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }

    /**
     * <p> The ID of the Outpost server. </p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }

    /**
     * <p> The ID of the Outpost server. </p>
     */
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }

    /**
     * <p> The ID of the Outpost server. </p>
     */
    inline StartConnectionRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p> The ID of the Outpost server. </p>
     */
    inline StartConnectionRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p> The ID of the Outpost server. </p>
     */
    inline StartConnectionRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p> The public key of the client. </p>
     */
    inline const Aws::String& GetClientPublicKey() const{ return m_clientPublicKey; }

    /**
     * <p> The public key of the client. </p>
     */
    inline bool ClientPublicKeyHasBeenSet() const { return m_clientPublicKeyHasBeenSet; }

    /**
     * <p> The public key of the client. </p>
     */
    inline void SetClientPublicKey(const Aws::String& value) { m_clientPublicKeyHasBeenSet = true; m_clientPublicKey = value; }

    /**
     * <p> The public key of the client. </p>
     */
    inline void SetClientPublicKey(Aws::String&& value) { m_clientPublicKeyHasBeenSet = true; m_clientPublicKey = std::move(value); }

    /**
     * <p> The public key of the client. </p>
     */
    inline void SetClientPublicKey(const char* value) { m_clientPublicKeyHasBeenSet = true; m_clientPublicKey.assign(value); }

    /**
     * <p> The public key of the client. </p>
     */
    inline StartConnectionRequest& WithClientPublicKey(const Aws::String& value) { SetClientPublicKey(value); return *this;}

    /**
     * <p> The public key of the client. </p>
     */
    inline StartConnectionRequest& WithClientPublicKey(Aws::String&& value) { SetClientPublicKey(std::move(value)); return *this;}

    /**
     * <p> The public key of the client. </p>
     */
    inline StartConnectionRequest& WithClientPublicKey(const char* value) { SetClientPublicKey(value); return *this;}


    /**
     * <p> The device index of the network interface on the Outpost server. </p>
     */
    inline int GetNetworkInterfaceDeviceIndex() const{ return m_networkInterfaceDeviceIndex; }

    /**
     * <p> The device index of the network interface on the Outpost server. </p>
     */
    inline bool NetworkInterfaceDeviceIndexHasBeenSet() const { return m_networkInterfaceDeviceIndexHasBeenSet; }

    /**
     * <p> The device index of the network interface on the Outpost server. </p>
     */
    inline void SetNetworkInterfaceDeviceIndex(int value) { m_networkInterfaceDeviceIndexHasBeenSet = true; m_networkInterfaceDeviceIndex = value; }

    /**
     * <p> The device index of the network interface on the Outpost server. </p>
     */
    inline StartConnectionRequest& WithNetworkInterfaceDeviceIndex(int value) { SetNetworkInterfaceDeviceIndex(value); return *this;}

  private:

    Aws::String m_deviceSerialNumber;
    bool m_deviceSerialNumberHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_clientPublicKey;
    bool m_clientPublicKeyHasBeenSet = false;

    int m_networkInterfaceDeviceIndex;
    bool m_networkInterfaceDeviceIndexHasBeenSet = false;
  };

} // namespace Model
} // namespace Outposts
} // namespace Aws
