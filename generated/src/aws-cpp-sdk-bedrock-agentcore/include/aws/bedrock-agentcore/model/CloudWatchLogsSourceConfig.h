/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>A CloudWatch Logs source for a dataset generation. Specify either
 * <code>logGroupNames</code> or <code>logGroupNamePrefixes</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CloudWatchLogsSourceConfig">AWS
 * API Reference</a></p>
 */
class CloudWatchLogsSourceConfig {
 public:
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsSourceConfig() = default;
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsSourceConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The names of the log groups to read, from 1 to 5. You can't specify this
   * together with <code>logGroupNamePrefixes</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupNames() const { return m_logGroupNames; }
  inline bool LogGroupNamesHasBeenSet() const { return m_logGroupNamesHasBeenSet; }
  template <typename LogGroupNamesT = Aws::Vector<Aws::String>>
  void SetLogGroupNames(LogGroupNamesT&& value) {
    m_logGroupNamesHasBeenSet = true;
    m_logGroupNames = std::forward<LogGroupNamesT>(value);
  }
  template <typename LogGroupNamesT = Aws::Vector<Aws::String>>
  CloudWatchLogsSourceConfig& WithLogGroupNames(LogGroupNamesT&& value) {
    SetLogGroupNames(std::forward<LogGroupNamesT>(value));
    return *this;
  }
  template <typename LogGroupNamesT = Aws::String>
  CloudWatchLogsSourceConfig& AddLogGroupNames(LogGroupNamesT&& value) {
    m_logGroupNamesHasBeenSet = true;
    m_logGroupNames.emplace_back(std::forward<LogGroupNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Prefixes of the names of the log groups to read, from 1 to 5. You can't
   * specify this together with <code>logGroupNames</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupNamePrefixes() const { return m_logGroupNamePrefixes; }
  inline bool LogGroupNamePrefixesHasBeenSet() const { return m_logGroupNamePrefixesHasBeenSet; }
  template <typename LogGroupNamePrefixesT = Aws::Vector<Aws::String>>
  void SetLogGroupNamePrefixes(LogGroupNamePrefixesT&& value) {
    m_logGroupNamePrefixesHasBeenSet = true;
    m_logGroupNamePrefixes = std::forward<LogGroupNamePrefixesT>(value);
  }
  template <typename LogGroupNamePrefixesT = Aws::Vector<Aws::String>>
  CloudWatchLogsSourceConfig& WithLogGroupNamePrefixes(LogGroupNamePrefixesT&& value) {
    SetLogGroupNamePrefixes(std::forward<LogGroupNamePrefixesT>(value));
    return *this;
  }
  template <typename LogGroupNamePrefixesT = Aws::String>
  CloudWatchLogsSourceConfig& AddLogGroupNamePrefixes(LogGroupNamePrefixesT&& value) {
    m_logGroupNamePrefixesHasBeenSet = true;
    m_logGroupNamePrefixes.emplace_back(std::forward<LogGroupNamePrefixesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The service name of the agent, which matches the <code>service.name</code>
   * resource attribute in its traces. Specify exactly one.</p>
   */
  inline const Aws::Vector<Aws::String>& GetServiceNames() const { return m_serviceNames; }
  inline bool ServiceNamesHasBeenSet() const { return m_serviceNamesHasBeenSet; }
  template <typename ServiceNamesT = Aws::Vector<Aws::String>>
  void SetServiceNames(ServiceNamesT&& value) {
    m_serviceNamesHasBeenSet = true;
    m_serviceNames = std::forward<ServiceNamesT>(value);
  }
  template <typename ServiceNamesT = Aws::Vector<Aws::String>>
  CloudWatchLogsSourceConfig& WithServiceNames(ServiceNamesT&& value) {
    SetServiceNames(std::forward<ServiceNamesT>(value));
    return *this;
  }
  template <typename ServiceNamesT = Aws::String>
  CloudWatchLogsSourceConfig& AddServiceNames(ServiceNamesT&& value) {
    m_serviceNamesHasBeenSet = true;
    m_serviceNames.emplace_back(std::forward<ServiceNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start of the time window to read sessions from. The default is 7 days
   * before <code>endTime</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  CloudWatchLogsSourceConfig& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end of the time window to read sessions from. The default is the time the
   * generation starts.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  CloudWatchLogsSourceConfig& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_logGroupNames;

  Aws::Vector<Aws::String> m_logGroupNamePrefixes;

  Aws::Vector<Aws::String> m_serviceNames;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_logGroupNamesHasBeenSet = false;
  bool m_logGroupNamePrefixesHasBeenSet = false;
  bool m_serviceNamesHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
