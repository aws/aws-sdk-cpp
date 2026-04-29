/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CloudWatchLogsRule.h>
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
 * <p>Configuration for reading agent traces from CloudWatch Logs for
 * recommendation analysis.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CloudWatchLogsTraceConfig">AWS
 * API Reference</a></p>
 */
class CloudWatchLogsTraceConfig {
 public:
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsTraceConfig() = default;
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsTraceConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsTraceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of CloudWatch log group ARNs to read agent traces from.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupArns() const { return m_logGroupArns; }
  inline bool LogGroupArnsHasBeenSet() const { return m_logGroupArnsHasBeenSet; }
  template <typename LogGroupArnsT = Aws::Vector<Aws::String>>
  void SetLogGroupArns(LogGroupArnsT&& value) {
    m_logGroupArnsHasBeenSet = true;
    m_logGroupArns = std::forward<LogGroupArnsT>(value);
  }
  template <typename LogGroupArnsT = Aws::Vector<Aws::String>>
  CloudWatchLogsTraceConfig& WithLogGroupArns(LogGroupArnsT&& value) {
    SetLogGroupArns(std::forward<LogGroupArnsT>(value));
    return *this;
  }
  template <typename LogGroupArnsT = Aws::String>
  CloudWatchLogsTraceConfig& AddLogGroupArns(LogGroupArnsT&& value) {
    m_logGroupArnsHasBeenSet = true;
    m_logGroupArns.emplace_back(std::forward<LogGroupArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of service names to filter traces within the specified log
   * groups.</p>
   */
  inline const Aws::Vector<Aws::String>& GetServiceNames() const { return m_serviceNames; }
  inline bool ServiceNamesHasBeenSet() const { return m_serviceNamesHasBeenSet; }
  template <typename ServiceNamesT = Aws::Vector<Aws::String>>
  void SetServiceNames(ServiceNamesT&& value) {
    m_serviceNamesHasBeenSet = true;
    m_serviceNames = std::forward<ServiceNamesT>(value);
  }
  template <typename ServiceNamesT = Aws::Vector<Aws::String>>
  CloudWatchLogsTraceConfig& WithServiceNames(ServiceNamesT&& value) {
    SetServiceNames(std::forward<ServiceNamesT>(value));
    return *this;
  }
  template <typename ServiceNamesT = Aws::String>
  CloudWatchLogsTraceConfig& AddServiceNames(ServiceNamesT&& value) {
    m_serviceNamesHasBeenSet = true;
    m_serviceNames.emplace_back(std::forward<ServiceNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The start time of the time range to read traces from.</p>
   */
  inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
  inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
  template <typename StartTimeT = Aws::Utils::DateTime>
  void SetStartTime(StartTimeT&& value) {
    m_startTimeHasBeenSet = true;
    m_startTime = std::forward<StartTimeT>(value);
  }
  template <typename StartTimeT = Aws::Utils::DateTime>
  CloudWatchLogsTraceConfig& WithStartTime(StartTimeT&& value) {
    SetStartTime(std::forward<StartTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The end time of the time range to read traces from.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  CloudWatchLogsTraceConfig& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional rule configuration for filtering traces.</p>
   */
  inline const CloudWatchLogsRule& GetRule() const { return m_rule; }
  inline bool RuleHasBeenSet() const { return m_ruleHasBeenSet; }
  template <typename RuleT = CloudWatchLogsRule>
  void SetRule(RuleT&& value) {
    m_ruleHasBeenSet = true;
    m_rule = std::forward<RuleT>(value);
  }
  template <typename RuleT = CloudWatchLogsRule>
  CloudWatchLogsTraceConfig& WithRule(RuleT&& value) {
    SetRule(std::forward<RuleT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_logGroupArns;

  Aws::Vector<Aws::String> m_serviceNames;

  Aws::Utils::DateTime m_startTime{};

  Aws::Utils::DateTime m_endTime{};

  CloudWatchLogsRule m_rule;
  bool m_logGroupArnsHasBeenSet = false;
  bool m_serviceNamesHasBeenSet = false;
  bool m_startTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_ruleHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
