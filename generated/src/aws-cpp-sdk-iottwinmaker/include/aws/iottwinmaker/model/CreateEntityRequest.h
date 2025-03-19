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
#include <aws/iottwinmaker/model/CompositeComponentRequest.h>
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
    AWS_IOTTWINMAKER_API CreateEntityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateEntity"; }

    AWS_IOTTWINMAKER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace that contains the entity.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    CreateEntityRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const { return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    template<typename EntityIdT = Aws::String>
    void SetEntityId(EntityIdT&& value) { m_entityIdHasBeenSet = true; m_entityId = std::forward<EntityIdT>(value); }
    template<typename EntityIdT = Aws::String>
    CreateEntityRequest& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the entity.</p>
     */
    inline const Aws::String& GetEntityName() const { return m_entityName; }
    inline bool EntityNameHasBeenSet() const { return m_entityNameHasBeenSet; }
    template<typename EntityNameT = Aws::String>
    void SetEntityName(EntityNameT&& value) { m_entityNameHasBeenSet = true; m_entityName = std::forward<EntityNameT>(value); }
    template<typename EntityNameT = Aws::String>
    CreateEntityRequest& WithEntityName(EntityNameT&& value) { SetEntityName(std::forward<EntityNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the entity.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateEntityRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the components in the entity. Each string in
     * the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, ComponentRequest>& GetComponents() const { return m_components; }
    inline bool ComponentsHasBeenSet() const { return m_componentsHasBeenSet; }
    template<typename ComponentsT = Aws::Map<Aws::String, ComponentRequest>>
    void SetComponents(ComponentsT&& value) { m_componentsHasBeenSet = true; m_components = std::forward<ComponentsT>(value); }
    template<typename ComponentsT = Aws::Map<Aws::String, ComponentRequest>>
    CreateEntityRequest& WithComponents(ComponentsT&& value) { SetComponents(std::forward<ComponentsT>(value)); return *this;}
    template<typename ComponentsKeyT = Aws::String, typename ComponentsValueT = ComponentRequest>
    CreateEntityRequest& AddComponents(ComponentsKeyT&& key, ComponentsValueT&& value) {
      m_componentsHasBeenSet = true; m_components.emplace(std::forward<ComponentsKeyT>(key), std::forward<ComponentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This is an object that maps strings to <code>compositeComponent</code>
     * updates in the request. Each key of the map represents the
     * <code>componentPath</code> of the <code>compositeComponent</code>.</p>
     */
    inline const Aws::Map<Aws::String, CompositeComponentRequest>& GetCompositeComponents() const { return m_compositeComponents; }
    inline bool CompositeComponentsHasBeenSet() const { return m_compositeComponentsHasBeenSet; }
    template<typename CompositeComponentsT = Aws::Map<Aws::String, CompositeComponentRequest>>
    void SetCompositeComponents(CompositeComponentsT&& value) { m_compositeComponentsHasBeenSet = true; m_compositeComponents = std::forward<CompositeComponentsT>(value); }
    template<typename CompositeComponentsT = Aws::Map<Aws::String, CompositeComponentRequest>>
    CreateEntityRequest& WithCompositeComponents(CompositeComponentsT&& value) { SetCompositeComponents(std::forward<CompositeComponentsT>(value)); return *this;}
    template<typename CompositeComponentsKeyT = Aws::String, typename CompositeComponentsValueT = CompositeComponentRequest>
    CreateEntityRequest& AddCompositeComponents(CompositeComponentsKeyT&& key, CompositeComponentsValueT&& value) {
      m_compositeComponentsHasBeenSet = true; m_compositeComponents.emplace(std::forward<CompositeComponentsKeyT>(key), std::forward<CompositeComponentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The ID of the entity's parent entity.</p>
     */
    inline const Aws::String& GetParentEntityId() const { return m_parentEntityId; }
    inline bool ParentEntityIdHasBeenSet() const { return m_parentEntityIdHasBeenSet; }
    template<typename ParentEntityIdT = Aws::String>
    void SetParentEntityId(ParentEntityIdT&& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = std::forward<ParentEntityIdT>(value); }
    template<typename ParentEntityIdT = Aws::String>
    CreateEntityRequest& WithParentEntityId(ParentEntityIdT&& value) { SetParentEntityId(std::forward<ParentEntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata that you can use to manage the entity.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateEntityRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateEntityRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
    ///@}
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

    Aws::Map<Aws::String, CompositeComponentRequest> m_compositeComponents;
    bool m_compositeComponentsHasBeenSet = false;

    Aws::String m_parentEntityId;
    bool m_parentEntityIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
