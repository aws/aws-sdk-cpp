/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditMitigationActionExecutionMetadata.h>
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
  class ListAuditMitigationActionsExecutionsResult
  {
  public:
    AWS_IOT_API ListAuditMitigationActionsExecutionsResult() = default;
    AWS_IOT_API ListAuditMitigationActionsExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAuditMitigationActionsExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A set of task execution results based on the input parameters. Details
     * include the mitigation action applied, start time, and task status.</p>
     */
    inline const Aws::Vector<AuditMitigationActionExecutionMetadata>& GetActionsExecutions() const { return m_actionsExecutions; }
    template<typename ActionsExecutionsT = Aws::Vector<AuditMitigationActionExecutionMetadata>>
    void SetActionsExecutions(ActionsExecutionsT&& value) { m_actionsExecutionsHasBeenSet = true; m_actionsExecutions = std::forward<ActionsExecutionsT>(value); }
    template<typename ActionsExecutionsT = Aws::Vector<AuditMitigationActionExecutionMetadata>>
    ListAuditMitigationActionsExecutionsResult& WithActionsExecutions(ActionsExecutionsT&& value) { SetActionsExecutions(std::forward<ActionsExecutionsT>(value)); return *this;}
    template<typename ActionsExecutionsT = AuditMitigationActionExecutionMetadata>
    ListAuditMitigationActionsExecutionsResult& AddActionsExecutions(ActionsExecutionsT&& value) { m_actionsExecutionsHasBeenSet = true; m_actionsExecutions.emplace_back(std::forward<ActionsExecutionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAuditMitigationActionsExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAuditMitigationActionsExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuditMitigationActionExecutionMetadata> m_actionsExecutions;
    bool m_actionsExecutionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
