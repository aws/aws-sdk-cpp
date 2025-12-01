/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/PrimaryAttributeValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>A primary attribute access control configuration item.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/PrimaryAttributeAccessControlConfigurationItem">AWS
 * API Reference</a></p>
 */
class PrimaryAttributeAccessControlConfigurationItem {
 public:
  AWS_CONNECT_API PrimaryAttributeAccessControlConfigurationItem() = default;
  AWS_CONNECT_API PrimaryAttributeAccessControlConfigurationItem(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API PrimaryAttributeAccessControlConfigurationItem& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The item's primary attribute values.</p>
   */
  inline const Aws::Vector<PrimaryAttributeValue>& GetPrimaryAttributeValues() const { return m_primaryAttributeValues; }
  inline bool PrimaryAttributeValuesHasBeenSet() const { return m_primaryAttributeValuesHasBeenSet; }
  template <typename PrimaryAttributeValuesT = Aws::Vector<PrimaryAttributeValue>>
  void SetPrimaryAttributeValues(PrimaryAttributeValuesT&& value) {
    m_primaryAttributeValuesHasBeenSet = true;
    m_primaryAttributeValues = std::forward<PrimaryAttributeValuesT>(value);
  }
  template <typename PrimaryAttributeValuesT = Aws::Vector<PrimaryAttributeValue>>
  PrimaryAttributeAccessControlConfigurationItem& WithPrimaryAttributeValues(PrimaryAttributeValuesT&& value) {
    SetPrimaryAttributeValues(std::forward<PrimaryAttributeValuesT>(value));
    return *this;
  }
  template <typename PrimaryAttributeValuesT = PrimaryAttributeValue>
  PrimaryAttributeAccessControlConfigurationItem& AddPrimaryAttributeValues(PrimaryAttributeValuesT&& value) {
    m_primaryAttributeValuesHasBeenSet = true;
    m_primaryAttributeValues.emplace_back(std::forward<PrimaryAttributeValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<PrimaryAttributeValue> m_primaryAttributeValues;
  bool m_primaryAttributeValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
