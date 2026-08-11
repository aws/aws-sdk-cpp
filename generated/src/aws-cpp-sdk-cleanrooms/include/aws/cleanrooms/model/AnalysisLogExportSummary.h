/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisLogExportStatus.h>
#include <aws/cleanrooms/model/LogExportAnalysisType.h>
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
namespace CleanRooms {
namespace Model {

/**
 * <p>A summary of an analysis log export, including its identifier, status,
 * analysis type, and creation time. Returned by
 * <code>ListAnalysisLogExports</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisLogExportSummary">AWS
 * API Reference</a></p>
 */
class AnalysisLogExportSummary {
 public:
  AWS_CLEANROOMS_API AnalysisLogExportSummary() = default;
  AWS_CLEANROOMS_API AnalysisLogExportSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AnalysisLogExportSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the analysis log export.</p>
   */
  inline const Aws::String& GetAnalysisLogExportId() const { return m_analysisLogExportId; }
  inline bool AnalysisLogExportIdHasBeenSet() const { return m_analysisLogExportIdHasBeenSet; }
  template <typename AnalysisLogExportIdT = Aws::String>
  void SetAnalysisLogExportId(AnalysisLogExportIdT&& value) {
    m_analysisLogExportIdHasBeenSet = true;
    m_analysisLogExportId = std::forward<AnalysisLogExportIdT>(value);
  }
  template <typename AnalysisLogExportIdT = Aws::String>
  AnalysisLogExportSummary& WithAnalysisLogExportId(AnalysisLogExportIdT&& value) {
    SetAnalysisLogExportId(std::forward<AnalysisLogExportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the protected query that the analysis logs were
   * exported for.</p>
   */
  inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
  inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
  template <typename AnalysisIdT = Aws::String>
  void SetAnalysisId(AnalysisIdT&& value) {
    m_analysisIdHasBeenSet = true;
    m_analysisId = std::forward<AnalysisIdT>(value);
  }
  template <typename AnalysisIdT = Aws::String>
  AnalysisLogExportSummary& WithAnalysisId(AnalysisIdT&& value) {
    SetAnalysisId(std::forward<AnalysisIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of analysis that the logs were exported for. Currently, only
   * <code>PROTECTED_QUERY</code> is supported.</p>
   */
  inline LogExportAnalysisType GetAnalysisType() const { return m_analysisType; }
  inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
  inline void SetAnalysisType(LogExportAnalysisType value) {
    m_analysisTypeHasBeenSet = true;
    m_analysisType = value;
  }
  inline AnalysisLogExportSummary& WithAnalysisType(LogExportAnalysisType value) {
    SetAnalysisType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the analysis log export. Possible values are:</p> <ul> <li> <p>
   * <code>IN_PROGRESS</code> – The export is currently running.</p> </li> <li> <p>
   * <code>SUCCESS</code> – The export completed successfully.</p> </li> <li> <p>
   * <code>FAILED</code> – The export failed.</p> </li> </ul>
   */
  inline AnalysisLogExportStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AnalysisLogExportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AnalysisLogExportSummary& WithStatus(AnalysisLogExportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the analysis log export was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  AnalysisLogExportSummary& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_analysisLogExportId;

  Aws::String m_analysisId;

  LogExportAnalysisType m_analysisType{LogExportAnalysisType::NOT_SET};

  AnalysisLogExportStatus m_status{AnalysisLogExportStatus::NOT_SET};

  Aws::Utils::DateTime m_createTime{};
  bool m_analysisLogExportIdHasBeenSet = false;
  bool m_analysisIdHasBeenSet = false;
  bool m_analysisTypeHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
