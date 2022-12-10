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
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastResult();
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeWhatIfForecastResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastName() const{ return m_whatIfForecastName; }

    /**
     * <p>The name of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastName(const Aws::String& value) { m_whatIfForecastName = value; }

    /**
     * <p>The name of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastName(Aws::String&& value) { m_whatIfForecastName = std::move(value); }

    /**
     * <p>The name of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastName(const char* value) { m_whatIfForecastName.assign(value); }

    /**
     * <p>The name of the what-if forecast.</p>
     */
    inline DescribeWhatIfForecastResult& WithWhatIfForecastName(const Aws::String& value) { SetWhatIfForecastName(value); return *this;}

    /**
     * <p>The name of the what-if forecast.</p>
     */
    inline DescribeWhatIfForecastResult& WithWhatIfForecastName(Aws::String&& value) { SetWhatIfForecastName(std::move(value)); return *this;}

    /**
     * <p>The name of the what-if forecast.</p>
     */
    inline DescribeWhatIfForecastResult& WithWhatIfForecastName(const char* value) { SetWhatIfForecastName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline const Aws::String& GetWhatIfForecastArn() const{ return m_whatIfForecastArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastArn(const Aws::String& value) { m_whatIfForecastArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastArn(Aws::String&& value) { m_whatIfForecastArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline void SetWhatIfForecastArn(const char* value) { m_whatIfForecastArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline DescribeWhatIfForecastResult& WithWhatIfForecastArn(const Aws::String& value) { SetWhatIfForecastArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline DescribeWhatIfForecastResult& WithWhatIfForecastArn(Aws::String&& value) { SetWhatIfForecastArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if forecast.</p>
     */
    inline DescribeWhatIfForecastResult& WithWhatIfForecastArn(const char* value) { SetWhatIfForecastArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that contains this
     * forecast.</p>
     */
    inline const Aws::String& GetWhatIfAnalysisArn() const{ return m_whatIfAnalysisArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that contains this
     * forecast.</p>
     */
    inline void SetWhatIfAnalysisArn(const Aws::String& value) { m_whatIfAnalysisArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that contains this
     * forecast.</p>
     */
    inline void SetWhatIfAnalysisArn(Aws::String&& value) { m_whatIfAnalysisArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that contains this
     * forecast.</p>
     */
    inline void SetWhatIfAnalysisArn(const char* value) { m_whatIfAnalysisArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that contains this
     * forecast.</p>
     */
    inline DescribeWhatIfForecastResult& WithWhatIfAnalysisArn(const Aws::String& value) { SetWhatIfAnalysisArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that contains this
     * forecast.</p>
     */
    inline DescribeWhatIfForecastResult& WithWhatIfAnalysisArn(Aws::String&& value) { SetWhatIfAnalysisArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the what-if analysis that contains this
     * forecast.</p>
     */
    inline DescribeWhatIfForecastResult& WithWhatIfAnalysisArn(const char* value) { SetWhatIfAnalysisArn(value); return *this;}


    /**
     * <p>The approximate time remaining to complete the what-if forecast, in
     * minutes.</p>
     */
    inline long long GetEstimatedTimeRemainingInMinutes() const{ return m_estimatedTimeRemainingInMinutes; }

    /**
     * <p>The approximate time remaining to complete the what-if forecast, in
     * minutes.</p>
     */
    inline void SetEstimatedTimeRemainingInMinutes(long long value) { m_estimatedTimeRemainingInMinutes = value; }

    /**
     * <p>The approximate time remaining to complete the what-if forecast, in
     * minutes.</p>
     */
    inline DescribeWhatIfForecastResult& WithEstimatedTimeRemainingInMinutes(long long value) { SetEstimatedTimeRemainingInMinutes(value); return *this;}


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
    inline const Aws::String& GetStatus() const{ return m_status; }

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
    inline void SetStatus(const Aws::String& value) { m_status = value; }

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
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

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
    inline void SetStatus(const char* value) { m_status.assign(value); }

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
    inline DescribeWhatIfForecastResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

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
    inline DescribeWhatIfForecastResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

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
    inline DescribeWhatIfForecastResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeWhatIfForecastResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeWhatIfForecastResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>If an error occurred, an informational message about the error.</p>
     */
    inline DescribeWhatIfForecastResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>When the what-if forecast was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the what-if forecast was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the what-if forecast was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the what-if forecast was created.</p>
     */
    inline DescribeWhatIfForecastResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the what-if forecast was created.</p>
     */
    inline DescribeWhatIfForecastResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


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

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline DescribeWhatIfForecastResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The last time the resource was modified. The timestamp depends on the status
     * of the job:</p> <ul> <li> <p> <code>CREATE_PENDING</code> - The
     * <code>CreationTime</code>.</p> </li> <li> <p> <code>CREATE_IN_PROGRESS</code> -
     * The current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPING</code> - The
     * current timestamp.</p> </li> <li> <p> <code>CREATE_STOPPED</code> - When the job
     * stopped.</p> </li> <li> <p> <code>ACTIVE</code> or <code>CREATE_FAILED</code> -
     * When the job finished or failed.</p> </li> </ul>
     */
    inline DescribeWhatIfForecastResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}


    /**
     * <p>An array of <code>Action</code> and <code>TimeSeriesConditions</code>
     * elements that describe what transformations were applied to which time
     * series.</p>
     */
    inline const Aws::Vector<TimeSeriesTransformation>& GetTimeSeriesTransformations() const{ return m_timeSeriesTransformations; }

    /**
     * <p>An array of <code>Action</code> and <code>TimeSeriesConditions</code>
     * elements that describe what transformations were applied to which time
     * series.</p>
     */
    inline void SetTimeSeriesTransformations(const Aws::Vector<TimeSeriesTransformation>& value) { m_timeSeriesTransformations = value; }

    /**
     * <p>An array of <code>Action</code> and <code>TimeSeriesConditions</code>
     * elements that describe what transformations were applied to which time
     * series.</p>
     */
    inline void SetTimeSeriesTransformations(Aws::Vector<TimeSeriesTransformation>&& value) { m_timeSeriesTransformations = std::move(value); }

    /**
     * <p>An array of <code>Action</code> and <code>TimeSeriesConditions</code>
     * elements that describe what transformations were applied to which time
     * series.</p>
     */
    inline DescribeWhatIfForecastResult& WithTimeSeriesTransformations(const Aws::Vector<TimeSeriesTransformation>& value) { SetTimeSeriesTransformations(value); return *this;}

    /**
     * <p>An array of <code>Action</code> and <code>TimeSeriesConditions</code>
     * elements that describe what transformations were applied to which time
     * series.</p>
     */
    inline DescribeWhatIfForecastResult& WithTimeSeriesTransformations(Aws::Vector<TimeSeriesTransformation>&& value) { SetTimeSeriesTransformations(std::move(value)); return *this;}

    /**
     * <p>An array of <code>Action</code> and <code>TimeSeriesConditions</code>
     * elements that describe what transformations were applied to which time
     * series.</p>
     */
    inline DescribeWhatIfForecastResult& AddTimeSeriesTransformations(const TimeSeriesTransformation& value) { m_timeSeriesTransformations.push_back(value); return *this; }

    /**
     * <p>An array of <code>Action</code> and <code>TimeSeriesConditions</code>
     * elements that describe what transformations were applied to which time
     * series.</p>
     */
    inline DescribeWhatIfForecastResult& AddTimeSeriesTransformations(TimeSeriesTransformation&& value) { m_timeSeriesTransformations.push_back(std::move(value)); return *this; }


    /**
     * <p>An array of <code>S3Config</code>, <code>Schema</code>, and
     * <code>Format</code> elements that describe the replacement time series.</p>
     */
    inline const TimeSeriesReplacementsDataSource& GetTimeSeriesReplacementsDataSource() const{ return m_timeSeriesReplacementsDataSource; }

    /**
     * <p>An array of <code>S3Config</code>, <code>Schema</code>, and
     * <code>Format</code> elements that describe the replacement time series.</p>
     */
    inline void SetTimeSeriesReplacementsDataSource(const TimeSeriesReplacementsDataSource& value) { m_timeSeriesReplacementsDataSource = value; }

    /**
     * <p>An array of <code>S3Config</code>, <code>Schema</code>, and
     * <code>Format</code> elements that describe the replacement time series.</p>
     */
    inline void SetTimeSeriesReplacementsDataSource(TimeSeriesReplacementsDataSource&& value) { m_timeSeriesReplacementsDataSource = std::move(value); }

    /**
     * <p>An array of <code>S3Config</code>, <code>Schema</code>, and
     * <code>Format</code> elements that describe the replacement time series.</p>
     */
    inline DescribeWhatIfForecastResult& WithTimeSeriesReplacementsDataSource(const TimeSeriesReplacementsDataSource& value) { SetTimeSeriesReplacementsDataSource(value); return *this;}

    /**
     * <p>An array of <code>S3Config</code>, <code>Schema</code>, and
     * <code>Format</code> elements that describe the replacement time series.</p>
     */
    inline DescribeWhatIfForecastResult& WithTimeSeriesReplacementsDataSource(TimeSeriesReplacementsDataSource&& value) { SetTimeSeriesReplacementsDataSource(std::move(value)); return *this;}


    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per what-if forecast in the <a>CreateWhatIfForecast</a>
     * operation. If you didn't specify quantiles, the default values are <code>["0.1",
     * "0.5", "0.9"]</code>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetForecastTypes() const{ return m_forecastTypes; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per what-if forecast in the <a>CreateWhatIfForecast</a>
     * operation. If you didn't specify quantiles, the default values are <code>["0.1",
     * "0.5", "0.9"]</code>. </p>
     */
    inline void SetForecastTypes(const Aws::Vector<Aws::String>& value) { m_forecastTypes = value; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per what-if forecast in the <a>CreateWhatIfForecast</a>
     * operation. If you didn't specify quantiles, the default values are <code>["0.1",
     * "0.5", "0.9"]</code>. </p>
     */
    inline void SetForecastTypes(Aws::Vector<Aws::String>&& value) { m_forecastTypes = std::move(value); }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per what-if forecast in the <a>CreateWhatIfForecast</a>
     * operation. If you didn't specify quantiles, the default values are <code>["0.1",
     * "0.5", "0.9"]</code>. </p>
     */
    inline DescribeWhatIfForecastResult& WithForecastTypes(const Aws::Vector<Aws::String>& value) { SetForecastTypes(value); return *this;}

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per what-if forecast in the <a>CreateWhatIfForecast</a>
     * operation. If you didn't specify quantiles, the default values are <code>["0.1",
     * "0.5", "0.9"]</code>. </p>
     */
    inline DescribeWhatIfForecastResult& WithForecastTypes(Aws::Vector<Aws::String>&& value) { SetForecastTypes(std::move(value)); return *this;}

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per what-if forecast in the <a>CreateWhatIfForecast</a>
     * operation. If you didn't specify quantiles, the default values are <code>["0.1",
     * "0.5", "0.9"]</code>. </p>
     */
    inline DescribeWhatIfForecastResult& AddForecastTypes(const Aws::String& value) { m_forecastTypes.push_back(value); return *this; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per what-if forecast in the <a>CreateWhatIfForecast</a>
     * operation. If you didn't specify quantiles, the default values are <code>["0.1",
     * "0.5", "0.9"]</code>. </p>
     */
    inline DescribeWhatIfForecastResult& AddForecastTypes(Aws::String&& value) { m_forecastTypes.push_back(std::move(value)); return *this; }

    /**
     * <p>The quantiles at which probabilistic forecasts are generated. You can specify
     * up to 5 quantiles per what-if forecast in the <a>CreateWhatIfForecast</a>
     * operation. If you didn't specify quantiles, the default values are <code>["0.1",
     * "0.5", "0.9"]</code>. </p>
     */
    inline DescribeWhatIfForecastResult& AddForecastTypes(const char* value) { m_forecastTypes.push_back(value); return *this; }

  private:

    Aws::String m_whatIfForecastName;

    Aws::String m_whatIfForecastArn;

    Aws::String m_whatIfAnalysisArn;

    long long m_estimatedTimeRemainingInMinutes;

    Aws::String m_status;

    Aws::String m_message;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    Aws::Vector<TimeSeriesTransformation> m_timeSeriesTransformations;

    TimeSeriesReplacementsDataSource m_timeSeriesReplacementsDataSource;

    Aws::Vector<Aws::String> m_forecastTypes;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
