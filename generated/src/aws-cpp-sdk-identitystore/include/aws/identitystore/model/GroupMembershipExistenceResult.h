﻿/**
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
   * <p>Indicates whether a resource is a member of a group in the identity
   * store.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GroupMembershipExistenceResult">AWS
   * API Reference</a></p>
   */
  class GroupMembershipExistenceResult
  {
  public:
    AWS_IDENTITYSTORE_API GroupMembershipExistenceResult();
    AWS_IDENTITYSTORE_API GroupMembershipExistenceResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API GroupMembershipExistenceResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline GroupMembershipExistenceResult& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline GroupMembershipExistenceResult& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline GroupMembershipExistenceResult& WithGroupId(const char* value) { SetGroupId(value); return *this;}
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
    inline GroupMembershipExistenceResult& WithMemberId(const MemberId& value) { SetMemberId(value); return *this;}
    inline GroupMembershipExistenceResult& WithMemberId(MemberId&& value) { SetMemberId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether a membership relation exists or not.</p>
     */
    inline bool GetMembershipExists() const{ return m_membershipExists; }
    inline bool MembershipExistsHasBeenSet() const { return m_membershipExistsHasBeenSet; }
    inline void SetMembershipExists(bool value) { m_membershipExistsHasBeenSet = true; m_membershipExists = value; }
    inline GroupMembershipExistenceResult& WithMembershipExists(bool value) { SetMembershipExists(value); return *this;}
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    MemberId m_memberId;
    bool m_memberIdHasBeenSet = false;

    bool m_membershipExists;
    bool m_membershipExistsHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
