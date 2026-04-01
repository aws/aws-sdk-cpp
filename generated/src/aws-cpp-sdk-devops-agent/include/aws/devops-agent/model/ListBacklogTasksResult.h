/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/Task.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {
/**
 * <p>Response structure containing a list of backlog tasks</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListBacklogTasksResponse">AWS
 * API Reference</a></p>
 */
class ListBacklogTasksResult {
 public:
  AWS_DEVOPSAGENT_API ListBacklogTasksResult() = default;
  AWS_DEVOPSAGENT_API ListBacklogTasksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_DEVOPSAGENT_API ListBacklogTasksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>List of backlog tasks</p>
   */
  inline const Aws::Vector<Task>& GetTasks() const { return m_tasks; }
  template <typename TasksT = Aws::Vector<Task>>
  void SetTasks(TasksT&& value) {
    m_tasksHasBeenSet = true;
    m_tasks = std::forward<TasksT>(value);
  }
  template <typename TasksT = Aws::Vector<Task>>
  ListBacklogTasksResult& WithTasks(TasksT&& value) {
    SetTasks(std::forward<TasksT>(value));
    return *this;
  }
  template <typename TasksT = Task>
  ListBacklogTasksResult& AddTasks(TasksT&& value) {
    m_tasksHasBeenSet = true;
    m_tasks.emplace_back(std::forward<TasksT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Token for retrieving the next page of results, if more results are
   * available</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListBacklogTasksResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ListBacklogTasksResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Task> m_tasks;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_tasksHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
