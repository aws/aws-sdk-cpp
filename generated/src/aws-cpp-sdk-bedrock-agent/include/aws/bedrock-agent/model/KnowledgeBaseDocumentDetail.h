/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/DocumentStatus.h>
#include <aws/bedrock-agent/model/DocumentIdentifier.h>
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
    AWS_BEDROCKAGENT_API KnowledgeBaseDocumentDetail() = default;
    AWS_BEDROCKAGENT_API KnowledgeBaseDocumentDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBaseDocumentDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the knowledge base that the document was ingested into or
     * deleted from.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    KnowledgeBaseDocumentDetail& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source connected to the knowledge base that the
     * document was ingested into or deleted from.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    KnowledgeBaseDocumentDetail& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
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
    inline DocumentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DocumentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline KnowledgeBaseDocumentDetail& WithStatus(DocumentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information that identifies the document.</p>
     */
    inline const DocumentIdentifier& GetIdentifier() const { return m_identifier; }
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }
    template<typename IdentifierT = DocumentIdentifier>
    void SetIdentifier(IdentifierT&& value) { m_identifierHasBeenSet = true; m_identifier = std::forward<IdentifierT>(value); }
    template<typename IdentifierT = DocumentIdentifier>
    KnowledgeBaseDocumentDetail& WithIdentifier(IdentifierT&& value) { SetIdentifier(std::forward<IdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the status. Appears alongside the status
     * <code>IGNORED</code>.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    KnowledgeBaseDocumentDetail& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time at which the document was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    KnowledgeBaseDocumentDetail& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    DocumentStatus m_status{DocumentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    DocumentIdentifier m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
