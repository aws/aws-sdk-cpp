/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a Traffic Mirror session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TrafficMirrorSession">AWS
   * API Reference</a></p>
   */
  class TrafficMirrorSession
  {
  public:
    AWS_EC2_API TrafficMirrorSession() = default;
    AWS_EC2_API TrafficMirrorSession(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TrafficMirrorSession& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID for the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetTrafficMirrorSessionId() const { return m_trafficMirrorSessionId; }
    inline bool TrafficMirrorSessionIdHasBeenSet() const { return m_trafficMirrorSessionIdHasBeenSet; }
    template<typename TrafficMirrorSessionIdT = Aws::String>
    void SetTrafficMirrorSessionId(TrafficMirrorSessionIdT&& value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId = std::forward<TrafficMirrorSessionIdT>(value); }
    template<typename TrafficMirrorSessionIdT = Aws::String>
    TrafficMirrorSession& WithTrafficMirrorSessionId(TrafficMirrorSessionIdT&& value) { SetTrafficMirrorSessionId(std::forward<TrafficMirrorSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline const Aws::String& GetTrafficMirrorTargetId() const { return m_trafficMirrorTargetId; }
    inline bool TrafficMirrorTargetIdHasBeenSet() const { return m_trafficMirrorTargetIdHasBeenSet; }
    template<typename TrafficMirrorTargetIdT = Aws::String>
    void SetTrafficMirrorTargetId(TrafficMirrorTargetIdT&& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = std::forward<TrafficMirrorTargetIdT>(value); }
    template<typename TrafficMirrorTargetIdT = Aws::String>
    TrafficMirrorSession& WithTrafficMirrorTargetId(TrafficMirrorTargetIdT&& value) { SetTrafficMirrorTargetId(std::forward<TrafficMirrorTargetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const { return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    void SetTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::forward<TrafficMirrorFilterIdT>(value); }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    TrafficMirrorSession& WithTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { SetTrafficMirrorFilterId(std::forward<TrafficMirrorFilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Traffic Mirror session's network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    TrafficMirrorSession& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the account that owns the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetOwnerId() const { return m_ownerId; }
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }
    template<typename OwnerIdT = Aws::String>
    void SetOwnerId(OwnerIdT&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::forward<OwnerIdT>(value); }
    template<typename OwnerIdT = Aws::String>
    TrafficMirrorSession& WithOwnerId(OwnerIdT&& value) { SetOwnerId(std::forward<OwnerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes in each packet to mirror. These are the bytes after the
     * VXLAN header. To mirror a subset, set this to the length (in bytes) to mirror.
     * For example, if you set this value to 100, then the first 100 bytes that meet
     * the filter criteria are copied to the target. Do not specify this parameter when
     * you want to mirror the entire packet</p>
     */
    inline int GetPacketLength() const { return m_packetLength; }
    inline bool PacketLengthHasBeenSet() const { return m_packetLengthHasBeenSet; }
    inline void SetPacketLength(int value) { m_packetLengthHasBeenSet = true; m_packetLength = value; }
    inline TrafficMirrorSession& WithPacketLength(int value) { SetPacketLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The session number determines the order in which sessions are evaluated when
     * an interface is used by multiple sessions. The first session with a matching
     * filter is the one that mirrors the packets.</p> <p>Valid values are 1-32766.</p>
     */
    inline int GetSessionNumber() const { return m_sessionNumber; }
    inline bool SessionNumberHasBeenSet() const { return m_sessionNumberHasBeenSet; }
    inline void SetSessionNumber(int value) { m_sessionNumberHasBeenSet = true; m_sessionNumber = value; }
    inline TrafficMirrorSession& WithSessionNumber(int value) { SetSessionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual network ID associated with the Traffic Mirror session.</p>
     */
    inline int GetVirtualNetworkId() const { return m_virtualNetworkId; }
    inline bool VirtualNetworkIdHasBeenSet() const { return m_virtualNetworkIdHasBeenSet; }
    inline void SetVirtualNetworkId(int value) { m_virtualNetworkIdHasBeenSet = true; m_virtualNetworkId = value; }
    inline TrafficMirrorSession& WithVirtualNetworkId(int value) { SetVirtualNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    TrafficMirrorSession& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tags assigned to the Traffic Mirror session.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    TrafficMirrorSession& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    TrafficMirrorSession& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_trafficMirrorSessionId;
    bool m_trafficMirrorSessionIdHasBeenSet = false;

    Aws::String m_trafficMirrorTargetId;
    bool m_trafficMirrorTargetIdHasBeenSet = false;

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;

    int m_packetLength{0};
    bool m_packetLengthHasBeenSet = false;

    int m_sessionNumber{0};
    bool m_sessionNumberHasBeenSet = false;

    int m_virtualNetworkId{0};
    bool m_virtualNetworkIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
