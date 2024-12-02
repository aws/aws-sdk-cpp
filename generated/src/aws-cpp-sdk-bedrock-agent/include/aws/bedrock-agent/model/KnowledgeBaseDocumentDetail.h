/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/DocumentIdentifier.h>
#include <aws/bedrock-agent/model/DocumentStatus.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains the details for a document that was ingested or
   * deleted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/KnowledgeBaseDocumentDetail">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseDocumentDetail
  {
  public:
    AWS_BEDROCKAGENT_API KnowledgeBaseDocumentDetail();
    AWS_BEDROCKAGENT_API KnowledgeBaseDocumentDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBaseDocumentDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the data source connected to the knowledge base that the
     * document was ingested into or deleted from.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }
    inline KnowledgeBaseDocumentDetail& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}
    inline KnowledgeBaseDocumentDetail& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}
    inline KnowledgeBaseDocumentDetail& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information that identifies the document.</p>
     */
    inline const DocumentIdentifier& GetIdentifier() const{ return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    inline void SetIdentifier(const DocumentIdentifier& value) { m_identifierHasBeenSet = true; m_identifier = value; }
    inline void SetIdentifier(DocumentIdentifier&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }
    inline KnowledgeBaseDocumentDetail& WithIdentifier(const DocumentIdentifier& value) { SetIdentifier(value); return *this;}
    inline KnowledgeBaseDocumentDetail& WithIdentifier(DocumentIdentifier&& value) { SetIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the knowledge base that the document was ingested into or
     * deleted from.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline KnowledgeBaseDocumentDetail& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline KnowledgeBaseDocumentDetail& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline KnowledgeBaseDocumentDetail& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ingestion status of the document. The following statuses are
     * possible:</p> <ul> <li> <p>STARTED – You submitted the ingestion job containing
     * the document.</p> </li> <li> <p>PENDING – The document is waiting to be
     * ingested.</p> </li> <li> <p>IN_PROGRESS – The document is being ingested.</p>
     * </li> <li> <p>INDEXED – The document was successfully indexed.</p> </li> <li>
     * <p>PARTIALLY_INDEXED – The document was partially indexed.</p> </li> <li>
     * <p>METADATA_PARTIALLY_INDEXED – You submitted metadata for an existing document
     * and it was partially indexed.</p> </li> <li> <p>METADATA_UPDATE_FAILED – You
     * submitted a metadata update for an existing document but it failed.</p> </li>
     * <li> <p>FAILED – The document failed to be ingested.</p> </li> <li> <p>NOT_FOUND
     * – The document wasn't found.</p> </li> <li> <p>IGNORED – The document was
     * ignored during ingestion.</p> </li> <li> <p>DELETING – You submitted the delete
     * job containing the document.</p> </li> <li> <p>DELETE_IN_PROGRESS – The document
     * is being deleted.</p> </li> </ul>
     */
    inline const DocumentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const DocumentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(DocumentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline KnowledgeBaseDocumentDetail& WithStatus(const DocumentStatus& value) { SetStatus(value); return *this;}
    inline KnowledgeBaseDocumentDetail& WithStatus(DocumentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the status. Appears alongside the status
     * <code>IGNORED</code>.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline KnowledgeBaseDocumentDetail& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline KnowledgeBaseDocumentDetail& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline KnowledgeBaseDocumentDetail& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the document was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline KnowledgeBaseDocumentDetail& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline KnowledgeBaseDocumentDetail& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    DocumentIdentifier m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    DocumentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
