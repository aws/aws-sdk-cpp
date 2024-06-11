/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime/model/MembershipItem.h>
#include <utility>

namespace Aws
{
namespace Chime
{
namespace Model
{

  /**
   */
  class BatchCreateRoomMembershipRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API BatchCreateRoomMembershipRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchCreateRoomMembership"; }

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
    inline BatchCreateRoomMembershipRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline BatchCreateRoomMembershipRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline BatchCreateRoomMembershipRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
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
    inline BatchCreateRoomMembershipRequest& WithRoomId(const Aws::String& value) { SetRoomId(value); return *this;}
    inline BatchCreateRoomMembershipRequest& WithRoomId(Aws::String&& value) { SetRoomId(std::move(value)); return *this;}
    inline BatchCreateRoomMembershipRequest& WithRoomId(const char* value) { SetRoomId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of membership items.</p>
     */
    inline const Aws::Vector<MembershipItem>& GetMembershipItemList() const{ return m_membershipItemList; }
    inline bool MembershipItemListHasBeenSet() const { return m_membershipItemListHasBeenSet; }
    inline void SetMembershipItemList(const Aws::Vector<MembershipItem>& value) { m_membershipItemListHasBeenSet = true; m_membershipItemList = value; }
    inline void SetMembershipItemList(Aws::Vector<MembershipItem>&& value) { m_membershipItemListHasBeenSet = true; m_membershipItemList = std::move(value); }
    inline BatchCreateRoomMembershipRequest& WithMembershipItemList(const Aws::Vector<MembershipItem>& value) { SetMembershipItemList(value); return *this;}
    inline BatchCreateRoomMembershipRequest& WithMembershipItemList(Aws::Vector<MembershipItem>&& value) { SetMembershipItemList(std::move(value)); return *this;}
    inline BatchCreateRoomMembershipRequest& AddMembershipItemList(const MembershipItem& value) { m_membershipItemListHasBeenSet = true; m_membershipItemList.push_back(value); return *this; }
    inline BatchCreateRoomMembershipRequest& AddMembershipItemList(MembershipItem&& value) { m_membershipItemListHasBeenSet = true; m_membershipItemList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_roomId;
    bool m_roomIdHasBeenSet = false;

    Aws::Vector<MembershipItem> m_membershipItemList;
    bool m_membershipItemListHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
