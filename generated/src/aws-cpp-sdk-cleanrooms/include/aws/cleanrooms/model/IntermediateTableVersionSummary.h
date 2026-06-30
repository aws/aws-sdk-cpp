/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableVersionStatus.h>
#include <aws/cleanrooms/model/PopulateIntermediateTableAnalysisType.h>
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
 * <p>Contains summary information about a version of an intermediate
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableVersionSummary">AWS
 * API Reference</a></p>
 */
class IntermediateTableVersionSummary {
 public:
  AWS_CLEANROOMS_API IntermediateTableVersionSummary() = default;
  AWS_CLEANROOMS_API IntermediateTableVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the version.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  IntermediateTableVersionSummary& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the intermediate table that this version belongs
   * to.</p>
   */
  inline const Aws::String& GetTableId() const { return m_tableId; }
  inline bool TableIdHasBeenSet() const { return m_tableIdHasBeenSet; }
  template <typename TableIdT = Aws::String>
  void SetTableId(TableIdT&& value) {
    m_tableIdHasBeenSet = true;
    m_tableId = std::forward<TableIdT>(value);
  }
  template <typename TableIdT = Aws::String>
  IntermediateTableVersionSummary& WithTableId(TableIdT&& value) {
    SetTableId(std::forward<TableIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the version was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
  inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  void SetCreateTime(CreateTimeT&& value) {
    m_createTimeHasBeenSet = true;
    m_createTime = std::forward<CreateTimeT>(value);
  }
  template <typename CreateTimeT = Aws::Utils::DateTime>
  IntermediateTableVersionSummary& WithCreateTime(CreateTimeT&& value) {
    SetCreateTime(std::forward<CreateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the protected query that created this version.</p>
   */
  inline const Aws::String& GetAnalysisId() const { return m_analysisId; }
  inline bool AnalysisIdHasBeenSet() const { return m_analysisIdHasBeenSet; }
  template <typename AnalysisIdT = Aws::String>
  void SetAnalysisId(AnalysisIdT&& value) {
    m_analysisIdHasBeenSet = true;
    m_analysisId = std::forward<AnalysisIdT>(value);
  }
  template <typename AnalysisIdT = Aws::String>
  IntermediateTableVersionSummary& WithAnalysisId(AnalysisIdT&& value) {
    SetAnalysisId(std::forward<AnalysisIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the version.</p>
   */
  inline IntermediateTableVersionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(IntermediateTableVersionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline IntermediateTableVersionSummary& WithStatus(IntermediateTableVersionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of analysis that created this version.</p>
   */
  inline PopulateIntermediateTableAnalysisType GetAnalysisType() const { return m_analysisType; }
  inline bool AnalysisTypeHasBeenSet() const { return m_analysisTypeHasBeenSet; }
  inline void SetAnalysisType(PopulateIntermediateTableAnalysisType value) {
    m_analysisTypeHasBeenSet = true;
    m_analysisType = value;
  }
  inline IntermediateTableVersionSummary& WithAnalysisType(PopulateIntermediateTableAnalysisType value) {
    SetAnalysisType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt this version's
   * data.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  IntermediateTableVersionSummary& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when this version expires based on the retention period.</p>
   */
  inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
  inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  void SetExpirationTime(ExpirationTimeT&& value) {
    m_expirationTimeHasBeenSet = true;
    m_expirationTime = std::forward<ExpirationTimeT>(value);
  }
  template <typename ExpirationTimeT = Aws::Utils::DateTime>
  IntermediateTableVersionSummary& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_versionId;

  Aws::String m_tableId;

  Aws::Utils::DateTime m_createTime{};

  Aws::String m_analysisId;

  IntermediateTableVersionStatus m_status{IntermediateTableVersionStatus::NOT_SET};

  PopulateIntermediateTableAnalysisType m_analysisType{PopulateIntermediateTableAnalysisType::NOT_SET};

  Aws::String m_kmsKeyArn;

  Aws::Utils::DateTime m_expirationTime{};
  bool m_versionIdHasBeenSet = false;
  bool m_tableIdHasBeenSet = false;
  bool m_createTimeHasBeenSet = false;
  bool m_analysisIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_analysisTypeHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
