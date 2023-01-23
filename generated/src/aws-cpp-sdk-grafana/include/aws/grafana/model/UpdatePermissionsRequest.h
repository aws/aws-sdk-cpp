/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/grafana/ManagedGrafana_EXPORTS.h>
#include <aws/grafana/ManagedGrafanaRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/grafana/model/UpdateInstruction.h>
#include <utility>

namespace Aws
{
namespace ManagedGrafana
{
namespace Model
{

  /**
   */
  class UpdatePermissionsRequest : public ManagedGrafanaRequest
  {
  public:
    AWS_MANAGEDGRAFANA_API UpdatePermissionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePermissions"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of structures that contain the permission updates to make.</p>
     */
    inline const Aws::Vector<UpdateInstruction>& GetUpdateInstructionBatch() const{ return m_updateInstructionBatch; }

    /**
     * <p>An array of structures that contain the permission updates to make.</p>
     */
    inline bool UpdateInstructionBatchHasBeenSet() const { return m_updateInstructionBatchHasBeenSet; }

    /**
     * <p>An array of structures that contain the permission updates to make.</p>
     */
    inline void SetUpdateInstructionBatch(const Aws::Vector<UpdateInstruction>& value) { m_updateInstructionBatchHasBeenSet = true; m_updateInstructionBatch = value; }

    /**
     * <p>An array of structures that contain the permission updates to make.</p>
     */
    inline void SetUpdateInstructionBatch(Aws::Vector<UpdateInstruction>&& value) { m_updateInstructionBatchHasBeenSet = true; m_updateInstructionBatch = std::move(value); }

    /**
     * <p>An array of structures that contain the permission updates to make.</p>
     */
    inline UpdatePermissionsRequest& WithUpdateInstructionBatch(const Aws::Vector<UpdateInstruction>& value) { SetUpdateInstructionBatch(value); return *this;}

    /**
     * <p>An array of structures that contain the permission updates to make.</p>
     */
    inline UpdatePermissionsRequest& WithUpdateInstructionBatch(Aws::Vector<UpdateInstruction>&& value) { SetUpdateInstructionBatch(std::move(value)); return *this;}

    /**
     * <p>An array of structures that contain the permission updates to make.</p>
     */
    inline UpdatePermissionsRequest& AddUpdateInstructionBatch(const UpdateInstruction& value) { m_updateInstructionBatchHasBeenSet = true; m_updateInstructionBatch.push_back(value); return *this; }

    /**
     * <p>An array of structures that contain the permission updates to make.</p>
     */
    inline UpdatePermissionsRequest& AddUpdateInstructionBatch(UpdateInstruction&& value) { m_updateInstructionBatchHasBeenSet = true; m_updateInstructionBatch.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdatePermissionsRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdatePermissionsRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline UpdatePermissionsRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}

  private:

    Aws::Vector<UpdateInstruction> m_updateInstructionBatch;
    bool m_updateInstructionBatchHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
