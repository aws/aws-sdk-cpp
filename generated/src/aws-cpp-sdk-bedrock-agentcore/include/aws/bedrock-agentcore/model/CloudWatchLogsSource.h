/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CloudWatchFilterConfig.h>
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
 * <p>The configuration for reading agent traces from CloudWatch
 * Logs.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CloudWatchLogsSource">AWS
 * API Reference</a></p>
 */
class CloudWatchLogsSource {
 public:
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsSource() = default;
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CloudWatchLogsSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of agent service names to filter traces within the specified log
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
  CloudWatchLogsSource& WithServiceNames(ServiceNamesT&& value) {
    SetServiceNames(std::forward<ServiceNamesT>(value));
    return *this;
  }
  template <typename ServiceNamesT = Aws::String>
  CloudWatchLogsSource& AddServiceNames(ServiceNamesT&& value) {
    m_serviceNamesHasBeenSet = true;
    m_serviceNames.emplace_back(std::forward<ServiceNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of CloudWatch log group names to read agent traces from. Maximum of
   * 5 log groups.</p>
   */
  inline const Aws::Vector<Aws::String>& GetLogGroupNames() const { return m_logGroupNames; }
  inline bool LogGroupNamesHasBeenSet() const { return m_logGroupNamesHasBeenSet; }
  template <typename LogGroupNamesT = Aws::Vector<Aws::String>>
  void SetLogGroupNames(LogGroupNamesT&& value) {
    m_logGroupNamesHasBeenSet = true;
    m_logGroupNames = std::forward<LogGroupNamesT>(value);
  }
  template <typename LogGroupNamesT = Aws::Vector<Aws::String>>
  CloudWatchLogsSource& WithLogGroupNames(LogGroupNamesT&& value) {
    SetLogGroupNames(std::forward<LogGroupNamesT>(value));
    return *this;
  }
  template <typename LogGroupNamesT = Aws::String>
  CloudWatchLogsSource& AddLogGroupNames(LogGroupNamesT&& value) {
    m_logGroupNamesHasBeenSet = true;
    m_logGroupNames.emplace_back(std::forward<LogGroupNamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional filter configuration to narrow down which sessions to evaluate.</p>
   */
  inline const CloudWatchFilterConfig& GetFilterConfig() const { return m_filterConfig; }
  inline bool FilterConfigHasBeenSet() const { return m_filterConfigHasBeenSet; }
  template <typename FilterConfigT = CloudWatchFilterConfig>
  void SetFilterConfig(FilterConfigT&& value) {
    m_filterConfigHasBeenSet = true;
    m_filterConfig = std::forward<FilterConfigT>(value);
  }
  template <typename FilterConfigT = CloudWatchFilterConfig>
  CloudWatchLogsSource& WithFilterConfig(FilterConfigT&& value) {
    SetFilterConfig(std::forward<FilterConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_serviceNames;

  Aws::Vector<Aws::String> m_logGroupNames;

  CloudWatchFilterConfig m_filterConfig;
  bool m_serviceNamesHasBeenSet = false;
  bool m_logGroupNamesHasBeenSet = false;
  bool m_filterConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
