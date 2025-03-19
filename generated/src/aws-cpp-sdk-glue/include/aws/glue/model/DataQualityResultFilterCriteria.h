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
    AWS_GLUE_API DataQualityResultFilterCriteria() = default;
    AWS_GLUE_API DataQualityResultFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API DataQualityResultFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GLUE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Filter results by the specified data source. For example, retrieving all
     * results for an Glue table.</p>
     */
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    DataQualityResultFilterCriteria& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results by the specified job name.</p>
     */
    inline const Aws::String& GetJobName() const { return m_jobName; }
    inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
    template<typename JobNameT = Aws::String>
    void SetJobName(JobNameT&& value) { m_jobNameHasBeenSet = true; m_jobName = std::forward<JobNameT>(value); }
    template<typename JobNameT = Aws::String>
    DataQualityResultFilterCriteria& WithJobName(JobNameT&& value) { SetJobName(std::forward<JobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results by the specified job run ID.</p>
     */
    inline const Aws::String& GetJobRunId() const { return m_jobRunId; }
    inline bool JobRunIdHasBeenSet() const { return m_jobRunIdHasBeenSet; }
    template<typename JobRunIdT = Aws::String>
    void SetJobRunId(JobRunIdT&& value) { m_jobRunIdHasBeenSet = true; m_jobRunId = std::forward<JobRunIdT>(value); }
    template<typename JobRunIdT = Aws::String>
    DataQualityResultFilterCriteria& WithJobRunId(JobRunIdT&& value) { SetJobRunId(std::forward<JobRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results by runs that started after this time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAfter() const { return m_startedAfter; }
    inline bool StartedAfterHasBeenSet() const { return m_startedAfterHasBeenSet; }
    template<typename StartedAfterT = Aws::Utils::DateTime>
    void SetStartedAfter(StartedAfterT&& value) { m_startedAfterHasBeenSet = true; m_startedAfter = std::forward<StartedAfterT>(value); }
    template<typename StartedAfterT = Aws::Utils::DateTime>
    DataQualityResultFilterCriteria& WithStartedAfter(StartedAfterT&& value) { SetStartedAfter(std::forward<StartedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter results by runs that started before this time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedBefore() const { return m_startedBefore; }
    inline bool StartedBeforeHasBeenSet() const { return m_startedBeforeHasBeenSet; }
    template<typename StartedBeforeT = Aws::Utils::DateTime>
    void SetStartedBefore(StartedBeforeT&& value) { m_startedBeforeHasBeenSet = true; m_startedBefore = std::forward<StartedBeforeT>(value); }
    template<typename StartedBeforeT = Aws::Utils::DateTime>
    DataQualityResultFilterCriteria& WithStartedBefore(StartedBeforeT&& value) { SetStartedBefore(std::forward<StartedBeforeT>(value)); return *this;}
    ///@}
  private:

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Aws::String m_jobName;
    bool m_jobNameHasBeenSet = false;

    Aws::String m_jobRunId;
    bool m_jobRunIdHasBeenSet = false;

    Aws::Utils::DateTime m_startedAfter{};
    bool m_startedAfterHasBeenSet = false;

    Aws::Utils::DateTime m_startedBefore{};
    bool m_startedBeforeHasBeenSet = false;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
