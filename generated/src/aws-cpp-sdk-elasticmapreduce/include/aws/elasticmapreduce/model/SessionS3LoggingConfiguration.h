/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
 * <p>The Amazon S3 logging configuration for a session.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SessionS3LoggingConfiguration">AWS
 * API Reference</a></p>
 */
class SessionS3LoggingConfiguration {
 public:
  AWS_EMR_API SessionS3LoggingConfiguration() = default;
  AWS_EMR_API SessionS3LoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API SessionS3LoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether Amazon S3 logging is enabled for the session.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline SessionS3LoggingConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon S3 destination URI where session logs are published.</p>
   */
  inline const Aws::String& GetLogUri() const { return m_logUri; }
  inline bool LogUriHasBeenSet() const { return m_logUriHasBeenSet; }
  template <typename LogUriT = Aws::String>
  void SetLogUri(LogUriT&& value) {
    m_logUriHasBeenSet = true;
    m_logUri = std::forward<LogUriT>(value);
  }
  template <typename LogUriT = Aws::String>
  SessionS3LoggingConfiguration& WithLogUri(LogUriT&& value) {
    SetLogUri(std::forward<LogUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt logs published
   * to Amazon S3.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  SessionS3LoggingConfiguration& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of log component names (for example, <code>SPARK_DRIVER</code>,
   * <code>SPARK_EXECUTOR</code>) to the list of log types to publish for that
   * component (for example, <code>stdout</code>, <code>stderr</code>).</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetLogTypes() const { return m_logTypes; }
  inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }
  template <typename LogTypesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetLogTypes(LogTypesT&& value) {
    m_logTypesHasBeenSet = true;
    m_logTypes = std::forward<LogTypesT>(value);
  }
  template <typename LogTypesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  SessionS3LoggingConfiguration& WithLogTypes(LogTypesT&& value) {
    SetLogTypes(std::forward<LogTypesT>(value));
    return *this;
  }
  template <typename LogTypesKeyT = Aws::String, typename LogTypesValueT = Aws::Vector<Aws::String>>
  SessionS3LoggingConfiguration& AddLogTypes(LogTypesKeyT&& key, LogTypesValueT&& value) {
    m_logTypesHasBeenSet = true;
    m_logTypes.emplace(std::forward<LogTypesKeyT>(key), std::forward<LogTypesValueT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_logUri;

  Aws::String m_encryptionKeyArn;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_logTypes;
  bool m_enabledHasBeenSet = false;
  bool m_logUriHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
  bool m_logTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
