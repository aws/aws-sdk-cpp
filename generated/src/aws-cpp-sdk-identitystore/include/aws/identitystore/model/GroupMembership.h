/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/model/MemberId.h>
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
namespace IdentityStore
{
namespace Model
{

  /**
   * <p>Contains the identifiers for a group, a group member, and a
   * <code>GroupMembership</code> object in the identity store.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GroupMembership">AWS
   * API Reference</a></p>
   */
  class GroupMembership
  {
  public:
    AWS_IDENTITYSTORE_API GroupMembership();
    AWS_IDENTITYSTORE_API GroupMembership(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API GroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }
    inline GroupMembership& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}
    inline GroupMembership& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}
    inline GroupMembership& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a <code>GroupMembership</code> object in an identity
     * store.</p>
     */
    inline const Aws::String& GetMembershipId() const{ return m_membershipId; }
    inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
    inline void SetMembershipId(const Aws::String& value) { m_membershipIdHasBeenSet = true; m_membershipId = value; }
    inline void SetMembershipId(Aws::String&& value) { m_membershipIdHasBeenSet = true; m_membershipId = std::move(value); }
    inline void SetMembershipId(const char* value) { m_membershipIdHasBeenSet = true; m_membershipId.assign(value); }
    inline GroupMembership& WithMembershipId(const Aws::String& value) { SetMembershipId(value); return *this;}
    inline GroupMembership& WithMembershipId(Aws::String&& value) { SetMembershipId(std::move(value)); return *this;}
    inline GroupMembership& WithMembershipId(const char* value) { SetMembershipId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline GroupMembership& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline GroupMembership& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline GroupMembership& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that contains the identifier of a group member. Setting the
     * <code>UserID</code> field to the specific identifier for a user indicates that
     * the user is a member of the group.</p>
     */
    inline const MemberId& GetMemberId() const{ return m_memberId; }
    inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
    inline void SetMemberId(const MemberId& value) { m_memberIdHasBeenSet = true; m_memberId = value; }
    inline void SetMemberId(MemberId&& value) { m_memberIdHasBeenSet = true; m_memberId = std::move(value); }
    inline GroupMembership& WithMemberId(const MemberId& value) { SetMemberId(value); return *this;}
    inline GroupMembership& WithMemberId(MemberId&& value) { SetMemberId(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_membershipId;
    bool m_membershipIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    MemberId m_memberId;
    bool m_memberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
