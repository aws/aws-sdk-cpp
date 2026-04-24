/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/PropertyLocation.h>
#include <aws/glue/model/ResponseExtractionMapping.h>

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
 * <p>Parameter extraction configuration that defines how to extract and map values
 * from API responses to request parameters.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ExtractedParameter">AWS
 * API Reference</a></p>
 */
class ExtractedParameter {
 public:
  AWS_GLUE_API ExtractedParameter() = default;
  AWS_GLUE_API ExtractedParameter(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ExtractedParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The parameter key name that will be used in subsequent requests.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  ExtractedParameter& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The default value to use if the parameter cannot be extracted from the
   * response.</p>
   */
  inline const Aws::String& GetDefaultValue() const { return m_defaultValue; }
  inline bool DefaultValueHasBeenSet() const { return m_defaultValueHasBeenSet; }
  template <typename DefaultValueT = Aws::String>
  void SetDefaultValue(DefaultValueT&& value) {
    m_defaultValueHasBeenSet = true;
    m_defaultValue = std::forward<DefaultValueT>(value);
  }
  template <typename DefaultValueT = Aws::String>
  ExtractedParameter& WithDefaultValue(DefaultValueT&& value) {
    SetDefaultValue(std::forward<DefaultValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies where this extracted parameter should be placed in subsequent
   * requests, such as in headers, query parameters, or request body.</p>
   */
  inline PropertyLocation GetPropertyLocation() const { return m_propertyLocation; }
  inline bool PropertyLocationHasBeenSet() const { return m_propertyLocationHasBeenSet; }
  inline void SetPropertyLocation(PropertyLocation value) {
    m_propertyLocationHasBeenSet = true;
    m_propertyLocation = value;
  }
  inline ExtractedParameter& WithPropertyLocation(PropertyLocation value) {
    SetPropertyLocation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON path or extraction mapping that defines how to extract the parameter
   * value from API responses.</p>
   */
  inline const ResponseExtractionMapping& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = ResponseExtractionMapping>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = ResponseExtractionMapping>
  ExtractedParameter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  Aws::String m_defaultValue;

  PropertyLocation m_propertyLocation{PropertyLocation::NOT_SET};

  ResponseExtractionMapping m_value;
  bool m_keyHasBeenSet = false;
  bool m_defaultValueHasBeenSet = false;
  bool m_propertyLocationHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
