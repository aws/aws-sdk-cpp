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
    AWS_MANAGEDGRAFANA_API CreateWorkspaceServiceAccountTokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateWorkspaceServiceAccountToken"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A name for the token to create.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateWorkspaceServiceAccountTokenRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Sets how long the token will be valid, in seconds. You can set the time up to
     * 30 days in the future.</p>
     */
    inline int GetSecondsToLive() const { return m_secondsToLive; }
    inline bool SecondsToLiveHasBeenSet() const { return m_secondsToLiveHasBeenSet; }
    inline void SetSecondsToLive(int value) { m_secondsToLiveHasBeenSet = true; m_secondsToLive = value; }
    inline CreateWorkspaceServiceAccountTokenRequest& WithSecondsToLive(int value) { SetSecondsToLive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the service account for which to create a token.</p>
     */
    inline const Aws::String& GetServiceAccountId() const { return m_serviceAccountId; }
    inline bool ServiceAccountIdHasBeenSet() const { return m_serviceAccountIdHasBeenSet; }
    template<typename ServiceAccountIdT = Aws::String>
    void SetServiceAccountId(ServiceAccountIdT&& value) { m_serviceAccountIdHasBeenSet = true; m_serviceAccountId = std::forward<ServiceAccountIdT>(value); }
    template<typename ServiceAccountIdT = Aws::String>
    CreateWorkspaceServiceAccountTokenRequest& WithServiceAccountId(ServiceAccountIdT&& value) { SetServiceAccountId(std::forward<ServiceAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace the service account resides within.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    CreateWorkspaceServiceAccountTokenRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_secondsToLive{0};
    bool m_secondsToLiveHasBeenSet = false;

    Aws::String m_serviceAccountId;
    bool m_serviceAccountIdHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
