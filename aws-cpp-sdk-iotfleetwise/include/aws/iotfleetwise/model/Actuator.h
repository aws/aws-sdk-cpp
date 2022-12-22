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
    AWS_IOTFLEETWISE_API Actuator();
    AWS_IOTFLEETWISE_API Actuator(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Actuator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified name of the actuator. For example, the fully qualified
     * name of an actuator might be <code>Vehicle.Front.Left.Door.Lock</code>.</p>
     */
    inline const Aws::String& GetFullyQualifiedName() const{ return m_fullyQualifiedName; }

    /**
     * <p>The fully qualified name of the actuator. For example, the fully qualified
     * name of an actuator might be <code>Vehicle.Front.Left.Door.Lock</code>.</p>
     */
    inline bool FullyQualifiedNameHasBeenSet() const { return m_fullyQualifiedNameHasBeenSet; }

    /**
     * <p>The fully qualified name of the actuator. For example, the fully qualified
     * name of an actuator might be <code>Vehicle.Front.Left.Door.Lock</code>.</p>
     */
    inline void SetFullyQualifiedName(const Aws::String& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = value; }

    /**
     * <p>The fully qualified name of the actuator. For example, the fully qualified
     * name of an actuator might be <code>Vehicle.Front.Left.Door.Lock</code>.</p>
     */
    inline void SetFullyQualifiedName(Aws::String&& value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName = std::move(value); }

    /**
     * <p>The fully qualified name of the actuator. For example, the fully qualified
     * name of an actuator might be <code>Vehicle.Front.Left.Door.Lock</code>.</p>
     */
    inline void SetFullyQualifiedName(const char* value) { m_fullyQualifiedNameHasBeenSet = true; m_fullyQualifiedName.assign(value); }

    /**
     * <p>The fully qualified name of the actuator. For example, the fully qualified
     * name of an actuator might be <code>Vehicle.Front.Left.Door.Lock</code>.</p>
     */
    inline Actuator& WithFullyQualifiedName(const Aws::String& value) { SetFullyQualifiedName(value); return *this;}

    /**
     * <p>The fully qualified name of the actuator. For example, the fully qualified
     * name of an actuator might be <code>Vehicle.Front.Left.Door.Lock</code>.</p>
     */
    inline Actuator& WithFullyQualifiedName(Aws::String&& value) { SetFullyQualifiedName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the actuator. For example, the fully qualified
     * name of an actuator might be <code>Vehicle.Front.Left.Door.Lock</code>.</p>
     */
    inline Actuator& WithFullyQualifiedName(const char* value) { SetFullyQualifiedName(value); return *this;}


    /**
     * <p>The specified data type of the actuator. </p>
     */
    inline const NodeDataType& GetDataType() const{ return m_dataType; }

    /**
     * <p>The specified data type of the actuator. </p>
     */
    inline bool DataTypeHasBeenSet() const { return m_dataTypeHasBeenSet; }

    /**
     * <p>The specified data type of the actuator. </p>
     */
    inline void SetDataType(const NodeDataType& value) { m_dataTypeHasBeenSet = true; m_dataType = value; }

    /**
     * <p>The specified data type of the actuator. </p>
     */
    inline void SetDataType(NodeDataType&& value) { m_dataTypeHasBeenSet = true; m_dataType = std::move(value); }

    /**
     * <p>The specified data type of the actuator. </p>
     */
    inline Actuator& WithDataType(const NodeDataType& value) { SetDataType(value); return *this;}

    /**
     * <p>The specified data type of the actuator. </p>
     */
    inline Actuator& WithDataType(NodeDataType&& value) { SetDataType(std::move(value)); return *this;}


    /**
     * <p>A brief description of the actuator.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A brief description of the actuator.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A brief description of the actuator.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A brief description of the actuator.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A brief description of the actuator.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A brief description of the actuator.</p>
     */
    inline Actuator& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A brief description of the actuator.</p>
     */
    inline Actuator& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A brief description of the actuator.</p>
     */
    inline Actuator& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The scientific unit for the actuator.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The scientific unit for the actuator.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The scientific unit for the actuator.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The scientific unit for the actuator.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The scientific unit for the actuator.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The scientific unit for the actuator.</p>
     */
    inline Actuator& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The scientific unit for the actuator.</p>
     */
    inline Actuator& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The scientific unit for the actuator.</p>
     */
    inline Actuator& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>A list of possible values an actuator can take.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedValues() const{ return m_allowedValues; }

    /**
     * <p>A list of possible values an actuator can take.</p>
     */
    inline bool AllowedValuesHasBeenSet() const { return m_allowedValuesHasBeenSet; }

    /**
     * <p>A list of possible values an actuator can take.</p>
     */
    inline void SetAllowedValues(const Aws::Vector<Aws::String>& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = value; }

    /**
     * <p>A list of possible values an actuator can take.</p>
     */
    inline void SetAllowedValues(Aws::Vector<Aws::String>&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues = std::move(value); }

    /**
     * <p>A list of possible values an actuator can take.</p>
     */
    inline Actuator& WithAllowedValues(const Aws::Vector<Aws::String>& value) { SetAllowedValues(value); return *this;}

    /**
     * <p>A list of possible values an actuator can take.</p>
     */
    inline Actuator& WithAllowedValues(Aws::Vector<Aws::String>&& value) { SetAllowedValues(std::move(value)); return *this;}

    /**
     * <p>A list of possible values an actuator can take.</p>
     */
    inline Actuator& AddAllowedValues(const Aws::String& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }

    /**
     * <p>A list of possible values an actuator can take.</p>
     */
    inline Actuator& AddAllowedValues(Aws::String&& value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of possible values an actuator can take.</p>
     */
    inline Actuator& AddAllowedValues(const char* value) { m_allowedValuesHasBeenSet = true; m_allowedValues.push_back(value); return *this; }


    /**
     * <p>The specified possible minimum value of an actuator.</p>
     */
    inline double GetMin() const{ return m_min; }

    /**
     * <p>The specified possible minimum value of an actuator.</p>
     */
    inline bool MinHasBeenSet() const { return m_minHasBeenSet; }

    /**
     * <p>The specified possible minimum value of an actuator.</p>
     */
    inline void SetMin(double value) { m_minHasBeenSet = true; m_min = value; }

    /**
     * <p>The specified possible minimum value of an actuator.</p>
     */
    inline Actuator& WithMin(double value) { SetMin(value); return *this;}


    /**
     * <p>The specified possible maximum value of an actuator.</p>
     */
    inline double GetMax() const{ return m_max; }

    /**
     * <p>The specified possible maximum value of an actuator.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The specified possible maximum value of an actuator.</p>
     */
    inline void SetMax(double value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The specified possible maximum value of an actuator.</p>
     */
    inline Actuator& WithMax(double value) { SetMax(value); return *this;}

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
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
