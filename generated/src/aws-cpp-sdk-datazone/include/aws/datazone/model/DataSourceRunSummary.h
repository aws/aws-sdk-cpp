/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DataSourceErrorMessage.h>
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
    AWS_DATAZONE_API DataSourceRunSummary();
    AWS_DATAZONE_API DataSourceRunSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceRunSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when a data source run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when a data source run was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when a data source run was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when a data source run was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when a data source run was created.</p>
     */
    inline DataSourceRunSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when a data source run was created.</p>
     */
    inline DataSourceRunSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The identifier of the data source of the data source run.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the data source of the data source run.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The identifier of the data source of the data source run.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source of the data source run.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source of the data source run.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source of the data source run.</p>
     */
    inline DataSourceRunSummary& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source of the data source run.</p>
     */
    inline DataSourceRunSummary& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source of the data source run.</p>
     */
    inline DataSourceRunSummary& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    
    inline const DataSourceErrorMessage& GetErrorMessage() const{ return m_errorMessage; }

    
    inline bool ErrorMessageHasBeenSet() const { return m_errorMessageHasBeenSet; }

    
    inline void SetErrorMessage(const DataSourceErrorMessage& value) { m_errorMessageHasBeenSet = true; m_errorMessage = value; }

    
    inline void SetErrorMessage(DataSourceErrorMessage&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::move(value); }

    
    inline DataSourceRunSummary& WithErrorMessage(const DataSourceErrorMessage& value) { SetErrorMessage(value); return *this;}

    
    inline DataSourceRunSummary& WithErrorMessage(DataSourceErrorMessage&& value) { SetErrorMessage(std::move(value)); return *this;}


    /**
     * <p>The identifier of the data source run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline DataSourceRunSummary& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline DataSourceRunSummary& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline DataSourceRunSummary& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The project ID of the data source run.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The project ID of the data source run.</p>
     */
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }

    /**
     * <p>The project ID of the data source run.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }

    /**
     * <p>The project ID of the data source run.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }

    /**
     * <p>The project ID of the data source run.</p>
     */
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }

    /**
     * <p>The project ID of the data source run.</p>
     */
    inline DataSourceRunSummary& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The project ID of the data source run.</p>
     */
    inline DataSourceRunSummary& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The project ID of the data source run.</p>
     */
    inline DataSourceRunSummary& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    
    inline const RunStatisticsForAssets& GetRunStatisticsForAssets() const{ return m_runStatisticsForAssets; }

    
    inline bool RunStatisticsForAssetsHasBeenSet() const { return m_runStatisticsForAssetsHasBeenSet; }

    
    inline void SetRunStatisticsForAssets(const RunStatisticsForAssets& value) { m_runStatisticsForAssetsHasBeenSet = true; m_runStatisticsForAssets = value; }

    
    inline void SetRunStatisticsForAssets(RunStatisticsForAssets&& value) { m_runStatisticsForAssetsHasBeenSet = true; m_runStatisticsForAssets = std::move(value); }

    
    inline DataSourceRunSummary& WithRunStatisticsForAssets(const RunStatisticsForAssets& value) { SetRunStatisticsForAssets(value); return *this;}

    
    inline DataSourceRunSummary& WithRunStatisticsForAssets(RunStatisticsForAssets&& value) { SetRunStatisticsForAssets(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when a data source run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The timestamp of when a data source run was started.</p>
     */
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }

    /**
     * <p>The timestamp of when a data source run was started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }

    /**
     * <p>The timestamp of when a data source run was started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }

    /**
     * <p>The timestamp of when a data source run was started.</p>
     */
    inline DataSourceRunSummary& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The timestamp of when a data source run was started.</p>
     */
    inline DataSourceRunSummary& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the data source run.</p>
     */
    inline const DataSourceRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data source run.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the data source run.</p>
     */
    inline void SetStatus(const DataSourceRunStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the data source run.</p>
     */
    inline void SetStatus(DataSourceRunStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the data source run.</p>
     */
    inline DataSourceRunSummary& WithStatus(const DataSourceRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data source run.</p>
     */
    inline DataSourceRunSummary& WithStatus(DataSourceRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when a data source run was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The timestamp of when a data source run was stopped.</p>
     */
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }

    /**
     * <p>The timestamp of when a data source run was stopped.</p>
     */
    inline void SetStoppedAt(const Aws::Utils::DateTime& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }

    /**
     * <p>The timestamp of when a data source run was stopped.</p>
     */
    inline void SetStoppedAt(Aws::Utils::DateTime&& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = std::move(value); }

    /**
     * <p>The timestamp of when a data source run was stopped.</p>
     */
    inline DataSourceRunSummary& WithStoppedAt(const Aws::Utils::DateTime& value) { SetStoppedAt(value); return *this;}

    /**
     * <p>The timestamp of when a data source run was stopped.</p>
     */
    inline DataSourceRunSummary& WithStoppedAt(Aws::Utils::DateTime&& value) { SetStoppedAt(std::move(value)); return *this;}


    /**
     * <p>The type of the data source run.</p>
     */
    inline const DataSourceRunType& GetType() const{ return m_type; }

    /**
     * <p>The type of the data source run.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the data source run.</p>
     */
    inline void SetType(const DataSourceRunType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the data source run.</p>
     */
    inline void SetType(DataSourceRunType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the data source run.</p>
     */
    inline DataSourceRunSummary& WithType(const DataSourceRunType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the data source run.</p>
     */
    inline DataSourceRunSummary& WithType(DataSourceRunType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when a data source run was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when a data source run was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when a data source run was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when a data source run was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when a data source run was updated.</p>
     */
    inline DataSourceRunSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when a data source run was updated.</p>
     */
    inline DataSourceRunSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    DataSourceErrorMessage m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    RunStatisticsForAssets m_runStatisticsForAssets;
    bool m_runStatisticsForAssetsHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    DataSourceRunStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedAt;
    bool m_stoppedAtHasBeenSet = false;

    DataSourceRunType m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
