/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/ComponentUpdateType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/iottwinmaker/model/PropertyRequest.h>
#include <aws/iottwinmaker/model/ComponentPropertyGroupRequest.h>
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
   * <p>An object that sets information about the composite component update
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CompositeComponentUpdateRequest">AWS
   * API Reference</a></p>
   */
  class CompositeComponentUpdateRequest
  {
  public:
    AWS_IOTTWINMAKER_API CompositeComponentUpdateRequest();
    AWS_IOTTWINMAKER_API CompositeComponentUpdateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API CompositeComponentUpdateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The update type of the component update request.</p>
     */
    inline const ComponentUpdateType& GetUpdateType() const{ return m_updateType; }

    /**
     * <p>The update type of the component update request.</p>
     */
    inline bool UpdateTypeHasBeenSet() const { return m_updateTypeHasBeenSet; }

    /**
     * <p>The update type of the component update request.</p>
     */
    inline void SetUpdateType(const ComponentUpdateType& value) { m_updateTypeHasBeenSet = true; m_updateType = value; }

    /**
     * <p>The update type of the component update request.</p>
     */
    inline void SetUpdateType(ComponentUpdateType&& value) { m_updateTypeHasBeenSet = true; m_updateType = std::move(value); }

    /**
     * <p>The update type of the component update request.</p>
     */
    inline CompositeComponentUpdateRequest& WithUpdateType(const ComponentUpdateType& value) { SetUpdateType(value); return *this;}

    /**
     * <p>The update type of the component update request.</p>
     */
    inline CompositeComponentUpdateRequest& WithUpdateType(ComponentUpdateType&& value) { SetUpdateType(std::move(value)); return *this;}


    /**
     * <p>The description of the component type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the component type.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the component type.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the component type.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the component type.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the component type.</p>
     */
    inline CompositeComponentUpdateRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the component type.</p>
     */
    inline CompositeComponentUpdateRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the component type.</p>
     */
    inline CompositeComponentUpdateRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyRequest>& GetPropertyUpdates() const{ return m_propertyUpdates; }

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline bool PropertyUpdatesHasBeenSet() const { return m_propertyUpdatesHasBeenSet; }

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline void SetPropertyUpdates(const Aws::Map<Aws::String, PropertyRequest>& value) { m_propertyUpdatesHasBeenSet = true; m_propertyUpdates = value; }

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline void SetPropertyUpdates(Aws::Map<Aws::String, PropertyRequest>&& value) { m_propertyUpdatesHasBeenSet = true; m_propertyUpdates = std::move(value); }

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline CompositeComponentUpdateRequest& WithPropertyUpdates(const Aws::Map<Aws::String, PropertyRequest>& value) { SetPropertyUpdates(value); return *this;}

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline CompositeComponentUpdateRequest& WithPropertyUpdates(Aws::Map<Aws::String, PropertyRequest>&& value) { SetPropertyUpdates(std::move(value)); return *this;}

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyUpdates(const Aws::String& key, const PropertyRequest& value) { m_propertyUpdatesHasBeenSet = true; m_propertyUpdates.emplace(key, value); return *this; }

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyUpdates(Aws::String&& key, const PropertyRequest& value) { m_propertyUpdatesHasBeenSet = true; m_propertyUpdates.emplace(std::move(key), value); return *this; }

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyUpdates(const Aws::String& key, PropertyRequest&& value) { m_propertyUpdatesHasBeenSet = true; m_propertyUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyUpdates(Aws::String&& key, PropertyRequest&& value) { m_propertyUpdatesHasBeenSet = true; m_propertyUpdates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyUpdates(const char* key, PropertyRequest&& value) { m_propertyUpdatesHasBeenSet = true; m_propertyUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An object that maps strings to the properties to set in the component type
     * update. Each string in the mapping must be unique to this object.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyUpdates(const char* key, const PropertyRequest& value) { m_propertyUpdatesHasBeenSet = true; m_propertyUpdates.emplace(key, value); return *this; }


    /**
     * <p>The property group updates.</p>
     */
    inline const Aws::Map<Aws::String, ComponentPropertyGroupRequest>& GetPropertyGroupUpdates() const{ return m_propertyGroupUpdates; }

    /**
     * <p>The property group updates.</p>
     */
    inline bool PropertyGroupUpdatesHasBeenSet() const { return m_propertyGroupUpdatesHasBeenSet; }

    /**
     * <p>The property group updates.</p>
     */
    inline void SetPropertyGroupUpdates(const Aws::Map<Aws::String, ComponentPropertyGroupRequest>& value) { m_propertyGroupUpdatesHasBeenSet = true; m_propertyGroupUpdates = value; }

    /**
     * <p>The property group updates.</p>
     */
    inline void SetPropertyGroupUpdates(Aws::Map<Aws::String, ComponentPropertyGroupRequest>&& value) { m_propertyGroupUpdatesHasBeenSet = true; m_propertyGroupUpdates = std::move(value); }

    /**
     * <p>The property group updates.</p>
     */
    inline CompositeComponentUpdateRequest& WithPropertyGroupUpdates(const Aws::Map<Aws::String, ComponentPropertyGroupRequest>& value) { SetPropertyGroupUpdates(value); return *this;}

    /**
     * <p>The property group updates.</p>
     */
    inline CompositeComponentUpdateRequest& WithPropertyGroupUpdates(Aws::Map<Aws::String, ComponentPropertyGroupRequest>&& value) { SetPropertyGroupUpdates(std::move(value)); return *this;}

    /**
     * <p>The property group updates.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyGroupUpdates(const Aws::String& key, const ComponentPropertyGroupRequest& value) { m_propertyGroupUpdatesHasBeenSet = true; m_propertyGroupUpdates.emplace(key, value); return *this; }

    /**
     * <p>The property group updates.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyGroupUpdates(Aws::String&& key, const ComponentPropertyGroupRequest& value) { m_propertyGroupUpdatesHasBeenSet = true; m_propertyGroupUpdates.emplace(std::move(key), value); return *this; }

    /**
     * <p>The property group updates.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyGroupUpdates(const Aws::String& key, ComponentPropertyGroupRequest&& value) { m_propertyGroupUpdatesHasBeenSet = true; m_propertyGroupUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The property group updates.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyGroupUpdates(Aws::String&& key, ComponentPropertyGroupRequest&& value) { m_propertyGroupUpdatesHasBeenSet = true; m_propertyGroupUpdates.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The property group updates.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyGroupUpdates(const char* key, ComponentPropertyGroupRequest&& value) { m_propertyGroupUpdatesHasBeenSet = true; m_propertyGroupUpdates.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The property group updates.</p>
     */
    inline CompositeComponentUpdateRequest& AddPropertyGroupUpdates(const char* key, const ComponentPropertyGroupRequest& value) { m_propertyGroupUpdatesHasBeenSet = true; m_propertyGroupUpdates.emplace(key, value); return *this; }

  private:

    ComponentUpdateType m_updateType;
    bool m_updateTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, PropertyRequest> m_propertyUpdates;
    bool m_propertyUpdatesHasBeenSet = false;

    Aws::Map<Aws::String, ComponentPropertyGroupRequest> m_propertyGroupUpdates;
    bool m_propertyGroupUpdatesHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
