/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>

#include <utility>

namespace Aws {
namespace IdentityStore {
namespace Model {

/**
 */
class DeleteGroupRequest : public IdentityStoreRequest {
 public:
  AWS_IDENTITYSTORE_API DeleteGroupRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteGroup"; }

  AWS_IDENTITYSTORE_API Aws::String SerializePayload() const override;

  AWS_IDENTITYSTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The globally unique identifier for the identity store.</p> <p>You can specify
   * the identity store by ID or by Amazon Resource Name (ARN). For example, identity
   * store ID <code>d-1234567890</code> or identity store ARN
   * <code>arn:aws:identitystore::111122223333:identitystore/d-1234567890</code>.</p>
   */
  inline const Aws::String& GetIdentityStoreId() const { return m_identityStoreId; }
  inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }
  template <typename IdentityStoreIdT = Aws::String>
  void SetIdentityStoreId(IdentityStoreIdT&& value) {
    m_identityStoreIdHasBeenSet = true;
    m_identityStoreId = std::forward<IdentityStoreIdT>(value);
  }
  template <typename IdentityStoreIdT = Aws::String>
  DeleteGroupRequest& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for a group in the identity store.</p> <p>You can specify the
   * group by ID or by Amazon Resource Name (ARN). For example, group ID
   * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE22222</code> or group ARN
   * <code>arn:aws:identitystore:::group/a1b2c3d4-5678-90ab-cdef-EXAMPLE22222</code>.</p>
   */
  inline const Aws::String& GetGroupId() const { return m_groupId; }
  inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
  template <typename GroupIdT = Aws::String>
  void SetGroupId(GroupIdT&& value) {
    m_groupIdHasBeenSet = true;
    m_groupId = std::forward<GroupIdT>(value);
  }
  template <typename GroupIdT = Aws::String>
  DeleteGroupRequest& WithGroupId(GroupIdT&& value) {
    SetGroupId(std::forward<GroupIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected current revision of the group. When you provide this value, the
   * group is deleted only if it matches the current revision of the group in the
   * identity store. If the value doesn't match, the operation fails with a
   * <code>ConflictException</code>. If you don't provide this value, the group is
   * deleted regardless of its current revision.</p>
   */
  inline const Aws::String& GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  template <typename RevisionT = Aws::String>
  void SetRevision(RevisionT&& value) {
    m_revisionHasBeenSet = true;
    m_revision = std::forward<RevisionT>(value);
  }
  template <typename RevisionT = Aws::String>
  DeleteGroupRequest& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identityStoreId;

  Aws::String m_groupId;

  Aws::String m_revision;
  bool m_identityStoreIdHasBeenSet = false;
  bool m_groupIdHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
