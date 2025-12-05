/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/model/MemberId.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IdentityStore {
namespace Model {

/**
 * <p>Contains the identifiers for a group, a group member, and a
 * <code>GroupMembership</code> object in the identity store.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/GroupMembership">AWS
 * API Reference</a></p>
 */
class GroupMembership {
 public:
  AWS_IDENTITYSTORE_API GroupMembership() = default;
  AWS_IDENTITYSTORE_API GroupMembership(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API GroupMembership& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The globally unique identifier for the identity store.</p>
   */
  inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
  inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
  template <typename IdentityStoreIdT = Aws::String>
  void SetIdentityStoreId(IdentityStoreIdT&& value) {
    m_identityStoreIdHasBeenSet = true;
    m_identityStoreId = std::forward<IdentityStoreIdT>(value);
  }
  template <typename IdentityStoreIdT = Aws::String>
  GroupMembership& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for a <code>GroupMembership</code> object in an identity
   * store.</p>
   */
  inline const Aws::String& GetMembershipId() const { return m_membershipId; }
  inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
  template <typename MembershipIdT = Aws::String>
  void SetMembershipId(MembershipIdT&& value) {
    m_membershipIdHasBeenSet = true;
    m_membershipId = std::forward<MembershipIdT>(value);
  }
  template <typename MembershipIdT = Aws::String>
  GroupMembership& WithMembershipId(MembershipIdT&& value) {
    SetMembershipId(std::forward<MembershipIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for a group in the identity store.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  GroupMembership& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An object that contains the identifier of a group member. Setting the
   * <code>UserID</code> field to the specific identifier for a user indicates that
   * the user is a member of the group.</p>
   */
  inline const MemberId& GetMemberId() const { return m_memberId; }
  inline bool MemberIdHasBeenSet() const { return m_memberIdHasBeenSet; }
  template <typename MemberIdT = MemberId>
  void SetMemberId(MemberIdT&& value) {
    m_memberIdHasBeenSet = true;
    m_memberId = std::forward<MemberIdT>(value);
  }
  template <typename MemberIdT = MemberId>
  GroupMembership& WithMemberId(MemberIdT&& value) {
    SetMemberId(std::forward<MemberIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the group membership was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  GroupMembership& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the group membership was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  GroupMembership& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that created the group membership.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  GroupMembership& WithCreatedBy(CreatedByT&& value) {
    SetCreatedBy(std::forward<CreatedByT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that last updated the group
   * membership.</p>
   */
  inline const Aws::String& GetUpdatedBy() const { return m_updatedBy; }
  inline bool UpdatedByHasBeenSet() const { return m_updatedByHasBeenSet; }
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  GroupMembership& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identityStoreId;

  Aws::String m_membershipId;

  Aws::String m_groupId;

  MemberId m_memberId;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_createdBy;

  Aws::String m_updatedBy;
  bool m_identityStoreIdHasBeenSet = false;
  bool m_membershipIdHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
  bool m_memberIdHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_createdByHasBeenSet = false;
  bool m_updatedByHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
