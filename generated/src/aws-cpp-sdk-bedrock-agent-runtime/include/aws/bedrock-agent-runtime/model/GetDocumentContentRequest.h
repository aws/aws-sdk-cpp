/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent-runtime/BedrockAgentRuntimeRequest.h>
#include <aws/bedrock-agent-runtime/BedrockAgentRuntime_EXPORTS.h>
#include <aws/bedrock-agent-runtime/model/DocumentOutputFormat.h>
#include <aws/bedrock-agent-runtime/model/UserContext.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace BedrockAgentRuntime {
namespace Model {

/**
 */
class GetDocumentContentRequest : public BedrockAgentRuntimeRequest {
 public:
  AWS_BEDROCKAGENTRUNTIME_API GetDocumentContentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetDocumentContent"; }

  AWS_BEDROCKAGENTRUNTIME_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the data source that contains the document.</p>
   */
  inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
  inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
  template <typename DataSourceIdT = Aws::String>
  void SetDataSourceId(DataSourceIdT&& value) {
    m_dataSourceIdHasBeenSet = true;
    m_dataSourceId = std::forward<DataSourceIdT>(value);
  }
  template <typename DataSourceIdT = Aws::String>
  GetDocumentContentRequest& WithDataSourceId(DataSourceIdT&& value) {
    SetDataSourceId(std::forward<DataSourceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the document to retrieve content for.</p>
   */
  inline const Aws::String& GetDocumentId() const { return m_documentId; }
  inline bool DocumentIdHasBeenSet() const { return m_documentIdHasBeenSet; }
  template <typename DocumentIdT = Aws::String>
  void SetDocumentId(DocumentIdT&& value) {
    m_documentIdHasBeenSet = true;
    m_documentId = std::forward<DocumentIdT>(value);
  }
  template <typename DocumentIdT = Aws::String>
  GetDocumentContentRequest& WithDocumentId(DocumentIdT&& value) {
    SetDocumentId(std::forward<DocumentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the knowledge base that contains the document.</p>
   */
  inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
  inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
  template <typename KnowledgeBaseIdT = Aws::String>
  void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    m_knowledgeBaseIdHasBeenSet = true;
    m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value);
  }
  template <typename KnowledgeBaseIdT = Aws::String>
  GetDocumentContentRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) {
    SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output format for the document content. <code>RAW</code> returns the
   * original file. <code>EXTRACTED</code> returns parsed text as JSON. Defaults to
   * <code>RAW</code>.</p>
   */
  inline DocumentOutputFormat GetOutputFormat() const { return m_outputFormat; }
  inline bool OutputFormatHasBeenSet() const { return m_outputFormatHasBeenSet; }
  inline void SetOutputFormat(DocumentOutputFormat value) {
    m_outputFormatHasBeenSet = true;
    m_outputFormat = value;
  }
  inline GetDocumentContentRequest& WithOutputFormat(DocumentOutputFormat value) {
    SetOutputFormat(value);
    return *this;
  }
  ///@}

  ///@{

  inline const UserContext& GetUserContext() const { return m_userContext; }
  inline bool UserContextHasBeenSet() const { return m_userContextHasBeenSet; }
  template <typename UserContextT = UserContext>
  void SetUserContext(UserContextT&& value) {
    m_userContextHasBeenSet = true;
    m_userContext = std::forward<UserContextT>(value);
  }
  template <typename UserContextT = UserContext>
  GetDocumentContentRequest& WithUserContext(UserContextT&& value) {
    SetUserContext(std::forward<UserContextT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dataSourceId;

  Aws::String m_documentId;

  Aws::String m_knowledgeBaseId;

  DocumentOutputFormat m_outputFormat{DocumentOutputFormat::NOT_SET};

  UserContext m_userContext;
  bool m_dataSourceIdHasBeenSet = false;
  bool m_documentIdHasBeenSet = false;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_outputFormatHasBeenSet = false;
  bool m_userContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
