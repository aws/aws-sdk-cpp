/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/glue/model/DataSource.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Criteria used to return data quality results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/glue-2017-03-31/DataQualityResultFilterCriteria">AWS
   * API Reference</a></p>
   */
  class DataQualityResultFilterCriteria
  {
  public:
    AWS_GLUE_API DataQualityResultFilterCriteria();
    AWS_GLUE_API DataQualityResultFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityResultFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Filter results by the specified data source. For example, retrieving all
     * results for an Glue table.</p>
     */
    inline const DataSource& GetDataSource() const{ return m_dataSource; }

    /**
     * <p>Filter results by the specified data source. For example, retrieving all
     * results for an Glue table.</p>
     */
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }

    /**
     * <p>Filter results by the specified data source. For example, retrieving all
     * results for an Glue table.</p>
     */
    inline void SetDataSource(const DataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }

    /**
     * <p>Filter results by the specified data source. For example, retrieving all
     * results for an Glue table.</p>
     */
    inline void SetDataSource(DataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }

    /**
     * <p>Filter results by the specified data source. For example, retrieving all
     * results for an Glue table.</p>
     */
    inline DataQualityResultFilterCriteria& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}

    /**
     * <p>Filter results by the specified data source. For example, retrieving all
     * results for an Glue table.</p>
     */
    inline DataQualityResultFilterCriteria& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}


    /**
     * <p>Filter results by the specified job name.</p>
     */
    inline const Aws::String& GetJobName() const{ return m_jobName; }

    /**
     * <p>Filter results by the specified job name.</p>
     */
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }

    /**
     * <p>Filter results by the specified job name.</p>
     */
    inline void SetJobName(const Aws::String& value) { m_jobNameHasBeenSet = true; m_jobName = value; }

    /**
     * <p>Filter results by the specified job name.</p>
     */
    inline void SetJobName(Aws::String&& value) { m_jobNameHasBeenSet = true; m_jobName = std::move(value); }

    /**
     * <p>Filter results by the specified job name.</p>
     */
    inline void SetJobName(const char* value) { m_jobNameHasBeenSet = true; m_jobName.assign(value); }

    /**
     * <p>Filter results by the specified job name.</p>
     */
    inline DataQualityResultFilterCriteria& WithJobName(const Aws::String& value) { SetJobName(value); return *this;}

    /**
     * <p>Filter results by the specified job name.</p>
     */
    inline DataQualityResultFilterCriteria& WithJobName(Aws::String&& value) { SetJobName(std::move(value)); return *this;}

    /**
     * <p>Filter results by the specified job name.</p>
     */
    inline DataQualityResultFilterCriteria& WithJobName(const char* value) { SetJobName(value); return *this;}


    /**
     * <p>Filter results by the specified job run ID.</p>
     */
    inline const Aws::String& GetJobRunId() const{ return m_jobRunId; }

    /**
     * <p>Filter results by the specified job run ID.</p>
     */
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }

    /**
     * <p>Filter results by the specified job run ID.</p>
     */
    inline void SetJobRunId(const Aws::String& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = value; }

    /**
     * <p>Filter results by the specified job run ID.</p>
     */
    inline void SetJobRunId(Aws::String&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::move(value); }

    /**
     * <p>Filter results by the specified job run ID.</p>
     */
    inline void SetJobRunId(const char* value) { m_jobRunIdHasBeenSet = true; m_jobRunId.assign(value); }

    /**
     * <p>Filter results by the specified job run ID.</p>
     */
    inline DataQualityResultFilterCriteria& WithJobRunId(const Aws::String& value) { SetJobRunId(value); return *this;}

    /**
     * <p>Filter results by the specified job run ID.</p>
     */
    inline DataQualityResultFilterCriteria& WithJobRunId(Aws::String&& value) { SetJobRunId(std::move(value)); return *this;}

    /**
     * <p>Filter results by the specified job run ID.</p>
     */
    inline DataQualityResultFilterCriteria& WithJobRunId(const char* value) { SetJobRunId(value); return *this;}


    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAfter() const{ return m_startedAfter; }

    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }

    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline void SetStartedAfter(const Aws::Utils::DateTime& value) { m_startedAfterHasBeenSet = true; m_startedAfter = value; }

    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline void SetStartedAfter(Aws::Utils::DateTime&& value) { m_startedAfterHasBeenSet = true; m_startedAfter = std::move(value); }

    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline DataQualityResultFilterCriteria& WithStartedAfter(const Aws::Utils::DateTime& value) { SetStartedAfter(value); return *this;}

    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline DataQualityResultFilterCriteria& WithStartedAfter(Aws::Utils::DateTime&& value) { SetStartedAfter(std::move(value)); return *this;}


    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedBefore() const{ return m_startedBefore; }

    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }

    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline void SetStartedBefore(const Aws::Utils::DateTime& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = value; }

    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline void SetStartedBefore(Aws::Utils::DateTime&& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = std::move(value); }

    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline DataQualityResultFilterCriteria& WithStartedBefore(const Aws::Utils::DateTime& value) { SetStartedBefore(value); return *this;}

    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline DataQualityResultFilterCriteria& WithStartedBefore(Aws::Utils::DateTime&& value) { SetStartedBefore(std::move(value)); return *this;}

  private:

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedAfter;
    bool m_startedAfterHasBeenSet = false;

    Aws::Utils::DateTime m_startedBefore;
    bool m_startedBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
