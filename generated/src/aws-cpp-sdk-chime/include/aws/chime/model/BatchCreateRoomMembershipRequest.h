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
    AWS_CHIME_API BatchCreateRoomMembershipRequest() = default;

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
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    BatchCreateRoomMembershipRequest& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The room ID.</p>
     */
    inline const Aws::String& GetRoomId() const { return m_roomId; }
    inline bool RoomIdHasBeenSet() const { return m_roomIdHasBeenSet; }
    template<typename RoomIdT = Aws::String>
    void SetRoomId(RoomIdT&& value) { m_roomIdHasBeenSet = true; m_roomId = std::forward<RoomIdT>(value); }
    template<typename RoomIdT = Aws::String>
    BatchCreateRoomMembershipRequest& WithRoomId(RoomIdT&& value) { SetRoomId(std::forward<RoomIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of membership items.</p>
     */
    inline const Aws::Vector<MembershipItem>& GetMembershipItemList() const { return m_membershipItemList; }
    inline bool MembershipItemListHasBeenSet() const { return m_membershipItemListHasBeenSet; }
    template<typename MembershipItemListT = Aws::Vector<MembershipItem>>
    void SetMembershipItemList(MembershipItemListT&& value) { m_membershipItemListHasBeenSet = true; m_membershipItemList = std::forward<MembershipItemListT>(value); }
    template<typename MembershipItemListT = Aws::Vector<MembershipItem>>
    BatchCreateRoomMembershipRequest& WithMembershipItemList(MembershipItemListT&& value) { SetMembershipItemList(std::forward<MembershipItemListT>(value)); return *this;}
    template<typename MembershipItemListT = MembershipItem>
    BatchCreateRoomMembershipRequest& AddMembershipItemList(MembershipItemListT&& value) { m_membershipItemListHasBeenSet = true; m_membershipItemList.emplace_back(std::forward<MembershipItemListT>(value)); return *this; }
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
