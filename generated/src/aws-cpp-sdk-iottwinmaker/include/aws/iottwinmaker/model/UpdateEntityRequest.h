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
#include <aws/iottwinmaker/model/CompositeComponentUpdateRequest.h>
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
    AWS_IOTTWINMAKER_API UpdateEntityRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateEntity"; }

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
    UpdateEntityRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
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
    UpdateEntityRequest& WithEntityId(EntityIdT&& value) { SetEntityId(std::forward<EntityIdT>(value)); return *this;}
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
    UpdateEntityRequest& WithEntityName(EntityNameT&& value) { SetEntityName(std::forward<EntityNameT>(value)); return *this;}
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
    UpdateEntityRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the component updates in the request. Each
     * string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, ComponentUpdateRequest>& GetComponentUpdates() const { return m_componentUpdates; }
    inline bool ComponentUpdatesHasBeenSet() const { return m_componentUpdatesHasBeenSet; }
    template<typename ComponentUpdatesT = Aws::Map<Aws::String, ComponentUpdateRequest>>
    void SetComponentUpdates(ComponentUpdatesT&& value) { m_componentUpdatesHasBeenSet = true; m_componentUpdates = std::forward<ComponentUpdatesT>(value); }
    template<typename ComponentUpdatesT = Aws::Map<Aws::String, ComponentUpdateRequest>>
    UpdateEntityRequest& WithComponentUpdates(ComponentUpdatesT&& value) { SetComponentUpdates(std::forward<ComponentUpdatesT>(value)); return *this;}
    template<typename ComponentUpdatesKeyT = Aws::String, typename ComponentUpdatesValueT = ComponentUpdateRequest>
    UpdateEntityRequest& AddComponentUpdates(ComponentUpdatesKeyT&& key, ComponentUpdatesValueT&& value) {
      m_componentUpdatesHasBeenSet = true; m_componentUpdates.emplace(std::forward<ComponentUpdatesKeyT>(key), std::forward<ComponentUpdatesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>This is an object that maps strings to <code>compositeComponent</code>
     * updates in the request. Each key of the map represents the
     * <code>componentPath</code> of the <code>compositeComponent</code>.</p>
     */
    inline const Aws::Map<Aws::String, CompositeComponentUpdateRequest>& GetCompositeComponentUpdates() const { return m_compositeComponentUpdates; }
    inline bool CompositeComponentUpdatesHasBeenSet() const { return m_compositeComponentUpdatesHasBeenSet; }
    template<typename CompositeComponentUpdatesT = Aws::Map<Aws::String, CompositeComponentUpdateRequest>>
    void SetCompositeComponentUpdates(CompositeComponentUpdatesT&& value) { m_compositeComponentUpdatesHasBeenSet = true; m_compositeComponentUpdates = std::forward<CompositeComponentUpdatesT>(value); }
    template<typename CompositeComponentUpdatesT = Aws::Map<Aws::String, CompositeComponentUpdateRequest>>
    UpdateEntityRequest& WithCompositeComponentUpdates(CompositeComponentUpdatesT&& value) { SetCompositeComponentUpdates(std::forward<CompositeComponentUpdatesT>(value)); return *this;}
    template<typename CompositeComponentUpdatesKeyT = Aws::String, typename CompositeComponentUpdatesValueT = CompositeComponentUpdateRequest>
    UpdateEntityRequest& AddCompositeComponentUpdates(CompositeComponentUpdatesKeyT&& key, CompositeComponentUpdatesValueT&& value) {
      m_compositeComponentUpdatesHasBeenSet = true; m_compositeComponentUpdates.emplace(std::forward<CompositeComponentUpdatesKeyT>(key), std::forward<CompositeComponentUpdatesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>An object that describes the update request for a parent entity.</p>
     */
    inline const ParentEntityUpdateRequest& GetParentEntityUpdate() const { return m_parentEntityUpdate; }
    inline bool ParentEntityUpdateHasBeenSet() const { return m_parentEntityUpdateHasBeenSet; }
    template<typename ParentEntityUpdateT = ParentEntityUpdateRequest>
    void SetParentEntityUpdate(ParentEntityUpdateT&& value) { m_parentEntityUpdateHasBeenSet = true; m_parentEntityUpdate = std::forward<ParentEntityUpdateT>(value); }
    template<typename ParentEntityUpdateT = ParentEntityUpdateRequest>
    UpdateEntityRequest& WithParentEntityUpdate(ParentEntityUpdateT&& value) { SetParentEntityUpdate(std::forward<ParentEntityUpdateT>(value)); return *this;}
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

    Aws::Map<Aws::String, ComponentUpdateRequest> m_componentUpdates;
    bool m_componentUpdatesHasBeenSet = false;

    Aws::Map<Aws::String, CompositeComponentUpdateRequest> m_compositeComponentUpdates;
    bool m_compositeComponentUpdatesHasBeenSet = false;

    ParentEntityUpdateRequest m_parentEntityUpdate;
    bool m_parentEntityUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
