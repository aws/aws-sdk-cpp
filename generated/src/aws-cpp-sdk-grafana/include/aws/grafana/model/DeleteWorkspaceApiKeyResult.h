/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ManagedGrafana
{
namespace Model
{
  class DeleteWorkspaceApiKeyResult
  {
  public:
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceApiKeyResult() = default;
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceApiKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceApiKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The name of the key that was deleted.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    DeleteWorkspaceApiKeyResult& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace where the key was deleted.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    DeleteWorkspaceApiKeyResult& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteWorkspaceApiKeyResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
