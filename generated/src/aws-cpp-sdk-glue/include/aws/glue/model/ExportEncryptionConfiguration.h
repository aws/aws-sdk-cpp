/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/Glue_EXPORTS.h>

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
 * <p>The encryption configuration for exported data catalog
 * metadata.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/ExportEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class ExportEncryptionConfiguration {
 public:
  AWS_GLUE_API ExportEncryptionConfiguration() = default;
  AWS_GLUE_API ExportEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API ExportEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The server-side encryption algorithm used for the exported data. Valid values
   * are <code>AES256</code> and <code>aws:kms</code>.</p>
   */
  inline const Aws::String& GetSseAlgorithm() const { return m_sseAlgorithm; }
  inline bool SseAlgorithmHasBeenSet() const { return m_sseAlgorithmHasBeenSet; }
  template <typename SseAlgorithmT = Aws::String>
  void SetSseAlgorithm(SseAlgorithmT&& value) {
    m_sseAlgorithmHasBeenSet = true;
    m_sseAlgorithm = std::forward<SseAlgorithmT>(value);
  }
  template <typename SseAlgorithmT = Aws::String>
  ExportEncryptionConfiguration& WithSseAlgorithm(SseAlgorithmT&& value) {
    SetSseAlgorithm(std::forward<SseAlgorithmT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the KMS key used to encrypt the exported data.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  ExportEncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sseAlgorithm;

  Aws::String m_kmsKeyArn;
  bool m_sseAlgorithmHasBeenSet = false;
  bool m_kmsKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
