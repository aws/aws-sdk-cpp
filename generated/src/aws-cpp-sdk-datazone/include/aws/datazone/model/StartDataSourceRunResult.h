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
  class StartDataSourceRunResult
  {
  public:
    AWS_DATAZONE_API StartDataSourceRunResult();
    AWS_DATAZONE_API StartDataSourceRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API StartDataSourceRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when data source run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when data source run was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when data source run was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when data source run was created.</p>
     */
    inline StartDataSourceRunResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when data source run was created.</p>
     */
    inline StartDataSourceRunResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The configuration snapshot of the data source that is being run.</p>
     */
    inline const Aws::String& GetDataSourceConfigurationSnapshot() const{ return m_dataSourceConfigurationSnapshot; }

    /**
     * <p>The configuration snapshot of the data source that is being run.</p>
     */
    inline void SetDataSourceConfigurationSnapshot(const Aws::String& value) { m_dataSourceConfigurationSnapshot = value; }

    /**
     * <p>The configuration snapshot of the data source that is being run.</p>
     */
    inline void SetDataSourceConfigurationSnapshot(Aws::String&& value) { m_dataSourceConfigurationSnapshot = std::move(value); }

    /**
     * <p>The configuration snapshot of the data source that is being run.</p>
     */
    inline void SetDataSourceConfigurationSnapshot(const char* value) { m_dataSourceConfigurationSnapshot.assign(value); }

    /**
     * <p>The configuration snapshot of the data source that is being run.</p>
     */
    inline StartDataSourceRunResult& WithDataSourceConfigurationSnapshot(const Aws::String& value) { SetDataSourceConfigurationSnapshot(value); return *this;}

    /**
     * <p>The configuration snapshot of the data source that is being run.</p>
     */
    inline StartDataSourceRunResult& WithDataSourceConfigurationSnapshot(Aws::String&& value) { SetDataSourceConfigurationSnapshot(std::move(value)); return *this;}

    /**
     * <p>The configuration snapshot of the data source that is being run.</p>
     */
    inline StartDataSourceRunResult& WithDataSourceConfigurationSnapshot(const char* value) { SetDataSourceConfigurationSnapshot(value); return *this;}


    /**
     * <p>The identifier of the data source.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The identifier of the data source.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    /**
     * <p>The identifier of the data source.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    /**
     * <p>The identifier of the data source.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    /**
     * <p>The identifier of the data source.</p>
     */
    inline StartDataSourceRunResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The identifier of the data source.</p>
     */
    inline StartDataSourceRunResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source.</p>
     */
    inline StartDataSourceRunResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The identifier of the Amazon DataZone domain in which to start a data source
     * run.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to start a data source
     * run.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to start a data source
     * run.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to start a data source
     * run.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The identifier of the Amazon DataZone domain in which to start a data source
     * run.</p>
     */
    inline StartDataSourceRunResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which to start a data source
     * run.</p>
     */
    inline StartDataSourceRunResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon DataZone domain in which to start a data source
     * run.</p>
     */
    inline StartDataSourceRunResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


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
    inline StartDataSourceRunResult& WithErrorMessage(const DataSourceErrorMessage& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline StartDataSourceRunResult& WithErrorMessage(DataSourceErrorMessage&& value) { SetErrorMessage(std::move(value)); return *this;}


    /**
     * <p>The identifier of the data source run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline StartDataSourceRunResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline StartDataSourceRunResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the data source run.</p>
     */
    inline StartDataSourceRunResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The identifier of the project.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The identifier of the project.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }

    /**
     * <p>The identifier of the project.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }

    /**
     * <p>The identifier of the project.</p>
     */
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }

    /**
     * <p>The identifier of the project.</p>
     */
    inline StartDataSourceRunResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The identifier of the project.</p>
     */
    inline StartDataSourceRunResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the project.</p>
     */
    inline StartDataSourceRunResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>Specifies run statistics for assets.</p>
     */
    inline const RunStatisticsForAssets& GetRunStatisticsForAssets() const{ return m_runStatisticsForAssets; }

    /**
     * <p>Specifies run statistics for assets.</p>
     */
    inline void SetRunStatisticsForAssets(const RunStatisticsForAssets& value) { m_runStatisticsForAssets = value; }

    /**
     * <p>Specifies run statistics for assets.</p>
     */
    inline void SetRunStatisticsForAssets(RunStatisticsForAssets&& value) { m_runStatisticsForAssets = std::move(value); }

    /**
     * <p>Specifies run statistics for assets.</p>
     */
    inline StartDataSourceRunResult& WithRunStatisticsForAssets(const RunStatisticsForAssets& value) { SetRunStatisticsForAssets(value); return *this;}

    /**
     * <p>Specifies run statistics for assets.</p>
     */
    inline StartDataSourceRunResult& WithRunStatisticsForAssets(RunStatisticsForAssets&& value) { SetRunStatisticsForAssets(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the data source run was started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The timestamp of when the data source run was started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }

    /**
     * <p>The timestamp of when the data source run was started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }

    /**
     * <p>The timestamp of when the data source run was started.</p>
     */
    inline StartDataSourceRunResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The timestamp of when the data source run was started.</p>
     */
    inline StartDataSourceRunResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The status of the data source run.</p>
     */
    inline const DataSourceRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data source run.</p>
     */
    inline void SetStatus(const DataSourceRunStatus& value) { m_status = value; }

    /**
     * <p>The status of the data source run.</p>
     */
    inline void SetStatus(DataSourceRunStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the data source run.</p>
     */
    inline StartDataSourceRunResult& WithStatus(const DataSourceRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data source run.</p>
     */
    inline StartDataSourceRunResult& WithStatus(DataSourceRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the data source run was stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The timestamp of when the data source run was stopped.</p>
     */
    inline void SetStoppedAt(const Aws::Utils::DateTime& value) { m_stoppedAt = value; }

    /**
     * <p>The timestamp of when the data source run was stopped.</p>
     */
    inline void SetStoppedAt(Aws::Utils::DateTime&& value) { m_stoppedAt = std::move(value); }

    /**
     * <p>The timestamp of when the data source run was stopped.</p>
     */
    inline StartDataSourceRunResult& WithStoppedAt(const Aws::Utils::DateTime& value) { SetStoppedAt(value); return *this;}

    /**
     * <p>The timestamp of when the data source run was stopped.</p>
     */
    inline StartDataSourceRunResult& WithStoppedAt(Aws::Utils::DateTime&& value) { SetStoppedAt(std::move(value)); return *this;}


    /**
     * <p>The type of the data source run.</p>
     */
    inline const DataSourceRunType& GetType() const{ return m_type; }

    /**
     * <p>The type of the data source run.</p>
     */
    inline void SetType(const DataSourceRunType& value) { m_type = value; }

    /**
     * <p>The type of the data source run.</p>
     */
    inline void SetType(DataSourceRunType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the data source run.</p>
     */
    inline StartDataSourceRunResult& WithType(const DataSourceRunType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the data source run.</p>
     */
    inline StartDataSourceRunResult& WithType(DataSourceRunType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the data source run was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the data source run was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when the data source run was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the data source run was updated.</p>
     */
    inline StartDataSourceRunResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the data source run was updated.</p>
     */
    inline StartDataSourceRunResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartDataSourceRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartDataSourceRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartDataSourceRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;

    Aws::String m_dataSourceConfigurationSnapshot;

    Aws::String m_dataSourceId;

    Aws::String m_domainId;

    DataSourceErrorMessage m_errorMessage;

    Aws::String m_id;

    Aws::String m_projectId;

    RunStatisticsForAssets m_runStatisticsForAssets;

    Aws::Utils::DateTime m_startedAt;

    DataSourceRunStatus m_status;

    Aws::Utils::DateTime m_stoppedAt;

    DataSourceRunType m_type;

    Aws::Utils::DateTime m_updatedAt;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
