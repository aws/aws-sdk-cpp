/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataSourceErrorMessage.h>
#include <aws/datazone/model/DataSourceRunLineageSummary.h>
#include <aws/datazone/model/RunStatisticsForAssets.h>
#include <aws/datazone/model/DataSourceRunStatus.h>
#include <aws/datazone/model/DataSourceRunType.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of a data source run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataSourceRunSummary">AWS
   * API Reference</a></p>
   */
  class DataSourceRunSummary
  {
  public:
    AWS_DATAZONE_API DataSourceRunSummary() = default;
    AWS_DATAZONE_API DataSourceRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when a data source run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DataSourceRunSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source of the data source run.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    DataSourceRunSummary& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataSourceErrorMessage& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = DataSourceErrorMessage>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = DataSourceErrorMessage>
    DataSourceRunSummary& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source run.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DataSourceRunSummary& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The run lineage summary of a data source.</p>
     */
    inline const DataSourceRunLineageSummary& GetLineageSummary() const { return m_lineageSummary; }
    inline bool LineageSummaryHasBeenSet() const { return m_lineageSummaryHasBeenSet; }
    template<typename LineageSummaryT = DataSourceRunLineageSummary>
    void SetLineageSummary(LineageSummaryT&& value) { m_lineageSummaryHasBeenSet = true; m_lineageSummary = std::forward<LineageSummaryT>(value); }
    template<typename LineageSummaryT = DataSourceRunLineageSummary>
    DataSourceRunSummary& WithLineageSummary(LineageSummaryT&& value) { SetLineageSummary(std::forward<LineageSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project ID of the data source run.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    DataSourceRunSummary& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const RunStatisticsForAssets& GetRunStatisticsForAssets() const { return m_runStatisticsForAssets; }
    inline bool RunStatisticsForAssetsHasBeenSet() const { return m_runStatisticsForAssetsHasBeenSet; }
    template<typename RunStatisticsForAssetsT = RunStatisticsForAssets>
    void SetRunStatisticsForAssets(RunStatisticsForAssetsT&& value) { m_runStatisticsForAssetsHasBeenSet = true; m_runStatisticsForAssets = std::forward<RunStatisticsForAssetsT>(value); }
    template<typename RunStatisticsForAssetsT = RunStatisticsForAssets>
    DataSourceRunSummary& WithRunStatisticsForAssets(RunStatisticsForAssetsT&& value) { SetRunStatisticsForAssets(std::forward<RunStatisticsForAssetsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when a data source run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    DataSourceRunSummary& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data source run.</p>
     */
    inline DataSourceRunStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataSourceRunStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataSourceRunSummary& WithStatus(DataSourceRunStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when a data source run was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const { return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    template<typename StoppedAtT = Aws::Utils::DateTime>
    void SetStoppedAt(StoppedAtT&& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = std::forward<StoppedAtT>(value); }
    template<typename StoppedAtT = Aws::Utils::DateTime>
    DataSourceRunSummary& WithStoppedAt(StoppedAtT&& value) { SetStoppedAt(std::forward<StoppedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source run.</p>
     */
    inline DataSourceRunType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(DataSourceRunType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataSourceRunSummary& WithType(DataSourceRunType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when a data source run was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DataSourceRunSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    DataSourceErrorMessage m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    DataSourceRunLineageSummary m_lineageSummary;
    bool m_lineageSummaryHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    RunStatisticsForAssets m_runStatisticsForAssets;
    bool m_runStatisticsForAssetsHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    DataSourceRunStatus m_status{DataSourceRunStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedAt{};
    bool m_stoppedAtHasBeenSet = false;

    DataSourceRunType m_type{DataSourceRunType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
