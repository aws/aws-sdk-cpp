/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveGeneratedResponse.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveResultItem.h>
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
namespace BedrockAgentRuntime {
namespace Model {

/**
 * <p>An event containing agentic retrieval results.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveResultEvent">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveResultEvent {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveResultEvent() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveResultEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveResultEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The generated response. Present only when generateResponse is true.</p>
   */
  inline const AgenticRetrieveGeneratedResponse& GetGeneratedResponse() const { return m_generatedResponse; }
  inline bool GeneratedResponseHasBeenSet() const { return m_generatedResponseHasBeenSet; }
  template <typename GeneratedResponseT = AgenticRetrieveGeneratedResponse>
  void SetGeneratedResponse(GeneratedResponseT&& value) {
    m_generatedResponseHasBeenSet = true;
    m_generatedResponse = std::forward<GeneratedResponseT>(value);
  }
  template <typename GeneratedResponseT = AgenticRetrieveGeneratedResponse>
  AgenticRetrieveResultEvent& WithGeneratedResponse(GeneratedResponseT&& value) {
    SetGeneratedResponse(std::forward<GeneratedResponseT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Opaque continuation token for paginated results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  AgenticRetrieveResultEvent& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of retrieved result items.</p>
   */
  inline const Aws::Vector<AgenticRetrieveResultItem>& GetResults() const { return m_results; }
  inline bool ResultsHasBeenSet() const { return m_resultsHasBeenSet; }
  template <typename ResultsT = Aws::Vector<AgenticRetrieveResultItem>>
  void SetResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results = std::forward<ResultsT>(value);
  }
  template <typename ResultsT = Aws::Vector<AgenticRetrieveResultItem>>
  AgenticRetrieveResultEvent& WithResults(ResultsT&& value) {
    SetResults(std::forward<ResultsT>(value));
    return *this;
  }
  template <typename ResultsT = AgenticRetrieveResultItem>
  AgenticRetrieveResultEvent& AddResults(ResultsT&& value) {
    m_resultsHasBeenSet = true;
    m_results.emplace_back(std::forward<ResultsT>(value));
    return *this;
  }
  ///@}
 private:
  AgenticRetrieveGeneratedResponse m_generatedResponse;

  Aws::String m_nextToken;

  Aws::Vector<AgenticRetrieveResultItem> m_results;
  bool m_generatedResponseHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_resultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
