/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/IoT_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>The numerical range value type to compare a command parameter value
 * against.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CommandParameterValueNumberRange">AWS
 * API Reference</a></p>
 */
class CommandParameterValueNumberRange {
 public:
  AWS_IOT_API CommandParameterValueNumberRange() = default;
  AWS_IOT_API CommandParameterValueNumberRange(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API CommandParameterValueNumberRange& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum value of a numerical range of a command parameter value.</p>
   */
  inline const Aws::String& GetMin() const { return m_min; }
  inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
  template <typename MinT = Aws::String>
  void SetMin(MinT&& value) {
    m_minHasBeenSet = true;
    m_min = std::forward<MinT>(value);
  }
  template <typename MinT = Aws::String>
  CommandParameterValueNumberRange& WithMin(MinT&& value) {
    SetMin(std::forward<MinT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum value of a numerical range of a command parameter value.</p>
   */
  inline const Aws::String& GetMax() const { return m_max; }
  inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
  template <typename MaxT = Aws::String>
  void SetMax(MaxT&& value) {
    m_maxHasBeenSet = true;
    m_max = std::forward<MaxT>(value);
  }
  template <typename MaxT = Aws::String>
  CommandParameterValueNumberRange& WithMax(MaxT&& value) {
    SetMax(std::forward<MaxT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_min;

  Aws::String m_max;
  bool m_minHasBeenSet = false;
  bool m_maxHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
