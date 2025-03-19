/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataAssetActivityStatus.h>
#include <aws/datazone/model/DataSourceErrorMessage.h>
#include <aws/datazone/model/LineageInfo.h>
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
   * <p>The activity details of the data source run.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataSourceRunActivity">AWS
   * API Reference</a></p>
   */
  class DataSourceRunActivity
  {
  public:
    AWS_DATAZONE_API DataSourceRunActivity() = default;
    AWS_DATAZONE_API DataSourceRunActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceRunActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when data source run activity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DataSourceRunActivity& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the asset included in the data source run activity.</p>
     */
    inline const Aws::String& GetDataAssetId() const { return m_dataAssetId; }
    inline bool DataAssetIdHasBeenSet() const { return m_dataAssetIdHasBeenSet; }
    template<typename DataAssetIdT = Aws::String>
    void SetDataAssetId(DataAssetIdT&& value) { m_dataAssetIdHasBeenSet = true; m_dataAssetId = std::forward<DataAssetIdT>(value); }
    template<typename DataAssetIdT = Aws::String>
    DataSourceRunActivity& WithDataAssetId(DataAssetIdT&& value) { SetDataAssetId(std::forward<DataAssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset included in the data source run activity.</p>
     */
    inline DataAssetActivityStatus GetDataAssetStatus() const { return m_dataAssetStatus; }
    inline bool DataAssetStatusHasBeenSet() const { return m_dataAssetStatusHasBeenSet; }
    inline void SetDataAssetStatus(DataAssetActivityStatus value) { m_dataAssetStatusHasBeenSet = true; m_dataAssetStatus = value; }
    inline DataSourceRunActivity& WithDataAssetStatus(DataAssetActivityStatus value) { SetDataAssetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source for the data source run activity.</p>
     */
    inline const Aws::String& GetDataSourceRunId() const { return m_dataSourceRunId; }
    inline bool DataSourceRunIdHasBeenSet() const { return m_dataSourceRunIdHasBeenSet; }
    template<typename DataSourceRunIdT = Aws::String>
    void SetDataSourceRunId(DataSourceRunIdT&& value) { m_dataSourceRunIdHasBeenSet = true; m_dataSourceRunId = std::forward<DataSourceRunIdT>(value); }
    template<typename DataSourceRunIdT = Aws::String>
    DataSourceRunActivity& WithDataSourceRunId(DataSourceRunIdT&& value) { SetDataSourceRunId(std::forward<DataSourceRunIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database included in the data source run activity.</p>
     */
    inline const Aws::String& GetDatabase() const { return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    template<typename DatabaseT = Aws::String>
    void SetDatabase(DatabaseT&& value) { m_databaseHasBeenSet = true; m_database = std::forward<DatabaseT>(value); }
    template<typename DatabaseT = Aws::String>
    DataSourceRunActivity& WithDatabase(DatabaseT&& value) { SetDatabase(std::forward<DatabaseT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataSourceErrorMessage& GetErrorMessage() const { return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    template<typename ErrorMessageT = DataSourceErrorMessage>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = DataSourceErrorMessage>
    DataSourceRunActivity& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data lineage summary.</p>
     */
    inline const LineageInfo& GetLineageSummary() const { return m_lineageSummary; }
    inline bool LineageSummaryHasBeenSet() const { return m_lineageSummaryHasBeenSet; }
    template<typename LineageSummaryT = LineageInfo>
    void SetLineageSummary(LineageSummaryT&& value) { m_lineageSummaryHasBeenSet = true; m_lineageSummary = std::forward<LineageSummaryT>(value); }
    template<typename LineageSummaryT = LineageInfo>
    DataSourceRunActivity& WithLineageSummary(LineageSummaryT&& value) { SetLineageSummary(std::forward<LineageSummaryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project ID included in the data source run activity.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    DataSourceRunActivity& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The technical description included in the data source run activity.</p>
     */
    inline const Aws::String& GetTechnicalDescription() const { return m_technicalDescription; }
    inline bool TechnicalDescriptionHasBeenSet() const { return m_technicalDescriptionHasBeenSet; }
    template<typename TechnicalDescriptionT = Aws::String>
    void SetTechnicalDescription(TechnicalDescriptionT&& value) { m_technicalDescriptionHasBeenSet = true; m_technicalDescription = std::forward<TechnicalDescriptionT>(value); }
    template<typename TechnicalDescriptionT = Aws::String>
    DataSourceRunActivity& WithTechnicalDescription(TechnicalDescriptionT&& value) { SetTechnicalDescription(std::forward<TechnicalDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The technical name included in the data source run activity.</p>
     */
    inline const Aws::String& GetTechnicalName() const { return m_technicalName; }
    inline bool TechnicalNameHasBeenSet() const { return m_technicalNameHasBeenSet; }
    template<typename TechnicalNameT = Aws::String>
    void SetTechnicalName(TechnicalNameT&& value) { m_technicalNameHasBeenSet = true; m_technicalName = std::forward<TechnicalNameT>(value); }
    template<typename TechnicalNameT = Aws::String>
    DataSourceRunActivity& WithTechnicalName(TechnicalNameT&& value) { SetTechnicalName(std::forward<TechnicalNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when data source run activity was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DataSourceRunActivity& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataAssetId;
    bool m_dataAssetIdHasBeenSet = false;

    DataAssetActivityStatus m_dataAssetStatus{DataAssetActivityStatus::NOT_SET};
    bool m_dataAssetStatusHasBeenSet = false;

    Aws::String m_dataSourceRunId;
    bool m_dataSourceRunIdHasBeenSet = false;

    Aws::String m_database;
    bool m_databaseHasBeenSet = false;

    DataSourceErrorMessage m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    LineageInfo m_lineageSummary;
    bool m_lineageSummaryHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_technicalDescription;
    bool m_technicalDescriptionHasBeenSet = false;

    Aws::String m_technicalName;
    bool m_technicalNameHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
