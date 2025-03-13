/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTTwinMaker
{
namespace Model
{

  /**
   * <p>An object that filters items in a list of entities.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ListEntitiesFilter">AWS
   * API Reference</a></p>
   */
  class ListEntitiesFilter
  {
  public:
    AWS_IOTTWINMAKER_API ListEntitiesFilter() = default;
    AWS_IOTTWINMAKER_API ListEntitiesFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ListEntitiesFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The parent of the entities in the list.</p>
     */
    inline const Aws::String& GetParentEntityId() const { return m_parentEntityId; }
    inline bool ParentEntityIdHasBeenSet() const { return m_parentEntityIdHasBeenSet; }
    template<typename ParentEntityIdT = Aws::String>
    void SetParentEntityId(ParentEntityIdT&& value) { m_parentEntityIdHasBeenSet = true; m_parentEntityId = std::forward<ParentEntityIdT>(value); }
    template<typename ParentEntityIdT = Aws::String>
    ListEntitiesFilter& WithParentEntityId(ParentEntityIdT&& value) { SetParentEntityId(std::forward<ParentEntityIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the component type in the entities in the list.</p>
     */
    inline const Aws::String& GetComponentTypeId() const { return m_componentTypeId; }
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }
    template<typename ComponentTypeIdT = Aws::String>
    void SetComponentTypeId(ComponentTypeIdT&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::forward<ComponentTypeIdT>(value); }
    template<typename ComponentTypeIdT = Aws::String>
    ListEntitiesFilter& WithComponentTypeId(ComponentTypeIdT&& value) { SetComponentTypeId(std::forward<ComponentTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The external-Id property of a component. The external-Id property is the
     * primary key of an external storage system.</p>
     */
    inline const Aws::String& GetExternalId() const { return m_externalId; }
    inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
    template<typename ExternalIdT = Aws::String>
    void SetExternalId(ExternalIdT&& value) { m_externalIdHasBeenSet = true; m_externalId = std::forward<ExternalIdT>(value); }
    template<typename ExternalIdT = Aws::String>
    ListEntitiesFilter& WithExternalId(ExternalIdT&& value) { SetExternalId(std::forward<ExternalIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_parentEntityId;
    bool m_parentEntityIdHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;

    Aws::String m_externalId;
    bool m_externalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
