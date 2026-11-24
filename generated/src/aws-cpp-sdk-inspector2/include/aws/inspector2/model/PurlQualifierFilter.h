/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>
#include <aws/inspector2/model/MapComparison.h>
#include <aws/inspector2/model/PurlQualifierKey.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>An object that describes the details of a package URL (purl) qualifier
 * filter.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/PurlQualifierFilter">AWS
 * API Reference</a></p>
 */
class PurlQualifierFilter {
 public:
  AWS_INSPECTOR2_API PurlQualifierFilter() = default;
  AWS_INSPECTOR2_API PurlQualifierFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API PurlQualifierFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The operator to use when comparing values in the filter.</p>
   */
  inline MapComparison GetComparison() const { return m_comparison; }
  inline bool ComparisonHasBeenSet() const { return m_comparisonHasBeenSet; }
  inline void SetComparison(MapComparison value) {
    m_comparisonHasBeenSet = true;
    m_comparison = value;
  }
  inline PurlQualifierFilter& WithComparison(MapComparison value) {
    SetComparison(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The package URL (purl) qualifier key to filter on.</p>
   */
  inline PurlQualifierKey GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  inline void SetKey(PurlQualifierKey value) {
    m_keyHasBeenSet = true;
    m_key = value;
  }
  inline PurlQualifierFilter& WithKey(PurlQualifierKey value) {
    SetKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The package URL (purl) qualifier value to filter on.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  PurlQualifierFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  MapComparison m_comparison{MapComparison::NOT_SET};

  PurlQualifierKey m_key{PurlQualifierKey::NOT_SET};

  Aws::String m_value;
  bool m_comparisonHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
