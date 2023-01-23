/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iottwinmaker/IoTTwinMaker_EXPORTS.h>
#include <aws/iottwinmaker/model/Type.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iottwinmaker/model/Relationship.h>
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
   * <p>An object that specifies the data type of a property.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iottwinmaker-2021-11-29/DataType">AWS
   * API Reference</a></p>
   */
  class DataType
  {
  public:
    AWS_IOTTWINMAKER_API DataType();
    AWS_IOTTWINMAKER_API DataType(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API DataType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The underlying type of the data type.</p>
     */
    inline const Type& GetType() const{ return m_type; }

    /**
     * <p>The underlying type of the data type.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The underlying type of the data type.</p>
     */
    inline void SetType(const Type& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The underlying type of the data type.</p>
     */
    inline void SetType(Type&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The underlying type of the data type.</p>
     */
    inline DataType& WithType(const Type& value) { SetType(value); return *this;}

    /**
     * <p>The underlying type of the data type.</p>
     */
    inline DataType& WithType(Type&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>The nested type in the data type.</p>
     */
    AWS_IOTTWINMAKER_API const DataType& GetNestedType() const;

    /**
     * <p>The nested type in the data type.</p>
     */
    AWS_IOTTWINMAKER_API bool NestedTypeHasBeenSet() const;

    /**
     * <p>The nested type in the data type.</p>
     */
    AWS_IOTTWINMAKER_API void SetNestedType(const DataType& value);

    /**
     * <p>The nested type in the data type.</p>
     */
    AWS_IOTTWINMAKER_API void SetNestedType(DataType&& value);

    /**
     * <p>The nested type in the data type.</p>
     */
    AWS_IOTTWINMAKER_API DataType& WithNestedType(const DataType& value);

    /**
     * <p>The nested type in the data type.</p>
     */
    AWS_IOTTWINMAKER_API DataType& WithNestedType(DataType&& value);


    /**
     * <p>The allowed values for this data type.</p>
     */
    inline const Aws::Vector<DataValue>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>The allowed values for this data type.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>The allowed values for this data type.</p>
     */
    inline void SetAllowedValues(const Aws::Vector<DataValue>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>The allowed values for this data type.</p>
     */
    inline void SetAllowedValues(Aws::Vector<DataValue>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>The allowed values for this data type.</p>
     */
    inline DataType& WithAllowedValues(const Aws::Vector<DataValue>& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>The allowed values for this data type.</p>
     */
    inline DataType& WithAllowedValues(Aws::Vector<DataValue>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>The allowed values for this data type.</p>
     */
    inline DataType& AddAllowedValues(const DataValue& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * <p>The allowed values for this data type.</p>
     */
    inline DataType& AddAllowedValues(DataValue&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }


    /**
     * <p>The unit of measure used in this data type.</p>
     */
    inline const Aws::String& GetUnitOfMeasure() const{ return m_unitOfMeasure; }

    /**
     * <p>The unit of measure used in this data type.</p>
     */
    inline bool UnitOfMeasureHasBeenSet() const { return m_unitOfMeasureHasBeenSet; }

    /**
     * <p>The unit of measure used in this data type.</p>
     */
    inline void SetUnitOfMeasure(const Aws::String& value) { m_unitOfMeasureHasBeenSet = true; m_unitOfMeasure = value; }

    /**
     * <p>The unit of measure used in this data type.</p>
     */
    inline void SetUnitOfMeasure(Aws::String&& value) { m_unitOfMeasureHasBeenSet = true; m_unitOfMeasure = std::move(value); }

    /**
     * <p>The unit of measure used in this data type.</p>
     */
    inline void SetUnitOfMeasure(const char* value) { m_unitOfMeasureHasBeenSet = true; m_unitOfMeasure.assign(value); }

    /**
     * <p>The unit of measure used in this data type.</p>
     */
    inline DataType& WithUnitOfMeasure(const Aws::String& value) { SetUnitOfMeasure(value); return *this;}

    /**
     * <p>The unit of measure used in this data type.</p>
     */
    inline DataType& WithUnitOfMeasure(Aws::String&& value) { SetUnitOfMeasure(std::move(value)); return *this;}

    /**
     * <p>The unit of measure used in this data type.</p>
     */
    inline DataType& WithUnitOfMeasure(const char* value) { SetUnitOfMeasure(value); return *this;}


    /**
     * <p>A relationship that associates a component with another component.</p>
     */
    inline const Relationship& GetRelationship() const{ return m_relationship; }

    /**
     * <p>A relationship that associates a component with another component.</p>
     */
    inline bool RelationshipHasBeenSet() const { return m_relationshipHasBeenSet; }

    /**
     * <p>A relationship that associates a component with another component.</p>
     */
    inline void SetRelationship(const Relationship& value) { m_relationshipHasBeenSet = true; m_relationship = value; }

    /**
     * <p>A relationship that associates a component with another component.</p>
     */
    inline void SetRelationship(Relationship&& value) { m_relationshipHasBeenSet = true; m_relationship = std::move(value); }

    /**
     * <p>A relationship that associates a component with another component.</p>
     */
    inline DataType& WithRelationship(const Relationship& value) { SetRelationship(value); return *this;}

    /**
     * <p>A relationship that associates a component with another component.</p>
     */
    inline DataType& WithRelationship(Relationship&& value) { SetRelationship(std::move(value)); return *this;}

  private:

    Type m_type;
    bool m_typeHasBeenSet = false;

    std::shared_ptr<DataType> m_nestedType;
    bool m_nestedTypeHasBeenSet = false;

    Aws::Vector<DataValue> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    Aws::String m_unitOfMeasure;
    bool m_unitOfMeasureHasBeenSet = false;

    Relationship m_relationship;
    bool m_relationshipHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
