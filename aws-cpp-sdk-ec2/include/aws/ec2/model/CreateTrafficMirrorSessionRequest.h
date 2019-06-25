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
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TagSpecification.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API CreateTrafficMirrorSessionRequest : public EC2Request
  {
  public:
    CreateTrafficMirrorSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTrafficMirrorSession"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the source network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the source network interface.</p>
     */
    inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }

    /**
     * <p>The ID of the source network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the source network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the source network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the source network interface.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the source network interface.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the source network interface.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


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
    inline CreateTrafficMirrorSessionRequest& WithTrafficMirrorTargetId(const Aws::String& value) { SetTrafficMirrorTargetId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithTrafficMirrorTargetId(Aws::String&& value) { SetTrafficMirrorTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror target.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithTrafficMirrorTargetId(const char* value) { SetTrafficMirrorTargetId(value); return *this;}


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
    inline CreateTrafficMirrorSessionRequest& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}


    /**
     * <p>The number of bytes in each packet to mirror. These are bytes after the VXLAN
     * header. Do not specify this parameter when you want to mirror the entire packet.
     * To mirror a subset of the packet, set this to the length (in bytes) that you
     * want to mirror. For example, if you set this value to 1network0, then the first
     * 100 bytes that meet the filter criteria are copied to the target.</p> <p>If you
     * do not want to mirror the entire packet, use the <code>PacketLength</code>
     * parameter to specify the number of bytes in each packet to mirror.</p>
     */
    inline int GetPacketLength() const{ return m_packetLength; }

    /**
     * <p>The number of bytes in each packet to mirror. These are bytes after the VXLAN
     * header. Do not specify this parameter when you want to mirror the entire packet.
     * To mirror a subset of the packet, set this to the length (in bytes) that you
     * want to mirror. For example, if you set this value to 1network0, then the first
     * 100 bytes that meet the filter criteria are copied to the target.</p> <p>If you
     * do not want to mirror the entire packet, use the <code>PacketLength</code>
     * parameter to specify the number of bytes in each packet to mirror.</p>
     */
    inline bool PacketLengthHasBeenSet() const { return m_packetLengthHasBeenSet; }

    /**
     * <p>The number of bytes in each packet to mirror. These are bytes after the VXLAN
     * header. Do not specify this parameter when you want to mirror the entire packet.
     * To mirror a subset of the packet, set this to the length (in bytes) that you
     * want to mirror. For example, if you set this value to 1network0, then the first
     * 100 bytes that meet the filter criteria are copied to the target.</p> <p>If you
     * do not want to mirror the entire packet, use the <code>PacketLength</code>
     * parameter to specify the number of bytes in each packet to mirror.</p>
     */
    inline void SetPacketLength(int value) { m_packetLengthHasBeenSet = true; m_packetLength = value; }

    /**
     * <p>The number of bytes in each packet to mirror. These are bytes after the VXLAN
     * header. Do not specify this parameter when you want to mirror the entire packet.
     * To mirror a subset of the packet, set this to the length (in bytes) that you
     * want to mirror. For example, if you set this value to 1network0, then the first
     * 100 bytes that meet the filter criteria are copied to the target.</p> <p>If you
     * do not want to mirror the entire packet, use the <code>PacketLength</code>
     * parameter to specify the number of bytes in each packet to mirror.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithPacketLength(int value) { SetPacketLength(value); return *this;}


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
    inline CreateTrafficMirrorSessionRequest& WithSessionNumber(int value) { SetSessionNumber(value); return *this;}


    /**
     * <p>The VXLAN ID for the Traffic Mirror session. For more information about the
     * VXLAN protocol, see <a href="https://tools.ietf.org/html/rfc7348">RFC 7348</a>.
     * If you do not specify a <code>VirtualNetworkId</code>, an account-wide unique id
     * is chosen at random.</p>
     */
    inline int GetVirtualNetworkId() const{ return m_virtualNetworkId; }

    /**
     * <p>The VXLAN ID for the Traffic Mirror session. For more information about the
     * VXLAN protocol, see <a href="https://tools.ietf.org/html/rfc7348">RFC 7348</a>.
     * If you do not specify a <code>VirtualNetworkId</code>, an account-wide unique id
     * is chosen at random.</p>
     */
    inline bool VirtualNetworkIdHasBeenSet() const { return m_virtualNetworkIdHasBeenSet; }

    /**
     * <p>The VXLAN ID for the Traffic Mirror session. For more information about the
     * VXLAN protocol, see <a href="https://tools.ietf.org/html/rfc7348">RFC 7348</a>.
     * If you do not specify a <code>VirtualNetworkId</code>, an account-wide unique id
     * is chosen at random.</p>
     */
    inline void SetVirtualNetworkId(int value) { m_virtualNetworkIdHasBeenSet = true; m_virtualNetworkId = value; }

    /**
     * <p>The VXLAN ID for the Traffic Mirror session. For more information about the
     * VXLAN protocol, see <a href="https://tools.ietf.org/html/rfc7348">RFC 7348</a>.
     * If you do not specify a <code>VirtualNetworkId</code>, an account-wide unique id
     * is chosen at random.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithVirtualNetworkId(int value) { SetVirtualNetworkId(value); return *this;}


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
    inline CreateTrafficMirrorSessionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the Traffic Mirror session.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The tags to assign to a Traffic Mirror session.</p>
     */
    inline const Aws::Vector<TagSpecification>& GetTagSpecifications() const{ return m_tagSpecifications; }

    /**
     * <p>The tags to assign to a Traffic Mirror session.</p>
     */
    inline bool TagSpecificationsHasBeenSet() const { return m_tagSpecificationsHasBeenSet; }

    /**
     * <p>The tags to assign to a Traffic Mirror session.</p>
     */
    inline void SetTagSpecifications(const Aws::Vector<TagSpecification>& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = value; }

    /**
     * <p>The tags to assign to a Traffic Mirror session.</p>
     */
    inline void SetTagSpecifications(Aws::Vector<TagSpecification>&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications = std::move(value); }

    /**
     * <p>The tags to assign to a Traffic Mirror session.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithTagSpecifications(const Aws::Vector<TagSpecification>& value) { SetTagSpecifications(value); return *this;}

    /**
     * <p>The tags to assign to a Traffic Mirror session.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithTagSpecifications(Aws::Vector<TagSpecification>&& value) { SetTagSpecifications(std::move(value)); return *this;}

    /**
     * <p>The tags to assign to a Traffic Mirror session.</p>
     */
    inline CreateTrafficMirrorSessionRequest& AddTagSpecifications(const TagSpecification& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(value); return *this; }

    /**
     * <p>The tags to assign to a Traffic Mirror session.</p>
     */
    inline CreateTrafficMirrorSessionRequest& AddTagSpecifications(TagSpecification&& value) { m_tagSpecificationsHasBeenSet = true; m_tagSpecifications.push_back(std::move(value)); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier that you provide to ensure the idempotency
     * of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">How
     * to Ensure Idempotency</a>.</p>
     */
    inline CreateTrafficMirrorSessionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_trafficMirrorTargetId;
    bool m_trafficMirrorTargetIdHasBeenSet;

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet;

    int m_packetLength;
    bool m_packetLengthHasBeenSet;

    int m_sessionNumber;
    bool m_sessionNumberHasBeenSet;

    int m_virtualNetworkId;
    bool m_virtualNetworkIdHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::Vector<TagSpecification> m_tagSpecifications;
    bool m_tagSpecificationsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
