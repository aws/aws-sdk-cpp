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
 * <p>Holds CloudWatch log configuration settings and metadata that specify
 * settings like log files to monitor and where to send them.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/CloudWatchLogConfiguration">AWS
 * API Reference</a></p>
 */
class CloudWatchLogConfiguration {
 public:
  AWS_EMR_API CloudWatchLogConfiguration() = default;
  AWS_EMR_API CloudWatchLogConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API CloudWatchLogConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_EMR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies if CloudWatch logging is enabled.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline CloudWatchLogConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudWatch log group where logs are published.</p>
   */
  inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
  inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
  template <typename LogGroupNameT = Aws::String>
  void SetLogGroupName(LogGroupNameT&& value) {
    m_logGroupNameHasBeenSet = true;
    m_logGroupName = std::forward<LogGroupNameT>(value);
  }
  template <typename LogGroupNameT = Aws::String>
  CloudWatchLogConfiguration& WithLogGroupName(LogGroupNameT&& value) {
    SetLogGroupName(std::forward<LogGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The prefix of the log stream name.</p>
   */
  inline const Aws::String& GetLogStreamNamePrefix() const { return m_logStreamNamePrefix; }
  inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }
  template <typename LogStreamNamePrefixT = Aws::String>
  void SetLogStreamNamePrefix(LogStreamNamePrefixT&& value) {
    m_logStreamNamePrefixHasBeenSet = true;
    m_logStreamNamePrefix = std::forward<LogStreamNamePrefixT>(value);
  }
  template <typename LogStreamNamePrefixT = Aws::String>
  CloudWatchLogConfiguration& WithLogStreamNamePrefix(LogStreamNamePrefixT&& value) {
    SetLogStreamNamePrefix(std::forward<LogStreamNamePrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the encryption key used to encrypt the logs.</p>
   */
  inline const Aws::String& GetEncryptionKeyArn() const { return m_encryptionKeyArn; }
  inline bool EncryptionKeyArnHasBeenSet() const { return m_encryptionKeyArnHasBeenSet; }
  template <typename EncryptionKeyArnT = Aws::String>
  void SetEncryptionKeyArn(EncryptionKeyArnT&& value) {
    m_encryptionKeyArnHasBeenSet = true;
    m_encryptionKeyArn = std::forward<EncryptionKeyArnT>(value);
  }
  template <typename EncryptionKeyArnT = Aws::String>
  CloudWatchLogConfiguration& WithEncryptionKeyArn(EncryptionKeyArnT&& value) {
    SetEncryptionKeyArn(std::forward<EncryptionKeyArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of log types to file names for publishing logs to the standard output
   * or standard error streams for CloudWatch. Valid log types include STEP_LOGS,
   * SPARK_DRIVER, and SPARK_EXECUTOR. Valid file names for each type include STDOUT
   * and STDERR.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetLogTypes() const { return m_logTypes; }
  inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }
  template <typename LogTypesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetLogTypes(LogTypesT&& value) {
    m_logTypesHasBeenSet = true;
    m_logTypes = std::forward<LogTypesT>(value);
  }
  template <typename LogTypesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  CloudWatchLogConfiguration& WithLogTypes(LogTypesT&& value) {
    SetLogTypes(std::forward<LogTypesT>(value));
    return *this;
  }
  template <typename LogTypesKeyT = Aws::String, typename LogTypesValueT = Aws::Vector<Aws::String>>
  CloudWatchLogConfiguration& AddLogTypes(LogTypesKeyT&& key, LogTypesValueT&& value) {
    m_logTypesHasBeenSet = true;
    m_logTypes.emplace(std::forward<LogTypesKeyT>(key), std::forward<LogTypesValueT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};
  bool m_enabledHasBeenSet = false;

  Aws::String m_logGroupName;
  bool m_logGroupNameHasBeenSet = false;

  Aws::String m_logStreamNamePrefix;
  bool m_logStreamNamePrefixHasBeenSet = false;

  Aws::String m_encryptionKeyArn;
  bool m_encryptionKeyArnHasBeenSet = false;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_logTypes;
  bool m_logTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace EMR
}  // namespace Aws
