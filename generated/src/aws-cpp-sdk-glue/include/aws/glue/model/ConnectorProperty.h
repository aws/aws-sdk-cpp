/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/PropertyLocation.h>
#include <aws/glue/model/PropertyType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <p>Defines a property configuration for connection types, default values, and
 * where the property should be used in requests.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ConnectorProperty">AWS
 * API Reference</a></p>
 */
class ConnectorProperty {
 public:
  AWS_GLUE_API ConnectorProperty() = default;
  AWS_GLUE_API ConnectorProperty(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ConnectorProperty& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the property.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ConnectorProperty& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A key name to use when sending this property in API requests, if different
   * from the display name.</p>
   */
  inline const Aws::String& GetKeyOverride() const { return m_keyOverride; }
  inline bool KeyOverrideHasBeenSet() const { return m_keyOverrideHasBeenSet; }
  template <typename KeyOverrideT = Aws::String>
  void SetKeyOverride(KeyOverrideT&& value) {
    m_keyOverrideHasBeenSet = true;
    m_keyOverride = std::forward<KeyOverrideT>(value);
  }
  template <typename KeyOverrideT = Aws::String>
  ConnectorProperty& WithKeyOverride(KeyOverrideT&& value) {
    SetKeyOverride(std::forward<KeyOverrideT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether the property is required.</p>
   */
  inline bool GetRequired() const { return m_required; }
  inline bool RequiredHasBeenSet() const { return m_requiredHasBeenSet; }
  inline void SetRequired(bool value) {
    m_requiredHasBeenSet = true;
    m_required = value;
  }
  inline ConnectorProperty& WithRequired(bool value) {
    SetRequired(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default value for the property.</p>
   */
  inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = Aws::String>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = Aws::String>
  ConnectorProperty& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>AllowedValue</code> objects representing the values allowed
   * for the property.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedValues() const { return m_allowedValues; }
  inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
  template <typename AllowedValuesT = Aws::Vector<Aws::String>>
  void SetAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues = std::forward<AllowedValuesT>(value);
  }
  template <typename AllowedValuesT = Aws::Vector<Aws::String>>
  ConnectorProperty& WithAllowedValues(AllowedValuesT&& value) {
    SetAllowedValues(std::forward<AllowedValuesT>(value));
    return *this;
  }
  template <typename AllowedValuesT = Aws::String>
  ConnectorProperty& AddAllowedValues(AllowedValuesT&& value) {
    m_allowedValuesHasBeenSet = true;
    m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies where this property should be included in REST requests, such as in
   * headers, query parameters, or request body.</p>
   */
  inline PropertyLocation GetPropertyLocation() const { return m_propertyLocation; }
  inline bool PropertyLocationHasBeenSet() const { return m_propertyLocationHasBeenSet; }
  inline void SetPropertyLocation(PropertyLocation value) {
    m_propertyLocationHasBeenSet = true;
    m_propertyLocation = value;
  }
  inline ConnectorProperty& WithPropertyLocation(PropertyLocation value) {
    SetPropertyLocation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The data type of this property</p>
   */
  inline PropertyType GetPropertyType() const { return m_propertyType; }
  inline bool PropertyTypeHasBeenSet() const { return m_propertyTypeHasBeenSet; }
  inline void SetPropertyType(PropertyType value) {
    m_propertyTypeHasBeenSet = true;
    m_propertyType = value;
  }
  inline ConnectorProperty& WithPropertyType(PropertyType value) {
    SetPropertyType(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_keyOverride;

  bool m_required{false};

  Aws::String m_defaultValue;

  Aws::Vector<Aws::String> m_allowedValues;

  PropertyLocation m_propertyLocation{PropertyLocation::NOT_SET};

  PropertyType m_propertyType{PropertyType::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_keyOverrideHasBeenSet = false;
  bool m_requiredHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
  bool m_allowedValuesHasBeenSet = false;
  bool m_propertyLocationHasBeenSet = false;
  bool m_propertyTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
