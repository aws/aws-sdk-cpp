/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotfleetwise/IoTFleetWise_EXPORTS.h>
#include <aws/iotfleetwise/model/ROS2PrimitiveType.h>
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
   * <p>Represents a ROS 2 compliant primitive type message of the complex data
   * structure.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotfleetwise-2021-06-17/ROS2PrimitiveMessageDefinition">AWS
   * API Reference</a></p>
   */
  class ROS2PrimitiveMessageDefinition
  {
  public:
    AWS_IOTFLEETWISE_API ROS2PrimitiveMessageDefinition();
    AWS_IOTFLEETWISE_API ROS2PrimitiveMessageDefinition(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API ROS2PrimitiveMessageDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTFLEETWISE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The primitive type (integer, floating point, boolean, etc.) for the ROS 2
     * primitive message definition.</p>
     */
    inline const ROS2PrimitiveType& GetPrimitiveType() const{ return m_primitiveType; }

    /**
     * <p>The primitive type (integer, floating point, boolean, etc.) for the ROS 2
     * primitive message definition.</p>
     */
    inline bool PrimitiveTypeHasBeenSet() const { return m_primitiveTypeHasBeenSet; }

    /**
     * <p>The primitive type (integer, floating point, boolean, etc.) for the ROS 2
     * primitive message definition.</p>
     */
    inline void SetPrimitiveType(const ROS2PrimitiveType& value) { m_primitiveTypeHasBeenSet = true; m_primitiveType = value; }

    /**
     * <p>The primitive type (integer, floating point, boolean, etc.) for the ROS 2
     * primitive message definition.</p>
     */
    inline void SetPrimitiveType(ROS2PrimitiveType&& value) { m_primitiveTypeHasBeenSet = true; m_primitiveType = std::move(value); }

    /**
     * <p>The primitive type (integer, floating point, boolean, etc.) for the ROS 2
     * primitive message definition.</p>
     */
    inline ROS2PrimitiveMessageDefinition& WithPrimitiveType(const ROS2PrimitiveType& value) { SetPrimitiveType(value); return *this;}

    /**
     * <p>The primitive type (integer, floating point, boolean, etc.) for the ROS 2
     * primitive message definition.</p>
     */
    inline ROS2PrimitiveMessageDefinition& WithPrimitiveType(ROS2PrimitiveType&& value) { SetPrimitiveType(std::move(value)); return *this;}


    /**
     * <p>The offset used to calculate the signal value. Combined with scaling, the
     * calculation is <code>value = raw_value * scaling + offset</code>.</p>
     */
    inline double GetOffset() const{ return m_offset; }

    /**
     * <p>The offset used to calculate the signal value. Combined with scaling, the
     * calculation is <code>value = raw_value * scaling + offset</code>.</p>
     */
    inline bool OffsetHasBeenSet() const { return m_offsetHasBeenSet; }

    /**
     * <p>The offset used to calculate the signal value. Combined with scaling, the
     * calculation is <code>value = raw_value * scaling + offset</code>.</p>
     */
    inline void SetOffset(double value) { m_offsetHasBeenSet = true; m_offset = value; }

    /**
     * <p>The offset used to calculate the signal value. Combined with scaling, the
     * calculation is <code>value = raw_value * scaling + offset</code>.</p>
     */
    inline ROS2PrimitiveMessageDefinition& WithOffset(double value) { SetOffset(value); return *this;}


    /**
     * <p>A multiplier used to decode the message.</p>
     */
    inline double GetScaling() const{ return m_scaling; }

    /**
     * <p>A multiplier used to decode the message.</p>
     */
    inline bool ScalingHasBeenSet() const { return m_scalingHasBeenSet; }

    /**
     * <p>A multiplier used to decode the message.</p>
     */
    inline void SetScaling(double value) { m_scalingHasBeenSet = true; m_scaling = value; }

    /**
     * <p>A multiplier used to decode the message.</p>
     */
    inline ROS2PrimitiveMessageDefinition& WithScaling(double value) { SetScaling(value); return *this;}


    /**
     * <p>An optional attribute specifying the upper bound for <code>STRING</code> and
     * <code>WSTRING</code>.</p>
     */
    inline long long GetUpperBound() const{ return m_upperBound; }

    /**
     * <p>An optional attribute specifying the upper bound for <code>STRING</code> and
     * <code>WSTRING</code>.</p>
     */
    inline bool UpperBoundHasBeenSet() const { return m_upperBoundHasBeenSet; }

    /**
     * <p>An optional attribute specifying the upper bound for <code>STRING</code> and
     * <code>WSTRING</code>.</p>
     */
    inline void SetUpperBound(long long value) { m_upperBoundHasBeenSet = true; m_upperBound = value; }

    /**
     * <p>An optional attribute specifying the upper bound for <code>STRING</code> and
     * <code>WSTRING</code>.</p>
     */
    inline ROS2PrimitiveMessageDefinition& WithUpperBound(long long value) { SetUpperBound(value); return *this;}

  private:

    ROS2PrimitiveType m_primitiveType;
    bool m_primitiveTypeHasBeenSet = false;

    double m_offset;
    bool m_offsetHasBeenSet = false;

    double m_scaling;
    bool m_scalingHasBeenSet = false;

    long long m_upperBound;
    bool m_upperBoundHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
