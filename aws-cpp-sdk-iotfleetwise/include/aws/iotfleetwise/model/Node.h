/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/Branch.h>
#include <aws/iotfleetwise/model/Sensor.h>
#include <aws/iotfleetwise/model/Actuator.h>
#include <aws/iotfleetwise/model/Attribute.h>
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


    /**
     * <p>Information about a node specified as a branch.</p>  <p>A group of
     * signals that are defined in a hierarchical structure.</p> 
     */
    inline const Branch& GetBranch() const{ return m_branch; }

    /**
     * <p>Information about a node specified as a branch.</p>  <p>A group of
     * signals that are defined in a hierarchical structure.</p> 
     */
    inline bool BranchHasBeenSet() const { return m_branchHasBeenSet; }

    /**
     * <p>Information about a node specified as a branch.</p>  <p>A group of
     * signals that are defined in a hierarchical structure.</p> 
     */
    inline void SetBranch(const Branch& value) { m_branchHasBeenSet = true; m_branch = value; }

    /**
     * <p>Information about a node specified as a branch.</p>  <p>A group of
     * signals that are defined in a hierarchical structure.</p> 
     */
    inline void SetBranch(Branch&& value) { m_branchHasBeenSet = true; m_branch = std::move(value); }

    /**
     * <p>Information about a node specified as a branch.</p>  <p>A group of
     * signals that are defined in a hierarchical structure.</p> 
     */
    inline Node& WithBranch(const Branch& value) { SetBranch(value); return *this;}

    /**
     * <p>Information about a node specified as a branch.</p>  <p>A group of
     * signals that are defined in a hierarchical structure.</p> 
     */
    inline Node& WithBranch(Branch&& value) { SetBranch(std::move(value)); return *this;}


    
    inline const Sensor& GetSensor() const{ return m_sensor; }

    
    inline bool SensorHasBeenSet() const { return m_sensorHasBeenSet; }

    
    inline void SetSensor(const Sensor& value) { m_sensorHasBeenSet = true; m_sensor = value; }

    
    inline void SetSensor(Sensor&& value) { m_sensorHasBeenSet = true; m_sensor = std::move(value); }

    
    inline Node& WithSensor(const Sensor& value) { SetSensor(value); return *this;}

    
    inline Node& WithSensor(Sensor&& value) { SetSensor(std::move(value)); return *this;}


    /**
     * <p>Information about a node specified as an actuator.</p>  <p>An actuator
     * is a digital representation of a vehicle device.</p> 
     */
    inline const Actuator& GetActuator() const{ return m_actuator; }

    /**
     * <p>Information about a node specified as an actuator.</p>  <p>An actuator
     * is a digital representation of a vehicle device.</p> 
     */
    inline bool ActuatorHasBeenSet() const { return m_actuatorHasBeenSet; }

    /**
     * <p>Information about a node specified as an actuator.</p>  <p>An actuator
     * is a digital representation of a vehicle device.</p> 
     */
    inline void SetActuator(const Actuator& value) { m_actuatorHasBeenSet = true; m_actuator = value; }

    /**
     * <p>Information about a node specified as an actuator.</p>  <p>An actuator
     * is a digital representation of a vehicle device.</p> 
     */
    inline void SetActuator(Actuator&& value) { m_actuatorHasBeenSet = true; m_actuator = std::move(value); }

    /**
     * <p>Information about a node specified as an actuator.</p>  <p>An actuator
     * is a digital representation of a vehicle device.</p> 
     */
    inline Node& WithActuator(const Actuator& value) { SetActuator(value); return *this;}

    /**
     * <p>Information about a node specified as an actuator.</p>  <p>An actuator
     * is a digital representation of a vehicle device.</p> 
     */
    inline Node& WithActuator(Actuator&& value) { SetActuator(std::move(value)); return *this;}


    /**
     * <p>Information about a node specified as an attribute.</p>  <p>An
     * attribute represents static information about a vehicle.</p> 
     */
    inline const Attribute& GetAttribute() const{ return m_attribute; }

    /**
     * <p>Information about a node specified as an attribute.</p>  <p>An
     * attribute represents static information about a vehicle.</p> 
     */
    inline bool AttributeHasBeenSet() const { return m_attributeHasBeenSet; }

    /**
     * <p>Information about a node specified as an attribute.</p>  <p>An
     * attribute represents static information about a vehicle.</p> 
     */
    inline void SetAttribute(const Attribute& value) { m_attributeHasBeenSet = true; m_attribute = value; }

    /**
     * <p>Information about a node specified as an attribute.</p>  <p>An
     * attribute represents static information about a vehicle.</p> 
     */
    inline void SetAttribute(Attribute&& value) { m_attributeHasBeenSet = true; m_attribute = std::move(value); }

    /**
     * <p>Information about a node specified as an attribute.</p>  <p>An
     * attribute represents static information about a vehicle.</p> 
     */
    inline Node& WithAttribute(const Attribute& value) { SetAttribute(value); return *this;}

    /**
     * <p>Information about a node specified as an attribute.</p>  <p>An
     * attribute represents static information about a vehicle.</p> 
     */
    inline Node& WithAttribute(Attribute&& value) { SetAttribute(std::move(value)); return *this;}

  private:

    Branch m_branch;
    bool m_branchHasBeenSet = false;

    Sensor m_sensor;
    bool m_sensorHasBeenSet = false;

    Actuator m_actuator;
    bool m_actuatorHasBeenSet = false;

    Attribute m_attribute;
    bool m_attributeHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
