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
    AWS_MANAGEDGRAFANA_API CreateWorkspaceApiKeyRequest();

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
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline CreateWorkspaceApiKeyRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline CreateWorkspaceApiKeyRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline CreateWorkspaceApiKeyRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the permission level of the key.</p> <p> Valid values:
     * <code>ADMIN</code>|<code>EDITOR</code>|<code>VIEWER</code> </p>
     */
    inline const Aws::String& GetKeyRole() const{ return m_keyRole; }
    inline bool KeyRoleHasBeenSet() const { return m_keyRoleHasBeenSet; }
    inline void SetKeyRole(const Aws::String& value) { m_keyRoleHasBeenSet = true; m_keyRole = value; }
    inline void SetKeyRole(Aws::String&& value) { m_keyRoleHasBeenSet = true; m_keyRole = std::move(value); }
    inline void SetKeyRole(const char* value) { m_keyRoleHasBeenSet = true; m_keyRole.assign(value); }
    inline CreateWorkspaceApiKeyRequest& WithKeyRole(const Aws::String& value) { SetKeyRole(value); return *this;}
    inline CreateWorkspaceApiKeyRequest& WithKeyRole(Aws::String&& value) { SetKeyRole(std::move(value)); return *this;}
    inline CreateWorkspaceApiKeyRequest& WithKeyRole(const char* value) { SetKeyRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the time in seconds until the key expires. Keys can be valid for up
     * to 30 days.</p>
     */
    inline int GetSecondsToLive() const{ return m_secondsToLive; }
    inline bool SecondsToLiveHasBeenSet() const { return m_secondsToLiveHasBeenSet; }
    inline void SetSecondsToLive(int value) { m_secondsToLiveHasBeenSet = true; m_secondsToLive = value; }
    inline CreateWorkspaceApiKeyRequest& WithSecondsToLive(int value) { SetSecondsToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace to create an API key.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline CreateWorkspaceApiKeyRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline CreateWorkspaceApiKeyRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline CreateWorkspaceApiKeyRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_keyRole;
    bool m_keyRoleHasBeenSet = false;

    int m_secondsToLive;
    bool m_secondsToLiveHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
