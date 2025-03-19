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
    AWS_EC2_API TrafficMirrorTarget() = default;
    AWS_EC2_API TrafficMirrorTarget(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TrafficMirrorTarget& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline const Aws::String& GetTrafficMirrorTargetId() const { return m_trafficMirrorTargetId; }
    inline bool TrafficMirrorTargetIdHasBeenSet() const { return m_trafficMirrorTargetIdHasBeenSet; }
    template<typename TrafficMirrorTargetIdT = Aws::String>
    void SetTrafficMirrorTargetId(TrafficMirrorTargetIdT&& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = std::forward<TrafficMirrorTargetIdT>(value); }
    template<typename TrafficMirrorTargetIdT = Aws::String>
    TrafficMirrorTarget& WithTrafficMirrorTargetId(TrafficMirrorTargetIdT&& value) { SetTrafficMirrorTargetId(std::forward<TrafficMirrorTargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface ID that is attached to the target.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    TrafficMirrorTarget& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Network Load Balancer.</p>
     */
    inline const Aws::String& GetNetworkLoadBalancerArn() const { return m_networkLoadBalancerArn; }
    inline bool NetworkLoadBalancerArnHasBeenSet() const { return m_networkLoadBalancerArnHasBeenSet; }
    template<typename NetworkLoadBalancerArnT = Aws::String>
    void SetNetworkLoadBalancerArn(NetworkLoadBalancerArnT&& value) { m_networkLoadBalancerArnHasBeenSet = true; m_networkLoadBalancerArn = std::forward<NetworkLoadBalancerArnT>(value); }
    template<typename NetworkLoadBalancerArnT = Aws::String>
    TrafficMirrorTarget& WithNetworkLoadBalancerArn(NetworkLoadBalancerArnT&& value) { SetNetworkLoadBalancerArn(std::forward<NetworkLoadBalancerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Traffic Mirror target.</p>
     */
    inline TrafficMirrorTargetType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TrafficMirrorTargetType value) { m_typeHasBeenSet = true; m_type = value; }
    inline TrafficMirrorTarget& WithType(TrafficMirrorTargetType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Traffic Mirror target.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TrafficMirrorTarget& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that owns the Traffic Mirror target.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    TrafficMirrorTarget& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Traffic Mirror target.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TrafficMirrorTarget& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TrafficMirrorTarget& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the Gateway Load Balancer endpoint.</p>
     */
    inline const Aws::String& GetGatewayLoadBalancerEndpointId() const { return m_gatewayLoadBalancerEndpointId; }
    inline bool GatewayLoadBalancerEndpointIdHasBeenSet() const { return m_gatewayLoadBalancerEndpointIdHasBeenSet; }
    template<typename GatewayLoadBalancerEndpointIdT = Aws::String>
    void SetGatewayLoadBalancerEndpointId(GatewayLoadBalancerEndpointIdT&& value) { m_gatewayLoadBalancerEndpointIdHasBeenSet = true; m_gatewayLoadBalancerEndpointId = std::forward<GatewayLoadBalancerEndpointIdT>(value); }
    template<typename GatewayLoadBalancerEndpointIdT = Aws::String>
    TrafficMirrorTarget& WithGatewayLoadBalancerEndpointId(GatewayLoadBalancerEndpointIdT&& value) { SetGatewayLoadBalancerEndpointId(std::forward<GatewayLoadBalancerEndpointIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trafficMirrorTargetId;
    bool m_trafficMirrorTargetIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_networkLoadBalancerArn;
    bool m_networkLoadBalancerArnHasBeenSet = false;

    TrafficMirrorTargetType m_type{TrafficMirrorTargetType::NOT_SET};
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
