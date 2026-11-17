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
 * <p>The contextual metadata output on this feed that provides scenes for a
 * perScene trigger and media.contextual for a function. Specify this structure for
 * a perScene trigger, and for a function that references media.contextual on a
 * perShot trigger. </p> <p>If the function output is ENABLED, the output that you
 * name must also be ENABLED.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ContextualMetadataSettings">AWS
 * API Reference</a></p>
 */
class ContextualMetadataSettings {
 public:
  AWS_ELEMENTALINFERENCE_API ContextualMetadataSettings() = default;
  AWS_ELEMENTALINFERENCE_API ContextualMetadataSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ContextualMetadataSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of an ENABLED contextual metadata output on this feed.</p>
   */
  inline const Aws::String& GetOutputName() const { return m_outputName; }
  inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }
  template <typename OutputNameT = Aws::String>
  void SetOutputName(OutputNameT&& value) {
    m_outputNameHasBeenSet = true;
    m_outputName = std::forward<OutputNameT>(value);
  }
  template <typename OutputNameT = Aws::String>
  ContextualMetadataSettings& WithOutputName(OutputNameT&& value) {
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
