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
    AWS_AMPLIFYUIBUILDER_API MutationActionSetStateParameter();
    AWS_AMPLIFYUIBUILDER_API MutationActionSetStateParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API MutationActionSetStateParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFYUIBUILDER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the component that is being modified.</p>
     */
    inline const Aws::String& GetComponentName() const{ return m_componentName; }

    /**
     * <p>The name of the component that is being modified.</p>
     */
    inline bool ComponentNameHasBeenSet() const { return m_componentNameHasBeenSet; }

    /**
     * <p>The name of the component that is being modified.</p>
     */
    inline void SetComponentName(const Aws::String& value) { m_componentNameHasBeenSet = true; m_componentName = value; }

    /**
     * <p>The name of the component that is being modified.</p>
     */
    inline void SetComponentName(Aws::String&& value) { m_componentNameHasBeenSet = true; m_componentName = std::move(value); }

    /**
     * <p>The name of the component that is being modified.</p>
     */
    inline void SetComponentName(const char* value) { m_componentNameHasBeenSet = true; m_componentName.assign(value); }

    /**
     * <p>The name of the component that is being modified.</p>
     */
    inline MutationActionSetStateParameter& WithComponentName(const Aws::String& value) { SetComponentName(value); return *this;}

    /**
     * <p>The name of the component that is being modified.</p>
     */
    inline MutationActionSetStateParameter& WithComponentName(Aws::String&& value) { SetComponentName(std::move(value)); return *this;}

    /**
     * <p>The name of the component that is being modified.</p>
     */
    inline MutationActionSetStateParameter& WithComponentName(const char* value) { SetComponentName(value); return *this;}


    /**
     * <p>The name of the component property to apply the state configuration to.</p>
     */
    inline const Aws::String& GetProperty() const{ return m_property; }

    /**
     * <p>The name of the component property to apply the state configuration to.</p>
     */
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }

    /**
     * <p>The name of the component property to apply the state configuration to.</p>
     */
    inline void SetProperty(const Aws::String& value) { m_propertyHasBeenSet = true; m_property = value; }

    /**
     * <p>The name of the component property to apply the state configuration to.</p>
     */
    inline void SetProperty(Aws::String&& value) { m_propertyHasBeenSet = true; m_property = std::move(value); }

    /**
     * <p>The name of the component property to apply the state configuration to.</p>
     */
    inline void SetProperty(const char* value) { m_propertyHasBeenSet = true; m_property.assign(value); }

    /**
     * <p>The name of the component property to apply the state configuration to.</p>
     */
    inline MutationActionSetStateParameter& WithProperty(const Aws::String& value) { SetProperty(value); return *this;}

    /**
     * <p>The name of the component property to apply the state configuration to.</p>
     */
    inline MutationActionSetStateParameter& WithProperty(Aws::String&& value) { SetProperty(std::move(value)); return *this;}

    /**
     * <p>The name of the component property to apply the state configuration to.</p>
     */
    inline MutationActionSetStateParameter& WithProperty(const char* value) { SetProperty(value); return *this;}


    /**
     * <p>The state configuration to assign to the property.</p>
     */
    inline const ComponentProperty& GetSet() const{ return m_set; }

    /**
     * <p>The state configuration to assign to the property.</p>
     */
    inline bool SetHasBeenSet() const { return m_setHasBeenSet; }

    /**
     * <p>The state configuration to assign to the property.</p>
     */
    inline void SetSet(const ComponentProperty& value) { m_setHasBeenSet = true; m_set = value; }

    /**
     * <p>The state configuration to assign to the property.</p>
     */
    inline void SetSet(ComponentProperty&& value) { m_setHasBeenSet = true; m_set = std::move(value); }

    /**
     * <p>The state configuration to assign to the property.</p>
     */
    inline MutationActionSetStateParameter& WithSet(const ComponentProperty& value) { SetSet(value); return *this;}

    /**
     * <p>The state configuration to assign to the property.</p>
     */
    inline MutationActionSetStateParameter& WithSet(ComponentProperty&& value) { SetSet(std::move(value)); return *this;}

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
