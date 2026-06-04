/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/EMR_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMR {
namespace Model {

/**
 * <p>The Amazon EMR-managed logging configuration for a session.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SessionManagedLoggingConfiguration">AWS
 * API Reference</a></p>
 */
class SessionManagedLoggingConfiguration {
 public:
  AWS_EMR_API SessionManagedLoggingConfiguration() = default;
  AWS_EMR_API SessionManagedLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API SessionManagedLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether Amazon EMR-managed logging is enabled for the session.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline SessionManagedLoggingConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the managed
   * logs.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  SessionManagedLoggingConfiguration& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_encryptionKeyArn;
  bool m_enabledHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
