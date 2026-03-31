/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/MedicalScribeTranscriptSegment.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectHealth {
namespace Model {

/**
 * <p>An event containing transcript data from the Medical Scribe
 * stream</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalScribeTranscriptEvent">AWS
 * API Reference</a></p>
 */
class MedicalScribeTranscriptEvent {
 public:
  AWS_CONNECTHEALTH_API MedicalScribeTranscriptEvent() = default;
  AWS_CONNECTHEALTH_API MedicalScribeTranscriptEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalScribeTranscriptEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A segment of the transcript</p>
   */
  inline const MedicalScribeTranscriptSegment& GetTranscriptSegment() const { return m_transcriptSegment; }
  inline bool TranscriptSegmentHasBeenSet() const { return m_transcriptSegmentHasBeenSet; }
  template <typename TranscriptSegmentT = MedicalScribeTranscriptSegment>
  void SetTranscriptSegment(TranscriptSegmentT&& value) {
    m_transcriptSegmentHasBeenSet = true;
    m_transcriptSegment = std::forward<TranscriptSegmentT>(value);
  }
  template <typename TranscriptSegmentT = MedicalScribeTranscriptSegment>
  MedicalScribeTranscriptEvent& WithTranscriptSegment(TranscriptSegmentT&& value) {
    SetTranscriptSegment(std::forward<TranscriptSegmentT>(value));
    return *this;
  }
  ///@}
 private:
  MedicalScribeTranscriptSegment m_transcriptSegment;
  bool m_transcriptSegmentHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
