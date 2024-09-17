/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotwireless/IoTWireless_EXPORTS.h>
#include <aws/iotwireless/IoTWirelessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotwireless/model/WirelessDeviceType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTWireless
{
namespace Model
{

  /**
   */
  class DeleteQueuedMessagesRequest : public IoTWirelessRequest
  {
  public:
    AWS_IOTWIRELESS_API DeleteQueuedMessagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteQueuedMessages"; }

    AWS_IOTWIRELESS_API Aws::String SerializePayload() const override;

    AWS_IOTWIRELESS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of a given wireless device for which downlink messages will be
     * deleted.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DeleteQueuedMessagesRequest& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DeleteQueuedMessagesRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DeleteQueuedMessagesRequest& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If message ID is <code>"*"</code>, it cleares the entire downlink queue for a
     * given device, specified by the wireless device ID. Otherwise, the downlink
     * message with the specified message ID will be deleted.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline DeleteQueuedMessagesRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline DeleteQueuedMessagesRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline DeleteQueuedMessagesRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The wireless device type, which can be either Sidewalk or LoRaWAN.</p>
     */
    inline const WirelessDeviceType& GetWirelessDeviceType() const{ return m_wirelessDeviceType; }
    inline bool WirelessDeviceTypeHasBeenSet() const { return m_wirelessDeviceTypeHasBeenSet; }
    inline void SetWirelessDeviceType(const WirelessDeviceType& value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = value; }
    inline void SetWirelessDeviceType(WirelessDeviceType&& value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = std::move(value); }
    inline DeleteQueuedMessagesRequest& WithWirelessDeviceType(const WirelessDeviceType& value) { SetWirelessDeviceType(value); return *this;}
    inline DeleteQueuedMessagesRequest& WithWirelessDeviceType(WirelessDeviceType&& value) { SetWirelessDeviceType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    WirelessDeviceType m_wirelessDeviceType;
    bool m_wirelessDeviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
