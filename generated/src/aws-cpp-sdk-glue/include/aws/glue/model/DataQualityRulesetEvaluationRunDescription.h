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
   * <p>Describes the result of a data quality ruleset evaluation run.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityRulesetEvaluationRunDescription">AWS
   * API Reference</a></p>
   */
  class DataQualityRulesetEvaluationRunDescription
  {
  public:
    AWS_GLUE_API DataQualityRulesetEvaluationRunDescription();
    AWS_GLUE_API DataQualityRulesetEvaluationRunDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityRulesetEvaluationRunDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline const Aws::String& GetRunId() const{ return m_runId; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline bool RunIdHasBeenSet() const { return m_runIdHasBeenSet; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(const Aws::String& value) { m_runIdHasBeenSet = true; m_runId = value; }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(Aws::String&& value) { m_runIdHasBeenSet = true; m_runId = std::move(value); }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline void SetRunId(const char* value) { m_runIdHasBeenSet = true; m_runId.assign(value); }

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline DataQualityRulesetEvaluationRunDescription& WithRunId(const Aws::String& value) { SetRunId(value); return *this;}

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline DataQualityRulesetEvaluationRunDescription& WithRunId(Aws::String&& value) { SetRunId(std::move(value)); return *this;}

    /**
     * <p>The unique run identifier associated with this run.</p>
     */
    inline DataQualityRulesetEvaluationRunDescription& WithRunId(const char* value) { SetRunId(value); return *this;}


    /**
     * <p>The status for this run.</p>
     */
    inline const TaskStatusType& GetStatus() const{ return m_status; }

    /**
     * <p>The status for this run.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status for this run.</p>
     */
    inline void SetStatus(const TaskStatusType& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status for this run.</p>
     */
    inline void SetStatus(TaskStatusType&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status for this run.</p>
     */
    inline DataQualityRulesetEvaluationRunDescription& WithStatus(const TaskStatusType& value) { SetStatus(value); return *this;}

    /**
     * <p>The status for this run.</p>
     */
    inline DataQualityRulesetEvaluationRunDescription& WithStatus(TaskStatusType&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The date and time when the run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The date and time when the run started.</p>
     */
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }

    /**
     * <p>The date and time when the run started.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }

    /**
     * <p>The date and time when the run started.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }

    /**
     * <p>The date and time when the run started.</p>
     */
    inline DataQualityRulesetEvaluationRunDescription& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The date and time when the run started.</p>
     */
    inline DataQualityRulesetEvaluationRunDescription& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}


    /**
     * <p>The data source (an Glue table) associated with the run.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The data source (an Glue table) associated with the run.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The data source (an Glue table) associated with the run.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The data source (an Glue table) associated with the run.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The data source (an Glue table) associated with the run.</p>
     */
    inline DataQualityRulesetEvaluationRunDescription& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The data source (an Glue table) associated with the run.</p>
     */
    inline DataQualityRulesetEvaluationRunDescription& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}

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
