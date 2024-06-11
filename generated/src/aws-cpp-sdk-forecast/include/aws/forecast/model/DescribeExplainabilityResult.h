/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ExplainabilityConfig.h>
#include <aws/forecast/model/DataSource.h>
#include <aws/forecast/model/Schema.h>
#include <aws/core/utils/DateTime.h>
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
namespace ForecastService
{
namespace Model
{
  class DescribeExplainabilityResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeExplainabilityResult();
    AWS_FORECASTSERVICE_API DescribeExplainabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeExplainabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityArn() const{ return m_explainabilityArn; }
    inline void SetExplainabilityArn(const Aws::String& value) { m_explainabilityArn = value; }
    inline void SetExplainabilityArn(Aws::String&& value) { m_explainabilityArn = std::move(value); }
    inline void SetExplainabilityArn(const char* value) { m_explainabilityArn.assign(value); }
    inline DescribeExplainabilityResult& WithExplainabilityArn(const Aws::String& value) { SetExplainabilityArn(value); return *this;}
    inline DescribeExplainabilityResult& WithExplainabilityArn(Aws::String&& value) { SetExplainabilityArn(std::move(value)); return *this;}
    inline DescribeExplainabilityResult& WithExplainabilityArn(const char* value) { SetExplainabilityArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityName() const{ return m_explainabilityName; }
    inline void SetExplainabilityName(const Aws::String& value) { m_explainabilityName = value; }
    inline void SetExplainabilityName(Aws::String&& value) { m_explainabilityName = std::move(value); }
    inline void SetExplainabilityName(const char* value) { m_explainabilityName.assign(value); }
    inline DescribeExplainabilityResult& WithExplainabilityName(const Aws::String& value) { SetExplainabilityName(value); return *this;}
    inline DescribeExplainabilityResult& WithExplainabilityName(Aws::String&& value) { SetExplainabilityName(std::move(value)); return *this;}
    inline DescribeExplainabilityResult& WithExplainabilityName(const char* value) { SetExplainabilityName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability resource.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline DescribeExplainabilityResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline DescribeExplainabilityResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline DescribeExplainabilityResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline const ExplainabilityConfig& GetExplainabilityConfig() const{ return m_explainabilityConfig; }
    inline void SetExplainabilityConfig(const ExplainabilityConfig& value) { m_explainabilityConfig = value; }
    inline void SetExplainabilityConfig(ExplainabilityConfig&& value) { m_explainabilityConfig = std::move(value); }
    inline DescribeExplainabilityResult& WithExplainabilityConfig(const ExplainabilityConfig& value) { SetExplainabilityConfig(value); return *this;}
    inline DescribeExplainabilityResult& WithExplainabilityConfig(ExplainabilityConfig&& value) { SetExplainabilityConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the visualization was enabled for the Explainability resource.</p>
     */
    inline bool GetEnableVisualization() const{ return m_enableVisualization; }
    inline void SetEnableVisualization(bool value) { m_enableVisualization = value; }
    inline DescribeExplainabilityResult& WithEnableVisualization(bool value) { SetEnableVisualization(value); return *this;}
    ///@}

    ///@{
    
    inline const DataSource& GetDataSource() const{ return m_dataSource; }
    inline void SetDataSource(const DataSource& value) { m_dataSource = value; }
    inline void SetDataSource(DataSource&& value) { m_dataSource = std::move(value); }
    inline DescribeExplainabilityResult& WithDataSource(const DataSource& value) { SetDataSource(value); return *this;}
    inline DescribeExplainabilityResult& WithDataSource(DataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Schema& GetSchema() const{ return m_schema; }
    inline void SetSchema(const Schema& value) { m_schema = value; }
    inline void SetSchema(Schema&& value) { m_schema = std::move(value); }
    inline DescribeExplainabilityResult& WithSchema(const Schema& value) { SetSchema(value); return *this;}
    inline DescribeExplainabilityResult& WithSchema(Schema&& value) { SetSchema(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, the
     * first time point in the Explainability.</p>
     */
    inline const Aws::String& GetStartDateTime() const{ return m_startDateTime; }
    inline void SetStartDateTime(const Aws::String& value) { m_startDateTime = value; }
    inline void SetStartDateTime(Aws::String&& value) { m_startDateTime = std::move(value); }
    inline void SetStartDateTime(const char* value) { m_startDateTime.assign(value); }
    inline DescribeExplainabilityResult& WithStartDateTime(const Aws::String& value) { SetStartDateTime(value); return *this;}
    inline DescribeExplainabilityResult& WithStartDateTime(Aws::String&& value) { SetStartDateTime(std::move(value)); return *this;}
    inline DescribeExplainabilityResult& WithStartDateTime(const char* value) { SetStartDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, the
     * last time point in the Explainability.</p>
     */
    inline const Aws::String& GetEndDateTime() const{ return m_endDateTime; }
    inline void SetEndDateTime(const Aws::String& value) { m_endDateTime = value; }
    inline void SetEndDateTime(Aws::String&& value) { m_endDateTime = std::move(value); }
    inline void SetEndDateTime(const char* value) { m_endDateTime.assign(value); }
    inline DescribeExplainabilityResult& WithEndDateTime(const Aws::String& value) { SetEndDateTime(value); return *this;}
    inline DescribeExplainabilityResult& WithEndDateTime(Aws::String&& value) { SetEndDateTime(std::move(value)); return *this;}
    inline DescribeExplainabilityResult& WithEndDateTime(const char* value) { SetEndDateTime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time remaining in minutes for the <a>CreateExplainability</a>
     * job to complete.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const{ return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutes = value; }
    inline DescribeExplainabilityResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, a message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DescribeExplainabilityResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DescribeExplainabilityResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DescribeExplainabilityResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the Explainability resource. States include: </p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DescribeExplainabilityResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DescribeExplainabilityResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DescribeExplainabilityResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Explainability resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeExplainabilityResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeExplainabilityResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }
    inline DescribeExplainabilityResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline DescribeExplainabilityResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeExplainabilityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeExplainabilityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeExplainabilityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_explainabilityArn;

    Aws::String m_explainabilityName;

    Aws::String m_resourceArn;

    ExplainabilityConfig m_explainabilityConfig;

    bool m_enableVisualization;

    DataSource m_dataSource;

    Schema m_schema;

    Aws::String m_startDateTime;

    Aws::String m_endDateTime;

    long long m_estimatedTimeRemainingInMinutes;

    Aws::String m_message;

    Aws::String m_status;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
