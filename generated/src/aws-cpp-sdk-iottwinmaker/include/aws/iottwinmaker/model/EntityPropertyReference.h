/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>An object that uniquely identifies an entity property.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/EntityPropertyReference">AWS
   * API Reference</a></p>
   */
  class EntityPropertyReference
  {
  public:
    AWS_IOTTWINMAKER_API EntityPropertyReference();
    AWS_IOTTWINMAKER_API EntityPropertyReference(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API EntityPropertyReference& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }
    inline EntityPropertyReference& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}
    inline EntityPropertyReference& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}
    inline EntityPropertyReference& WithComponentName(const char* value) { SetComponentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This string specifies the path to the composite component, starting from the
     * top-level component.</p>
     */
    inline const Aws::String& GetComponentPath() const{ return m_componentPath; }
    inline bool ComponentPathHasBeenSet() const { return m_componentPathHasBeenSet; }
    inline void SetComponentPath(const Aws::String& value) { m_componentPathHasBeenSet = true; m_componentPath = value; }
    inline void SetComponentPath(Aws::String&& value) { m_componentPathHasBeenSet = true; m_componentPath = std::move(value); }
    inline void SetComponentPath(const char* value) { m_componentPathHasBeenSet = true; m_componentPath.assign(value); }
    inline EntityPropertyReference& WithComponentPath(const Aws::String& value) { SetComponentPath(value); return *this;}
    inline EntityPropertyReference& WithComponentPath(Aws::String&& value) { SetComponentPath(std::move(value)); return *this;}
    inline EntityPropertyReference& WithComponentPath(const char* value) { SetComponentPath(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A mapping of external IDs to property names. External IDs uniquely identify
     * properties from external data stores.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetExternalIdProperty() const{ return m_externalIdProperty; }
    inline bool ExternalIdPropertyHasBeenSet() const { return m_externalIdPropertyHasBeenSet; }
    inline void SetExternalIdProperty(const Aws::Map<Aws::String, Aws::String>& value) { m_externalIdPropertyHasBeenSet = true; m_externalIdProperty = value; }
    inline void SetExternalIdProperty(Aws::Map<Aws::String, Aws::String>&& value) { m_externalIdPropertyHasBeenSet = true; m_externalIdProperty = std::move(value); }
    inline EntityPropertyReference& WithExternalIdProperty(const Aws::Map<Aws::String, Aws::String>& value) { SetExternalIdProperty(value); return *this;}
    inline EntityPropertyReference& WithExternalIdProperty(Aws::Map<Aws::String, Aws::String>&& value) { SetExternalIdProperty(std::move(value)); return *this;}
    inline EntityPropertyReference& AddExternalIdProperty(const Aws::String& key, const Aws::String& value) { m_externalIdPropertyHasBeenSet = true; m_externalIdProperty.emplace(key, value); return *this; }
    inline EntityPropertyReference& AddExternalIdProperty(Aws::String&& key, const Aws::String& value) { m_externalIdPropertyHasBeenSet = true; m_externalIdProperty.emplace(std::move(key), value); return *this; }
    inline EntityPropertyReference& AddExternalIdProperty(const Aws::String& key, Aws::String&& value) { m_externalIdPropertyHasBeenSet = true; m_externalIdProperty.emplace(key, std::move(value)); return *this; }
    inline EntityPropertyReference& AddExternalIdProperty(Aws::String&& key, Aws::String&& value) { m_externalIdPropertyHasBeenSet = true; m_externalIdProperty.emplace(std::move(key), std::move(value)); return *this; }
    inline EntityPropertyReference& AddExternalIdProperty(const char* key, Aws::String&& value) { m_externalIdPropertyHasBeenSet = true; m_externalIdProperty.emplace(key, std::move(value)); return *this; }
    inline EntityPropertyReference& AddExternalIdProperty(Aws::String&& key, const char* value) { m_externalIdPropertyHasBeenSet = true; m_externalIdProperty.emplace(std::move(key), value); return *this; }
    inline EntityPropertyReference& AddExternalIdProperty(const char* key, const char* value) { m_externalIdPropertyHasBeenSet = true; m_externalIdProperty.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the entity.</p>
     */
    inline const Aws::String& GetEntityId() const{ return m_entityId; }
    inline bool EntityIdHasBeenSet() const { return m_entityIdHasBeenSet; }
    inline void SetEntityId(const Aws::String& value) { m_entityIdHasBeenSet = true; m_entityId = value; }
    inline void SetEntityId(Aws::String&& value) { m_entityIdHasBeenSet = true; m_entityId = std::move(value); }
    inline void SetEntityId(const char* value) { m_entityIdHasBeenSet = true; m_entityId.assign(value); }
    inline EntityPropertyReference& WithEntityId(const Aws::String& value) { SetEntityId(value); return *this;}
    inline EntityPropertyReference& WithEntityId(Aws::String&& value) { SetEntityId(std::move(value)); return *this;}
    inline EntityPropertyReference& WithEntityId(const char* value) { SetEntityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the property.</p>
     */
    inline const Aws::String& GetPropertyName() const{ return m_propertyName; }
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }
    inline void SetPropertyName(const Aws::String& value) { m_propertyNameHasBeenSet = true; m_propertyName = value; }
    inline void SetPropertyName(Aws::String&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::move(value); }
    inline void SetPropertyName(const char* value) { m_propertyNameHasBeenSet = true; m_propertyName.assign(value); }
    inline EntityPropertyReference& WithPropertyName(const Aws::String& value) { SetPropertyName(value); return *this;}
    inline EntityPropertyReference& WithPropertyName(Aws::String&& value) { SetPropertyName(std::move(value)); return *this;}
    inline EntityPropertyReference& WithPropertyName(const char* value) { SetPropertyName(value); return *this;}
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_componentPath;
    bool m_componentPathHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_externalIdProperty;
    bool m_externalIdPropertyHasBeenSet = false;

    Aws::String m_entityId;
    bool m_entityIdHasBeenSet = false;

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
