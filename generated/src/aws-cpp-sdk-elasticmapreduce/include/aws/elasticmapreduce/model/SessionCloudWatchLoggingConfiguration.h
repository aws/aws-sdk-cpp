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
 * <p>The CloudWatch Logs configuration for a session.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/SessionCloudWatchLoggingConfiguration">AWS
 * API Reference</a></p>
 */
class SessionCloudWatchLoggingConfiguration {
 public:
  AWS_EMR_API SessionCloudWatchLoggingConfiguration() = default;
  AWS_EMR_API SessionCloudWatchLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API SessionCloudWatchLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Whether CloudWatch Logs is enabled for the session.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline SessionCloudWatchLoggingConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the log group where session logs are published.</p>
   */
  inline const Aws::String& GetLogGroup() const { return m_logGroup; }
  inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
  template <typename LogGroupT = Aws::String>
  void SetLogGroup(LogGroupT&& value) {
    m_logGroupHasBeenSet = true;
    m_logGroup = std::forward<LogGroupT>(value);
  }
  template <typename LogGroupT = Aws::String>
  SessionCloudWatchLoggingConfiguration& WithLogGroup(LogGroupT&& value) {
    SetLogGroup(std::forward<LogGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prefix applied to the log stream name where session logs are
   * published.</p>
   */
  inline const Aws::String& GetLogStreamNamePrefix() const { return m_logStreamNamePrefix; }
  inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }
  template <typename LogStreamNamePrefixT = Aws::String>
  void SetLogStreamNamePrefix(LogStreamNamePrefixT&& value) {
    m_logStreamNamePrefixHasBeenSet = true;
    m_logStreamNamePrefix = std::forward<LogStreamNamePrefixT>(value);
  }
  template <typename LogStreamNamePrefixT = Aws::String>
  SessionCloudWatchLoggingConfiguration& WithLogStreamNamePrefix(LogStreamNamePrefixT&& value) {
    SetLogStreamNamePrefix(std::forward<LogStreamNamePrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the KMS key used to encrypt the logs
   * published to CloudWatch Logs.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  SessionCloudWatchLoggingConfiguration& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
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
  SessionCloudWatchLoggingConfiguration& WithLogTypes(LogTypesT&& value) {
    SetLogTypes(std::forward<LogTypesT>(value));
    return *this;
  }
  template <typename LogTypesKeyT = Aws::String, typename LogTypesValueT = Aws::Vector<Aws::String>>
  SessionCloudWatchLoggingConfiguration& AddLogTypes(LogTypesKeyT&& key, LogTypesValueT&& value) {
    m_logTypesHasBeenSet = true;
    m_logTypes.emplace(std::forward<LogTypesKeyT>(key), std::forward<LogTypesValueT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_logGroup;

  Aws::String m_logStreamNamePrefix;

  Aws::String m_encryptionKeyArn;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_logTypes;
  bool m_enabledHasBeenSet = false;
  bool m_logGroupHasBeenSet = false;
  bool m_logStreamNamePrefixHasBeenSet = false;
  bool m_encryptionKeyArnHasBeenSet = false;
  bool m_logTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
