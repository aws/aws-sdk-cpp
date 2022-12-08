/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringAlertSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListMonitoringAlertsResult
  {
  public:
    AWS_SAGEMAKER_API ListMonitoringAlertsResult();
    AWS_SAGEMAKER_API ListMonitoringAlertsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListMonitoringAlertsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline const Aws::Vector<MonitoringAlertSummary>& GetMonitoringAlertSummaries() const{ return m_monitoringAlertSummaries; }

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline void SetMonitoringAlertSummaries(const Aws::Vector<MonitoringAlertSummary>& value) { m_monitoringAlertSummaries = value; }

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline void SetMonitoringAlertSummaries(Aws::Vector<MonitoringAlertSummary>&& value) { m_monitoringAlertSummaries = std::move(value); }

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline ListMonitoringAlertsResult& WithMonitoringAlertSummaries(const Aws::Vector<MonitoringAlertSummary>& value) { SetMonitoringAlertSummaries(value); return *this;}

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline ListMonitoringAlertsResult& WithMonitoringAlertSummaries(Aws::Vector<MonitoringAlertSummary>&& value) { SetMonitoringAlertSummaries(std::move(value)); return *this;}

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline ListMonitoringAlertsResult& AddMonitoringAlertSummaries(const MonitoringAlertSummary& value) { m_monitoringAlertSummaries.push_back(value); return *this; }

    /**
     * <p>A JSON array where each element is a summary for a monitoring alert.</p>
     */
    inline ListMonitoringAlertsResult& AddMonitoringAlertSummaries(MonitoringAlertSummary&& value) { m_monitoringAlertSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of alerts, use it in the subsequent request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of alerts, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of alerts, use it in the subsequent request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of alerts, use it in the subsequent request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of alerts, use it in the subsequent request.</p>
     */
    inline ListMonitoringAlertsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of alerts, use it in the subsequent request.</p>
     */
    inline ListMonitoringAlertsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, SageMaker returns this token. To retrieve the
     * next set of alerts, use it in the subsequent request.</p>
     */
    inline ListMonitoringAlertsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MonitoringAlertSummary> m_monitoringAlertSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
