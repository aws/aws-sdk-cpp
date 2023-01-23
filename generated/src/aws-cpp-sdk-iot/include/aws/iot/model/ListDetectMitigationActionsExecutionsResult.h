/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/DetectMitigationActionExecution.h>
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
  class ListDetectMitigationActionsExecutionsResult
  {
  public:
    AWS_IOT_API ListDetectMitigationActionsExecutionsResult();
    AWS_IOT_API ListDetectMitigationActionsExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListDetectMitigationActionsExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> List of actions executions. </p>
     */
    inline const Aws::Vector<DetectMitigationActionExecution>& GetActionsExecutions() const{ return m_actionsExecutions; }

    /**
     * <p> List of actions executions. </p>
     */
    inline void SetActionsExecutions(const Aws::Vector<DetectMitigationActionExecution>& value) { m_actionsExecutions = value; }

    /**
     * <p> List of actions executions. </p>
     */
    inline void SetActionsExecutions(Aws::Vector<DetectMitigationActionExecution>&& value) { m_actionsExecutions = std::move(value); }

    /**
     * <p> List of actions executions. </p>
     */
    inline ListDetectMitigationActionsExecutionsResult& WithActionsExecutions(const Aws::Vector<DetectMitigationActionExecution>& value) { SetActionsExecutions(value); return *this;}

    /**
     * <p> List of actions executions. </p>
     */
    inline ListDetectMitigationActionsExecutionsResult& WithActionsExecutions(Aws::Vector<DetectMitigationActionExecution>&& value) { SetActionsExecutions(std::move(value)); return *this;}

    /**
     * <p> List of actions executions. </p>
     */
    inline ListDetectMitigationActionsExecutionsResult& AddActionsExecutions(const DetectMitigationActionExecution& value) { m_actionsExecutions.push_back(value); return *this; }

    /**
     * <p> List of actions executions. </p>
     */
    inline ListDetectMitigationActionsExecutionsResult& AddActionsExecutions(DetectMitigationActionExecution&& value) { m_actionsExecutions.push_back(std::move(value)); return *this; }


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
    inline ListDetectMitigationActionsExecutionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListDetectMitigationActionsExecutionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline ListDetectMitigationActionsExecutionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<DetectMitigationActionExecution> m_actionsExecutions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
