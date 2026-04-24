/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ManagedGrafana {
namespace Model {

/**
 */
class DeleteWorkspaceServiceAccountTokenRequest : public ManagedGrafanaRequest {
 public:
  AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountTokenRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkspaceServiceAccountToken"; }

  AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ID of the token to delete.</p>
   */
  inline const Aws::String& GetTokenId() const { return m_tokenId; }
  inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }
  template <typename TokenIdT = Aws::String>
  void SetTokenId(TokenIdT&& value) {
    m_tokenIdHasBeenSet = true;
    m_tokenId = std::forward<TokenIdT>(value);
  }
  template <typename TokenIdT = Aws::String>
  DeleteWorkspaceServiceAccountTokenRequest& WithTokenId(TokenIdT&& value) {
    SetTokenId(std::forward<TokenIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the service account from which to delete the token.</p>
   */
  inline const Aws::String& GetServiceAccountId() const { return m_serviceAccountId; }
  inline bool ServiceAccountIdHasBeenSet() const { return m_serviceAccountIdHasBeenSet; }
  template <typename ServiceAccountIdT = Aws::String>
  void SetServiceAccountId(ServiceAccountIdT&& value) {
    m_serviceAccountIdHasBeenSet = true;
    m_serviceAccountId = std::forward<ServiceAccountIdT>(value);
  }
  template <typename ServiceAccountIdT = Aws::String>
  DeleteWorkspaceServiceAccountTokenRequest& WithServiceAccountId(ServiceAccountIdT&& value) {
    SetServiceAccountId(std::forward<ServiceAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the workspace from which to delete the token.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  DeleteWorkspaceServiceAccountTokenRequest& WithWorkspaceId(WorkspaceIdT&& value) {
    SetWorkspaceId(std::forward<WorkspaceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_tokenId;

  Aws::String m_serviceAccountId;

  Aws::String m_workspaceId;
  bool m_tokenIdHasBeenSet = false;
  bool m_serviceAccountIdHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
