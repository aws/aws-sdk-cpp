/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/model/IntermediateTableInheritedConstraints.h>
#include <aws/cleanrooms/model/PopulateIntermediateTableAnalysisType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
 * <p>Contains the details of the currently active version of an intermediate
 * table.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/cleanrooms-2022-02-17/IntermediateTableActiveVersion">AWS
 * API Reference</a></p>
 */
class IntermediateTableActiveVersion {
 public:
  AWS_CLEANROOMS_API IntermediateTableActiveVersion() = default;
  AWS_CLEANROOMS_API IntermediateTableActiveVersion(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API IntermediateTableActiveVersion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CLEANROOMS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the active version.</p>
   */
  inline const Aws::String& GetVersionId() const { return m_versionId; }
  inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
  template <typename VersionIdT = Aws::String>
  void SetVersionId(VersionIdT&& value) {
    m_versionIdHasBeenSet = true;
    m_versionId = std::forward<VersionIdT>(value);
  }
  template <typename VersionIdT = Aws::String>
  IntermediateTableActiveVersion& WithVersionId(VersionIdT&& value) {
    SetVersionId(std::forward<VersionIdT>(value));
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
  IntermediateTableActiveVersion& WithAnalysisId(AnalysisIdT&& value) {
    SetAnalysisId(std::forward<AnalysisIdT>(value));
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
  inline IntermediateTableActiveVersion& WithAnalysisType(PopulateIntermediateTableAnalysisType value) {
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
  IntermediateTableActiveVersion& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The runtime parameters that were used when populating this version.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetParameters() const { return m_parameters; }
  inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  void SetParameters(ParametersT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters = std::forward<ParametersT>(value);
  }
  template <typename ParametersT = Aws::Map<Aws::String, Aws::String>>
  IntermediateTableActiveVersion& WithParameters(ParametersT&& value) {
    SetParameters(std::forward<ParametersT>(value));
    return *this;
  }
  template <typename ParametersKeyT = Aws::String, typename ParametersValueT = Aws::String>
  IntermediateTableActiveVersion& AddParameters(ParametersKeyT&& key, ParametersValueT&& value) {
    m_parametersHasBeenSet = true;
    m_parameters.emplace(std::forward<ParametersKeyT>(key), std::forward<ParametersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The privacy constraints inherited from parent tables at the time this version
   * was populated.</p>
   */
  inline const IntermediateTableInheritedConstraints& GetInheritedConstraints() const { return m_inheritedConstraints; }
  inline bool InheritedConstraintsHasBeenSet() const { return m_inheritedConstraintsHasBeenSet; }
  template <typename InheritedConstraintsT = IntermediateTableInheritedConstraints>
  void SetInheritedConstraints(InheritedConstraintsT&& value) {
    m_inheritedConstraintsHasBeenSet = true;
    m_inheritedConstraints = std::forward<InheritedConstraintsT>(value);
  }
  template <typename InheritedConstraintsT = IntermediateTableInheritedConstraints>
  IntermediateTableActiveVersion& WithInheritedConstraints(InheritedConstraintsT&& value) {
    SetInheritedConstraints(std::forward<InheritedConstraintsT>(value));
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
  IntermediateTableActiveVersion& WithExpirationTime(ExpirationTimeT&& value) {
    SetExpirationTime(std::forward<ExpirationTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_versionId;

  Aws::String m_analysisId;

  PopulateIntermediateTableAnalysisType m_analysisType{PopulateIntermediateTableAnalysisType::NOT_SET};

  Aws::String m_kmsKeyArn;

  Aws::Map<Aws::String, Aws::String> m_parameters;

  IntermediateTableInheritedConstraints m_inheritedConstraints;

  Aws::Utils::DateTime m_expirationTime{};
  bool m_versionIdHasBeenSet = false;
  bool m_analysisIdHasBeenSet = false;
  bool m_analysisTypeHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
  bool m_parametersHasBeenSet = false;
  bool m_inheritedConstraintsHasBeenSet = false;
  bool m_expirationTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
