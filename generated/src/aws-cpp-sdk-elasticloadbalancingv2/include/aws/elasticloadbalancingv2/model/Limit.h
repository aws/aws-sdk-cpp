/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about an Elastic Load Balancing resource limit for your Amazon
   * Web Services account.</p> <p>For more information, see the following:</p> <ul>
   * <li> <p> <a
   * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/application/load-balancer-limits.html">Quotas
   * for your Application Load Balancers</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/network/load-balancer-limits.html">Quotas
   * for your Network Load Balancers</a> </p> </li> <li> <p> <a
   * href="https://docs.aws.amazon.com/elasticloadbalancing/latest/gateway/quotas-limits.html">Quotas
   * for your Gateway Load Balancers</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/Limit">AWS
   * API Reference</a></p>
   */
  class Limit
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API Limit() = default;
    AWS_ELASTICLOADBALANCINGV2_API Limit(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API Limit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the limit. The possible values are:</p> <ul> <li>
     * <p>application-load-balancers</p> </li> <li>
     * <p>condition-values-per-alb-rule</p> </li> <li>
     * <p>condition-wildcards-per-alb-rule</p> </li> <li> <p>gateway-load-balancers</p>
     * </li> <li> <p>gateway-load-balancers-per-vpc</p> </li> <li>
     * <p>geneve-target-groups</p> </li> <li>
     * <p>listeners-per-application-load-balancer</p> </li> <li>
     * <p>listeners-per-network-load-balancer</p> </li> <li>
     * <p>network-load-balancers</p> </li> <li>
     * <p>rules-per-application-load-balancer</p> </li> <li> <p>target-groups</p> </li>
     * <li> <p>target-groups-per-action-on-application-load-balancer</p> </li> <li>
     * <p>target-groups-per-action-on-network-load-balancer</p> </li> <li>
     * <p>target-groups-per-application-load-balancer</p> </li> <li>
     * <p>targets-per-application-load-balancer</p> </li> <li>
     * <p>targets-per-availability-zone-per-gateway-load-balancer</p> </li> <li>
     * <p>targets-per-availability-zone-per-network-load-balancer</p> </li> <li>
     * <p>targets-per-network-load-balancer</p> </li> </ul>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Limit& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum value of the limit.</p>
     */
    inline const Aws::String& GetMax() const { return m_max; }
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }
    template<typename MaxT = Aws::String>
    void SetMax(MaxT&& value) { m_maxHasBeenSet = true; m_max = std::forward<MaxT>(value); }
    template<typename MaxT = Aws::String>
    Limit& WithMax(MaxT&& value) { SetMax(std::forward<MaxT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_max;
    bool m_maxHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
