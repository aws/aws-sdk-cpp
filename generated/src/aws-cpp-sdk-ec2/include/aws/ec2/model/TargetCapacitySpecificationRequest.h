/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DefaultTargetCapacityType.h>
#include <aws/ec2/model/TargetCapacityUnitType.h>
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
   * <p>The number of units to request. You can choose to set the target capacity as
   * the number of instances. Or you can set the target capacity to a performance
   * characteristic that is important to your application workload, such as vCPUs,
   * memory, or I/O. If the request type is <code>maintain</code>, you can specify a
   * target capacity of 0 and add capacity later.</p> <p>You can use the On-Demand
   * Instance <code>MaxTotalPrice</code> parameter, the Spot Instance
   * <code>MaxTotalPrice</code> parameter, or both parameters to ensure that your
   * fleet cost does not exceed your budget. If you set a maximum price per hour for
   * the On-Demand Instances and Spot Instances in your request, EC2 Fleet will
   * launch instances until it reaches the maximum amount that you're willing to pay.
   * When the maximum amount you're willing to pay is reached, the fleet stops
   * launching instances even if it hasn't met the target capacity. The
   * <code>MaxTotalPrice</code> parameters are located in <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_OnDemandOptionsRequest">OnDemandOptionsRequest</a>
   * and <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/API_SpotOptionsRequest">SpotOptionsRequest</a>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TargetCapacitySpecificationRequest">AWS
   * API Reference</a></p>
   */
  class TargetCapacitySpecificationRequest
  {
  public:
    AWS_EC2_API TargetCapacitySpecificationRequest() = default;
    AWS_EC2_API TargetCapacitySpecificationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TargetCapacitySpecificationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of units to request, filled using the default target capacity
     * type.</p>
     */
    inline int GetTotalTargetCapacity() const { return m_totalTargetCapacity; }
    inline bool TotalTargetCapacityHasBeenSet() const { return m_totalTargetCapacityHasBeenSet; }
    inline void SetTotalTargetCapacity(int value) { m_totalTargetCapacityHasBeenSet = true; m_totalTargetCapacity = value; }
    inline TargetCapacitySpecificationRequest& WithTotalTargetCapacity(int value) { SetTotalTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of On-Demand units to request.</p>
     */
    inline int GetOnDemandTargetCapacity() const { return m_onDemandTargetCapacity; }
    inline bool OnDemandTargetCapacityHasBeenSet() const { return m_onDemandTargetCapacityHasBeenSet; }
    inline void SetOnDemandTargetCapacity(int value) { m_onDemandTargetCapacityHasBeenSet = true; m_onDemandTargetCapacity = value; }
    inline TargetCapacitySpecificationRequest& WithOnDemandTargetCapacity(int value) { SetOnDemandTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of Spot units to request.</p>
     */
    inline int GetSpotTargetCapacity() const { return m_spotTargetCapacity; }
    inline bool SpotTargetCapacityHasBeenSet() const { return m_spotTargetCapacityHasBeenSet; }
    inline void SetSpotTargetCapacity(int value) { m_spotTargetCapacityHasBeenSet = true; m_spotTargetCapacity = value; }
    inline TargetCapacitySpecificationRequest& WithSpotTargetCapacity(int value) { SetSpotTargetCapacity(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default target capacity type.</p>
     */
    inline DefaultTargetCapacityType GetDefaultTargetCapacityType() const { return m_defaultTargetCapacityType; }
    inline bool DefaultTargetCapacityTypeHasBeenSet() const { return m_defaultTargetCapacityTypeHasBeenSet; }
    inline void SetDefaultTargetCapacityType(DefaultTargetCapacityType value) { m_defaultTargetCapacityTypeHasBeenSet = true; m_defaultTargetCapacityType = value; }
    inline TargetCapacitySpecificationRequest& WithDefaultTargetCapacityType(DefaultTargetCapacityType value) { SetDefaultTargetCapacityType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unit for the target capacity. You can specify this parameter only when
     * using attributed-based instance type selection.</p> <p>Default:
     * <code>units</code> (the number of instances)</p>
     */
    inline TargetCapacityUnitType GetTargetCapacityUnitType() const { return m_targetCapacityUnitType; }
    inline bool TargetCapacityUnitTypeHasBeenSet() const { return m_targetCapacityUnitTypeHasBeenSet; }
    inline void SetTargetCapacityUnitType(TargetCapacityUnitType value) { m_targetCapacityUnitTypeHasBeenSet = true; m_targetCapacityUnitType = value; }
    inline TargetCapacitySpecificationRequest& WithTargetCapacityUnitType(TargetCapacityUnitType value) { SetTargetCapacityUnitType(value); return *this;}
    ///@}
  private:

    int m_totalTargetCapacity{0};
    bool m_totalTargetCapacityHasBeenSet = false;

    int m_onDemandTargetCapacity{0};
    bool m_onDemandTargetCapacityHasBeenSet = false;

    int m_spotTargetCapacity{0};
    bool m_spotTargetCapacityHasBeenSet = false;

    DefaultTargetCapacityType m_defaultTargetCapacityType{DefaultTargetCapacityType::NOT_SET};
    bool m_defaultTargetCapacityTypeHasBeenSet = false;

    TargetCapacityUnitType m_targetCapacityUnitType{TargetCapacityUnitType::NOT_SET};
    bool m_targetCapacityUnitTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
