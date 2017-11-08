/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_APPLICATIONAUTOSCALING_API DescribeScheduledActionsResult
  {
  public:
    DescribeScheduledActionsResult();
    DescribeScheduledActionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeScheduledActionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the scheduled actions.</p>
     */
    inline const Aws::Vector<ScheduledAction>& GetScheduledActions() const{ return m_scheduledActions; }

    /**
     * <p>Information about the scheduled actions.</p>
     */
    inline void SetScheduledActions(const Aws::Vector<ScheduledAction>& value) { m_scheduledActions = value; }

    /**
     * <p>Information about the scheduled actions.</p>
     */
    inline void SetScheduledActions(Aws::Vector<ScheduledAction>&& value) { m_scheduledActions = std::move(value); }

    /**
     * <p>Information about the scheduled actions.</p>
     */
    inline DescribeScheduledActionsResult& WithScheduledActions(const Aws::Vector<ScheduledAction>& value) { SetScheduledActions(value); return *this;}

    /**
     * <p>Information about the scheduled actions.</p>
     */
    inline DescribeScheduledActionsResult& WithScheduledActions(Aws::Vector<ScheduledAction>&& value) { SetScheduledActions(std::move(value)); return *this;}

    /**
     * <p>Information about the scheduled actions.</p>
     */
    inline DescribeScheduledActionsResult& AddScheduledActions(const ScheduledAction& value) { m_scheduledActions.push_back(value); return *this; }

    /**
     * <p>Information about the scheduled actions.</p>
     */
    inline DescribeScheduledActionsResult& AddScheduledActions(ScheduledAction&& value) { m_scheduledActions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScheduledActionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScheduledActionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token required to get the next set of results. This value is
     * <code>null</code> if there are no more results to return.</p>
     */
    inline DescribeScheduledActionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ScheduledAction> m_scheduledActions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
