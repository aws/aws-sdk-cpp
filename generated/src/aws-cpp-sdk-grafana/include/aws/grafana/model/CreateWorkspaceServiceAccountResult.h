/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/model/Role.h>

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
class CreateWorkspaceServiceAccountResult {
 public:
  AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountResult() = default;
  AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ID of the service account.</p>
   */
  inline const Aws::String& GetId() const { return m_id; }
  template <typename IdT = Aws::String>
  void SetId(IdT&& value) {
    m_idHasBeenSet = true;
    m_id = std::forward<IdT>(value);
  }
  template <typename IdT = Aws::String>
  CreateWorkspaceServiceAccountResult& WithId(IdT&& value) {
    SetId(std::forward<IdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the service account.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateWorkspaceServiceAccountResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The permission level given to the service account.</p>
   */
  inline Role GetGrafanaRole() const { return m_grafanaRole; }
  inline void SetGrafanaRole(Role value) {
    m_grafanaRoleHasBeenSet = true;
    m_grafanaRole = value;
  }
  inline CreateWorkspaceServiceAccountResult& WithGrafanaRole(Role value) {
    SetGrafanaRole(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The workspace with which the service account is associated.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  CreateWorkspaceServiceAccountResult& WithWorkspaceId(WorkspaceIdT&& value) {
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
  CreateWorkspaceServiceAccountResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_id;

  Aws::String m_name;

  Role m_grafanaRole{Role::NOT_SET};

  Aws::String m_workspaceId;

  Aws::String m_requestId;
  bool m_idHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_grafanaRoleHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
