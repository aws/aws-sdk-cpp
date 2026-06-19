/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveMessageContent.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveSourceRetriever.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>Details of a retrieve action including the query and target
 * retrievers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveActionDetails">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveActionDetails {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveActionDetails() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveActionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveActionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The input query used for retrieval.</p>
   */
  inline const AgenticRetrieveMessageContent& GetInputQuery() const { return m_inputQuery; }
  inline bool InputQueryHasBeenSet() const { return m_inputQueryHasBeenSet; }
  template <typename InputQueryT = AgenticRetrieveMessageContent>
  void SetInputQuery(InputQueryT&& value) {
    m_inputQueryHasBeenSet = true;
    m_inputQuery = std::forward<InputQueryT>(value);
  }
  template <typename InputQueryT = AgenticRetrieveMessageContent>
  AgenticRetrieveActionDetails& WithInputQuery(InputQueryT&& value) {
    SetInputQuery(std::forward<InputQueryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of source retrievers targeted by this action.</p>
   */
  inline const Aws::Vector<AgenticRetrieveSourceRetriever>& GetSourceRetrievers() const { return m_sourceRetrievers; }
  inline bool SourceRetrieversHasBeenSet() const { return m_sourceRetrieversHasBeenSet; }
  template <typename SourceRetrieversT = Aws::Vector<AgenticRetrieveSourceRetriever>>
  void SetSourceRetrievers(SourceRetrieversT&& value) {
    m_sourceRetrieversHasBeenSet = true;
    m_sourceRetrievers = std::forward<SourceRetrieversT>(value);
  }
  template <typename SourceRetrieversT = Aws::Vector<AgenticRetrieveSourceRetriever>>
  AgenticRetrieveActionDetails& WithSourceRetrievers(SourceRetrieversT&& value) {
    SetSourceRetrievers(std::forward<SourceRetrieversT>(value));
    return *this;
  }
  template <typename SourceRetrieversT = AgenticRetrieveSourceRetriever>
  AgenticRetrieveActionDetails& AddSourceRetrievers(SourceRetrieversT&& value) {
    m_sourceRetrieversHasBeenSet = true;
    m_sourceRetrievers.emplace_back(std::forward<SourceRetrieversT>(value));
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveMessageContent m_inputQuery;

  Aws::Vector<AgenticRetrieveSourceRetriever> m_sourceRetrievers;
  bool m_inputQueryHasBeenSet = false;
  bool m_sourceRetrieversHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
