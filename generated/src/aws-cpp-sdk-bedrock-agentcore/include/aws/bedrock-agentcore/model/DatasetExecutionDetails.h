/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/AgentInvocationDetails.h>
#include <aws/bedrock-agentcore/model/DatasetDetails.h>

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
 * <p>The details of the dataset and agent that a batch evaluation
 * ran.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/DatasetExecutionDetails">AWS
 * API Reference</a></p>
 */
class DatasetExecutionDetails {
 public:
  AWS_BEDROCKAGENTCORE_API DatasetExecutionDetails() = default;
  AWS_BEDROCKAGENTCORE_API DatasetExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API DatasetExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The dataset and the version of it that the batch evaluation ran.</p>
   */
  inline const DatasetDetails& GetDataset() const { return m_dataset; }
  inline bool DatasetHasBeenSet() const { return m_datasetHasBeenSet; }
  template <typename DatasetT = DatasetDetails>
  void SetDataset(DatasetT&& value) {
    m_datasetHasBeenSet = true;
    m_dataset = std::forward<DatasetT>(value);
  }
  template <typename DatasetT = DatasetDetails>
  DatasetExecutionDetails& WithDataset(DatasetT&& value) {
    SetDataset(std::forward<DatasetT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The agent that the batch evaluation invoked.</p>
   */
  inline const AgentInvocationDetails& GetAgentInvocation() const { return m_agentInvocation; }
  inline bool AgentInvocationHasBeenSet() const { return m_agentInvocationHasBeenSet; }
  template <typename AgentInvocationT = AgentInvocationDetails>
  void SetAgentInvocation(AgentInvocationT&& value) {
    m_agentInvocationHasBeenSet = true;
    m_agentInvocation = std::forward<AgentInvocationT>(value);
  }
  template <typename AgentInvocationT = AgentInvocationDetails>
  DatasetExecutionDetails& WithAgentInvocation(AgentInvocationT&& value) {
    SetAgentInvocation(std::forward<AgentInvocationT>(value));
    return *this;
  }
  ///@}
 private:
  DatasetDetails m_dataset;

  AgentInvocationDetails m_agentInvocation;
  bool m_datasetHasBeenSet = false;
  bool m_agentInvocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
