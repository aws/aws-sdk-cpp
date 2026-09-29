/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/identitystore/IdentityStore_EXPORTS.h>

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
 * <p>An object containing the identifier of a group member.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/MemberId">AWS
 * API Reference</a></p>
 */
class MemberId {
 public:
  AWS_IDENTITYSTORE_API MemberId() = default;
  AWS_IDENTITYSTORE_API MemberId(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API MemberId& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  MemberId& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userId;
  bool m_userIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
