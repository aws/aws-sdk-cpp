/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
#include <aws/connecthealth/model/ArtifactDetails.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Results of medical code generation, including the medical codes and the
 * medical coding job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalCodeGenerationResult">AWS
 * API Reference</a></p>
 */
class MedicalCodeGenerationResult {
 public:
  AWS_CONNECTHEALTH_API MedicalCodeGenerationResult() = default;
  AWS_CONNECTHEALTH_API MedicalCodeGenerationResult(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalCodeGenerationResult& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Details about the generated medical codes. If the status is SKIPPED, medical
   * codes weren't generated, for example because the clinical note wasn't generated
   * or had no content.</p>
   */
  inline const ArtifactDetails& GetMedicalCodesResult() const { return m_medicalCodesResult; }
  inline bool MedicalCodesResultHasBeenSet() const { return m_medicalCodesResultHasBeenSet; }
  template <typename MedicalCodesResultT = ArtifactDetails>
  void SetMedicalCodesResult(MedicalCodesResultT&& value) {
    m_medicalCodesResultHasBeenSet = true;
    m_medicalCodesResult = std::forward<MedicalCodesResultT>(value);
  }
  template <typename MedicalCodesResultT = ArtifactDetails>
  MedicalCodeGenerationResult& WithMedicalCodesResult(MedicalCodesResultT&& value) {
    SetMedicalCodesResult(std::forward<MedicalCodesResultT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the medical coding job that generated the medical codes. To
   * submit feedback on the medical codes, use this value as the artifactSourceId,
   * with the artifactType MEDICAL_CODES, in SubmitFeedback.</p>
   */
  inline const Aws::String& GetJobId() const { return m_jobId; }
  inline bool JobIdHasBeenSet() const { return m_jobIdHasBeenSet; }
  template <typename JobIdT = Aws::String>
  void SetJobId(JobIdT&& value) {
    m_jobIdHasBeenSet = true;
    m_jobId = std::forward<JobIdT>(value);
  }
  template <typename JobIdT = Aws::String>
  MedicalCodeGenerationResult& WithJobId(JobIdT&& value) {
    SetJobId(std::forward<JobIdT>(value));
    return *this;
  }
  ///@}
 private:
  ArtifactDetails m_medicalCodesResult;

  Aws::String m_jobId;
  bool m_medicalCodesResultHasBeenSet = false;
  bool m_jobIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
