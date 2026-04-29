/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/CloudWatchLogsTraceConfig.h>
#include <aws/core/utils/Document.h>
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
 * <p>The configuration specifying where to read agent traces from for
 * recommendation analysis.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/AgentTracesConfig">AWS
 * API Reference</a></p>
 */
class AgentTracesConfig {
 public:
  AWS_BEDROCKAGENTCORE_API AgentTracesConfig() = default;
  AWS_BEDROCKAGENTCORE_API AgentTracesConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API AgentTracesConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Agent traces provided as inline session spans in OpenTelemetry format.</p>
   */
  inline const Aws::Vector<Aws::Utils::Document>& GetSessionSpans() const { return m_sessionSpans; }
  inline bool SessionSpansHasBeenSet() const { return m_sessionSpansHasBeenSet; }
  template <typename SessionSpansT = Aws::Vector<Aws::Utils::Document>>
  void SetSessionSpans(SessionSpansT&& value) {
    m_sessionSpansHasBeenSet = true;
    m_sessionSpans = std::forward<SessionSpansT>(value);
  }
  template <typename SessionSpansT = Aws::Vector<Aws::Utils::Document>>
  AgentTracesConfig& WithSessionSpans(SessionSpansT&& value) {
    SetSessionSpans(std::forward<SessionSpansT>(value));
    return *this;
  }
  template <typename SessionSpansT = Aws::Utils::Document>
  AgentTracesConfig& AddSessionSpans(SessionSpansT&& value) {
    m_sessionSpansHasBeenSet = true;
    m_sessionSpans.emplace_back(std::forward<SessionSpansT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Agent traces read from CloudWatch Logs.</p>
   */
  inline const CloudWatchLogsTraceConfig& GetCloudwatchLogs() const { return m_cloudwatchLogs; }
  inline bool CloudwatchLogsHasBeenSet() const { return m_cloudwatchLogsHasBeenSet; }
  template <typename CloudwatchLogsT = CloudWatchLogsTraceConfig>
  void SetCloudwatchLogs(CloudwatchLogsT&& value) {
    m_cloudwatchLogsHasBeenSet = true;
    m_cloudwatchLogs = std::forward<CloudwatchLogsT>(value);
  }
  template <typename CloudwatchLogsT = CloudWatchLogsTraceConfig>
  AgentTracesConfig& WithCloudwatchLogs(CloudwatchLogsT&& value) {
    SetCloudwatchLogs(std::forward<CloudwatchLogsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::Utils::Document> m_sessionSpans;

  CloudWatchLogsTraceConfig m_cloudwatchLogs;
  bool m_sessionSpansHasBeenSet = false;
  bool m_cloudwatchLogsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
