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
 * <p>The event clipping output on this feed that provides events for a perClip
 * trigger and media.clip for a function. Specify this structure for a perClip
 * trigger, and for a function that references media.clip on a fixedInterval
 * trigger. </p> <p>If the function output is ENABLED, the output that you name
 * must also be ENABLED.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ClippingSettings">AWS
 * API Reference</a></p>
 */
class ClippingSettings {
 public:
  AWS_ELEMENTALINFERENCE_API ClippingSettings() = default;
  AWS_ELEMENTALINFERENCE_API ClippingSettings(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ClippingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of an ENABLED event clipping output on this feed.</p>
   */
  inline const Aws::String& GetOutputName() const { return m_outputName; }
  inline bool OutputNameHasBeenSet() const { return m_outputNameHasBeenSet; }
  template <typename OutputNameT = Aws::String>
  void SetOutputName(OutputNameT&& value) {
    m_outputNameHasBeenSet = true;
    m_outputName = std::forward<OutputNameT>(value);
  }
  template <typename OutputNameT = Aws::String>
  ClippingSettings& WithOutputName(OutputNameT&& value) {
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
