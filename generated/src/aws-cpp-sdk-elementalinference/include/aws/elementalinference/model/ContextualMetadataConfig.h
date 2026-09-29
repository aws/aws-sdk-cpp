/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elementalinference/ElementalInference_EXPORTS.h>
#include <aws/elementalinference/model/ExtendedAnalysisMode.h>
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
   * media content for this output, along with the objects and actions that it
   * detects. This setting is independent of <code>extendedAnalysis</code>. </p>
   * <p>Valid values:</p> <ul> <li> <p>ENABLED (default) – Elemental Inference
   * populates the summary, objects, and actions fields, along with the IAB taxonomy
   * and GARM suitability classifications. </p> </li> <li> <p>DISABLED – Elemental
   * Inference doesn't populate the summary, objects, and actions fields. </p> </li>
   * </ul>
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

  ///@{
  /**
   * <p>Specifies whether Elemental Inference generates extended analysis of the
   * media content for this output. Extended analysis identifies the people,
   * environments, brands, and on-screen text in the media content. This setting is
   * independent of <code>summaryGeneration</code>. </p> <p>Valid values:</p> <ul>
   * <li> <p>ENABLED (default) – Elemental Inference populates the people,
   * environments, brands, and on-screen text fields. </p> </li> <li> <p>DISABLED –
   * Elemental Inference doesn't populate the people, environments, brands, and
   * on-screen text fields. </p> </li> </ul>
   */
  inline ExtendedAnalysisMode GetExtendedAnalysis() const { return m_extendedAnalysis; }
  inline bool ExtendedAnalysisHasBeenSet() const { return m_extendedAnalysisHasBeenSet; }
  inline void SetExtendedAnalysis(ExtendedAnalysisMode value) {
    m_extendedAnalysisHasBeenSet = true;
    m_extendedAnalysis = value;
  }
  inline ContextualMetadataConfig& WithExtendedAnalysis(ExtendedAnalysisMode value) {
    SetExtendedAnalysis(value);
    return *this;
  }
  ///@}
 private:
  SummaryGenerationMode m_summaryGeneration{SummaryGenerationMode::NOT_SET};

  ExtendedAnalysisMode m_extendedAnalysis{ExtendedAnalysisMode::NOT_SET};
  bool m_summaryGenerationHasBeenSet = false;
  bool m_extendedAnalysisHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
