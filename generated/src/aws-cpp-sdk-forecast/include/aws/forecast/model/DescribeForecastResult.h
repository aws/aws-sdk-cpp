/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class DescribeForecastResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeForecastResult();
    AWS_FORECASTSERVICE_API DescribeForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The forecast ARN as specified in the request.</p>
     */
    inline const Aws::String& GetForecastArn() const{ return m_forecastArn; }
    inline void SetForecastArn(const Aws::String& value) { m_forecastArn = value; }
    inline void SetForecastArn(Aws::String&& value) { m_forecastArn = std::move(value); }
    inline void SetForecastArn(const char* value) { m_forecastArn.assign(value); }
    inline DescribeForecastResult& WithForecastArn(const Aws::String& value) { SetForecastArn(value); return *this;}
    inline DescribeForecastResult& WithForecastArn(Aws::String&& value) { SetForecastArn(std::move(value)); return *this;}
    inline DescribeForecastResult& WithForecastArn(const char* value) { SetForecastArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the forecast.</p>
     */
    inline const Aws::String& GetForecastName() const{ return m_forecastName; }
    inline void SetForecastName(const Aws::String& value) { m_forecastName = value; }
    inline void SetForecastName(Aws::String&& value) { m_forecastName = std::move(value); }
    inline void SetForecastName(const char* value) { m_forecastName.assign(value); }
    inline DescribeForecastResult& WithForecastName(const Aws::String& value) { SetForecastName(value); return *this;}
    inline DescribeForecastResult& WithForecastName(Aws::String&& value) { SetForecastName(std::move(value)); return *this;}
    inline DescribeForecastResult& WithForecastName(const char* value) { SetForecastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The quantiles at which probabilistic forecasts were generated.</p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const{ return m_forecastTypes; }
    inline void SetForecastTypes(const Aws::Vector<Aws::String>& value) { m_forecastTypes = value; }
    inline void SetForecastTypes(Aws::Vector<Aws::String>&& value) { m_forecastTypes = std::move(value); }
    inline DescribeForecastResult& WithForecastTypes(const Aws::Vector<Aws::String>& value) { SetForecastTypes(value); return *this;}
    inline DescribeForecastResult& WithForecastTypes(Aws::Vector<Aws::String>&& value) { SetForecastTypes(std::move(value)); return *this;}
    inline DescribeForecastResult& AddForecastTypes(const Aws::String& value) { m_forecastTypes.push_back(value); return *this; }
    inline DescribeForecastResult& AddForecastTypes(Aws::String&& value) { m_forecastTypes.push_back(std::move(value)); return *this; }
    inline DescribeForecastResult& AddForecastTypes(const char* value) { m_forecastTypes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the predictor used to generate the forecast.</p>
     */
    inline const Aws::String& GetPredictorArn() const{ return m_predictorArn; }
    inline void SetPredictorArn(const Aws::String& value) { m_predictorArn = value; }
    inline void SetPredictorArn(Aws::String&& value) { m_predictorArn = std::move(value); }
    inline void SetPredictorArn(const char* value) { m_predictorArn.assign(value); }
    inline DescribeForecastResult& WithPredictorArn(const Aws::String& value) { SetPredictorArn(value); return *this;}
    inline DescribeForecastResult& WithPredictorArn(Aws::String&& value) { SetPredictorArn(std::move(value)); return *this;}
    inline DescribeForecastResult& WithPredictorArn(const char* value) { SetPredictorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the dataset group that provided the data used to train the
     * predictor.</p>
     */
    inline const Aws::String& GetDatasetGroupArn() const{ return m_datasetGroupArn; }
    inline void SetDatasetGroupArn(const Aws::String& value) { m_datasetGroupArn = value; }
    inline void SetDatasetGroupArn(Aws::String&& value) { m_datasetGroupArn = std::move(value); }
    inline void SetDatasetGroupArn(const char* value) { m_datasetGroupArn.assign(value); }
    inline DescribeForecastResult& WithDatasetGroupArn(const Aws::String& value) { SetDatasetGroupArn(value); return *this;}
    inline DescribeForecastResult& WithDatasetGroupArn(Aws::String&& value) { SetDatasetGroupArn(std::move(value)); return *this;}
    inline DescribeForecastResult& WithDatasetGroupArn(const char* value) { SetDatasetGroupArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated time remaining in minutes for the forecast job to complete.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const{ return m_estimatedTimeRemainingInMinutes; }
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutes = value; }
    inline DescribeForecastResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the forecast. States include:</p> <ul> <li> <p>
     * <code>ACTIVE</code> </p> </li> <li> <p> <code>CREATE_PENDING</code>,
     * <code>CREATE_IN_PROGRESS</code>, <code>CREATE_FAILED</code> </p> </li> <li> <p>
     * <code>CREATE_STOPPING</code>, <code>CREATE_STOPPED</code> </p> </li> <li> <p>
     * <code>DELETE_PENDING</code>, <code>DELETE_IN_PROGRESS</code>,
     * <code>DELETE_FAILED</code> </p> </li> </ul>  <p>The <code>Status</code> of
     * the forecast must be <code>ACTIVE</code> before you can query or export the
     * forecast.</p> 
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DescribeForecastResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DescribeForecastResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DescribeForecastResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DescribeForecastResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DescribeForecastResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DescribeForecastResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the forecast creation task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeForecastResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeForecastResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
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
    inline DescribeForecastResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline DescribeForecastResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time series to include in the forecast.</p>
     */
    inline const TimeSeriesSelector& GetTimeSeriesSelector() const{ return m_timeSeriesSelector; }
    inline void SetTimeSeriesSelector(const TimeSeriesSelector& value) { m_timeSeriesSelector = value; }
    inline void SetTimeSeriesSelector(TimeSeriesSelector&& value) { m_timeSeriesSelector = std::move(value); }
    inline DescribeForecastResult& WithTimeSeriesSelector(const TimeSeriesSelector& value) { SetTimeSeriesSelector(value); return *this;}
    inline DescribeForecastResult& WithTimeSeriesSelector(TimeSeriesSelector&& value) { SetTimeSeriesSelector(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeForecastResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeForecastResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeForecastResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_forecastArn;

    Aws::String m_forecastName;

    Aws::Vector<Aws::String> m_forecastTypes;

    Aws::String m_predictorArn;

    Aws::String m_datasetGroupArn;

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
