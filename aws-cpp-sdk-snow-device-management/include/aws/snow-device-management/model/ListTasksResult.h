/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snow-device-management/SnowDeviceManagement_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/snow-device-management/model/TaskSummary.h>
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
namespace SnowDeviceManagement
{
namespace Model
{
  class ListTasksResult
  {
  public:
    AWS_SNOWDEVICEMANAGEMENT_API ListTasksResult();
    AWS_SNOWDEVICEMANAGEMENT_API ListTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWDEVICEMANAGEMENT_API ListTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline ListTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline ListTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token to continue to the next page of tasks.</p>
     */
    inline ListTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of task structures containing details about each task.</p>
     */
    inline const Aws::Vector<TaskSummary>& GetTasks() const{ return m_tasks; }

    /**
     * <p>A list of task structures containing details about each task.</p>
     */
    inline void SetTasks(const Aws::Vector<TaskSummary>& value) { m_tasks = value; }

    /**
     * <p>A list of task structures containing details about each task.</p>
     */
    inline void SetTasks(Aws::Vector<TaskSummary>&& value) { m_tasks = std::move(value); }

    /**
     * <p>A list of task structures containing details about each task.</p>
     */
    inline ListTasksResult& WithTasks(const Aws::Vector<TaskSummary>& value) { SetTasks(value); return *this;}

    /**
     * <p>A list of task structures containing details about each task.</p>
     */
    inline ListTasksResult& WithTasks(Aws::Vector<TaskSummary>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>A list of task structures containing details about each task.</p>
     */
    inline ListTasksResult& AddTasks(const TaskSummary& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>A list of task structures containing details about each task.</p>
     */
    inline ListTasksResult& AddTasks(TaskSummary&& value) { m_tasks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<TaskSummary> m_tasks;
  };

} // namespace Model
} // namespace SnowDeviceManagement
} // namespace Aws
