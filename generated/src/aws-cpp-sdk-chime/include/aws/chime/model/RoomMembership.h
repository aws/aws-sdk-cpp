/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/Member.h>
#include <aws/chime/model/RoomMembershipRole.h>
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
namespace Chime
{
namespace Model
{

  /**
   * <p>The room membership details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chime-2018-05-01/RoomMembership">AWS
   * API Reference</a></p>
   */
  class RoomMembership
  {
  public:
    AWS_CHIME_API RoomMembership() = default;
    AWS_CHIME_API RoomMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API RoomMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The room ID.</p>
     */
    inline const Aws::String& GetRoomId() const { return m_roomId; }
    inline bool RoomIdHasBeenSet() const { return m_roomIdHasBeenSet; }
    template<typename RoomIdT = Aws::String>
    void SetRoomId(RoomIdT&& value) { m_roomIdHasBeenSet = true; m_roomId = std::forward<RoomIdT>(value); }
    template<typename RoomIdT = Aws::String>
    RoomMembership& WithRoomId(RoomIdT&& value) { SetRoomId(std::forward<RoomIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member details, such as email address, name, member ID, and member
     * type.</p>
     */
    inline const Member& GetMember() const { return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    template<typename MemberT = Member>
    void SetMember(MemberT&& value) { m_memberHasBeenSet = true; m_member = std::forward<MemberT>(value); }
    template<typename MemberT = Member>
    RoomMembership& WithMember(MemberT&& value) { SetMember(std::forward<MemberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership role.</p>
     */
    inline RoomMembershipRole GetRole() const { return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(RoomMembershipRole value) { m_roleHasBeenSet = true; m_role = value; }
    inline RoomMembership& WithRole(RoomMembershipRole value) { SetRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user that invited the room member.</p>
     */
    inline const Aws::String& GetInvitedBy() const { return m_invitedBy; }
    inline bool InvitedByHasBeenSet() const { return m_invitedByHasBeenSet; }
    template<typename InvitedByT = Aws::String>
    void SetInvitedBy(InvitedByT&& value) { m_invitedByHasBeenSet = true; m_invitedBy = std::forward<InvitedByT>(value); }
    template<typename InvitedByT = Aws::String>
    RoomMembership& WithInvitedBy(InvitedByT&& value) { SetInvitedBy(std::forward<InvitedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The room membership update timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const { return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    void SetUpdatedTimestamp(UpdatedTimestampT&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::forward<UpdatedTimestampT>(value); }
    template<typename UpdatedTimestampT = Aws::Utils::DateTime>
    RoomMembership& WithUpdatedTimestamp(UpdatedTimestampT&& value) { SetUpdatedTimestamp(std::forward<UpdatedTimestampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_roomId;
    bool m_roomIdHasBeenSet = false;

    Member m_member;
    bool m_memberHasBeenSet = false;

    RoomMembershipRole m_role{RoomMembershipRole::NOT_SET};
    bool m_roleHasBeenSet = false;

    Aws::String m_invitedBy;
    bool m_invitedByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp{};
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
