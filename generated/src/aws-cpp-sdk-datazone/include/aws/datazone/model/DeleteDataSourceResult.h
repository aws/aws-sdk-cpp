/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/DataSourceConfigurationOutput.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/datazone/model/EnableSetting.h>
#include <aws/datazone/model/DataSourceErrorMessage.h>
#include <aws/datazone/model/DataSourceRunStatus.h>
#include <aws/datazone/model/ScheduleConfiguration.h>
#include <aws/datazone/model/SelfGrantStatusOutput.h>
#include <aws/datazone/model/DataSourceStatus.h>
#include <aws/datazone/model/FormOutput.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DataZone
{
namespace Model
{
  class DeleteDataSourceResult
  {
  public:
    AWS_DATAZONE_API DeleteDataSourceResult() = default;
    AWS_DATAZONE_API DeleteDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API DeleteDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The asset data forms associated with this data source.</p>
     */
    inline const Aws::Vector<FormOutput>& GetAssetFormsOutput() const { return m_assetFormsOutput; }
    template<typename AssetFormsOutputT = Aws::Vector<FormOutput>>
    void SetAssetFormsOutput(AssetFormsOutputT&& value) { m_assetFormsOutputHasBeenSet = true; m_assetFormsOutput = std::forward<AssetFormsOutputT>(value); }
    template<typename AssetFormsOutputT = Aws::Vector<FormOutput>>
    DeleteDataSourceResult& WithAssetFormsOutput(AssetFormsOutputT&& value) { SetAssetFormsOutput(std::forward<AssetFormsOutputT>(value)); return *this;}
    template<typename AssetFormsOutputT = FormOutput>
    DeleteDataSourceResult& AddAssetFormsOutput(AssetFormsOutputT&& value) { m_assetFormsOutputHasBeenSet = true; m_assetFormsOutput.emplace_back(std::forward<AssetFormsOutputT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the data source that is deleted.</p>
     */
    inline const DataSourceConfigurationOutput& GetConfiguration() const { return m_configuration; }
    template<typename ConfigurationT = DataSourceConfigurationOutput>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = DataSourceConfigurationOutput>
    DeleteDataSourceResult& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the connection that is deleted.</p>
     */
    inline const Aws::String& GetConnectionId() const { return m_connectionId; }
    template<typename ConnectionIdT = Aws::String>
    void SetConnectionId(ConnectionIdT&& value) { m_connectionIdHasBeenSet = true; m_connectionId = std::forward<ConnectionIdT>(value); }
    template<typename ConnectionIdT = Aws::String>
    DeleteDataSourceResult& WithConnectionId(ConnectionIdT&& value) { SetConnectionId(std::forward<ConnectionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when this data source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DeleteDataSourceResult& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data source that is deleted.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DeleteDataSourceResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the data source is deleted.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    DeleteDataSourceResult& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The enable setting of the data source that specifies whether the data source
     * is enabled or disabled.</p>
     */
    inline EnableSetting GetEnableSetting() const { return m_enableSetting; }
    inline void SetEnableSetting(EnableSetting value) { m_enableSettingHasBeenSet = true; m_enableSetting = value; }
    inline DeleteDataSourceResult& WithEnableSetting(EnableSetting value) { SetEnableSetting(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environemnt associated with this data source.</p>
     */
    inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
    template<typename EnvironmentIdT = Aws::String>
    void SetEnvironmentId(EnvironmentIdT&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::forward<EnvironmentIdT>(value); }
    template<typename EnvironmentIdT = Aws::String>
    DeleteDataSourceResult& WithEnvironmentId(EnvironmentIdT&& value) { SetEnvironmentId(std::forward<EnvironmentIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const DataSourceErrorMessage& GetErrorMessage() const { return m_errorMessage; }
    template<typename ErrorMessageT = DataSourceErrorMessage>
    void SetErrorMessage(ErrorMessageT&& value) { m_errorMessageHasBeenSet = true; m_errorMessage = std::forward<ErrorMessageT>(value); }
    template<typename ErrorMessageT = DataSourceErrorMessage>
    DeleteDataSourceResult& WithErrorMessage(ErrorMessageT&& value) { SetErrorMessage(std::forward<ErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data source that is deleted.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DeleteDataSourceResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data source was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunAt() const { return m_lastRunAt; }
    template<typename LastRunAtT = Aws::Utils::DateTime>
    void SetLastRunAt(LastRunAtT&& value) { m_lastRunAtHasBeenSet = true; m_lastRunAt = std::forward<LastRunAtT>(value); }
    template<typename LastRunAtT = Aws::Utils::DateTime>
    DeleteDataSourceResult& WithLastRunAt(LastRunAtT&& value) { SetLastRunAt(std::forward<LastRunAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const DataSourceErrorMessage& GetLastRunErrorMessage() const { return m_lastRunErrorMessage; }
    template<typename LastRunErrorMessageT = DataSourceErrorMessage>
    void SetLastRunErrorMessage(LastRunErrorMessageT&& value) { m_lastRunErrorMessageHasBeenSet = true; m_lastRunErrorMessage = std::forward<LastRunErrorMessageT>(value); }
    template<typename LastRunErrorMessageT = DataSourceErrorMessage>
    DeleteDataSourceResult& WithLastRunErrorMessage(LastRunErrorMessageT&& value) { SetLastRunErrorMessage(std::forward<LastRunErrorMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last run of this data source.</p>
     */
    inline DataSourceRunStatus GetLastRunStatus() const { return m_lastRunStatus; }
    inline void SetLastRunStatus(DataSourceRunStatus value) { m_lastRunStatusHasBeenSet = true; m_lastRunStatus = value; }
    inline DeleteDataSourceResult& WithLastRunStatus(DataSourceRunStatus value) { SetLastRunStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data source that is deleted.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DeleteDataSourceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project in which this data source exists and from which it's
     * deleted.</p>
     */
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    DeleteDataSourceResult& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the assets that this data source creates in the inventory
     * are to be also automatically published to the catalog.</p>
     */
    inline bool GetPublishOnImport() const { return m_publishOnImport; }
    inline void SetPublishOnImport(bool value) { m_publishOnImportHasBeenSet = true; m_publishOnImport = value; }
    inline DeleteDataSourceResult& WithPublishOnImport(bool value) { SetPublishOnImport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies that the granted permissions are retained in case of a
     * self-subscribe functionality failure for a data source.</p>
     */
    inline bool GetRetainPermissionsOnRevokeFailure() const { return m_retainPermissionsOnRevokeFailure; }
    inline void SetRetainPermissionsOnRevokeFailure(bool value) { m_retainPermissionsOnRevokeFailureHasBeenSet = true; m_retainPermissionsOnRevokeFailure = value; }
    inline DeleteDataSourceResult& WithRetainPermissionsOnRevokeFailure(bool value) { SetRetainPermissionsOnRevokeFailure(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule of runs for this data source.</p>
     */
    inline const ScheduleConfiguration& GetSchedule() const { return m_schedule; }
    template<typename ScheduleT = ScheduleConfiguration>
    void SetSchedule(ScheduleT&& value) { m_scheduleHasBeenSet = true; m_schedule = std::forward<ScheduleT>(value); }
    template<typename ScheduleT = ScheduleConfiguration>
    DeleteDataSourceResult& WithSchedule(ScheduleT&& value) { SetSchedule(std::forward<ScheduleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the self-granting functionality.</p>
     */
    inline const SelfGrantStatusOutput& GetSelfGrantStatus() const { return m_selfGrantStatus; }
    template<typename SelfGrantStatusT = SelfGrantStatusOutput>
    void SetSelfGrantStatus(SelfGrantStatusT&& value) { m_selfGrantStatusHasBeenSet = true; m_selfGrantStatus = std::forward<SelfGrantStatusT>(value); }
    template<typename SelfGrantStatusT = SelfGrantStatusOutput>
    DeleteDataSourceResult& WithSelfGrantStatus(SelfGrantStatusT&& value) { SetSelfGrantStatus(std::forward<SelfGrantStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this data source.</p>
     */
    inline DataSourceStatus GetStatus() const { return m_status; }
    inline void SetStatus(DataSourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DeleteDataSourceResult& WithStatus(DataSourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of this data source.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    DeleteDataSourceResult& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when this data source was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DeleteDataSourceResult& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteDataSourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FormOutput> m_assetFormsOutput;
    bool m_assetFormsOutputHasBeenSet = false;

    DataSourceConfigurationOutput m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_connectionId;
    bool m_connectionIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    EnableSetting m_enableSetting{EnableSetting::NOT_SET};
    bool m_enableSettingHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    DataSourceErrorMessage m_errorMessage;
    bool m_errorMessageHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_lastRunAt{};
    bool m_lastRunAtHasBeenSet = false;

    DataSourceErrorMessage m_lastRunErrorMessage;
    bool m_lastRunErrorMessageHasBeenSet = false;

    DataSourceRunStatus m_lastRunStatus{DataSourceRunStatus::NOT_SET};
    bool m_lastRunStatusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    bool m_publishOnImport{false};
    bool m_publishOnImportHasBeenSet = false;

    bool m_retainPermissionsOnRevokeFailure{false};
    bool m_retainPermissionsOnRevokeFailureHasBeenSet = false;

    ScheduleConfiguration m_schedule;
    bool m_scheduleHasBeenSet = false;

    SelfGrantStatusOutput m_selfGrantStatus;
    bool m_selfGrantStatusHasBeenSet = false;

    DataSourceStatus m_status{DataSourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
