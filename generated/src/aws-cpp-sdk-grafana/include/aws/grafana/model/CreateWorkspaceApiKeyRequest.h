/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

  /**
   */
  class CreateWorkspaceApiKeyRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API CreateWorkspaceApiKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspaceApiKey"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specifies the name of the key. Keynames must be unique to the workspace.</p>
     */
    inline const Aws::String& GetKeyName() const { return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    template<typename KeyNameT = Aws::String>
    void SetKeyName(KeyNameT&& value) { m_keyNameHasBeenSet = true; m_keyName = std::forward<KeyNameT>(value); }
    template<typename KeyNameT = Aws::String>
    CreateWorkspaceApiKeyRequest& WithKeyName(KeyNameT&& value) { SetKeyName(std::forward<KeyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the permission level of the key.</p> <p> Valid values:
     * <code>ADMIN</code>|<code>EDITOR</code>|<code>VIEWER</code> </p>
     */
    inline const Aws::String& GetKeyRole() const { return m_keyRole; }
    inline bool KeyRoleHasBeenSet() const { return m_keyRoleHasBeenSet; }
    template<typename KeyRoleT = Aws::String>
    void SetKeyRole(KeyRoleT&& value) { m_keyRoleHasBeenSet = true; m_keyRole = std::forward<KeyRoleT>(value); }
    template<typename KeyRoleT = Aws::String>
    CreateWorkspaceApiKeyRequest& WithKeyRole(KeyRoleT&& value) { SetKeyRole(std::forward<KeyRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time in seconds until the key expires. Keys can be valid for up
     * to 30 days.</p>
     */
    inline int GetSecondsToLive() const { return m_secondsToLive; }
    inline bool SecondsToLiveHasBeenSet() const { return m_secondsToLiveHasBeenSet; }
    inline void SetSecondsToLive(int value) { m_secondsToLiveHasBeenSet = true; m_secondsToLive = value; }
    inline CreateWorkspaceApiKeyRequest& WithSecondsToLive(int value) { SetSecondsToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace to create an API key.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    CreateWorkspaceApiKeyRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_keyRole;
    bool m_keyRoleHasBeenSet = false;

    int m_secondsToLive{0};
    bool m_secondsToLiveHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
