/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/OutputStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ElementalInference {
namespace Model {

/**
 * <p>Enables or disables an output at the action's scheduled time. This is a type
 * of ScheduleActionOperation. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/UpdateOutputStatus">AWS
 * API Reference</a></p>
 */
class UpdateOutputStatus {
 public:
  AWS_ELEMENTALINFERENCE_API UpdateOutputStatus() = default;
  AWS_ELEMENTALINFERENCE_API UpdateOutputStatus(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API UpdateOutputStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the output that you want to enable or disable. The output must
   * exist in the feed when you create the action. </p>
   */
  inline const Aws::String& GetOutputName() const { return m_outputName; }
  inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }
  template <typename OutputNameT = Aws::String>
  void SetOutputName(OutputNameT&& value) {
    m_outputNameHasBeenSet = true;
    m_outputName = std::forward<OutputNameT>(value);
  }
  template <typename OutputNameT = Aws::String>
  UpdateOutputStatus& WithOutputName(OutputNameT&& value) {
    SetOutputName(std::forward<OutputNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the output is enabled or disabled after the action
   * runs.</p>
   */
  inline OutputStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(OutputStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline UpdateOutputStatus& WithStatus(OutputStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_outputName;

  OutputStatus m_status{OutputStatus::NOT_SET};
  bool m_outputNameHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
