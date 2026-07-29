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
class DeleteWorkspaceResult {
 public:
  AWS_IOTSITEWISE_API DeleteWorkspaceResult() = default;
  AWS_IOTSITEWISE_API DeleteWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API DeleteWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status of the workspace after the deletion request, which is
   * <code>DELETING</code> when the operation returns.</p>
   */
  inline const WorkspaceStatus& GetWorkspaceStatus() const { return m_workspaceStatus; }
  template <typename WorkspaceStatusT = WorkspaceStatus>
  void SetWorkspaceStatus(WorkspaceStatusT&& value) {
    m_workspaceStatusHasBeenSet = true;
    m_workspaceStatus = std::forward<WorkspaceStatusT>(value);
  }
  template <typename WorkspaceStatusT = WorkspaceStatus>
  DeleteWorkspaceResult& WithWorkspaceStatus(WorkspaceStatusT&& value) {
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
  DeleteWorkspaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  WorkspaceStatus m_workspaceStatus;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_workspaceStatusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
