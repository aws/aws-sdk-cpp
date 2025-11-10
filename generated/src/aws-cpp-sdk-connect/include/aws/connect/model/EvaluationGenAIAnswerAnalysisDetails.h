/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationTranscriptPointOfInterest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>An analysis for a generative AI answer to the question.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationGenAIAnswerAnalysisDetails">AWS
 * API Reference</a></p>
 */
class EvaluationGenAIAnswerAnalysisDetails {
 public:
  AWS_CONNECT_API EvaluationGenAIAnswerAnalysisDetails() = default;
  AWS_CONNECT_API EvaluationGenAIAnswerAnalysisDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationGenAIAnswerAnalysisDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Generative AI automation answer justification.</p>
   */
  inline const Aws::String& GetJustification() const { return m_justification; }
  inline bool JustificationHasBeenSet() const { return m_justificationHasBeenSet; }
  template <typename JustificationT = Aws::String>
  void SetJustification(JustificationT&& value) {
    m_justificationHasBeenSet = true;
    m_justification = std::forward<JustificationT>(value);
  }
  template <typename JustificationT = Aws::String>
  EvaluationGenAIAnswerAnalysisDetails& WithJustification(JustificationT&& value) {
    SetJustification(std::forward<JustificationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Generative AI automation answer analysis points of interest.</p>
   */
  inline const Aws::Vector<EvaluationTranscriptPointOfInterest>& GetPointsOfInterest() const { return m_pointsOfInterest; }
  inline bool PointsOfInterestHasBeenSet() const { return m_pointsOfInterestHasBeenSet; }
  template <typename PointsOfInterestT = Aws::Vector<EvaluationTranscriptPointOfInterest>>
  void SetPointsOfInterest(PointsOfInterestT&& value) {
    m_pointsOfInterestHasBeenSet = true;
    m_pointsOfInterest = std::forward<PointsOfInterestT>(value);
  }
  template <typename PointsOfInterestT = Aws::Vector<EvaluationTranscriptPointOfInterest>>
  EvaluationGenAIAnswerAnalysisDetails& WithPointsOfInterest(PointsOfInterestT&& value) {
    SetPointsOfInterest(std::forward<PointsOfInterestT>(value));
    return *this;
  }
  template <typename PointsOfInterestT = EvaluationTranscriptPointOfInterest>
  EvaluationGenAIAnswerAnalysisDetails& AddPointsOfInterest(PointsOfInterestT&& value) {
    m_pointsOfInterestHasBeenSet = true;
    m_pointsOfInterest.emplace_back(std::forward<PointsOfInterestT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_justification;
  bool m_justificationHasBeenSet = false;

  Aws::Vector<EvaluationTranscriptPointOfInterest> m_pointsOfInterest;
  bool m_pointsOfInterestHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
