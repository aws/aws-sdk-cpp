/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
    AWS_IVSCHAT_API SendEventRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SendEvent"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Identifier of the room to which the event will be sent. Currently this must
     * be an ARN.</p>
     */
    inline const Aws::String& GetRoomIdentifier() const { return m_roomIdentifier; }
    inline bool RoomIdentifierHasBeenSet() const { return m_roomIdentifierHasBeenSet; }
    template<typename RoomIdentifierT = Aws::String>
    void SetRoomIdentifier(RoomIdentifierT&& value) { m_roomIdentifierHasBeenSet = true; m_roomIdentifier = std::forward<RoomIdentifierT>(value); }
    template<typename RoomIdentifierT = Aws::String>
    SendEventRequest& WithRoomIdentifier(RoomIdentifierT&& value) { SetRoomIdentifier(std::forward<RoomIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-defined name of the event to send to clients.</p>
     */
    inline const Aws::String& GetEventName() const { return m_eventName; }
    inline bool EventNameHasBeenSet() const { return m_eventNameHasBeenSet; }
    template<typename EventNameT = Aws::String>
    void SetEventName(EventNameT&& value) { m_eventNameHasBeenSet = true; m_eventName = std::forward<EventNameT>(value); }
    template<typename EventNameT = Aws::String>
    SendEventRequest& WithEventName(EventNameT&& value) { SetEventName(std::forward<EventNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Application-defined metadata to attach to the event sent to clients. The
     * maximum length of the metadata is 1 KB total.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    SendEventRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    SendEventRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_roomIdentifier;
    bool m_roomIdentifierHasBeenSet = false;

    Aws::String m_eventName;
    bool m_eventNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
