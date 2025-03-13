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
    AWS_IOT_API ListAuditMitigationActionsTasksResult() = default;
    AWS_IOT_API ListAuditMitigationActionsTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOT_API ListAuditMitigationActionsTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The collection of audit mitigation tasks that matched the filter
     * criteria.</p>
     */
    inline const Aws::Vector<AuditMitigationActionsTaskMetadata>& GetTasks() const { return m_tasks; }
    template<typename TasksT = Aws::Vector<AuditMitigationActionsTaskMetadata>>
    void SetTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks = std::forward<TasksT>(value); }
    template<typename TasksT = Aws::Vector<AuditMitigationActionsTaskMetadata>>
    ListAuditMitigationActionsTasksResult& WithTasks(TasksT&& value) { SetTasks(std::forward<TasksT>(value)); return *this;}
    template<typename TasksT = AuditMitigationActionsTaskMetadata>
    ListAuditMitigationActionsTasksResult& AddTasks(TasksT&& value) { m_tasksHasBeenSet = true; m_tasks.emplace_back(std::forward<TasksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAuditMitigationActionsTasksResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAuditMitigationActionsTasksResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AuditMitigationActionsTaskMetadata> m_tasks;
    bool m_tasksHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
