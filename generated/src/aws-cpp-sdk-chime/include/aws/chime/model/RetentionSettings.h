﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/model/RoomRetentionSettings.h>
#include <aws/chime/model/ConversationRetentionSettings.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The retention settings for an Amazon Chime Enterprise account that determine
   * how long to retain items such as chat-room messages and chat-conversation
   * messages.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RetentionSettings">AWS
   * API Reference</a></p>
   */
  class RetentionSettings
  {
  public:
    AWS_CHIME_API RetentionSettings();
    AWS_CHIME_API RetentionSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API RetentionSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The chat room retention settings.</p>
     */
    inline const RoomRetentionSettings& GetRoomRetentionSettings() const{ return m_roomRetentionSettings; }
    inline bool RoomRetentionSettingsHasBeenSet() const { return m_roomRetentionSettingsHasBeenSet; }
    inline void SetRoomRetentionSettings(const RoomRetentionSettings& value) { m_roomRetentionSettingsHasBeenSet = true; m_roomRetentionSettings = value; }
    inline void SetRoomRetentionSettings(RoomRetentionSettings&& value) { m_roomRetentionSettingsHasBeenSet = true; m_roomRetentionSettings = std::move(value); }
    inline RetentionSettings& WithRoomRetentionSettings(const RoomRetentionSettings& value) { SetRoomRetentionSettings(value); return *this;}
    inline RetentionSettings& WithRoomRetentionSettings(RoomRetentionSettings&& value) { SetRoomRetentionSettings(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The chat conversation retention settings.</p>
     */
    inline const ConversationRetentionSettings& GetConversationRetentionSettings() const{ return m_conversationRetentionSettings; }
    inline bool ConversationRetentionSettingsHasBeenSet() const { return m_conversationRetentionSettingsHasBeenSet; }
    inline void SetConversationRetentionSettings(const ConversationRetentionSettings& value) { m_conversationRetentionSettingsHasBeenSet = true; m_conversationRetentionSettings = value; }
    inline void SetConversationRetentionSettings(ConversationRetentionSettings&& value) { m_conversationRetentionSettingsHasBeenSet = true; m_conversationRetentionSettings = std::move(value); }
    inline RetentionSettings& WithConversationRetentionSettings(const ConversationRetentionSettings& value) { SetConversationRetentionSettings(value); return *this;}
    inline RetentionSettings& WithConversationRetentionSettings(ConversationRetentionSettings&& value) { SetConversationRetentionSettings(std::move(value)); return *this;}
    ///@}
  private:

    RoomRetentionSettings m_roomRetentionSettings;
    bool m_roomRetentionSettingsHasBeenSet = false;

    ConversationRetentionSettings m_conversationRetentionSettings;
    bool m_conversationRetentionSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
