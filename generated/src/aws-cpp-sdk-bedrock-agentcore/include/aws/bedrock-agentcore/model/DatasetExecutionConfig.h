/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentInvocationConfig.h>
#include <aws/bedrock-agentcore/model/DatasetSource.h>

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
 * <p>The configuration for running the scenarios in a dataset against an agent as
 * part of a batch evaluation.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/DatasetExecutionConfig">AWS
 * API Reference</a></p>
 */
class DatasetExecutionConfig {
 public:
  AWS_BEDROCKAGENTCORE_API DatasetExecutionConfig() = default;
  AWS_BEDROCKAGENTCORE_API DatasetExecutionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API DatasetExecutionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The dataset whose scenarios are sent to the agent. The dataset must use the
   * predefined evaluation schema, and the version that runs must contain between 1
   * and 1,000 scenarios.</p>
   */
  inline const DatasetSource& GetDataset() const { return m_dataset; }
  inline bool DatasetHasBeenSet() const { return m_datasetHasBeenSet; }
  template <typename DatasetT = DatasetSource>
  void SetDataset(DatasetT&& value) {
    m_datasetHasBeenSet = true;
    m_dataset = std::forward<DatasetT>(value);
  }
  template <typename DatasetT = DatasetSource>
  DatasetExecutionConfig& WithDataset(DatasetT&& value) {
    SetDataset(std::forward<DatasetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the agent runtime endpoint and the request template that the batch
   * evaluation uses to invoke the agent for each scenario in the dataset.</p>
   */
  inline const AgentInvocationConfig& GetAgentInvocation() const { return m_agentInvocation; }
  inline bool AgentInvocationHasBeenSet() const { return m_agentInvocationHasBeenSet; }
  template <typename AgentInvocationT = AgentInvocationConfig>
  void SetAgentInvocation(AgentInvocationT&& value) {
    m_agentInvocationHasBeenSet = true;
    m_agentInvocation = std::forward<AgentInvocationT>(value);
  }
  template <typename AgentInvocationT = AgentInvocationConfig>
  DatasetExecutionConfig& WithAgentInvocation(AgentInvocationT&& value) {
    SetAgentInvocation(std::forward<AgentInvocationT>(value));
    return *this;
  }
  ///@}
 private:
  DatasetSource m_dataset;

  AgentInvocationConfig m_agentInvocation;
  bool m_datasetHasBeenSet = false;
  bool m_agentInvocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
