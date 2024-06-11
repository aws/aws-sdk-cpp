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
   * <p>Information about a target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/TargetDescription">AWS
   * API Reference</a></p>
   */
  class TargetDescription
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API TargetDescription();
    AWS_ELASTICLOADBALANCINGV2_API TargetDescription(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API TargetDescription& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the target. If the target type of the target group is
     * <code>instance</code>, specify an instance ID. If the target type is
     * <code>ip</code>, specify an IP address. If the target type is
     * <code>lambda</code>, specify the ARN of the Lambda function. If the target type
     * is <code>alb</code>, specify the ARN of the Application Load Balancer target.
     * </p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TargetDescription& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TargetDescription& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TargetDescription& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port on which the target is listening. If the target group protocol is
     * GENEVE, the supported port is 6081. If the target type is <code>alb</code>, the
     * targeted Application Load Balancer must have at least one listener whose port
     * matches the target group port. This parameter is not used if the target is a
     * Lambda function.</p>
     */
    inline int GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(int value) { m_portHasBeenSet = true; m_port = value; }
    inline TargetDescription& WithPort(int value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An Availability Zone or <code>all</code>. This determines whether the target
     * receives traffic from the load balancer nodes in the specified Availability Zone
     * or from all enabled Availability Zones for the load balancer.</p> <p>For
     * Application Load Balancer target groups, the specified Availability Zone value
     * is only applicable when cross-zone load balancing is off. Otherwise the
     * parameter is ignored and treated as <code>all</code>.</p> <p>This parameter is
     * not supported if the target type of the target group is <code>instance</code> or
     * <code>alb</code>.</p> <p>If the target type is <code>ip</code> and the IP
     * address is in a subnet of the VPC for the target group, the Availability Zone is
     * automatically detected and this parameter is optional. If the IP address is
     * outside the VPC, this parameter is required.</p> <p>For Application Load
     * Balancer target groups with cross-zone load balancing off, if the target type is
     * <code>ip</code> and the IP address is outside of the VPC for the target group,
     * this should be an Availability Zone inside the VPC for the target group.</p>
     * <p>If the target type is <code>lambda</code>, this parameter is optional and the
     * only supported value is <code>all</code>.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline TargetDescription& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline TargetDescription& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline TargetDescription& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    int m_port;
    bool m_portHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
