/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes the state of a traffic source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/TrafficSourceState">AWS
   * API Reference</a></p>
   */
  class TrafficSourceState
  {
  public:
    AWS_AUTOSCALING_API TrafficSourceState();
    AWS_AUTOSCALING_API TrafficSourceState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API TrafficSourceState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The unique identifier of the traffic source. Currently, this is the Amazon
     * Resource Name (ARN) for a VPC Lattice target group.</p>
     */
    inline const Aws::String& GetTrafficSource() const{ return m_trafficSource; }

    /**
     * <p>The unique identifier of the traffic source. Currently, this is the Amazon
     * Resource Name (ARN) for a VPC Lattice target group.</p>
     */
    inline bool TrafficSourceHasBeenSet() const { return m_trafficSourceHasBeenSet; }

    /**
     * <p>The unique identifier of the traffic source. Currently, this is the Amazon
     * Resource Name (ARN) for a VPC Lattice target group.</p>
     */
    inline void SetTrafficSource(const Aws::String& value) { m_trafficSourceHasBeenSet = true; m_trafficSource = value; }

    /**
     * <p>The unique identifier of the traffic source. Currently, this is the Amazon
     * Resource Name (ARN) for a VPC Lattice target group.</p>
     */
    inline void SetTrafficSource(Aws::String&& value) { m_trafficSourceHasBeenSet = true; m_trafficSource = std::move(value); }

    /**
     * <p>The unique identifier of the traffic source. Currently, this is the Amazon
     * Resource Name (ARN) for a VPC Lattice target group.</p>
     */
    inline void SetTrafficSource(const char* value) { m_trafficSourceHasBeenSet = true; m_trafficSource.assign(value); }

    /**
     * <p>The unique identifier of the traffic source. Currently, this is the Amazon
     * Resource Name (ARN) for a VPC Lattice target group.</p>
     */
    inline TrafficSourceState& WithTrafficSource(const Aws::String& value) { SetTrafficSource(value); return *this;}

    /**
     * <p>The unique identifier of the traffic source. Currently, this is the Amazon
     * Resource Name (ARN) for a VPC Lattice target group.</p>
     */
    inline TrafficSourceState& WithTrafficSource(Aws::String&& value) { SetTrafficSource(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the traffic source. Currently, this is the Amazon
     * Resource Name (ARN) for a VPC Lattice target group.</p>
     */
    inline TrafficSourceState& WithTrafficSource(const char* value) { SetTrafficSource(value); return *this;}


    /**
     * <p>The following are the possible states for a VPC Lattice target group:</p>
     * <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances are being
     * registered with the target group.</p> </li> <li> <p> <code>Added</code> - All
     * Auto Scaling instances are registered with the target group.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed the
     * <code>VPC_LATTICE</code> health check.</p> </li> <li> <p> <code>Removing</code>
     * - The Auto Scaling instances are being deregistered from the target group. If
     * connection draining is enabled, VPC Lattice waits for in-flight requests to
     * complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the
     * target group.</p> </li> </ul>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>The following are the possible states for a VPC Lattice target group:</p>
     * <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances are being
     * registered with the target group.</p> </li> <li> <p> <code>Added</code> - All
     * Auto Scaling instances are registered with the target group.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed the
     * <code>VPC_LATTICE</code> health check.</p> </li> <li> <p> <code>Removing</code>
     * - The Auto Scaling instances are being deregistered from the target group. If
     * connection draining is enabled, VPC Lattice waits for in-flight requests to
     * complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the
     * target group.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The following are the possible states for a VPC Lattice target group:</p>
     * <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances are being
     * registered with the target group.</p> </li> <li> <p> <code>Added</code> - All
     * Auto Scaling instances are registered with the target group.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed the
     * <code>VPC_LATTICE</code> health check.</p> </li> <li> <p> <code>Removing</code>
     * - The Auto Scaling instances are being deregistered from the target group. If
     * connection draining is enabled, VPC Lattice waits for in-flight requests to
     * complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the
     * target group.</p> </li> </ul>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The following are the possible states for a VPC Lattice target group:</p>
     * <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances are being
     * registered with the target group.</p> </li> <li> <p> <code>Added</code> - All
     * Auto Scaling instances are registered with the target group.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed the
     * <code>VPC_LATTICE</code> health check.</p> </li> <li> <p> <code>Removing</code>
     * - The Auto Scaling instances are being deregistered from the target group. If
     * connection draining is enabled, VPC Lattice waits for in-flight requests to
     * complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the
     * target group.</p> </li> </ul>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The following are the possible states for a VPC Lattice target group:</p>
     * <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances are being
     * registered with the target group.</p> </li> <li> <p> <code>Added</code> - All
     * Auto Scaling instances are registered with the target group.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed the
     * <code>VPC_LATTICE</code> health check.</p> </li> <li> <p> <code>Removing</code>
     * - The Auto Scaling instances are being deregistered from the target group. If
     * connection draining is enabled, VPC Lattice waits for in-flight requests to
     * complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the
     * target group.</p> </li> </ul>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>The following are the possible states for a VPC Lattice target group:</p>
     * <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances are being
     * registered with the target group.</p> </li> <li> <p> <code>Added</code> - All
     * Auto Scaling instances are registered with the target group.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed the
     * <code>VPC_LATTICE</code> health check.</p> </li> <li> <p> <code>Removing</code>
     * - The Auto Scaling instances are being deregistered from the target group. If
     * connection draining is enabled, VPC Lattice waits for in-flight requests to
     * complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the
     * target group.</p> </li> </ul>
     */
    inline TrafficSourceState& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>The following are the possible states for a VPC Lattice target group:</p>
     * <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances are being
     * registered with the target group.</p> </li> <li> <p> <code>Added</code> - All
     * Auto Scaling instances are registered with the target group.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed the
     * <code>VPC_LATTICE</code> health check.</p> </li> <li> <p> <code>Removing</code>
     * - The Auto Scaling instances are being deregistered from the target group. If
     * connection draining is enabled, VPC Lattice waits for in-flight requests to
     * complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the
     * target group.</p> </li> </ul>
     */
    inline TrafficSourceState& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>The following are the possible states for a VPC Lattice target group:</p>
     * <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances are being
     * registered with the target group.</p> </li> <li> <p> <code>Added</code> - All
     * Auto Scaling instances are registered with the target group.</p> </li> <li> <p>
     * <code>InService</code> - At least one Auto Scaling instance passed the
     * <code>VPC_LATTICE</code> health check.</p> </li> <li> <p> <code>Removing</code>
     * - The Auto Scaling instances are being deregistered from the target group. If
     * connection draining is enabled, VPC Lattice waits for in-flight requests to
     * complete before deregistering the instances.</p> </li> <li> <p>
     * <code>Removed</code> - All Auto Scaling instances are deregistered from the
     * target group.</p> </li> </ul>
     */
    inline TrafficSourceState& WithState(const char* value) { SetState(value); return *this;}

  private:

    Aws::String m_trafficSource;
    bool m_trafficSourceHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
