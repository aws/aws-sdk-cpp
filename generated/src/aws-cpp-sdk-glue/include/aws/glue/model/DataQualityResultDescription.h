/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/DataSource.h>
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
namespace Glue
{
namespace Model
{

  /**
   * <p>Describes a data quality result.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityResultDescription">AWS
   * API Reference</a></p>
   */
  class DataQualityResultDescription
  {
  public:
    AWS_GLUE_API DataQualityResultDescription();
    AWS_GLUE_API DataQualityResultDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityResultDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique result ID for this data quality result.</p>
     */
    inline const Aws::String& GetResultId() const{ return m_resultId; }

    /**
     * <p>The unique result ID for this data quality result.</p>
     */
    inline bool ResultIdHasBeenSet() const { return m_resultIdHasBeenSet; }

    /**
     * <p>The unique result ID for this data quality result.</p>
     */
    inline void SetResultId(const Aws::String& value) { m_resultIdHasBeenSet = true; m_resultId = value; }

    /**
     * <p>The unique result ID for this data quality result.</p>
     */
    inline void SetResultId(Aws::String&& value) { m_resultIdHasBeenSet = true; m_resultId = std::move(value); }

    /**
     * <p>The unique result ID for this data quality result.</p>
     */
    inline void SetResultId(const char* value) { m_resultIdHasBeenSet = true; m_resultId.assign(value); }

    /**
     * <p>The unique result ID for this data quality result.</p>
     */
    inline DataQualityResultDescription& WithResultId(const Aws::String& value) { SetResultId(value); return *this;}

    /**
     * <p>The unique result ID for this data quality result.</p>
     */
    inline DataQualityResultDescription& WithResultId(Aws::String&& value) { SetResultId(std::move(value)); return *this;}

    /**
     * <p>The unique result ID for this data quality result.</p>
     */
    inline DataQualityResultDescription& WithResultId(const char* value) { SetResultId(value); return *this;}


    /**
     * <p>The table name associated with the data quality result.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>The table name associated with the data quality result.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>The table name associated with the data quality result.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>The table name associated with the data quality result.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>The table name associated with the data quality result.</p>
     */
    inline DataQualityResultDescription& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>The table name associated with the data quality result.</p>
     */
    inline DataQualityResultDescription& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>The job name associated with the data quality result.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>The job name associated with the data quality result.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>The job name associated with the data quality result.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>The job name associated with the data quality result.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>The job name associated with the data quality result.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>The job name associated with the data quality result.</p>
     */
    inline DataQualityResultDescription& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>The job name associated with the data quality result.</p>
     */
    inline DataQualityResultDescription& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>The job name associated with the data quality result.</p>
     */
    inline DataQualityResultDescription& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>The job run ID associated with the data quality result.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>The job run ID associated with the data quality result.</p>
     */
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }

    /**
     * <p>The job run ID associated with the data quality result.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }

    /**
     * <p>The job run ID associated with the data quality result.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }

    /**
     * <p>The job run ID associated with the data quality result.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }

    /**
     * <p>The job run ID associated with the data quality result.</p>
     */
    inline DataQualityResultDescription& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>The job run ID associated with the data quality result.</p>
     */
    inline DataQualityResultDescription& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>The job run ID associated with the data quality result.</p>
     */
    inline DataQualityResultDescription& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}


    /**
     * <p>The time that the run started for this data quality result.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedOn() const{ return m_startedOn; }

    /**
     * <p>The time that the run started for this data quality result.</p>
     */
    inline bool StartedOnHasBeenSet() const { return m_startedOnHasBeenSet; }

    /**
     * <p>The time that the run started for this data quality result.</p>
     */
    inline void SetStartedOn(const Aws::Utils::DateTime& value) { m_startedOnHasBeenSet = true; m_startedOn = value; }

    /**
     * <p>The time that the run started for this data quality result.</p>
     */
    inline void SetStartedOn(Aws::Utils::DateTime&& value) { m_startedOnHasBeenSet = true; m_startedOn = std::move(value); }

    /**
     * <p>The time that the run started for this data quality result.</p>
     */
    inline DataQualityResultDescription& WithStartedOn(const Aws::Utils::DateTime& value) { SetStartedOn(value); return *this;}

    /**
     * <p>The time that the run started for this data quality result.</p>
     */
    inline DataQualityResultDescription& WithStartedOn(Aws::Utils::DateTime&& value) { SetStartedOn(std::move(value)); return *this;}

  private:

    Aws::String m_resultId;
    bool m_resultIdHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedOn;
    bool m_startedOnHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
