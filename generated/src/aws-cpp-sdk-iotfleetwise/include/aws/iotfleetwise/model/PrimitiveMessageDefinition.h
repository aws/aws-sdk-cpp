/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/ROS2PrimitiveMessageDefinition.h>
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
   * <p>Represents a primitive type node of the complex data structure.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/PrimitiveMessageDefinition">AWS
   * API Reference</a></p>
   */
  class PrimitiveMessageDefinition
  {
  public:
    AWS_IOTFLEETWISE_API PrimitiveMessageDefinition();
    AWS_IOTFLEETWISE_API PrimitiveMessageDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API PrimitiveMessageDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about a <code>PrimitiveMessage</code> using a ROS 2 compliant
     * primitive type message of the complex data structure.</p>
     */
    inline const ROS2PrimitiveMessageDefinition& GetRos2PrimitiveMessageDefinition() const{ return m_ros2PrimitiveMessageDefinition; }

    /**
     * <p>Information about a <code>PrimitiveMessage</code> using a ROS 2 compliant
     * primitive type message of the complex data structure.</p>
     */
    inline bool Ros2PrimitiveMessageDefinitionHasBeenSet() const { return m_ros2PrimitiveMessageDefinitionHasBeenSet; }

    /**
     * <p>Information about a <code>PrimitiveMessage</code> using a ROS 2 compliant
     * primitive type message of the complex data structure.</p>
     */
    inline void SetRos2PrimitiveMessageDefinition(const ROS2PrimitiveMessageDefinition& value) { m_ros2PrimitiveMessageDefinitionHasBeenSet = true; m_ros2PrimitiveMessageDefinition = value; }

    /**
     * <p>Information about a <code>PrimitiveMessage</code> using a ROS 2 compliant
     * primitive type message of the complex data structure.</p>
     */
    inline void SetRos2PrimitiveMessageDefinition(ROS2PrimitiveMessageDefinition&& value) { m_ros2PrimitiveMessageDefinitionHasBeenSet = true; m_ros2PrimitiveMessageDefinition = std::move(value); }

    /**
     * <p>Information about a <code>PrimitiveMessage</code> using a ROS 2 compliant
     * primitive type message of the complex data structure.</p>
     */
    inline PrimitiveMessageDefinition& WithRos2PrimitiveMessageDefinition(const ROS2PrimitiveMessageDefinition& value) { SetRos2PrimitiveMessageDefinition(value); return *this;}

    /**
     * <p>Information about a <code>PrimitiveMessage</code> using a ROS 2 compliant
     * primitive type message of the complex data structure.</p>
     */
    inline PrimitiveMessageDefinition& WithRos2PrimitiveMessageDefinition(ROS2PrimitiveMessageDefinition&& value) { SetRos2PrimitiveMessageDefinition(std::move(value)); return *this;}

  private:

    ROS2PrimitiveMessageDefinition m_ros2PrimitiveMessageDefinition;
    bool m_ros2PrimitiveMessageDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
