/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ivschat
{
namespace Model
{

  /**
   */
  class SendEventRequest : public IvschatRequest
  {
  public:
    AWS_IVSCHAT_API SendEventRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendEvent"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline SendEventRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline SendEventRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline SendEventRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline SendEventRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline SendEventRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline SendEventRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline SendEventRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline SendEventRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline SendEventRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Application-defined name of the event to send to clients.</p>
     */
    inline const Aws::String& GetEventName() const{ return m_eventName; }

    /**
     * <p>Application-defined name of the event to send to clients.</p>
     */
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }

    /**
     * <p>Application-defined name of the event to send to clients.</p>
     */
    inline void SetEventName(const Aws::String& value) { m_eventNameHasBeenSet = true; m_eventName = value; }

    /**
     * <p>Application-defined name of the event to send to clients.</p>
     */
    inline void SetEventName(Aws::String&& value) { m_eventNameHasBeenSet = true; m_eventName = std::move(value); }

    /**
     * <p>Application-defined name of the event to send to clients.</p>
     */
    inline void SetEventName(const char* value) { m_eventNameHasBeenSet = true; m_eventName.assign(value); }

    /**
     * <p>Application-defined name of the event to send to clients.</p>
     */
    inline SendEventRequest& WithEventName(const Aws::String& value) { SetEventName(value); return *this;}

    /**
     * <p>Application-defined name of the event to send to clients.</p>
     */
    inline SendEventRequest& WithEventName(Aws::String&& value) { SetEventName(std::move(value)); return *this;}

    /**
     * <p>Application-defined name of the event to send to clients.</p>
     */
    inline SendEventRequest& WithEventName(const char* value) { SetEventName(value); return *this;}


    /**
     * <p>Identifier of the room to which the event will be sent. Currently this must
     * be an ARN.</p>
     */
    inline const Aws::String& GetRoomIdentifier() const{ return m_roomIdentifier; }

    /**
     * <p>Identifier of the room to which the event will be sent. Currently this must
     * be an ARN.</p>
     */
    inline bool RoomIdentifierHasBeenSet() const { return m_roomIdentifierHasBeenSet; }

    /**
     * <p>Identifier of the room to which the event will be sent. Currently this must
     * be an ARN.</p>
     */
    inline void SetRoomIdentifier(const Aws::String& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = value; }

    /**
     * <p>Identifier of the room to which the event will be sent. Currently this must
     * be an ARN.</p>
     */
    inline void SetRoomIdentifier(Aws::String&& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = std::move(value); }

    /**
     * <p>Identifier of the room to which the event will be sent. Currently this must
     * be an ARN.</p>
     */
    inline void SetRoomIdentifier(const char* value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier.assign(value); }

    /**
     * <p>Identifier of the room to which the event will be sent. Currently this must
     * be an ARN.</p>
     */
    inline SendEventRequest& WithRoomIdentifier(const Aws::String& value) { SetRoomIdentifier(value); return *this;}

    /**
     * <p>Identifier of the room to which the event will be sent. Currently this must
     * be an ARN.</p>
     */
    inline SendEventRequest& WithRoomIdentifier(Aws::String&& value) { SetRoomIdentifier(std::move(value)); return *this;}

    /**
     * <p>Identifier of the room to which the event will be sent. Currently this must
     * be an ARN.</p>
     */
    inline SendEventRequest& WithRoomIdentifier(const char* value) { SetRoomIdentifier(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet = false;

    Aws::String m_roomIdentifier;
    bool m_roomIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
