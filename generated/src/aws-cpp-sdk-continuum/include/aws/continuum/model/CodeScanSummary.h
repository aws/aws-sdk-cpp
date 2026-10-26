/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/continuum/model/ScanFailureStage.h>
#include <aws/continuum/model/ScanOrigin.h>
#include <aws/continuum/model/ScanStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Customer-visible summary of one environment scan.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CodeScanSummary">AWS
 * API Reference</a></p>
 */
class CodeScanSummary {
 public:
  AWS_CONTINUUM_API CodeScanSummary() = default;
  AWS_CONTINUUM_API CodeScanSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API CodeScanSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique scan identifier.</p>
   */
  inline const Aws::String& GetScanRunId() const { return m_scanRunId; }
  inline bool ScanRunIdHasBeenSet() const { return m_scanRunIdHasBeenSet; }
  template <typename ScanRunIdT = Aws::String>
  void SetScanRunId(ScanRunIdT&& value) {
    m_scanRunIdHasBeenSet = true;
    m_scanRunId = std::forward<ScanRunIdT>(value);
  }
  template <typename ScanRunIdT = Aws::String>
  CodeScanSummary& WithScanRunId(ScanRunIdT&& value) {
    SetScanRunId(std::forward<ScanRunIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Current customer-visible status.</p>
   */
  inline ScanStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ScanStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline CodeScanSummary& WithStatus(ScanStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Why the scan was created. Always present.</p>
   */
  inline ScanOrigin GetOrigin() const { return m_origin; }
  inline bool OriginHasBeenSet() const { return m_originHasBeenSet; }
  inline void SetOrigin(ScanOrigin value) {
    m_originHasBeenSet = true;
    m_origin = value;
  }
  inline CodeScanSummary& WithOrigin(ScanOrigin value) {
    SetOrigin(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time at which Continuum accepted the scan request.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  CodeScanSummary& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time at which a terminal result was recorded.</p>
   */
  inline const Aws::Utils::DateTime& GetCompletedAt() const { return m_completedAt; }
  inline bool CompletedAtHasBeenSet() const { return m_completedAtHasBeenSet; }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  void SetCompletedAt(CompletedAtT&& value) {
    m_completedAtHasBeenSet = true;
    m_completedAt = std::forward<CompletedAtT>(value);
  }
  template <typename CompletedAtT = Aws::Utils::DateTime>
  CodeScanSummary& WithCompletedAt(CompletedAtT&& value) {
    SetCompletedAt(std::forward<CompletedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Failure detail present for unsuccessful scans.</p>
   */
  inline const Aws::String& GetFailureMessage() const { return m_failureMessage; }
  inline bool FailureMessageHasBeenSet() const { return m_failureMessageHasBeenSet; }
  template <typename FailureMessageT = Aws::String>
  void SetFailureMessage(FailureMessageT&& value) {
    m_failureMessageHasBeenSet = true;
    m_failureMessage = std::forward<FailureMessageT>(value);
  }
  template <typename FailureMessageT = Aws::String>
  CodeScanSummary& WithFailureMessage(FailureMessageT&& value) {
    SetFailureMessage(std::forward<FailureMessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Phase this scan failed in. Present only when <code>status</code> is FAILED,
   * and absent for a scan that failed before this field existed.</p>
   */
  inline ScanFailureStage GetFailureStage() const { return m_failureStage; }
  inline bool FailureStageHasBeenSet() const { return m_failureStageHasBeenSet; }
  inline void SetFailureStage(ScanFailureStage value) {
    m_failureStageHasBeenSet = true;
    m_failureStage = value;
  }
  inline CodeScanSummary& WithFailureStage(ScanFailureStage value) {
    SetFailureStage(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_scanRunId;

  ScanStatus m_status{ScanStatus::NOT_SET};

  ScanOrigin m_origin{ScanOrigin::NOT_SET};

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_completedAt{};

  Aws::String m_failureMessage;

  ScanFailureStage m_failureStage{ScanFailureStage::NOT_SET};
  bool m_scanRunIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_originHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_completedAtHasBeenSet = false;
  bool m_failureMessageHasBeenSet = false;
  bool m_failureStageHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
