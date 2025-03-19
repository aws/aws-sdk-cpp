/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/PropertyDefinitionResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/DataValue.h>
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
   * <p>This is an object that contains the information of a property.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertySummary">AWS
   * API Reference</a></p>
   */
  class PropertySummary
  {
  public:
    AWS_IOTTWINMAKER_API PropertySummary() = default;
    AWS_IOTTWINMAKER_API PropertySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This is the schema for the property.</p>
     */
    inline const PropertyDefinitionResponse& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = PropertyDefinitionResponse>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = PropertyDefinitionResponse>
    PropertySummary& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the name of the property.</p>
     */
    inline const Aws::String& GetPropertyName() const { return m_propertyName; }
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }
    template<typename PropertyNameT = Aws::String>
    void SetPropertyName(PropertyNameT&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::forward<PropertyNameT>(value); }
    template<typename PropertyNameT = Aws::String>
    PropertySummary& WithPropertyName(PropertyNameT&& value) { SetPropertyName(std::forward<PropertyNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This is the value for the property.</p>
     */
    inline const DataValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = DataValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = DataValue>
    PropertySummary& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This flag notes whether all values of a list or map type property are
     * returned in the API response. The maximum number of values per property returned
     * is 50.</p>
     */
    inline bool GetAreAllPropertyValuesReturned() const { return m_areAllPropertyValuesReturned; }
    inline bool AreAllPropertyValuesReturnedHasBeenSet() const { return m_areAllPropertyValuesReturnedHasBeenSet; }
    inline void SetAreAllPropertyValuesReturned(bool value) { m_areAllPropertyValuesReturnedHasBeenSet = true; m_areAllPropertyValuesReturned = value; }
    inline PropertySummary& WithAreAllPropertyValuesReturned(bool value) { SetAreAllPropertyValuesReturned(value); return *this;}
    ///@}
  private:

    PropertyDefinitionResponse m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;

    DataValue m_value;
    bool m_valueHasBeenSet = false;

    bool m_areAllPropertyValuesReturned{false};
    bool m_areAllPropertyValuesReturnedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
