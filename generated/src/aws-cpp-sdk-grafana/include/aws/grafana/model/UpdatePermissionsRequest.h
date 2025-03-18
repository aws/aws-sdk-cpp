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
    AWS_MANAGEDGRAFANA_API UpdatePermissionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePermissions"; }

    AWS_MANAGEDGRAFANA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of structures that contain the permission updates to make.</p>
     */
    inline const Aws::Vector<UpdateInstruction>& GetUpdateInstructionBatch() const { return m_updateInstructionBatch; }
    inline bool UpdateInstructionBatchHasBeenSet() const { return m_updateInstructionBatchHasBeenSet; }
    template<typename UpdateInstructionBatchT = Aws::Vector<UpdateInstruction>>
    void SetUpdateInstructionBatch(UpdateInstructionBatchT&& value) { m_updateInstructionBatchHasBeenSet = true; m_updateInstructionBatch = std::forward<UpdateInstructionBatchT>(value); }
    template<typename UpdateInstructionBatchT = Aws::Vector<UpdateInstruction>>
    UpdatePermissionsRequest& WithUpdateInstructionBatch(UpdateInstructionBatchT&& value) { SetUpdateInstructionBatch(std::forward<UpdateInstructionBatchT>(value)); return *this;}
    template<typename UpdateInstructionBatchT = UpdateInstruction>
    UpdatePermissionsRequest& AddUpdateInstructionBatch(UpdateInstructionBatchT&& value) { m_updateInstructionBatchHasBeenSet = true; m_updateInstructionBatch.emplace_back(std::forward<UpdateInstructionBatchT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace to update.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    UpdatePermissionsRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UpdateInstruction> m_updateInstructionBatch;
    bool m_updateInstructionBatchHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ManagedGrafana
} // namespace Aws
