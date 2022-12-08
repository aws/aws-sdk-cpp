/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   * <p>The details of a channel moderator.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelModerator">AWS
   * API Reference</a></p>
   */
  class ChannelModerator
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelModerator();
    AWS_CHIMESDKMESSAGING_API ChannelModerator(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelModerator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The moderator's data.</p>
     */
    inline const Identity& GetModerator() const{ return m_moderator; }

    /**
     * <p>The moderator's data.</p>
     */
    inline bool ModeratorHasBeenSet() const { return m_moderatorHasBeenSet; }

    /**
     * <p>The moderator's data.</p>
     */
    inline void SetModerator(const Identity& value) { m_moderatorHasBeenSet = true; m_moderator = value; }

    /**
     * <p>The moderator's data.</p>
     */
    inline void SetModerator(Identity&& value) { m_moderatorHasBeenSet = true; m_moderator = std::move(value); }

    /**
     * <p>The moderator's data.</p>
     */
    inline ChannelModerator& WithModerator(const Identity& value) { SetModerator(value); return *this;}

    /**
     * <p>The moderator's data.</p>
     */
    inline ChannelModerator& WithModerator(Identity&& value) { SetModerator(std::move(value)); return *this;}


    /**
     * <p>The ARN of the moderator's channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the moderator's channel.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the moderator's channel.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the moderator's channel.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the moderator's channel.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the moderator's channel.</p>
     */
    inline ChannelModerator& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the moderator's channel.</p>
     */
    inline ChannelModerator& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the moderator's channel.</p>
     */
    inline ChannelModerator& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The time at which the moderator was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the moderator was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the moderator was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the moderator was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the moderator was created.</p>
     */
    inline ChannelModerator& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the moderator was created.</p>
     */
    inline ChannelModerator& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The <code>AppInstanceUser</code> who created the moderator.</p>
     */
    inline const Identity& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The <code>AppInstanceUser</code> who created the moderator.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUser</code> who created the moderator.</p>
     */
    inline void SetCreatedBy(const Identity& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The <code>AppInstanceUser</code> who created the moderator.</p>
     */
    inline void SetCreatedBy(Identity&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The <code>AppInstanceUser</code> who created the moderator.</p>
     */
    inline ChannelModerator& WithCreatedBy(const Identity& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The <code>AppInstanceUser</code> who created the moderator.</p>
     */
    inline ChannelModerator& WithCreatedBy(Identity&& value) { SetCreatedBy(std::move(value)); return *this;}

  private:

    Identity m_moderator;
    bool m_moderatorHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Identity m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
