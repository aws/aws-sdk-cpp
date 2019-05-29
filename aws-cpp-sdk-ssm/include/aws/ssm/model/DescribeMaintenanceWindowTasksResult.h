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
#include <aws/ssm/model/MaintenanceWindowTask.h>
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
  class AWS_SSM_API DescribeMaintenanceWindowTasksResult
  {
  public:
    DescribeMaintenanceWindowTasksResult();
    DescribeMaintenanceWindowTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeMaintenanceWindowTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline const Aws::Vector<MaintenanceWindowTask>& GetTasks() const{ return m_tasks; }

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline void SetTasks(const Aws::Vector<MaintenanceWindowTask>& value) { m_tasks = value; }

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline void SetTasks(Aws::Vector<MaintenanceWindowTask>&& value) { m_tasks = std::move(value); }

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& WithTasks(const Aws::Vector<MaintenanceWindowTask>& value) { SetTasks(value); return *this;}

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& WithTasks(Aws::Vector<MaintenanceWindowTask>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& AddTasks(const MaintenanceWindowTask& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>Information about the tasks in the maintenance window.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& AddTasks(MaintenanceWindowTask&& value) { m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use when requesting the next set of items. If there are no
     * additional items to return, the string is empty.</p>
     */
    inline DescribeMaintenanceWindowTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<MaintenanceWindowTask> m_tasks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
