/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipType.h>
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
   * <p>The details of a channel member.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/ChannelMembership">AWS
   * API Reference</a></p>
   */
  class ChannelMembership
  {
  public:
    AWS_CHIMESDKMESSAGING_API ChannelMembership();
    AWS_CHIMESDKMESSAGING_API ChannelMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the member who invited another member.</p>
     */
    inline const Identity& GetInvitedBy() const{ return m_invitedBy; }
    inline bool InvitedByHasBeenSet() const { return m_invitedByHasBeenSet; }
    inline void SetInvitedBy(const Identity& value) { m_invitedByHasBeenSet = true; m_invitedBy = value; }
    inline void SetInvitedBy(Identity&& value) { m_invitedByHasBeenSet = true; m_invitedBy = std::move(value); }
    inline ChannelMembership& WithInvitedBy(const Identity& value) { SetInvitedBy(value); return *this;}
    inline ChannelMembership& WithInvitedBy(Identity&& value) { SetInvitedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership type set for the channel member.</p>
     */
    inline const ChannelMembershipType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ChannelMembershipType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ChannelMembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ChannelMembership& WithType(const ChannelMembershipType& value) { SetType(value); return *this;}
    inline ChannelMembership& WithType(ChannelMembershipType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data of the channel member.</p>
     */
    inline const Identity& GetMember() const{ return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    inline void SetMember(const Identity& value) { m_memberHasBeenSet = true; m_member = value; }
    inline void SetMember(Identity&& value) { m_memberHasBeenSet = true; m_member = std::move(value); }
    inline ChannelMembership& WithMember(const Identity& value) { SetMember(value); return *this;}
    inline ChannelMembership& WithMember(Identity&& value) { SetMember(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the member's channel.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }
    inline ChannelMembership& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}
    inline ChannelMembership& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}
    inline ChannelMembership& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the channel membership was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const{ return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    inline void SetCreatedTimestamp(const Aws::Utils::DateTime& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = value; }
    inline void SetCreatedTimestamp(Aws::Utils::DateTime&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::move(value); }
    inline ChannelMembership& WithCreatedTimestamp(const Aws::Utils::DateTime& value) { SetCreatedTimestamp(value); return *this;}
    inline ChannelMembership& WithCreatedTimestamp(Aws::Utils::DateTime&& value) { SetCreatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a channel membership was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const{ return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    inline void SetLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = value; }
    inline void SetLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::move(value); }
    inline ChannelMembership& WithLastUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimestamp(value); return *this;}
    inline ChannelMembership& WithLastUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the SubChannel that a user belongs to.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }
    inline ChannelMembership& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}
    inline ChannelMembership& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}
    inline ChannelMembership& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}
    ///@}
  private:

    Identity m_invitedBy;
    bool m_invitedByHasBeenSet = false;

    ChannelMembershipType m_type;
    bool m_typeHasBeenSet = false;

    Identity m_member;
    bool m_memberHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp;
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp;
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
