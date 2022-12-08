/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/compute-optimizer/ComputeOptimizer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ComputeOptimizer
{
namespace Model
{

  /**
   * <p>Describes the configuration of an Auto Scaling group.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/compute-optimizer-2019-11-01/AutoScalingGroupConfiguration">AWS
   * API Reference</a></p>
   */
  class AutoScalingGroupConfiguration
  {
  public:
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupConfiguration();
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API AutoScalingGroupConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COMPUTEOPTIMIZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The desired capacity, or number of instances, for the Auto Scaling group.</p>
     */
    inline int GetDesiredCapacity() const{ return m_desiredCapacity; }

    /**
     * <p>The desired capacity, or number of instances, for the Auto Scaling group.</p>
     */
    inline bool DesiredCapacityHasBeenSet() const { return m_desiredCapacityHasBeenSet; }

    /**
     * <p>The desired capacity, or number of instances, for the Auto Scaling group.</p>
     */
    inline void SetDesiredCapacity(int value) { m_desiredCapacityHasBeenSet = true; m_desiredCapacity = value; }

    /**
     * <p>The desired capacity, or number of instances, for the Auto Scaling group.</p>
     */
    inline AutoScalingGroupConfiguration& WithDesiredCapacity(int value) { SetDesiredCapacity(value); return *this;}


    /**
     * <p>The minimum size, or minimum number of instances, for the Auto Scaling
     * group.</p>
     */
    inline int GetMinSize() const{ return m_minSize; }

    /**
     * <p>The minimum size, or minimum number of instances, for the Auto Scaling
     * group.</p>
     */
    inline bool MinSizeHasBeenSet() const { return m_minSizeHasBeenSet; }

    /**
     * <p>The minimum size, or minimum number of instances, for the Auto Scaling
     * group.</p>
     */
    inline void SetMinSize(int value) { m_minSizeHasBeenSet = true; m_minSize = value; }

    /**
     * <p>The minimum size, or minimum number of instances, for the Auto Scaling
     * group.</p>
     */
    inline AutoScalingGroupConfiguration& WithMinSize(int value) { SetMinSize(value); return *this;}


    /**
     * <p>The maximum size, or maximum number of instances, for the Auto Scaling
     * group.</p>
     */
    inline int GetMaxSize() const{ return m_maxSize; }

    /**
     * <p>The maximum size, or maximum number of instances, for the Auto Scaling
     * group.</p>
     */
    inline bool MaxSizeHasBeenSet() const { return m_maxSizeHasBeenSet; }

    /**
     * <p>The maximum size, or maximum number of instances, for the Auto Scaling
     * group.</p>
     */
    inline void SetMaxSize(int value) { m_maxSizeHasBeenSet = true; m_maxSize = value; }

    /**
     * <p>The maximum size, or maximum number of instances, for the Auto Scaling
     * group.</p>
     */
    inline AutoScalingGroupConfiguration& WithMaxSize(int value) { SetMaxSize(value); return *this;}


    /**
     * <p>The instance type for the Auto Scaling group.</p>
     */
    inline const Aws::String& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for the Auto Scaling group.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type for the Auto Scaling group.</p>
     */
    inline void SetInstanceType(const Aws::String& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for the Auto Scaling group.</p>
     */
    inline void SetInstanceType(Aws::String&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for the Auto Scaling group.</p>
     */
    inline void SetInstanceType(const char* value) { m_instanceTypeHasBeenSet = true; m_instanceType.assign(value); }

    /**
     * <p>The instance type for the Auto Scaling group.</p>
     */
    inline AutoScalingGroupConfiguration& WithInstanceType(const Aws::String& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for the Auto Scaling group.</p>
     */
    inline AutoScalingGroupConfiguration& WithInstanceType(Aws::String&& value) { SetInstanceType(std::move(value)); return *this;}

    /**
     * <p>The instance type for the Auto Scaling group.</p>
     */
    inline AutoScalingGroupConfiguration& WithInstanceType(const char* value) { SetInstanceType(value); return *this;}

  private:

    int m_desiredCapacity;
    bool m_desiredCapacityHasBeenSet = false;

    int m_minSize;
    bool m_minSizeHasBeenSet = false;

    int m_maxSize;
    bool m_maxSizeHasBeenSet = false;

    Aws::String m_instanceType;
    bool m_instanceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ComputeOptimizer
} // namespace Aws
