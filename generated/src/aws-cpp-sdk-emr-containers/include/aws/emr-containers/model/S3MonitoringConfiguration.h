/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/EMRContainers_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace EMRContainers {
namespace Model {

/**
 * <p> Amazon S3 configuration for monitoring log publishing. You can configure
 * your jobs to send log information to Amazon S3.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/emr-containers-2020-10-01/S3MonitoringConfiguration">AWS
 * API Reference</a></p>
 */
class S3MonitoringConfiguration {
 public:
  AWS_EMRCONTAINERS_API S3MonitoringConfiguration() = default;
  AWS_EMRCONTAINERS_API S3MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API S3MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMRCONTAINERS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Amazon S3 destination URI for log publishing.</p>
   */
  inline const Aws::String& GetLogUri() const { return m_logUri; }
  inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
  template <typename LogUriT = Aws::String>
  void SetLogUri(LogUriT&& value) {
    m_logUriHasBeenSet = true;
    m_logUri = std::forward<LogUriT>(value);
  }
  template <typename LogUriT = Aws::String>
  S3MonitoringConfiguration& WithLogUri(LogUriT&& value) {
    SetLogUri(std::forward<LogUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon resource name (ARN) of the encryption key for logs.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  S3MonitoringConfiguration& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_logUri;

  Aws::String m_encryptionKeyArn;
  bool m_logUriHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMRContainers
}  // namespace Aws
