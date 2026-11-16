/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace Health {
namespace Model {

/**
 * <p>An entity representing an affected account, including its account ID and
 * associated tags.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/AccountEntity">AWS
 * API Reference</a></p>
 */
class AccountEntity {
 public:
  AWS_HEALTH_API AccountEntity() = default;
  AWS_HEALTH_API AccountEntity(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API AccountEntity& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The 12-digit Amazon Web Services account numbers that contains the affected
   * entities.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  AccountEntity& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of tag key-value pairs attached to the affected account.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAccountTags() const { return m_accountTags; }
  inline bool AccountTagsHasBeenSet() const { return m_accountTagsHasBeenSet; }
  template <typename AccountTagsT = Aws::Map<Aws::String, Aws::String>>
  void SetAccountTags(AccountTagsT&& value) {
    m_accountTagsHasBeenSet = true;
    m_accountTags = std::forward<AccountTagsT>(value);
  }
  template <typename AccountTagsT = Aws::Map<Aws::String, Aws::String>>
  AccountEntity& WithAccountTags(AccountTagsT&& value) {
    SetAccountTags(std::forward<AccountTagsT>(value));
    return *this;
  }
  template <typename AccountTagsKeyT = Aws::String, typename AccountTagsValueT = Aws::String>
  AccountEntity& AddAccountTags(AccountTagsKeyT&& key, AccountTagsValueT&& value) {
    m_accountTagsHasBeenSet = true;
    m_accountTags.emplace(std::forward<AccountTagsKeyT>(key), std::forward<AccountTagsValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::Map<Aws::String, Aws::String> m_accountTags;
  bool m_accountIdHasBeenSet = false;
  bool m_accountTagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
