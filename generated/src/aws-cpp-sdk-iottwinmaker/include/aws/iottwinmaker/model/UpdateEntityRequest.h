/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/ParentEntityUpdateRequest.h>
#include <aws/iottwinmaker/model/ComponentUpdateRequest.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class UpdateEntityRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API UpdateEntityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEntity"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }

    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }

    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }

    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }

    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }

    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline UpdateEntityRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline UpdateEntityRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline UpdateEntityRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }

    /**
     * <p>The ID of the entity.</p>
     */
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }

    /**
     * <p>The ID of the entity.</p>
     */
    inline UpdateEntityRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline UpdateEntityRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline UpdateEntityRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetEntityName() const{ return m_entityName; }

    /**
     * <p>The name of the entity.</p>
     */
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetEntityName(const Aws::String& value) { m_entityNameHasBeenSet = true; m_entityName = value; }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetEntityName(Aws::String&& value) { m_entityNameHasBeenSet = true; m_entityName = std::move(value); }

    /**
     * <p>The name of the entity.</p>
     */
    inline void SetEntityName(const char* value) { m_entityNameHasBeenSet = true; m_entityName.assign(value); }

    /**
     * <p>The name of the entity.</p>
     */
    inline UpdateEntityRequest& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline UpdateEntityRequest& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline UpdateEntityRequest& WithEntityName(const char* value) { SetEntityName(value); return *this;}


    /**
     * <p>The description of the entity.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the entity.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the entity.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the entity.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the entity.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the entity.</p>
     */
    inline UpdateEntityRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the entity.</p>
     */
    inline UpdateEntityRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the entity.</p>
     */
    inline UpdateEntityRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, ComponentUpdateRequest>& GetComponentUpdates() const{ return m_componentUpdates; }

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline bool ComponentUpdatesHasBeenSet() const { return m_componentUpdatesHasBeenSet; }

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline void SetComponentUpdates(const Aws::Map<Aws::String, ComponentUpdateRequest>& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates = value; }

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline void SetComponentUpdates(Aws::Map<Aws::String, ComponentUpdateRequest>&& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates = std::move(value); }

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateEntityRequest& WithComponentUpdates(const Aws::Map<Aws::String, ComponentUpdateRequest>& value) { SetComponentUpdates(value); return *this;}

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateEntityRequest& WithComponentUpdates(Aws::Map<Aws::String, ComponentUpdateRequest>&& value) { SetComponentUpdates(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateEntityRequest& AddComponentUpdates(const Aws::String& key, const ComponentUpdateRequest& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateEntityRequest& AddComponentUpdates(Aws::String&& key, const ComponentUpdateRequest& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateEntityRequest& AddComponentUpdates(const Aws::String& key, ComponentUpdateRequest&& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateEntityRequest& AddComponentUpdates(Aws::String&& key, ComponentUpdateRequest&& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateEntityRequest& AddComponentUpdates(const char* key, ComponentUpdateRequest&& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline UpdateEntityRequest& AddComponentUpdates(const char* key, const ComponentUpdateRequest& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(key, value); return *this; }


    /**
     * <p>An object that describes the update request for a parent entity.</p>
     */
    inline const ParentEntityUpdateRequest& GetParentEntityUpdate() const{ return m_parentEntityUpdate; }

    /**
     * <p>An object that describes the update request for a parent entity.</p>
     */
    inline bool ParentEntityUpdateHasBeenSet() const { return m_parentEntityUpdateHasBeenSet; }

    /**
     * <p>An object that describes the update request for a parent entity.</p>
     */
    inline void SetParentEntityUpdate(const ParentEntityUpdateRequest& value) { m_parentEntityUpdateHasBeenSet = true; m_parentEntityUpdate = value; }

    /**
     * <p>An object that describes the update request for a parent entity.</p>
     */
    inline void SetParentEntityUpdate(ParentEntityUpdateRequest&& value) { m_parentEntityUpdateHasBeenSet = true; m_parentEntityUpdate = std::move(value); }

    /**
     * <p>An object that describes the update request for a parent entity.</p>
     */
    inline UpdateEntityRequest& WithParentEntityUpdate(const ParentEntityUpdateRequest& value) { SetParentEntityUpdate(value); return *this;}

    /**
     * <p>An object that describes the update request for a parent entity.</p>
     */
    inline UpdateEntityRequest& WithParentEntityUpdate(ParentEntityUpdateRequest&& value) { SetParentEntityUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, ComponentUpdateRequest> m_componentUpdates;
    bool m_componentUpdatesHasBeenSet = false;

    ParentEntityUpdateRequest m_parentEntityUpdate;
    bool m_parentEntityUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
