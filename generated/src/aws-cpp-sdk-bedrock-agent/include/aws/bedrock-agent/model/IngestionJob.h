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
   * <p>Contains details about a data ingestion job. Data sources are ingested into a
   * knowledge base so that Large Language Models (LLMs) can use your data.</p>
   * <p>This data type is used in the following API operations:</p> <ul> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_StartIngestionJob.html#API_agent_StartIngestionJob_ResponseSyntax">StartIngestionJob
   * response</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_GetIngestionJob.html#API_agent_GetIngestionJob_ResponseSyntax">GetIngestionJob
   * response</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/bedrock/latest/APIReference/API_agent_ListIngestionJobs.html#API_agent_ListIngestionJobs_ResponseSyntax">ListIngestionJob
   * response</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/IngestionJob">AWS
   * API Reference</a></p>
   */
  class IngestionJob
  {
  public:
    AWS_BEDROCKAGENT_API IngestionJob() = default;
    AWS_BEDROCKAGENT_API IngestionJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API IngestionJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the knowledge for the data ingestion job.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    IngestionJob& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data source for the data ingestion job.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    IngestionJob& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data ingestion job.</p>
     */
    inline const Aws::String& GetIngestionJobId() const { return m_ingestionJobId; }
    inline bool IngestionJobIdHasBeenSet() const { return m_ingestionJobIdHasBeenSet; }
    template<typename IngestionJobIdT = Aws::String>
    void SetIngestionJobId(IngestionJobIdT&& value) { m_ingestionJobIdHasBeenSet = true; m_ingestionJobId = std::forward<IngestionJobIdT>(value); }
    template<typename IngestionJobIdT = Aws::String>
    IngestionJob& WithIngestionJobId(IngestionJobIdT&& value) { SetIngestionJobId(std::forward<IngestionJobIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data ingestion job.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    IngestionJob& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data ingestion job.</p>
     */
    inline IngestionJobStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(IngestionJobStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline IngestionJob& WithStatus(IngestionJobStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains statistics about the data ingestion job.</p>
     */
    inline const IngestionJobStatistics& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = IngestionJobStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = IngestionJobStatistics>
    IngestionJob& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of reasons that the data ingestion job failed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    IngestionJob& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    IngestionJob& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time the data ingestion job started.</p> <p>If you stop a data ingestion
     * job, the <code>startedAt</code> time is the time the job was started before the
     * job was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    IngestionJob& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the data ingestion job was last updated.</p> <p>If you stop a data
     * ingestion job, the <code>updatedAt</code> time is the time the job was
     * stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    IngestionJob& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_ingestionJobId;
    bool m_ingestionJobIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    IngestionJobStatus m_status{IngestionJobStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    IngestionJobStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
