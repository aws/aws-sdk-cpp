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
#include <aws/ec2/model/DefaultTargetCapacityType.h>
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
   * <p>The number of units to request. You can choose to set the target capacity in
   * terms of instances or a performance characteristic that is important to your
   * application workload, such as vCPUs, memory, or I/O. If the request type is
   * <code>maintain</code>, you can specify a target capacity of 0 and add capacity
   * later.</p> <p>You can use the On-Demand Instance <code>MaxTotalPrice</code>
   * parameter, the Spot Instance <code>MaxTotalPrice</code>, or both to ensure your
   * fleet cost does not exceed your budget. If you set a maximum price per hour for
   * the On-Demand Instances and Spot Instances in your request, EC2 Fleet will
   * launch instances until it reaches the maximum amount you're willing to pay. When
   * the maximum amount you're willing to pay is reached, the fleet stops launching
   * instances even if it hasn’t met the target capacity. The
   * <code>MaxTotalPrice</code> parameters are located in and </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TargetCapacitySpecification">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TargetCapacitySpecification
  {
  public:
    TargetCapacitySpecification();
    TargetCapacitySpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    TargetCapacitySpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The number of units to request, filled using
     * <code>DefaultTargetCapacityType</code>.</p>
     */
    inline int GetTotalTargetCapacity() const{ return m_totalTargetCapacity; }

    /**
     * <p>The number of units to request, filled using
     * <code>DefaultTargetCapacityType</code>.</p>
     */
    inline bool TotalTargetCapacityHasBeenSet() const { return m_totalTargetCapacityHasBeenSet; }

    /**
     * <p>The number of units to request, filled using
     * <code>DefaultTargetCapacityType</code>.</p>
     */
    inline void SetTotalTargetCapacity(int value) { m_totalTargetCapacityHasBeenSet = true; m_totalTargetCapacity = value; }

    /**
     * <p>The number of units to request, filled using
     * <code>DefaultTargetCapacityType</code>.</p>
     */
    inline TargetCapacitySpecification& WithTotalTargetCapacity(int value) { SetTotalTargetCapacity(value); return *this;}


    /**
     * <p>The number of On-Demand units to request. If you specify a target capacity
     * for Spot units, you cannot specify a target capacity for On-Demand units.</p>
     */
    inline int GetOnDemandTargetCapacity() const{ return m_onDemandTargetCapacity; }

    /**
     * <p>The number of On-Demand units to request. If you specify a target capacity
     * for Spot units, you cannot specify a target capacity for On-Demand units.</p>
     */
    inline bool OnDemandTargetCapacityHasBeenSet() const { return m_onDemandTargetCapacityHasBeenSet; }

    /**
     * <p>The number of On-Demand units to request. If you specify a target capacity
     * for Spot units, you cannot specify a target capacity for On-Demand units.</p>
     */
    inline void SetOnDemandTargetCapacity(int value) { m_onDemandTargetCapacityHasBeenSet = true; m_onDemandTargetCapacity = value; }

    /**
     * <p>The number of On-Demand units to request. If you specify a target capacity
     * for Spot units, you cannot specify a target capacity for On-Demand units.</p>
     */
    inline TargetCapacitySpecification& WithOnDemandTargetCapacity(int value) { SetOnDemandTargetCapacity(value); return *this;}


    /**
     * <p>The maximum number of Spot units to launch. If you specify a target capacity
     * for On-Demand units, you cannot specify a target capacity for Spot units.</p>
     */
    inline int GetSpotTargetCapacity() const{ return m_spotTargetCapacity; }

    /**
     * <p>The maximum number of Spot units to launch. If you specify a target capacity
     * for On-Demand units, you cannot specify a target capacity for Spot units.</p>
     */
    inline bool SpotTargetCapacityHasBeenSet() const { return m_spotTargetCapacityHasBeenSet; }

    /**
     * <p>The maximum number of Spot units to launch. If you specify a target capacity
     * for On-Demand units, you cannot specify a target capacity for Spot units.</p>
     */
    inline void SetSpotTargetCapacity(int value) { m_spotTargetCapacityHasBeenSet = true; m_spotTargetCapacity = value; }

    /**
     * <p>The maximum number of Spot units to launch. If you specify a target capacity
     * for On-Demand units, you cannot specify a target capacity for Spot units.</p>
     */
    inline TargetCapacitySpecification& WithSpotTargetCapacity(int value) { SetSpotTargetCapacity(value); return *this;}


    /**
     * <p>The default <code>TotalTargetCapacity</code>, which is either
     * <code>Spot</code> or <code>On-Demand</code>.</p>
     */
    inline const DefaultTargetCapacityType& GetDefaultTargetCapacityType() const{ return m_defaultTargetCapacityType; }

    /**
     * <p>The default <code>TotalTargetCapacity</code>, which is either
     * <code>Spot</code> or <code>On-Demand</code>.</p>
     */
    inline bool DefaultTargetCapacityTypeHasBeenSet() const { return m_defaultTargetCapacityTypeHasBeenSet; }

    /**
     * <p>The default <code>TotalTargetCapacity</code>, which is either
     * <code>Spot</code> or <code>On-Demand</code>.</p>
     */
    inline void SetDefaultTargetCapacityType(const DefaultTargetCapacityType& value) { m_defaultTargetCapacityTypeHasBeenSet = true; m_defaultTargetCapacityType = value; }

    /**
     * <p>The default <code>TotalTargetCapacity</code>, which is either
     * <code>Spot</code> or <code>On-Demand</code>.</p>
     */
    inline void SetDefaultTargetCapacityType(DefaultTargetCapacityType&& value) { m_defaultTargetCapacityTypeHasBeenSet = true; m_defaultTargetCapacityType = std::move(value); }

    /**
     * <p>The default <code>TotalTargetCapacity</code>, which is either
     * <code>Spot</code> or <code>On-Demand</code>.</p>
     */
    inline TargetCapacitySpecification& WithDefaultTargetCapacityType(const DefaultTargetCapacityType& value) { SetDefaultTargetCapacityType(value); return *this;}

    /**
     * <p>The default <code>TotalTargetCapacity</code>, which is either
     * <code>Spot</code> or <code>On-Demand</code>.</p>
     */
    inline TargetCapacitySpecification& WithDefaultTargetCapacityType(DefaultTargetCapacityType&& value) { SetDefaultTargetCapacityType(std::move(value)); return *this;}

  private:

    int m_totalTargetCapacity;
    bool m_totalTargetCapacityHasBeenSet;

    int m_onDemandTargetCapacity;
    bool m_onDemandTargetCapacityHasBeenSet;

    int m_spotTargetCapacity;
    bool m_spotTargetCapacityHasBeenSet;

    DefaultTargetCapacityType m_defaultTargetCapacityType;
    bool m_defaultTargetCapacityTypeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
