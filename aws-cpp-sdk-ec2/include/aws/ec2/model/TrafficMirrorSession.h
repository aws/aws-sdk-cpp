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
  class AWS_EC2_API TrafficMirrorSession
  {
  public:
    TrafficMirrorSession();
    TrafficMirrorSession(const Aws::Utils::Xml::XmlNode& xmlNode);
    TrafficMirrorSession& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID for the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetTrafficMirrorSessionId() const{ return m_trafficMirrorSessionId; }

    /**
     * <p>The ID for the Traffic Mirror session.</p>
     */
    inline bool TrafficMirrorSessionIdHasBeenSet() const { return m_trafficMirrorSessionIdHasBeenSet; }

    /**
     * <p>The ID for the Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSessionId(const Aws::String& value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId = value; }

    /**
     * <p>The ID for the Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSessionId(Aws::String&& value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId = std::move(value); }

    /**
     * <p>The ID for the Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSessionId(const char* value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId.assign(value); }

    /**
     * <p>The ID for the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithTrafficMirrorSessionId(const Aws::String& value) { SetTrafficMirrorSessionId(value); return *this;}

    /**
     * <p>The ID for the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithTrafficMirrorSessionId(Aws::String&& value) { SetTrafficMirrorSessionId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithTrafficMirrorSessionId(const char* value) { SetTrafficMirrorSessionId(value); return *this;}


    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline const Aws::String& GetTrafficMirrorTargetId() const{ return m_trafficMirrorTargetId; }

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline bool TrafficMirrorTargetIdHasBeenSet() const { return m_trafficMirrorTargetIdHasBeenSet; }

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline void SetTrafficMirrorTargetId(const Aws::String& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = value; }

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline void SetTrafficMirrorTargetId(Aws::String&& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = std::move(value); }

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline void SetTrafficMirrorTargetId(const char* value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId.assign(value); }

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline TrafficMirrorSession& WithTrafficMirrorTargetId(const Aws::String& value) { SetTrafficMirrorTargetId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline TrafficMirrorSession& WithTrafficMirrorTargetId(Aws::String&& value) { SetTrafficMirrorTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline TrafficMirrorSession& WithTrafficMirrorTargetId(const char* value) { SetTrafficMirrorTargetId(value); return *this;}


    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const{ return m_trafficMirrorFilterId; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterId(const Aws::String& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = value; }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterId(Aws::String&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::move(value); }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline void SetTrafficMirrorFilterId(const char* value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId.assign(value); }

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorSession& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorSession& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline TrafficMirrorSession& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}


    /**
     * <p>The ID of the Traffic Mirror session's network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the Traffic Mirror session's network interface.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the Traffic Mirror session's network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the Traffic Mirror session's network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the Traffic Mirror session's network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the Traffic Mirror session's network interface.</p>
     */
    inline TrafficMirrorSession& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror session's network interface.</p>
     */
    inline TrafficMirrorSession& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror session's network interface.</p>
     */
    inline TrafficMirrorSession& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The ID of the account that owns the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the account that owns the Traffic Mirror session.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the account that owns the Traffic Mirror session.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the account that owns the Traffic Mirror session.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the account that owns the Traffic Mirror session.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the account that owns the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the account that owns the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the account that owns the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}


    /**
     * <p>The number of bytes in each packet to mirror. These are the bytes after the
     * VXLAN header. To mirror a subset, set this to the length (in bytes) to mirror.
     * For example, if you set this value to 100, then the first 100 bytes that meet
     * the filter criteria are copied to the target. Do not specify this parameter when
     * you want to mirror the entire packet</p>
     */
    inline int GetPacketLength() const{ return m_packetLength; }

    /**
     * <p>The number of bytes in each packet to mirror. These are the bytes after the
     * VXLAN header. To mirror a subset, set this to the length (in bytes) to mirror.
     * For example, if you set this value to 100, then the first 100 bytes that meet
     * the filter criteria are copied to the target. Do not specify this parameter when
     * you want to mirror the entire packet</p>
     */
    inline bool PacketLengthHasBeenSet() const { return m_packetLengthHasBeenSet; }

    /**
     * <p>The number of bytes in each packet to mirror. These are the bytes after the
     * VXLAN header. To mirror a subset, set this to the length (in bytes) to mirror.
     * For example, if you set this value to 100, then the first 100 bytes that meet
     * the filter criteria are copied to the target. Do not specify this parameter when
     * you want to mirror the entire packet</p>
     */
    inline void SetPacketLength(int value) { m_packetLengthHasBeenSet = true; m_packetLength = value; }

    /**
     * <p>The number of bytes in each packet to mirror. These are the bytes after the
     * VXLAN header. To mirror a subset, set this to the length (in bytes) to mirror.
     * For example, if you set this value to 100, then the first 100 bytes that meet
     * the filter criteria are copied to the target. Do not specify this parameter when
     * you want to mirror the entire packet</p>
     */
    inline TrafficMirrorSession& WithPacketLength(int value) { SetPacketLength(value); return *this;}


    /**
     * <p>The session number determines the order in which sessions are evaluated when
     * an interface is used by multiple sessions. The first session with a matching
     * filter is the one that mirrors the packets.</p> <p>Valid values are 1-32766.</p>
     */
    inline int GetSessionNumber() const{ return m_sessionNumber; }

    /**
     * <p>The session number determines the order in which sessions are evaluated when
     * an interface is used by multiple sessions. The first session with a matching
     * filter is the one that mirrors the packets.</p> <p>Valid values are 1-32766.</p>
     */
    inline bool SessionNumberHasBeenSet() const { return m_sessionNumberHasBeenSet; }

    /**
     * <p>The session number determines the order in which sessions are evaluated when
     * an interface is used by multiple sessions. The first session with a matching
     * filter is the one that mirrors the packets.</p> <p>Valid values are 1-32766.</p>
     */
    inline void SetSessionNumber(int value) { m_sessionNumberHasBeenSet = true; m_sessionNumber = value; }

    /**
     * <p>The session number determines the order in which sessions are evaluated when
     * an interface is used by multiple sessions. The first session with a matching
     * filter is the one that mirrors the packets.</p> <p>Valid values are 1-32766.</p>
     */
    inline TrafficMirrorSession& WithSessionNumber(int value) { SetSessionNumber(value); return *this;}


    /**
     * <p>The virtual network ID associated with the Traffic Mirror session.</p>
     */
    inline int GetVirtualNetworkId() const{ return m_virtualNetworkId; }

    /**
     * <p>The virtual network ID associated with the Traffic Mirror session.</p>
     */
    inline bool VirtualNetworkIdHasBeenSet() const { return m_virtualNetworkIdHasBeenSet; }

    /**
     * <p>The virtual network ID associated with the Traffic Mirror session.</p>
     */
    inline void SetVirtualNetworkId(int value) { m_virtualNetworkIdHasBeenSet = true; m_virtualNetworkId = value; }

    /**
     * <p>The virtual network ID associated with the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithVirtualNetworkId(int value) { SetVirtualNetworkId(value); return *this;}


    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags assigned to the Traffic Mirror session.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the Traffic Mirror session.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the Traffic Mirror session.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the Traffic Mirror session.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags assigned to the Traffic Mirror session.</p>
     */
    inline TrafficMirrorSession& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_trafficMirrorSessionId;
    bool m_trafficMirrorSessionIdHasBeenSet;

    Aws::String m_trafficMirrorTargetId;
    bool m_trafficMirrorTargetIdHasBeenSet;

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet;

    int m_packetLength;
    bool m_packetLengthHasBeenSet;

    int m_sessionNumber;
    bool m_sessionNumberHasBeenSet;

    int m_virtualNetworkId;
    bool m_virtualNetworkIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
