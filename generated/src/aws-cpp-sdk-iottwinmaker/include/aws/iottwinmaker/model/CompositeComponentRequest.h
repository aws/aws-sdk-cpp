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
   * <p>An object that sets information about the composite component update
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/CompositeComponentRequest">AWS
   * API Reference</a></p>
   */
  class CompositeComponentRequest
  {
  public:
    AWS_IOTTWINMAKER_API CompositeComponentRequest();
    AWS_IOTTWINMAKER_API CompositeComponentRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API CompositeComponentRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The description of the component type.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CompositeComponentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CompositeComponentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CompositeComponentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is an object that maps strings to the properties to set in the component
     * type. Each string in the mapping must be unique to this object.</p>
     */
    inline const Aws::Map<Aws::String, PropertyRequest>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Map<Aws::String, PropertyRequest>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, PropertyRequest>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline CompositeComponentRequest& WithProperties(const Aws::Map<Aws::String, PropertyRequest>& value) { SetProperties(value); return *this;}
    inline CompositeComponentRequest& WithProperties(Aws::Map<Aws::String, PropertyRequest>&& value) { SetProperties(std::move(value)); return *this;}
    inline CompositeComponentRequest& AddProperties(const Aws::String& key, const PropertyRequest& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    inline CompositeComponentRequest& AddProperties(Aws::String&& key, const PropertyRequest& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline CompositeComponentRequest& AddProperties(const Aws::String& key, PropertyRequest&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline CompositeComponentRequest& AddProperties(Aws::String&& key, PropertyRequest&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline CompositeComponentRequest& AddProperties(const char* key, PropertyRequest&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline CompositeComponentRequest& AddProperties(const char* key, const PropertyRequest& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The property groups.</p>
     */
    inline const Aws::Map<Aws::String, ComponentPropertyGroupRequest>& GetPropertyGroups() const{ return m_propertyGroups; }
    inline bool PropertyGroupsHasBeenSet() const { return m_propertyGroupsHasBeenSet; }
    inline void SetPropertyGroups(const Aws::Map<Aws::String, ComponentPropertyGroupRequest>& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = value; }
    inline void SetPropertyGroups(Aws::Map<Aws::String, ComponentPropertyGroupRequest>&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups = std::move(value); }
    inline CompositeComponentRequest& WithPropertyGroups(const Aws::Map<Aws::String, ComponentPropertyGroupRequest>& value) { SetPropertyGroups(value); return *this;}
    inline CompositeComponentRequest& WithPropertyGroups(Aws::Map<Aws::String, ComponentPropertyGroupRequest>&& value) { SetPropertyGroups(std::move(value)); return *this;}
    inline CompositeComponentRequest& AddPropertyGroups(const Aws::String& key, const ComponentPropertyGroupRequest& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, value); return *this; }
    inline CompositeComponentRequest& AddPropertyGroups(Aws::String&& key, const ComponentPropertyGroupRequest& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::move(key), value); return *this; }
    inline CompositeComponentRequest& AddPropertyGroups(const Aws::String& key, ComponentPropertyGroupRequest&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, std::move(value)); return *this; }
    inline CompositeComponentRequest& AddPropertyGroups(Aws::String&& key, ComponentPropertyGroupRequest&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(std::move(key), std::move(value)); return *this; }
    inline CompositeComponentRequest& AddPropertyGroups(const char* key, ComponentPropertyGroupRequest&& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, std::move(value)); return *this; }
    inline CompositeComponentRequest& AddPropertyGroups(const char* key, const ComponentPropertyGroupRequest& value) { m_propertyGroupsHasBeenSet = true; m_propertyGroups.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, PropertyRequest> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Map<Aws::String, ComponentPropertyGroupRequest> m_propertyGroups;
    bool m_propertyGroupsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
