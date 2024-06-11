/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class DeleteSyncJobRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API DeleteSyncJobRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSyncJob"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The workspace ID.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline DeleteSyncJobRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline DeleteSyncJobRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline DeleteSyncJobRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sync source.</p>  <p>Currently the only supported syncSource is
     * <code>SITEWISE </code>.</p> 
     */
    inline const Aws::String& GetSyncSource() const{ return m_syncSource; }
    inline bool SyncSourceHasBeenSet() const { return m_syncSourceHasBeenSet; }
    inline void SetSyncSource(const Aws::String& value) { m_syncSourceHasBeenSet = true; m_syncSource = value; }
    inline void SetSyncSource(Aws::String&& value) { m_syncSourceHasBeenSet = true; m_syncSource = std::move(value); }
    inline void SetSyncSource(const char* value) { m_syncSourceHasBeenSet = true; m_syncSource.assign(value); }
    inline DeleteSyncJobRequest& WithSyncSource(const Aws::String& value) { SetSyncSource(value); return *this;}
    inline DeleteSyncJobRequest& WithSyncSource(Aws::String&& value) { SetSyncSource(std::move(value)); return *this;}
    inline DeleteSyncJobRequest& WithSyncSource(const char* value) { SetSyncSource(value); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_syncSource;
    bool m_syncSourceHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
