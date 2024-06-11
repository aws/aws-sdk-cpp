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
  class DeleteWorkspaceApiKeyRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceApiKeyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkspaceApiKey"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the API key to delete.</p>
     */
    inline const Aws::String& GetKeyName() const{ return m_keyName; }
    inline bool KeyNameHasBeenSet() const { return m_keyNameHasBeenSet; }
    inline void SetKeyName(const Aws::String& value) { m_keyNameHasBeenSet = true; m_keyName = value; }
    inline void SetKeyName(Aws::String&& value) { m_keyNameHasBeenSet = true; m_keyName = std::move(value); }
    inline void SetKeyName(const char* value) { m_keyNameHasBeenSet = true; m_keyName.assign(value); }
    inline DeleteWorkspaceApiKeyRequest& WithKeyName(const Aws::String& value) { SetKeyName(value); return *this;}
    inline DeleteWorkspaceApiKeyRequest& WithKeyName(Aws::String&& value) { SetKeyName(std::move(value)); return *this;}
    inline DeleteWorkspaceApiKeyRequest& WithKeyName(const char* value) { SetKeyName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace to delete.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline DeleteWorkspaceApiKeyRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline DeleteWorkspaceApiKeyRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline DeleteWorkspaceApiKeyRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}
  private:

    Aws::String m_keyName;
    bool m_keyNameHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
