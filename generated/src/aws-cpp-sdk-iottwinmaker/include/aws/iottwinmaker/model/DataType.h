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
    AWS_IOTTWINMAKER_API DataType() = default;
    AWS_IOTTWINMAKER_API DataType(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API DataType& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTTWINMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The underlying type of the data type.</p>
     */
    inline Type GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(Type value) { m_typeHasBeenSet = true; m_type = value; }
    inline DataType& WithType(Type value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The nested type in the data type.</p>
     */
    inline const DataType& GetNestedType() const{
      return *m_nestedType;
    }
    inline bool NestedTypeHasBeenSet() const { return m_nestedTypeHasBeenSet; }
    template<typename NestedTypeT = DataType>
    void SetNestedType(NestedTypeT&& value) {
      m_nestedTypeHasBeenSet = true; 
      m_nestedType = Aws::MakeShared<DataType>("DataType", std::forward<NestedTypeT>(value));
    }
    template<typename NestedTypeT = DataType>
    DataType& WithNestedType(NestedTypeT&& value) { SetNestedType(std::forward<NestedTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The allowed values for this data type.</p>
     */
    inline const Aws::Vector<DataValue>& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::Vector<DataValue>>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::Vector<DataValue>>
    DataType& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    template<typename AllowedValuesT = DataValue>
    DataType& AddAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The unit of measure used in this data type.</p>
     */
    inline const Aws::String& GetUnitOfMeasure() const { return m_unitOfMeasure; }
    inline bool UnitOfMeasureHasBeenSet() const { return m_unitOfMeasureHasBeenSet; }
    template<typename UnitOfMeasureT = Aws::String>
    void SetUnitOfMeasure(UnitOfMeasureT&& value) { m_unitOfMeasureHasBeenSet = true; m_unitOfMeasure = std::forward<UnitOfMeasureT>(value); }
    template<typename UnitOfMeasureT = Aws::String>
    DataType& WithUnitOfMeasure(UnitOfMeasureT&& value) { SetUnitOfMeasure(std::forward<UnitOfMeasureT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A relationship that associates a component with another component.</p>
     */
    inline const Relationship& GetRelationship() const { return m_relationship; }
    inline bool RelationshipHasBeenSet() const { return m_relationshipHasBeenSet; }
    template<typename RelationshipT = Relationship>
    void SetRelationship(RelationshipT&& value) { m_relationshipHasBeenSet = true; m_relationship = std::forward<RelationshipT>(value); }
    template<typename RelationshipT = Relationship>
    DataType& WithRelationship(RelationshipT&& value) { SetRelationship(std::forward<RelationshipT>(value)); return *this;}
    ///@}
  private:

    Type m_type{Type::NOT_SET};
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
