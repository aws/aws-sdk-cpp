﻿/**
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
    AWS_APPLICATIONAUTOSCALING_API DescribeScheduledActionsResult();
    AWS_APPLICATIONAUTOSCALING_API DescribeScheduledActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONAUTOSCALING_API DescribeScheduledActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Information about the scheduled actions.</p>
     */
    inline const Aws::Vector<ScheduledAction>& GetScheduledActions() const{ return m_scheduledActions; }
    inline void SetScheduledActions(const Aws::Vector<ScheduledAction>& value) { m_scheduledActions = value; }
    inline void SetScheduledActions(Aws::Vector<ScheduledAction>&& value) { m_scheduledActions = std::move(value); }
    inline DescribeScheduledActionsResult& WithScheduledActions(const Aws::Vector<ScheduledAction>& value) { SetScheduledActions(value); return *this;}
    inline DescribeScheduledActionsResult& WithScheduledActions(Aws::Vector<ScheduledAction>&& value) { SetScheduledActions(std::move(value)); return *this;}
    inline DescribeScheduledActionsResult& AddScheduledActions(const ScheduledAction& value) { m_scheduledActions.push_back(value); return *this; }
    inline DescribeScheduledActionsResult& AddScheduledActions(ScheduledAction&& value) { m_scheduledActions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeScheduledActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeScheduledActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeScheduledActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeScheduledActionsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeScheduledActionsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeScheduledActionsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ScheduledAction> m_scheduledActions;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
