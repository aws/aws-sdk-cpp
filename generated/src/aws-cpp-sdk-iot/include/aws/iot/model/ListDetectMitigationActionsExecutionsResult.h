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
    AWS_IOT_API ListDetectMitigationActionsExecutionsResult() = default;
    AWS_IOT_API ListDetectMitigationActionsExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListDetectMitigationActionsExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> List of actions executions. </p>
     */
    inline const Aws::Vector<DetectMitigationActionExecution>& GetActionsExecutions() const { return m_actionsExecutions; }
    template<typename ActionsExecutionsT = Aws::Vector<DetectMitigationActionExecution>>
    void SetActionsExecutions(ActionsExecutionsT&& value) { m_actionsExecutionsHasBeenSet = true; m_actionsExecutions = std::forward<ActionsExecutionsT>(value); }
    template<typename ActionsExecutionsT = Aws::Vector<DetectMitigationActionExecution>>
    ListDetectMitigationActionsExecutionsResult& WithActionsExecutions(ActionsExecutionsT&& value) { SetActionsExecutions(std::forward<ActionsExecutionsT>(value)); return *this;}
    template<typename ActionsExecutionsT = DetectMitigationActionExecution>
    ListDetectMitigationActionsExecutionsResult& AddActionsExecutions(ActionsExecutionsT&& value) { m_actionsExecutionsHasBeenSet = true; m_actionsExecutions.emplace_back(std::forward<ActionsExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDetectMitigationActionsExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDetectMitigationActionsExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DetectMitigationActionExecution> m_actionsExecutions;
    bool m_actionsExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
