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
  class DeleteWorkspaceServiceAccountTokenRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API DeleteWorkspaceServiceAccountTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteWorkspaceServiceAccountToken"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the service account from which to delete the token.</p>
     */
    inline const Aws::String& GetServiceAccountId() const{ return m_serviceAccountId; }

    /**
     * <p>The ID of the service account from which to delete the token.</p>
     */
    inline bool ServiceAccountIdHasBeenSet() const { return m_serviceAccountIdHasBeenSet; }

    /**
     * <p>The ID of the service account from which to delete the token.</p>
     */
    inline void SetServiceAccountId(const Aws::String& value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId = value; }

    /**
     * <p>The ID of the service account from which to delete the token.</p>
     */
    inline void SetServiceAccountId(Aws::String&& value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId = std::move(value); }

    /**
     * <p>The ID of the service account from which to delete the token.</p>
     */
    inline void SetServiceAccountId(const char* value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId.assign(value); }

    /**
     * <p>The ID of the service account from which to delete the token.</p>
     */
    inline DeleteWorkspaceServiceAccountTokenRequest& WithServiceAccountId(const Aws::String& value) { SetServiceAccountId(value); return *this;}

    /**
     * <p>The ID of the service account from which to delete the token.</p>
     */
    inline DeleteWorkspaceServiceAccountTokenRequest& WithServiceAccountId(Aws::String&& value) { SetServiceAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service account from which to delete the token.</p>
     */
    inline DeleteWorkspaceServiceAccountTokenRequest& WithServiceAccountId(const char* value) { SetServiceAccountId(value); return *this;}


    /**
     * <p>The ID of the token to delete.</p>
     */
    inline const Aws::String& GetTokenId() const{ return m_tokenId; }

    /**
     * <p>The ID of the token to delete.</p>
     */
    inline bool TokenIdHasBeenSet() const { return m_tokenIdHasBeenSet; }

    /**
     * <p>The ID of the token to delete.</p>
     */
    inline void SetTokenId(const Aws::String& value) { m_tokenIdHasBeenSet = true; m_tokenId = value; }

    /**
     * <p>The ID of the token to delete.</p>
     */
    inline void SetTokenId(Aws::String&& value) { m_tokenIdHasBeenSet = true; m_tokenId = std::move(value); }

    /**
     * <p>The ID of the token to delete.</p>
     */
    inline void SetTokenId(const char* value) { m_tokenIdHasBeenSet = true; m_tokenId.assign(value); }

    /**
     * <p>The ID of the token to delete.</p>
     */
    inline DeleteWorkspaceServiceAccountTokenRequest& WithTokenId(const Aws::String& value) { SetTokenId(value); return *this;}

    /**
     * <p>The ID of the token to delete.</p>
     */
    inline DeleteWorkspaceServiceAccountTokenRequest& WithTokenId(Aws::String&& value) { SetTokenId(std::move(value)); return *this;}

    /**
     * <p>The ID of the token to delete.</p>
     */
    inline DeleteWorkspaceServiceAccountTokenRequest& WithTokenId(const char* value) { SetTokenId(value); return *this;}


    /**
     * <p>The ID of the workspace from which to delete the token.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace from which to delete the token.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace from which to delete the token.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace from which to delete the token.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace from which to delete the token.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace from which to delete the token.</p>
     */
    inline DeleteWorkspaceServiceAccountTokenRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace from which to delete the token.</p>
     */
    inline DeleteWorkspaceServiceAccountTokenRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace from which to delete the token.</p>
     */
    inline DeleteWorkspaceServiceAccountTokenRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_serviceAccountId;
    bool m_serviceAccountIdHasBeenSet = false;

    Aws::String m_tokenId;
    bool m_tokenIdHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
