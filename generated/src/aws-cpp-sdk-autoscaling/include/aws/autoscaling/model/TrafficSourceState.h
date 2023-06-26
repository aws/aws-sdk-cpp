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
     * <p>Describes the current state of a traffic source.</p> <p>The state values are
     * as follows:</p> <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances
     * are being registered with the load balancer or target group.</p> </li> <li> <p>
     * <code>Added</code> - All Auto Scaling instances are registered with the load
     * balancer or target group.</p> </li> <li> <p> <code>InService</code> - For an
     * Elastic Load Balancing load balancer or target group, at least one Auto Scaling
     * instance passed an <code>ELB</code> health check. For VPC Lattice, at least one
     * Auto Scaling instance passed an <code>VPC_LATTICE</code> health check.</p> </li>
     * <li> <p> <code>Removing</code> - The Auto Scaling instances are being
     * deregistered from the load balancer or target group. If connection draining
     * (deregistration delay) is enabled, Elastic Load Balancing or VPC Lattice waits
     * for in-flight requests to complete before deregistering the instances.</p> </li>
     * <li> <p> <code>Removed</code> - All Auto Scaling instances are deregistered from
     * the load balancer or target group.</p> </li> </ul>
     */
    inline const Aws::String& GetState() const{ return m_state; }

    /**
     * <p>Describes the current state of a traffic source.</p> <p>The state values are
     * as follows:</p> <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances
     * are being registered with the load balancer or target group.</p> </li> <li> <p>
     * <code>Added</code> - All Auto Scaling instances are registered with the load
     * balancer or target group.</p> </li> <li> <p> <code>InService</code> - For an
     * Elastic Load Balancing load balancer or target group, at least one Auto Scaling
     * instance passed an <code>ELB</code> health check. For VPC Lattice, at least one
     * Auto Scaling instance passed an <code>VPC_LATTICE</code> health check.</p> </li>
     * <li> <p> <code>Removing</code> - The Auto Scaling instances are being
     * deregistered from the load balancer or target group. If connection draining
     * (deregistration delay) is enabled, Elastic Load Balancing or VPC Lattice waits
     * for in-flight requests to complete before deregistering the instances.</p> </li>
     * <li> <p> <code>Removed</code> - All Auto Scaling instances are deregistered from
     * the load balancer or target group.</p> </li> </ul>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Describes the current state of a traffic source.</p> <p>The state values are
     * as follows:</p> <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances
     * are being registered with the load balancer or target group.</p> </li> <li> <p>
     * <code>Added</code> - All Auto Scaling instances are registered with the load
     * balancer or target group.</p> </li> <li> <p> <code>InService</code> - For an
     * Elastic Load Balancing load balancer or target group, at least one Auto Scaling
     * instance passed an <code>ELB</code> health check. For VPC Lattice, at least one
     * Auto Scaling instance passed an <code>VPC_LATTICE</code> health check.</p> </li>
     * <li> <p> <code>Removing</code> - The Auto Scaling instances are being
     * deregistered from the load balancer or target group. If connection draining
     * (deregistration delay) is enabled, Elastic Load Balancing or VPC Lattice waits
     * for in-flight requests to complete before deregistering the instances.</p> </li>
     * <li> <p> <code>Removed</code> - All Auto Scaling instances are deregistered from
     * the load balancer or target group.</p> </li> </ul>
     */
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Describes the current state of a traffic source.</p> <p>The state values are
     * as follows:</p> <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances
     * are being registered with the load balancer or target group.</p> </li> <li> <p>
     * <code>Added</code> - All Auto Scaling instances are registered with the load
     * balancer or target group.</p> </li> <li> <p> <code>InService</code> - For an
     * Elastic Load Balancing load balancer or target group, at least one Auto Scaling
     * instance passed an <code>ELB</code> health check. For VPC Lattice, at least one
     * Auto Scaling instance passed an <code>VPC_LATTICE</code> health check.</p> </li>
     * <li> <p> <code>Removing</code> - The Auto Scaling instances are being
     * deregistered from the load balancer or target group. If connection draining
     * (deregistration delay) is enabled, Elastic Load Balancing or VPC Lattice waits
     * for in-flight requests to complete before deregistering the instances.</p> </li>
     * <li> <p> <code>Removed</code> - All Auto Scaling instances are deregistered from
     * the load balancer or target group.</p> </li> </ul>
     */
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Describes the current state of a traffic source.</p> <p>The state values are
     * as follows:</p> <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances
     * are being registered with the load balancer or target group.</p> </li> <li> <p>
     * <code>Added</code> - All Auto Scaling instances are registered with the load
     * balancer or target group.</p> </li> <li> <p> <code>InService</code> - For an
     * Elastic Load Balancing load balancer or target group, at least one Auto Scaling
     * instance passed an <code>ELB</code> health check. For VPC Lattice, at least one
     * Auto Scaling instance passed an <code>VPC_LATTICE</code> health check.</p> </li>
     * <li> <p> <code>Removing</code> - The Auto Scaling instances are being
     * deregistered from the load balancer or target group. If connection draining
     * (deregistration delay) is enabled, Elastic Load Balancing or VPC Lattice waits
     * for in-flight requests to complete before deregistering the instances.</p> </li>
     * <li> <p> <code>Removed</code> - All Auto Scaling instances are deregistered from
     * the load balancer or target group.</p> </li> </ul>
     */
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }

    /**
     * <p>Describes the current state of a traffic source.</p> <p>The state values are
     * as follows:</p> <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances
     * are being registered with the load balancer or target group.</p> </li> <li> <p>
     * <code>Added</code> - All Auto Scaling instances are registered with the load
     * balancer or target group.</p> </li> <li> <p> <code>InService</code> - For an
     * Elastic Load Balancing load balancer or target group, at least one Auto Scaling
     * instance passed an <code>ELB</code> health check. For VPC Lattice, at least one
     * Auto Scaling instance passed an <code>VPC_LATTICE</code> health check.</p> </li>
     * <li> <p> <code>Removing</code> - The Auto Scaling instances are being
     * deregistered from the load balancer or target group. If connection draining
     * (deregistration delay) is enabled, Elastic Load Balancing or VPC Lattice waits
     * for in-flight requests to complete before deregistering the instances.</p> </li>
     * <li> <p> <code>Removed</code> - All Auto Scaling instances are deregistered from
     * the load balancer or target group.</p> </li> </ul>
     */
    inline TrafficSourceState& WithState(const Aws::String& value) { SetState(value); return *this;}

    /**
     * <p>Describes the current state of a traffic source.</p> <p>The state values are
     * as follows:</p> <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances
     * are being registered with the load balancer or target group.</p> </li> <li> <p>
     * <code>Added</code> - All Auto Scaling instances are registered with the load
     * balancer or target group.</p> </li> <li> <p> <code>InService</code> - For an
     * Elastic Load Balancing load balancer or target group, at least one Auto Scaling
     * instance passed an <code>ELB</code> health check. For VPC Lattice, at least one
     * Auto Scaling instance passed an <code>VPC_LATTICE</code> health check.</p> </li>
     * <li> <p> <code>Removing</code> - The Auto Scaling instances are being
     * deregistered from the load balancer or target group. If connection draining
     * (deregistration delay) is enabled, Elastic Load Balancing or VPC Lattice waits
     * for in-flight requests to complete before deregistering the instances.</p> </li>
     * <li> <p> <code>Removed</code> - All Auto Scaling instances are deregistered from
     * the load balancer or target group.</p> </li> </ul>
     */
    inline TrafficSourceState& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}

    /**
     * <p>Describes the current state of a traffic source.</p> <p>The state values are
     * as follows:</p> <ul> <li> <p> <code>Adding</code> - The Auto Scaling instances
     * are being registered with the load balancer or target group.</p> </li> <li> <p>
     * <code>Added</code> - All Auto Scaling instances are registered with the load
     * balancer or target group.</p> </li> <li> <p> <code>InService</code> - For an
     * Elastic Load Balancing load balancer or target group, at least one Auto Scaling
     * instance passed an <code>ELB</code> health check. For VPC Lattice, at least one
     * Auto Scaling instance passed an <code>VPC_LATTICE</code> health check.</p> </li>
     * <li> <p> <code>Removing</code> - The Auto Scaling instances are being
     * deregistered from the load balancer or target group. If connection draining
     * (deregistration delay) is enabled, Elastic Load Balancing or VPC Lattice waits
     * for in-flight requests to complete before deregistering the instances.</p> </li>
     * <li> <p> <code>Removed</code> - All Auto Scaling instances are deregistered from
     * the load balancer or target group.</p> </li> </ul>
     */
    inline TrafficSourceState& WithState(const char* value) { SetState(value); return *this;}


    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline const Aws::String& GetIdentifier() const{ return m_identifier; }

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline bool IdentifierHasBeenSet() const { return m_identifierHasBeenSet; }

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline void SetIdentifier(const Aws::String& value) { m_identifierHasBeenSet = true; m_identifier = value; }

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline void SetIdentifier(Aws::String&& value) { m_identifierHasBeenSet = true; m_identifier = std::move(value); }

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline void SetIdentifier(const char* value) { m_identifierHasBeenSet = true; m_identifier.assign(value); }

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline TrafficSourceState& WithIdentifier(const Aws::String& value) { SetIdentifier(value); return *this;}

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline TrafficSourceState& WithIdentifier(Aws::String&& value) { SetIdentifier(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the traffic source.</p>
     */
    inline TrafficSourceState& WithIdentifier(const char* value) { SetIdentifier(value); return *this;}


    /**
     * <p>Provides additional context for the value of <code>Identifier</code>.</p>
     * <p>The following lists the valid values:</p> <ul> <li> <p> <code>elb</code> if
     * <code>Identifier</code> is the name of a Classic Load Balancer.</p> </li> <li>
     * <p> <code>elbv2</code> if <code>Identifier</code> is the ARN of an Application
     * Load Balancer, Gateway Load Balancer, or Network Load Balancer target group.</p>
     * </li> <li> <p> <code>vpc-lattice</code> if <code>Identifier</code> is the ARN of
     * a VPC Lattice target group.</p> </li> </ul> <p>Required if the identifier is the
     * name of a Classic Load Balancer.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Provides additional context for the value of <code>Identifier</code>.</p>
     * <p>The following lists the valid values:</p> <ul> <li> <p> <code>elb</code> if
     * <code>Identifier</code> is the name of a Classic Load Balancer.</p> </li> <li>
     * <p> <code>elbv2</code> if <code>Identifier</code> is the ARN of an Application
     * Load Balancer, Gateway Load Balancer, or Network Load Balancer target group.</p>
     * </li> <li> <p> <code>vpc-lattice</code> if <code>Identifier</code> is the ARN of
     * a VPC Lattice target group.</p> </li> </ul> <p>Required if the identifier is the
     * name of a Classic Load Balancer.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Provides additional context for the value of <code>Identifier</code>.</p>
     * <p>The following lists the valid values:</p> <ul> <li> <p> <code>elb</code> if
     * <code>Identifier</code> is the name of a Classic Load Balancer.</p> </li> <li>
     * <p> <code>elbv2</code> if <code>Identifier</code> is the ARN of an Application
     * Load Balancer, Gateway Load Balancer, or Network Load Balancer target group.</p>
     * </li> <li> <p> <code>vpc-lattice</code> if <code>Identifier</code> is the ARN of
     * a VPC Lattice target group.</p> </li> </ul> <p>Required if the identifier is the
     * name of a Classic Load Balancer.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Provides additional context for the value of <code>Identifier</code>.</p>
     * <p>The following lists the valid values:</p> <ul> <li> <p> <code>elb</code> if
     * <code>Identifier</code> is the name of a Classic Load Balancer.</p> </li> <li>
     * <p> <code>elbv2</code> if <code>Identifier</code> is the ARN of an Application
     * Load Balancer, Gateway Load Balancer, or Network Load Balancer target group.</p>
     * </li> <li> <p> <code>vpc-lattice</code> if <code>Identifier</code> is the ARN of
     * a VPC Lattice target group.</p> </li> </ul> <p>Required if the identifier is the
     * name of a Classic Load Balancer.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Provides additional context for the value of <code>Identifier</code>.</p>
     * <p>The following lists the valid values:</p> <ul> <li> <p> <code>elb</code> if
     * <code>Identifier</code> is the name of a Classic Load Balancer.</p> </li> <li>
     * <p> <code>elbv2</code> if <code>Identifier</code> is the ARN of an Application
     * Load Balancer, Gateway Load Balancer, or Network Load Balancer target group.</p>
     * </li> <li> <p> <code>vpc-lattice</code> if <code>Identifier</code> is the ARN of
     * a VPC Lattice target group.</p> </li> </ul> <p>Required if the identifier is the
     * name of a Classic Load Balancer.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Provides additional context for the value of <code>Identifier</code>.</p>
     * <p>The following lists the valid values:</p> <ul> <li> <p> <code>elb</code> if
     * <code>Identifier</code> is the name of a Classic Load Balancer.</p> </li> <li>
     * <p> <code>elbv2</code> if <code>Identifier</code> is the ARN of an Application
     * Load Balancer, Gateway Load Balancer, or Network Load Balancer target group.</p>
     * </li> <li> <p> <code>vpc-lattice</code> if <code>Identifier</code> is the ARN of
     * a VPC Lattice target group.</p> </li> </ul> <p>Required if the identifier is the
     * name of a Classic Load Balancer.</p>
     */
    inline TrafficSourceState& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Provides additional context for the value of <code>Identifier</code>.</p>
     * <p>The following lists the valid values:</p> <ul> <li> <p> <code>elb</code> if
     * <code>Identifier</code> is the name of a Classic Load Balancer.</p> </li> <li>
     * <p> <code>elbv2</code> if <code>Identifier</code> is the ARN of an Application
     * Load Balancer, Gateway Load Balancer, or Network Load Balancer target group.</p>
     * </li> <li> <p> <code>vpc-lattice</code> if <code>Identifier</code> is the ARN of
     * a VPC Lattice target group.</p> </li> </ul> <p>Required if the identifier is the
     * name of a Classic Load Balancer.</p>
     */
    inline TrafficSourceState& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Provides additional context for the value of <code>Identifier</code>.</p>
     * <p>The following lists the valid values:</p> <ul> <li> <p> <code>elb</code> if
     * <code>Identifier</code> is the name of a Classic Load Balancer.</p> </li> <li>
     * <p> <code>elbv2</code> if <code>Identifier</code> is the ARN of an Application
     * Load Balancer, Gateway Load Balancer, or Network Load Balancer target group.</p>
     * </li> <li> <p> <code>vpc-lattice</code> if <code>Identifier</code> is the ARN of
     * a VPC Lattice target group.</p> </li> </ul> <p>Required if the identifier is the
     * name of a Classic Load Balancer.</p>
     */
    inline TrafficSourceState& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_identifier;
    bool m_identifierHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
