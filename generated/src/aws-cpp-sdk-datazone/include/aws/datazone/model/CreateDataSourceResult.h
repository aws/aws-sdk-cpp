/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/datazone/model/DataSourceConfigurationOutput.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/EnableSetting.h>
#include <aws/datazone/model/DataSourceErrorMessage.h>
#include <aws/datazone/model/DataSourceRunStatus.h>
#include <aws/datazone/model/RecommendationConfiguration.h>
#include <aws/datazone/model/ScheduleConfiguration.h>
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
  class CreateDataSourceResult
  {
  public:
    AWS_DATAZONE_API CreateDataSourceResult();
    AWS_DATAZONE_API CreateDataSourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API CreateDataSourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The metadata forms attached to the assets that this data source creates.</p>
     */
    inline const Aws::Vector<FormOutput>& GetAssetFormsOutput() const{ return m_assetFormsOutput; }

    /**
     * <p>The metadata forms attached to the assets that this data source creates.</p>
     */
    inline void SetAssetFormsOutput(const Aws::Vector<FormOutput>& value) { m_assetFormsOutput = value; }

    /**
     * <p>The metadata forms attached to the assets that this data source creates.</p>
     */
    inline void SetAssetFormsOutput(Aws::Vector<FormOutput>&& value) { m_assetFormsOutput = std::move(value); }

    /**
     * <p>The metadata forms attached to the assets that this data source creates.</p>
     */
    inline CreateDataSourceResult& WithAssetFormsOutput(const Aws::Vector<FormOutput>& value) { SetAssetFormsOutput(value); return *this;}

    /**
     * <p>The metadata forms attached to the assets that this data source creates.</p>
     */
    inline CreateDataSourceResult& WithAssetFormsOutput(Aws::Vector<FormOutput>&& value) { SetAssetFormsOutput(std::move(value)); return *this;}

    /**
     * <p>The metadata forms attached to the assets that this data source creates.</p>
     */
    inline CreateDataSourceResult& AddAssetFormsOutput(const FormOutput& value) { m_assetFormsOutput.push_back(value); return *this; }

    /**
     * <p>The metadata forms attached to the assets that this data source creates.</p>
     */
    inline CreateDataSourceResult& AddAssetFormsOutput(FormOutput&& value) { m_assetFormsOutput.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline const DataSourceConfigurationOutput& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline void SetConfiguration(const DataSourceConfigurationOutput& value) { m_configuration = value; }

    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline void SetConfiguration(DataSourceConfigurationOutput&& value) { m_configuration = std::move(value); }

    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline CreateDataSourceResult& WithConfiguration(const DataSourceConfigurationOutput& value) { SetConfiguration(value); return *this;}

    /**
     * <p>Specifies the configuration of the data source. It can be set to either
     * <code>glueRunConfiguration</code> or <code>redshiftRunConfiguration</code>.</p>
     */
    inline CreateDataSourceResult& WithConfiguration(DataSourceConfigurationOutput&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline CreateDataSourceResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the data source was created.</p>
     */
    inline CreateDataSourceResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>The description of the data source.</p>
     */
    inline CreateDataSourceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the data source.</p>
     */
    inline CreateDataSourceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the data source.</p>
     */
    inline CreateDataSourceResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone domain in which the data source is created.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source is created.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source is created.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source is created.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source is created.</p>
     */
    inline CreateDataSourceResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source is created.</p>
     */
    inline CreateDataSourceResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone domain in which the data source is created.</p>
     */
    inline CreateDataSourceResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline const EnableSetting& GetEnableSetting() const{ return m_enableSetting; }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline void SetEnableSetting(const EnableSetting& value) { m_enableSetting = value; }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline void SetEnableSetting(EnableSetting&& value) { m_enableSetting = std::move(value); }

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline CreateDataSourceResult& WithEnableSetting(const EnableSetting& value) { SetEnableSetting(value); return *this;}

    /**
     * <p>Specifies whether the data source is enabled.</p>
     */
    inline CreateDataSourceResult& WithEnableSetting(EnableSetting&& value) { SetEnableSetting(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentId = value; }

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentId = std::move(value); }

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentId.assign(value); }

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline CreateDataSourceResult& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline CreateDataSourceResult& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the Amazon DataZone environment to which the data
     * source publishes assets. </p>
     */
    inline CreateDataSourceResult& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const DataSourceErrorMessage& GetErrorMessage() const{ return m_errorMessage; }

    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline void SetErrorMessage(const DataSourceErrorMessage& value) { m_errorMessage = value; }

    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline void SetErrorMessage(DataSourceErrorMessage&& value) { m_errorMessage = std::move(value); }

    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline CreateDataSourceResult& WithErrorMessage(const DataSourceErrorMessage& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline CreateDataSourceResult& WithErrorMessage(DataSourceErrorMessage&& value) { SetErrorMessage(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline CreateDataSourceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline CreateDataSourceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline CreateDataSourceResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The timestamp that specifies when the data source was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunAt() const{ return m_lastRunAt; }

    /**
     * <p>The timestamp that specifies when the data source was last run.</p>
     */
    inline void SetLastRunAt(const Aws::Utils::DateTime& value) { m_lastRunAt = value; }

    /**
     * <p>The timestamp that specifies when the data source was last run.</p>
     */
    inline void SetLastRunAt(Aws::Utils::DateTime&& value) { m_lastRunAt = std::move(value); }

    /**
     * <p>The timestamp that specifies when the data source was last run.</p>
     */
    inline CreateDataSourceResult& WithLastRunAt(const Aws::Utils::DateTime& value) { SetLastRunAt(value); return *this;}

    /**
     * <p>The timestamp that specifies when the data source was last run.</p>
     */
    inline CreateDataSourceResult& WithLastRunAt(Aws::Utils::DateTime&& value) { SetLastRunAt(std::move(value)); return *this;}


    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline const DataSourceErrorMessage& GetLastRunErrorMessage() const{ return m_lastRunErrorMessage; }

    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline void SetLastRunErrorMessage(const DataSourceErrorMessage& value) { m_lastRunErrorMessage = value; }

    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline void SetLastRunErrorMessage(DataSourceErrorMessage&& value) { m_lastRunErrorMessage = std::move(value); }

    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline CreateDataSourceResult& WithLastRunErrorMessage(const DataSourceErrorMessage& value) { SetLastRunErrorMessage(value); return *this;}

    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline CreateDataSourceResult& WithLastRunErrorMessage(DataSourceErrorMessage&& value) { SetLastRunErrorMessage(std::move(value)); return *this;}


    /**
     * <p>The status of the last run of this data source.</p>
     */
    inline const DataSourceRunStatus& GetLastRunStatus() const{ return m_lastRunStatus; }

    /**
     * <p>The status of the last run of this data source.</p>
     */
    inline void SetLastRunStatus(const DataSourceRunStatus& value) { m_lastRunStatus = value; }

    /**
     * <p>The status of the last run of this data source.</p>
     */
    inline void SetLastRunStatus(DataSourceRunStatus&& value) { m_lastRunStatus = std::move(value); }

    /**
     * <p>The status of the last run of this data source.</p>
     */
    inline CreateDataSourceResult& WithLastRunStatus(const DataSourceRunStatus& value) { SetLastRunStatus(value); return *this;}

    /**
     * <p>The status of the last run of this data source.</p>
     */
    inline CreateDataSourceResult& WithLastRunStatus(DataSourceRunStatus&& value) { SetLastRunStatus(std::move(value)); return *this;}


    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline CreateDataSourceResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline CreateDataSourceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline CreateDataSourceResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The ID of the Amazon DataZone project to which the data source is added.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The ID of the Amazon DataZone project to which the data source is added.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }

    /**
     * <p>The ID of the Amazon DataZone project to which the data source is added.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }

    /**
     * <p>The ID of the Amazon DataZone project to which the data source is added.</p>
     */
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }

    /**
     * <p>The ID of the Amazon DataZone project to which the data source is added.</p>
     */
    inline CreateDataSourceResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project to which the data source is added.</p>
     */
    inline CreateDataSourceResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon DataZone project to which the data source is added.</p>
     */
    inline CreateDataSourceResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>Specifies whether the assets that this data source creates in the inventory
     * are to be also automatically published to the catalog.</p>
     */
    inline bool GetPublishOnImport() const{ return m_publishOnImport; }

    /**
     * <p>Specifies whether the assets that this data source creates in the inventory
     * are to be also automatically published to the catalog.</p>
     */
    inline void SetPublishOnImport(bool value) { m_publishOnImport = value; }

    /**
     * <p>Specifies whether the assets that this data source creates in the inventory
     * are to be also automatically published to the catalog.</p>
     */
    inline CreateDataSourceResult& WithPublishOnImport(bool value) { SetPublishOnImport(value); return *this;}


    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline const RecommendationConfiguration& GetRecommendation() const{ return m_recommendation; }

    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline void SetRecommendation(const RecommendationConfiguration& value) { m_recommendation = value; }

    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline void SetRecommendation(RecommendationConfiguration&& value) { m_recommendation = std::move(value); }

    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline CreateDataSourceResult& WithRecommendation(const RecommendationConfiguration& value) { SetRecommendation(value); return *this;}

    /**
     * <p>Specifies whether the business name generation is to be enabled for this data
     * source.</p>
     */
    inline CreateDataSourceResult& WithRecommendation(RecommendationConfiguration&& value) { SetRecommendation(std::move(value)); return *this;}


    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline const ScheduleConfiguration& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline void SetSchedule(const ScheduleConfiguration& value) { m_schedule = value; }

    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline void SetSchedule(ScheduleConfiguration&& value) { m_schedule = std::move(value); }

    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline CreateDataSourceResult& WithSchedule(const ScheduleConfiguration& value) { SetSchedule(value); return *this;}

    /**
     * <p>The schedule of the data source runs.</p>
     */
    inline CreateDataSourceResult& WithSchedule(ScheduleConfiguration&& value) { SetSchedule(std::move(value)); return *this;}


    /**
     * <p>The status of the data source.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data source.</p>
     */
    inline void SetStatus(const DataSourceStatus& value) { m_status = value; }

    /**
     * <p>The status of the data source.</p>
     */
    inline void SetStatus(DataSourceStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the data source.</p>
     */
    inline CreateDataSourceResult& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data source.</p>
     */
    inline CreateDataSourceResult& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the data source.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetType(const Aws::String& value) { m_type = value; }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetType(Aws::String&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the data source.</p>
     */
    inline void SetType(const char* value) { m_type.assign(value); }

    /**
     * <p>The type of the data source.</p>
     */
    inline CreateDataSourceResult& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the data source.</p>
     */
    inline CreateDataSourceResult& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the data source.</p>
     */
    inline CreateDataSourceResult& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline CreateDataSourceResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the data source was updated.</p>
     */
    inline CreateDataSourceResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateDataSourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateDataSourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateDataSourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FormOutput> m_assetFormsOutput;

    DataSourceConfigurationOutput m_configuration;

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_description;

    Aws::String m_domainId;

    EnableSetting m_enableSetting;

    Aws::String m_environmentId;

    DataSourceErrorMessage m_errorMessage;

    Aws::String m_id;

    Aws::Utils::DateTime m_lastRunAt;

    DataSourceErrorMessage m_lastRunErrorMessage;

    DataSourceRunStatus m_lastRunStatus;

    Aws::String m_name;

    Aws::String m_projectId;

    bool m_publishOnImport;

    RecommendationConfiguration m_recommendation;

    ScheduleConfiguration m_schedule;

    DataSourceStatus m_status;

    Aws::String m_type;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
