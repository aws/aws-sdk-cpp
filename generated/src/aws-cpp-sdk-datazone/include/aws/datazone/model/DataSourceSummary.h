/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
    AWS_DATAZONE_API DataSourceSummary() = default;
    AWS_DATAZONE_API DataSourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API DataSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The connection ID that's part of the data source summary.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    inline bool ConnectionIdHasBeenSet() const { return m_connectionIdHasBeenSet; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    DataSourceSummary& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DataSourceSummary& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data source.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    DataSourceSummary& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data source description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataSourceSummary& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the data source exists.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    DataSourceSummary& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline EnableSetting GetEnableSetting() const { return m_enableSetting; }
    inline bool EnableSettingHasBeenSet() const { return m_enableSettingHasBeenSet; }
    inline void SetEnableSetting(EnableSetting value) { m_enableSettingHasBeenSet = true; m_enableSetting = value; }
    inline DataSourceSummary& WithEnableSetting(EnableSetting value) { SetEnableSetting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment in which the data source exists.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    DataSourceSummary& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The count of the assets created during the last data source run.</p>
     */
    inline int GetLastRunAssetCount() const { return m_lastRunAssetCount; }
    inline bool LastRunAssetCountHasBeenSet() const { return m_lastRunAssetCountHasBeenSet; }
    inline void SetLastRunAssetCount(int value) { m_lastRunAssetCountHasBeenSet = true; m_lastRunAssetCount = value; }
    inline DataSourceSummary& WithLastRunAssetCount(int value) { SetLastRunAssetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data source run was last performed.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunAt() const { return m_lastRunAt; }
    inline bool LastRunAtHasBeenSet() const { return m_lastRunAtHasBeenSet; }
    template<typename LastRunAtT = Aws::Utils::DateTime>
    void SetLastRunAt(LastRunAtT&& value) { m_lastRunAtHasBeenSet = true; m_lastRunAt = std::forward<LastRunAtT>(value); }
    template<typename LastRunAtT = Aws::Utils::DateTime>
    DataSourceSummary& WithLastRunAt(LastRunAtT&& value) { SetLastRunAt(std::forward<LastRunAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const DataSourceErrorMessage& GetLastRunErrorMessage() const { return m_lastRunErrorMessage; }
    inline bool LastRunErrorMessageHasBeenSet() const { return m_lastRunErrorMessageHasBeenSet; }
    template<typename LastRunErrorMessageT = DataSourceErrorMessage>
    void SetLastRunErrorMessage(LastRunErrorMessageT&& value) { m_lastRunErrorMessageHasBeenSet = true; m_lastRunErrorMessage = std::forward<LastRunErrorMessageT>(value); }
    template<typename LastRunErrorMessageT = DataSourceErrorMessage>
    DataSourceSummary& WithLastRunErrorMessage(LastRunErrorMessageT&& value) { SetLastRunErrorMessage(std::forward<LastRunErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last data source run.</p>
     */
    inline DataSourceRunStatus GetLastRunStatus() const { return m_lastRunStatus; }
    inline bool LastRunStatusHasBeenSet() const { return m_lastRunStatusHasBeenSet; }
    inline void SetLastRunStatus(DataSourceRunStatus value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus = value; }
    inline DataSourceSummary& WithLastRunStatus(DataSourceRunStatus value) { SetLastRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSourceSummary& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ScheduleConfiguration& GetSchedule() const { return m_schedule; }
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }
    template<typename ScheduleT = ScheduleConfiguration>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = ScheduleConfiguration>
    DataSourceSummary& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data source.</p>
     */
    inline DataSourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataSourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataSourceSummary& WithStatus(DataSourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    DataSourceSummary& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DataSourceSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    EnableSetting m_enableSetting{EnableSetting::NOT_SET};
    bool m_enableSettingHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    int m_lastRunAssetCount{0};
    bool m_lastRunAssetCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastRunAt{};
    bool m_lastRunAtHasBeenSet = false;

    DataSourceErrorMessage m_lastRunErrorMessage;
    bool m_lastRunErrorMessageHasBeenSet = false;

    DataSourceRunStatus m_lastRunStatus{DataSourceRunStatus::NOT_SET};
    bool m_lastRunStatusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ScheduleConfiguration m_schedule;
    bool m_scheduleHasBeenSet = false;

    DataSourceStatus m_status{DataSourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
