/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/DataZone_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DataZone {
namespace Model {

/**
 * <p>The storage configuration for a notebook run in Amazon SageMaker Unified
 * Studio.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/StorageConfig">AWS
 * API Reference</a></p>
 */
class StorageConfig {
 public:
  AWS_DATAZONE_API StorageConfig() = default;
  AWS_DATAZONE_API StorageConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API StorageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Simple Storage Service path for the project storage.</p>
   */
  inline const Aws::String& GetProjectS3Path() const { return m_projectS3Path; }
  inline bool ProjectS3PathHasBeenSet() const { return m_projectS3PathHasBeenSet; }
  template <typename ProjectS3PathT = Aws::String>
  void SetProjectS3Path(ProjectS3PathT&& value) {
    m_projectS3PathHasBeenSet = true;
    m_projectS3Path = std::forward<ProjectS3PathT>(value);
  }
  template <typename ProjectS3PathT = Aws::String>
  StorageConfig& WithProjectS3Path(ProjectS3PathT&& value) {
    SetProjectS3Path(std::forward<ProjectS3PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the KMS key used for encryption.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  StorageConfig& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_projectS3Path;

  Aws::String m_kmsKeyArn;
  bool m_projectS3PathHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
