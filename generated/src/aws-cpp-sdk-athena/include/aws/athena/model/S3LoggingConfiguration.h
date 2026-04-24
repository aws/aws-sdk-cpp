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
 * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/S3LoggingConfiguration">AWS
 * API Reference</a></p>
 */
class S3LoggingConfiguration {
 public:
  AWS_ATHENA_API S3LoggingConfiguration() = default;
  AWS_ATHENA_API S3LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ATHENA_API S3LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Enables S3 log delivery.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline S3LoggingConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The KMS key ARN to encrypt the logs published to the given Amazon S3
   * destination.</p>
   */
  inline const Aws::String& GetKmsKey() const { return m_kmsKey; }
  inline bool KmsKeyHasBeenSet() const { return m_kmsKeyHasBeenSet; }
  template <typename KmsKeyT = Aws::String>
  void SetKmsKey(KmsKeyT&& value) {
    m_kmsKeyHasBeenSet = true;
    m_kmsKey = std::forward<KmsKeyT>(value);
  }
  template <typename KmsKeyT = Aws::String>
  S3LoggingConfiguration& WithKmsKey(KmsKeyT&& value) {
    SetKmsKey(std::forward<KmsKeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 destination URI for log publishing.</p>
   */
  inline const Aws::String& GetLogLocation() const { return m_logLocation; }
  inline bool LogLocationHasBeenSet() const { return m_logLocationHasBeenSet; }
  template <typename LogLocationT = Aws::String>
  void SetLogLocation(LogLocationT&& value) {
    m_logLocationHasBeenSet = true;
    m_logLocation = std::forward<LogLocationT>(value);
  }
  template <typename LogLocationT = Aws::String>
  S3LoggingConfiguration& WithLogLocation(LogLocationT&& value) {
    SetLogLocation(std::forward<LogLocationT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_kmsKey;

  Aws::String m_logLocation;
  bool m_enabledHasBeenSet = false;
  bool m_kmsKeyHasBeenSet = false;
  bool m_logLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
