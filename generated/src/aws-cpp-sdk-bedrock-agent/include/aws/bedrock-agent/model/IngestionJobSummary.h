/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/IngestionJobStatistics.h>
#include <aws/bedrock-agent/model/IngestionJobStatus.h>
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
   * <p>Contains details about an ingestion job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IngestionJobSummary">AWS
   * API Reference</a></p>
   */
  class IngestionJobSummary
  {
  public:
    AWS_BEDROCKAGENT_API IngestionJobSummary();
    AWS_BEDROCKAGENT_API IngestionJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IngestionJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the data source in the ingestion job.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The unique identifier of the data source in the ingestion job.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the data source in the ingestion job.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The unique identifier of the data source in the ingestion job.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The unique identifier of the data source in the ingestion job.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The unique identifier of the data source in the ingestion job.</p>
     */
    inline IngestionJobSummary& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The unique identifier of the data source in the ingestion job.</p>
     */
    inline IngestionJobSummary& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the data source in the ingestion job.</p>
     */
    inline IngestionJobSummary& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The description of the ingestion job.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the ingestion job.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the ingestion job.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the ingestion job.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the ingestion job.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the ingestion job.</p>
     */
    inline IngestionJobSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the ingestion job.</p>
     */
    inline IngestionJobSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the ingestion job.</p>
     */
    inline IngestionJobSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the ingestion job.</p>
     */
    inline const Aws::String& GetIngestionJobId() const{ return m_ingestionJobId; }

    /**
     * <p>The unique identifier of the ingestion job.</p>
     */
    inline bool IngestionJobIdHasBeenSet() const { return m_ingestionJobIdHasBeenSet; }

    /**
     * <p>The unique identifier of the ingestion job.</p>
     */
    inline void SetIngestionJobId(const Aws::String& value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId = value; }

    /**
     * <p>The unique identifier of the ingestion job.</p>
     */
    inline void SetIngestionJobId(Aws::String&& value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId = std::move(value); }

    /**
     * <p>The unique identifier of the ingestion job.</p>
     */
    inline void SetIngestionJobId(const char* value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId.assign(value); }

    /**
     * <p>The unique identifier of the ingestion job.</p>
     */
    inline IngestionJobSummary& WithIngestionJobId(const Aws::String& value) { SetIngestionJobId(value); return *this;}

    /**
     * <p>The unique identifier of the ingestion job.</p>
     */
    inline IngestionJobSummary& WithIngestionJobId(Aws::String&& value) { SetIngestionJobId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the ingestion job.</p>
     */
    inline IngestionJobSummary& WithIngestionJobId(const char* value) { SetIngestionJobId(value); return *this;}


    /**
     * <p>The unique identifier of the knowledge base to which the data source is
     * added.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base to which the data source is
     * added.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the knowledge base to which the data source is
     * added.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base to which the data source is
     * added.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base to which the data source is
     * added.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base to which the data source is
     * added.</p>
     */
    inline IngestionJobSummary& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to which the data source is
     * added.</p>
     */
    inline IngestionJobSummary& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to which the data source is
     * added.</p>
     */
    inline IngestionJobSummary& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The time at which the ingestion job was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The time at which the ingestion job was started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The time at which the ingestion job was started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The time at which the ingestion job was started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The time at which the ingestion job was started.</p>
     */
    inline IngestionJobSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The time at which the ingestion job was started.</p>
     */
    inline IngestionJobSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>Contains statistics for the ingestion job.</p>
     */
    inline const IngestionJobStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>Contains statistics for the ingestion job.</p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>Contains statistics for the ingestion job.</p>
     */
    inline void SetStatistics(const IngestionJobStatistics& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>Contains statistics for the ingestion job.</p>
     */
    inline void SetStatistics(IngestionJobStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>Contains statistics for the ingestion job.</p>
     */
    inline IngestionJobSummary& WithStatistics(const IngestionJobStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>Contains statistics for the ingestion job.</p>
     */
    inline IngestionJobSummary& WithStatistics(IngestionJobStatistics&& value) { SetStatistics(std::move(value)); return *this;}


    /**
     * <p>The status of the ingestion job.</p>
     */
    inline const IngestionJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the ingestion job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the ingestion job.</p>
     */
    inline void SetStatus(const IngestionJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the ingestion job.</p>
     */
    inline void SetStatus(IngestionJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the ingestion job.</p>
     */
    inline IngestionJobSummary& WithStatus(const IngestionJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the ingestion job.</p>
     */
    inline IngestionJobSummary& WithStatus(IngestionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the ingestion job was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the ingestion job was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the ingestion job was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the ingestion job was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the ingestion job was last updated.</p>
     */
    inline IngestionJobSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the ingestion job was last updated.</p>
     */
    inline IngestionJobSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ingestionJobId;
    bool m_ingestionJobIdHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    IngestionJobStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    IngestionJobStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
