/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/BatchEvaluationSourceConfig.h>
#include <aws/bedrock-agentcore/model/CloudWatchLogsSourceConfig.h>
#include <aws/bedrock-agentcore/model/OnlineEvaluationSourceConfig.h>

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
 * <p>Where a dataset generation reads sessions from. Specify exactly one
 * source.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/TraceSourceConfig">AWS
 * API Reference</a></p>
 */
class TraceSourceConfig {
 public:
  AWS_BEDROCKAGENTCORE_API TraceSourceConfig() = default;
  AWS_BEDROCKAGENTCORE_API TraceSourceConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API TraceSourceConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Reads sessions from CloudWatch Logs log groups.</p>
   */
  inline const CloudWatchLogsSourceConfig& GetCloudWatchLogs() const { return m_cloudWatchLogs; }
  inline bool CloudWatchLogsHasBeenSet() const { return m_cloudWatchLogsHasBeenSet; }
  template <typename CloudWatchLogsT = CloudWatchLogsSourceConfig>
  void SetCloudWatchLogs(CloudWatchLogsT&& value) {
    m_cloudWatchLogsHasBeenSet = true;
    m_cloudWatchLogs = std::forward<CloudWatchLogsT>(value);
  }
  template <typename CloudWatchLogsT = CloudWatchLogsSourceConfig>
  TraceSourceConfig& WithCloudWatchLogs(CloudWatchLogsT&& value) {
    SetCloudWatchLogs(std::forward<CloudWatchLogsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reads sessions, with their evaluation results, from an online evaluation
   * configuration.</p>
   */
  inline const OnlineEvaluationSourceConfig& GetOnlineEvaluation() const { return m_onlineEvaluation; }
  inline bool OnlineEvaluationHasBeenSet() const { return m_onlineEvaluationHasBeenSet; }
  template <typename OnlineEvaluationT = OnlineEvaluationSourceConfig>
  void SetOnlineEvaluation(OnlineEvaluationT&& value) {
    m_onlineEvaluationHasBeenSet = true;
    m_onlineEvaluation = std::forward<OnlineEvaluationT>(value);
  }
  template <typename OnlineEvaluationT = OnlineEvaluationSourceConfig>
  TraceSourceConfig& WithOnlineEvaluation(OnlineEvaluationT&& value) {
    SetOnlineEvaluation(std::forward<OnlineEvaluationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Reads sessions, with their evaluation results, from a batch evaluation.</p>
   */
  inline const BatchEvaluationSourceConfig& GetBatchEvaluation() const { return m_batchEvaluation; }
  inline bool BatchEvaluationHasBeenSet() const { return m_batchEvaluationHasBeenSet; }
  template <typename BatchEvaluationT = BatchEvaluationSourceConfig>
  void SetBatchEvaluation(BatchEvaluationT&& value) {
    m_batchEvaluationHasBeenSet = true;
    m_batchEvaluation = std::forward<BatchEvaluationT>(value);
  }
  template <typename BatchEvaluationT = BatchEvaluationSourceConfig>
  TraceSourceConfig& WithBatchEvaluation(BatchEvaluationT&& value) {
    SetBatchEvaluation(std::forward<BatchEvaluationT>(value));
    return *this;
  }
  ///@}
 private:
  CloudWatchLogsSourceConfig m_cloudWatchLogs;

  OnlineEvaluationSourceConfig m_onlineEvaluation;

  BatchEvaluationSourceConfig m_batchEvaluation;
  bool m_cloudWatchLogsHasBeenSet = false;
  bool m_onlineEvaluationHasBeenSet = false;
  bool m_batchEvaluationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
