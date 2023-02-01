/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/IoTTwinMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/ComponentRequest.h>
#include <utility>

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

  /**
   */
  class CreateEntityRequest : public IoTTwinMakerRequest
  {
  public:
    AWS_IOTTWINMAKER_API CreateEntityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEntity"; }

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
    inline CreateEntityRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}

    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline CreateEntityRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline CreateEntityRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}


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
    inline CreateEntityRequest& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline CreateEntityRequest& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity.</p>
     */
    inline CreateEntityRequest& WithEntityId(const char* value) { SetEntityId(value); return *this;}


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
    inline CreateEntityRequest& WithEntityName(const Aws::String& value) { SetEntityName(value); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline CreateEntityRequest& WithEntityName(Aws::String&& value) { SetEntityName(std::move(value)); return *this;}

    /**
     * <p>The name of the entity.</p>
     */
    inline CreateEntityRequest& WithEntityName(const char* value) { SetEntityName(value); return *this;}


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
    inline CreateEntityRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the entity.</p>
     */
    inline CreateEntityRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the entity.</p>
     */
    inline CreateEntityRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, ComponentRequest>& GetComponents() const{ return m_components; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline void SetComponents(const Aws::Map<Aws::String, ComponentRequest>& value) { m_componentsHasBeenSet = true; m_components = value; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline void SetComponents(Aws::Map<Aws::String, ComponentRequest>&& value) { m_componentsHasBeenSet = true; m_components = std::move(value); }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline CreateEntityRequest& WithComponents(const Aws::Map<Aws::String, ComponentRequest>& value) { SetComponents(value); return *this;}

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline CreateEntityRequest& WithComponents(Aws::Map<Aws::String, ComponentRequest>&& value) { SetComponents(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline CreateEntityRequest& AddComponents(const Aws::String& key, const ComponentRequest& value) { m_componentsHasBeenSet = true; m_components.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline CreateEntityRequest& AddComponents(Aws::String&& key, const ComponentRequest& value) { m_componentsHasBeenSet = true; m_components.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline CreateEntityRequest& AddComponents(const Aws::String& key, ComponentRequest&& value) { m_componentsHasBeenSet = true; m_components.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline CreateEntityRequest& AddComponents(Aws::String&& key, ComponentRequest&& value) { m_componentsHasBeenSet = true; m_components.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline CreateEntityRequest& AddComponents(const char* key, ComponentRequest&& value) { m_componentsHasBeenSet = true; m_components.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline CreateEntityRequest& AddComponents(const char* key, const ComponentRequest& value) { m_componentsHasBeenSet = true; m_components.emplace(key, value); return *this; }


    /**
     * <p>The ID of the entity's parent entity.</p>
     */
    inline const Aws::String& GetParentEntityId() const{ return m_parentEntityId; }

    /**
     * <p>The ID of the entity's parent entity.</p>
     */
    inline bool ParentEntityIdHasBeenSet() const { return m_parentEntityIdHasBeenSet; }

    /**
     * <p>The ID of the entity's parent entity.</p>
     */
    inline void SetParentEntityId(const Aws::String& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = value; }

    /**
     * <p>The ID of the entity's parent entity.</p>
     */
    inline void SetParentEntityId(Aws::String&& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = std::move(value); }

    /**
     * <p>The ID of the entity's parent entity.</p>
     */
    inline void SetParentEntityId(const char* value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId.assign(value); }

    /**
     * <p>The ID of the entity's parent entity.</p>
     */
    inline CreateEntityRequest& WithParentEntityId(const Aws::String& value) { SetParentEntityId(value); return *this;}

    /**
     * <p>The ID of the entity's parent entity.</p>
     */
    inline CreateEntityRequest& WithParentEntityId(Aws::String&& value) { SetParentEntityId(std::move(value)); return *this;}

    /**
     * <p>The ID of the entity's parent entity.</p>
     */
    inline CreateEntityRequest& WithParentEntityId(const char* value) { SetParentEntityId(value); return *this;}


    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline CreateEntityRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline CreateEntityRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline CreateEntityRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline CreateEntityRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline CreateEntityRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline CreateEntityRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline CreateEntityRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline CreateEntityRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline CreateEntityRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_entityName;
    bool m_entityNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, ComponentRequest> m_components;
    bool m_componentsHasBeenSet = false;

    Aws::String m_parentEntityId;
    bool m_parentEntityIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
