/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/SpotAllocationStrategy.h>
#include <aws/ec2/model/SpotInstanceInterruptionBehavior.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the configuration of Spot Instances in an EC2 Fleet
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotOptionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SpotOptionsRequest
  {
  public:
    SpotOptionsRequest();
    SpotOptionsRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotOptionsRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates how to allocate the target capacity across the Spot pools specified
     * by the Spot Fleet request. The default is <code>lowestPrice</code>.</p>
     */
    inline const SpotAllocationStrategy& GetAllocationStrategy() const{ return m_allocationStrategy; }

    /**
     * <p>Indicates how to allocate the target capacity across the Spot pools specified
     * by the Spot Fleet request. The default is <code>lowestPrice</code>.</p>
     */
    inline void SetAllocationStrategy(const SpotAllocationStrategy& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = value; }

    /**
     * <p>Indicates how to allocate the target capacity across the Spot pools specified
     * by the Spot Fleet request. The default is <code>lowestPrice</code>.</p>
     */
    inline void SetAllocationStrategy(SpotAllocationStrategy&& value) { m_allocationStrategyHasBeenSet = true; m_allocationStrategy = std::move(value); }

    /**
     * <p>Indicates how to allocate the target capacity across the Spot pools specified
     * by the Spot Fleet request. The default is <code>lowestPrice</code>.</p>
     */
    inline SpotOptionsRequest& WithAllocationStrategy(const SpotAllocationStrategy& value) { SetAllocationStrategy(value); return *this;}

    /**
     * <p>Indicates how to allocate the target capacity across the Spot pools specified
     * by the Spot Fleet request. The default is <code>lowestPrice</code>.</p>
     */
    inline SpotOptionsRequest& WithAllocationStrategy(SpotAllocationStrategy&& value) { SetAllocationStrategy(std::move(value)); return *this;}


    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline const SpotInstanceInterruptionBehavior& GetInstanceInterruptionBehavior() const{ return m_instanceInterruptionBehavior; }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline void SetInstanceInterruptionBehavior(const SpotInstanceInterruptionBehavior& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = value; }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline void SetInstanceInterruptionBehavior(SpotInstanceInterruptionBehavior&& value) { m_instanceInterruptionBehaviorHasBeenSet = true; m_instanceInterruptionBehavior = std::move(value); }

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline SpotOptionsRequest& WithInstanceInterruptionBehavior(const SpotInstanceInterruptionBehavior& value) { SetInstanceInterruptionBehavior(value); return *this;}

    /**
     * <p>The behavior when a Spot Instance is interrupted. The default is
     * <code>terminate</code>.</p>
     */
    inline SpotOptionsRequest& WithInstanceInterruptionBehavior(SpotInstanceInterruptionBehavior&& value) { SetInstanceInterruptionBehavior(std::move(value)); return *this;}


    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Valid only when Spot <b>AllocationStrategy</b> is set to
     * <code>lowest-price</code>. EC2 Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p>
     */
    inline int GetInstancePoolsToUseCount() const{ return m_instancePoolsToUseCount; }

    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Valid only when Spot <b>AllocationStrategy</b> is set to
     * <code>lowest-price</code>. EC2 Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p>
     */
    inline void SetInstancePoolsToUseCount(int value) { m_instancePoolsToUseCountHasBeenSet = true; m_instancePoolsToUseCount = value; }

    /**
     * <p>The number of Spot pools across which to allocate your target Spot capacity.
     * Valid only when Spot <b>AllocationStrategy</b> is set to
     * <code>lowest-price</code>. EC2 Fleet selects the cheapest Spot pools and evenly
     * allocates your target Spot capacity across the number of Spot pools that you
     * specify.</p>
     */
    inline SpotOptionsRequest& WithInstancePoolsToUseCount(int value) { SetInstancePoolsToUseCount(value); return *this;}

  private:

    SpotAllocationStrategy m_allocationStrategy;
    bool m_allocationStrategyHasBeenSet;

    SpotInstanceInterruptionBehavior m_instanceInterruptionBehavior;
    bool m_instanceInterruptionBehaviorHasBeenSet;

    int m_instancePoolsToUseCount;
    bool m_instancePoolsToUseCountHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
