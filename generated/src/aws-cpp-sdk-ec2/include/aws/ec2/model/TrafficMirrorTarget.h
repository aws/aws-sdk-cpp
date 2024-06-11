/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/TrafficMirrorTargetType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/Tag.h>
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
   * <p>Describes a Traffic Mirror target.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TrafficMirrorTarget">AWS
   * API Reference</a></p>
   */
  class TrafficMirrorTarget
  {
  public:
    AWS_EC2_API TrafficMirrorTarget();
    AWS_EC2_API TrafficMirrorTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TrafficMirrorTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline const Aws::String& GetTrafficMirrorTargetId() const{ return m_trafficMirrorTargetId; }
    inline bool TrafficMirrorTargetIdHasBeenSet() const { return m_trafficMirrorTargetIdHasBeenSet; }
    inline void SetTrafficMirrorTargetId(const Aws::String& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = value; }
    inline void SetTrafficMirrorTargetId(Aws::String&& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = std::move(value); }
    inline void SetTrafficMirrorTargetId(const char* value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId.assign(value); }
    inline TrafficMirrorTarget& WithTrafficMirrorTargetId(const Aws::String& value) { SetTrafficMirrorTargetId(value); return *this;}
    inline TrafficMirrorTarget& WithTrafficMirrorTargetId(Aws::String&& value) { SetTrafficMirrorTargetId(std::move(value)); return *this;}
    inline TrafficMirrorTarget& WithTrafficMirrorTargetId(const char* value) { SetTrafficMirrorTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface ID that is attached to the target.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }
    inline TrafficMirrorTarget& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline TrafficMirrorTarget& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline TrafficMirrorTarget& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer.</p>
     */
    inline const Aws::String& GetNetworkLoadBalancerArn() const{ return m_networkLoadBalancerArn; }
    inline bool NetworkLoadBalancerArnHasBeenSet() const { return m_networkLoadBalancerArnHasBeenSet; }
    inline void SetNetworkLoadBalancerArn(const Aws::String& value) { m_networkLoadBalancerArnHasBeenSet = true; m_networkLoadBalancerArn = value; }
    inline void SetNetworkLoadBalancerArn(Aws::String&& value) { m_networkLoadBalancerArnHasBeenSet = true; m_networkLoadBalancerArn = std::move(value); }
    inline void SetNetworkLoadBalancerArn(const char* value) { m_networkLoadBalancerArnHasBeenSet = true; m_networkLoadBalancerArn.assign(value); }
    inline TrafficMirrorTarget& WithNetworkLoadBalancerArn(const Aws::String& value) { SetNetworkLoadBalancerArn(value); return *this;}
    inline TrafficMirrorTarget& WithNetworkLoadBalancerArn(Aws::String&& value) { SetNetworkLoadBalancerArn(std::move(value)); return *this;}
    inline TrafficMirrorTarget& WithNetworkLoadBalancerArn(const char* value) { SetNetworkLoadBalancerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Traffic Mirror target.</p>
     */
    inline const TrafficMirrorTargetType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const TrafficMirrorTargetType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(TrafficMirrorTargetType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline TrafficMirrorTarget& WithType(const TrafficMirrorTargetType& value) { SetType(value); return *this;}
    inline TrafficMirrorTarget& WithType(TrafficMirrorTargetType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Traffic Mirror target.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline TrafficMirrorTarget& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline TrafficMirrorTarget& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline TrafficMirrorTarget& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that owns the Traffic Mirror target.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }
    inline TrafficMirrorTarget& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}
    inline TrafficMirrorTarget& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}
    inline TrafficMirrorTarget& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Traffic Mirror target.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline TrafficMirrorTarget& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline TrafficMirrorTarget& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline TrafficMirrorTarget& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline TrafficMirrorTarget& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Gateway Load Balancer endpoint.</p>
     */
    inline const Aws::String& GetGatewayLoadBalancerEndpointId() const{ return m_gatewayLoadBalancerEndpointId; }
    inline bool GatewayLoadBalancerEndpointIdHasBeenSet() const { return m_gatewayLoadBalancerEndpointIdHasBeenSet; }
    inline void SetGatewayLoadBalancerEndpointId(const Aws::String& value) { m_gatewayLoadBalancerEndpointIdHasBeenSet = true; m_gatewayLoadBalancerEndpointId = value; }
    inline void SetGatewayLoadBalancerEndpointId(Aws::String&& value) { m_gatewayLoadBalancerEndpointIdHasBeenSet = true; m_gatewayLoadBalancerEndpointId = std::move(value); }
    inline void SetGatewayLoadBalancerEndpointId(const char* value) { m_gatewayLoadBalancerEndpointIdHasBeenSet = true; m_gatewayLoadBalancerEndpointId.assign(value); }
    inline TrafficMirrorTarget& WithGatewayLoadBalancerEndpointId(const Aws::String& value) { SetGatewayLoadBalancerEndpointId(value); return *this;}
    inline TrafficMirrorTarget& WithGatewayLoadBalancerEndpointId(Aws::String&& value) { SetGatewayLoadBalancerEndpointId(std::move(value)); return *this;}
    inline TrafficMirrorTarget& WithGatewayLoadBalancerEndpointId(const char* value) { SetGatewayLoadBalancerEndpointId(value); return *this;}
    ///@}
  private:

    Aws::String m_trafficMirrorTargetId;
    bool m_trafficMirrorTargetIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_networkLoadBalancerArn;
    bool m_networkLoadBalancerArnHasBeenSet = false;

    TrafficMirrorTargetType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_gatewayLoadBalancerEndpointId;
    bool m_gatewayLoadBalancerEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
