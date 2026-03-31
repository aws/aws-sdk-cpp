/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ArtifactDetails.h>

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
 * <p>Results of clinical note generation including note, transcript, and
 * summary</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/ClinicalNoteGenerationResult">AWS
 * API Reference</a></p>
 */
class ClinicalNoteGenerationResult {
 public:
  AWS_CONNECTHEALTH_API ClinicalNoteGenerationResult() = default;
  AWS_CONNECTHEALTH_API ClinicalNoteGenerationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API ClinicalNoteGenerationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details about the generated clinical note</p>
   */
  inline const ArtifactDetails& GetNoteResult() const { return m_noteResult; }
  inline bool NoteResultHasBeenSet() const { return m_noteResultHasBeenSet; }
  template <typename NoteResultT = ArtifactDetails>
  void SetNoteResult(NoteResultT&& value) {
    m_noteResultHasBeenSet = true;
    m_noteResult = std::forward<NoteResultT>(value);
  }
  template <typename NoteResultT = ArtifactDetails>
  ClinicalNoteGenerationResult& WithNoteResult(NoteResultT&& value) {
    SetNoteResult(std::forward<NoteResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the generated transcript</p>
   */
  inline const ArtifactDetails& GetTranscriptResult() const { return m_transcriptResult; }
  inline bool TranscriptResultHasBeenSet() const { return m_transcriptResultHasBeenSet; }
  template <typename TranscriptResultT = ArtifactDetails>
  void SetTranscriptResult(TranscriptResultT&& value) {
    m_transcriptResultHasBeenSet = true;
    m_transcriptResult = std::forward<TranscriptResultT>(value);
  }
  template <typename TranscriptResultT = ArtifactDetails>
  ClinicalNoteGenerationResult& WithTranscriptResult(TranscriptResultT&& value) {
    SetTranscriptResult(std::forward<TranscriptResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Details about the generated after visit summary</p>
   */
  inline const ArtifactDetails& GetAfterVisitSummaryResult() const { return m_afterVisitSummaryResult; }
  inline bool AfterVisitSummaryResultHasBeenSet() const { return m_afterVisitSummaryResultHasBeenSet; }
  template <typename AfterVisitSummaryResultT = ArtifactDetails>
  void SetAfterVisitSummaryResult(AfterVisitSummaryResultT&& value) {
    m_afterVisitSummaryResultHasBeenSet = true;
    m_afterVisitSummaryResult = std::forward<AfterVisitSummaryResultT>(value);
  }
  template <typename AfterVisitSummaryResultT = ArtifactDetails>
  ClinicalNoteGenerationResult& WithAfterVisitSummaryResult(AfterVisitSummaryResultT&& value) {
    SetAfterVisitSummaryResult(std::forward<AfterVisitSummaryResultT>(value));
    return *this;
  }
  ///@}
 private:
  ArtifactDetails m_noteResult;

  ArtifactDetails m_transcriptResult;

  ArtifactDetails m_afterVisitSummaryResult;
  bool m_noteResultHasBeenSet = false;
  bool m_transcriptResultHasBeenSet = false;
  bool m_afterVisitSummaryResultHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
