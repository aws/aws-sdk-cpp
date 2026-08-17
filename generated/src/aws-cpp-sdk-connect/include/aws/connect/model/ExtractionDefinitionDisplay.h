/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>The display configuration for an extraction definition.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ExtractionDefinitionDisplay">AWS
 * API Reference</a></p>
 */
class ExtractionDefinitionDisplay {
 public:
  AWS_CONNECT_API ExtractionDefinitionDisplay() = default;
  AWS_CONNECT_API ExtractionDefinitionDisplay(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ExtractionDefinitionDisplay& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The label displayed in the agent workspace for this extraction
   * definition.</p>
   */
  inline const Aws::String& GetLabel() const { return m_label; }
  inline bool LabelHasBeenSet() const { return m_labelHasBeenSet; }
  template <typename LabelT = Aws::String>
  void SetLabel(LabelT&& value) {
    m_labelHasBeenSet = true;
    m_label = std::forward<LabelT>(value);
  }
  template <typename LabelT = Aws::String>
  ExtractionDefinitionDisplay& WithLabel(LabelT&& value) {
    SetLabel(std::forward<LabelT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_label;
  bool m_labelHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
