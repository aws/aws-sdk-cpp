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
  class DeleteSceneRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API DeleteSceneRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteScene"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workspace.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace.</p>
     */
    inline DeleteSceneRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace.</p>
     */
    inline DeleteSceneRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace.</p>
     */
    inline DeleteSceneRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The ID of the scene to delete.</p>
     */
    inline const Aws::String& GetSceneId() const{ return m_sceneId; }

    /**
     * <p>The ID of the scene to delete.</p>
     */
    inline bool SceneIdHasBeenSet() const { return m_sceneIdHasBeenSet; }

    /**
     * <p>The ID of the scene to delete.</p>
     */
    inline void SetSceneId(const Aws::String& value) { m_sceneIdHasBeenSet = true; m_sceneId = value; }

    /**
     * <p>The ID of the scene to delete.</p>
     */
    inline void SetSceneId(Aws::String&& value) { m_sceneIdHasBeenSet = true; m_sceneId = std::move(value); }

    /**
     * <p>The ID of the scene to delete.</p>
     */
    inline void SetSceneId(const char* value) { m_sceneIdHasBeenSet = true; m_sceneId.assign(value); }

    /**
     * <p>The ID of the scene to delete.</p>
     */
    inline DeleteSceneRequest& WithSceneId(const Aws::String& value) { SetSceneId(value); return *this;}

    /**
     * <p>The ID of the scene to delete.</p>
     */
    inline DeleteSceneRequest& WithSceneId(Aws::String&& value) { SetSceneId(std::move(value)); return *this;}

    /**
     * <p>The ID of the scene to delete.</p>
     */
    inline DeleteSceneRequest& WithSceneId(const char* value) { SetSceneId(value); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_sceneId;
    bool m_sceneIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
