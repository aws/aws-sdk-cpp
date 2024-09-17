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
  class DeleteWorkspaceServiceAccountRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkspaceServiceAccount"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the service account to delete.</p>
     */
    inline const Aws::String& GetServiceAccountId() const{ return m_serviceAccountId; }
    inline bool ServiceAccountIdHasBeenSet() const { return m_serviceAccountIdHasBeenSet; }
    inline void SetServiceAccountId(const Aws::String& value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId = value; }
    inline void SetServiceAccountId(Aws::String&& value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId = std::move(value); }
    inline void SetServiceAccountId(const char* value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId.assign(value); }
    inline DeleteWorkspaceServiceAccountRequest& WithServiceAccountId(const Aws::String& value) { SetServiceAccountId(value); return *this;}
    inline DeleteWorkspaceServiceAccountRequest& WithServiceAccountId(Aws::String&& value) { SetServiceAccountId(std::move(value)); return *this;}
    inline DeleteWorkspaceServiceAccountRequest& WithServiceAccountId(const char* value) { SetServiceAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace where the service account resides.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline DeleteWorkspaceServiceAccountRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline DeleteWorkspaceServiceAccountRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline DeleteWorkspaceServiceAccountRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceAccountId;
    bool m_serviceAccountIdHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
