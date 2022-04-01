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
  class AWS_IOTWIRELESS_API DeleteQueuedMessagesRequest : public IoTWirelessRequest
  {
  public:
    DeleteQueuedMessagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteQueuedMessages"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Id of a given wireless device which messages will be deleted </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Id of a given wireless device which messages will be deleted </p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>Id of a given wireless device which messages will be deleted </p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>Id of a given wireless device which messages will be deleted </p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>Id of a given wireless device which messages will be deleted </p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>Id of a given wireless device which messages will be deleted </p>
     */
    inline DeleteQueuedMessagesRequest& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Id of a given wireless device which messages will be deleted </p>
     */
    inline DeleteQueuedMessagesRequest& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Id of a given wireless device which messages will be deleted </p>
     */
    inline DeleteQueuedMessagesRequest& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>if messageID=="*", the queue for a particular wireless deviceId will be
     * purged, otherwise, the specific message with messageId will be deleted </p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }

    /**
     * <p>if messageID=="*", the queue for a particular wireless deviceId will be
     * purged, otherwise, the specific message with messageId will be deleted </p>
     */
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }

    /**
     * <p>if messageID=="*", the queue for a particular wireless deviceId will be
     * purged, otherwise, the specific message with messageId will be deleted </p>
     */
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }

    /**
     * <p>if messageID=="*", the queue for a particular wireless deviceId will be
     * purged, otherwise, the specific message with messageId will be deleted </p>
     */
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }

    /**
     * <p>if messageID=="*", the queue for a particular wireless deviceId will be
     * purged, otherwise, the specific message with messageId will be deleted </p>
     */
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }

    /**
     * <p>if messageID=="*", the queue for a particular wireless deviceId will be
     * purged, otherwise, the specific message with messageId will be deleted </p>
     */
    inline DeleteQueuedMessagesRequest& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}

    /**
     * <p>if messageID=="*", the queue for a particular wireless deviceId will be
     * purged, otherwise, the specific message with messageId will be deleted </p>
     */
    inline DeleteQueuedMessagesRequest& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}

    /**
     * <p>if messageID=="*", the queue for a particular wireless deviceId will be
     * purged, otherwise, the specific message with messageId will be deleted </p>
     */
    inline DeleteQueuedMessagesRequest& WithMessageId(const char* value) { SetMessageId(value); return *this;}


    /**
     * <p>The wireless device type, it is either Sidewalk or LoRaWAN. </p>
     */
    inline const WirelessDeviceType& GetWirelessDeviceType() const{ return m_wirelessDeviceType; }

    /**
     * <p>The wireless device type, it is either Sidewalk or LoRaWAN. </p>
     */
    inline bool WirelessDeviceTypeHasBeenSet() const { return m_wirelessDeviceTypeHasBeenSet; }

    /**
     * <p>The wireless device type, it is either Sidewalk or LoRaWAN. </p>
     */
    inline void SetWirelessDeviceType(const WirelessDeviceType& value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = value; }

    /**
     * <p>The wireless device type, it is either Sidewalk or LoRaWAN. </p>
     */
    inline void SetWirelessDeviceType(WirelessDeviceType&& value) { m_wirelessDeviceTypeHasBeenSet = true; m_wirelessDeviceType = std::move(value); }

    /**
     * <p>The wireless device type, it is either Sidewalk or LoRaWAN. </p>
     */
    inline DeleteQueuedMessagesRequest& WithWirelessDeviceType(const WirelessDeviceType& value) { SetWirelessDeviceType(value); return *this;}

    /**
     * <p>The wireless device type, it is either Sidewalk or LoRaWAN. </p>
     */
    inline DeleteQueuedMessagesRequest& WithWirelessDeviceType(WirelessDeviceType&& value) { SetWirelessDeviceType(std::move(value)); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet;

    WirelessDeviceType m_wirelessDeviceType;
    bool m_wirelessDeviceTypeHasBeenSet;
  };

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
