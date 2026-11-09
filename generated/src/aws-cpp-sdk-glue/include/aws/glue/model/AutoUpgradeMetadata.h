/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/AutoUpgradeStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Glue {
namespace Model {

/**
 * <text>The auto-upgrade assessment information for a job configured with
 * glueVersion=auto.</text><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/AutoUpgradeMetadata">AWS
 * API Reference</a></p>
 */
class AutoUpgradeMetadata {
 public:
  AWS_GLUE_API AutoUpgradeMetadata() = default;
  AWS_GLUE_API AutoUpgradeMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API AutoUpgradeMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <text>The target Glue runtime version the job is being upgraded to.</text>
   */
  inline const Aws::String& GetTargetVersion() const { return m_targetVersion; }
  inline bool TargetVersionHasBeenSet() const { return m_targetVersionHasBeenSet; }
  template <typename TargetVersionT = Aws::String>
  void SetTargetVersion(TargetVersionT&& value) {
    m_targetVersionHasBeenSet = true;
    m_targetVersion = std::forward<TargetVersionT>(value);
  }
  template <typename TargetVersionT = Aws::String>
  AutoUpgradeMetadata& WithTargetVersion(TargetVersionT&& value) {
    SetTargetVersion(std::forward<TargetVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <text>The source Glue runtime version the job was running before auto-version
   * was enabled.</text>
   */
  inline const Aws::String& GetSourceVersion() const { return m_sourceVersion; }
  inline bool SourceVersionHasBeenSet() const { return m_sourceVersionHasBeenSet; }
  template <typename SourceVersionT = Aws::String>
  void SetSourceVersion(SourceVersionT&& value) {
    m_sourceVersionHasBeenSet = true;
    m_sourceVersion = std::forward<SourceVersionT>(value);
  }
  template <typename SourceVersionT = Aws::String>
  AutoUpgradeMetadata& WithSourceVersion(SourceVersionT&& value) {
    SetSourceVersion(std::forward<SourceVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <text>The current auto-upgrade lifecycle status (OBSERVING, UPGRADING,
   * UPGRADE_SUCCEEDED, UPGRADE_FAILED, STOPPED, WAITING_FOR_CONSENT).</text>
   */
  inline AutoUpgradeStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(AutoUpgradeStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline AutoUpgradeMetadata& WithStatus(AutoUpgradeStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <text>The unique identifier of the auto-upgrade assessment analysis.</text>
   */
  inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
  inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
  template <typename AnalysisIdT = Aws::String>
  void SetAnalysisId(AnalysisIdT&& value) {
    m_analysisIdHasBeenSet = true;
    m_analysisId = std::forward<AnalysisIdT>(value);
  }
  template <typename AnalysisIdT = Aws::String>
  AutoUpgradeMetadata& WithAnalysisId(AnalysisIdT&& value) {
    SetAnalysisId(std::forward<AnalysisIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_targetVersion;

  Aws::String m_sourceVersion;

  AutoUpgradeStatus m_status{AutoUpgradeStatus::NOT_SET};

  Aws::String m_analysisId;
  bool m_targetVersionHasBeenSet = false;
  bool m_sourceVersionHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_analysisIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
