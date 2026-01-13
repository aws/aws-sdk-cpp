/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The resource tag parameter of the project profile.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/ResourceTagParameter">AWS
 * API Reference</a></p>
 */
class ResourceTagParameter {
 public:
  AWS_DATAZONE_API ResourceTagParameter() = default;
  AWS_DATAZONE_API ResourceTagParameter(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API ResourceTagParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The key of the resource tag parameter of the project profile.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  ResourceTagParameter& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the resource tag parameter key of the project profile.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ResourceTagParameter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the value of the resource tag parameter of the project
   * profile is editable at the project level.</p>
   */
  inline bool GetIsValueEditable() const { return m_isValueEditable; }
  inline bool IsValueEditableHasBeenSet() const { return m_isValueEditableHasBeenSet; }
  inline void SetIsValueEditable(bool value) {
    m_isValueEditableHasBeenSet = true;
    m_isValueEditable = value;
  }
  inline ResourceTagParameter& WithIsValueEditable(bool value) {
    SetIsValueEditable(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  Aws::String m_value;

  bool m_isValueEditable{false};
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_isValueEditableHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
