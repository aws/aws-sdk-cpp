/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/TimeSeriesReplacementsDataSource.h>
#include <aws/forecast/model/TimeSeriesTransformation.h>
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
  class DescribeWhatIfForecastResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastResult() = default;
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastName() const { return m_whatIfForecastName; }
    template<typename WhatIfForecastNameT = Aws::String>
    void SetWhatIfForecastName(WhatIfForecastNameT&& value) { m_whatIfForecastNameHasBeenSet = true; m_whatIfForecastName = std::forward<WhatIfForecastNameT>(value); }
    template<typename WhatIfForecastNameT = Aws::String>
    DescribeWhatIfForecastResult& WithWhatIfForecastName(WhatIfForecastNameT&& value) { SetWhatIfForecastName(std::forward<WhatIfForecastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastArn() const { return m_whatIfForecastArn; }
    template<typename WhatIfForecastArnT = Aws::String>
    void SetWhatIfForecastArn(WhatIfForecastArnT&& value) { m_whatIfForecastArnHasBeenSet = true; m_whatIfForecastArn = std::forward<WhatIfForecastArnT>(value); }
    template<typename WhatIfForecastArnT = Aws::String>
    DescribeWhatIfForecastResult& WithWhatIfForecastArn(WhatIfForecastArnT&& value) { SetWhatIfForecastArn(std::forward<WhatIfForecastArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that contains this
     * forecast.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const { return m_whatIfAnalysisArn; }
    template<typename WhatIfAnalysisArnT = Aws::String>
    void SetWhatIfAnalysisArn(WhatIfAnalysisArnT&& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = std::forward<WhatIfAnalysisArnT>(value); }
    template<typename WhatIfAnalysisArnT = Aws::String>
    DescribeWhatIfForecastResult& WithWhatIfAnalysisArn(WhatIfAnalysisArnT&& value) { SetWhatIfAnalysisArn(std::forward<WhatIfAnalysisArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate time remaining to complete the what-if forecast, in
     * minutes.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const { return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutesHasBeenSet = true; m_estimatedTimeRemainingInMinutes = value; }
    inline DescribeWhatIfForecastResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the what-if forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if forecast must be <code>ACTIVE</code> before you can access the
     * forecast.</p> 
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeWhatIfForecastResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribeWhatIfForecastResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the what-if forecast was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeWhatIfForecastResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    DescribeWhatIfForecastResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>Action</code> and <code>TimeSeriesConditions</code>
     * elements that describe what transformations were applied to which time
     * series.</p>
     */
    inline const Aws::Vector<TimeSeriesTransformation>& GetTimeSeriesTransformations() const { return m_timeSeriesTransformations; }
    template<typename TimeSeriesTransformationsT = Aws::Vector<TimeSeriesTransformation>>
    void SetTimeSeriesTransformations(TimeSeriesTransformationsT&& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations = std::forward<TimeSeriesTransformationsT>(value); }
    template<typename TimeSeriesTransformationsT = Aws::Vector<TimeSeriesTransformation>>
    DescribeWhatIfForecastResult& WithTimeSeriesTransformations(TimeSeriesTransformationsT&& value) { SetTimeSeriesTransformations(std::forward<TimeSeriesTransformationsT>(value)); return *this;}
    template<typename TimeSeriesTransformationsT = TimeSeriesTransformation>
    DescribeWhatIfForecastResult& AddTimeSeriesTransformations(TimeSeriesTransformationsT&& value) { m_timeSeriesTransformationsHasBeenSet = true; m_timeSeriesTransformations.emplace_back(std::forward<TimeSeriesTransformationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of <code>S3Config</code>, <code>Schema</code>, and
     * <code>Format</code> elements that describe the replacement time series.</p>
     */
    inline const TimeSeriesReplacementsDataSource& GetTimeSeriesReplacementsDataSource() const { return m_timeSeriesReplacementsDataSource; }
    template<typename TimeSeriesReplacementsDataSourceT = TimeSeriesReplacementsDataSource>
    void SetTimeSeriesReplacementsDataSource(TimeSeriesReplacementsDataSourceT&& value) { m_timeSeriesReplacementsDataSourceHasBeenSet = true; m_timeSeriesReplacementsDataSource = std::forward<TimeSeriesReplacementsDataSourceT>(value); }
    template<typename TimeSeriesReplacementsDataSourceT = TimeSeriesReplacementsDataSource>
    DescribeWhatIfForecastResult& WithTimeSeriesReplacementsDataSource(TimeSeriesReplacementsDataSourceT&& value) { SetTimeSeriesReplacementsDataSource(std::forward<TimeSeriesReplacementsDataSourceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to five quantiles per what-if forecast in the <a>CreateWhatIfForecast</a>
     * operation. If you didn't specify quantiles, the default values are <code>["0.1",
     * "0.5", "0.9"]</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const { return m_forecastTypes; }
    template<typename ForecastTypesT = Aws::Vector<Aws::String>>
    void SetForecastTypes(ForecastTypesT&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes = std::forward<ForecastTypesT>(value); }
    template<typename ForecastTypesT = Aws::Vector<Aws::String>>
    DescribeWhatIfForecastResult& WithForecastTypes(ForecastTypesT&& value) { SetForecastTypes(std::forward<ForecastTypesT>(value)); return *this;}
    template<typename ForecastTypesT = Aws::String>
    DescribeWhatIfForecastResult& AddForecastTypes(ForecastTypesT&& value) { m_forecastTypesHasBeenSet = true; m_forecastTypes.emplace_back(std::forward<ForecastTypesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWhatIfForecastResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfForecastName;
    bool m_whatIfForecastNameHasBeenSet = false;

    Aws::String m_whatIfForecastArn;
    bool m_whatIfForecastArnHasBeenSet = false;

    Aws::String m_whatIfAnalysisArn;
    bool m_whatIfAnalysisArnHasBeenSet = false;

    long long m_estimatedTimeRemainingInMinutes{0};
    bool m_estimatedTimeRemainingInMinutesHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    Aws::Vector<TimeSeriesTransformation> m_timeSeriesTransformations;
    bool m_timeSeriesTransformationsHasBeenSet = false;

    TimeSeriesReplacementsDataSource m_timeSeriesReplacementsDataSource;
    bool m_timeSeriesReplacementsDataSourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_forecastTypes;
    bool m_forecastTypesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
