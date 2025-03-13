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
  class SpotMaintenanceStrategies
  {
  public:
    AWS_EC2_API SpotMaintenanceStrategies() = default;
    AWS_EC2_API SpotMaintenanceStrategies(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SpotMaintenanceStrategies& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The Spot Instance replacement strategy to use when Amazon EC2 emits a signal
     * that your Spot Instance is at an elevated risk of being interrupted. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/spot-fleet-capacity-rebalance.html">Capacity
     * rebalancing</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline const SpotCapacityRebalance& GetCapacityRebalance() const { return m_capacityRebalance; }
    inline bool CapacityRebalanceHasBeenSet() const { return m_capacityRebalanceHasBeenSet; }
    template<typename CapacityRebalanceT = SpotCapacityRebalance>
    void SetCapacityRebalance(CapacityRebalanceT&& value) { m_capacityRebalanceHasBeenSet = true; m_capacityRebalance = std::forward<CapacityRebalanceT>(value); }
    template<typename CapacityRebalanceT = SpotCapacityRebalance>
    SpotMaintenanceStrategies& WithCapacityRebalance(CapacityRebalanceT&& value) { SetCapacityRebalance(std::forward<CapacityRebalanceT>(value)); return *this;}
    ///@}
  private:

    SpotCapacityRebalance m_capacityRebalance;
    bool m_capacityRebalanceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
