/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/IngestionJobStatus.h>
#include <aws/bedrock-agent/model/IngestionJobStatistics.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains the information of an ingestion job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IngestionJob">AWS
   * API Reference</a></p>
   */
  class IngestionJob
  {
  public:
    AWS_BEDROCKAGENT_API IngestionJob();
    AWS_BEDROCKAGENT_API IngestionJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IngestionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    
    inline IngestionJob& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    
    inline IngestionJob& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    
    inline IngestionJob& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    
    inline IngestionJob& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    
    inline IngestionJob& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    
    inline IngestionJob& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    
    inline const Aws::String& GetIngestionJobId() const{ return m_ingestionJobId; }

    
    inline bool IngestionJobIdHasBeenSet() const { return m_ingestionJobIdHasBeenSet; }

    
    inline void SetIngestionJobId(const Aws::String& value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId = value; }

    
    inline void SetIngestionJobId(Aws::String&& value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId = std::move(value); }

    
    inline void SetIngestionJobId(const char* value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId.assign(value); }

    
    inline IngestionJob& WithIngestionJobId(const Aws::String& value) { SetIngestionJobId(value); return *this;}

    
    inline IngestionJob& WithIngestionJobId(Aws::String&& value) { SetIngestionJobId(std::move(value)); return *this;}

    
    inline IngestionJob& WithIngestionJobId(const char* value) { SetIngestionJobId(value); return *this;}


    
    inline const Aws::String& GetDescription() const{ return m_description; }

    
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    
    inline IngestionJob& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    
    inline IngestionJob& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    
    inline IngestionJob& WithDescription(const char* value) { SetDescription(value); return *this;}


    
    inline const IngestionJobStatus& GetStatus() const{ return m_status; }

    
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    
    inline void SetStatus(const IngestionJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    
    inline void SetStatus(IngestionJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    
    inline IngestionJob& WithStatus(const IngestionJobStatus& value) { SetStatus(value); return *this;}

    
    inline IngestionJob& WithStatus(IngestionJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    
    inline const IngestionJobStatistics& GetStatistics() const{ return m_statistics; }

    
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    
    inline void SetStatistics(const IngestionJobStatistics& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    
    inline void SetStatistics(IngestionJobStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    
    inline IngestionJob& WithStatistics(const IngestionJobStatistics& value) { SetStatistics(value); return *this;}

    
    inline IngestionJob& WithStatistics(IngestionJobStatistics&& value) { SetStatistics(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }

    
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }

    
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }

    
    inline IngestionJob& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    
    inline IngestionJob& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    
    inline IngestionJob& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

    
    inline IngestionJob& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }

    
    inline IngestionJob& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }


    
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    
    inline IngestionJob& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    
    inline IngestionJob& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline IngestionJob& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline IngestionJob& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_ingestionJobId;
    bool m_ingestionJobIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IngestionJobStatus m_status;
    bool m_statusHasBeenSet = false;

    IngestionJobStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
