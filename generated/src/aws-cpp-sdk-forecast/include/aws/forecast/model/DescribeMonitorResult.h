/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/forecast/model/Baseline.h>
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
  class DescribeMonitorResult
  {
  public:
    AWS_FORECASTSERVICE_API DescribeMonitorResult();
    AWS_FORECASTSERVICE_API DescribeMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(const Aws::String& value) { m_monitorName = value; }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(Aws::String&& value) { m_monitorName = std::move(value); }

    /**
     * <p>The name of the monitor.</p>
     */
    inline void SetMonitorName(const char* value) { m_monitorName.assign(value); }

    /**
     * <p>The name of the monitor.</p>
     */
    inline DescribeMonitorResult& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}

    /**
     * <p>The name of the monitor.</p>
     */
    inline DescribeMonitorResult& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}

    /**
     * <p>The name of the monitor.</p>
     */
    inline DescribeMonitorResult& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource described.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource described.</p>
     */
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource described.</p>
     */
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource described.</p>
     */
    inline void SetMonitorArn(const char* value) { m_monitorArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource described.</p>
     */
    inline DescribeMonitorResult& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource described.</p>
     */
    inline DescribeMonitorResult& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource described.</p>
     */
    inline DescribeMonitorResult& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the auto predictor being monitored.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the auto predictor being monitored.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the auto predictor being monitored.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the auto predictor being monitored.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the auto predictor being monitored.</p>
     */
    inline DescribeMonitorResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the auto predictor being monitored.</p>
     */
    inline DescribeMonitorResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the auto predictor being monitored.</p>
     */
    inline DescribeMonitorResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The status of the monitor resource.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the monitor resource.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_status = value; }

    /**
     * <p>The status of the monitor resource.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the monitor resource.</p>
     */
    inline void SetStatus(const char* value) { m_status.assign(value); }

    /**
     * <p>The status of the monitor resource.</p>
     */
    inline DescribeMonitorResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the monitor resource.</p>
     */
    inline DescribeMonitorResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the monitor resource.</p>
     */
    inline DescribeMonitorResult& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The timestamp of the latest evaluation completed by the monitor.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEvaluationTime() const{ return m_lastEvaluationTime; }

    /**
     * <p>The timestamp of the latest evaluation completed by the monitor.</p>
     */
    inline void SetLastEvaluationTime(const Aws::Utils::DateTime& value) { m_lastEvaluationTime = value; }

    /**
     * <p>The timestamp of the latest evaluation completed by the monitor.</p>
     */
    inline void SetLastEvaluationTime(Aws::Utils::DateTime&& value) { m_lastEvaluationTime = std::move(value); }

    /**
     * <p>The timestamp of the latest evaluation completed by the monitor.</p>
     */
    inline DescribeMonitorResult& WithLastEvaluationTime(const Aws::Utils::DateTime& value) { SetLastEvaluationTime(value); return *this;}

    /**
     * <p>The timestamp of the latest evaluation completed by the monitor.</p>
     */
    inline DescribeMonitorResult& WithLastEvaluationTime(Aws::Utils::DateTime&& value) { SetLastEvaluationTime(std::move(value)); return *this;}


    /**
     * <p>The state of the monitor's latest evaluation.</p>
     */
    inline const Aws::String& GetLastEvaluationState() const{ return m_lastEvaluationState; }

    /**
     * <p>The state of the monitor's latest evaluation.</p>
     */
    inline void SetLastEvaluationState(const Aws::String& value) { m_lastEvaluationState = value; }

    /**
     * <p>The state of the monitor's latest evaluation.</p>
     */
    inline void SetLastEvaluationState(Aws::String&& value) { m_lastEvaluationState = std::move(value); }

    /**
     * <p>The state of the monitor's latest evaluation.</p>
     */
    inline void SetLastEvaluationState(const char* value) { m_lastEvaluationState.assign(value); }

    /**
     * <p>The state of the monitor's latest evaluation.</p>
     */
    inline DescribeMonitorResult& WithLastEvaluationState(const Aws::String& value) { SetLastEvaluationState(value); return *this;}

    /**
     * <p>The state of the monitor's latest evaluation.</p>
     */
    inline DescribeMonitorResult& WithLastEvaluationState(Aws::String&& value) { SetLastEvaluationState(std::move(value)); return *this;}

    /**
     * <p>The state of the monitor's latest evaluation.</p>
     */
    inline DescribeMonitorResult& WithLastEvaluationState(const char* value) { SetLastEvaluationState(value); return *this;}


    /**
     * <p>Metrics you can use as a baseline for comparison purposes. Use these values
     * you interpret monitoring results for an auto predictor.</p>
     */
    inline const Baseline& GetBaseline() const{ return m_baseline; }

    /**
     * <p>Metrics you can use as a baseline for comparison purposes. Use these values
     * you interpret monitoring results for an auto predictor.</p>
     */
    inline void SetBaseline(const Baseline& value) { m_baseline = value; }

    /**
     * <p>Metrics you can use as a baseline for comparison purposes. Use these values
     * you interpret monitoring results for an auto predictor.</p>
     */
    inline void SetBaseline(Baseline&& value) { m_baseline = std::move(value); }

    /**
     * <p>Metrics you can use as a baseline for comparison purposes. Use these values
     * you interpret monitoring results for an auto predictor.</p>
     */
    inline DescribeMonitorResult& WithBaseline(const Baseline& value) { SetBaseline(value); return *this;}

    /**
     * <p>Metrics you can use as a baseline for comparison purposes. Use these values
     * you interpret monitoring results for an auto predictor.</p>
     */
    inline DescribeMonitorResult& WithBaseline(Baseline&& value) { SetBaseline(std::move(value)); return *this;}


    /**
     * <p>An error message, if any, for the monitor.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }

    /**
     * <p>An error message, if any, for the monitor.</p>
     */
    inline void SetMessage(const Aws::String& value) { m_message = value; }

    /**
     * <p>An error message, if any, for the monitor.</p>
     */
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }

    /**
     * <p>An error message, if any, for the monitor.</p>
     */
    inline void SetMessage(const char* value) { m_message.assign(value); }

    /**
     * <p>An error message, if any, for the monitor.</p>
     */
    inline DescribeMonitorResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}

    /**
     * <p>An error message, if any, for the monitor.</p>
     */
    inline DescribeMonitorResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}

    /**
     * <p>An error message, if any, for the monitor.</p>
     */
    inline DescribeMonitorResult& WithMessage(const char* value) { SetMessage(value); return *this;}


    /**
     * <p>The timestamp for when the monitor resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The timestamp for when the monitor resource was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The timestamp for when the monitor resource was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The timestamp for when the monitor resource was created.</p>
     */
    inline DescribeMonitorResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The timestamp for when the monitor resource was created.</p>
     */
    inline DescribeMonitorResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The timestamp of the latest modification to the monitor.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }

    /**
     * <p>The timestamp of the latest modification to the monitor.</p>
     */
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }

    /**
     * <p>The timestamp of the latest modification to the monitor.</p>
     */
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }

    /**
     * <p>The timestamp of the latest modification to the monitor.</p>
     */
    inline DescribeMonitorResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}

    /**
     * <p>The timestamp of the latest modification to the monitor.</p>
     */
    inline DescribeMonitorResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}


    /**
     * <p>The estimated number of minutes remaining before the monitor resource
     * finishes its current evaluation.</p>
     */
    inline long long GetEstimatedEvaluationTimeRemainingInMinutes() const{ return m_estimatedEvaluationTimeRemainingInMinutes; }

    /**
     * <p>The estimated number of minutes remaining before the monitor resource
     * finishes its current evaluation.</p>
     */
    inline void SetEstimatedEvaluationTimeRemainingInMinutes(long long value) { m_estimatedEvaluationTimeRemainingInMinutes = value; }

    /**
     * <p>The estimated number of minutes remaining before the monitor resource
     * finishes its current evaluation.</p>
     */
    inline DescribeMonitorResult& WithEstimatedEvaluationTimeRemainingInMinutes(long long value) { SetEstimatedEvaluationTimeRemainingInMinutes(value); return *this;}

  private:

    Aws::String m_monitorName;

    Aws::String m_monitorArn;

    Aws::String m_resourceArn;

    Aws::String m_status;

    Aws::Utils::DateTime m_lastEvaluationTime;

    Aws::String m_lastEvaluationState;

    Baseline m_baseline;

    Aws::String m_message;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModificationTime;

    long long m_estimatedEvaluationTimeRemainingInMinutes;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
