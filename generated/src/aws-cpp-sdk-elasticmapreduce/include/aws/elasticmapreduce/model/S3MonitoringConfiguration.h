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
 * <p>The Amazon S3 configuration for monitoring log publishing. You can configure
 * your step to send log information to Amazon S3. When it's specified, it takes
 * precedence over the cluster's logging configuration. If you don't specify this
 * configuration entirely, or omit individual fields, EMR falls back to
 * cluster-level logging behavior.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/S3MonitoringConfiguration">AWS
 * API Reference</a></p>
 */
class S3MonitoringConfiguration {
 public:
  AWS_EMR_API S3MonitoringConfiguration() = default;
  AWS_EMR_API S3MonitoringConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API S3MonitoringConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 destination URI for log publishing.</p>
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
   * <p>The KMS key ARN to encrypt the logs published to the given Amazon S3
   * destination.</p>
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
  bool m_logUriHasBeenSet = false;

  Aws::String m_encryptionKeyArn;
  bool m_encryptionKeyArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
