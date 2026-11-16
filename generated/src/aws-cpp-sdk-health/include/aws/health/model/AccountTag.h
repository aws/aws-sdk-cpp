/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/model/AccountTagType.h>

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
 * <p>A tag key-value pair associated with a resource in an account.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/health-2016-08-04/AccountTag">AWS
 * API Reference</a></p>
 */
class AccountTag {
 public:
  AWS_HEALTH_API AccountTag() = default;
  AWS_HEALTH_API AccountTag(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API AccountTag& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_HEALTH_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{
  /**
   * <p>The tag key.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  AccountTag& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tag value.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  AccountTag& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of tag (resource tag or account tag).</p>
   */
  inline AccountTagType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(AccountTagType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline AccountTag& WithType(AccountTagType value) {
    SetType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  Aws::String m_value;

  AccountTagType m_type{AccountTagType::NOT_SET};
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_typeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Health
}  // namespace Aws
