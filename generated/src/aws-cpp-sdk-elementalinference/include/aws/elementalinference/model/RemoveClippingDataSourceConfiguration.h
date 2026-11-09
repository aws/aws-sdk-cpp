/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elementalinference/ElementalInference_EXPORTS.h>

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
 * <p>Removes the game from an event clipping output at the action's scheduled
 * time. This is a type of ScheduleActionOperation, and the output must be an event
 * clipping output. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/RemoveClippingDataSourceConfiguration">AWS
 * API Reference</a></p>
 */
class RemoveClippingDataSourceConfiguration {
 public:
  AWS_ELEMENTALINFERENCE_API RemoveClippingDataSourceConfiguration() = default;
  AWS_ELEMENTALINFERENCE_API RemoveClippingDataSourceConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API RemoveClippingDataSourceConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the output that you want to remove the game from.</p>
   */
  inline const Aws::String& GetOutputName() const { return m_outputName; }
  inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }
  template <typename OutputNameT = Aws::String>
  void SetOutputName(OutputNameT&& value) {
    m_outputNameHasBeenSet = true;
    m_outputName = std::forward<OutputNameT>(value);
  }
  template <typename OutputNameT = Aws::String>
  RemoveClippingDataSourceConfiguration& WithOutputName(OutputNameT&& value) {
    SetOutputName(std::forward<OutputNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_outputName;
  bool m_outputNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
