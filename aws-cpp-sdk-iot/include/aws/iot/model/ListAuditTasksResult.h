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
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditTaskMetadata.h>
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
  class AWS_IOT_API ListAuditTasksResult
  {
  public:
    ListAuditTasksResult();
    ListAuditTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListAuditTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The audits that were performed during the specified time period.</p>
     */
    inline const Aws::Vector<AuditTaskMetadata>& GetTasks() const{ return m_tasks; }

    /**
     * <p>The audits that were performed during the specified time period.</p>
     */
    inline void SetTasks(const Aws::Vector<AuditTaskMetadata>& value) { m_tasks = value; }

    /**
     * <p>The audits that were performed during the specified time period.</p>
     */
    inline void SetTasks(Aws::Vector<AuditTaskMetadata>&& value) { m_tasks = std::move(value); }

    /**
     * <p>The audits that were performed during the specified time period.</p>
     */
    inline ListAuditTasksResult& WithTasks(const Aws::Vector<AuditTaskMetadata>& value) { SetTasks(value); return *this;}

    /**
     * <p>The audits that were performed during the specified time period.</p>
     */
    inline ListAuditTasksResult& WithTasks(Aws::Vector<AuditTaskMetadata>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>The audits that were performed during the specified time period.</p>
     */
    inline ListAuditTasksResult& AddTasks(const AuditTaskMetadata& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>The audits that were performed during the specified time period.</p>
     */
    inline ListAuditTasksResult& AddTasks(AuditTaskMetadata&& value) { m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListAuditTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListAuditTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that can be used to retrieve the next set of results, or
     * <code>null</code> if there are no additional results.</p>
     */
    inline ListAuditTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AuditTaskMetadata> m_tasks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
