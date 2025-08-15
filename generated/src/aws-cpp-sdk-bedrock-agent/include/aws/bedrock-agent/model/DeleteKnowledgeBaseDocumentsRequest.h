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
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class DeleteKnowledgeBaseDocumentsRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API DeleteKnowledgeBaseDocumentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteKnowledgeBaseDocuments"; }

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
    DeleteKnowledgeBaseDocumentsRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
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
    DeleteKnowledgeBaseDocumentsRequest& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    DeleteKnowledgeBaseDocumentsRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains information to identify a document
     * to delete.</p>
     */
    inline const Aws::Vector<DocumentIdentifier>& GetDocumentIdentifiers() const { return m_documentIdentifiers; }
    inline bool DocumentIdentifiersHasBeenSet() const { return m_documentIdentifiersHasBeenSet; }
    template<typename DocumentIdentifiersT = Aws::Vector<DocumentIdentifier>>
    void SetDocumentIdentifiers(DocumentIdentifiersT&& value) { m_documentIdentifiersHasBeenSet = true; m_documentIdentifiers = std::forward<DocumentIdentifiersT>(value); }
    template<typename DocumentIdentifiersT = Aws::Vector<DocumentIdentifier>>
    DeleteKnowledgeBaseDocumentsRequest& WithDocumentIdentifiers(DocumentIdentifiersT&& value) { SetDocumentIdentifiers(std::forward<DocumentIdentifiersT>(value)); return *this;}
    template<typename DocumentIdentifiersT = DocumentIdentifier>
    DeleteKnowledgeBaseDocumentsRequest& AddDocumentIdentifiers(DocumentIdentifiersT&& value) { m_documentIdentifiersHasBeenSet = true; m_documentIdentifiers.emplace_back(std::forward<DocumentIdentifiersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<DocumentIdentifier> m_documentIdentifiers;
    bool m_documentIdentifiersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
