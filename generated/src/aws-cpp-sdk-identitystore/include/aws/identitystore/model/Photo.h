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
 * <p>Contains information about a user's photo. Users can have up to 3 photos,
 * with one designated as primary. Supports common image formats, including jpg,
 * jpeg, png, and gif.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/identitystore-2020-06-15/Photo">AWS
 * API Reference</a></p>
 */
class Photo {
 public:
  AWS_IDENTITYSTORE_API Photo() = default;
  AWS_IDENTITYSTORE_API Photo(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API Photo& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IDENTITYSTORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The photo data or URL. Supported formats include jpg, jpeg, png, and gif.
   * This field is required for all photo entries.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  Photo& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of photo. This field is optional and can be used to categorize
   * different types of photos.</p>
   */
  inline const Aws::String& GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  template <typename TypeT = Aws::String>
  void SetType(TypeT&& value) {
    m_typeHasBeenSet = true;
    m_type = std::forward<TypeT>(value);
  }
  template <typename TypeT = Aws::String>
  Photo& WithType(TypeT&& value) {
    SetType(std::forward<TypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of the photo for display purposes. This optional
   * field provides context about the photo.</p>
   */
  inline const Aws::String& GetDisplay() const { return m_display; }
  inline bool DisplayHasBeenSet() const { return m_displayHasBeenSet; }
  template <typename DisplayT = Aws::String>
  void SetDisplay(DisplayT&& value) {
    m_displayHasBeenSet = true;
    m_display = std::forward<DisplayT>(value);
  }
  template <typename DisplayT = Aws::String>
  Photo& WithDisplay(DisplayT&& value) {
    SetDisplay(std::forward<DisplayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether this is the user's primary photo. Default value is
   * <code>false</code>. Only one photo can be designated as primary per user.</p>
   */
  inline bool GetPrimary() const { return m_primary; }
  inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }
  inline void SetPrimary(bool value) {
    m_primaryHasBeenSet = true;
    m_primary = value;
  }
  inline Photo& WithPrimary(bool value) {
    SetPrimary(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_value;

  Aws::String m_type;

  Aws::String m_display;

  bool m_primary{false};
  bool m_valueHasBeenSet = false;
  bool m_typeHasBeenSet = false;
  bool m_displayHasBeenSet = false;
  bool m_primaryHasBeenSet = false;
};

}  // namespace Model
}  // namespace IdentityStore
}  // namespace Aws
