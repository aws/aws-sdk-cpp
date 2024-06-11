﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/Branch.h>
#include <aws/iotfleetwise/model/Sensor.h>
#include <aws/iotfleetwise/model/Actuator.h>
#include <aws/iotfleetwise/model/Attribute.h>
#include <aws/iotfleetwise/model/CustomStruct.h>
#include <aws/iotfleetwise/model/CustomProperty.h>
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
   * <p>A general abstraction of a signal. A node can be specified as an actuator,
   * attribute, branch, or sensor.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/Node">AWS
   * API Reference</a></p>
   */
  class Node
  {
  public:
    AWS_IOTFLEETWISE_API Node();
    AWS_IOTFLEETWISE_API Node(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Node& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about a node specified as a branch.</p>  <p>A group of
     * signals that are defined in a hierarchical structure.</p> 
     */
    inline const Branch& GetBranch() const{ return m_branch; }
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }
    inline void SetBranch(const Branch& value) { m_branchHasBeenSet = true; m_branch = value; }
    inline void SetBranch(Branch&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }
    inline Node& WithBranch(const Branch& value) { SetBranch(value); return *this;}
    inline Node& WithBranch(Branch&& value) { SetBranch(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Sensor& GetSensor() const{ return m_sensor; }
    inline bool SensorHasBeenSet() const { return m_sensorHasBeenSet; }
    inline void SetSensor(const Sensor& value) { m_sensorHasBeenSet = true; m_sensor = value; }
    inline void SetSensor(Sensor&& value) { m_sensorHasBeenSet = true; m_sensor = std::move(value); }
    inline Node& WithSensor(const Sensor& value) { SetSensor(value); return *this;}
    inline Node& WithSensor(Sensor&& value) { SetSensor(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a node specified as an actuator.</p>  <p>An actuator
     * is a digital representation of a vehicle device.</p> 
     */
    inline const Actuator& GetActuator() const{ return m_actuator; }
    inline bool ActuatorHasBeenSet() const { return m_actuatorHasBeenSet; }
    inline void SetActuator(const Actuator& value) { m_actuatorHasBeenSet = true; m_actuator = value; }
    inline void SetActuator(Actuator&& value) { m_actuatorHasBeenSet = true; m_actuator = std::move(value); }
    inline Node& WithActuator(const Actuator& value) { SetActuator(value); return *this;}
    inline Node& WithActuator(Actuator&& value) { SetActuator(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about a node specified as an attribute.</p>  <p>An
     * attribute represents static information about a vehicle.</p> 
     */
    inline const Attribute& GetAttribute() const{ return m_attribute; }
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }
    inline void SetAttribute(const Attribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }
    inline void SetAttribute(Attribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }
    inline Node& WithAttribute(const Attribute& value) { SetAttribute(value); return *this;}
    inline Node& WithAttribute(Attribute&& value) { SetAttribute(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a complex or higher-order data structure.</p>
     */
    inline const CustomStruct& GetStruct() const{ return m_struct; }
    inline bool StructHasBeenSet() const { return m_structHasBeenSet; }
    inline void SetStruct(const CustomStruct& value) { m_structHasBeenSet = true; m_struct = value; }
    inline void SetStruct(CustomStruct&& value) { m_structHasBeenSet = true; m_struct = std::move(value); }
    inline Node& WithStruct(const CustomStruct& value) { SetStruct(value); return *this;}
    inline Node& WithStruct(CustomStruct&& value) { SetStruct(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents a member of the complex data structure. The <code>datatype</code>
     * of the property can be either primitive or another <code>struct</code>.</p>
     */
    inline const CustomProperty& GetProperty() const{ return m_property; }
    inline bool PropertyHasBeenSet() const { return m_propertyHasBeenSet; }
    inline void SetProperty(const CustomProperty& value) { m_propertyHasBeenSet = true; m_property = value; }
    inline void SetProperty(CustomProperty&& value) { m_propertyHasBeenSet = true; m_property = std::move(value); }
    inline Node& WithProperty(const CustomProperty& value) { SetProperty(value); return *this;}
    inline Node& WithProperty(CustomProperty&& value) { SetProperty(std::move(value)); return *this;}
    ///@}
  private:

    Branch m_branch;
    bool m_branchHasBeenSet = false;

    Sensor m_sensor;
    bool m_sensorHasBeenSet = false;

    Actuator m_actuator;
    bool m_actuatorHasBeenSet = false;

    Attribute m_attribute;
    bool m_attributeHasBeenSet = false;

    CustomStruct m_struct;
    bool m_structHasBeenSet = false;

    CustomProperty m_property;
    bool m_propertyHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
