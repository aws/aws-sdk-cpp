/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/TaskStatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/glue/model/DataSource.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes the result of a data quality rule recommendation run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRuleRecommendationRunDescription">AWS
   * API Reference</a></p>
   */
  class DataQualityRuleRecommendationRunDescription
  {
  public:
    AWS_GLUE_API DataQualityRuleRecommendationRunDescription();
    AWS_GLUE_API DataQualityRuleRecommendationRunDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRuleRecommendationRunDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }
    inline DataQualityRuleRecommendationRunDescription& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}
    inline DataQualityRuleRecommendationRunDescription& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}
    inline DataQualityRuleRecommendationRunDescription& WithRunId(const char* value) { SetRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status for this run.</p>
     */
    inline const TaskStatusType& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const TaskStatusType& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(TaskStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DataQualityRuleRecommendationRunDescription& WithStatus(const TaskStatusType& value) { SetStatus(value); return *this;}
    inline DataQualityRuleRecommendationRunDescription& WithStatus(TaskStatusType&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when this run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }
    inline DataQualityRuleRecommendationRunDescription& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}
    inline DataQualityRuleRecommendationRunDescription& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source (Glue table) associated with the recommendation run.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline DataQualityRuleRecommendationRunDescription& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}
    inline DataQualityRuleRecommendationRunDescription& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_runId;
    bool m_runIdHasBeenSet = false;

    TaskStatusType m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
