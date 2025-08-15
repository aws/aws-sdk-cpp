/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/DocumentIdentifier.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class GetKnowledgeBaseDocumentsRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API GetKnowledgeBaseDocumentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetKnowledgeBaseDocuments"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base that is connected to the data
     * source.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    GetKnowledgeBaseDocumentsRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data source that contains the documents.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    GetKnowledgeBaseDocumentsRequest& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains information to identify a document
     * for which to retrieve information.</p>
     */
    inline const Aws::Vector<DocumentIdentifier>& GetDocumentIdentifiers() const { return m_documentIdentifiers; }
    inline bool DocumentIdentifiersHasBeenSet() const { return m_documentIdentifiersHasBeenSet; }
    template<typename DocumentIdentifiersT = Aws::Vector<DocumentIdentifier>>
    void SetDocumentIdentifiers(DocumentIdentifiersT&& value) { m_documentIdentifiersHasBeenSet = true; m_documentIdentifiers = std::forward<DocumentIdentifiersT>(value); }
    template<typename DocumentIdentifiersT = Aws::Vector<DocumentIdentifier>>
    GetKnowledgeBaseDocumentsRequest& WithDocumentIdentifiers(DocumentIdentifiersT&& value) { SetDocumentIdentifiers(std::forward<DocumentIdentifiersT>(value)); return *this;}
    template<typename DocumentIdentifiersT = DocumentIdentifier>
    GetKnowledgeBaseDocumentsRequest& AddDocumentIdentifiers(DocumentIdentifiersT&& value) { m_documentIdentifiersHasBeenSet = true; m_documentIdentifiers.emplace_back(std::forward<DocumentIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::Vector<DocumentIdentifier> m_documentIdentifiers;
    bool m_documentIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
