/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RealTimeContactAnalysisTranscriptItemWithCharacterOffsets.h>
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
 * <p>An individual value extracted from the conversation, including its content
 * and the locations where it was found.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RealTimeContactAnalysisExtractedInformationValue">AWS
 * API Reference</a></p>
 */
class RealTimeContactAnalysisExtractedInformationValue {
 public:
  AWS_CONNECT_API RealTimeContactAnalysisExtractedInformationValue() = default;
  AWS_CONNECT_API RealTimeContactAnalysisExtractedInformationValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API RealTimeContactAnalysisExtractedInformationValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The text content of the extracted value.</p>
   */
  inline const Aws::String& GetContent() const { return m_content; }
  inline bool ContentHasBeenSet() const { return m_contentHasBeenSet; }
  template <typename ContentT = Aws::String>
  void SetContent(ContentT&& value) {
    m_contentHasBeenSet = true;
    m_content = std::forward<ContentT>(value);
  }
  template <typename ContentT = Aws::String>
  RealTimeContactAnalysisExtractedInformationValue& WithContent(ContentT&& value) {
    SetContent(std::forward<ContentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The sections in the conversation that indicate where the extracted value was
   * found.</p>
   */
  inline const Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>& GetPointsOfInterest() const {
    return m_pointsOfInterest;
  }
  inline bool PointsOfInterestHasBeenSet() const { return m_pointsOfInterestHasBeenSet; }
  template <typename PointsOfInterestT = Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>>
  void SetPointsOfInterest(PointsOfInterestT&& value) {
    m_pointsOfInterestHasBeenSet = true;
    m_pointsOfInterest = std::forward<PointsOfInterestT>(value);
  }
  template <typename PointsOfInterestT = Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>>
  RealTimeContactAnalysisExtractedInformationValue& WithPointsOfInterest(PointsOfInterestT&& value) {
    SetPointsOfInterest(std::forward<PointsOfInterestT>(value));
    return *this;
  }
  template <typename PointsOfInterestT = RealTimeContactAnalysisTranscriptItemWithCharacterOffsets>
  RealTimeContactAnalysisExtractedInformationValue& AddPointsOfInterest(PointsOfInterestT&& value) {
    m_pointsOfInterestHasBeenSet = true;
    m_pointsOfInterest.emplace_back(std::forward<PointsOfInterestT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_content;

  Aws::Vector<RealTimeContactAnalysisTranscriptItemWithCharacterOffsets> m_pointsOfInterest;
  bool m_contentHasBeenSet = false;
  bool m_pointsOfInterestHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
