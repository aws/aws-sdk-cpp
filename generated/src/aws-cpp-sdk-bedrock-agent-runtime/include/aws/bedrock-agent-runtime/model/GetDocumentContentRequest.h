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
   * <p>The unique identifier (in UUID format) of an image embedded in the specified
   * document. Set this parameter to the <code>_media_id</code> value in the metadata
   * of the corresponding <code>Retrieve</code> result. If you specify this
   * parameter, the response contains a pre-signed URL for the image instead of the
   * document, and you must omit <code>outputFormat</code> or set it to
   * <code>RAW</code>.</p>
   */
  inline const Aws::String& GetMediaId() const { return m_mediaId; }
  inline bool MediaIdHasBeenSet() const { return m_mediaIdHasBeenSet; }
  template <typename MediaIdT = Aws::String>
  void SetMediaId(MediaIdT&& value) {
    m_mediaIdHasBeenSet = true;
    m_mediaId = std::forward<MediaIdT>(value);
  }
  template <typename MediaIdT = Aws::String>
  GetDocumentContentRequest& WithMediaId(MediaIdT&& value) {
    SetMediaId(std::forward<MediaIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output format for the content. You can specify one of the following
   * values:</p> <dl> <dt>RAW</dt> <dd> <p>Returns the original document, or the
   * selected image if you specify <code>mediaId</code>.</p> </dd> <dt>EXTRACTED</dt>
   * <dd> <p>Returns parsed document text as JSON.</p> </dd> </dl> <p>If you omit
   * this parameter, the default is <code>RAW</code>. You can't use
   * <code>EXTRACTED</code> with <code>mediaId</code>.</p>
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
  /**
   * <p>Contains information about the user making the request. This is used for
   * access control filtering to ensure that results only include documents the user
   * is authorized to access.</p>
   */
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

  Aws::String m_mediaId;

  DocumentOutputFormat m_outputFormat{DocumentOutputFormat::NOT_SET};

  UserContext m_userContext;
  bool m_dataSourceIdHasBeenSet = false;
  bool m_documentIdHasBeenSet = false;
  bool m_knowledgeBaseIdHasBeenSet = false;
  bool m_mediaIdHasBeenSet = false;
  bool m_outputFormatHasBeenSet = false;
  bool m_userContextHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentRuntime
}  // namespace Aws
