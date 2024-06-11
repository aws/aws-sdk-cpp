/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/amplifyuibuilder/model/ComponentProperty.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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


    ///@{
    /**
     * <p>The type of navigation action. Valid values are <code>url</code> and
     * <code>anchor</code>. This value is required for a navigation action.</p>
     */
    inline const ComponentProperty& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ComponentProperty& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ComponentProperty&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ActionParameters& WithType(const ComponentProperty& value) { SetType(value); return *this;}
    inline ActionParameters& WithType(ComponentProperty&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the location to open. Specify this value for a navigation
     * action.</p>
     */
    inline const ComponentProperty& GetUrl() const{ return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    inline void SetUrl(const ComponentProperty& value) { m_urlHasBeenSet = true; m_url = value; }
    inline void SetUrl(ComponentProperty&& value) { m_urlHasBeenSet = true; m_url = std::move(value); }
    inline ActionParameters& WithUrl(const ComponentProperty& value) { SetUrl(value); return *this;}
    inline ActionParameters& WithUrl(ComponentProperty&& value) { SetUrl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTML anchor link to the location to open. Specify this value for a
     * navigation action.</p>
     */
    inline const ComponentProperty& GetAnchor() const{ return m_anchor; }
    inline bool AnchorHasBeenSet() const { return m_anchorHasBeenSet; }
    inline void SetAnchor(const ComponentProperty& value) { m_anchorHasBeenSet = true; m_anchor = value; }
    inline void SetAnchor(ComponentProperty&& value) { m_anchorHasBeenSet = true; m_anchor = std::move(value); }
    inline ActionParameters& WithAnchor(const ComponentProperty& value) { SetAnchor(value); return *this;}
    inline ActionParameters& WithAnchor(ComponentProperty&& value) { SetAnchor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The element within the same component to modify when the action occurs.</p>
     */
    inline const ComponentProperty& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const ComponentProperty& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(ComponentProperty&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline ActionParameters& WithTarget(const ComponentProperty& value) { SetTarget(value); return *this;}
    inline ActionParameters& WithTarget(ComponentProperty&& value) { SetTarget(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user should be signed out globally. Specify this value
     * for an auth sign out action.</p>
     */
    inline const ComponentProperty& GetGlobal() const{ return m_global; }
    inline bool GlobalHasBeenSet() const { return m_globalHasBeenSet; }
    inline void SetGlobal(const ComponentProperty& value) { m_globalHasBeenSet = true; m_global = value; }
    inline void SetGlobal(ComponentProperty&& value) { m_globalHasBeenSet = true; m_global = std::move(value); }
    inline ActionParameters& WithGlobal(const ComponentProperty& value) { SetGlobal(value); return *this;}
    inline ActionParameters& WithGlobal(ComponentProperty&& value) { SetGlobal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data model. Use when the action performs an operation on an
     * Amplify DataStore model.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }
    inline ActionParameters& WithModel(const Aws::String& value) { SetModel(value); return *this;}
    inline ActionParameters& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}
    inline ActionParameters& WithModel(const char* value) { SetModel(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the component that the <code>ActionParameters</code> apply
     * to.</p>
     */
    inline const ComponentProperty& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const ComponentProperty& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(ComponentProperty&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline ActionParameters& WithId(const ComponentProperty& value) { SetId(value); return *this;}
    inline ActionParameters& WithId(ComponentProperty&& value) { SetId(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline const Aws::Map<Aws::String, ComponentProperty>& GetFields() const{ return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    inline void SetFields(const Aws::Map<Aws::String, ComponentProperty>& value) { m_fieldsHasBeenSet = true; m_fields = value; }
    inline void SetFields(Aws::Map<Aws::String, ComponentProperty>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }
    inline ActionParameters& WithFields(const Aws::Map<Aws::String, ComponentProperty>& value) { SetFields(value); return *this;}
    inline ActionParameters& WithFields(Aws::Map<Aws::String, ComponentProperty>&& value) { SetFields(std::move(value)); return *this;}
    inline ActionParameters& AddFields(const Aws::String& key, const ComponentProperty& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }
    inline ActionParameters& AddFields(Aws::String&& key, const ComponentProperty& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), value); return *this; }
    inline ActionParameters& AddFields(const Aws::String& key, ComponentProperty&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }
    inline ActionParameters& AddFields(Aws::String&& key, ComponentProperty&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(std::move(key), std::move(value)); return *this; }
    inline ActionParameters& AddFields(const char* key, ComponentProperty&& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, std::move(value)); return *this; }
    inline ActionParameters& AddFields(const char* key, const ComponentProperty& value) { m_fieldsHasBeenSet = true; m_fields.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A key-value pair that specifies the state property name and its initial
     * value.</p>
     */
    inline const MutationActionSetStateParameter& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const MutationActionSetStateParameter& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(MutationActionSetStateParameter&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline ActionParameters& WithState(const MutationActionSetStateParameter& value) { SetState(value); return *this;}
    inline ActionParameters& WithState(MutationActionSetStateParameter&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    ComponentProperty m_type;
    bool m_typeHasBeenSet = false;

    ComponentProperty m_url;
    bool m_urlHasBeenSet = false;

    ComponentProperty m_anchor;
    bool m_anchorHasBeenSet = false;

    ComponentProperty m_target;
    bool m_targetHasBeenSet = false;

    ComponentProperty m_global;
    bool m_globalHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    ComponentProperty m_id;
    bool m_idHasBeenSet = false;

    Aws::Map<Aws::String, ComponentProperty> m_fields;
    bool m_fieldsHasBeenSet = false;

    MutationActionSetStateParameter m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
