/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/guardduty/GuardDuty_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace GuardDuty {
namespace Model {

/**
 * <p>Contains information about a behavior that related findings
 * share.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/SharedBehavior">AWS
 * API Reference</a></p>
 */
class SharedBehavior {
 public:
  AWS_GUARDDUTY_API SharedBehavior() = default;
  AWS_GUARDDUTY_API SharedBehavior(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API SharedBehavior& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The JSON path of the finding attribute that matched.</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  SharedBehavior& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value that matched.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  SharedBehavior& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_path;

  Aws::String m_value;
  bool m_pathHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
