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
    AWS_AMPLIFYUIBUILDER_API ActionParameters() = default;
    AWS_AMPLIFYUIBUILDER_API ActionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API ActionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of navigation action. Valid values are <code>url</code> and
     * <code>anchor</code>. This value is required for a navigation action.</p>
     */
    inline const ComponentProperty& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = ComponentProperty>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = ComponentProperty>
    ActionParameters& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The URL to the location to open. Specify this value for a navigation
     * action.</p>
     */
    inline const ComponentProperty& GetUrl() const { return m_url; }
    inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
    template<typename UrlT = ComponentProperty>
    void SetUrl(UrlT&& value) { m_urlHasBeenSet = true; m_url = std::forward<UrlT>(value); }
    template<typename UrlT = ComponentProperty>
    ActionParameters& WithUrl(UrlT&& value) { SetUrl(std::forward<UrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTML anchor link to the location to open. Specify this value for a
     * navigation action.</p>
     */
    inline const ComponentProperty& GetAnchor() const { return m_anchor; }
    inline bool AnchorHasBeenSet() const { return m_anchorHasBeenSet; }
    template<typename AnchorT = ComponentProperty>
    void SetAnchor(AnchorT&& value) { m_anchorHasBeenSet = true; m_anchor = std::forward<AnchorT>(value); }
    template<typename AnchorT = ComponentProperty>
    ActionParameters& WithAnchor(AnchorT&& value) { SetAnchor(std::forward<AnchorT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The element within the same component to modify when the action occurs.</p>
     */
    inline const ComponentProperty& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = ComponentProperty>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = ComponentProperty>
    ActionParameters& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether the user should be signed out globally. Specify this value
     * for an auth sign out action.</p>
     */
    inline const ComponentProperty& GetGlobal() const { return m_global; }
    inline bool GlobalHasBeenSet() const { return m_globalHasBeenSet; }
    template<typename GlobalT = ComponentProperty>
    void SetGlobal(GlobalT&& value) { m_globalHasBeenSet = true; m_global = std::forward<GlobalT>(value); }
    template<typename GlobalT = ComponentProperty>
    ActionParameters& WithGlobal(GlobalT&& value) { SetGlobal(std::forward<GlobalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data model. Use when the action performs an operation on an
     * Amplify DataStore model.</p>
     */
    inline const Aws::String& GetModel() const { return m_model; }
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }
    template<typename ModelT = Aws::String>
    void SetModel(ModelT&& value) { m_modelHasBeenSet = true; m_model = std::forward<ModelT>(value); }
    template<typename ModelT = Aws::String>
    ActionParameters& WithModel(ModelT&& value) { SetModel(std::forward<ModelT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique ID of the component that the <code>ActionParameters</code> apply
     * to.</p>
     */
    inline const ComponentProperty& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = ComponentProperty>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = ComponentProperty>
    ActionParameters& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A dictionary of key-value pairs mapping Amplify Studio properties to fields
     * in a data model. Use when the action performs an operation on an Amplify
     * DataStore model.</p>
     */
    inline const Aws::Map<Aws::String, ComponentProperty>& GetFields() const { return m_fields; }
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }
    template<typename FieldsT = Aws::Map<Aws::String, ComponentProperty>>
    void SetFields(FieldsT&& value) { m_fieldsHasBeenSet = true; m_fields = std::forward<FieldsT>(value); }
    template<typename FieldsT = Aws::Map<Aws::String, ComponentProperty>>
    ActionParameters& WithFields(FieldsT&& value) { SetFields(std::forward<FieldsT>(value)); return *this;}
    template<typename FieldsKeyT = Aws::String, typename FieldsValueT = ComponentProperty>
    ActionParameters& AddFields(FieldsKeyT&& key, FieldsValueT&& value) {
      m_fieldsHasBeenSet = true; m_fields.emplace(std::forward<FieldsKeyT>(key), std::forward<FieldsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A key-value pair that specifies the state property name and its initial
     * value.</p>
     */
    inline const MutationActionSetStateParameter& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = MutationActionSetStateParameter>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = MutationActionSetStateParameter>
    ActionParameters& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
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
