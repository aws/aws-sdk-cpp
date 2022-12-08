/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessMetadata.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class SendDataToWirelessDeviceRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API SendDataToWirelessDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendDataToWirelessDevice"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the wireless device to receive the data.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the wireless device to receive the data.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the wireless device to receive the data.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the wireless device to receive the data.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the wireless device to receive the data.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the wireless device to receive the data.</p>
     */
    inline SendDataToWirelessDeviceRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the wireless device to receive the data.</p>
     */
    inline SendDataToWirelessDeviceRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the wireless device to receive the data.</p>
     */
    inline SendDataToWirelessDeviceRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The transmit mode to use to send data to the wireless device. Can be:
     * <code>0</code> for UM (unacknowledge mode) or <code>1</code> for AM (acknowledge
     * mode).</p>
     */
    inline int GetTransmitMode() const{ return m_transmitMode; }

    /**
     * <p>The transmit mode to use to send data to the wireless device. Can be:
     * <code>0</code> for UM (unacknowledge mode) or <code>1</code> for AM (acknowledge
     * mode).</p>
     */
    inline bool TransmitModeHasBeenSet() const { return m_transmitModeHasBeenSet; }

    /**
     * <p>The transmit mode to use to send data to the wireless device. Can be:
     * <code>0</code> for UM (unacknowledge mode) or <code>1</code> for AM (acknowledge
     * mode).</p>
     */
    inline void SetTransmitMode(int value) { m_transmitModeHasBeenSet = true; m_transmitMode = value; }

    /**
     * <p>The transmit mode to use to send data to the wireless device. Can be:
     * <code>0</code> for UM (unacknowledge mode) or <code>1</code> for AM (acknowledge
     * mode).</p>
     */
    inline SendDataToWirelessDeviceRequest& WithTransmitMode(int value) { SetTransmitMode(value); return *this;}


    
    inline const Aws::String& GetPayloadData() const{ return m_payloadData; }

    
    inline bool PayloadDataHasBeenSet() const { return m_payloadDataHasBeenSet; }

    
    inline void SetPayloadData(const Aws::String& value) { m_payloadDataHasBeenSet = true; m_payloadData = value; }

    
    inline void SetPayloadData(Aws::String&& value) { m_payloadDataHasBeenSet = true; m_payloadData = std::move(value); }

    
    inline void SetPayloadData(const char* value) { m_payloadDataHasBeenSet = true; m_payloadData.assign(value); }

    
    inline SendDataToWirelessDeviceRequest& WithPayloadData(const Aws::String& value) { SetPayloadData(value); return *this;}

    
    inline SendDataToWirelessDeviceRequest& WithPayloadData(Aws::String&& value) { SetPayloadData(std::move(value)); return *this;}

    
    inline SendDataToWirelessDeviceRequest& WithPayloadData(const char* value) { SetPayloadData(value); return *this;}


    /**
     * <p>Metadata about the message request.</p>
     */
    inline const WirelessMetadata& GetWirelessMetadata() const{ return m_wirelessMetadata; }

    /**
     * <p>Metadata about the message request.</p>
     */
    inline bool WirelessMetadataHasBeenSet() const { return m_wirelessMetadataHasBeenSet; }

    /**
     * <p>Metadata about the message request.</p>
     */
    inline void SetWirelessMetadata(const WirelessMetadata& value) { m_wirelessMetadataHasBeenSet = true; m_wirelessMetadata = value; }

    /**
     * <p>Metadata about the message request.</p>
     */
    inline void SetWirelessMetadata(WirelessMetadata&& value) { m_wirelessMetadataHasBeenSet = true; m_wirelessMetadata = std::move(value); }

    /**
     * <p>Metadata about the message request.</p>
     */
    inline SendDataToWirelessDeviceRequest& WithWirelessMetadata(const WirelessMetadata& value) { SetWirelessMetadata(value); return *this;}

    /**
     * <p>Metadata about the message request.</p>
     */
    inline SendDataToWirelessDeviceRequest& WithWirelessMetadata(WirelessMetadata&& value) { SetWirelessMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_transmitMode;
    bool m_transmitModeHasBeenSet = false;

    Aws::String m_payloadData;
    bool m_payloadDataHasBeenSet = false;

    WirelessMetadata m_wirelessMetadata;
    bool m_wirelessMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
