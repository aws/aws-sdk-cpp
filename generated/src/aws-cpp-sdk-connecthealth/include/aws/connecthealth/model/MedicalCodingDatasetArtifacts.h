/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connecthealth/ConnectHealth_EXPORTS.h>
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
 * <p>The results of building a medical coding dataset.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalCodingDatasetArtifacts">AWS
 * API Reference</a></p>
 */
class MedicalCodingDatasetArtifacts {
 public:
  AWS_CONNECTHEALTH_API MedicalCodingDatasetArtifacts() = default;
  AWS_CONNECTHEALTH_API MedicalCodingDatasetArtifacts(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalCodingDatasetArtifacts& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 location, under the s3OutputPath of the dataset, of the
   * evaluation scores for the dataset.</p>
   */
  inline const Aws::String& GetEvaluationS3Uri() const { return m_evaluationS3Uri; }
  inline bool EvaluationS3UriHasBeenSet() const { return m_evaluationS3UriHasBeenSet; }
  template <typename EvaluationS3UriT = Aws::String>
  void SetEvaluationS3Uri(EvaluationS3UriT&& value) {
    m_evaluationS3UriHasBeenSet = true;
    m_evaluationS3Uri = std::forward<EvaluationS3UriT>(value);
  }
  template <typename EvaluationS3UriT = Aws::String>
  MedicalCodingDatasetArtifacts& WithEvaluationS3Uri(EvaluationS3UriT&& value) {
    SetEvaluationS3Uri(std::forward<EvaluationS3UriT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_evaluationS3Uri;
  bool m_evaluationS3UriHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
