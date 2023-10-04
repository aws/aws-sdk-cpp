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
  class GetDataSourceRunResult
  {
  public:
    AWS_DATAZONE_API GetDataSourceRunResult();
    AWS_DATAZONE_API GetDataSourceRunResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DATAZONE_API GetDataSourceRunResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The timestamp of when the data source run was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the data source run was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAt = value; }

    /**
     * <p>The timestamp of when the data source run was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the data source run was created.</p>
     */
    inline GetDataSourceRunResult& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the data source run was created.</p>
     */
    inline GetDataSourceRunResult& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The configuration snapshot of the data source run.</p>
     */
    inline const Aws::String& GetDataSourceConfigurationSnapshot() const{ return m_dataSourceConfigurationSnapshot; }

    /**
     * <p>The configuration snapshot of the data source run.</p>
     */
    inline void SetDataSourceConfigurationSnapshot(const Aws::String& value) { m_dataSourceConfigurationSnapshot = value; }

    /**
     * <p>The configuration snapshot of the data source run.</p>
     */
    inline void SetDataSourceConfigurationSnapshot(Aws::String&& value) { m_dataSourceConfigurationSnapshot = std::move(value); }

    /**
     * <p>The configuration snapshot of the data source run.</p>
     */
    inline void SetDataSourceConfigurationSnapshot(const char* value) { m_dataSourceConfigurationSnapshot.assign(value); }

    /**
     * <p>The configuration snapshot of the data source run.</p>
     */
    inline GetDataSourceRunResult& WithDataSourceConfigurationSnapshot(const Aws::String& value) { SetDataSourceConfigurationSnapshot(value); return *this;}

    /**
     * <p>The configuration snapshot of the data source run.</p>
     */
    inline GetDataSourceRunResult& WithDataSourceConfigurationSnapshot(Aws::String&& value) { SetDataSourceConfigurationSnapshot(std::move(value)); return *this;}

    /**
     * <p>The configuration snapshot of the data source run.</p>
     */
    inline GetDataSourceRunResult& WithDataSourceConfigurationSnapshot(const char* value) { SetDataSourceConfigurationSnapshot(value); return *this;}


    /**
     * <p>The ID of the data source for this data source run.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The ID of the data source for this data source run.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceId = value; }

    /**
     * <p>The ID of the data source for this data source run.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceId = std::move(value); }

    /**
     * <p>The ID of the data source for this data source run.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceId.assign(value); }

    /**
     * <p>The ID of the data source for this data source run.</p>
     */
    inline GetDataSourceRunResult& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The ID of the data source for this data source run.</p>
     */
    inline GetDataSourceRunResult& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data source for this data source run.</p>
     */
    inline GetDataSourceRunResult& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The ID of the domain in which this data source run was performed.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The ID of the domain in which this data source run was performed.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainId = value; }

    /**
     * <p>The ID of the domain in which this data source run was performed.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainId = std::move(value); }

    /**
     * <p>The ID of the domain in which this data source run was performed.</p>
     */
    inline void SetDomainId(const char* value) { m_domainId.assign(value); }

    /**
     * <p>The ID of the domain in which this data source run was performed.</p>
     */
    inline GetDataSourceRunResult& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The ID of the domain in which this data source run was performed.</p>
     */
    inline GetDataSourceRunResult& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain in which this data source run was performed.</p>
     */
    inline GetDataSourceRunResult& WithDomainId(const char* value) { SetDomainId(value); return *this;}


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
    inline GetDataSourceRunResult& WithErrorMessage(const DataSourceErrorMessage& value) { SetErrorMessage(value); return *this;}

    /**
     * <p>Specifies the error message that is returned if the operation cannot be
     * successfully completed.</p>
     */
    inline GetDataSourceRunResult& WithErrorMessage(DataSourceErrorMessage&& value) { SetErrorMessage(std::move(value)); return *this;}


    /**
     * <p>The ID of the data source run.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the data source run.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The ID of the data source run.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The ID of the data source run.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The ID of the data source run.</p>
     */
    inline GetDataSourceRunResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the data source run.</p>
     */
    inline GetDataSourceRunResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the data source run.</p>
     */
    inline GetDataSourceRunResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The ID of the project in which this data source run occured.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }

    /**
     * <p>The ID of the project in which this data source run occured.</p>
     */
    inline void SetProjectId(const Aws::String& value) { m_projectId = value; }

    /**
     * <p>The ID of the project in which this data source run occured.</p>
     */
    inline void SetProjectId(Aws::String&& value) { m_projectId = std::move(value); }

    /**
     * <p>The ID of the project in which this data source run occured.</p>
     */
    inline void SetProjectId(const char* value) { m_projectId.assign(value); }

    /**
     * <p>The ID of the project in which this data source run occured.</p>
     */
    inline GetDataSourceRunResult& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}

    /**
     * <p>The ID of the project in which this data source run occured.</p>
     */
    inline GetDataSourceRunResult& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}

    /**
     * <p>The ID of the project in which this data source run occured.</p>
     */
    inline GetDataSourceRunResult& WithProjectId(const char* value) { SetProjectId(value); return *this;}


    /**
     * <p>The asset statistics from this data source run.</p>
     */
    inline const RunStatisticsForAssets& GetRunStatisticsForAssets() const{ return m_runStatisticsForAssets; }

    /**
     * <p>The asset statistics from this data source run.</p>
     */
    inline void SetRunStatisticsForAssets(const RunStatisticsForAssets& value) { m_runStatisticsForAssets = value; }

    /**
     * <p>The asset statistics from this data source run.</p>
     */
    inline void SetRunStatisticsForAssets(RunStatisticsForAssets&& value) { m_runStatisticsForAssets = std::move(value); }

    /**
     * <p>The asset statistics from this data source run.</p>
     */
    inline GetDataSourceRunResult& WithRunStatisticsForAssets(const RunStatisticsForAssets& value) { SetRunStatisticsForAssets(value); return *this;}

    /**
     * <p>The asset statistics from this data source run.</p>
     */
    inline GetDataSourceRunResult& WithRunStatisticsForAssets(RunStatisticsForAssets&& value) { SetRunStatisticsForAssets(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when this data source run started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }

    /**
     * <p>The timestamp of when this data source run started.</p>
     */
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAt = value; }

    /**
     * <p>The timestamp of when this data source run started.</p>
     */
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAt = std::move(value); }

    /**
     * <p>The timestamp of when this data source run started.</p>
     */
    inline GetDataSourceRunResult& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}

    /**
     * <p>The timestamp of when this data source run started.</p>
     */
    inline GetDataSourceRunResult& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}


    /**
     * <p>The status of this data source run.</p>
     */
    inline const DataSourceRunStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of this data source run.</p>
     */
    inline void SetStatus(const DataSourceRunStatus& value) { m_status = value; }

    /**
     * <p>The status of this data source run.</p>
     */
    inline void SetStatus(DataSourceRunStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of this data source run.</p>
     */
    inline GetDataSourceRunResult& WithStatus(const DataSourceRunStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of this data source run.</p>
     */
    inline GetDataSourceRunResult& WithStatus(DataSourceRunStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when this data source run stopped.</p>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const{ return m_stoppedAt; }

    /**
     * <p>The timestamp of when this data source run stopped.</p>
     */
    inline void SetStoppedAt(const Aws::Utils::DateTime& value) { m_stoppedAt = value; }

    /**
     * <p>The timestamp of when this data source run stopped.</p>
     */
    inline void SetStoppedAt(Aws::Utils::DateTime&& value) { m_stoppedAt = std::move(value); }

    /**
     * <p>The timestamp of when this data source run stopped.</p>
     */
    inline GetDataSourceRunResult& WithStoppedAt(const Aws::Utils::DateTime& value) { SetStoppedAt(value); return *this;}

    /**
     * <p>The timestamp of when this data source run stopped.</p>
     */
    inline GetDataSourceRunResult& WithStoppedAt(Aws::Utils::DateTime&& value) { SetStoppedAt(std::move(value)); return *this;}


    /**
     * <p>The type of this data source run.</p>
     */
    inline const DataSourceRunType& GetType() const{ return m_type; }

    /**
     * <p>The type of this data source run.</p>
     */
    inline void SetType(const DataSourceRunType& value) { m_type = value; }

    /**
     * <p>The type of this data source run.</p>
     */
    inline void SetType(DataSourceRunType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of this data source run.</p>
     */
    inline GetDataSourceRunResult& WithType(const DataSourceRunType& value) { SetType(value); return *this;}

    /**
     * <p>The type of this data source run.</p>
     */
    inline GetDataSourceRunResult& WithType(DataSourceRunType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when this data source run was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when this data source run was updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAt = value; }

    /**
     * <p>The timestamp of when this data source run was updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when this data source run was updated.</p>
     */
    inline GetDataSourceRunResult& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when this data source run was updated.</p>
     */
    inline GetDataSourceRunResult& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetDataSourceRunResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetDataSourceRunResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetDataSourceRunResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
