/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/MonitoringExecutionSummary.h>
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
  class ListMonitoringExecutionsResult
  {
  public:
    AWS_SAGEMAKER_API ListMonitoringExecutionsResult();
    AWS_SAGEMAKER_API ListMonitoringExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListMonitoringExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A JSON array in which each element is a summary for a monitoring
     * execution.</p>
     */
    inline const Aws::Vector<MonitoringExecutionSummary>& GetMonitoringExecutionSummaries() const{ return m_monitoringExecutionSummaries; }

    /**
     * <p>A JSON array in which each element is a summary for a monitoring
     * execution.</p>
     */
    inline void SetMonitoringExecutionSummaries(const Aws::Vector<MonitoringExecutionSummary>& value) { m_monitoringExecutionSummaries = value; }

    /**
     * <p>A JSON array in which each element is a summary for a monitoring
     * execution.</p>
     */
    inline void SetMonitoringExecutionSummaries(Aws::Vector<MonitoringExecutionSummary>&& value) { m_monitoringExecutionSummaries = std::move(value); }

    /**
     * <p>A JSON array in which each element is a summary for a monitoring
     * execution.</p>
     */
    inline ListMonitoringExecutionsResult& WithMonitoringExecutionSummaries(const Aws::Vector<MonitoringExecutionSummary>& value) { SetMonitoringExecutionSummaries(value); return *this;}

    /**
     * <p>A JSON array in which each element is a summary for a monitoring
     * execution.</p>
     */
    inline ListMonitoringExecutionsResult& WithMonitoringExecutionSummaries(Aws::Vector<MonitoringExecutionSummary>&& value) { SetMonitoringExecutionSummaries(std::move(value)); return *this;}

    /**
     * <p>A JSON array in which each element is a summary for a monitoring
     * execution.</p>
     */
    inline ListMonitoringExecutionsResult& AddMonitoringExecutionSummaries(const MonitoringExecutionSummary& value) { m_monitoringExecutionSummaries.push_back(value); return *this; }

    /**
     * <p>A JSON array in which each element is a summary for a monitoring
     * execution.</p>
     */
    inline ListMonitoringExecutionsResult& AddMonitoringExecutionSummaries(MonitoringExecutionSummary&& value) { m_monitoringExecutionSummaries.push_back(std::move(value)); return *this; }


    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of jobs, use it in the subsequent reques</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of jobs, use it in the subsequent reques</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of jobs, use it in the subsequent reques</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of jobs, use it in the subsequent reques</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of jobs, use it in the subsequent reques</p>
     */
    inline ListMonitoringExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of jobs, use it in the subsequent reques</p>
     */
    inline ListMonitoringExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response is truncated, Amazon SageMaker returns this token. To
     * retrieve the next set of jobs, use it in the subsequent reques</p>
     */
    inline ListMonitoringExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MonitoringExecutionSummary> m_monitoringExecutionSummaries;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
