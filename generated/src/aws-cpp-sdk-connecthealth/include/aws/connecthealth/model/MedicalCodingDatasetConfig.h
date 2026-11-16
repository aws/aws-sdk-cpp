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
 * <p>The configuration of a medical coding dataset. Amazon Connect Health uses the
 * coded examples that are in the input location when you create the dataset, and
 * writes evaluation scores to the output location, with your permissions. Later
 * changes to the input location don't change the dataset.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connecthealth-2025-01-29/MedicalCodingDatasetConfig">AWS
 * API Reference</a></p>
 */
class MedicalCodingDatasetConfig {
 public:
  AWS_CONNECTHEALTH_API MedicalCodingDatasetConfig() = default;
  AWS_CONNECTHEALTH_API MedicalCodingDatasetConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API MedicalCodingDatasetConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTHEALTH_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 location of your coded examples. You need s3:GetObject and
   * s3:ListBucket permissions for it, and kms:Decrypt if you encrypt it with an AWS
   * KMS key.</p>
   */
  inline const Aws::String& GetS3InputPath() const { return m_s3InputPath; }
  inline bool S3InputPathHasBeenSet() const { return m_s3InputPathHasBeenSet; }
  template <typename S3InputPathT = Aws::String>
  void SetS3InputPath(S3InputPathT&& value) {
    m_s3InputPathHasBeenSet = true;
    m_s3InputPath = std::forward<S3InputPathT>(value);
  }
  template <typename S3InputPathT = Aws::String>
  MedicalCodingDatasetConfig& WithS3InputPath(S3InputPathT&& value) {
    SetS3InputPath(std::forward<S3InputPathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 location where Amazon Connect Health writes the evaluation
   * scores for the dataset. You need s3:PutObject permission for it, and
   * kms:GenerateDataKey if you encrypt it with an AWS KMS key.</p>
   */
  inline const Aws::String& GetS3OutputPath() const { return m_s3OutputPath; }
  inline bool S3OutputPathHasBeenSet() const { return m_s3OutputPathHasBeenSet; }
  template <typename S3OutputPathT = Aws::String>
  void SetS3OutputPath(S3OutputPathT&& value) {
    m_s3OutputPathHasBeenSet = true;
    m_s3OutputPath = std::forward<S3OutputPathT>(value);
  }
  template <typename S3OutputPathT = Aws::String>
  MedicalCodingDatasetConfig& WithS3OutputPath(S3OutputPathT&& value) {
    SetS3OutputPath(std::forward<S3OutputPathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3InputPath;

  Aws::String m_s3OutputPath;
  bool m_s3InputPathHasBeenSet = false;
  bool m_s3OutputPathHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
