/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>The minimum capacity for a load balancer.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/MinimumLoadBalancerCapacity">AWS
   * API Reference</a></p>
   */
  class MinimumLoadBalancerCapacity
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API MinimumLoadBalancerCapacity() = default;
    AWS_ELASTICLOADBALANCINGV2_API MinimumLoadBalancerCapacity(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API MinimumLoadBalancerCapacity& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of capacity units.</p>
     */
    inline int GetCapacityUnits() const { return m_capacityUnits; }
    inline bool CapacityUnitsHasBeenSet() const { return m_capacityUnitsHasBeenSet; }
    inline void SetCapacityUnits(int value) { m_capacityUnitsHasBeenSet = true; m_capacityUnits = value; }
    inline MinimumLoadBalancerCapacity& WithCapacityUnits(int value) { SetCapacityUnits(value); return *this;}
    ///@}
  private:

    int m_capacityUnits{0};
    bool m_capacityUnitsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
