/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Workspace.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class DescribeWorkspaceResult {
 public:
  AWS_CONNECT_API DescribeWorkspaceResult() = default;
  AWS_CONNECT_API DescribeWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API DescribeWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the workspace.</p>
   */
  inline const Workspace& GetWorkspace() const { return m_workspace; }
  template <typename WorkspaceT = Workspace>
  void SetWorkspace(WorkspaceT&& value) {
    m_workspaceHasBeenSet = true;
    m_workspace = std::forward<WorkspaceT>(value);
  }
  template <typename WorkspaceT = Workspace>
  DescribeWorkspaceResult& WithWorkspace(WorkspaceT&& value) {
    SetWorkspace(std::forward<WorkspaceT>(value));
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
  DescribeWorkspaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Workspace m_workspace;

  Aws::String m_requestId;
  bool m_workspaceHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
