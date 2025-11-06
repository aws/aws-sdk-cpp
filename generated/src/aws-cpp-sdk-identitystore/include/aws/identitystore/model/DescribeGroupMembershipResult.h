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
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IdentityStore {
namespace Model {
class DescribeGroupMembershipResult {
 public:
  AWS_IDENTITYSTORE_API DescribeGroupMembershipResult() = default;
  AWS_IDENTITYSTORE_API DescribeGroupMembershipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IDENTITYSTORE_API DescribeGroupMembershipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The globally unique identifier for the identity store.</p>
   */
  inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
  template <typename IdentityStoreIdT = Aws::String>
  void SetIdentityStoreId(IdentityStoreIdT&& value) {
    m_identityStoreIdHasBeenSet = true;
    m_identityStoreId = std::forward<IdentityStoreIdT>(value);
  }
  template <typename IdentityStoreIdT = Aws::String>
  DescribeGroupMembershipResult& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for a <code>GroupMembership</code> in an identity store.</p>
   */
  inline const Aws::String& GetMembershipId() const { return m_membershipId; }
  template <typename MembershipIdT = Aws::String>
  void SetMembershipId(MembershipIdT&& value) {
    m_membershipIdHasBeenSet = true;
    m_membershipId = std::forward<MembershipIdT>(value);
  }
  template <typename MembershipIdT = Aws::String>
  DescribeGroupMembershipResult& WithMembershipId(MembershipIdT&& value) {
    SetMembershipId(std::forward<MembershipIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for a group in the identity store.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  DescribeGroupMembershipResult& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const MemberId& GetMemberId() const { return m_memberId; }
  template <typename MemberIdT = MemberId>
  void SetMemberId(MemberIdT&& value) {
    m_memberIdHasBeenSet = true;
    m_memberId = std::forward<MemberIdT>(value);
  }
  template <typename MemberIdT = MemberId>
  DescribeGroupMembershipResult& WithMemberId(MemberIdT&& value) {
    SetMemberId(std::forward<MemberIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the group membership was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DescribeGroupMembershipResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the group membership was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DescribeGroupMembershipResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the user or system that created the group membership.</p>
   */
  inline const Aws::String& GetCreatedBy() const { return m_createdBy; }
  template <typename CreatedByT = Aws::String>
  void SetCreatedBy(CreatedByT&& value) {
    m_createdByHasBeenSet = true;
    m_createdBy = std::forward<CreatedByT>(value);
  }
  template <typename CreatedByT = Aws::String>
  DescribeGroupMembershipResult& WithCreatedBy(CreatedByT&& value) {
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
  template <typename UpdatedByT = Aws::String>
  void SetUpdatedBy(UpdatedByT&& value) {
    m_updatedByHasBeenSet = true;
    m_updatedBy = std::forward<UpdatedByT>(value);
  }
  template <typename UpdatedByT = Aws::String>
  DescribeGroupMembershipResult& WithUpdatedBy(UpdatedByT&& value) {
    SetUpdatedBy(std::forward<UpdatedByT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeGroupMembershipResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
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

  Aws::Utils::DateTime m_createdAt{};
  bool m_createdAtHasBeenSet = false;

  Aws::Utils::DateTime m_updatedAt{};
  bool m_updatedAtHasBeenSet = false;

  Aws::String m_createdBy;
  bool m_createdByHasBeenSet = false;

  Aws::String m_updatedBy;
  bool m_updatedByHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
