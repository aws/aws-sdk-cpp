/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amplifyuibuilder/model/ComponentProperty.h>
#include <aws/amplifyuibuilder/model/ComponentEvent.h>
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
   * <p>A nested UI configuration within a parent
   * <code>Component</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ComponentChild">AWS
   * API Reference</a></p>
   */
  class ComponentChild
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ComponentChild();
    AWS_AMPLIFYUIBUILDER_API ComponentChild(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ComponentChild& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of the child component. </p>
     */
    inline const Aws::String& GetComponentType() const{ return m_componentType; }
    inline bool ComponentTypeHasBeenSet() const { return m_componentTypeHasBeenSet; }
    inline void SetComponentType(const Aws::String& value) { m_componentTypeHasBeenSet = true; m_componentType = value; }
    inline void SetComponentType(Aws::String&& value) { m_componentTypeHasBeenSet = true; m_componentType = std::move(value); }
    inline void SetComponentType(const char* value) { m_componentTypeHasBeenSet = true; m_componentType.assign(value); }
    inline ComponentChild& WithComponentType(const Aws::String& value) { SetComponentType(value); return *this;}
    inline ComponentChild& WithComponentType(Aws::String&& value) { SetComponentType(std::move(value)); return *this;}
    inline ComponentChild& WithComponentType(const char* value) { SetComponentType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the child component.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ComponentChild& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ComponentChild& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ComponentChild& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the properties of the child component. You can't specify
     * <code>tags</code> as a valid property for <code>properties</code>.</p>
     */
    inline const Aws::Map<Aws::String, ComponentProperty>& GetProperties() const{ return m_properties; }
    inline bool PropertiesHasBeenSet() const { return m_propertiesHasBeenSet; }
    inline void SetProperties(const Aws::Map<Aws::String, ComponentProperty>& value) { m_propertiesHasBeenSet = true; m_properties = value; }
    inline void SetProperties(Aws::Map<Aws::String, ComponentProperty>&& value) { m_propertiesHasBeenSet = true; m_properties = std::move(value); }
    inline ComponentChild& WithProperties(const Aws::Map<Aws::String, ComponentProperty>& value) { SetProperties(value); return *this;}
    inline ComponentChild& WithProperties(Aws::Map<Aws::String, ComponentProperty>&& value) { SetProperties(std::move(value)); return *this;}
    inline ComponentChild& AddProperties(const Aws::String& key, const ComponentProperty& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    inline ComponentChild& AddProperties(Aws::String&& key, const ComponentProperty& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), value); return *this; }
    inline ComponentChild& AddProperties(const Aws::String& key, ComponentProperty&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline ComponentChild& AddProperties(Aws::String&& key, ComponentProperty&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(std::move(key), std::move(value)); return *this; }
    inline ComponentChild& AddProperties(const char* key, ComponentProperty&& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, std::move(value)); return *this; }
    inline ComponentChild& AddProperties(const char* key, const ComponentProperty& value) { m_propertiesHasBeenSet = true; m_properties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of <code>ComponentChild</code> instances for this component.</p>
     */
    inline const Aws::Vector<ComponentChild>& GetChildren() const{ return m_children; }
    inline bool ChildrenHasBeenSet() const { return m_childrenHasBeenSet; }
    inline void SetChildren(const Aws::Vector<ComponentChild>& value) { m_childrenHasBeenSet = true; m_children = value; }
    inline void SetChildren(Aws::Vector<ComponentChild>&& value) { m_childrenHasBeenSet = true; m_children = std::move(value); }
    inline ComponentChild& WithChildren(const Aws::Vector<ComponentChild>& value) { SetChildren(value); return *this;}
    inline ComponentChild& WithChildren(Aws::Vector<ComponentChild>&& value) { SetChildren(std::move(value)); return *this;}
    inline ComponentChild& AddChildren(const ComponentChild& value) { m_childrenHasBeenSet = true; m_children.push_back(value); return *this; }
    inline ComponentChild& AddChildren(ComponentChild&& value) { m_childrenHasBeenSet = true; m_children.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Describes the events that can be raised on the child component. Use for the
     * workflow feature in Amplify Studio that allows you to bind events and actions to
     * components.</p>
     */
    inline const Aws::Map<Aws::String, ComponentEvent>& GetEvents() const{ return m_events; }
    inline bool EventsHasBeenSet() const { return m_eventsHasBeenSet; }
    inline void SetEvents(const Aws::Map<Aws::String, ComponentEvent>& value) { m_eventsHasBeenSet = true; m_events = value; }
    inline void SetEvents(Aws::Map<Aws::String, ComponentEvent>&& value) { m_eventsHasBeenSet = true; m_events = std::move(value); }
    inline ComponentChild& WithEvents(const Aws::Map<Aws::String, ComponentEvent>& value) { SetEvents(value); return *this;}
    inline ComponentChild& WithEvents(Aws::Map<Aws::String, ComponentEvent>&& value) { SetEvents(std::move(value)); return *this;}
    inline ComponentChild& AddEvents(const Aws::String& key, const ComponentEvent& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }
    inline ComponentChild& AddEvents(Aws::String&& key, const ComponentEvent& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), value); return *this; }
    inline ComponentChild& AddEvents(const Aws::String& key, ComponentEvent&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }
    inline ComponentChild& AddEvents(Aws::String&& key, ComponentEvent&& value) { m_eventsHasBeenSet = true; m_events.emplace(std::move(key), std::move(value)); return *this; }
    inline ComponentChild& AddEvents(const char* key, ComponentEvent&& value) { m_eventsHasBeenSet = true; m_events.emplace(key, std::move(value)); return *this; }
    inline ComponentChild& AddEvents(const char* key, const ComponentEvent& value) { m_eventsHasBeenSet = true; m_events.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unique ID of the child component in its original source system, such as
     * Figma.</p>
     */
    inline const Aws::String& GetSourceId() const{ return m_sourceId; }
    inline bool SourceIdHasBeenSet() const { return m_sourceIdHasBeenSet; }
    inline void SetSourceId(const Aws::String& value) { m_sourceIdHasBeenSet = true; m_sourceId = value; }
    inline void SetSourceId(Aws::String&& value) { m_sourceIdHasBeenSet = true; m_sourceId = std::move(value); }
    inline void SetSourceId(const char* value) { m_sourceIdHasBeenSet = true; m_sourceId.assign(value); }
    inline ComponentChild& WithSourceId(const Aws::String& value) { SetSourceId(value); return *this;}
    inline ComponentChild& WithSourceId(Aws::String&& value) { SetSourceId(std::move(value)); return *this;}
    inline ComponentChild& WithSourceId(const char* value) { SetSourceId(value); return *this;}
    ///@}
  private:

    Aws::String m_componentType;
    bool m_componentTypeHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, ComponentProperty> m_properties;
    bool m_propertiesHasBeenSet = false;

    Aws::Vector<ComponentChild> m_children;
    bool m_childrenHasBeenSet = false;

    Aws::Map<Aws::String, ComponentEvent> m_events;
    bool m_eventsHasBeenSet = false;

    Aws::String m_sourceId;
    bool m_sourceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
