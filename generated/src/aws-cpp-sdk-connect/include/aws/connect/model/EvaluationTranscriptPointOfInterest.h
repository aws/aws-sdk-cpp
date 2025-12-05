/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationSuggestedAnswerTranscriptMillisecondOffsets.h>
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
 * <p>Information about the point of interest in transcript provided to
 * evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationTranscriptPointOfInterest">AWS
 * API Reference</a></p>
 */
class EvaluationTranscriptPointOfInterest {
 public:
  AWS_CONNECT_API EvaluationTranscriptPointOfInterest() = default;
  AWS_CONNECT_API EvaluationTranscriptPointOfInterest(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationTranscriptPointOfInterest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Offset in milliseconds from the beginning of transcript.</p>
   */
  inline const EvaluationSuggestedAnswerTranscriptMillisecondOffsets& GetMillisecondOffsets() const { return m_millisecondOffsets; }
  inline bool MillisecondOffsetsHasBeenSet() const { return m_millisecondOffsetsHasBeenSet; }
  template <typename MillisecondOffsetsT = EvaluationSuggestedAnswerTranscriptMillisecondOffsets>
  void SetMillisecondOffsets(MillisecondOffsetsT&& value) {
    m_millisecondOffsetsHasBeenSet = true;
    m_millisecondOffsets = std::forward<MillisecondOffsetsT>(value);
  }
  template <typename MillisecondOffsetsT = EvaluationSuggestedAnswerTranscriptMillisecondOffsets>
  EvaluationTranscriptPointOfInterest& WithMillisecondOffsets(MillisecondOffsetsT&& value) {
    SetMillisecondOffsets(std::forward<MillisecondOffsetsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Segment of transcript.</p>
   */
  inline const Aws::String& GetTranscriptSegment() const { return m_transcriptSegment; }
  inline bool TranscriptSegmentHasBeenSet() const { return m_transcriptSegmentHasBeenSet; }
  template <typename TranscriptSegmentT = Aws::String>
  void SetTranscriptSegment(TranscriptSegmentT&& value) {
    m_transcriptSegmentHasBeenSet = true;
    m_transcriptSegment = std::forward<TranscriptSegmentT>(value);
  }
  template <typename TranscriptSegmentT = Aws::String>
  EvaluationTranscriptPointOfInterest& WithTranscriptSegment(TranscriptSegmentT&& value) {
    SetTranscriptSegment(std::forward<TranscriptSegmentT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationSuggestedAnswerTranscriptMillisecondOffsets m_millisecondOffsets;

  Aws::String m_transcriptSegment;
  bool m_millisecondOffsetsHasBeenSet = false;
  bool m_transcriptSegmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
