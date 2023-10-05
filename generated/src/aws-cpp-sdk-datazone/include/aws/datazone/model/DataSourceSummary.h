/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/EnableSetting.h>
#include <aws/datazone/model/DataSourceErrorMessage.h>
#include <aws/datazone/model/DataSourceRunStatus.h>
#include <aws/datazone/model/ScheduleConfiguration.h>
#include <aws/datazone/model/DataSourceStatus.h>
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
   * <p>The details of the data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/DataSourceSummary">AWS
   * API Reference</a></p>
   */
  class DataSourceSummary
  {
  public:
    AWS_DATAZONE_API DataSourceSummary();
    AWS_DATAZONE_API DataSourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline DataSourceSummary& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline DataSourceSummary& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The ID of the data source.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID of the data source.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The ID of the data source.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The ID of the data source.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The ID of the data source.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The ID of the data source.</p>
     */
    inline DataSourceSummary& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID of the data source.</p>
     */
    inline DataSourceSummary& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data source.</p>
     */
    inline DataSourceSummary& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which the data source exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source exists.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source exists.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source exists.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source exists.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source exists.</p>
     */
    inline DataSourceSummary& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source exists.</p>
     */
    inline DataSourceSummary& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source exists.</p>
     */
    inline DataSourceSummary& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline const EnableSetting& GetEnableSetting() const{ return m_enableSetting; }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline bool EnableSettingHasBeenSet() const { return m_enableSettingHasBeenSet; }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline void SetEnableSetting(const EnableSetting& value) { m_enableSettingHasBeenSet = true; m_enableSetting = value; }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline void SetEnableSetting(EnableSetting&& value) { m_enableSettingHasBeenSet = true; m_enableSetting = std::move(value); }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline DataSourceSummary& WithEnableSetting(const EnableSetting& value) { SetEnableSetting(value); return *this;}

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline DataSourceSummary& WithEnableSetting(EnableSetting&& value) { SetEnableSetting(std::move(value)); return *this;}


    /**
     * <p>The ID of the environment in which the data source exists.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The ID of the environment in which the data source exists.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The ID of the environment in which the data source exists.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The ID of the environment in which the data source exists.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The ID of the environment in which the data source exists.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The ID of the environment in which the data source exists.</p>
     */
    inline DataSourceSummary& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The ID of the environment in which the data source exists.</p>
     */
    inline DataSourceSummary& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The ID of the environment in which the data source exists.</p>
     */
    inline DataSourceSummary& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The count of the assets created during the last data source run.</p>
     */
    inline int GetLastRunAssetCount() const{ return m_lastRunAssetCount; }

    /**
     * <p>The count of the assets created during the last data source run.</p>
     */
    inline bool LastRunAssetCountHasBeenSet() const { return m_lastRunAssetCountHasBeenSet; }

    /**
     * <p>The count of the assets created during the last data source run.</p>
     */
    inline void SetLastRunAssetCount(int value) { m_lastRunAssetCountHasBeenSet = true; m_lastRunAssetCount = value; }

    /**
     * <p>The count of the assets created during the last data source run.</p>
     */
    inline DataSourceSummary& WithLastRunAssetCount(int value) { SetLastRunAssetCount(value); return *this;}


    /**
     * <p>The timestamp of when the data source run was last performed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunAt() const{ return m_lastRunAt; }

    /**
     * <p>The timestamp of when the data source run was last performed.</p>
     */
    inline bool LastRunAtHasBeenSet() const { return m_lastRunAtHasBeenSet; }

    /**
     * <p>The timestamp of when the data source run was last performed.</p>
     */
    inline void SetLastRunAt(const Aws::Utils::DateTime& value) { m_lastRunAtHasBeenSet = true; m_lastRunAt = value; }

    /**
     * <p>The timestamp of when the data source run was last performed.</p>
     */
    inline void SetLastRunAt(Aws::Utils::DateTime&& value) { m_lastRunAtHasBeenSet = true; m_lastRunAt = std::move(value); }

    /**
     * <p>The timestamp of when the data source run was last performed.</p>
     */
    inline DataSourceSummary& WithLastRunAt(const Aws::Utils::DateTime& value) { SetLastRunAt(value); return *this;}

    /**
     * <p>The timestamp of when the data source run was last performed.</p>
     */
    inline DataSourceSummary& WithLastRunAt(Aws::Utils::DateTime&& value) { SetLastRunAt(std::move(value)); return *this;}


    
    inline const DataSourceErrorMessage& GetLastRunErrorMessage() const{ return m_lastRunErrorMessage; }

    
    inline bool LastRunErrorMessageHasBeenSet() const { return m_lastRunErrorMessageHasBeenSet; }

    
    inline void SetLastRunErrorMessage(const DataSourceErrorMessage& value) { m_lastRunErrorMessageHasBeenSet = true; m_lastRunErrorMessage = value; }

    
    inline void SetLastRunErrorMessage(DataSourceErrorMessage&& value) { m_lastRunErrorMessageHasBeenSet = true; m_lastRunErrorMessage = std::move(value); }

    
    inline DataSourceSummary& WithLastRunErrorMessage(const DataSourceErrorMessage& value) { SetLastRunErrorMessage(value); return *this;}

    
    inline DataSourceSummary& WithLastRunErrorMessage(DataSourceErrorMessage&& value) { SetLastRunErrorMessage(std::move(value)); return *this;}


    /**
     * <p>The status of the last data source run.</p>
     */
    inline const DataSourceRunStatus& GetLastRunStatus() const{ return m_lastRunStatus; }

    /**
     * <p>The status of the last data source run.</p>
     */
    inline bool LastRunStatusHasBeenSet() const { return m_lastRunStatusHasBeenSet; }

    /**
     * <p>The status of the last data source run.</p>
     */
    inline void SetLastRunStatus(const DataSourceRunStatus& value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus = value; }

    /**
     * <p>The status of the last data source run.</p>
     */
    inline void SetLastRunStatus(DataSourceRunStatus&& value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus = std::move(value); }

    /**
     * <p>The status of the last data source run.</p>
     */
    inline DataSourceSummary& WithLastRunStatus(const DataSourceRunStatus& value) { SetLastRunStatus(value); return *this;}

    /**
     * <p>The status of the last data source run.</p>
     */
    inline DataSourceSummary& WithLastRunStatus(DataSourceRunStatus&& value) { SetLastRunStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceSummary& WithName(const char* value) { SetName(value); return *this;}


    
    inline const ScheduleConfiguration& GetSchedule() const{ return m_schedule; }

    
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    
    inline void SetSchedule(const ScheduleConfiguration& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    
    inline void SetSchedule(ScheduleConfiguration&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    
    inline DataSourceSummary& WithSchedule(const ScheduleConfiguration& value) { SetSchedule(value); return *this;}

    
    inline DataSourceSummary& WithSchedule(ScheduleConfiguration&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The status of the data source.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data source.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the data source.</p>
     */
    inline void SetStatus(const DataSourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the data source.</p>
     */
    inline void SetStatus(DataSourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the data source.</p>
     */
    inline DataSourceSummary& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data source.</p>
     */
    inline DataSourceSummary& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the data source.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the data source.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the data source.</p>
     */
    inline DataSourceSummary& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the data source.</p>
     */
    inline DataSourceSummary& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the data source.</p>
     */
    inline DataSourceSummary& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline DataSourceSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline DataSourceSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    EnableSetting m_enableSetting;
    bool m_enableSettingHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    int m_lastRunAssetCount;
    bool m_lastRunAssetCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastRunAt;
    bool m_lastRunAtHasBeenSet = false;

    DataSourceErrorMessage m_lastRunErrorMessage;
    bool m_lastRunErrorMessageHasBeenSet = false;

    DataSourceRunStatus m_lastRunStatus;
    bool m_lastRunStatusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScheduleConfiguration m_schedule;
    bool m_scheduleHasBeenSet = false;

    DataSourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
