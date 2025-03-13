/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotfleetwise/model/NodeDataType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace IoTFleetWise
{
namespace Model
{

  /**
   * <p>A signal that represents a vehicle device such as the engine, heater, and
   * door locks. Data from an actuator reports the state of a certain vehicle
   * device.</p>  <p> Updating actuator data can change the state of a device.
   * For example, you can turn on or off the heater by updating its actuator
   * data.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/Actuator">AWS
   * API Reference</a></p>
   */
  class Actuator
  {
  public:
    AWS_IOTFLEETWISE_API Actuator() = default;
    AWS_IOTFLEETWISE_API Actuator(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Actuator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified name of the actuator. For example, the fully qualified
     * name of an actuator might be <code>Vehicle.Front.Left.Door.Lock</code>.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const { return m_fullyQualifiedName; }
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }
    template<typename FullyQualifiedNameT = Aws::String>
    void SetFullyQualifiedName(FullyQualifiedNameT&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::forward<FullyQualifiedNameT>(value); }
    template<typename FullyQualifiedNameT = Aws::String>
    Actuator& WithFullyQualifiedName(FullyQualifiedNameT&& value) { SetFullyQualifiedName(std::forward<FullyQualifiedNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified data type of the actuator. </p>
     */
    inline NodeDataType GetDataType() const { return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(NodeDataType value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline Actuator& WithDataType(NodeDataType value) { SetDataType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of the actuator.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    Actuator& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scientific unit for the actuator.</p>
     */
    inline const Aws::String& GetUnit() const { return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    template<typename UnitT = Aws::String>
    void SetUnit(UnitT&& value) { m_unitHasBeenSet = true; m_unit = std::forward<UnitT>(value); }
    template<typename UnitT = Aws::String>
    Actuator& WithUnit(UnitT&& value) { SetUnit(std::forward<UnitT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of possible values an actuator can take.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const { return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    template<typename AllowedValuesT = Aws::Vector<Aws::String>>
    void SetAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::forward<AllowedValuesT>(value); }
    template<typename AllowedValuesT = Aws::Vector<Aws::String>>
    Actuator& WithAllowedValues(AllowedValuesT&& value) { SetAllowedValues(std::forward<AllowedValuesT>(value)); return *this;}
    template<typename AllowedValuesT = Aws::String>
    Actuator& AddAllowedValues(AllowedValuesT&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.emplace_back(std::forward<AllowedValuesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specified possible minimum value of an actuator.</p>
     */
    inline double GetMin() const { return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }
    inline Actuator& WithMin(double value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified possible maximum value of an actuator.</p>
     */
    inline double GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }
    inline Actuator& WithMax(double value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline const Aws::String& GetDeprecationMessage() const { return m_deprecationMessage; }
    inline bool DeprecationMessageHasBeenSet() const { return m_deprecationMessageHasBeenSet; }
    template<typename DeprecationMessageT = Aws::String>
    void SetDeprecationMessage(DeprecationMessageT&& value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage = std::forward<DeprecationMessageT>(value); }
    template<typename DeprecationMessageT = Aws::String>
    Actuator& WithDeprecationMessage(DeprecationMessageT&& value) { SetDeprecationMessage(std::forward<DeprecationMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment in addition to the description.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    Actuator& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified name of the struct node for the actuator if the data type
     * of the actuator is <code>Struct</code> or <code>StructArray</code>. For example,
     * the struct fully qualified name of an actuator might be
     * <code>Vehicle.Door.LockStruct</code>.</p>
     */
    inline const Aws::String& GetStructFullyQualifiedName() const { return m_structFullyQualifiedName; }
    inline bool StructFullyQualifiedNameHasBeenSet() const { return m_structFullyQualifiedNameHasBeenSet; }
    template<typename StructFullyQualifiedNameT = Aws::String>
    void SetStructFullyQualifiedName(StructFullyQualifiedNameT&& value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName = std::forward<StructFullyQualifiedNameT>(value); }
    template<typename StructFullyQualifiedNameT = Aws::String>
    Actuator& WithStructFullyQualifiedName(StructFullyQualifiedNameT&& value) { SetStructFullyQualifiedName(std::forward<StructFullyQualifiedNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fullyQualifiedName;
    bool m_fullyQualifiedNameHasBeenSet = false;

    NodeDataType m_dataType{NodeDataType::NOT_SET};
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    double m_min{0.0};
    bool m_minHasBeenSet = false;

    double m_max{0.0};
    bool m_maxHasBeenSet = false;

    Aws::String m_deprecationMessage;
    bool m_deprecationMessageHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    Aws::String m_structFullyQualifiedName;
    bool m_structFullyQualifiedNameHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
