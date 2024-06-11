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


    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const{ return m_monitorName; }
    inline void SetMonitorName(const Aws::String& value) { m_monitorName = value; }
    inline void SetMonitorName(Aws::String&& value) { m_monitorName = std::move(value); }
    inline void SetMonitorName(const char* value) { m_monitorName.assign(value); }
    inline DescribeMonitorResult& WithMonitorName(const Aws::String& value) { SetMonitorName(value); return *this;}
    inline DescribeMonitorResult& WithMonitorName(Aws::String&& value) { SetMonitorName(std::move(value)); return *this;}
    inline DescribeMonitorResult& WithMonitorName(const char* value) { SetMonitorName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource described.</p>
     */
    inline const Aws::String& GetMonitorArn() const{ return m_monitorArn; }
    inline void SetMonitorArn(const Aws::String& value) { m_monitorArn = value; }
    inline void SetMonitorArn(Aws::String&& value) { m_monitorArn = std::move(value); }
    inline void SetMonitorArn(const char* value) { m_monitorArn.assign(value); }
    inline DescribeMonitorResult& WithMonitorArn(const Aws::String& value) { SetMonitorArn(value); return *this;}
    inline DescribeMonitorResult& WithMonitorArn(Aws::String&& value) { SetMonitorArn(std::move(value)); return *this;}
    inline DescribeMonitorResult& WithMonitorArn(const char* value) { SetMonitorArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the auto predictor being monitored.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }
    inline DescribeMonitorResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}
    inline DescribeMonitorResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}
    inline DescribeMonitorResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the monitor resource.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline void SetStatus(const Aws::String& value) { m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_status.assign(value); }
    inline DescribeMonitorResult& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline DescribeMonitorResult& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline DescribeMonitorResult& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the latest evaluation completed by the monitor.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEvaluationTime() const{ return m_lastEvaluationTime; }
    inline void SetLastEvaluationTime(const Aws::Utils::DateTime& value) { m_lastEvaluationTime = value; }
    inline void SetLastEvaluationTime(Aws::Utils::DateTime&& value) { m_lastEvaluationTime = std::move(value); }
    inline DescribeMonitorResult& WithLastEvaluationTime(const Aws::Utils::DateTime& value) { SetLastEvaluationTime(value); return *this;}
    inline DescribeMonitorResult& WithLastEvaluationTime(Aws::Utils::DateTime&& value) { SetLastEvaluationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the monitor's latest evaluation.</p>
     */
    inline const Aws::String& GetLastEvaluationState() const{ return m_lastEvaluationState; }
    inline void SetLastEvaluationState(const Aws::String& value) { m_lastEvaluationState = value; }
    inline void SetLastEvaluationState(Aws::String&& value) { m_lastEvaluationState = std::move(value); }
    inline void SetLastEvaluationState(const char* value) { m_lastEvaluationState.assign(value); }
    inline DescribeMonitorResult& WithLastEvaluationState(const Aws::String& value) { SetLastEvaluationState(value); return *this;}
    inline DescribeMonitorResult& WithLastEvaluationState(Aws::String&& value) { SetLastEvaluationState(std::move(value)); return *this;}
    inline DescribeMonitorResult& WithLastEvaluationState(const char* value) { SetLastEvaluationState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics you can use as a baseline for comparison purposes. Use these values
     * you interpret monitoring results for an auto predictor.</p>
     */
    inline const Baseline& GetBaseline() const{ return m_baseline; }
    inline void SetBaseline(const Baseline& value) { m_baseline = value; }
    inline void SetBaseline(Baseline&& value) { m_baseline = std::move(value); }
    inline DescribeMonitorResult& WithBaseline(const Baseline& value) { SetBaseline(value); return *this;}
    inline DescribeMonitorResult& WithBaseline(Baseline&& value) { SetBaseline(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message, if any, for the monitor.</p>
     */
    inline const Aws::String& GetMessage() const{ return m_message; }
    inline void SetMessage(const Aws::String& value) { m_message = value; }
    inline void SetMessage(Aws::String&& value) { m_message = std::move(value); }
    inline void SetMessage(const char* value) { m_message.assign(value); }
    inline DescribeMonitorResult& WithMessage(const Aws::String& value) { SetMessage(value); return *this;}
    inline DescribeMonitorResult& WithMessage(Aws::String&& value) { SetMessage(std::move(value)); return *this;}
    inline DescribeMonitorResult& WithMessage(const char* value) { SetMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the monitor resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribeMonitorResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribeMonitorResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the latest modification to the monitor.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const{ return m_lastModificationTime; }
    inline void SetLastModificationTime(const Aws::Utils::DateTime& value) { m_lastModificationTime = value; }
    inline void SetLastModificationTime(Aws::Utils::DateTime&& value) { m_lastModificationTime = std::move(value); }
    inline DescribeMonitorResult& WithLastModificationTime(const Aws::Utils::DateTime& value) { SetLastModificationTime(value); return *this;}
    inline DescribeMonitorResult& WithLastModificationTime(Aws::Utils::DateTime&& value) { SetLastModificationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated number of minutes remaining before the monitor resource
     * finishes its current evaluation.</p>
     */
    inline long long GetEstimatedEvaluationTimeRemainingInMinutes() const{ return m_estimatedEvaluationTimeRemainingInMinutes; }
    inline void SetEstimatedEvaluationTimeRemainingInMinutes(long long value) { m_estimatedEvaluationTimeRemainingInMinutes = value; }
    inline DescribeMonitorResult& WithEstimatedEvaluationTimeRemainingInMinutes(long long value) { SetEstimatedEvaluationTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeMonitorResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeMonitorResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeMonitorResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
