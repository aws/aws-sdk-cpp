/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/amplifyuibuilder/model/ComponentBindingPropertiesValue.h>
#include <aws/amplifyuibuilder/model/ComponentChild.h>
#include <aws/amplifyuibuilder/model/ComponentDataConfiguration.h>
#include <aws/amplifyuibuilder/model/ComponentEvent.h>
#include <aws/amplifyuibuilder/model/ComponentProperty.h>
#include <aws/amplifyuibuilder/model/ComponentVariant.h>
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
namespace AmplifyUIBuilder
{
namespace Model
{

  /**
   * <p>Contains the configuration settings for a user interface (UI) element for an
   * Amplify app. A component is configured as a primary, stand-alone UI element. Use
   * <code>ComponentChild</code> to configure an instance of a
   * <code>Component</code>. A <code>ComponentChild</code> instance inherits the
   * configuration of the main <code>Component</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/Component">AWS
   * API Reference</a></p>
   */
  class Component
  {
  public:
    AWS_AMPLIFYUIBUILDER_API Component();
    AWS_AMPLIFYUIBUILDER_API Component(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Component& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique ID of the Amplify app associated with the component.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The unique ID of the Amplify app associated with the component.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The unique ID of the Amplify app associated with the component.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The unique ID of the Amplify app associated with the component.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The unique ID of the Amplify app associated with the component.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The unique ID of the Amplify app associated with the component.</p>
     */
    inline Component& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The unique ID of the Amplify app associated with the component.</p>
     */
    inline Component& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the Amplify app associated with the component.</p>
     */
    inline Component& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline const Aws::Map<Aws::String, ComponentBindingPropertiesValue>& GetBindingProperties() const{ return m_bindingProperties; }

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline bool BindingPropertiesHasBeenSet() const { return m_bindingPropertiesHasBeenSet; }

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline void SetBindingProperties(const Aws::Map<Aws::String, ComponentBindingPropertiesValue>& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = value; }

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline void SetBindingProperties(Aws::Map<Aws::String, ComponentBindingPropertiesValue>&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties = std::move(value); }

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline Component& WithBindingProperties(const Aws::Map<Aws::String, ComponentBindingPropertiesValue>& value) { SetBindingProperties(value); return *this;}

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline Component& WithBindingProperties(Aws::Map<Aws::String, ComponentBindingPropertiesValue>&& value) { SetBindingProperties(std::move(value)); return *this;}

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline Component& AddBindingProperties(const Aws::String& key, const ComponentBindingPropertiesValue& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, value); return *this; }

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline Component& AddBindingProperties(Aws::String&& key, const ComponentBindingPropertiesValue& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline Component& AddBindingProperties(const Aws::String& key, ComponentBindingPropertiesValue&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline Component& AddBindingProperties(Aws::String&& key, ComponentBindingPropertiesValue&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline Component& AddBindingProperties(const char* key, ComponentBindingPropertiesValue&& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The information to connect a component's properties to data at runtime. You
     * can't specify <code>tags</code> as a valid property for
     * <code>bindingProperties</code>.</p> <p/>
     */
    inline Component& AddBindingProperties(const char* key, const ComponentBindingPropertiesValue& value) { m_bindingPropertiesHasBeenSet = true; m_bindingProperties.emplace(key, value); return *this; }


    /**
     * <p>A list of the component's <code>ComponentChild</code> instances.</p>
     */
    inline const Aws::Vector<ComponentChild>& GetChildren() const{ return m_children; }

    /**
     * <p>A list of the component's <code>ComponentChild</code> instances.</p>
     */
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }

    /**
     * <p>A list of the component's <code>ComponentChild</code> instances.</p>
     */
    inline void SetChildren(const Aws::Vector<ComponentChild>& value) { m_childrenHasBeenSet = true; m_children = value; }

    /**
     * <p>A list of the component's <code>ComponentChild</code> instances.</p>
     */
    inline void SetChildren(Aws::Vector<ComponentChild>&& value) { m_childrenHasBeenSet = true; m_children = std::move(value); }

    /**
     * <p>A list of the component's <code>ComponentChild</code> instances.</p>
     */
    inline Component& WithChildren(const Aws::Vector<ComponentChild>& value) { SetChildren(value); return *this;}

    /**
     * <p>A list of the component's <code>ComponentChild</code> instances.</p>
     */
    inline Component& WithChildren(Aws::Vector<ComponentChild>&& value) { SetChildren(std::move(value)); return *this;}

    /**
     * <p>A list of the component's <code>ComponentChild</code> instances.</p>
     */
    inline Component& AddChildren(const ComponentChild& value) { m_childrenHasBeenSet = true; m_children.push_back(value); return *this; }

    /**
     * <p>A list of the component's <code>ComponentChild</code> instances.</p>
     */
    inline Component& AddChildren(ComponentChild&& value) { m_childrenHasBeenSet = true; m_children.push_back(std::move(value)); return *this; }


    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline const Aws::Map<Aws::String, ComponentDataConfiguration>& GetCollectionProperties() const{ return m_collectionProperties; }

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline bool CollectionPropertiesHasBeenSet() const { return m_collectionPropertiesHasBeenSet; }

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline void SetCollectionProperties(const Aws::Map<Aws::String, ComponentDataConfiguration>& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties = value; }

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline void SetCollectionProperties(Aws::Map<Aws::String, ComponentDataConfiguration>&& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties = std::move(value); }

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline Component& WithCollectionProperties(const Aws::Map<Aws::String, ComponentDataConfiguration>& value) { SetCollectionProperties(value); return *this;}

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline Component& WithCollectionProperties(Aws::Map<Aws::String, ComponentDataConfiguration>&& value) { SetCollectionProperties(std::move(value)); return *this;}

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline Component& AddCollectionProperties(const Aws::String& key, const ComponentDataConfiguration& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(key, value); return *this; }

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline Component& AddCollectionProperties(Aws::String&& key, const ComponentDataConfiguration& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(std::move(key), value); return *this; }

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline Component& AddCollectionProperties(const Aws::String& key, ComponentDataConfiguration&& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline Component& AddCollectionProperties(Aws::String&& key, ComponentDataConfiguration&& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline Component& AddCollectionProperties(const char* key, ComponentDataConfiguration&& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The data binding configuration for the component's properties. Use this for a
     * collection component. You can't specify <code>tags</code> as a valid property
     * for <code>collectionProperties</code>.</p>
     */
    inline Component& AddCollectionProperties(const char* key, const ComponentDataConfiguration& value) { m_collectionPropertiesHasBeenSet = true; m_collectionProperties.emplace(key, value); return *this; }


    /**
     * <p>The type of the component. This can be an Amplify custom UI component or
     * another custom component.</p>
     */
    inline const Aws::String& GetComponentType() const{ return m_componentType; }

    /**
     * <p>The type of the component. This can be an Amplify custom UI component or
     * another custom component.</p>
     */
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }

    /**
     * <p>The type of the component. This can be an Amplify custom UI component or
     * another custom component.</p>
     */
    inline void SetComponentType(const Aws::String& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }

    /**
     * <p>The type of the component. This can be an Amplify custom UI component or
     * another custom component.</p>
     */
    inline void SetComponentType(Aws::String&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }

    /**
     * <p>The type of the component. This can be an Amplify custom UI component or
     * another custom component.</p>
     */
    inline void SetComponentType(const char* value) { m_componentTypeHasBeenSet = true; m_componentType.assign(value); }

    /**
     * <p>The type of the component. This can be an Amplify custom UI component or
     * another custom component.</p>
     */
    inline Component& WithComponentType(const Aws::String& value) { SetComponentType(value); return *this;}

    /**
     * <p>The type of the component. This can be an Amplify custom UI component or
     * another custom component.</p>
     */
    inline Component& WithComponentType(Aws::String&& value) { SetComponentType(std::move(value)); return *this;}

    /**
     * <p>The type of the component. This can be an Amplify custom UI component or
     * another custom component.</p>
     */
    inline Component& WithComponentType(const char* value) { SetComponentType(value); return *this;}


    /**
     * <p>The time that the component was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time that the component was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time that the component was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time that the component was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time that the component was created.</p>
     */
    inline Component& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time that the component was created.</p>
     */
    inline Component& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline Component& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline Component& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p>The name of the backend environment that is a part of the Amplify app.</p>
     */
    inline Component& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline const Aws::Map<Aws::String, ComponentEvent>& GetEvents() const{ return m_events; }

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline void SetEvents(const Aws::Map<Aws::String, ComponentEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline void SetEvents(Aws::Map<Aws::String, ComponentEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline Component& WithEvents(const Aws::Map<Aws::String, ComponentEvent>& value) { SetEvents(value); return *this;}

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline Component& WithEvents(Aws::Map<Aws::String, ComponentEvent>&& value) { SetEvents(std::move(value)); return *this;}

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline Component& AddEvents(const Aws::String& key, const ComponentEvent& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline Component& AddEvents(Aws::String&& key, const ComponentEvent& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), value); return *this; }

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline Component& AddEvents(const Aws::String& key, ComponentEvent&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline Component& AddEvents(Aws::String&& key, ComponentEvent&& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline Component& AddEvents(const char* key, ComponentEvent&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Describes the events that can be raised on the component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline Component& AddEvents(const char* key, const ComponentEvent& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }


    /**
     * <p>The unique ID of the component.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the component.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of the component.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of the component.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of the component.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique ID of the component.</p>
     */
    inline Component& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the component.</p>
     */
    inline Component& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the component.</p>
     */
    inline Component& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The time that the component was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetModifiedAt() const{ return m_modifiedAt; }

    /**
     * <p>The time that the component was modified.</p>
     */
    inline bool ModifiedAtHasBeenSet() const { return m_modifiedAtHasBeenSet; }

    /**
     * <p>The time that the component was modified.</p>
     */
    inline void SetModifiedAt(const Aws::Utils::DateTime& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = value; }

    /**
     * <p>The time that the component was modified.</p>
     */
    inline void SetModifiedAt(Aws::Utils::DateTime&& value) { m_modifiedAtHasBeenSet = true; m_modifiedAt = std::move(value); }

    /**
     * <p>The time that the component was modified.</p>
     */
    inline Component& WithModifiedAt(const Aws::Utils::DateTime& value) { SetModifiedAt(value); return *this;}

    /**
     * <p>The time that the component was modified.</p>
     */
    inline Component& WithModifiedAt(Aws::Utils::DateTime&& value) { SetModifiedAt(std::move(value)); return *this;}


    /**
     * <p>The name of the component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the component.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the component.</p>
     */
    inline Component& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline Component& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the component.</p>
     */
    inline Component& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& GetOverrides() const{ return m_overrides; }

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline bool OverridesHasBeenSet() const { return m_overridesHasBeenSet; }

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline void SetOverrides(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline void SetOverrides(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { m_overridesHasBeenSet = true; m_overrides = std::move(value); }

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline Component& WithOverrides(const Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>& value) { SetOverrides(value); return *this;}

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline Component& WithOverrides(Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>>&& value) { SetOverrides(std::move(value)); return *this;}

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline Component& AddOverrides(const Aws::String& key, const Aws::Map<Aws::String, Aws::String>& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, value); return *this; }

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline Component& AddOverrides(Aws::String&& key, const Aws::Map<Aws::String, Aws::String>& value) { m_overridesHasBeenSet = true; m_overrides.emplace(std::move(key), value); return *this; }

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline Component& AddOverrides(const Aws::String& key, Aws::Map<Aws::String, Aws::String>&& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline Component& AddOverrides(Aws::String&& key, Aws::Map<Aws::String, Aws::String>&& value) { m_overridesHasBeenSet = true; m_overrides.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline Component& AddOverrides(const char* key, Aws::Map<Aws::String, Aws::String>&& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Describes the component's properties that can be overriden in a customized
     * instance of the component. You can't specify <code>tags</code> as a valid
     * property for <code>overrides</code>.</p>
     */
    inline Component& AddOverrides(const char* key, const Aws::Map<Aws::String, Aws::String>& value) { m_overridesHasBeenSet = true; m_overrides.emplace(key, value); return *this; }


    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline const Aws::Map<Aws::String, ComponentProperty>& GetProperties() const{ return m_properties; }

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline void SetProperties(const Aws::Map<Aws::String, ComponentProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline void SetProperties(Aws::Map<Aws::String, ComponentProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline Component& WithProperties(const Aws::Map<Aws::String, ComponentProperty>& value) { SetProperties(value); return *this;}

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline Component& WithProperties(Aws::Map<Aws::String, ComponentProperty>&& value) { SetProperties(std::move(value)); return *this;}

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline Component& AddProperties(const Aws::String& key, const ComponentProperty& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline Component& AddProperties(Aws::String&& key, const ComponentProperty& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline Component& AddProperties(const Aws::String& key, ComponentProperty&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline Component& AddProperties(Aws::String&& key, ComponentProperty&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline Component& AddProperties(const char* key, ComponentProperty&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Describes the component's properties. You can't specify <code>tags</code> as
     * a valid property for <code>properties</code>.</p>
     */
    inline Component& AddProperties(const char* key, const ComponentProperty& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }


    /**
     * <p>The schema version of the component when it was imported.</p>
     */
    inline const Aws::String& GetSchemaVersion() const{ return m_schemaVersion; }

    /**
     * <p>The schema version of the component when it was imported.</p>
     */
    inline bool SchemaVersionHasBeenSet() const { return m_schemaVersionHasBeenSet; }

    /**
     * <p>The schema version of the component when it was imported.</p>
     */
    inline void SetSchemaVersion(const Aws::String& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = value; }

    /**
     * <p>The schema version of the component when it was imported.</p>
     */
    inline void SetSchemaVersion(Aws::String&& value) { m_schemaVersionHasBeenSet = true; m_schemaVersion = std::move(value); }

    /**
     * <p>The schema version of the component when it was imported.</p>
     */
    inline void SetSchemaVersion(const char* value) { m_schemaVersionHasBeenSet = true; m_schemaVersion.assign(value); }

    /**
     * <p>The schema version of the component when it was imported.</p>
     */
    inline Component& WithSchemaVersion(const Aws::String& value) { SetSchemaVersion(value); return *this;}

    /**
     * <p>The schema version of the component when it was imported.</p>
     */
    inline Component& WithSchemaVersion(Aws::String&& value) { SetSchemaVersion(std::move(value)); return *this;}

    /**
     * <p>The schema version of the component when it was imported.</p>
     */
    inline Component& WithSchemaVersion(const char* value) { SetSchemaVersion(value); return *this;}


    /**
     * <p>The unique ID of the component in its original source system, such as
     * Figma.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }

    /**
     * <p>The unique ID of the component in its original source system, such as
     * Figma.</p>
     */
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }

    /**
     * <p>The unique ID of the component in its original source system, such as
     * Figma.</p>
     */
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }

    /**
     * <p>The unique ID of the component in its original source system, such as
     * Figma.</p>
     */
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }

    /**
     * <p>The unique ID of the component in its original source system, such as
     * Figma.</p>
     */
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }

    /**
     * <p>The unique ID of the component in its original source system, such as
     * Figma.</p>
     */
    inline Component& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}

    /**
     * <p>The unique ID of the component in its original source system, such as
     * Figma.</p>
     */
    inline Component& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the component in its original source system, such as
     * Figma.</p>
     */
    inline Component& WithSourceId(const char* value) { SetSourceId(value); return *this;}


    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline Component& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline Component& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline Component& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline Component& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline Component& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline Component& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline Component& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline Component& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>One or more key-value pairs to use when tagging the component.</p>
     */
    inline Component& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>A list of the component's variants. A variant is a unique style configuration
     * of a main component.</p>
     */
    inline const Aws::Vector<ComponentVariant>& GetVariants() const{ return m_variants; }

    /**
     * <p>A list of the component's variants. A variant is a unique style configuration
     * of a main component.</p>
     */
    inline bool VariantsHasBeenSet() const { return m_variantsHasBeenSet; }

    /**
     * <p>A list of the component's variants. A variant is a unique style configuration
     * of a main component.</p>
     */
    inline void SetVariants(const Aws::Vector<ComponentVariant>& value) { m_variantsHasBeenSet = true; m_variants = value; }

    /**
     * <p>A list of the component's variants. A variant is a unique style configuration
     * of a main component.</p>
     */
    inline void SetVariants(Aws::Vector<ComponentVariant>&& value) { m_variantsHasBeenSet = true; m_variants = std::move(value); }

    /**
     * <p>A list of the component's variants. A variant is a unique style configuration
     * of a main component.</p>
     */
    inline Component& WithVariants(const Aws::Vector<ComponentVariant>& value) { SetVariants(value); return *this;}

    /**
     * <p>A list of the component's variants. A variant is a unique style configuration
     * of a main component.</p>
     */
    inline Component& WithVariants(Aws::Vector<ComponentVariant>&& value) { SetVariants(std::move(value)); return *this;}

    /**
     * <p>A list of the component's variants. A variant is a unique style configuration
     * of a main component.</p>
     */
    inline Component& AddVariants(const ComponentVariant& value) { m_variantsHasBeenSet = true; m_variants.push_back(value); return *this; }

    /**
     * <p>A list of the component's variants. A variant is a unique style configuration
     * of a main component.</p>
     */
    inline Component& AddVariants(ComponentVariant&& value) { m_variantsHasBeenSet = true; m_variants.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::Map<Aws::String, ComponentBindingPropertiesValue> m_bindingProperties;
    bool m_bindingPropertiesHasBeenSet = false;

    Aws::Vector<ComponentChild> m_children;
    bool m_childrenHasBeenSet = false;

    Aws::Map<Aws::String, ComponentDataConfiguration> m_collectionProperties;
    bool m_collectionPropertiesHasBeenSet = false;

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::Map<Aws::String, ComponentEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Utils::DateTime m_modifiedAt;
    bool m_modifiedAtHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Map<Aws::String, Aws::String>> m_overrides;
    bool m_overridesHasBeenSet = false;

    Aws::Map<Aws::String, ComponentProperty> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::String m_schemaVersion;
    bool m_schemaVersionHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<ComponentVariant> m_variants;
    bool m_variantsHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
