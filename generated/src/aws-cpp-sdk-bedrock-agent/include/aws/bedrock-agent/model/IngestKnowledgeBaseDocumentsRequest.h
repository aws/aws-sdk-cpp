/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/KnowledgeBaseDocument.h>
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
  class IngestKnowledgeBaseDocumentsRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API IngestKnowledgeBaseDocumentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IngestKnowledgeBaseDocuments"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline IngestKnowledgeBaseDocumentsRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline IngestKnowledgeBaseDocumentsRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline IngestKnowledgeBaseDocumentsRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data source connected to the knowledge base that
     * you're adding documents to.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }
    inline IngestKnowledgeBaseDocumentsRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline IngestKnowledgeBaseDocumentsRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline IngestKnowledgeBaseDocumentsRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains information about the documents to
     * add.</p>
     */
    inline const Aws::Vector<KnowledgeBaseDocument>& GetDocuments() const{ return m_documents; }
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
    inline void SetDocuments(const Aws::Vector<KnowledgeBaseDocument>& value) { m_documentsHasBeenSet = true; m_documents = value; }
    inline void SetDocuments(Aws::Vector<KnowledgeBaseDocument>&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }
    inline IngestKnowledgeBaseDocumentsRequest& WithDocuments(const Aws::Vector<KnowledgeBaseDocument>& value) { SetDocuments(value); return *this;}
    inline IngestKnowledgeBaseDocumentsRequest& WithDocuments(Aws::Vector<KnowledgeBaseDocument>&& value) { SetDocuments(std::move(value)); return *this;}
    inline IngestKnowledgeBaseDocumentsRequest& AddDocuments(const KnowledgeBaseDocument& value) { m_documentsHasBeenSet = true; m_documents.push_back(value); return *this; }
    inline IngestKnowledgeBaseDocumentsRequest& AddDocuments(KnowledgeBaseDocument&& value) { m_documentsHasBeenSet = true; m_documents.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the knowledge base to ingest the documents into.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline IngestKnowledgeBaseDocumentsRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline IngestKnowledgeBaseDocumentsRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline IngestKnowledgeBaseDocumentsRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::Vector<KnowledgeBaseDocument> m_documents;
    bool m_documentsHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
