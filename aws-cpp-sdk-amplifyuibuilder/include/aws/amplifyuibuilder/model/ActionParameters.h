/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/ComponentProperty.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/MutationActionSetStateParameter.h>
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
   * <p>Represents the event action configuration for an element of a
   * <code>Component</code> or <code>ComponentChild</code>. Use for the workflow
   * feature in Amplify Studio that allows you to bind events and actions to
   * components. <code>ActionParameters</code> defines the action that is performed
   * when an event occurs on the component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/ActionParameters">AWS
   * API Reference</a></p>
   */
  class ActionParameters
  {
  public:
    AWS_AMPLIFYUIBUILDER_API ActionParameters();
    AWS_AMPLIFYUIBUILDER_API ActionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ActionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The HTML anchor link to the location to open. Specify this value for a
     * navigation action.</p>
     */
    inline const ComponentProperty& GetAnchor() const{ return m_anchor; }

    /**
     * <p>The HTML anchor link to the location to open. Specify this value for a
     * navigation action.</p>
     */
    inline bool AnchorHasBeenSet() const { return m_anchorHasBeenSet; }

    /**
     * <p>The HTML anchor link to the location to open. Specify this value for a
     * navigation action.</p>
     */
    inline void SetAnchor(const ComponentProperty& value) { m_anchorHasBeenSet = true; m_anchor = value; }

    /**
     * <p>The HTML anchor link to the location to open. Specify this value for a
     * navigation action.</p>
     */
    inline void SetAnchor(ComponentProperty&& value) { m_anchorHasBeenSet = true; m_anchor = std::move(value); }

    /**
     * <p>The HTML anchor link to the location to open. Specify this value for a
     * navigation action.</p>
     */
    inline ActionParameters& WithAnchor(const ComponentProperty& value) { SetAnchor(value); return *this;}

    /**
     * <p>The HTML anchor link to the location to open. Specify this value for a
     * navigation action.</p>
     */
    inline ActionParameters& WithAnchor(ComponentProperty&& value) { SetAnchor(std::move(value)); return *this;}


    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline const Aws::Map<Aws::String, ComponentProperty>& GetFields() const{ return m_fields; }

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline void SetFields(const Aws::Map<Aws::String, ComponentProperty>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline void SetFields(Aws::Map<Aws::String, ComponentProperty>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline ActionParameters& WithFields(const Aws::Map<Aws::String, ComponentProperty>& value) { SetFields(value); return *this;}

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline ActionParameters& WithFields(Aws::Map<Aws::String, ComponentProperty>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline ActionParameters& AddFields(const Aws::String& key, const ComponentProperty& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline ActionParameters& AddFields(Aws::String&& key, const ComponentProperty& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline ActionParameters& AddFields(const Aws::String& key, ComponentProperty&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline ActionParameters& AddFields(Aws::String&& key, ComponentProperty&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline ActionParameters& AddFields(const char* key, ComponentProperty&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline ActionParameters& AddFields(const char* key, const ComponentProperty& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }


    /**
     * <p>Specifies whether the user should be signed out globally. Specify this value
     * for an auth sign out action.</p>
     */
    inline const ComponentProperty& GetGlobal() const{ return m_global; }

    /**
     * <p>Specifies whether the user should be signed out globally. Specify this value
     * for an auth sign out action.</p>
     */
    inline bool GlobalHasBeenSet() const { return m_globalHasBeenSet; }

    /**
     * <p>Specifies whether the user should be signed out globally. Specify this value
     * for an auth sign out action.</p>
     */
    inline void SetGlobal(const ComponentProperty& value) { m_globalHasBeenSet = true; m_global = value; }

    /**
     * <p>Specifies whether the user should be signed out globally. Specify this value
     * for an auth sign out action.</p>
     */
    inline void SetGlobal(ComponentProperty&& value) { m_globalHasBeenSet = true; m_global = std::move(value); }

    /**
     * <p>Specifies whether the user should be signed out globally. Specify this value
     * for an auth sign out action.</p>
     */
    inline ActionParameters& WithGlobal(const ComponentProperty& value) { SetGlobal(value); return *this;}

    /**
     * <p>Specifies whether the user should be signed out globally. Specify this value
     * for an auth sign out action.</p>
     */
    inline ActionParameters& WithGlobal(ComponentProperty&& value) { SetGlobal(std::move(value)); return *this;}


    /**
     * <p>The unique ID of the component that the <code>ActionParameters</code> apply
     * to.</p>
     */
    inline const ComponentProperty& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the component that the <code>ActionParameters</code> apply
     * to.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique ID of the component that the <code>ActionParameters</code> apply
     * to.</p>
     */
    inline void SetId(const ComponentProperty& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique ID of the component that the <code>ActionParameters</code> apply
     * to.</p>
     */
    inline void SetId(ComponentProperty&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique ID of the component that the <code>ActionParameters</code> apply
     * to.</p>
     */
    inline ActionParameters& WithId(const ComponentProperty& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the component that the <code>ActionParameters</code> apply
     * to.</p>
     */
    inline ActionParameters& WithId(ComponentProperty&& value) { SetId(std::move(value)); return *this;}


    /**
     * <p>The name of the data model. Use when the action performs an operation on an
     * Amplify DataStore model.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>The name of the data model. Use when the action performs an operation on an
     * Amplify DataStore model.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>The name of the data model. Use when the action performs an operation on an
     * Amplify DataStore model.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The name of the data model. Use when the action performs an operation on an
     * Amplify DataStore model.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>The name of the data model. Use when the action performs an operation on an
     * Amplify DataStore model.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>The name of the data model. Use when the action performs an operation on an
     * Amplify DataStore model.</p>
     */
    inline ActionParameters& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>The name of the data model. Use when the action performs an operation on an
     * Amplify DataStore model.</p>
     */
    inline ActionParameters& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>The name of the data model. Use when the action performs an operation on an
     * Amplify DataStore model.</p>
     */
    inline ActionParameters& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * <p>A key-value pair that specifies the state property name and its initial
     * value.</p>
     */
    inline const MutationActionSetStateParameter& GetState() const{ return m_state; }

    /**
     * <p>A key-value pair that specifies the state property name and its initial
     * value.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>A key-value pair that specifies the state property name and its initial
     * value.</p>
     */
    inline void SetState(const MutationActionSetStateParameter& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>A key-value pair that specifies the state property name and its initial
     * value.</p>
     */
    inline void SetState(MutationActionSetStateParameter&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>A key-value pair that specifies the state property name and its initial
     * value.</p>
     */
    inline ActionParameters& WithState(const MutationActionSetStateParameter& value) { SetState(value); return *this;}

    /**
     * <p>A key-value pair that specifies the state property name and its initial
     * value.</p>
     */
    inline ActionParameters& WithState(MutationActionSetStateParameter&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The element within the same component to modify when the action occurs.</p>
     */
    inline const ComponentProperty& GetTarget() const{ return m_target; }

    /**
     * <p>The element within the same component to modify when the action occurs.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The element within the same component to modify when the action occurs.</p>
     */
    inline void SetTarget(const ComponentProperty& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The element within the same component to modify when the action occurs.</p>
     */
    inline void SetTarget(ComponentProperty&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The element within the same component to modify when the action occurs.</p>
     */
    inline ActionParameters& WithTarget(const ComponentProperty& value) { SetTarget(value); return *this;}

    /**
     * <p>The element within the same component to modify when the action occurs.</p>
     */
    inline ActionParameters& WithTarget(ComponentProperty&& value) { SetTarget(std::move(value)); return *this;}


    /**
     * <p>The type of navigation action. Valid values are <code>url</code> and
     * <code>anchor</code>. This value is required for a navigation action.</p>
     */
    inline const ComponentProperty& GetType() const{ return m_type; }

    /**
     * <p>The type of navigation action. Valid values are <code>url</code> and
     * <code>anchor</code>. This value is required for a navigation action.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of navigation action. Valid values are <code>url</code> and
     * <code>anchor</code>. This value is required for a navigation action.</p>
     */
    inline void SetType(const ComponentProperty& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of navigation action. Valid values are <code>url</code> and
     * <code>anchor</code>. This value is required for a navigation action.</p>
     */
    inline void SetType(ComponentProperty&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of navigation action. Valid values are <code>url</code> and
     * <code>anchor</code>. This value is required for a navigation action.</p>
     */
    inline ActionParameters& WithType(const ComponentProperty& value) { SetType(value); return *this;}

    /**
     * <p>The type of navigation action. Valid values are <code>url</code> and
     * <code>anchor</code>. This value is required for a navigation action.</p>
     */
    inline ActionParameters& WithType(ComponentProperty&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The URL to the location to open. Specify this value for a navigation
     * action.</p>
     */
    inline const ComponentProperty& GetUrl() const{ return m_url; }

    /**
     * <p>The URL to the location to open. Specify this value for a navigation
     * action.</p>
     */
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }

    /**
     * <p>The URL to the location to open. Specify this value for a navigation
     * action.</p>
     */
    inline void SetUrl(const ComponentProperty& value) { m_urlHasBeenSet = true; m_url = value; }

    /**
     * <p>The URL to the location to open. Specify this value for a navigation
     * action.</p>
     */
    inline void SetUrl(ComponentProperty&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }

    /**
     * <p>The URL to the location to open. Specify this value for a navigation
     * action.</p>
     */
    inline ActionParameters& WithUrl(const ComponentProperty& value) { SetUrl(value); return *this;}

    /**
     * <p>The URL to the location to open. Specify this value for a navigation
     * action.</p>
     */
    inline ActionParameters& WithUrl(ComponentProperty&& value) { SetUrl(std::move(value)); return *this;}

  private:

    ComponentProperty m_anchor;
    bool m_anchorHasBeenSet = false;

    Aws::Map<Aws::String, ComponentProperty> m_fields;
    bool m_fieldsHasBeenSet = false;

    ComponentProperty m_global;
    bool m_globalHasBeenSet = false;

    ComponentProperty m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    MutationActionSetStateParameter m_state;
    bool m_stateHasBeenSet = false;

    ComponentProperty m_target;
    bool m_targetHasBeenSet = false;

    ComponentProperty m_type;
    bool m_typeHasBeenSet = false;

    ComponentProperty m_url;
    bool m_urlHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
