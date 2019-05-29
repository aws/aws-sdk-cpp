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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ScheduledWindowExecution.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API DescribeMaintenanceWindowScheduleResult
  {
  public:
    DescribeMaintenanceWindowScheduleResult();
    DescribeMaintenanceWindowScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMaintenanceWindowScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about maintenance window executions scheduled for the specified
     * time range.</p>
     */
    inline const Aws::Vector<ScheduledWindowExecution>& GetScheduledWindowExecutions() const{ return m_scheduledWindowExecutions; }

    /**
     * <p>Information about maintenance window executions scheduled for the specified
     * time range.</p>
     */
    inline void SetScheduledWindowExecutions(const Aws::Vector<ScheduledWindowExecution>& value) { m_scheduledWindowExecutions = value; }

    /**
     * <p>Information about maintenance window executions scheduled for the specified
     * time range.</p>
     */
    inline void SetScheduledWindowExecutions(Aws::Vector<ScheduledWindowExecution>&& value) { m_scheduledWindowExecutions = std::move(value); }

    /**
     * <p>Information about maintenance window executions scheduled for the specified
     * time range.</p>
     */
    inline DescribeMaintenanceWindowScheduleResult& WithScheduledWindowExecutions(const Aws::Vector<ScheduledWindowExecution>& value) { SetScheduledWindowExecutions(value); return *this;}

    /**
     * <p>Information about maintenance window executions scheduled for the specified
     * time range.</p>
     */
    inline DescribeMaintenanceWindowScheduleResult& WithScheduledWindowExecutions(Aws::Vector<ScheduledWindowExecution>&& value) { SetScheduledWindowExecutions(std::move(value)); return *this;}

    /**
     * <p>Information about maintenance window executions scheduled for the specified
     * time range.</p>
     */
    inline DescribeMaintenanceWindowScheduleResult& AddScheduledWindowExecutions(const ScheduledWindowExecution& value) { m_scheduledWindowExecutions.push_back(value); return *this; }

    /**
     * <p>Information about maintenance window executions scheduled for the specified
     * time range.</p>
     */
    inline DescribeMaintenanceWindowScheduleResult& AddScheduledWindowExecutions(ScheduledWindowExecution&& value) { m_scheduledWindowExecutions.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline DescribeMaintenanceWindowScheduleResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline DescribeMaintenanceWindowScheduleResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You use this token in the
     * next call.)</p>
     */
    inline DescribeMaintenanceWindowScheduleResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ScheduledWindowExecution> m_scheduledWindowExecutions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
