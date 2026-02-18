/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ManagedGrafana {
namespace Model {
class DeleteWorkspaceServiceAccountTokenResult {
 public:
  AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountTokenResult() = default;
  AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountTokenResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the token that was deleted.</p>
   */
  inline const Aws::String& GetTokenId() const { return m_tokenId; }
  template <typename TokenIdT = Aws::String>
  void SetTokenId(TokenIdT&& value) {
    m_tokenIdHasBeenSet = true;
    m_tokenId = std::forward<TokenIdT>(value);
  }
  template <typename TokenIdT = Aws::String>
  DeleteWorkspaceServiceAccountTokenResult& WithTokenId(TokenIdT&& value) {
    SetTokenId(std::forward<TokenIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the service account where the token was deleted.</p>
   */
  inline const Aws::String& GetServiceAccountId() const { return m_serviceAccountId; }
  template <typename ServiceAccountIdT = Aws::String>
  void SetServiceAccountId(ServiceAccountIdT&& value) {
    m_serviceAccountIdHasBeenSet = true;
    m_serviceAccountId = std::forward<ServiceAccountIdT>(value);
  }
  template <typename ServiceAccountIdT = Aws::String>
  DeleteWorkspaceServiceAccountTokenResult& WithServiceAccountId(ServiceAccountIdT&& value) {
    SetServiceAccountId(std::forward<ServiceAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the workspace where the token was deleted.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  DeleteWorkspaceServiceAccountTokenResult& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
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
  DeleteWorkspaceServiceAccountTokenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tokenId;

  Aws::String m_serviceAccountId;

  Aws::String m_workspaceId;

  Aws::String m_requestId;
  bool m_tokenIdHasBeenSet = false;
  bool m_serviceAccountIdHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
