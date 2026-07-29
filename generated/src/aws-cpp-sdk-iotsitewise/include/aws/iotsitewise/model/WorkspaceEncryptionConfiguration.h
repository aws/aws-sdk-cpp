/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EncryptionType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Contains the encryption configuration for a workspace.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/WorkspaceEncryptionConfiguration">AWS
 * API Reference</a></p>
 */
class WorkspaceEncryptionConfiguration {
 public:
  AWS_IOTSITEWISE_API WorkspaceEncryptionConfiguration() = default;
  AWS_IOTSITEWISE_API WorkspaceEncryptionConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API WorkspaceEncryptionConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The encryption scheme for the workspace.
   * <code>SITEWISE_DEFAULT_ENCRYPTION</code> encrypts data with the IoT SiteWise
   * default key. <code>KMS_BASED_ENCRYPTION</code> encrypts data with the customer
   * managed KMS key identified by <code>kmsKeyId</code>.</p>
   */
  inline EncryptionType GetEncryptionType() const { return m_encryptionType; }
  inline bool EncryptionTypeHasBeenSet() const { return m_encryptionTypeHasBeenSet; }
  inline void SetEncryptionType(EncryptionType value) {
    m_encryptionTypeHasBeenSet = true;
    m_encryptionType = value;
  }
  inline WorkspaceEncryptionConfiguration& WithEncryptionType(EncryptionType value) {
    SetEncryptionType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The customer managed KMS key used when <code>encryptionType</code> is
   * <code>KMS_BASED_ENCRYPTION</code>. Accepts a key ID, key ARN, or key alias.
   * Required for <code>KMS_BASED_ENCRYPTION</code>; must be omitted for
   * <code>SITEWISE_DEFAULT_ENCRYPTION</code>. After a workspace's customer managed
   * key configuration becomes active, the key can't be changed.</p>
   */
  inline const Aws::String& GetKmsKeyId() const { return m_kmsKeyId; }
  inline bool KmsKeyIdHasBeenSet() const { return m_kmsKeyIdHasBeenSet; }
  template <typename KmsKeyIdT = Aws::String>
  void SetKmsKeyId(KmsKeyIdT&& value) {
    m_kmsKeyIdHasBeenSet = true;
    m_kmsKeyId = std::forward<KmsKeyIdT>(value);
  }
  template <typename KmsKeyIdT = Aws::String>
  WorkspaceEncryptionConfiguration& WithKmsKeyId(KmsKeyIdT&& value) {
    SetKmsKeyId(std::forward<KmsKeyIdT>(value));
    return *this;
  }
  ///@}
 private:
  EncryptionType m_encryptionType{EncryptionType::NOT_SET};

  Aws::String m_kmsKeyId;
  bool m_encryptionTypeHasBeenSet = false;
  bool m_kmsKeyIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
