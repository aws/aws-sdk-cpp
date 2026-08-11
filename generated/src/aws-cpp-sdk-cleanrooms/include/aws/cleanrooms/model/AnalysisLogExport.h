/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/AnalysisLogExportError.h>
#include <aws/cleanrooms/model/AnalysisLogExportResultConfiguration.h>
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
 * <p>An export of the redacted Apache Spark logs for a protected
 * query.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/AnalysisLogExport">AWS
 * API Reference</a></p>
 */
class AnalysisLogExport {
 public:
  AWS_CLEANROOMS_API AnalysisLogExport() = default;
  AWS_CLEANROOMS_API AnalysisLogExport(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API AnalysisLogExport& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  AnalysisLogExport& WithAnalysisLogExportId(AnalysisLogExportIdT&& value) {
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
  AnalysisLogExport& WithAnalysisId(AnalysisIdT&& value) {
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
  inline AnalysisLogExport& WithAnalysisType(LogExportAnalysisType value) {
    SetAnalysisType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the membership that the analysis log export belongs
   * to.</p>
   */
  inline const Aws::String& GetMembershipId() const { return m_membershipId; }
  inline bool MembershipIdHasBeenSet() const { return m_membershipIdHasBeenSet; }
  template <typename MembershipIdT = Aws::String>
  void SetMembershipId(MembershipIdT&& value) {
    m_membershipIdHasBeenSet = true;
    m_membershipId = std::forward<MembershipIdT>(value);
  }
  template <typename MembershipIdT = Aws::String>
  AnalysisLogExport& WithMembershipId(MembershipIdT&& value) {
    SetMembershipId(std::forward<MembershipIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the analysis log export. Possible values are:</p> <ul> <li> <p>
   * <code>IN_PROGRESS</code> – The export is currently running.</p> </li> <li> <p>
   * <code>SUCCESS</code> – The export completed successfully.</p> </li> <li> <p>
   * <code>FAILED</code> – The export failed. See the <code>error</code> field for
   * details.</p> </li> </ul>
   */
  inline AnalysisLogExportStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AnalysisLogExportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AnalysisLogExport& WithStatus(AnalysisLogExportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Contains the details needed to write the exported analysis logs.</p>
   */
  inline const AnalysisLogExportResultConfiguration& GetResultConfiguration() const { return m_resultConfiguration; }
  inline bool ResultConfigurationHasBeenSet() const { return m_resultConfigurationHasBeenSet; }
  template <typename ResultConfigurationT = AnalysisLogExportResultConfiguration>
  void SetResultConfiguration(ResultConfigurationT&& value) {
    m_resultConfigurationHasBeenSet = true;
    m_resultConfiguration = std::forward<ResultConfigurationT>(value);
  }
  template <typename ResultConfigurationT = AnalysisLogExportResultConfiguration>
  AnalysisLogExport& WithResultConfiguration(ResultConfigurationT&& value) {
    SetResultConfiguration(std::forward<ResultConfigurationT>(value));
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
  AnalysisLogExport& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the analysis log export was last updated.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
  inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  void SetUpdateTime(UpdateTimeT&& value) {
    m_updateTimeHasBeenSet = true;
    m_updateTime = std::forward<UpdateTimeT>(value);
  }
  template <typename UpdateTimeT = Aws::Utils::DateTime>
  AnalysisLogExport& WithUpdateTime(UpdateTimeT&& value) {
    SetUpdateTime(std::forward<UpdateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The analysis log export error. This is present only when the export
   * <code>status</code> is <code>FAILED</code>.</p>
   */
  inline const AnalysisLogExportError& GetError() const { return m_error; }
  inline bool ErrorHasBeenSet() const { return m_errorHasBeenSet; }
  template <typename ErrorT = AnalysisLogExportError>
  void SetError(ErrorT&& value) {
    m_errorHasBeenSet = true;
    m_error = std::forward<ErrorT>(value);
  }
  template <typename ErrorT = AnalysisLogExportError>
  AnalysisLogExport& WithError(ErrorT&& value) {
    SetError(std::forward<ErrorT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_analysisLogExportId;

  Aws::String m_analysisId;

  LogExportAnalysisType m_analysisType{LogExportAnalysisType::NOT_SET};

  Aws::String m_membershipId;

  AnalysisLogExportStatus m_status{AnalysisLogExportStatus::NOT_SET};

  AnalysisLogExportResultConfiguration m_resultConfiguration;

  Aws::Utils::DateTime m_createTime{};

  Aws::Utils::DateTime m_updateTime{};

  AnalysisLogExportError m_error;
  bool m_analysisLogExportIdHasBeenSet = false;
  bool m_analysisIdHasBeenSet = false;
  bool m_analysisTypeHasBeenSet = false;
  bool m_membershipIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_resultConfigurationHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_updateTimeHasBeenSet = false;
  bool m_errorHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
