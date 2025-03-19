/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codepipeline/CodePipeline_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codepipeline/model/ActionExecutionDetail.h>
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
namespace CodePipeline
{
namespace Model
{
  class ListActionExecutionsResult
  {
  public:
    AWS_CODEPIPELINE_API ListActionExecutionsResult() = default;
    AWS_CODEPIPELINE_API ListActionExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CODEPIPELINE_API ListActionExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The details for a list of recent executions, such as action execution ID.</p>
     */
    inline const Aws::Vector<ActionExecutionDetail>& GetActionExecutionDetails() const { return m_actionExecutionDetails; }
    template<typename ActionExecutionDetailsT = Aws::Vector<ActionExecutionDetail>>
    void SetActionExecutionDetails(ActionExecutionDetailsT&& value) { m_actionExecutionDetailsHasBeenSet = true; m_actionExecutionDetails = std::forward<ActionExecutionDetailsT>(value); }
    template<typename ActionExecutionDetailsT = Aws::Vector<ActionExecutionDetail>>
    ListActionExecutionsResult& WithActionExecutionDetails(ActionExecutionDetailsT&& value) { SetActionExecutionDetails(std::forward<ActionExecutionDetailsT>(value)); return *this;}
    template<typename ActionExecutionDetailsT = ActionExecutionDetail>
    ListActionExecutionsResult& AddActionExecutionDetails(ActionExecutionDetailsT&& value) { m_actionExecutionDetailsHasBeenSet = true; m_actionExecutionDetails.emplace_back(std::forward<ActionExecutionDetailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the amount of returned information is significantly large, an identifier
     * is also returned and can be used in a subsequent
     * <code>ListActionExecutions</code> call to return the next set of action
     * executions in the list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListActionExecutionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListActionExecutionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ActionExecutionDetail> m_actionExecutionDetails;
    bool m_actionExecutionDetailsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodePipeline
} // namespace Aws
