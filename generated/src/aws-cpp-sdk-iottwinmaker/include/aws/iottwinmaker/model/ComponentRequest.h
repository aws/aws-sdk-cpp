/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
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
   * <p>An object that sets information about a component type create or update
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/ComponentRequest">AWS
   * API Reference</a></p>
   */
  class ComponentRequest
  {
  public:
    AWS_IOTTWINMAKER_API ComponentRequest();
    AWS_IOTTWINMAKER_API ComponentRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API ComponentRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the component request.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ComponentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ComponentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ComponentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the component type.</p>
     */
    inline const Aws::String& GetComponentTypeId() const{ return m_componentTypeId; }
    inline bool ComponentTypeIdHasBeenSet() const { return m_componentTypeIdHasBeenSet; }
    inline void SetComponentTypeId(const Aws::String& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = value; }
    inline void SetComponentTypeId(Aws::String&& value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId = std::move(value); }
    inline void SetComponentTypeId(const char* value) { m_componentTypeIdHasBeenSet = true; m_componentTypeId.assign(value); }
    inline ComponentRequest& WithComponentTypeId(const Aws::String& value) { SetComponentTypeId(value); return *this;}
    inline ComponentRequest& WithComponentTypeId(Aws::String&& value) { SetComponentTypeId(std::move(value)); return *this;}
    inline ComponentRequest& WithComponentTypeId(const char* value) { SetComponentTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An object that maps strings to the properties to set in the component type.
     * Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyRequest>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Map<Aws::String, PropertyRequest>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, PropertyRequest>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline ComponentRequest& WithProperties(const Aws::Map<Aws::String, PropertyRequest>& value) { SetProperties(value); return *this;}
    inline ComponentRequest& WithProperties(Aws::Map<Aws::String, PropertyRequest>&& value) { SetProperties(std::move(value)); return *this;}
    inline ComponentRequest& AddProperties(const Aws::String& key, const PropertyRequest& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    inline ComponentRequest& AddProperties(Aws::String&& key, const PropertyRequest& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline ComponentRequest& AddProperties(const Aws::String& key, PropertyRequest&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline ComponentRequest& AddProperties(Aws::String&& key, PropertyRequest&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline ComponentRequest& AddProperties(const char* key, PropertyRequest&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline ComponentRequest& AddProperties(const char* key, const PropertyRequest& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The property groups.</p>
     */
    inline const Aws::Map<Aws::String, ComponentPropertyGroupRequest>& GetPropertyGroups() const{ return m_propertyGroups; }
    inline bool PropertyGroupsHasBeenSet() const { return m_propertyGroupsHasBeenSet; }
    inline void SetPropertyGroups(const Aws::Map<Aws::String, ComponentPropertyGroupRequest>& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = value; }
    inline void SetPropertyGroups(Aws::Map<Aws::String, ComponentPropertyGroupRequest>&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::move(value); }
    inline ComponentRequest& WithPropertyGroups(const Aws::Map<Aws::String, ComponentPropertyGroupRequest>& value) { SetPropertyGroups(value); return *this;}
    inline ComponentRequest& WithPropertyGroups(Aws::Map<Aws::String, ComponentPropertyGroupRequest>&& value) { SetPropertyGroups(std::move(value)); return *this;}
    inline ComponentRequest& AddPropertyGroups(const Aws::String& key, const ComponentPropertyGroupRequest& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, value); return *this; }
    inline ComponentRequest& AddPropertyGroups(Aws::String&& key, const ComponentPropertyGroupRequest& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::move(key), value); return *this; }
    inline ComponentRequest& AddPropertyGroups(const Aws::String& key, ComponentPropertyGroupRequest&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, std::move(value)); return *this; }
    inline ComponentRequest& AddPropertyGroups(Aws::String&& key, ComponentPropertyGroupRequest&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::move(key), std::move(value)); return *this; }
    inline ComponentRequest& AddPropertyGroups(const char* key, ComponentPropertyGroupRequest&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, std::move(value)); return *this; }
    inline ComponentRequest& AddPropertyGroups(const char* key, const ComponentPropertyGroupRequest& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_componentTypeId;
    bool m_componentTypeIdHasBeenSet = false;

    Aws::Map<Aws::String, PropertyRequest> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Map<Aws::String, ComponentPropertyGroupRequest> m_propertyGroups;
    bool m_propertyGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
