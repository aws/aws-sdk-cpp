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
    AWS_DATAZONE_API DataSourceRunActivity();
    AWS_DATAZONE_API DataSourceRunActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceRunActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of when data source run activity was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline DataSourceRunActivity& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline DataSourceRunActivity& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the asset included in the data source run activity.</p>
     */
    inline const Aws::String& GetDataAssetId() const{ return m_dataAssetId; }
    inline bool DataAssetIdHasBeenSet() const { return m_dataAssetIdHasBeenSet; }
    inline void SetDataAssetId(const Aws::String& value) { m_dataAssetIdHasBeenSet = true; m_dataAssetId = value; }
    inline void SetDataAssetId(Aws::String&& value) { m_dataAssetIdHasBeenSet = true; m_dataAssetId = std::move(value); }
    inline void SetDataAssetId(const char* value) { m_dataAssetIdHasBeenSet = true; m_dataAssetId.assign(value); }
    inline DataSourceRunActivity& WithDataAssetId(const Aws::String& value) { SetDataAssetId(value); return *this;}
    inline DataSourceRunActivity& WithDataAssetId(Aws::String&& value) { SetDataAssetId(std::move(value)); return *this;}
    inline DataSourceRunActivity& WithDataAssetId(const char* value) { SetDataAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset included in the data source run activity.</p>
     */
    inline const DataAssetActivityStatus& GetDataAssetStatus() const{ return m_dataAssetStatus; }
    inline bool DataAssetStatusHasBeenSet() const { return m_dataAssetStatusHasBeenSet; }
    inline void SetDataAssetStatus(const DataAssetActivityStatus& value) { m_dataAssetStatusHasBeenSet = true; m_dataAssetStatus = value; }
    inline void SetDataAssetStatus(DataAssetActivityStatus&& value) { m_dataAssetStatusHasBeenSet = true; m_dataAssetStatus = std::move(value); }
    inline DataSourceRunActivity& WithDataAssetStatus(const DataAssetActivityStatus& value) { SetDataAssetStatus(value); return *this;}
    inline DataSourceRunActivity& WithDataAssetStatus(DataAssetActivityStatus&& value) { SetDataAssetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the data source for the data source run activity.</p>
     */
    inline const Aws::String& GetDataSourceRunId() const{ return m_dataSourceRunId; }
    inline bool DataSourceRunIdHasBeenSet() const { return m_dataSourceRunIdHasBeenSet; }
    inline void SetDataSourceRunId(const Aws::String& value) { m_dataSourceRunIdHasBeenSet = true; m_dataSourceRunId = value; }
    inline void SetDataSourceRunId(Aws::String&& value) { m_dataSourceRunIdHasBeenSet = true; m_dataSourceRunId = std::move(value); }
    inline void SetDataSourceRunId(const char* value) { m_dataSourceRunIdHasBeenSet = true; m_dataSourceRunId.assign(value); }
    inline DataSourceRunActivity& WithDataSourceRunId(const Aws::String& value) { SetDataSourceRunId(value); return *this;}
    inline DataSourceRunActivity& WithDataSourceRunId(Aws::String&& value) { SetDataSourceRunId(std::move(value)); return *this;}
    inline DataSourceRunActivity& WithDataSourceRunId(const char* value) { SetDataSourceRunId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database included in the data source run activity.</p>
     */
    inline const Aws::String& GetDatabase() const{ return m_database; }
    inline bool DatabaseHasBeenSet() const { return m_databaseHasBeenSet; }
    inline void SetDatabase(const Aws::String& value) { m_databaseHasBeenSet = true; m_database = value; }
    inline void SetDatabase(Aws::String&& value) { m_databaseHasBeenSet = true; m_database = std::move(value); }
    inline void SetDatabase(const char* value) { m_databaseHasBeenSet = true; m_database.assign(value); }
    inline DataSourceRunActivity& WithDatabase(const Aws::String& value) { SetDatabase(value); return *this;}
    inline DataSourceRunActivity& WithDatabase(Aws::String&& value) { SetDatabase(std::move(value)); return *this;}
    inline DataSourceRunActivity& WithDatabase(const char* value) { SetDatabase(value); return *this;}
    ///@}

    ///@{
    
    inline const DataSourceErrorMessage& GetErrorMessage() const{ return m_errorMessage; }
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }
    inline void SetErrorMessage(const DataSourceErrorMessage& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }
    inline void SetErrorMessage(DataSourceErrorMessage&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }
    inline DataSourceRunActivity& WithErrorMessage(const DataSourceErrorMessage& value) { SetErrorMessage(value); return *this;}
    inline DataSourceRunActivity& WithErrorMessage(DataSourceErrorMessage&& value) { SetErrorMessage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data lineage summary.</p>
     */
    inline const LineageInfo& GetLineageSummary() const{ return m_lineageSummary; }
    inline bool LineageSummaryHasBeenSet() const { return m_lineageSummaryHasBeenSet; }
    inline void SetLineageSummary(const LineageInfo& value) { m_lineageSummaryHasBeenSet = true; m_lineageSummary = value; }
    inline void SetLineageSummary(LineageInfo&& value) { m_lineageSummaryHasBeenSet = true; m_lineageSummary = std::move(value); }
    inline DataSourceRunActivity& WithLineageSummary(const LineageInfo& value) { SetLineageSummary(value); return *this;}
    inline DataSourceRunActivity& WithLineageSummary(LineageInfo&& value) { SetLineageSummary(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The project ID included in the data source run activity.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }
    inline DataSourceRunActivity& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline DataSourceRunActivity& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline DataSourceRunActivity& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The technical description included in the data source run activity.</p>
     */
    inline const Aws::String& GetTechnicalDescription() const{ return m_technicalDescription; }
    inline bool TechnicalDescriptionHasBeenSet() const { return m_technicalDescriptionHasBeenSet; }
    inline void SetTechnicalDescription(const Aws::String& value) { m_technicalDescriptionHasBeenSet = true; m_technicalDescription = value; }
    inline void SetTechnicalDescription(Aws::String&& value) { m_technicalDescriptionHasBeenSet = true; m_technicalDescription = std::move(value); }
    inline void SetTechnicalDescription(const char* value) { m_technicalDescriptionHasBeenSet = true; m_technicalDescription.assign(value); }
    inline DataSourceRunActivity& WithTechnicalDescription(const Aws::String& value) { SetTechnicalDescription(value); return *this;}
    inline DataSourceRunActivity& WithTechnicalDescription(Aws::String&& value) { SetTechnicalDescription(std::move(value)); return *this;}
    inline DataSourceRunActivity& WithTechnicalDescription(const char* value) { SetTechnicalDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The technical name included in the data source run activity.</p>
     */
    inline const Aws::String& GetTechnicalName() const{ return m_technicalName; }
    inline bool TechnicalNameHasBeenSet() const { return m_technicalNameHasBeenSet; }
    inline void SetTechnicalName(const Aws::String& value) { m_technicalNameHasBeenSet = true; m_technicalName = value; }
    inline void SetTechnicalName(Aws::String&& value) { m_technicalNameHasBeenSet = true; m_technicalName = std::move(value); }
    inline void SetTechnicalName(const char* value) { m_technicalNameHasBeenSet = true; m_technicalName.assign(value); }
    inline DataSourceRunActivity& WithTechnicalName(const Aws::String& value) { SetTechnicalName(value); return *this;}
    inline DataSourceRunActivity& WithTechnicalName(Aws::String&& value) { SetTechnicalName(std::move(value)); return *this;}
    inline DataSourceRunActivity& WithTechnicalName(const char* value) { SetTechnicalName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when data source run activity was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline DataSourceRunActivity& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline DataSourceRunActivity& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataAssetId;
    bool m_dataAssetIdHasBeenSet = false;

    DataAssetActivityStatus m_dataAssetStatus;
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

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
