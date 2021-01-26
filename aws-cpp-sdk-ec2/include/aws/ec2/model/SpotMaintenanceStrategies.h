/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/SpotCapacityRebalance.h>
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
   * <p>The strategies for managing your Spot Instances that are at an elevated risk
   * of being interrupted.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SpotMaintenanceStrategies">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API SpotMaintenanceStrategies
  {
  public:
    SpotMaintenanceStrategies();
    SpotMaintenanceStrategies(const Aws::Utils::Xml::XmlNode& xmlNode);
    SpotMaintenanceStrategies& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The strategy to use when Amazon EC2 emits a signal that your Spot Instance is
     * at an elevated risk of being interrupted.</p>
     */
    inline const SpotCapacityRebalance& GetCapacityRebalance() const{ return m_capacityRebalance; }

    /**
     * <p>The strategy to use when Amazon EC2 emits a signal that your Spot Instance is
     * at an elevated risk of being interrupted.</p>
     */
    inline bool CapacityRebalanceHasBeenSet() const { return m_capacityRebalanceHasBeenSet; }

    /**
     * <p>The strategy to use when Amazon EC2 emits a signal that your Spot Instance is
     * at an elevated risk of being interrupted.</p>
     */
    inline void SetCapacityRebalance(const SpotCapacityRebalance& value) { m_capacityRebalanceHasBeenSet = true; m_capacityRebalance = value; }

    /**
     * <p>The strategy to use when Amazon EC2 emits a signal that your Spot Instance is
     * at an elevated risk of being interrupted.</p>
     */
    inline void SetCapacityRebalance(SpotCapacityRebalance&& value) { m_capacityRebalanceHasBeenSet = true; m_capacityRebalance = std::move(value); }

    /**
     * <p>The strategy to use when Amazon EC2 emits a signal that your Spot Instance is
     * at an elevated risk of being interrupted.</p>
     */
    inline SpotMaintenanceStrategies& WithCapacityRebalance(const SpotCapacityRebalance& value) { SetCapacityRebalance(value); return *this;}

    /**
     * <p>The strategy to use when Amazon EC2 emits a signal that your Spot Instance is
     * at an elevated risk of being interrupted.</p>
     */
    inline SpotMaintenanceStrategies& WithCapacityRebalance(SpotCapacityRebalance&& value) { SetCapacityRebalance(std::move(value)); return *this;}

  private:

    SpotCapacityRebalance m_capacityRebalance;
    bool m_capacityRebalanceHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
