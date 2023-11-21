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
    AWS_IOTTWINMAKER_API PropertySummary();
    AWS_IOTTWINMAKER_API PropertySummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API PropertySummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>This is the schema for the property.</p>
     */
    inline const PropertyDefinitionResponse& GetDefinition() const{ return m_definition; }

    /**
     * <p>This is the schema for the property.</p>
     */
    inline bool DefinitionHasBeenSet() const { return m_definitionHasBeenSet; }

    /**
     * <p>This is the schema for the property.</p>
     */
    inline void SetDefinition(const PropertyDefinitionResponse& value) { m_definitionHasBeenSet = true; m_definition = value; }

    /**
     * <p>This is the schema for the property.</p>
     */
    inline void SetDefinition(PropertyDefinitionResponse&& value) { m_definitionHasBeenSet = true; m_definition = std::move(value); }

    /**
     * <p>This is the schema for the property.</p>
     */
    inline PropertySummary& WithDefinition(const PropertyDefinitionResponse& value) { SetDefinition(value); return *this;}

    /**
     * <p>This is the schema for the property.</p>
     */
    inline PropertySummary& WithDefinition(PropertyDefinitionResponse&& value) { SetDefinition(std::move(value)); return *this;}


    /**
     * <p>This is the name of the property.</p>
     */
    inline const Aws::String& GetPropertyName() const{ return m_propertyName; }

    /**
     * <p>This is the name of the property.</p>
     */
    inline bool PropertyNameHasBeenSet() const { return m_propertyNameHasBeenSet; }

    /**
     * <p>This is the name of the property.</p>
     */
    inline void SetPropertyName(const Aws::String& value) { m_propertyNameHasBeenSet = true; m_propertyName = value; }

    /**
     * <p>This is the name of the property.</p>
     */
    inline void SetPropertyName(Aws::String&& value) { m_propertyNameHasBeenSet = true; m_propertyName = std::move(value); }

    /**
     * <p>This is the name of the property.</p>
     */
    inline void SetPropertyName(const char* value) { m_propertyNameHasBeenSet = true; m_propertyName.assign(value); }

    /**
     * <p>This is the name of the property.</p>
     */
    inline PropertySummary& WithPropertyName(const Aws::String& value) { SetPropertyName(value); return *this;}

    /**
     * <p>This is the name of the property.</p>
     */
    inline PropertySummary& WithPropertyName(Aws::String&& value) { SetPropertyName(std::move(value)); return *this;}

    /**
     * <p>This is the name of the property.</p>
     */
    inline PropertySummary& WithPropertyName(const char* value) { SetPropertyName(value); return *this;}


    /**
     * <p>This is the value for the property.</p>
     */
    inline const DataValue& GetValue() const{ return m_value; }

    /**
     * <p>This is the value for the property.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>This is the value for the property.</p>
     */
    inline void SetValue(const DataValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>This is the value for the property.</p>
     */
    inline void SetValue(DataValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>This is the value for the property.</p>
     */
    inline PropertySummary& WithValue(const DataValue& value) { SetValue(value); return *this;}

    /**
     * <p>This is the value for the property.</p>
     */
    inline PropertySummary& WithValue(DataValue&& value) { SetValue(std::move(value)); return *this;}


    /**
     * <p>This flag notes whether all values of a list or map type property are
     * returned in the API response. The maximum number of values per property returned
     * is 50.</p>
     */
    inline bool GetAreAllPropertyValuesReturned() const{ return m_areAllPropertyValuesReturned; }

    /**
     * <p>This flag notes whether all values of a list or map type property are
     * returned in the API response. The maximum number of values per property returned
     * is 50.</p>
     */
    inline bool AreAllPropertyValuesReturnedHasBeenSet() const { return m_areAllPropertyValuesReturnedHasBeenSet; }

    /**
     * <p>This flag notes whether all values of a list or map type property are
     * returned in the API response. The maximum number of values per property returned
     * is 50.</p>
     */
    inline void SetAreAllPropertyValuesReturned(bool value) { m_areAllPropertyValuesReturnedHasBeenSet = true; m_areAllPropertyValuesReturned = value; }

    /**
     * <p>This flag notes whether all values of a list or map type property are
     * returned in the API response. The maximum number of values per property returned
     * is 50.</p>
     */
    inline PropertySummary& WithAreAllPropertyValuesReturned(bool value) { SetAreAllPropertyValuesReturned(value); return *this;}

  private:

    PropertyDefinitionResponse m_definition;
    bool m_definitionHasBeenSet = false;

    Aws::String m_propertyName;
    bool m_propertyNameHasBeenSet = false;

    DataValue m_value;
    bool m_valueHasBeenSet = false;

    bool m_areAllPropertyValuesReturned;
    bool m_areAllPropertyValuesReturnedHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
