/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/model/MemberId.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

  /**
   */
  class IsMemberInGroupsRequest : public IdentityStoreRequest
  {
  public:
    AWS_IDENTITYSTORE_API IsMemberInGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IsMemberInGroups"; }

    AWS_IDENTITYSTORE_API Aws::String SerializePayload() const override;

    AWS_IDENTITYSTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    template<typename IdentityStoreIdT = Aws::String>
    void SetIdentityStoreId(IdentityStoreIdT&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::forward<IdentityStoreIdT>(value); }
    template<typename IdentityStoreIdT = Aws::String>
    IsMemberInGroupsRequest& WithIdentityStoreId(IdentityStoreIdT&& value) { SetIdentityStoreId(std::forward<IdentityStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing the identifier of a group member.</p>
     */
    inline const MemberId& GetMemberId() const { return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    template<typename MemberIdT = MemberId>
    void SetMemberId(MemberIdT&& value) { m_memberIdHasBeenSet = true; m_memberId = std::forward<MemberIdT>(value); }
    template<typename MemberIdT = MemberId>
    IsMemberInGroupsRequest& WithMemberId(MemberIdT&& value) { SetMemberId(std::forward<MemberIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of identifiers for groups in the identity store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupIds() const { return m_groupIds; }
    inline bool GroupIdsHasBeenSet() const { return m_groupIdsHasBeenSet; }
    template<typename GroupIdsT = Aws::Vector<Aws::String>>
    void SetGroupIds(GroupIdsT&& value) { m_groupIdsHasBeenSet = true; m_groupIds = std::forward<GroupIdsT>(value); }
    template<typename GroupIdsT = Aws::Vector<Aws::String>>
    IsMemberInGroupsRequest& WithGroupIds(GroupIdsT&& value) { SetGroupIds(std::forward<GroupIdsT>(value)); return *this;}
    template<typename GroupIdsT = Aws::String>
    IsMemberInGroupsRequest& AddGroupIds(GroupIdsT&& value) { m_groupIdsHasBeenSet = true; m_groupIds.emplace_back(std::forward<GroupIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    MemberId m_memberId;
    bool m_memberIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_groupIds;
    bool m_groupIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
