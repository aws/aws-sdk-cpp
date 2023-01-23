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
   * <p>The details of a channel ban.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelBan">AWS
   * API Reference</a></p>
   */
  class ChannelBan
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelBan();
    AWS_CHIMESDKMESSAGING_API ChannelBan(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelBan& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The member being banned from the channel.</p>
     */
    inline const Identity& GetMember() const{ return m_member; }

    /**
     * <p>The member being banned from the channel.</p>
     */
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }

    /**
     * <p>The member being banned from the channel.</p>
     */
    inline void SetMember(const Identity& value) { m_memberHasBeenSet = true; m_member = value; }

    /**
     * <p>The member being banned from the channel.</p>
     */
    inline void SetMember(Identity&& value) { m_memberHasBeenSet = true; m_member = std::move(value); }

    /**
     * <p>The member being banned from the channel.</p>
     */
    inline ChannelBan& WithMember(const Identity& value) { SetMember(value); return *this;}

    /**
     * <p>The member being banned from the channel.</p>
     */
    inline ChannelBan& WithMember(Identity&& value) { SetMember(std::move(value)); return *this;}


    /**
     * <p>The ARN of the channel from which a member is being banned.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel from which a member is being banned.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel from which a member is being banned.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel from which a member is being banned.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel from which a member is being banned.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel from which a member is being banned.</p>
     */
    inline ChannelBan& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel from which a member is being banned.</p>
     */
    inline ChannelBan& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel from which a member is being banned.</p>
     */
    inline ChannelBan& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The time at which the ban was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }

    /**
     * <p>The time at which the ban was created.</p>
     */
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }

    /**
     * <p>The time at which the ban was created.</p>
     */
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }

    /**
     * <p>The time at which the ban was created.</p>
     */
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }

    /**
     * <p>The time at which the ban was created.</p>
     */
    inline ChannelBan& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}

    /**
     * <p>The time at which the ban was created.</p>
     */
    inline ChannelBan& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}


    /**
     * <p>The <code>AppInstanceUser</code> who created the ban.</p>
     */
    inline const Identity& GetCreatedBy() const{ return m_createdBy; }

    /**
     * <p>The <code>AppInstanceUser</code> who created the ban.</p>
     */
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUser</code> who created the ban.</p>
     */
    inline void SetCreatedBy(const Identity& value) { m_createdByHasBeenSet = true; m_createdBy = value; }

    /**
     * <p>The <code>AppInstanceUser</code> who created the ban.</p>
     */
    inline void SetCreatedBy(Identity&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }

    /**
     * <p>The <code>AppInstanceUser</code> who created the ban.</p>
     */
    inline ChannelBan& WithCreatedBy(const Identity& value) { SetCreatedBy(value); return *this;}

    /**
     * <p>The <code>AppInstanceUser</code> who created the ban.</p>
     */
    inline ChannelBan& WithCreatedBy(Identity&& value) { SetCreatedBy(std::move(value)); return *this;}

  private:

    Identity m_member;
    bool m_memberHasBeenSet = false;

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
