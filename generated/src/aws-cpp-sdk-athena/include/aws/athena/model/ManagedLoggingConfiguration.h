/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Athena {
namespace Model {

/**
 * <p>Configuration settings for delivering logs to Amazon S3
 * buckets.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/ManagedLoggingConfiguration">AWS
 * API Reference</a></p>
 */
class ManagedLoggingConfiguration {
 public:
  AWS_ATHENA_API ManagedLoggingConfiguration() = default;
  AWS_ATHENA_API ManagedLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ATHENA_API ManagedLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Enables mamanged log persistence.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline ManagedLoggingConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The KMS key ARN to encrypt the logs stored in managed log persistence.</p>
   */
  inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
  inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
  template <typename KmsKeyT = Aws::String>
  void SetKmsKey(KmsKeyT&& value) {
    m_kmsKeyHasBeenSet = true;
    m_kmsKey = std::forward<KmsKeyT>(value);
  }
  template <typename KmsKeyT = Aws::String>
  ManagedLoggingConfiguration& WithKmsKey(KmsKeyT&& value) {
    SetKmsKey(std::forward<KmsKeyT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_kmsKey;
  bool m_enabledHasBeenSet = false;
  bool m_kmsKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
