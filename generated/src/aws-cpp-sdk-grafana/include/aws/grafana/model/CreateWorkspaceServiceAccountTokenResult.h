/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/ServiceAccountTokenSummaryWithKey.h>

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
class CreateWorkspaceServiceAccountTokenResult {
 public:
  AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountTokenResult() = default;
  AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountTokenResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the created token, including the key. Be sure to store the
   * key securely.</p>
   */
  inline const ServiceAccountTokenSummaryWithKey& GetServiceAccountToken() const { return m_serviceAccountToken; }
  template <typename ServiceAccountTokenT = ServiceAccountTokenSummaryWithKey>
  void SetServiceAccountToken(ServiceAccountTokenT&& value) {
    m_serviceAccountTokenHasBeenSet = true;
    m_serviceAccountToken = std::forward<ServiceAccountTokenT>(value);
  }
  template <typename ServiceAccountTokenT = ServiceAccountTokenSummaryWithKey>
  CreateWorkspaceServiceAccountTokenResult& WithServiceAccountToken(ServiceAccountTokenT&& value) {
    SetServiceAccountToken(std::forward<ServiceAccountTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the service account where the token was created.</p>
   */
  inline const Aws::String& GetServiceAccountId() const { return m_serviceAccountId; }
  template <typename ServiceAccountIdT = Aws::String>
  void SetServiceAccountId(ServiceAccountIdT&& value) {
    m_serviceAccountIdHasBeenSet = true;
    m_serviceAccountId = std::forward<ServiceAccountIdT>(value);
  }
  template <typename ServiceAccountIdT = Aws::String>
  CreateWorkspaceServiceAccountTokenResult& WithServiceAccountId(ServiceAccountIdT&& value) {
    SetServiceAccountId(std::forward<ServiceAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the workspace where the token was created.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  CreateWorkspaceServiceAccountTokenResult& WithWorkspaceId(WorkspaceIdT&& value) {
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
  CreateWorkspaceServiceAccountTokenResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  ServiceAccountTokenSummaryWithKey m_serviceAccountToken;

  Aws::String m_serviceAccountId;

  Aws::String m_workspaceId;

  Aws::String m_requestId;
  bool m_serviceAccountTokenHasBeenSet = false;
  bool m_serviceAccountIdHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
