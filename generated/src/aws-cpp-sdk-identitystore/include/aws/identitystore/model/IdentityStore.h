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
 * <p>A structure that contains the identifiers for an identity store: its globally
 * unique identifier (ID) and Amazon Resource Name (ARN).</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/IdentityStore">AWS
 * API Reference</a></p>
 */
class IdentityStore {
 public:
  AWS_IDENTITYSTORE_API IdentityStore() = default;
  AWS_IDENTITYSTORE_API IdentityStore(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API IdentityStore& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  IdentityStore& WithIdentityStoreId(IdentityStoreIdT&& value) {
    SetIdentityStoreId(std::forward<IdentityStoreIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the identity store. For example,
   * <code>arn:aws:identitystore::111122223333:identitystore/d-1234567890</code>.</p>
   */
  inline const Aws::String& GetIdentityStoreArn() const { return m_identityStoreArn; }
  inline bool IdentityStoreArnHasBeenSet() const { return m_identityStoreArnHasBeenSet; }
  template <typename IdentityStoreArnT = Aws::String>
  void SetIdentityStoreArn(IdentityStoreArnT&& value) {
    m_identityStoreArnHasBeenSet = true;
    m_identityStoreArn = std::forward<IdentityStoreArnT>(value);
  }
  template <typename IdentityStoreArnT = Aws::String>
  IdentityStore& WithIdentityStoreArn(IdentityStoreArnT&& value) {
    SetIdentityStoreArn(std::forward<IdentityStoreArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_identityStoreId;

  Aws::String m_identityStoreArn;
  bool m_identityStoreIdHasBeenSet = false;
  bool m_identityStoreArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
