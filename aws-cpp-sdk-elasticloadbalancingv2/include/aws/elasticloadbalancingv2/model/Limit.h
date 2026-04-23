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
   * <p>Information about an Elastic Load Balancing resource limit for your AWS
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/Limit">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API Limit
  {
  public:
    Limit();
    Limit(const Aws::Utils::Xml::XmlNode& xmlNode);
    Limit& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the limit. The possible values are:</p> <ul> <li>
     * <p>application-load-balancers</p> </li> <li>
     * <p>listeners-per-application-load-balancer</p> </li> <li>
     * <p>listeners-per-network-load-balancer</p> </li> <li>
     * <p>network-load-balancers</p> </li> <li>
     * <p>rules-per-application-load-balancer</p> </li> <li> <p>target-groups</p> </li>
     * <li> <p>targets-per-application-load-balancer</p> </li> <li>
     * <p>targets-per-availability-zone-per-network-load-balancer</p> </li> <li>
     * <p>targets-per-network-load-balancer</p> </li> </ul>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the limit. The possible values are:</p> <ul> <li>
     * <p>application-load-balancers</p> </li> <li>
     * <p>listeners-per-application-load-balancer</p> </li> <li>
     * <p>listeners-per-network-load-balancer</p> </li> <li>
     * <p>network-load-balancers</p> </li> <li>
     * <p>rules-per-application-load-balancer</p> </li> <li> <p>target-groups</p> </li>
     * <li> <p>targets-per-application-load-balancer</p> </li> <li>
     * <p>targets-per-availability-zone-per-network-load-balancer</p> </li> <li>
     * <p>targets-per-network-load-balancer</p> </li> </ul>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the limit. The possible values are:</p> <ul> <li>
     * <p>application-load-balancers</p> </li> <li>
     * <p>listeners-per-application-load-balancer</p> </li> <li>
     * <p>listeners-per-network-load-balancer</p> </li> <li>
     * <p>network-load-balancers</p> </li> <li>
     * <p>rules-per-application-load-balancer</p> </li> <li> <p>target-groups</p> </li>
     * <li> <p>targets-per-application-load-balancer</p> </li> <li>
     * <p>targets-per-availability-zone-per-network-load-balancer</p> </li> <li>
     * <p>targets-per-network-load-balancer</p> </li> </ul>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the limit. The possible values are:</p> <ul> <li>
     * <p>application-load-balancers</p> </li> <li>
     * <p>listeners-per-application-load-balancer</p> </li> <li>
     * <p>listeners-per-network-load-balancer</p> </li> <li>
     * <p>network-load-balancers</p> </li> <li>
     * <p>rules-per-application-load-balancer</p> </li> <li> <p>target-groups</p> </li>
     * <li> <p>targets-per-application-load-balancer</p> </li> <li>
     * <p>targets-per-availability-zone-per-network-load-balancer</p> </li> <li>
     * <p>targets-per-network-load-balancer</p> </li> </ul>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the limit. The possible values are:</p> <ul> <li>
     * <p>application-load-balancers</p> </li> <li>
     * <p>listeners-per-application-load-balancer</p> </li> <li>
     * <p>listeners-per-network-load-balancer</p> </li> <li>
     * <p>network-load-balancers</p> </li> <li>
     * <p>rules-per-application-load-balancer</p> </li> <li> <p>target-groups</p> </li>
     * <li> <p>targets-per-application-load-balancer</p> </li> <li>
     * <p>targets-per-availability-zone-per-network-load-balancer</p> </li> <li>
     * <p>targets-per-network-load-balancer</p> </li> </ul>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the limit. The possible values are:</p> <ul> <li>
     * <p>application-load-balancers</p> </li> <li>
     * <p>listeners-per-application-load-balancer</p> </li> <li>
     * <p>listeners-per-network-load-balancer</p> </li> <li>
     * <p>network-load-balancers</p> </li> <li>
     * <p>rules-per-application-load-balancer</p> </li> <li> <p>target-groups</p> </li>
     * <li> <p>targets-per-application-load-balancer</p> </li> <li>
     * <p>targets-per-availability-zone-per-network-load-balancer</p> </li> <li>
     * <p>targets-per-network-load-balancer</p> </li> </ul>
     */
    inline Limit& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the limit. The possible values are:</p> <ul> <li>
     * <p>application-load-balancers</p> </li> <li>
     * <p>listeners-per-application-load-balancer</p> </li> <li>
     * <p>listeners-per-network-load-balancer</p> </li> <li>
     * <p>network-load-balancers</p> </li> <li>
     * <p>rules-per-application-load-balancer</p> </li> <li> <p>target-groups</p> </li>
     * <li> <p>targets-per-application-load-balancer</p> </li> <li>
     * <p>targets-per-availability-zone-per-network-load-balancer</p> </li> <li>
     * <p>targets-per-network-load-balancer</p> </li> </ul>
     */
    inline Limit& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the limit. The possible values are:</p> <ul> <li>
     * <p>application-load-balancers</p> </li> <li>
     * <p>listeners-per-application-load-balancer</p> </li> <li>
     * <p>listeners-per-network-load-balancer</p> </li> <li>
     * <p>network-load-balancers</p> </li> <li>
     * <p>rules-per-application-load-balancer</p> </li> <li> <p>target-groups</p> </li>
     * <li> <p>targets-per-application-load-balancer</p> </li> <li>
     * <p>targets-per-availability-zone-per-network-load-balancer</p> </li> <li>
     * <p>targets-per-network-load-balancer</p> </li> </ul>
     */
    inline Limit& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The maximum value of the limit.</p>
     */
    inline const Aws::String& GetMax() const{ return m_max; }

    /**
     * <p>The maximum value of the limit.</p>
     */
    inline bool MaxHasBeenSet() const { return m_maxHasBeenSet; }

    /**
     * <p>The maximum value of the limit.</p>
     */
    inline void SetMax(const Aws::String& value) { m_maxHasBeenSet = true; m_max = value; }

    /**
     * <p>The maximum value of the limit.</p>
     */
    inline void SetMax(Aws::String&& value) { m_maxHasBeenSet = true; m_max = std::move(value); }

    /**
     * <p>The maximum value of the limit.</p>
     */
    inline void SetMax(const char* value) { m_maxHasBeenSet = true; m_max.assign(value); }

    /**
     * <p>The maximum value of the limit.</p>
     */
    inline Limit& WithMax(const Aws::String& value) { SetMax(value); return *this;}

    /**
     * <p>The maximum value of the limit.</p>
     */
    inline Limit& WithMax(Aws::String&& value) { SetMax(std::move(value)); return *this;}

    /**
     * <p>The maximum value of the limit.</p>
     */
    inline Limit& WithMax(const char* value) { SetMax(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_max;
    bool m_maxHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
