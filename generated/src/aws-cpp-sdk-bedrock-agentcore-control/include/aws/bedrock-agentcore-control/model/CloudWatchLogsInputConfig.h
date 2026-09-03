/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
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
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p> The configuration for reading agent traces from CloudWatch logs as input for
 * online evaluation. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/CloudWatchLogsInputConfig">AWS
 * API Reference</a></p>
 */
class CloudWatchLogsInputConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API CloudWatchLogsInputConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API CloudWatchLogsInputConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API CloudWatchLogsInputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The list of CloudWatch log group names to monitor for agent traces.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupNames() const { return m_logGroupNames; }
  inline bool LogGroupNamesHasBeenSet() const { return m_logGroupNamesHasBeenSet; }
  template <typename LogGroupNamesT = Aws::Vector<Aws::String>>
  void SetLogGroupNames(LogGroupNamesT&& value) {
    m_logGroupNamesHasBeenSet = true;
    m_logGroupNames = std::forward<LogGroupNamesT>(value);
  }
  template <typename LogGroupNamesT = Aws::Vector<Aws::String>>
  CloudWatchLogsInputConfig& WithLogGroupNames(LogGroupNamesT&& value) {
    SetLogGroupNames(std::forward<LogGroupNamesT>(value));
    return *this;
  }
  template <typename LogGroupNamesT = Aws::String>
  CloudWatchLogsInputConfig& AddLogGroupNames(LogGroupNamesT&& value) {
    m_logGroupNamesHasBeenSet = true;
    m_logGroupNames.emplace_back(std::forward<LogGroupNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of CloudWatch log group name prefixes to monitor for agent traces.
   * Specify this instead of <code>logGroupNames</code> to match log groups by
   * prefix. Specify either <code>logGroupNames</code> or
   * <code>logGroupNamePrefixes</code>, not both. One of the two is required. </p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupNamePrefixes() const { return m_logGroupNamePrefixes; }
  inline bool LogGroupNamePrefixesHasBeenSet() const { return m_logGroupNamePrefixesHasBeenSet; }
  template <typename LogGroupNamePrefixesT = Aws::Vector<Aws::String>>
  void SetLogGroupNamePrefixes(LogGroupNamePrefixesT&& value) {
    m_logGroupNamePrefixesHasBeenSet = true;
    m_logGroupNamePrefixes = std::forward<LogGroupNamePrefixesT>(value);
  }
  template <typename LogGroupNamePrefixesT = Aws::Vector<Aws::String>>
  CloudWatchLogsInputConfig& WithLogGroupNamePrefixes(LogGroupNamePrefixesT&& value) {
    SetLogGroupNamePrefixes(std::forward<LogGroupNamePrefixesT>(value));
    return *this;
  }
  template <typename LogGroupNamePrefixesT = Aws::String>
  CloudWatchLogsInputConfig& AddLogGroupNamePrefixes(LogGroupNamePrefixesT&& value) {
    m_logGroupNamePrefixesHasBeenSet = true;
    m_logGroupNamePrefixes.emplace_back(std::forward<LogGroupNamePrefixesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The list of service names to filter traces within the specified log groups.
   * Used to identify relevant agent sessions. </p>
   */
  inline const Aws::Vector<Aws::String>& GetServiceNames() const { return m_serviceNames; }
  inline bool ServiceNamesHasBeenSet() const { return m_serviceNamesHasBeenSet; }
  template <typename ServiceNamesT = Aws::Vector<Aws::String>>
  void SetServiceNames(ServiceNamesT&& value) {
    m_serviceNamesHasBeenSet = true;
    m_serviceNames = std::forward<ServiceNamesT>(value);
  }
  template <typename ServiceNamesT = Aws::Vector<Aws::String>>
  CloudWatchLogsInputConfig& WithServiceNames(ServiceNamesT&& value) {
    SetServiceNames(std::forward<ServiceNamesT>(value));
    return *this;
  }
  template <typename ServiceNamesT = Aws::String>
  CloudWatchLogsInputConfig& AddServiceNames(ServiceNamesT&& value) {
    m_serviceNamesHasBeenSet = true;
    m_serviceNames.emplace_back(std::forward<ServiceNamesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_logGroupNames;

  Aws::Vector<Aws::String> m_logGroupNamePrefixes;

  Aws::Vector<Aws::String> m_serviceNames;
  bool m_logGroupNamesHasBeenSet = false;
  bool m_logGroupNamePrefixesHasBeenSet = false;
  bool m_serviceNamesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
