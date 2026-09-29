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
class DeleteUserRequest : public IdentityStoreRequest {
 public:
  AWS_IDENTITYSTORE_API DeleteUserRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteUser"; }

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
  DeleteUserRequest& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier for a user in the identity store.</p> <p>You can specify the
   * user by ID or by Amazon Resource Name (ARN). For example, user ID
   * <code>a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code> or user ARN
   * <code>arn:aws:identitystore:::user/a1b2c3d4-5678-90ab-cdef-EXAMPLE11111</code>.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  DeleteUserRequest& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The expected current revision of the user. When you provide this value, the
   * user is deleted only if it matches the current revision of the user in the
   * identity store. If the value doesn't match, the operation fails with a
   * <code>ConflictException</code>. If you don't provide this value, the user is
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
  DeleteUserRequest& WithRevision(RevisionT&& value) {
    SetRevision(std::forward<RevisionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identityStoreId;

  Aws::String m_userId;

  Aws::String m_revision;
  bool m_identityStoreIdHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
