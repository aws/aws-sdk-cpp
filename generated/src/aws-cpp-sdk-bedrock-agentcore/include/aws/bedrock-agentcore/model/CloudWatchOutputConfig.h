/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/ResultDestination.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>CloudWatch Logs destination for batch evaluation results.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/CloudWatchOutputConfig">AWS
 * API Reference</a></p>
 */
class CloudWatchOutputConfig {
 public:
  AWS_BEDROCKAGENTCORE_API CloudWatchOutputConfig() = default;
  AWS_BEDROCKAGENTCORE_API CloudWatchOutputConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API CloudWatchOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the CloudWatch log group where evaluation results will be
   * written. This value doesn't apply when <code>resultDestination</code> is
   * <code>SOURCE_LOG_GROUP</code>, because results are written back to the trace
   * source log group. The name can't be under the service-reserved
   * <code>/aws/bedrock-agentcore/evaluations/</code> namespace, apart from the
   * service-managed default group.</p>
   */
  inline const Aws::String& GetLogGroupName() const { return m_logGroupName; }
  inline bool LogGroupNameHasBeenSet() const { return m_logGroupNameHasBeenSet; }
  template <typename LogGroupNameT = Aws::String>
  void SetLogGroupName(LogGroupNameT&& value) {
    m_logGroupNameHasBeenSet = true;
    m_logGroupName = std::forward<LogGroupNameT>(value);
  }
  template <typename LogGroupNameT = Aws::String>
  CloudWatchOutputConfig& WithLogGroupName(LogGroupNameT&& value) {
    SetLogGroupName(std::forward<LogGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the CloudWatch log stream where evaluation results will be
   * written.</p>
   */
  inline const Aws::String& GetLogStreamName() const { return m_logStreamName; }
  inline bool LogStreamNameHasBeenSet() const { return m_logStreamNameHasBeenSet; }
  template <typename LogStreamNameT = Aws::String>
  void SetLogStreamName(LogStreamNameT&& value) {
    m_logStreamNameHasBeenSet = true;
    m_logStreamName = std::forward<LogStreamNameT>(value);
  }
  template <typename LogStreamNameT = Aws::String>
  CloudWatchOutputConfig& WithLogStreamName(LogStreamNameT&& value) {
    SetLogStreamName(std::forward<LogStreamNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The CloudWatch metrics namespace where evaluation result metrics are
   * published. If you omit this value, the service publishes metrics to
   * <code>Bedrock-AgentCore/Evaluations</code>. This value can't begin with
   * <code>AWS/</code>.</p>
   */
  inline const Aws::String& GetMetricsNamespace() const { return m_metricsNamespace; }
  inline bool MetricsNamespaceHasBeenSet() const { return m_metricsNamespaceHasBeenSet; }
  template <typename MetricsNamespaceT = Aws::String>
  void SetMetricsNamespace(MetricsNamespaceT&& value) {
    m_metricsNamespaceHasBeenSet = true;
    m_metricsNamespace = std::forward<MetricsNamespaceT>(value);
  }
  template <typename MetricsNamespaceT = Aws::String>
  CloudWatchOutputConfig& WithMetricsNamespace(MetricsNamespaceT&& value) {
    SetMetricsNamespace(std::forward<MetricsNamespaceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The destination where evaluation results are written. Valid values:</p> <ul>
   * <li> <p> <code>DEDICATED_LOG_GROUP</code> (default) – Writes results to a
   * dedicated result log group.</p> </li> <li> <p> <code>SOURCE_LOG_GROUP</code> –
   * Writes results back to the log group that the agent traces were read from. If
   * you use this value, don't specify <code>logGroupName</code>.</p> </li> </ul>
   */
  inline ResultDestination GetResultDestination() const { return m_resultDestination; }
  inline bool ResultDestinationHasBeenSet() const { return m_resultDestinationHasBeenSet; }
  inline void SetResultDestination(ResultDestination value) {
    m_resultDestinationHasBeenSet = true;
    m_resultDestination = value;
  }
  inline CloudWatchOutputConfig& WithResultDestination(ResultDestination value) {
    SetResultDestination(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_logGroupName;

  Aws::String m_logStreamName;

  Aws::String m_metricsNamespace;

  ResultDestination m_resultDestination{ResultDestination::NOT_SET};
  bool m_logGroupNameHasBeenSet = false;
  bool m_logStreamNameHasBeenSet = false;
  bool m_metricsNamespaceHasBeenSet = false;
  bool m_resultDestinationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
