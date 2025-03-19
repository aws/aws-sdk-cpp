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
    AWS_FORECASTSERVICE_API DescribeMonitorResult() = default;
    AWS_FORECASTSERVICE_API DescribeMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FORECASTSERVICE_API DescribeMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the monitor.</p>
     */
    inline const Aws::String& GetMonitorName() const { return m_monitorName; }
    template<typename MonitorNameT = Aws::String>
    void SetMonitorName(MonitorNameT&& value) { m_monitorNameHasBeenSet = true; m_monitorName = std::forward<MonitorNameT>(value); }
    template<typename MonitorNameT = Aws::String>
    DescribeMonitorResult& WithMonitorName(MonitorNameT&& value) { SetMonitorName(std::forward<MonitorNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the monitor resource described.</p>
     */
    inline const Aws::String& GetMonitorArn() const { return m_monitorArn; }
    template<typename MonitorArnT = Aws::String>
    void SetMonitorArn(MonitorArnT&& value) { m_monitorArnHasBeenSet = true; m_monitorArn = std::forward<MonitorArnT>(value); }
    template<typename MonitorArnT = Aws::String>
    DescribeMonitorResult& WithMonitorArn(MonitorArnT&& value) { SetMonitorArn(std::forward<MonitorArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the auto predictor being monitored.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    DescribeMonitorResult& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the monitor resource.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    DescribeMonitorResult& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the latest evaluation completed by the monitor.</p>
     */
    inline const Aws::Utils::DateTime& GetLastEvaluationTime() const { return m_lastEvaluationTime; }
    template<typename LastEvaluationTimeT = Aws::Utils::DateTime>
    void SetLastEvaluationTime(LastEvaluationTimeT&& value) { m_lastEvaluationTimeHasBeenSet = true; m_lastEvaluationTime = std::forward<LastEvaluationTimeT>(value); }
    template<typename LastEvaluationTimeT = Aws::Utils::DateTime>
    DescribeMonitorResult& WithLastEvaluationTime(LastEvaluationTimeT&& value) { SetLastEvaluationTime(std::forward<LastEvaluationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the monitor's latest evaluation.</p>
     */
    inline const Aws::String& GetLastEvaluationState() const { return m_lastEvaluationState; }
    template<typename LastEvaluationStateT = Aws::String>
    void SetLastEvaluationState(LastEvaluationStateT&& value) { m_lastEvaluationStateHasBeenSet = true; m_lastEvaluationState = std::forward<LastEvaluationStateT>(value); }
    template<typename LastEvaluationStateT = Aws::String>
    DescribeMonitorResult& WithLastEvaluationState(LastEvaluationStateT&& value) { SetLastEvaluationState(std::forward<LastEvaluationStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metrics you can use as a baseline for comparison purposes. Use these values
     * you interpret monitoring results for an auto predictor.</p>
     */
    inline const Baseline& GetBaseline() const { return m_baseline; }
    template<typename BaselineT = Baseline>
    void SetBaseline(BaselineT&& value) { m_baselineHasBeenSet = true; m_baseline = std::forward<BaselineT>(value); }
    template<typename BaselineT = Baseline>
    DescribeMonitorResult& WithBaseline(BaselineT&& value) { SetBaseline(std::forward<BaselineT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An error message, if any, for the monitor.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DescribeMonitorResult& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the monitor resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribeMonitorResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of the latest modification to the monitor.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModificationTime() const { return m_lastModificationTime; }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    void SetLastModificationTime(LastModificationTimeT&& value) { m_lastModificationTimeHasBeenSet = true; m_lastModificationTime = std::forward<LastModificationTimeT>(value); }
    template<typename LastModificationTimeT = Aws::Utils::DateTime>
    DescribeMonitorResult& WithLastModificationTime(LastModificationTimeT&& value) { SetLastModificationTime(std::forward<LastModificationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The estimated number of minutes remaining before the monitor resource
     * finishes its current evaluation.</p>
     */
    inline long long GetEstimatedEvaluationTimeRemainingInMinutes() const { return m_estimatedEvaluationTimeRemainingInMinutes; }
    inline void SetEstimatedEvaluationTimeRemainingInMinutes(long long value) { m_estimatedEvaluationTimeRemainingInMinutesHasBeenSet = true; m_estimatedEvaluationTimeRemainingInMinutes = value; }
    inline DescribeMonitorResult& WithEstimatedEvaluationTimeRemainingInMinutes(long long value) { SetEstimatedEvaluationTimeRemainingInMinutes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeMonitorResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_monitorName;
    bool m_monitorNameHasBeenSet = false;

    Aws::String m_monitorArn;
    bool m_monitorArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_lastEvaluationTime{};
    bool m_lastEvaluationTimeHasBeenSet = false;

    Aws::String m_lastEvaluationState;
    bool m_lastEvaluationStateHasBeenSet = false;

    Baseline m_baseline;
    bool m_baselineHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModificationTime{};
    bool m_lastModificationTimeHasBeenSet = false;

    long long m_estimatedEvaluationTimeRemainingInMinutes{0};
    bool m_estimatedEvaluationTimeRemainingInMinutesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
