/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/TaskFilter.h>
#include <aws/devops-agent/model/TaskSortField.h>
#include <aws/devops-agent/model/TaskSortOrder.h>

#include <utility>

namespace Aws {
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Request structure for listing backlog tasks with filtering, sorting, and
 * pagination support</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListBacklogTasksRequest">AWS
 * API Reference</a></p>
 */
class ListBacklogTasksRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API ListBacklogTasksRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListBacklogTasks"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing the tasks</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  ListBacklogTasksRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter criteria to apply when listing tasks</p> <p>Filtering
   * restrictions:</p> <ul> <li>Each filter field list is limited to a single
   * value</li> <li>Filtering by Priority and Status at the same time when not
   * filtering by Type is not permitted</li> <li>Timestamp filters (createdAfter,
   * createdBefore) can be combined with other filters when not sorting by
   * priority</li> </ul>
   */
  inline const TaskFilter& GetFilter() const { return m_filter; }
  inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
  template <typename FilterT = TaskFilter>
  void SetFilter(FilterT&& value) {
    m_filterHasBeenSet = true;
    m_filter = std::forward<FilterT>(value);
  }
  template <typename FilterT = TaskFilter>
  ListBacklogTasksRequest& WithFilter(FilterT&& value) {
    SetFilter(std::forward<FilterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Maximum number of tasks to return in a single response (1-1000, default:
   * 100)</p>
   */
  inline int GetLimit() const { return m_limit; }
  inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
  inline void SetLimit(int value) {
    m_limitHasBeenSet = true;
    m_limit = value;
  }
  inline ListBacklogTasksRequest& WithLimit(int value) {
    SetLimit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for retrieving the next page of results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBacklogTasksRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Field to sort by</p> <pre><code>Sorting restrictions: </code></pre> <ul>
   * <li>Only sorting on createdAt is supported when using priority or status filters
   * alone.</li> <li>Sorting by priority is not supported when using Timestamp
   * filters (createdAfter, createdBefore)</li> </ul>
   */
  inline TaskSortField GetSortField() const { return m_sortField; }
  inline bool SortFieldHasBeenSet() const { return m_sortFieldHasBeenSet; }
  inline void SetSortField(TaskSortField value) {
    m_sortFieldHasBeenSet = true;
    m_sortField = value;
  }
  inline ListBacklogTasksRequest& WithSortField(TaskSortField value) {
    SetSortField(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Sort order for the tasks based on sortField (default: DESC)</p>
   */
  inline TaskSortOrder GetOrder() const { return m_order; }
  inline bool OrderHasBeenSet() const { return m_orderHasBeenSet; }
  inline void SetOrder(TaskSortOrder value) {
    m_orderHasBeenSet = true;
    m_order = value;
  }
  inline ListBacklogTasksRequest& WithOrder(TaskSortOrder value) {
    SetOrder(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  TaskFilter m_filter;

  int m_limit{0};

  Aws::String m_nextToken;

  TaskSortField m_sortField{TaskSortField::NOT_SET};

  TaskSortOrder m_order{TaskSortOrder::NOT_SET};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_filterHasBeenSet = false;
  bool m_limitHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_sortFieldHasBeenSet = false;
  bool m_orderHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
