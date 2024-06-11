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
    AWS_IDENTITYSTORE_API IsMemberInGroupsRequest();

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
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }
    inline IsMemberInGroupsRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline IsMemberInGroupsRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline IsMemberInGroupsRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object containing the identifier of a group member.</p>
     */
    inline const MemberId& GetMemberId() const{ return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    inline void SetMemberId(const MemberId& value) { m_memberIdHasBeenSet = true; m_memberId = value; }
    inline void SetMemberId(MemberId&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }
    inline IsMemberInGroupsRequest& WithMemberId(const MemberId& value) { SetMemberId(value); return *this;}
    inline IsMemberInGroupsRequest& WithMemberId(MemberId&& value) { SetMemberId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of identifiers for groups in the identity store.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGroupIds() const{ return m_groupIds; }
    inline bool GroupIdsHasBeenSet() const { return m_groupIdsHasBeenSet; }
    inline void SetGroupIds(const Aws::Vector<Aws::String>& value) { m_groupIdsHasBeenSet = true; m_groupIds = value; }
    inline void SetGroupIds(Aws::Vector<Aws::String>&& value) { m_groupIdsHasBeenSet = true; m_groupIds = std::move(value); }
    inline IsMemberInGroupsRequest& WithGroupIds(const Aws::Vector<Aws::String>& value) { SetGroupIds(value); return *this;}
    inline IsMemberInGroupsRequest& WithGroupIds(Aws::Vector<Aws::String>&& value) { SetGroupIds(std::move(value)); return *this;}
    inline IsMemberInGroupsRequest& AddGroupIds(const Aws::String& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }
    inline IsMemberInGroupsRequest& AddGroupIds(Aws::String&& value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(std::move(value)); return *this; }
    inline IsMemberInGroupsRequest& AddGroupIds(const char* value) { m_groupIdsHasBeenSet = true; m_groupIds.push_back(value); return *this; }
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
