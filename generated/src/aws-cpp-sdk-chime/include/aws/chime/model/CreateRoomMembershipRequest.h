/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/RoomMembershipRole.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class CreateRoomMembershipRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API CreateRoomMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoomMembership"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline CreateRoomMembershipRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline CreateRoomMembershipRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline CreateRoomMembershipRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The room ID.</p>
     */
    inline const Aws::String& GetRoomId() const{ return m_roomId; }
    inline bool RoomIdHasBeenSet() const { return m_roomIdHasBeenSet; }
    inline void SetRoomId(const Aws::String& value) { m_roomIdHasBeenSet = true; m_roomId = value; }
    inline void SetRoomId(Aws::String&& value) { m_roomIdHasBeenSet = true; m_roomId = std::move(value); }
    inline void SetRoomId(const char* value) { m_roomIdHasBeenSet = true; m_roomId.assign(value); }
    inline CreateRoomMembershipRequest& WithRoomId(const Aws::String& value) { SetRoomId(value); return *this;}
    inline CreateRoomMembershipRequest& WithRoomId(Aws::String&& value) { SetRoomId(std::move(value)); return *this;}
    inline CreateRoomMembershipRequest& WithRoomId(const char* value) { SetRoomId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Chime member ID (user ID or bot ID).</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    inline void SetMemberId(const Aws::String& value) { m_memberIdHasBeenSet = true; m_memberId = value; }
    inline void SetMemberId(Aws::String&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }
    inline void SetMemberId(const char* value) { m_memberIdHasBeenSet = true; m_memberId.assign(value); }
    inline CreateRoomMembershipRequest& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}
    inline CreateRoomMembershipRequest& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}
    inline CreateRoomMembershipRequest& WithMemberId(const char* value) { SetMemberId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The role of the member.</p>
     */
    inline const RoomMembershipRole& GetRole() const{ return m_role; }
    inline bool RoleHasBeenSet() const { return m_roleHasBeenSet; }
    inline void SetRole(const RoomMembershipRole& value) { m_roleHasBeenSet = true; m_role = value; }
    inline void SetRole(RoomMembershipRole&& value) { m_roleHasBeenSet = true; m_role = std::move(value); }
    inline CreateRoomMembershipRequest& WithRole(const RoomMembershipRole& value) { SetRole(value); return *this;}
    inline CreateRoomMembershipRequest& WithRole(RoomMembershipRole&& value) { SetRole(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_roomId;
    bool m_roomIdHasBeenSet = false;

    Aws::String m_memberId;
    bool m_memberIdHasBeenSet = false;

    RoomMembershipRole m_role;
    bool m_roleHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
