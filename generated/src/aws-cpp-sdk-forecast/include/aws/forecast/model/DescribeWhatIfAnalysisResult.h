﻿/**
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
    AWS_FORECASTSERVICE_API DescribeWhatIfAnalysisResult();
    AWS_FORECASTSERVICE_API DescribeWhatIfAnalysisResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeWhatIfAnalysisResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the what-if analysis.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisName() const{ return m_whatIfAnalysisName; }
    inline void SetWhatIfAnalysisName(const Aws::String& value) { m_whatIfAnalysisName = value; }
    inline void SetWhatIfAnalysisName(Aws::String&& value) { m_whatIfAnalysisName = std::move(value); }
    inline void SetWhatIfAnalysisName(const char* value) { m_whatIfAnalysisName.assign(value); }
    inline DescribeWhatIfAnalysisResult& WithWhatIfAnalysisName(const Aws::String& value) { SetWhatIfAnalysisName(value); return *this;}
    inline DescribeWhatIfAnalysisResult& WithWhatIfAnalysisName(Aws::String&& value) { SetWhatIfAnalysisName(std::move(value)); return *this;}
    inline DescribeWhatIfAnalysisResult& WithWhatIfAnalysisName(const char* value) { SetWhatIfAnalysisName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const{ return m_whatIfAnalysisArn; }
    inline void SetWhatIfAnalysisArn(const Aws::String& value) { m_whatIfAnalysisArn = value; }
    inline void SetWhatIfAnalysisArn(Aws::String&& value) { m_whatIfAnalysisArn = std::move(value); }
    inline void SetWhatIfAnalysisArn(const char* value) { m_whatIfAnalysisArn.assign(value); }
    inline DescribeWhatIfAnalysisResult& WithWhatIfAnalysisArn(const Aws::String& value) { SetWhatIfAnalysisArn(value); return *this;}
    inline DescribeWhatIfAnalysisResult& WithWhatIfAnalysisArn(Aws::String&& value) { SetWhatIfAnalysisArn(std::move(value)); return *this;}
    inline DescribeWhatIfAnalysisResult& WithWhatIfAnalysisArn(const char* value) { SetWhatIfAnalysisArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }
    inline void SetForecastArn(const Aws::String& value) { m_forecastArn = value; }
    inline void SetForecastArn(Aws::String&& value) { m_forecastArn = std::move(value); }
    inline void SetForecastArn(const char* value) { m_forecastArn.assign(value); }
    inline DescribeWhatIfAnalysisResult& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}
    inline DescribeWhatIfAnalysisResult& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}
    inline DescribeWhatIfAnalysisResult& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The approximate time remaining to complete the what-if analysis, in
     * minutes.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const{ return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutes = value; }
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
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DescribeWhatIfAnalysisResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DescribeWhatIfAnalysisResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DescribeWhatIfAnalysisResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DescribeWhatIfAnalysisResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DescribeWhatIfAnalysisResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DescribeWhatIfAnalysisResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the what-if analysis was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeWhatIfAnalysisResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeWhatIfAnalysisResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline DescribeWhatIfAnalysisResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline DescribeWhatIfAnalysisResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const TimeSeriesSelector& GetTimeSeriesSelector() const{ return m_timeSeriesSelector; }
    inline void SetTimeSeriesSelector(const TimeSeriesSelector& value) { m_timeSeriesSelector = value; }
    inline void SetTimeSeriesSelector(TimeSeriesSelector&& value) { m_timeSeriesSelector = std::move(value); }
    inline DescribeWhatIfAnalysisResult& WithTimeSeriesSelector(const TimeSeriesSelector& value) { SetTimeSeriesSelector(value); return *this;}
    inline DescribeWhatIfAnalysisResult& WithTimeSeriesSelector(TimeSeriesSelector&& value) { SetTimeSeriesSelector(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeWhatIfAnalysisResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeWhatIfAnalysisResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeWhatIfAnalysisResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_whatIfAnalysisName;

    Aws::String m_whatIfAnalysisArn;

    Aws::String m_forecastArn;

    long long m_estimatedTimeRemainingInMinutes;

    Aws::String m_status;

    Aws::String m_message;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    TimeSeriesSelector m_timeSeriesSelector;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
