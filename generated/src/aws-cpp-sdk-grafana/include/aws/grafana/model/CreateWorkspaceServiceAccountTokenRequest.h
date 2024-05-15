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
  class CreateWorkspaceServiceAccountTokenRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountTokenRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspaceServiceAccountToken"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    /**
     * <p>A name for the token to create.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the token to create.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the token to create.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the token to create.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the token to create.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the token to create.</p>
     */
    inline CreateWorkspaceServiceAccountTokenRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the token to create.</p>
     */
    inline CreateWorkspaceServiceAccountTokenRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the token to create.</p>
     */
    inline CreateWorkspaceServiceAccountTokenRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Sets how long the token will be valid, in seconds. You can set the time up to
     * 30 days in the future.</p>
     */
    inline int GetSecondsToLive() const{ return m_secondsToLive; }

    /**
     * <p>Sets how long the token will be valid, in seconds. You can set the time up to
     * 30 days in the future.</p>
     */
    inline bool SecondsToLiveHasBeenSet() const { return m_secondsToLiveHasBeenSet; }

    /**
     * <p>Sets how long the token will be valid, in seconds. You can set the time up to
     * 30 days in the future.</p>
     */
    inline void SetSecondsToLive(int value) { m_secondsToLiveHasBeenSet = true; m_secondsToLive = value; }

    /**
     * <p>Sets how long the token will be valid, in seconds. You can set the time up to
     * 30 days in the future.</p>
     */
    inline CreateWorkspaceServiceAccountTokenRequest& WithSecondsToLive(int value) { SetSecondsToLive(value); return *this;}


    /**
     * <p>The ID of the service account for which to create a token.</p>
     */
    inline const Aws::String& GetServiceAccountId() const{ return m_serviceAccountId; }

    /**
     * <p>The ID of the service account for which to create a token.</p>
     */
    inline bool ServiceAccountIdHasBeenSet() const { return m_serviceAccountIdHasBeenSet; }

    /**
     * <p>The ID of the service account for which to create a token.</p>
     */
    inline void SetServiceAccountId(const Aws::String& value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId = value; }

    /**
     * <p>The ID of the service account for which to create a token.</p>
     */
    inline void SetServiceAccountId(Aws::String&& value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId = std::move(value); }

    /**
     * <p>The ID of the service account for which to create a token.</p>
     */
    inline void SetServiceAccountId(const char* value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId.assign(value); }

    /**
     * <p>The ID of the service account for which to create a token.</p>
     */
    inline CreateWorkspaceServiceAccountTokenRequest& WithServiceAccountId(const Aws::String& value) { SetServiceAccountId(value); return *this;}

    /**
     * <p>The ID of the service account for which to create a token.</p>
     */
    inline CreateWorkspaceServiceAccountTokenRequest& WithServiceAccountId(Aws::String&& value) { SetServiceAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID of the service account for which to create a token.</p>
     */
    inline CreateWorkspaceServiceAccountTokenRequest& WithServiceAccountId(const char* value) { SetServiceAccountId(value); return *this;}


    /**
     * <p>The ID of the workspace the service account resides within.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace the service account resides within.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace the service account resides within.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace the service account resides within.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace the service account resides within.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace the service account resides within.</p>
     */
    inline CreateWorkspaceServiceAccountTokenRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace the service account resides within.</p>
     */
    inline CreateWorkspaceServiceAccountTokenRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace the service account resides within.</p>
     */
    inline CreateWorkspaceServiceAccountTokenRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_secondsToLive;
    bool m_secondsToLiveHasBeenSet = false;

    Aws::String m_serviceAccountId;
    bool m_serviceAccountIdHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
