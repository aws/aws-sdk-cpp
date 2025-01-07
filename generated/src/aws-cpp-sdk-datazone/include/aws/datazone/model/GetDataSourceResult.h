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
#include <aws/datazone/model/RecommendationConfiguration.h>
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
  class GetDataSourceResult
  {
  public:
    AWS_DATAZONE_API GetDataSourceResult();
    AWS_DATAZONE_API GetDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The metadata forms attached to the assets created by this data source.</p>
     */
    inline const Aws::Vector<FormOutput>& GetAssetFormsOutput() const{ return m_assetFormsOutput; }
    inline void SetAssetFormsOutput(const Aws::Vector<FormOutput>& value) { m_assetFormsOutput = value; }
    inline void SetAssetFormsOutput(Aws::Vector<FormOutput>&& value) { m_assetFormsOutput = std::move(value); }
    inline GetDataSourceResult& WithAssetFormsOutput(const Aws::Vector<FormOutput>& value) { SetAssetFormsOutput(value); return *this;}
    inline GetDataSourceResult& WithAssetFormsOutput(Aws::Vector<FormOutput>&& value) { SetAssetFormsOutput(std::move(value)); return *this;}
    inline GetDataSourceResult& AddAssetFormsOutput(const FormOutput& value) { m_assetFormsOutput.push_back(value); return *this; }
    inline GetDataSourceResult& AddAssetFormsOutput(FormOutput&& value) { m_assetFormsOutput.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The configuration of the data source.</p>
     */
    inline const DataSourceConfigurationOutput& GetConfiguration() const{ return m_configuration; }
    inline void SetConfiguration(const DataSourceConfigurationOutput& value) { m_configuration = value; }
    inline void SetConfiguration(DataSourceConfigurationOutput&& value) { m_configuration = std::move(value); }
    inline GetDataSourceResult& WithConfiguration(const DataSourceConfigurationOutput& value) { SetConfiguration(value); return *this;}
    inline GetDataSourceResult& WithConfiguration(DataSourceConfigurationOutput&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the connection.</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }
    inline GetDataSourceResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}
    inline GetDataSourceResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }
    inline GetDataSourceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline GetDataSourceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetDataSourceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetDataSourceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetDataSourceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Amazon DataZone domain in which the data source exists.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }
    inline GetDataSourceResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline GetDataSourceResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether this data source is enabled or not.</p>
     */
    inline const EnableSetting& GetEnableSetting() const{ return m_enableSetting; }
    inline void SetEnableSetting(const EnableSetting& value) { m_enableSetting = value; }
    inline void SetEnableSetting(EnableSetting&& value) { m_enableSetting = std::move(value); }
    inline GetDataSourceResult& WithEnableSetting(const EnableSetting& value) { SetEnableSetting(value); return *this;}
    inline GetDataSourceResult& WithEnableSetting(EnableSetting&& value) { SetEnableSetting(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the environment where this data source creates and publishes
     * assets,</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }
    inline GetDataSourceResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline GetDataSourceResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const DataSourceErrorMessage& GetErrorMessage() const{ return m_errorMessage; }
    inline void SetErrorMessage(const DataSourceErrorMessage& value) { m_errorMessage = value; }
    inline void SetErrorMessage(DataSourceErrorMessage&& value) { m_errorMessage = std::move(value); }
    inline GetDataSourceResult& WithErrorMessage(const DataSourceErrorMessage& value) { SetErrorMessage(value); return *this;}
    inline GetDataSourceResult& WithErrorMessage(DataSourceErrorMessage&& value) { SetErrorMessage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the data source.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline GetDataSourceResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline GetDataSourceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of assets created by the data source during its last run.</p>
     */
    inline int GetLastRunAssetCount() const{ return m_lastRunAssetCount; }
    inline void SetLastRunAssetCount(int value) { m_lastRunAssetCount = value; }
    inline GetDataSourceResult& WithLastRunAssetCount(int value) { SetLastRunAssetCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the last run of the data source.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunAt() const{ return m_lastRunAt; }
    inline void SetLastRunAt(const Aws::Utils::DateTime& value) { m_lastRunAt = value; }
    inline void SetLastRunAt(Aws::Utils::DateTime&& value) { m_lastRunAt = std::move(value); }
    inline GetDataSourceResult& WithLastRunAt(const Aws::Utils::DateTime& value) { SetLastRunAt(value); return *this;}
    inline GetDataSourceResult& WithLastRunAt(Aws::Utils::DateTime&& value) { SetLastRunAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const DataSourceErrorMessage& GetLastRunErrorMessage() const{ return m_lastRunErrorMessage; }
    inline void SetLastRunErrorMessage(const DataSourceErrorMessage& value) { m_lastRunErrorMessage = value; }
    inline void SetLastRunErrorMessage(DataSourceErrorMessage&& value) { m_lastRunErrorMessage = std::move(value); }
    inline GetDataSourceResult& WithLastRunErrorMessage(const DataSourceErrorMessage& value) { SetLastRunErrorMessage(value); return *this;}
    inline GetDataSourceResult& WithLastRunErrorMessage(DataSourceErrorMessage&& value) { SetLastRunErrorMessage(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the last run of the data source.</p>
     */
    inline const DataSourceRunStatus& GetLastRunStatus() const{ return m_lastRunStatus; }
    inline void SetLastRunStatus(const DataSourceRunStatus& value) { m_lastRunStatus = value; }
    inline void SetLastRunStatus(DataSourceRunStatus&& value) { m_lastRunStatus = std::move(value); }
    inline GetDataSourceResult& WithLastRunStatus(const DataSourceRunStatus& value) { SetLastRunStatus(value); return *this;}
    inline GetDataSourceResult& WithLastRunStatus(DataSourceRunStatus&& value) { SetLastRunStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetDataSourceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetDataSourceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetDataSourceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the project where the data source creates and publishes assets.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }
    inline GetDataSourceResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline GetDataSourceResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the assets that this data source creates in the inventory
     * are to be also automatically published to the catalog.</p>
     */
    inline bool GetPublishOnImport() const{ return m_publishOnImport; }
    inline void SetPublishOnImport(bool value) { m_publishOnImport = value; }
    inline GetDataSourceResult& WithPublishOnImport(bool value) { SetPublishOnImport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation configuration of the data source.</p>
     */
    inline const RecommendationConfiguration& GetRecommendation() const{ return m_recommendation; }
    inline void SetRecommendation(const RecommendationConfiguration& value) { m_recommendation = value; }
    inline void SetRecommendation(RecommendationConfiguration&& value) { m_recommendation = std::move(value); }
    inline GetDataSourceResult& WithRecommendation(const RecommendationConfiguration& value) { SetRecommendation(value); return *this;}
    inline GetDataSourceResult& WithRecommendation(RecommendationConfiguration&& value) { SetRecommendation(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline const ScheduleConfiguration& GetSchedule() const{ return m_schedule; }
    inline void SetSchedule(const ScheduleConfiguration& value) { m_schedule = value; }
    inline void SetSchedule(ScheduleConfiguration&& value) { m_schedule = std::move(value); }
    inline GetDataSourceResult& WithSchedule(const ScheduleConfiguration& value) { SetSchedule(value); return *this;}
    inline GetDataSourceResult& WithSchedule(ScheduleConfiguration&& value) { SetSchedule(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the self-granting functionality.</p>
     */
    inline const SelfGrantStatusOutput& GetSelfGrantStatus() const{ return m_selfGrantStatus; }
    inline void SetSelfGrantStatus(const SelfGrantStatusOutput& value) { m_selfGrantStatus = value; }
    inline void SetSelfGrantStatus(SelfGrantStatusOutput&& value) { m_selfGrantStatus = std::move(value); }
    inline GetDataSourceResult& WithSelfGrantStatus(const SelfGrantStatusOutput& value) { SetSelfGrantStatus(value); return *this;}
    inline GetDataSourceResult& WithSelfGrantStatus(SelfGrantStatusOutput&& value) { SetSelfGrantStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data source.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const DataSourceStatus& value) { m_status = value; }
    inline void SetStatus(DataSourceStatus&& value) { m_status = std::move(value); }
    inline GetDataSourceResult& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}
    inline GetDataSourceResult& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the data source.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }
    inline void SetType(const Aws::String& value) { m_type = value; }
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }
    inline void SetType(const char* value) { m_type.assign(value); }
    inline GetDataSourceResult& WithType(const Aws::String& value) { SetType(value); return *this;}
    inline GetDataSourceResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}
    inline GetDataSourceResult& WithType(const char* value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }
    inline GetDataSourceResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline GetDataSourceResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetDataSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetDataSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetDataSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FormOutput> m_assetFormsOutput;

    DataSourceConfigurationOutput m_configuration;

    Aws::String m_connectionId;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_domainId;

    EnableSetting m_enableSetting;

    Aws::String m_environmentId;

    DataSourceErrorMessage m_errorMessage;

    Aws::String m_id;

    int m_lastRunAssetCount;

    Aws::Utils::DateTime m_lastRunAt;

    DataSourceErrorMessage m_lastRunErrorMessage;

    DataSourceRunStatus m_lastRunStatus;

    Aws::String m_name;

    Aws::String m_projectId;

    bool m_publishOnImport;

    RecommendationConfiguration m_recommendation;

    ScheduleConfiguration m_schedule;

    SelfGrantStatusOutput m_selfGrantStatus;

    DataSourceStatus m_status;

    Aws::String m_type;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
