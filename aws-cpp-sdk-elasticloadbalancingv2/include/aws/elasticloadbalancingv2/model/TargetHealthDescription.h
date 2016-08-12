/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticloadbalancingv2/model/TargetDescription.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticloadbalancingv2/model/TargetHealth.h>

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
   * <p>Information about the health of a target.</p>
   */
  class AWS_ELASTICLOADBALANCINGV2_API TargetHealthDescription
  {
  public:
    TargetHealthDescription();
    TargetHealthDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    TargetHealthDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The description of the target.</p>
     */
    inline const TargetDescription& GetTarget() const{ return m_target; }

    /**
     * <p>The description of the target.</p>
     */
    inline void SetTarget(const TargetDescription& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The description of the target.</p>
     */
    inline void SetTarget(TargetDescription&& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The description of the target.</p>
     */
    inline TargetHealthDescription& WithTarget(const TargetDescription& value) { SetTarget(value); return *this;}

    /**
     * <p>The description of the target.</p>
     */
    inline TargetHealthDescription& WithTarget(TargetDescription&& value) { SetTarget(value); return *this;}

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline const Aws::String& GetHealthCheckPort() const{ return m_healthCheckPort; }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline void SetHealthCheckPort(const Aws::String& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline void SetHealthCheckPort(Aws::String&& value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort = value; }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline void SetHealthCheckPort(const char* value) { m_healthCheckPortHasBeenSet = true; m_healthCheckPort.assign(value); }

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline TargetHealthDescription& WithHealthCheckPort(const Aws::String& value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline TargetHealthDescription& WithHealthCheckPort(Aws::String&& value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The port to use to connect with the target.</p>
     */
    inline TargetHealthDescription& WithHealthCheckPort(const char* value) { SetHealthCheckPort(value); return *this;}

    /**
     * <p>The health information for the target.</p>
     */
    inline const TargetHealth& GetTargetHealth() const{ return m_targetHealth; }

    /**
     * <p>The health information for the target.</p>
     */
    inline void SetTargetHealth(const TargetHealth& value) { m_targetHealthHasBeenSet = true; m_targetHealth = value; }

    /**
     * <p>The health information for the target.</p>
     */
    inline void SetTargetHealth(TargetHealth&& value) { m_targetHealthHasBeenSet = true; m_targetHealth = value; }

    /**
     * <p>The health information for the target.</p>
     */
    inline TargetHealthDescription& WithTargetHealth(const TargetHealth& value) { SetTargetHealth(value); return *this;}

    /**
     * <p>The health information for the target.</p>
     */
    inline TargetHealthDescription& WithTargetHealth(TargetHealth&& value) { SetTargetHealth(value); return *this;}

  private:
    TargetDescription m_target;
    bool m_targetHasBeenSet;
    Aws::String m_healthCheckPort;
    bool m_healthCheckPortHasBeenSet;
    TargetHealth m_targetHealth;
    bool m_targetHealthHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
