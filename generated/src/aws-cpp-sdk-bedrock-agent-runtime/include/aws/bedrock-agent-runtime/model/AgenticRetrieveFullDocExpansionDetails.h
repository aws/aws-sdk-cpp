/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/AgenticRetrieveSourceRetriever.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Details of a full document expansion action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-runtime-2023-07-26/AgenticRetrieveFullDocExpansionDetails">AWS
 * API Reference</a></p>
 */
class AgenticRetrieveFullDocExpansionDetails {
 public:
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveFullDocExpansionDetails() = default;
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveFullDocExpansionDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API AgenticRetrieveFullDocExpansionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the document to expand.</p>
   */
  inline const Aws::String& GetDocumentId() const { return m_documentId; }
  inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
  template <typename DocumentIdT = Aws::String>
  void SetDocumentId(DocumentIdT&& value) {
    m_documentIdHasBeenSet = true;
    m_documentId = std::forward<DocumentIdT>(value);
  }
  template <typename DocumentIdT = Aws::String>
  AgenticRetrieveFullDocExpansionDetails& WithDocumentId(DocumentIdT&& value) {
    SetDocumentId(std::forward<DocumentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source retriever associated with the document.</p>
   */
  inline const AgenticRetrieveSourceRetriever& GetSourceRetriever() const { return m_sourceRetriever; }
  inline bool SourceRetrieverHasBeenSet() const { return m_sourceRetrieverHasBeenSet; }
  template <typename SourceRetrieverT = AgenticRetrieveSourceRetriever>
  void SetSourceRetriever(SourceRetrieverT&& value) {
    m_sourceRetrieverHasBeenSet = true;
    m_sourceRetriever = std::forward<SourceRetrieverT>(value);
  }
  template <typename SourceRetrieverT = AgenticRetrieveSourceRetriever>
  AgenticRetrieveFullDocExpansionDetails& WithSourceRetriever(SourceRetrieverT&& value) {
    SetSourceRetriever(std::forward<SourceRetrieverT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_documentId;

  AgenticRetrieveSourceRetriever m_sourceRetriever;
  bool m_documentIdHasBeenSet = false;
  bool m_sourceRetrieverHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
