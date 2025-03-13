/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/TrafficMirrorSessionField.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ModifyTrafficMirrorSessionRequest : public EC2Request
  {
  public:
    AWS_EC2_API ModifyTrafficMirrorSessionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTrafficMirrorSession"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetTrafficMirrorSessionId() const { return m_trafficMirrorSessionId; }
    inline bool TrafficMirrorSessionIdHasBeenSet() const { return m_trafficMirrorSessionIdHasBeenSet; }
    template<typename TrafficMirrorSessionIdT = Aws::String>
    void SetTrafficMirrorSessionId(TrafficMirrorSessionIdT&& value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId = std::forward<TrafficMirrorSessionIdT>(value); }
    template<typename TrafficMirrorSessionIdT = Aws::String>
    ModifyTrafficMirrorSessionRequest& WithTrafficMirrorSessionId(TrafficMirrorSessionIdT&& value) { SetTrafficMirrorSessionId(std::forward<TrafficMirrorSessionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Traffic Mirror target. The target must be in the same VPC as the source,
     * or have a VPC peering connection with the source.</p>
     */
    inline const Aws::String& GetTrafficMirrorTargetId() const { return m_trafficMirrorTargetId; }
    inline bool TrafficMirrorTargetIdHasBeenSet() const { return m_trafficMirrorTargetIdHasBeenSet; }
    template<typename TrafficMirrorTargetIdT = Aws::String>
    void SetTrafficMirrorTargetId(TrafficMirrorTargetIdT&& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = std::forward<TrafficMirrorTargetIdT>(value); }
    template<typename TrafficMirrorTargetIdT = Aws::String>
    ModifyTrafficMirrorSessionRequest& WithTrafficMirrorTargetId(TrafficMirrorTargetIdT&& value) { SetTrafficMirrorTargetId(std::forward<TrafficMirrorTargetIdT>(value)); return *this;}
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
    ModifyTrafficMirrorSessionRequest& WithTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { SetTrafficMirrorFilterId(std::forward<TrafficMirrorFilterIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of bytes in each packet to mirror. These are bytes after the VXLAN
     * header. To mirror a subset, set this to the length (in bytes) to mirror. For
     * example, if you set this value to 100, then the first 100 bytes that meet the
     * filter criteria are copied to the target. Do not specify this parameter when you
     * want to mirror the entire packet.</p> <p>For sessions with Network Load Balancer
     * (NLB) traffic mirror targets, the default <code>PacketLength</code> will be set
     * to 8500. Valid values are 1-8500. Setting a <code>PacketLength</code> greater
     * than 8500 will result in an error response.</p>
     */
    inline int GetPacketLength() const { return m_packetLength; }
    inline bool PacketLengthHasBeenSet() const { return m_packetLengthHasBeenSet; }
    inline void SetPacketLength(int value) { m_packetLengthHasBeenSet = true; m_packetLength = value; }
    inline ModifyTrafficMirrorSessionRequest& WithPacketLength(int value) { SetPacketLength(value); return *this;}
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
    inline ModifyTrafficMirrorSessionRequest& WithSessionNumber(int value) { SetSessionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual network ID of the Traffic Mirror session.</p>
     */
    inline int GetVirtualNetworkId() const { return m_virtualNetworkId; }
    inline bool VirtualNetworkIdHasBeenSet() const { return m_virtualNetworkIdHasBeenSet; }
    inline void SetVirtualNetworkId(int value) { m_virtualNetworkIdHasBeenSet = true; m_virtualNetworkId = value; }
    inline ModifyTrafficMirrorSessionRequest& WithVirtualNetworkId(int value) { SetVirtualNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to assign to the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ModifyTrafficMirrorSessionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties that you want to remove from the Traffic Mirror session.</p>
     * <p>When you remove a property from a Traffic Mirror session, the property is set
     * to the default.</p>
     */
    inline const Aws::Vector<TrafficMirrorSessionField>& GetRemoveFields() const { return m_removeFields; }
    inline bool RemoveFieldsHasBeenSet() const { return m_removeFieldsHasBeenSet; }
    template<typename RemoveFieldsT = Aws::Vector<TrafficMirrorSessionField>>
    void SetRemoveFields(RemoveFieldsT&& value) { m_removeFieldsHasBeenSet = true; m_removeFields = std::forward<RemoveFieldsT>(value); }
    template<typename RemoveFieldsT = Aws::Vector<TrafficMirrorSessionField>>
    ModifyTrafficMirrorSessionRequest& WithRemoveFields(RemoveFieldsT&& value) { SetRemoveFields(std::forward<RemoveFieldsT>(value)); return *this;}
    inline ModifyTrafficMirrorSessionRequest& AddRemoveFields(TrafficMirrorSessionField value) { m_removeFieldsHasBeenSet = true; m_removeFields.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ModifyTrafficMirrorSessionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_trafficMirrorSessionId;
    bool m_trafficMirrorSessionIdHasBeenSet = false;

    Aws::String m_trafficMirrorTargetId;
    bool m_trafficMirrorTargetIdHasBeenSet = false;

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet = false;

    int m_packetLength{0};
    bool m_packetLengthHasBeenSet = false;

    int m_sessionNumber{0};
    bool m_sessionNumberHasBeenSet = false;

    int m_virtualNetworkId{0};
    bool m_virtualNetworkIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<TrafficMirrorSessionField> m_removeFields;
    bool m_removeFieldsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
