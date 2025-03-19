/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/model/Identity.h>
#include <aws/chime-sdk-messaging/model/ChannelMembershipType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The membership information, including member ARNs, the channel ARN, and
   * membership types.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-sdk-messaging-2021-05-15/BatchChannelMemberships">AWS
   * API Reference</a></p>
   */
  class BatchChannelMemberships
  {
  public:
    AWS_CHIMESDKMESSAGING_API BatchChannelMemberships() = default;
    AWS_CHIMESDKMESSAGING_API BatchChannelMemberships(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API BatchChannelMemberships& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    BatchChannelMemberships& WithInvitedBy(InvitedByT&& value) { SetInvitedBy(std::forward<InvitedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership types set for the channel members.</p>
     */
    inline ChannelMembershipType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ChannelMembershipType value) { m_typeHasBeenSet = true; m_type = value; }
    inline BatchChannelMemberships& WithType(ChannelMembershipType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The users successfully added to the request.</p>
     */
    inline const Aws::Vector<Identity>& GetMembers() const { return m_members; }
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }
    template<typename MembersT = Aws::Vector<Identity>>
    void SetMembers(MembersT&& value) { m_membersHasBeenSet = true; m_members = std::forward<MembersT>(value); }
    template<typename MembersT = Aws::Vector<Identity>>
    BatchChannelMemberships& WithMembers(MembersT&& value) { SetMembers(std::forward<MembersT>(value)); return *this;}
    template<typename MembersT = Identity>
    BatchChannelMemberships& AddMembers(MembersT&& value) { m_membersHasBeenSet = true; m_members.emplace_back(std::forward<MembersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the channel to which you're adding members.</p>
     */
    inline const Aws::String& GetChannelArn() const { return m_channelArn; }
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }
    template<typename ChannelArnT = Aws::String>
    void SetChannelArn(ChannelArnT&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::forward<ChannelArnT>(value); }
    template<typename ChannelArnT = Aws::String>
    BatchChannelMemberships& WithChannelArn(ChannelArnT&& value) { SetChannelArn(std::forward<ChannelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline const Aws::String& GetSubChannelId() const { return m_subChannelId; }
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }
    template<typename SubChannelIdT = Aws::String>
    void SetSubChannelId(SubChannelIdT&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::forward<SubChannelIdT>(value); }
    template<typename SubChannelIdT = Aws::String>
    BatchChannelMemberships& WithSubChannelId(SubChannelIdT&& value) { SetSubChannelId(std::forward<SubChannelIdT>(value)); return *this;}
    ///@}
  private:

    Identity m_invitedBy;
    bool m_invitedByHasBeenSet = false;

    ChannelMembershipType m_type{ChannelMembershipType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Vector<Identity> m_members;
    bool m_membersHasBeenSet = false;

    Aws::String m_channelArn;
    bool m_channelArnHasBeenSet = false;

    Aws::String m_subChannelId;
    bool m_subChannelIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
