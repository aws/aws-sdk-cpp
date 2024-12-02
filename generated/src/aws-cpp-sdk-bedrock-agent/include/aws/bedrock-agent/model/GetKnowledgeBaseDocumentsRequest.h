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
    AWS_BEDROCKAGENT_API GetKnowledgeBaseDocumentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetKnowledgeBaseDocuments"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the data source that contains the documents.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }
    inline GetKnowledgeBaseDocumentsRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline GetKnowledgeBaseDocumentsRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline GetKnowledgeBaseDocumentsRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of objects, each of which contains information to identify a document
     * for which to retrieve information.</p>
     */
    inline const Aws::Vector<DocumentIdentifier>& GetDocumentIdentifiers() const{ return m_documentIdentifiers; }
    inline bool DocumentIdentifiersHasBeenSet() const { return m_documentIdentifiersHasBeenSet; }
    inline void SetDocumentIdentifiers(const Aws::Vector<DocumentIdentifier>& value) { m_documentIdentifiersHasBeenSet = true; m_documentIdentifiers = value; }
    inline void SetDocumentIdentifiers(Aws::Vector<DocumentIdentifier>&& value) { m_documentIdentifiersHasBeenSet = true; m_documentIdentifiers = std::move(value); }
    inline GetKnowledgeBaseDocumentsRequest& WithDocumentIdentifiers(const Aws::Vector<DocumentIdentifier>& value) { SetDocumentIdentifiers(value); return *this;}
    inline GetKnowledgeBaseDocumentsRequest& WithDocumentIdentifiers(Aws::Vector<DocumentIdentifier>&& value) { SetDocumentIdentifiers(std::move(value)); return *this;}
    inline GetKnowledgeBaseDocumentsRequest& AddDocumentIdentifiers(const DocumentIdentifier& value) { m_documentIdentifiersHasBeenSet = true; m_documentIdentifiers.push_back(value); return *this; }
    inline GetKnowledgeBaseDocumentsRequest& AddDocumentIdentifiers(DocumentIdentifier&& value) { m_documentIdentifiersHasBeenSet = true; m_documentIdentifiers.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the knowledge base that is connected to the data
     * source.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline GetKnowledgeBaseDocumentsRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline GetKnowledgeBaseDocumentsRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline GetKnowledgeBaseDocumentsRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::Vector<DocumentIdentifier> m_documentIdentifiers;
    bool m_documentIdentifiersHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
