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
    AWS_IOTWIRELESS_API SendDataToWirelessDeviceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendDataToWirelessDevice"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the wireless device to receive the data.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SendDataToWirelessDeviceRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transmit mode to use to send data to the wireless device. Can be:
     * <code>0</code> for UM (unacknowledge mode) or <code>1</code> for AM (acknowledge
     * mode).</p>
     */
    inline int GetTransmitMode() const { return m_transmitMode; }
    inline bool TransmitModeHasBeenSet() const { return m_transmitModeHasBeenSet; }
    inline void SetTransmitMode(int value) { m_transmitModeHasBeenSet = true; m_transmitMode = value; }
    inline SendDataToWirelessDeviceRequest& WithTransmitMode(int value) { SetTransmitMode(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPayloadData() const { return m_payloadData; }
    inline bool PayloadDataHasBeenSet() const { return m_payloadDataHasBeenSet; }
    template<typename PayloadDataT = Aws::String>
    void SetPayloadData(PayloadDataT&& value) { m_payloadDataHasBeenSet = true; m_payloadData = std::forward<PayloadDataT>(value); }
    template<typename PayloadDataT = Aws::String>
    SendDataToWirelessDeviceRequest& WithPayloadData(PayloadDataT&& value) { SetPayloadData(std::forward<PayloadDataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata about the message request.</p>
     */
    inline const WirelessMetadata& GetWirelessMetadata() const { return m_wirelessMetadata; }
    inline bool WirelessMetadataHasBeenSet() const { return m_wirelessMetadataHasBeenSet; }
    template<typename WirelessMetadataT = WirelessMetadata>
    void SetWirelessMetadata(WirelessMetadataT&& value) { m_wirelessMetadataHasBeenSet = true; m_wirelessMetadata = std::forward<WirelessMetadataT>(value); }
    template<typename WirelessMetadataT = WirelessMetadata>
    SendDataToWirelessDeviceRequest& WithWirelessMetadata(WirelessMetadataT&& value) { SetWirelessMetadata(std::forward<WirelessMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_transmitMode{0};
    bool m_transmitModeHasBeenSet = false;

    Aws::String m_payloadData;
    bool m_payloadDataHasBeenSet = false;

    WirelessMetadata m_wirelessMetadata;
    bool m_wirelessMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
