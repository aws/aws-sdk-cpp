/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/WorkspaceStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
class CreateWorkspaceResult {
 public:
  AWS_IOTSITEWISE_API CreateWorkspaceResult() = default;
  AWS_IOTSITEWISE_API CreateWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API CreateWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  CreateWorkspaceResult& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceArn() const { return m_workspaceArn; }
  template <typename WorkspaceArnT = Aws::String>
  void SetWorkspaceArn(WorkspaceArnT&& value) {
    m_workspaceArnHasBeenSet = true;
    m_workspaceArn = std::forward<WorkspaceArnT>(value);
  }
  template <typename WorkspaceArnT = Aws::String>
  CreateWorkspaceResult& WithWorkspaceArn(WorkspaceArnT&& value) {
    SetWorkspaceArn(std::forward<WorkspaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the workspace, which is <code>CREATING</code> when the
   * operation returns.</p>
   */
  inline const WorkspaceStatus& GetWorkspaceStatus() const { return m_workspaceStatus; }
  template <typename WorkspaceStatusT = WorkspaceStatus>
  void SetWorkspaceStatus(WorkspaceStatusT&& value) {
    m_workspaceStatusHasBeenSet = true;
    m_workspaceStatus = std::forward<WorkspaceStatusT>(value);
  }
  template <typename WorkspaceStatusT = WorkspaceStatus>
  CreateWorkspaceResult& WithWorkspaceStatus(WorkspaceStatusT&& value) {
    SetWorkspaceStatus(std::forward<WorkspaceStatusT>(value));
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
  CreateWorkspaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_workspaceName;

  Aws::String m_workspaceArn;

  WorkspaceStatus m_workspaceStatus;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_workspaceNameHasBeenSet = false;
  bool m_workspaceArnHasBeenSet = false;
  bool m_workspaceStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
