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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/discovery/model/ImportTask.h>
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
namespace ApplicationDiscoveryService
{
namespace Model
{
  class AWS_APPLICATIONDISCOVERYSERVICE_API DescribeImportTasksResult
  {
  public:
    DescribeImportTasksResult();
    DescribeImportTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeImportTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The token to request the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeImportTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeImportTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request the next page of results.</p>
     */
    inline DescribeImportTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A returned array of import tasks that match any applied filters, up to the
     * specified number of maximum results.</p>
     */
    inline const Aws::Vector<ImportTask>& GetTasks() const{ return m_tasks; }

    /**
     * <p>A returned array of import tasks that match any applied filters, up to the
     * specified number of maximum results.</p>
     */
    inline void SetTasks(const Aws::Vector<ImportTask>& value) { m_tasks = value; }

    /**
     * <p>A returned array of import tasks that match any applied filters, up to the
     * specified number of maximum results.</p>
     */
    inline void SetTasks(Aws::Vector<ImportTask>&& value) { m_tasks = std::move(value); }

    /**
     * <p>A returned array of import tasks that match any applied filters, up to the
     * specified number of maximum results.</p>
     */
    inline DescribeImportTasksResult& WithTasks(const Aws::Vector<ImportTask>& value) { SetTasks(value); return *this;}

    /**
     * <p>A returned array of import tasks that match any applied filters, up to the
     * specified number of maximum results.</p>
     */
    inline DescribeImportTasksResult& WithTasks(Aws::Vector<ImportTask>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>A returned array of import tasks that match any applied filters, up to the
     * specified number of maximum results.</p>
     */
    inline DescribeImportTasksResult& AddTasks(const ImportTask& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>A returned array of import tasks that match any applied filters, up to the
     * specified number of maximum results.</p>
     */
    inline DescribeImportTasksResult& AddTasks(ImportTask&& value) { m_tasks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ImportTask> m_tasks;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
