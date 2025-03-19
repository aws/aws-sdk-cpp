/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/MulticastWirelessMetadata.h>
#include <utility>

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class SendDataToMulticastGroupRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API SendDataToMulticastGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendDataToMulticastGroup"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SendDataToMulticastGroupRequest& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPayloadData() const { return m_payloadData; }
    inline bool PayloadDataHasBeenSet() const { return m_payloadDataHasBeenSet; }
    template<typename PayloadDataT = Aws::String>
    void SetPayloadData(PayloadDataT&& value) { m_payloadDataHasBeenSet = true; m_payloadData = std::forward<PayloadDataT>(value); }
    template<typename PayloadDataT = Aws::String>
    SendDataToMulticastGroupRequest& WithPayloadData(PayloadDataT&& value) { SetPayloadData(std::forward<PayloadDataT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const MulticastWirelessMetadata& GetWirelessMetadata() const { return m_wirelessMetadata; }
    inline bool WirelessMetadataHasBeenSet() const { return m_wirelessMetadataHasBeenSet; }
    template<typename WirelessMetadataT = MulticastWirelessMetadata>
    void SetWirelessMetadata(WirelessMetadataT&& value) { m_wirelessMetadataHasBeenSet = true; m_wirelessMetadata = std::forward<WirelessMetadataT>(value); }
    template<typename WirelessMetadataT = MulticastWirelessMetadata>
    SendDataToMulticastGroupRequest& WithWirelessMetadata(WirelessMetadataT&& value) { SetWirelessMetadata(std::forward<WirelessMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_payloadData;
    bool m_payloadDataHasBeenSet = false;

    MulticastWirelessMetadata m_wirelessMetadata;
    bool m_wirelessMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
