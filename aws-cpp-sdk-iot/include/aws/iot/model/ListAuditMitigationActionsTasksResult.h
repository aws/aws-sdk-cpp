/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iot/model/AuditMitigationActionsTaskMetadata.h>
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
  class ListAuditMitigationActionsTasksResult
  {
  public:
    AWS_IOT_API ListAuditMitigationActionsTasksResult();
    AWS_IOT_API ListAuditMitigationActionsTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAuditMitigationActionsTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The collection of audit mitigation tasks that matched the filter
     * criteria.</p>
     */
    inline const Aws::Vector<AuditMitigationActionsTaskMetadata>& GetTasks() const{ return m_tasks; }

    /**
     * <p>The collection of audit mitigation tasks that matched the filter
     * criteria.</p>
     */
    inline void SetTasks(const Aws::Vector<AuditMitigationActionsTaskMetadata>& value) { m_tasks = value; }

    /**
     * <p>The collection of audit mitigation tasks that matched the filter
     * criteria.</p>
     */
    inline void SetTasks(Aws::Vector<AuditMitigationActionsTaskMetadata>&& value) { m_tasks = std::move(value); }

    /**
     * <p>The collection of audit mitigation tasks that matched the filter
     * criteria.</p>
     */
    inline ListAuditMitigationActionsTasksResult& WithTasks(const Aws::Vector<AuditMitigationActionsTaskMetadata>& value) { SetTasks(value); return *this;}

    /**
     * <p>The collection of audit mitigation tasks that matched the filter
     * criteria.</p>
     */
    inline ListAuditMitigationActionsTasksResult& WithTasks(Aws::Vector<AuditMitigationActionsTaskMetadata>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>The collection of audit mitigation tasks that matched the filter
     * criteria.</p>
     */
    inline ListAuditMitigationActionsTasksResult& AddTasks(const AuditMitigationActionsTaskMetadata& value) { m_tasks.push_back(value); return *this; }

    /**
     * <p>The collection of audit mitigation tasks that matched the filter
     * criteria.</p>
     */
    inline ListAuditMitigationActionsTasksResult& AddTasks(AuditMitigationActionsTaskMetadata&& value) { m_tasks.push_back(std::move(value)); return *this; }


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAuditMitigationActionsTasksResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAuditMitigationActionsTasksResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline ListAuditMitigationActionsTasksResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<AuditMitigationActionsTaskMetadata> m_tasks;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
