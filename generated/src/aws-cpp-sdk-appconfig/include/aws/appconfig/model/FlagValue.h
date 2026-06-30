/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/model/AttributeValue.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AppConfig {
namespace Model {

/**
 * <p>The feature flag value configuration for a treatment, including the enabled
 * state and attribute values.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/FlagValue">AWS
 * API Reference</a></p>
 */
class FlagValue {
 public:
  AWS_APPCONFIG_API FlagValue() = default;
  AWS_APPCONFIG_API FlagValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API FlagValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether the feature flag is enabled for this treatment.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline FlagValue& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The attribute values associated with this flag value.</p>
   */
  inline const Aws::Map<Aws::String, AttributeValue>& GetAttributeValues() const { return m_attributeValues; }
  inline bool AttributeValuesHasBeenSet() const { return m_attributeValuesHasBeenSet; }
  template <typename AttributeValuesT = Aws::Map<Aws::String, AttributeValue>>
  void SetAttributeValues(AttributeValuesT&& value) {
    m_attributeValuesHasBeenSet = true;
    m_attributeValues = std::forward<AttributeValuesT>(value);
  }
  template <typename AttributeValuesT = Aws::Map<Aws::String, AttributeValue>>
  FlagValue& WithAttributeValues(AttributeValuesT&& value) {
    SetAttributeValues(std::forward<AttributeValuesT>(value));
    return *this;
  }
  template <typename AttributeValuesKeyT = Aws::String, typename AttributeValuesValueT = AttributeValue>
  FlagValue& AddAttributeValues(AttributeValuesKeyT&& key, AttributeValuesValueT&& value) {
    m_attributeValuesHasBeenSet = true;
    m_attributeValues.emplace(std::forward<AttributeValuesKeyT>(key), std::forward<AttributeValuesValueT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::Map<Aws::String, AttributeValue> m_attributeValues;
  bool m_enabledHasBeenSet = false;
  bool m_attributeValuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
