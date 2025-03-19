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
    AWS_IOTFLEETWISE_API PrimitiveMessageDefinition() = default;
    AWS_IOTFLEETWISE_API PrimitiveMessageDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API PrimitiveMessageDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Information about a <code>PrimitiveMessage</code> using a ROS 2 compliant
     * primitive type message of the complex data structure.</p>
     */
    inline const ROS2PrimitiveMessageDefinition& GetRos2PrimitiveMessageDefinition() const { return m_ros2PrimitiveMessageDefinition; }
    inline bool Ros2PrimitiveMessageDefinitionHasBeenSet() const { return m_ros2PrimitiveMessageDefinitionHasBeenSet; }
    template<typename Ros2PrimitiveMessageDefinitionT = ROS2PrimitiveMessageDefinition>
    void SetRos2PrimitiveMessageDefinition(Ros2PrimitiveMessageDefinitionT&& value) { m_ros2PrimitiveMessageDefinitionHasBeenSet = true; m_ros2PrimitiveMessageDefinition = std::forward<Ros2PrimitiveMessageDefinitionT>(value); }
    template<typename Ros2PrimitiveMessageDefinitionT = ROS2PrimitiveMessageDefinition>
    PrimitiveMessageDefinition& WithRos2PrimitiveMessageDefinition(Ros2PrimitiveMessageDefinitionT&& value) { SetRos2PrimitiveMessageDefinition(std::forward<Ros2PrimitiveMessageDefinitionT>(value)); return *this;}
    ///@}
  private:

    ROS2PrimitiveMessageDefinition m_ros2PrimitiveMessageDefinition;
    bool m_ros2PrimitiveMessageDefinitionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
