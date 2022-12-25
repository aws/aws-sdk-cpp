/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DetectMitigationActionsTaskSummary.h>
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
namespace IoT
{
namespace Model
{
  class ListDetectMitigationActionsTasksResult
  {
  public:
    AWS_IOT_API ListDetectMitigationActionsTasksResult();
    AWS_IOT_API ListDetectMitigationActionsTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListDetectMitigationActionsTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The collection of ML Detect mitigation tasks that matched the filter
     * criteria. </p>
     */
    inline const Aws::Vector<DetectMitigationActionsTaskSummary>& GetTasks() const{ return m_tasks; }

    /**
     * <p> The collection of ML Detect mitigation tasks that matched the filter
     * criteria. </p>
     */
    inline void SetTasks(const Aws::Vector<DetectMitigationActionsTaskSummary>& value) { m_tasks = value; }

    /**
     * <p> The collection of ML Detect mitigation tasks that matched the filter
     * criteria. </p>
     */
    inline void SetTasks(Aws::Vector<DetectMitigationActionsTaskSummary>&& value) { m_tasks = std::move(value); }

    /**
     * <p> The collection of ML Detect mitigation tasks that matched the filter
     * criteria. </p>
     */
    inline ListDetectMitigationActionsTasksResult& WithTasks(const Aws::Vector<DetectMitigationActionsTaskSummary>& value) { SetTasks(value); return *this;}

    /**
     * <p> The collection of ML Detect mitigation tasks that matched the filter
     * criteria. </p>
     */
    inline ListDetectMitigationActionsTasksResult& WithTasks(Aws::Vector<DetectMitigationActionsTaskSummary>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p> The collection of ML Detect mitigation tasks that matched the filter
     * criteria. </p>
     */
    inline ListDetectMitigationActionsTasksResult& AddTasks(const DetectMitigationActionsTaskSummary& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p> The collection of ML Detect mitigation tasks that matched the filter
     * criteria. </p>
     */
    inline ListDetectMitigationActionsTasksResult& AddTasks(DetectMitigationActionsTaskSummary&& value) { m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListDetectMitigationActionsTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListDetectMitigationActionsTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListDetectMitigationActionsTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DetectMitigationActionsTaskSummary> m_tasks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
