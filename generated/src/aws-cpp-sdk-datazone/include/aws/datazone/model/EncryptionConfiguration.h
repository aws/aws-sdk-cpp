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
 * <p>The encryption configuration details.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/EncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class EncryptionConfiguration {
 public:
  AWS_DATAZONE_API EncryptionConfiguration() = default;
  AWS_DATAZONE_API EncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API EncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key to use for encryption. This
   * field is required only when <code>sseAlgorithm</code> is set to
   * <code>aws:kms</code>.</p>
   */
  inline const Aws::String& GetKmsKeyArn() const { return m_kmsKeyArn; }
  inline bool KmsKeyArnHasBeenSet() const { return m_kmsKeyArnHasBeenSet; }
  template <typename KmsKeyArnT = Aws::String>
  void SetKmsKeyArn(KmsKeyArnT&& value) {
    m_kmsKeyArnHasBeenSet = true;
    m_kmsKeyArn = std::forward<KmsKeyArnT>(value);
  }
  template <typename KmsKeyArnT = Aws::String>
  EncryptionConfiguration& WithKmsKeyArn(KmsKeyArnT&& value) {
    SetKmsKeyArn(std::forward<KmsKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The server-side encryption algorithm to use. Valid values are AES256 for
   * S3-managed encryption keys, or aws:kms for Amazon Web Services KMS-managed
   * encryption keys. If you choose SSE-KMS encryption you must grant the S3 Tables
   * maintenance principal access to your KMS key. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonS3/latest/userguide/s3-tables-kms-permissions.html">Permissions
   * requirements for S3 Tables SSE-KMS encryption</a>.</p>
   */
  inline const Aws::String& GetSseAlgorithm() const { return m_sseAlgorithm; }
  inline bool SseAlgorithmHasBeenSet() const { return m_sseAlgorithmHasBeenSet; }
  template <typename SseAlgorithmT = Aws::String>
  void SetSseAlgorithm(SseAlgorithmT&& value) {
    m_sseAlgorithmHasBeenSet = true;
    m_sseAlgorithm = std::forward<SseAlgorithmT>(value);
  }
  template <typename SseAlgorithmT = Aws::String>
  EncryptionConfiguration& WithSseAlgorithm(SseAlgorithmT&& value) {
    SetSseAlgorithm(std::forward<SseAlgorithmT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_kmsKeyArn;
  bool m_kmsKeyArnHasBeenSet = false;

  Aws::String m_sseAlgorithm;
  bool m_sseAlgorithmHasBeenSet = false;
};

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
