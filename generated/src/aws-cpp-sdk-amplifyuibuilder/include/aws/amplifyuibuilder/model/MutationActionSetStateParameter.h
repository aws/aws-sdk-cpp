/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplifyuibuilder/AmplifyUIBuilder_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/amplifyuibuilder/model/ComponentProperty.h>
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
   * <p>Represents the state configuration when an action modifies a property of
   * another element within the same component.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplifyuibuilder-2021-08-11/MutationActionSetStateParameter">AWS
   * API Reference</a></p>
   */
  class MutationActionSetStateParameter
  {
  public:
    AWS_AMPLIFYUIBUILDER_API MutationActionSetStateParameter() = default;
    AWS_AMPLIFYUIBUILDER_API MutationActionSetStateParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API MutationActionSetStateParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the component that is being modified.</p>
     */
    inline const Aws::String& GetComponentName() const { return m_componentName; }
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }
    template<typename ComponentNameT = Aws::String>
    void SetComponentName(ComponentNameT&& value) { m_componentNameHasBeenSet = true; m_componentName = std::forward<ComponentNameT>(value); }
    template<typename ComponentNameT = Aws::String>
    MutationActionSetStateParameter& WithComponentName(ComponentNameT&& value) { SetComponentName(std::forward<ComponentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the component property to apply the state configuration to.</p>
     */
    inline const Aws::String& GetProperty() const { return m_property; }
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }
    template<typename PropertyT = Aws::String>
    void SetProperty(PropertyT&& value) { m_propertyHasBeenSet = true; m_property = std::forward<PropertyT>(value); }
    template<typename PropertyT = Aws::String>
    MutationActionSetStateParameter& WithProperty(PropertyT&& value) { SetProperty(std::forward<PropertyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state configuration to assign to the property.</p>
     */
    inline const ComponentProperty& GetSet() const { return m_set; }
    inline bool SetHasBeenSet() const { return m_setHasBeenSet; }
    template<typename SetT = ComponentProperty>
    void SetSet(SetT&& value) { m_setHasBeenSet = true; m_set = std::forward<SetT>(value); }
    template<typename SetT = ComponentProperty>
    MutationActionSetStateParameter& WithSet(SetT&& value) { SetSet(std::forward<SetT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_componentName;
    bool m_componentNameHasBeenSet = false;

    Aws::String m_property;
    bool m_propertyHasBeenSet = false;

    ComponentProperty m_set;
    bool m_setHasBeenSet = false;
  };

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
