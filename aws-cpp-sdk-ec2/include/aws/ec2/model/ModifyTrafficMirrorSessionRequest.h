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
  class AWS_EC2_API ModifyTrafficMirrorSessionRequest : public EC2Request
  {
  public:
    ModifyTrafficMirrorSessionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ModifyTrafficMirrorSession"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetTrafficMirrorSessionId() const{ return m_trafficMirrorSessionId; }

    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline bool TrafficMirrorSessionIdHasBeenSet() const { return m_trafficMirrorSessionIdHasBeenSet; }

    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSessionId(const Aws::String& value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId = value; }

    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSessionId(Aws::String&& value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId = std::move(value); }

    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline void SetTrafficMirrorSessionId(const char* value) { m_trafficMirrorSessionIdHasBeenSet = true; m_trafficMirrorSessionId.assign(value); }

    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorSessionId(const Aws::String& value) { SetTrafficMirrorSessionId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorSessionId(Aws::String&& value) { SetTrafficMirrorSessionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorSessionId(const char* value) { SetTrafficMirrorSessionId(value); return *this;}


    /**
     * <p>The Traffic Mirror target. The target must be in the same VPC as the source,
     * or have a VPC peering connection with the source.</p>
     */
    inline const Aws::String& GetTrafficMirrorTargetId() const{ return m_trafficMirrorTargetId; }

    /**
     * <p>The Traffic Mirror target. The target must be in the same VPC as the source,
     * or have a VPC peering connection with the source.</p>
     */
    inline bool TrafficMirrorTargetIdHasBeenSet() const { return m_trafficMirrorTargetIdHasBeenSet; }

    /**
     * <p>The Traffic Mirror target. The target must be in the same VPC as the source,
     * or have a VPC peering connection with the source.</p>
     */
    inline void SetTrafficMirrorTargetId(const Aws::String& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = value; }

    /**
     * <p>The Traffic Mirror target. The target must be in the same VPC as the source,
     * or have a VPC peering connection with the source.</p>
     */
    inline void SetTrafficMirrorTargetId(Aws::String&& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = std::move(value); }

    /**
     * <p>The Traffic Mirror target. The target must be in the same VPC as the source,
     * or have a VPC peering connection with the source.</p>
     */
    inline void SetTrafficMirrorTargetId(const char* value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId.assign(value); }

    /**
     * <p>The Traffic Mirror target. The target must be in the same VPC as the source,
     * or have a VPC peering connection with the source.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorTargetId(const Aws::String& value) { SetTrafficMirrorTargetId(value); return *this;}

    /**
     * <p>The Traffic Mirror target. The target must be in the same VPC as the source,
     * or have a VPC peering connection with the source.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorTargetId(Aws::String&& value) { SetTrafficMirrorTargetId(std::move(value)); return *this;}

    /**
     * <p>The Traffic Mirror target. The target must be in the same VPC as the source,
     * or have a VPC peering connection with the source.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorTargetId(const char* value) { SetTrafficMirrorTargetId(value); return *this;}


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
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Traffic Mirror filter.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}


    /**
     * <p>The number of bytes in each packet to mirror. These are bytes after the VXLAN
     * header. To mirror a subset, set this to the length (in bytes) to mirror. For
     * example, if you set this value to 100, then the first 100 bytes that meet the
     * filter criteria are copied to the target. Do not specify this parameter when you
     * want to mirror the entire packet.</p>
     */
    inline int GetPacketLength() const{ return m_packetLength; }

    /**
     * <p>The number of bytes in each packet to mirror. These are bytes after the VXLAN
     * header. To mirror a subset, set this to the length (in bytes) to mirror. For
     * example, if you set this value to 100, then the first 100 bytes that meet the
     * filter criteria are copied to the target. Do not specify this parameter when you
     * want to mirror the entire packet.</p>
     */
    inline bool PacketLengthHasBeenSet() const { return m_packetLengthHasBeenSet; }

    /**
     * <p>The number of bytes in each packet to mirror. These are bytes after the VXLAN
     * header. To mirror a subset, set this to the length (in bytes) to mirror. For
     * example, if you set this value to 100, then the first 100 bytes that meet the
     * filter criteria are copied to the target. Do not specify this parameter when you
     * want to mirror the entire packet.</p>
     */
    inline void SetPacketLength(int value) { m_packetLengthHasBeenSet = true; m_packetLength = value; }

    /**
     * <p>The number of bytes in each packet to mirror. These are bytes after the VXLAN
     * header. To mirror a subset, set this to the length (in bytes) to mirror. For
     * example, if you set this value to 100, then the first 100 bytes that meet the
     * filter criteria are copied to the target. Do not specify this parameter when you
     * want to mirror the entire packet.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithPacketLength(int value) { SetPacketLength(value); return *this;}


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
    inline ModifyTrafficMirrorSessionRequest& WithSessionNumber(int value) { SetSessionNumber(value); return *this;}


    /**
     * <p>The virtual network ID of the Traffic Mirror session.</p>
     */
    inline int GetVirtualNetworkId() const{ return m_virtualNetworkId; }

    /**
     * <p>The virtual network ID of the Traffic Mirror session.</p>
     */
    inline bool VirtualNetworkIdHasBeenSet() const { return m_virtualNetworkIdHasBeenSet; }

    /**
     * <p>The virtual network ID of the Traffic Mirror session.</p>
     */
    inline void SetVirtualNetworkId(int value) { m_virtualNetworkIdHasBeenSet = true; m_virtualNetworkId = value; }

    /**
     * <p>The virtual network ID of the Traffic Mirror session.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithVirtualNetworkId(int value) { SetVirtualNetworkId(value); return *this;}


    /**
     * <p>The description to assign to the Traffic Mirror session.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description to assign to the Traffic Mirror session.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description to assign to the Traffic Mirror session.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description to assign to the Traffic Mirror session.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description to assign to the Traffic Mirror session.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description to assign to the Traffic Mirror session.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description to assign to the Traffic Mirror session.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description to assign to the Traffic Mirror session.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The properties that you want to remove from the Traffic Mirror session.</p>
     * <p>When you remove a property from a Traffic Mirror session, the property is set
     * to the default.</p>
     */
    inline const Aws::Vector<TrafficMirrorSessionField>& GetRemoveFields() const{ return m_removeFields; }

    /**
     * <p>The properties that you want to remove from the Traffic Mirror session.</p>
     * <p>When you remove a property from a Traffic Mirror session, the property is set
     * to the default.</p>
     */
    inline bool RemoveFieldsHasBeenSet() const { return m_removeFieldsHasBeenSet; }

    /**
     * <p>The properties that you want to remove from the Traffic Mirror session.</p>
     * <p>When you remove a property from a Traffic Mirror session, the property is set
     * to the default.</p>
     */
    inline void SetRemoveFields(const Aws::Vector<TrafficMirrorSessionField>& value) { m_removeFieldsHasBeenSet = true; m_removeFields = value; }

    /**
     * <p>The properties that you want to remove from the Traffic Mirror session.</p>
     * <p>When you remove a property from a Traffic Mirror session, the property is set
     * to the default.</p>
     */
    inline void SetRemoveFields(Aws::Vector<TrafficMirrorSessionField>&& value) { m_removeFieldsHasBeenSet = true; m_removeFields = std::move(value); }

    /**
     * <p>The properties that you want to remove from the Traffic Mirror session.</p>
     * <p>When you remove a property from a Traffic Mirror session, the property is set
     * to the default.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithRemoveFields(const Aws::Vector<TrafficMirrorSessionField>& value) { SetRemoveFields(value); return *this;}

    /**
     * <p>The properties that you want to remove from the Traffic Mirror session.</p>
     * <p>When you remove a property from a Traffic Mirror session, the property is set
     * to the default.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& WithRemoveFields(Aws::Vector<TrafficMirrorSessionField>&& value) { SetRemoveFields(std::move(value)); return *this;}

    /**
     * <p>The properties that you want to remove from the Traffic Mirror session.</p>
     * <p>When you remove a property from a Traffic Mirror session, the property is set
     * to the default.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& AddRemoveFields(const TrafficMirrorSessionField& value) { m_removeFieldsHasBeenSet = true; m_removeFields.push_back(value); return *this; }

    /**
     * <p>The properties that you want to remove from the Traffic Mirror session.</p>
     * <p>When you remove a property from a Traffic Mirror session, the property is set
     * to the default.</p>
     */
    inline ModifyTrafficMirrorSessionRequest& AddRemoveFields(TrafficMirrorSessionField&& value) { m_removeFieldsHasBeenSet = true; m_removeFields.push_back(std::move(value)); return *this; }


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
    inline ModifyTrafficMirrorSessionRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_trafficMirrorSessionId;
    bool m_trafficMirrorSessionIdHasBeenSet;

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

    Aws::Vector<TrafficMirrorSessionField> m_removeFields;
    bool m_removeFieldsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
