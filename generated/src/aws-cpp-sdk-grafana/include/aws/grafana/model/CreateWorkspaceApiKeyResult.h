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
class CreateWorkspaceApiKeyResult {
 public:
  AWS_MANAGEDGRAFANA_API CreateWorkspaceApiKeyResult() = default;
  AWS_MANAGEDGRAFANA_API CreateWorkspaceApiKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MANAGEDGRAFANA_API CreateWorkspaceApiKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the key that was created.</p>
   */
  inline const Aws::String& GetKeyName() const { return m_keyName; }
  template <typename KeyNameT = Aws::String>
  void SetKeyName(KeyNameT&& value) {
    m_keyNameHasBeenSet = true;
    m_keyName = std::forward<KeyNameT>(value);
  }
  template <typename KeyNameT = Aws::String>
  CreateWorkspaceApiKeyResult& WithKeyName(KeyNameT&& value) {
    SetKeyName(std::forward<KeyNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The key token. Use this value as a bearer token to authenticate HTTP requests
   * to the workspace.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  CreateWorkspaceApiKeyResult& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the workspace that the key is valid for.</p>
   */
  inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
  template <typename WorkspaceIdT = Aws::String>
  void SetWorkspaceId(WorkspaceIdT&& value) {
    m_workspaceIdHasBeenSet = true;
    m_workspaceId = std::forward<WorkspaceIdT>(value);
  }
  template <typename WorkspaceIdT = Aws::String>
  CreateWorkspaceApiKeyResult& WithWorkspaceId(WorkspaceIdT&& value) {
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
  CreateWorkspaceApiKeyResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_keyName;

  Aws::String m_key;

  Aws::String m_workspaceId;

  Aws::String m_requestId;
  bool m_keyNameHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_workspaceIdHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ManagedGrafana
}  // namespace Aws
