/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

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
 * <p>A filter value. Exactly one of <code>stringValue</code> or
 * <code>longValue</code> must be specified.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/SearchFilterValue">AWS
 * API Reference</a></p>
 */
class SearchFilterValue {
 public:
  AWS_GLUE_API SearchFilterValue() = default;
  AWS_GLUE_API SearchFilterValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API SearchFilterValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A string filter value.</p>
   */
  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  SearchFilterValue& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A long integer filter value.</p>
   */
  inline long long GetLongValue() const { return m_longValue; }
  inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
  inline void SetLongValue(long long value) {
    m_longValueHasBeenSet = true;
    m_longValue = value;
  }
  inline SearchFilterValue& WithLongValue(long long value) {
    SetLongValue(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;

  long long m_longValue{0};
  bool m_stringValueHasBeenSet = false;
  bool m_longValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
