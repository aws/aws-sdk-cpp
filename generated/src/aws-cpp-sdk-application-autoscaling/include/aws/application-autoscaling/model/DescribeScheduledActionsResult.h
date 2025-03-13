/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/application-autoscaling/model/ScheduledAction.h>
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
namespace ApplicationAutoScaling
{
namespace Model
{
  class DescribeScheduledActionsResult
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API DescribeScheduledActionsResult() = default;
    AWS_APPLICATIONAUTOSCALING_API DescribeScheduledActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API DescribeScheduledActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the scheduled actions.</p>
     */
    inline const Aws::Vector<ScheduledAction>& GetScheduledActions() const { return m_scheduledActions; }
    template<typename ScheduledActionsT = Aws::Vector<ScheduledAction>>
    void SetScheduledActions(ScheduledActionsT&& value) { m_scheduledActionsHasBeenSet = true; m_scheduledActions = std::forward<ScheduledActionsT>(value); }
    template<typename ScheduledActionsT = Aws::Vector<ScheduledAction>>
    DescribeScheduledActionsResult& WithScheduledActions(ScheduledActionsT&& value) { SetScheduledActions(std::forward<ScheduledActionsT>(value)); return *this;}
    template<typename ScheduledActionsT = ScheduledAction>
    DescribeScheduledActionsResult& AddScheduledActions(ScheduledActionsT&& value) { m_scheduledActionsHasBeenSet = true; m_scheduledActions.emplace_back(std::forward<ScheduledActionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeScheduledActionsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeScheduledActionsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ScheduledAction> m_scheduledActions;
    bool m_scheduledActionsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
