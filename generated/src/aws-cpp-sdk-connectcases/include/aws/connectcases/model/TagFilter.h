/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectcases/ConnectCases_EXPORTS.h>
#include <aws/connectcases/model/TagValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectCases {
namespace Model {

/**
 * <p>A filter for tags. Only one value can be provided.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectcases-2022-10-03/TagFilter">AWS
 * API Reference</a></p>
 */
class TagFilter {
 public:
  AWS_CONNECTCASES_API TagFilter() = default;
  AWS_CONNECTCASES_API TagFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API TagFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTCASES_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Object containing tag key and value information.</p>
   */
  inline const TagValue& GetEqualTo() const { return m_equalTo; }
  inline bool EqualToHasBeenSet() const { return m_equalToHasBeenSet; }
  template <typename EqualToT = TagValue>
  void SetEqualTo(EqualToT&& value) {
    m_equalToHasBeenSet = true;
    m_equalTo = std::forward<EqualToT>(value);
  }
  template <typename EqualToT = TagValue>
  TagFilter& WithEqualTo(EqualToT&& value) {
    SetEqualTo(std::forward<EqualToT>(value));
    return *this;
  }
  ///@}
 private:
  TagValue m_equalTo;
  bool m_equalToHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectCases
}  // namespace Aws
