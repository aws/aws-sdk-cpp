/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/SummaryGenerationMode.h>

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
 * <p>The output configuration settings for the contextual metadata feature. Use
 * this structure when the feed output generates metadata that describes the media
 * content. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elementalinference-2018-11-14/ContextualMetadataConfig">AWS
 * API Reference</a></p>
 */
class ContextualMetadataConfig {
 public:
  AWS_ELEMENTALINFERENCE_API ContextualMetadataConfig() = default;
  AWS_ELEMENTALINFERENCE_API ContextualMetadataConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API ContextualMetadataConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ELEMENTALINFERENCE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether Elemental Inference generates a descriptive summary of the
   * media content for this output. </p> <p>Valid values:</p> <ul> <li> <p>ENABLED
   * (default) – Elemental Inference generates a descriptive summary along with IAB
   * taxonomy and GARM suitability classifications. </p> </li> <li> <p>DISABLED – No
   * descriptive summary is generated.</p> </li> </ul>
   */
  inline SummaryGenerationMode GetSummaryGeneration() const { return m_summaryGeneration; }
  inline bool SummaryGenerationHasBeenSet() const { return m_summaryGenerationHasBeenSet; }
  inline void SetSummaryGeneration(SummaryGenerationMode value) {
    m_summaryGenerationHasBeenSet = true;
    m_summaryGeneration = value;
  }
  inline ContextualMetadataConfig& WithSummaryGeneration(SummaryGenerationMode value) {
    SetSummaryGeneration(value);
    return *this;
  }
  ///@}
 private:
  SummaryGenerationMode m_summaryGeneration{SummaryGenerationMode::NOT_SET};
  bool m_summaryGenerationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
