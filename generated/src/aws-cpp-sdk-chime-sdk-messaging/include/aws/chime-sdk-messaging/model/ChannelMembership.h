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
    AWS_CHIMESDKMESSAGING_API ChannelMembership() = default;
    AWS_CHIMESDKMESSAGING_API ChannelMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API ChannelMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the member who invited another member.</p>
     */
    inline const Identity& GetInvitedBy() const { return m_invitedBy; }
    inline bool InvitedByHasBeenSet() const { return m_invitedByHasBeenSet; }
    template<typename InvitedByT = Identity>
    void SetInvitedBy(InvitedByT&& value) { m_invitedByHasBeenSet = true; m_invitedBy = std::forward<InvitedByT>(value); }
    template<typename InvitedByT = Identity>
    ChannelMembership& WithInvitedBy(InvitedByT&& value) { SetInvitedBy(std::forward<InvitedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership type set for the channel member.</p>
     */
    inline ChannelMembershipType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChannelMembershipType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ChannelMembership& WithType(ChannelMembershipType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data of the channel member.</p>
     */
    inline const Identity& GetMember() const { return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    template<typename MemberT = Identity>
    void SetMember(MemberT&& value) { m_memberHasBeenSet = true; m_member = std::forward<MemberT>(value); }
    template<typename MemberT = Identity>
    ChannelMembership& WithMember(MemberT&& value) { SetMember(std::forward<MemberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the member's channel.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    ChannelMembership& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the channel membership was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimestamp() const { return m_createdTimestamp; }
    inline bool CreatedTimestampHasBeenSet() const { return m_createdTimestampHasBeenSet; }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    void SetCreatedTimestamp(CreatedTimestampT&& value) { m_createdTimestampHasBeenSet = true; m_createdTimestamp = std::forward<CreatedTimestampT>(value); }
    template<typename CreatedTimestampT = Aws::Utils::DateTime>
    ChannelMembership& WithCreatedTimestamp(CreatedTimestampT&& value) { SetCreatedTimestamp(std::forward<CreatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which a channel membership was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimestamp() const { return m_lastUpdatedTimestamp; }
    inline bool LastUpdatedTimestampHasBeenSet() const { return m_lastUpdatedTimestampHasBeenSet; }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { m_lastUpdatedTimestampHasBeenSet = true; m_lastUpdatedTimestamp = std::forward<LastUpdatedTimestampT>(value); }
    template<typename LastUpdatedTimestampT = Aws::Utils::DateTime>
    ChannelMembership& WithLastUpdatedTimestamp(LastUpdatedTimestampT&& value) { SetLastUpdatedTimestamp(std::forward<LastUpdatedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the SubChannel that a user belongs to.</p>
     */
    inline const Aws::String& GetSubChannelId() const { return m_subChannelId; }
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }
    template<typename SubChannelIdT = Aws::String>
    void SetSubChannelId(SubChannelIdT&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::forward<SubChannelIdT>(value); }
    template<typename SubChannelIdT = Aws::String>
    ChannelMembership& WithSubChannelId(SubChannelIdT&& value) { SetSubChannelId(std::forward<SubChannelIdT>(value)); return *this;}
    ///@}
  private:

    Identity m_invitedBy;
    bool m_invitedByHasBeenSet = false;

    ChannelMembershipType m_type{ChannelMembershipType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Identity m_member;
    bool m_memberHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimestamp{};
    bool m_createdTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimestamp{};
    bool m_lastUpdatedTimestampHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
