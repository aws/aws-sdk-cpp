/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveCodeExecutionDocument.h>
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
 * <p>The details of code that the agent chose to run in an isolated sandbox. The
 * record includes the documents that the code reads. The corresponding
 * CodeExecution step reports the outcome.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveCodeExecutionDetails">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveCodeExecutionDetails {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveCodeExecutionDetails() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveCodeExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveCodeExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The documents that the code reads. This field is present when the code reads
   * documents.</p>
   */
  inline const Aws::Vector<AgenticRetrieveCodeExecutionDocument>& GetDocuments() const { return m_documents; }
  inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
  template <typename DocumentsT = Aws::Vector<AgenticRetrieveCodeExecutionDocument>>
  void SetDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents = std::forward<DocumentsT>(value);
  }
  template <typename DocumentsT = Aws::Vector<AgenticRetrieveCodeExecutionDocument>>
  AgenticRetrieveCodeExecutionDetails& WithDocuments(DocumentsT&& value) {
    SetDocuments(std::forward<DocumentsT>(value));
    return *this;
  }
  template <typename DocumentsT = AgenticRetrieveCodeExecutionDocument>
  AgenticRetrieveCodeExecutionDetails& AddDocuments(DocumentsT&& value) {
    m_documentsHasBeenSet = true;
    m_documents.emplace_back(std::forward<DocumentsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AgenticRetrieveCodeExecutionDocument> m_documents;
  bool m_documentsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
