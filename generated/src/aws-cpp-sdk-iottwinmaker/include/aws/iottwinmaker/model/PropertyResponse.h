/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/PropertyDefinitionResponse.h>
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
   * <p>An object that contains information about a property response.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/PropertyResponse">AWS
   * API Reference</a></p>
   */
  class PropertyResponse
  {
  public:
    AWS_IOTTWINMAKER_API PropertyResponse() = default;
    AWS_IOTTWINMAKER_API PropertyResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertyResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object that specifies information about a property.</p>
     */
    inline const PropertyDefinitionResponse& GetDefinition() const { return m_definition; }
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }
    template<typename DefinitionT = PropertyDefinitionResponse>
    void SetDefinition(DefinitionT&& value) { m_definitionHasBeenSet = true; m_definition = std::forward<DefinitionT>(value); }
    template<typename DefinitionT = PropertyDefinitionResponse>
    PropertyResponse& WithDefinition(DefinitionT&& value) { SetDefinition(std::forward<DefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of the property.</p>
     */
    inline const DataValue& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = DataValue>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = DataValue>
    PropertyResponse& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
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
    inline PropertyResponse& WithAreAllPropertyValuesReturned(bool value) { SetAreAllPropertyValuesReturned(value); return *this;}
    ///@}
  private:

    PropertyDefinitionResponse m_definition;
    bool m_definitionHasBeenSet = false;

    DataValue m_value;
    bool m_valueHasBeenSet = false;

    bool m_areAllPropertyValuesReturned{false};
    bool m_areAllPropertyValuesReturnedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
