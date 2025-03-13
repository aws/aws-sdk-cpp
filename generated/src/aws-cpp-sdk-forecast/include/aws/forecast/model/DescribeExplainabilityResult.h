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
    AWS_FORECASTSERVICE_API DescribeExplainabilityResult() = default;
    AWS_FORECASTSERVICE_API DescribeExplainabilityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeExplainabilityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityArn() const { return m_explainabilityArn; }
    template<typename ExplainabilityArnT = Aws::String>
    void SetExplainabilityArn(ExplainabilityArnT&& value) { m_explainabilityArnHasBeenSet = true; m_explainabilityArn = std::forward<ExplainabilityArnT>(value); }
    template<typename ExplainabilityArnT = Aws::String>
    DescribeExplainabilityResult& WithExplainabilityArn(ExplainabilityArnT&& value) { SetExplainabilityArn(std::forward<ExplainabilityArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Explainability.</p>
     */
    inline const Aws::String& GetExplainabilityName() const { return m_explainabilityName; }
    template<typename ExplainabilityNameT = Aws::String>
    void SetExplainabilityName(ExplainabilityNameT&& value) { m_explainabilityNameHasBeenSet = true; m_explainabilityName = std::forward<ExplainabilityNameT>(value); }
    template<typename ExplainabilityNameT = Aws::String>
    DescribeExplainabilityResult& WithExplainabilityName(ExplainabilityNameT&& value) { SetExplainabilityName(std::forward<ExplainabilityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Predictor or Forecast used to create
     * the Explainability resource.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    DescribeExplainabilityResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings that define the granularity of time series and
     * time points for the Explainability.</p>
     */
    inline const ExplainabilityConfig& GetExplainabilityConfig() const { return m_explainabilityConfig; }
    template<typename ExplainabilityConfigT = ExplainabilityConfig>
    void SetExplainabilityConfig(ExplainabilityConfigT&& value) { m_explainabilityConfigHasBeenSet = true; m_explainabilityConfig = std::forward<ExplainabilityConfigT>(value); }
    template<typename ExplainabilityConfigT = ExplainabilityConfig>
    DescribeExplainabilityResult& WithExplainabilityConfig(ExplainabilityConfigT&& value) { SetExplainabilityConfig(std::forward<ExplainabilityConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the visualization was enabled for the Explainability resource.</p>
     */
    inline bool GetEnableVisualization() const { return m_enableVisualization; }
    inline void SetEnableVisualization(bool value) { m_enableVisualizationHasBeenSet = true; m_enableVisualization = value; }
    inline DescribeExplainabilityResult& WithEnableVisualization(bool value) { SetEnableVisualization(value); return *this;}
    ///@}

    ///@{
    
    inline const DataSource& GetDataSource() const { return m_dataSource; }
    template<typename DataSourceT = DataSource>
    void SetDataSource(DataSourceT&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::forward<DataSourceT>(value); }
    template<typename DataSourceT = DataSource>
    DescribeExplainabilityResult& WithDataSource(DataSourceT&& value) { SetDataSource(std::forward<DataSourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Schema& GetSchema() const { return m_schema; }
    template<typename SchemaT = Schema>
    void SetSchema(SchemaT&& value) { m_schemaHasBeenSet = true; m_schema = std::forward<SchemaT>(value); }
    template<typename SchemaT = Schema>
    DescribeExplainabilityResult& WithSchema(SchemaT&& value) { SetSchema(std::forward<SchemaT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, the
     * first time point in the Explainability.</p>
     */
    inline const Aws::String& GetStartDateTime() const { return m_startDateTime; }
    template<typename StartDateTimeT = Aws::String>
    void SetStartDateTime(StartDateTimeT&& value) { m_startDateTimeHasBeenSet = true; m_startDateTime = std::forward<StartDateTimeT>(value); }
    template<typename StartDateTimeT = Aws::String>
    DescribeExplainabilityResult& WithStartDateTime(StartDateTimeT&& value) { SetStartDateTime(std::forward<StartDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>TimePointGranularity</code> is set to <code>SPECIFIC</code>, the
     * last time point in the Explainability.</p>
     */
    inline const Aws::String& GetEndDateTime() const { return m_endDateTime; }
    template<typename EndDateTimeT = Aws::String>
    void SetEndDateTime(EndDateTimeT&& value) { m_endDateTimeHasBeenSet = true; m_endDateTime = std::forward<EndDateTimeT>(value); }
    template<typename EndDateTimeT = Aws::String>
    DescribeExplainabilityResult& WithEndDateTime(EndDateTimeT&& value) { SetEndDateTime(std::forward<EndDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time remaining in minutes for the <a>CreateExplainability</a>
     * job to complete.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const { return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutesHasBeenSet = true; m_estimatedTimeRemainingInMinutes = value; }
    inline DescribeExplainabilityResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, a message about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribeExplainabilityResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
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
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeExplainabilityResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the Explainability resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeExplainabilityResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DescribeExplainabilityResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeExplainabilityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_explainabilityArn;
    bool m_explainabilityArnHasBeenSet = false;

    Aws::String m_explainabilityName;
    bool m_explainabilityNameHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ExplainabilityConfig m_explainabilityConfig;
    bool m_explainabilityConfigHasBeenSet = false;

    bool m_enableVisualization{false};
    bool m_enableVisualizationHasBeenSet = false;

    DataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    Schema m_schema;
    bool m_schemaHasBeenSet = false;

    Aws::String m_startDateTime;
    bool m_startDateTimeHasBeenSet = false;

    Aws::String m_endDateTime;
    bool m_endDateTimeHasBeenSet = false;

    long long m_estimatedTimeRemainingInMinutes{0};
    bool m_estimatedTimeRemainingInMinutesHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
