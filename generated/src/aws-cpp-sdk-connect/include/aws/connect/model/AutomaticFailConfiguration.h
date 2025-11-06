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
 * <p>Information about automatic fail configuration for an evaluation
 * form.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/AutomaticFailConfiguration">AWS
 * API Reference</a></p>
 */
class AutomaticFailConfiguration {
 public:
  AWS_CONNECT_API AutomaticFailConfiguration() = default;
  AWS_CONNECT_API AutomaticFailConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API AutomaticFailConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The referenceId of the target section for auto failure.</p>
   */
  inline const Aws::String& GetTargetSection() const { return m_targetSection; }
  inline bool TargetSectionHasBeenSet() const { return m_targetSectionHasBeenSet; }
  template <typename TargetSectionT = Aws::String>
  void SetTargetSection(TargetSectionT&& value) {
    m_targetSectionHasBeenSet = true;
    m_targetSection = std::forward<TargetSectionT>(value);
  }
  template <typename TargetSectionT = Aws::String>
  AutomaticFailConfiguration& WithTargetSection(TargetSectionT&& value) {
    SetTargetSection(std::forward<TargetSectionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetSection;
  bool m_targetSectionHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
