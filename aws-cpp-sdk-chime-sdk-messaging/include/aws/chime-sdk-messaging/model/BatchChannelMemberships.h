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
    AWS_CHIMESDKMESSAGING_API BatchChannelMemberships();
    AWS_CHIMESDKMESSAGING_API BatchChannelMemberships(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API BatchChannelMemberships& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIMESDKMESSAGING_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the member who invited another member.</p>
     */
    inline const Identity& GetInvitedBy() const{ return m_invitedBy; }

    /**
     * <p>The identifier of the member who invited another member.</p>
     */
    inline bool InvitedByHasBeenSet() const { return m_invitedByHasBeenSet; }

    /**
     * <p>The identifier of the member who invited another member.</p>
     */
    inline void SetInvitedBy(const Identity& value) { m_invitedByHasBeenSet = true; m_invitedBy = value; }

    /**
     * <p>The identifier of the member who invited another member.</p>
     */
    inline void SetInvitedBy(Identity&& value) { m_invitedByHasBeenSet = true; m_invitedBy = std::move(value); }

    /**
     * <p>The identifier of the member who invited another member.</p>
     */
    inline BatchChannelMemberships& WithInvitedBy(const Identity& value) { SetInvitedBy(value); return *this;}

    /**
     * <p>The identifier of the member who invited another member.</p>
     */
    inline BatchChannelMemberships& WithInvitedBy(Identity&& value) { SetInvitedBy(std::move(value)); return *this;}


    /**
     * <p>The membership types set for the channel users.</p>
     */
    inline const ChannelMembershipType& GetType() const{ return m_type; }

    /**
     * <p>The membership types set for the channel users.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The membership types set for the channel users.</p>
     */
    inline void SetType(const ChannelMembershipType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The membership types set for the channel users.</p>
     */
    inline void SetType(ChannelMembershipType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The membership types set for the channel users.</p>
     */
    inline BatchChannelMemberships& WithType(const ChannelMembershipType& value) { SetType(value); return *this;}

    /**
     * <p>The membership types set for the channel users.</p>
     */
    inline BatchChannelMemberships& WithType(ChannelMembershipType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The users successfully added to the request.</p>
     */
    inline const Aws::Vector<Identity>& GetMembers() const{ return m_members; }

    /**
     * <p>The users successfully added to the request.</p>
     */
    inline bool MembersHasBeenSet() const { return m_membersHasBeenSet; }

    /**
     * <p>The users successfully added to the request.</p>
     */
    inline void SetMembers(const Aws::Vector<Identity>& value) { m_membersHasBeenSet = true; m_members = value; }

    /**
     * <p>The users successfully added to the request.</p>
     */
    inline void SetMembers(Aws::Vector<Identity>&& value) { m_membersHasBeenSet = true; m_members = std::move(value); }

    /**
     * <p>The users successfully added to the request.</p>
     */
    inline BatchChannelMemberships& WithMembers(const Aws::Vector<Identity>& value) { SetMembers(value); return *this;}

    /**
     * <p>The users successfully added to the request.</p>
     */
    inline BatchChannelMemberships& WithMembers(Aws::Vector<Identity>&& value) { SetMembers(std::move(value)); return *this;}

    /**
     * <p>The users successfully added to the request.</p>
     */
    inline BatchChannelMemberships& AddMembers(const Identity& value) { m_membersHasBeenSet = true; m_members.push_back(value); return *this; }

    /**
     * <p>The users successfully added to the request.</p>
     */
    inline BatchChannelMemberships& AddMembers(Identity&& value) { m_membersHasBeenSet = true; m_members.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline const Aws::String& GetChannelArn() const{ return m_channelArn; }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline bool ChannelArnHasBeenSet() const { return m_channelArnHasBeenSet; }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline void SetChannelArn(const Aws::String& value) { m_channelArnHasBeenSet = true; m_channelArn = value; }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline void SetChannelArn(Aws::String&& value) { m_channelArnHasBeenSet = true; m_channelArn = std::move(value); }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline void SetChannelArn(const char* value) { m_channelArnHasBeenSet = true; m_channelArn.assign(value); }

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline BatchChannelMemberships& WithChannelArn(const Aws::String& value) { SetChannelArn(value); return *this;}

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline BatchChannelMemberships& WithChannelArn(Aws::String&& value) { SetChannelArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the channel to which you're adding users.</p>
     */
    inline BatchChannelMemberships& WithChannelArn(const char* value) { SetChannelArn(value); return *this;}


    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline const Aws::String& GetSubChannelId() const{ return m_subChannelId; }

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline bool SubChannelIdHasBeenSet() const { return m_subChannelIdHasBeenSet; }

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline void SetSubChannelId(const Aws::String& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = value; }

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline void SetSubChannelId(Aws::String&& value) { m_subChannelIdHasBeenSet = true; m_subChannelId = std::move(value); }

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline void SetSubChannelId(const char* value) { m_subChannelIdHasBeenSet = true; m_subChannelId.assign(value); }

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline BatchChannelMemberships& WithSubChannelId(const Aws::String& value) { SetSubChannelId(value); return *this;}

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline BatchChannelMemberships& WithSubChannelId(Aws::String&& value) { SetSubChannelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the SubChannel.</p>
     */
    inline BatchChannelMemberships& WithSubChannelId(const char* value) { SetSubChannelId(value); return *this;}

  private:

    Identity m_invitedBy;
    bool m_invitedByHasBeenSet = false;

    ChannelMembershipType m_type;
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
