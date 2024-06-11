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
    AWS_CHIME_API RoomMembership();
    AWS_CHIME_API RoomMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API RoomMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHIME_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The room ID.</p>
     */
    inline const Aws::String& GetRoomId() const{ return m_roomId; }
    inline bool RoomIdHasBeenSet() const { return m_roomIdHasBeenSet; }
    inline void SetRoomId(const Aws::String& value) { m_roomIdHasBeenSet = true; m_roomId = value; }
    inline void SetRoomId(Aws::String&& value) { m_roomIdHasBeenSet = true; m_roomId = std::move(value); }
    inline void SetRoomId(const char* value) { m_roomIdHasBeenSet = true; m_roomId.assign(value); }
    inline RoomMembership& WithRoomId(const Aws::String& value) { SetRoomId(value); return *this;}
    inline RoomMembership& WithRoomId(Aws::String&& value) { SetRoomId(std::move(value)); return *this;}
    inline RoomMembership& WithRoomId(const char* value) { SetRoomId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The member details, such as email address, name, member ID, and member
     * type.</p>
     */
    inline const Member& GetMember() const{ return m_member; }
    inline bool MemberHasBeenSet() const { return m_memberHasBeenSet; }
    inline void SetMember(const Member& value) { m_memberHasBeenSet = true; m_member = value; }
    inline void SetMember(Member&& value) { m_memberHasBeenSet = true; m_member = std::move(value); }
    inline RoomMembership& WithMember(const Member& value) { SetMember(value); return *this;}
    inline RoomMembership& WithMember(Member&& value) { SetMember(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The membership role.</p>
     */
    inline const RoomMembershipRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const RoomMembershipRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(RoomMembershipRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline RoomMembership& WithRole(const RoomMembershipRole& value) { SetRole(value); return *this;}
    inline RoomMembership& WithRole(RoomMembershipRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the user that invited the room member.</p>
     */
    inline const Aws::String& GetInvitedBy() const{ return m_invitedBy; }
    inline bool InvitedByHasBeenSet() const { return m_invitedByHasBeenSet; }
    inline void SetInvitedBy(const Aws::String& value) { m_invitedByHasBeenSet = true; m_invitedBy = value; }
    inline void SetInvitedBy(Aws::String&& value) { m_invitedByHasBeenSet = true; m_invitedBy = std::move(value); }
    inline void SetInvitedBy(const char* value) { m_invitedByHasBeenSet = true; m_invitedBy.assign(value); }
    inline RoomMembership& WithInvitedBy(const Aws::String& value) { SetInvitedBy(value); return *this;}
    inline RoomMembership& WithInvitedBy(Aws::String&& value) { SetInvitedBy(std::move(value)); return *this;}
    inline RoomMembership& WithInvitedBy(const char* value) { SetInvitedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The room membership update timestamp, in ISO 8601 format.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedTimestamp() const{ return m_updatedTimestamp; }
    inline bool UpdatedTimestampHasBeenSet() const { return m_updatedTimestampHasBeenSet; }
    inline void SetUpdatedTimestamp(const Aws::Utils::DateTime& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = value; }
    inline void SetUpdatedTimestamp(Aws::Utils::DateTime&& value) { m_updatedTimestampHasBeenSet = true; m_updatedTimestamp = std::move(value); }
    inline RoomMembership& WithUpdatedTimestamp(const Aws::Utils::DateTime& value) { SetUpdatedTimestamp(value); return *this;}
    inline RoomMembership& WithUpdatedTimestamp(Aws::Utils::DateTime&& value) { SetUpdatedTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_roomId;
    bool m_roomIdHasBeenSet = false;

    Member m_member;
    bool m_memberHasBeenSet = false;

    RoomMembershipRole m_role;
    bool m_roleHasBeenSet = false;

    Aws::String m_invitedBy;
    bool m_invitedByHasBeenSet = false;

    Aws::Utils::DateTime m_updatedTimestamp;
    bool m_updatedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
