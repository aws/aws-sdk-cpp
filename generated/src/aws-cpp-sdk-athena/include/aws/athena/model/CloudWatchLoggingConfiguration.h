/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/athena/Athena_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

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
 * <p>Configuration settings for delivering logs to Amazon CloudWatch log
 * groups.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/athena-2017-05-18/CloudWatchLoggingConfiguration">AWS
 * API Reference</a></p>
 */
class CloudWatchLoggingConfiguration {
 public:
  AWS_ATHENA_API CloudWatchLoggingConfiguration() = default;
  AWS_ATHENA_API CloudWatchLoggingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ATHENA_API CloudWatchLoggingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ATHENA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Enables CloudWatch logging.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline CloudWatchLoggingConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the log group in Amazon CloudWatch Logs where you want to publish
   * your logs.</p>
   */
  inline const Aws::String& GetLogGroup() const { return m_logGroup; }
  inline bool LogGroupHasBeenSet() const { return m_logGroupHasBeenSet; }
  template <typename LogGroupT = Aws::String>
  void SetLogGroup(LogGroupT&& value) {
    m_logGroupHasBeenSet = true;
    m_logGroup = std::forward<LogGroupT>(value);
  }
  template <typename LogGroupT = Aws::String>
  CloudWatchLoggingConfiguration& WithLogGroup(LogGroupT&& value) {
    SetLogGroup(std::forward<LogGroupT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Prefix for the CloudWatch log stream name.</p>
   */
  inline const Aws::String& GetLogStreamNamePrefix() const { return m_logStreamNamePrefix; }
  inline bool LogStreamNamePrefixHasBeenSet() const { return m_logStreamNamePrefixHasBeenSet; }
  template <typename LogStreamNamePrefixT = Aws::String>
  void SetLogStreamNamePrefix(LogStreamNamePrefixT&& value) {
    m_logStreamNamePrefixHasBeenSet = true;
    m_logStreamNamePrefix = std::forward<LogStreamNamePrefixT>(value);
  }
  template <typename LogStreamNamePrefixT = Aws::String>
  CloudWatchLoggingConfiguration& WithLogStreamNamePrefix(LogStreamNamePrefixT&& value) {
    SetLogStreamNamePrefix(std::forward<LogStreamNamePrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The types of logs that you want to publish to CloudWatch.</p>
   */
  inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetLogTypes() const { return m_logTypes; }
  inline bool LogTypesHasBeenSet() const { return m_logTypesHasBeenSet; }
  template <typename LogTypesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  void SetLogTypes(LogTypesT&& value) {
    m_logTypesHasBeenSet = true;
    m_logTypes = std::forward<LogTypesT>(value);
  }
  template <typename LogTypesT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
  CloudWatchLoggingConfiguration& WithLogTypes(LogTypesT&& value) {
    SetLogTypes(std::forward<LogTypesT>(value));
    return *this;
  }
  template <typename LogTypesKeyT = Aws::String, typename LogTypesValueT = Aws::Vector<Aws::String>>
  CloudWatchLoggingConfiguration& AddLogTypes(LogTypesKeyT&& key, LogTypesValueT&& value) {
    m_logTypesHasBeenSet = true;
    m_logTypes.emplace(std::forward<LogTypesKeyT>(key), std::forward<LogTypesValueT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_enabled{false};

  Aws::String m_logGroup;

  Aws::String m_logStreamNamePrefix;

  Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_logTypes;
  bool m_enabledHasBeenSet = false;
  bool m_logGroupHasBeenSet = false;
  bool m_logStreamNamePrefixHasBeenSet = false;
  bool m_logTypesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Athena
}  // namespace Aws
