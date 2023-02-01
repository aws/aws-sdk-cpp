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
    AWS_IOTWIRELESS_API SendDataToMulticastGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendDataToMulticastGroup"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;


    
    inline const Aws::String& GetId() const{ return m_id; }

    
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    
    inline SendDataToMulticastGroupRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    
    inline SendDataToMulticastGroupRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    
    inline SendDataToMulticastGroupRequest& WithId(const char* value) { SetId(value); return *this;}


    
    inline const Aws::String& GetPayloadData() const{ return m_payloadData; }

    
    inline bool PayloadDataHasBeenSet() const { return m_payloadDataHasBeenSet; }

    
    inline void SetPayloadData(const Aws::String& value) { m_payloadDataHasBeenSet = true; m_payloadData = value; }

    
    inline void SetPayloadData(Aws::String&& value) { m_payloadDataHasBeenSet = true; m_payloadData = std::move(value); }

    
    inline void SetPayloadData(const char* value) { m_payloadDataHasBeenSet = true; m_payloadData.assign(value); }

    
    inline SendDataToMulticastGroupRequest& WithPayloadData(const Aws::String& value) { SetPayloadData(value); return *this;}

    
    inline SendDataToMulticastGroupRequest& WithPayloadData(Aws::String&& value) { SetPayloadData(std::move(value)); return *this;}

    
    inline SendDataToMulticastGroupRequest& WithPayloadData(const char* value) { SetPayloadData(value); return *this;}


    
    inline const MulticastWirelessMetadata& GetWirelessMetadata() const{ return m_wirelessMetadata; }

    
    inline bool WirelessMetadataHasBeenSet() const { return m_wirelessMetadataHasBeenSet; }

    
    inline void SetWirelessMetadata(const MulticastWirelessMetadata& value) { m_wirelessMetadataHasBeenSet = true; m_wirelessMetadata = value; }

    
    inline void SetWirelessMetadata(MulticastWirelessMetadata&& value) { m_wirelessMetadataHasBeenSet = true; m_wirelessMetadata = std::move(value); }

    
    inline SendDataToMulticastGroupRequest& WithWirelessMetadata(const MulticastWirelessMetadata& value) { SetWirelessMetadata(value); return *this;}

    
    inline SendDataToMulticastGroupRequest& WithWirelessMetadata(MulticastWirelessMetadata&& value) { SetWirelessMetadata(std::move(value)); return *this;}

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
