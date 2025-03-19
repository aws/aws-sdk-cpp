/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/forecast/model/TimeSeriesSelector.h>
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
  class DescribeWhatIfAnalysisResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeWhatIfAnalysisResult() = default;
    AWS_FORECASTSERVICE_API DescribeWhatIfAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeWhatIfAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the what-if analysis.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisName() const { return m_whatIfAnalysisName; }
    template<typename WhatIfAnalysisNameT = Aws::String>
    void SetWhatIfAnalysisName(WhatIfAnalysisNameT&& value) { m_whatIfAnalysisNameHasBeenSet = true; m_whatIfAnalysisName = std::forward<WhatIfAnalysisNameT>(value); }
    template<typename WhatIfAnalysisNameT = Aws::String>
    DescribeWhatIfAnalysisResult& WithWhatIfAnalysisName(WhatIfAnalysisNameT&& value) { SetWhatIfAnalysisName(std::forward<WhatIfAnalysisNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const { return m_whatIfAnalysisArn; }
    template<typename WhatIfAnalysisArnT = Aws::String>
    void SetWhatIfAnalysisArn(WhatIfAnalysisArnT&& value) { m_whatIfAnalysisArnHasBeenSet = true; m_whatIfAnalysisArn = std::forward<WhatIfAnalysisArnT>(value); }
    template<typename WhatIfAnalysisArnT = Aws::String>
    DescribeWhatIfAnalysisResult& WithWhatIfAnalysisArn(WhatIfAnalysisArnT&& value) { SetWhatIfAnalysisArn(std::forward<WhatIfAnalysisArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline const Aws::String& GetForecastArn() const { return m_forecastArn; }
    template<typename ForecastArnT = Aws::String>
    void SetForecastArn(ForecastArnT&& value) { m_forecastArnHasBeenSet = true; m_forecastArn = std::forward<ForecastArnT>(value); }
    template<typename ForecastArnT = Aws::String>
    DescribeWhatIfAnalysisResult& WithForecastArn(ForecastArnT&& value) { SetForecastArn(std::forward<ForecastArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate time remaining to complete the what-if analysis, in
     * minutes.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const { return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutesHasBeenSet = true; m_estimatedTimeRemainingInMinutes = value; }
    inline DescribeWhatIfAnalysisResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the what-if analysis. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the what-if analysis must be <code>ACTIVE</code> before you can access the
     * analysis.</p> 
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeWhatIfAnalysisResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribeWhatIfAnalysisResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the what-if analysis was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeWhatIfAnalysisResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
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
    DescribeWhatIfAnalysisResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeSeriesSelector& GetTimeSeriesSelector() const { return m_timeSeriesSelector; }
    template<typename TimeSeriesSelectorT = TimeSeriesSelector>
    void SetTimeSeriesSelector(TimeSeriesSelectorT&& value) { m_timeSeriesSelectorHasBeenSet = true; m_timeSeriesSelector = std::forward<TimeSeriesSelectorT>(value); }
    template<typename TimeSeriesSelectorT = TimeSeriesSelector>
    DescribeWhatIfAnalysisResult& WithTimeSeriesSelector(TimeSeriesSelectorT&& value) { SetTimeSeriesSelector(std::forward<TimeSeriesSelectorT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeWhatIfAnalysisResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_whatIfAnalysisName;
    bool m_whatIfAnalysisNameHasBeenSet = false;

    Aws::String m_whatIfAnalysisArn;
    bool m_whatIfAnalysisArnHasBeenSet = false;

    Aws::String m_forecastArn;
    bool m_forecastArnHasBeenSet = false;

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

    TimeSeriesSelector m_timeSeriesSelector;
    bool m_timeSeriesSelectorHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
