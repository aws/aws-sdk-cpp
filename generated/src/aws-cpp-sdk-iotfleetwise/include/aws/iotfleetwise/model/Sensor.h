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
   * <p>An input component that reports the environmental condition of a vehicle.</p>
   *  <p>You can collect data about fluid levels, temperatures, vibrations, or
   * battery voltage from sensors.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/Sensor">AWS
   * API Reference</a></p>
   */
  class Sensor
  {
  public:
    AWS_IOTFLEETWISE_API Sensor();
    AWS_IOTFLEETWISE_API Sensor(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Sensor& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified name of the sensor. For example, the fully qualified name
     * of a sensor might be <code>Vehicle.Body.Engine.Battery</code>.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const{ return m_fullyQualifiedName; }
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }
    inline void SetFullyQualifiedName(const Aws::String& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = value; }
    inline void SetFullyQualifiedName(Aws::String&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::move(value); }
    inline void SetFullyQualifiedName(const char* value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName.assign(value); }
    inline Sensor& WithFullyQualifiedName(const Aws::String& value) { SetFullyQualifiedName(value); return *this;}
    inline Sensor& WithFullyQualifiedName(Aws::String&& value) { SetFullyQualifiedName(std::move(value)); return *this;}
    inline Sensor& WithFullyQualifiedName(const char* value) { SetFullyQualifiedName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified data type of the sensor. </p>
     */
    inline const NodeDataType& GetDataType() const{ return m_dataType; }
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }
    inline void SetDataType(const NodeDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }
    inline void SetDataType(NodeDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }
    inline Sensor& WithDataType(const NodeDataType& value) { SetDataType(value); return *this;}
    inline Sensor& WithDataType(NodeDataType&& value) { SetDataType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A brief description of a sensor.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Sensor& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Sensor& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Sensor& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scientific unit of measurement for data collected by the sensor.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }
    inline Sensor& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}
    inline Sensor& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}
    inline Sensor& WithUnit(const char* value) { SetUnit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of possible values a sensor can take.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const{ return m_allowedValues; }
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }
    inline void SetAllowedValues(const Aws::Vector<Aws::String>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }
    inline void SetAllowedValues(Aws::Vector<Aws::String>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }
    inline Sensor& WithAllowedValues(const Aws::Vector<Aws::String>& value) { SetAllowedValues(value); return *this;}
    inline Sensor& WithAllowedValues(Aws::Vector<Aws::String>&& value) { SetAllowedValues(std::move(value)); return *this;}
    inline Sensor& AddAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    inline Sensor& AddAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }
    inline Sensor& AddAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The specified possible minimum value of the sensor.</p>
     */
    inline double GetMin() const{ return m_min; }
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }
    inline Sensor& WithMin(double value) { SetMin(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The specified possible maximum value of the sensor.</p>
     */
    inline double GetMax() const{ return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }
    inline Sensor& WithMax(double value) { SetMax(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deprecation message for the node or the branch that was moved or
     * deleted.</p>
     */
    inline const Aws::String& GetDeprecationMessage() const{ return m_deprecationMessage; }
    inline bool DeprecationMessageHasBeenSet() const { return m_deprecationMessageHasBeenSet; }
    inline void SetDeprecationMessage(const Aws::String& value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage = value; }
    inline void SetDeprecationMessage(Aws::String&& value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage = std::move(value); }
    inline void SetDeprecationMessage(const char* value) { m_deprecationMessageHasBeenSet = true; m_deprecationMessage.assign(value); }
    inline Sensor& WithDeprecationMessage(const Aws::String& value) { SetDeprecationMessage(value); return *this;}
    inline Sensor& WithDeprecationMessage(Aws::String&& value) { SetDeprecationMessage(std::move(value)); return *this;}
    inline Sensor& WithDeprecationMessage(const char* value) { SetDeprecationMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A comment in addition to the description.</p>
     */
    inline const Aws::String& GetComment() const{ return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    inline void SetComment(const Aws::String& value) { m_commentHasBeenSet = true; m_comment = value; }
    inline void SetComment(Aws::String&& value) { m_commentHasBeenSet = true; m_comment = std::move(value); }
    inline void SetComment(const char* value) { m_commentHasBeenSet = true; m_comment.assign(value); }
    inline Sensor& WithComment(const Aws::String& value) { SetComment(value); return *this;}
    inline Sensor& WithComment(Aws::String&& value) { SetComment(std::move(value)); return *this;}
    inline Sensor& WithComment(const char* value) { SetComment(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fully qualified name of the struct node for a sensor if the data type of
     * the actuator is <code>Struct</code> or <code>StructArray</code>. For example,
     * the struct fully qualified name of a sensor might be
     * <code>Vehicle.ADAS.CameraStruct</code>.</p>
     */
    inline const Aws::String& GetStructFullyQualifiedName() const{ return m_structFullyQualifiedName; }
    inline bool StructFullyQualifiedNameHasBeenSet() const { return m_structFullyQualifiedNameHasBeenSet; }
    inline void SetStructFullyQualifiedName(const Aws::String& value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName = value; }
    inline void SetStructFullyQualifiedName(Aws::String&& value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName = std::move(value); }
    inline void SetStructFullyQualifiedName(const char* value) { m_structFullyQualifiedNameHasBeenSet = true; m_structFullyQualifiedName.assign(value); }
    inline Sensor& WithStructFullyQualifiedName(const Aws::String& value) { SetStructFullyQualifiedName(value); return *this;}
    inline Sensor& WithStructFullyQualifiedName(Aws::String&& value) { SetStructFullyQualifiedName(std::move(value)); return *this;}
    inline Sensor& WithStructFullyQualifiedName(const char* value) { SetStructFullyQualifiedName(value); return *this;}
    ///@}
  private:

    Aws::String m_fullyQualifiedName;
    bool m_fullyQualifiedNameHasBeenSet = false;

    NodeDataType m_dataType;
    bool m_dataTypeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_unit;
    bool m_unitHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedValues;
    bool m_allowedValuesHasBeenSet = false;

    double m_min;
    bool m_minHasBeenSet = false;

    double m_max;
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
