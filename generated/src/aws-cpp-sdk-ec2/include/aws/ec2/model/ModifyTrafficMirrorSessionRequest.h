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
    AWS_EC2_API ModifyTrafficMirrorSessionRequest();

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
    inline const Aws::String& GetTrafficMirrorSessionId() const{ return m_trafficMirrorSessionId; }
    inline bool TrafficMirrorSessionIdHasBeenSet() const { return m_trafficMirrorSessionIdHasBeenSet; }
    inline void SetTrafficMirrorSessionId(const Aws::String& value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId = value; }
    inline void SetTrafficMirrorSessionId(Aws::String&& value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId = std::move(value); }
    inline void SetTrafficMirrorSessionId(const char* value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId.assign(value); }
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorSessionId(const Aws::String& value) { SetTrafficMirrorSessionId(value); return *this;}
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorSessionId(Aws::String&& value) { SetTrafficMirrorSessionId(std::move(value)); return *this;}
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorSessionId(const char* value) { SetTrafficMirrorSessionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Traffic Mirror target. The target must be in the same VPC as the source,
     * or have a VPC peering connection with the source.</p>
     */
    inline const Aws::String& GetTrafficMirrorTargetId() const{ return m_trafficMirrorTargetId; }
    inline bool TrafficMirrorTargetIdHasBeenSet() const { return m_trafficMirrorTargetIdHasBeenSet; }
    inline void SetTrafficMirrorTargetId(const Aws::String& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = value; }
    inline void SetTrafficMirrorTargetId(Aws::String&& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = std::move(value); }
    inline void SetTrafficMirrorTargetId(const char* value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId.assign(value); }
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorTargetId(const Aws::String& value) { SetTrafficMirrorTargetId(value); return *this;}
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorTargetId(Aws::String&& value) { SetTrafficMirrorTargetId(std::move(value)); return *this;}
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorTargetId(const char* value) { SetTrafficMirrorTargetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const{ return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    inline void SetTrafficMirrorFilterId(const Aws::String& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = value; }
    inline void SetTrafficMirrorFilterId(Aws::String&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::move(value); }
    inline void SetTrafficMirrorFilterId(const char* value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId.assign(value); }
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}
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
    inline int GetPacketLength() const{ return m_packetLength; }
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
    inline int GetSessionNumber() const{ return m_sessionNumber; }
    inline bool SessionNumberHasBeenSet() const { return m_sessionNumberHasBeenSet; }
    inline void SetSessionNumber(int value) { m_sessionNumberHasBeenSet = true; m_sessionNumber = value; }
    inline ModifyTrafficMirrorSessionRequest& WithSessionNumber(int value) { SetSessionNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The virtual network ID of the Traffic Mirror session.</p>
     */
    inline int GetVirtualNetworkId() const{ return m_virtualNetworkId; }
    inline bool VirtualNetworkIdHasBeenSet() const { return m_virtualNetworkIdHasBeenSet; }
    inline void SetVirtualNetworkId(int value) { m_virtualNetworkIdHasBeenSet = true; m_virtualNetworkId = value; }
    inline ModifyTrafficMirrorSessionRequest& WithVirtualNetworkId(int value) { SetVirtualNetworkId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description to assign to the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline ModifyTrafficMirrorSessionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline ModifyTrafficMirrorSessionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline ModifyTrafficMirrorSessionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The properties that you want to remove from the Traffic Mirror session.</p>
     * <p>When you remove a property from a Traffic Mirror session, the property is set
     * to the default.</p>
     */
    inline const Aws::Vector<TrafficMirrorSessionField>& GetRemoveFields() const{ return m_removeFields; }
    inline bool RemoveFieldsHasBeenSet() const { return m_removeFieldsHasBeenSet; }
    inline void SetRemoveFields(const Aws::Vector<TrafficMirrorSessionField>& value) { m_removeFieldsHasBeenSet = true; m_removeFields = value; }
    inline void SetRemoveFields(Aws::Vector<TrafficMirrorSessionField>&& value) { m_removeFieldsHasBeenSet = true; m_removeFields = std::move(value); }
    inline ModifyTrafficMirrorSessionRequest& WithRemoveFields(const Aws::Vector<TrafficMirrorSessionField>& value) { SetRemoveFields(value); return *this;}
    inline ModifyTrafficMirrorSessionRequest& WithRemoveFields(Aws::Vector<TrafficMirrorSessionField>&& value) { SetRemoveFields(std::move(value)); return *this;}
    inline ModifyTrafficMirrorSessionRequest& AddRemoveFields(const TrafficMirrorSessionField& value) { m_removeFieldsHasBeenSet = true; m_removeFields.push_back(value); return *this; }
    inline ModifyTrafficMirrorSessionRequest& AddRemoveFields(TrafficMirrorSessionField&& value) { m_removeFieldsHasBeenSet = true; m_removeFields.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
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

    int m_packetLength;
    bool m_packetLengthHasBeenSet = false;

    int m_sessionNumber;
    bool m_sessionNumberHasBeenSet = false;

    int m_virtualNetworkId;
    bool m_virtualNetworkIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<TrafficMirrorSessionField> m_removeFields;
    bool m_removeFieldsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
