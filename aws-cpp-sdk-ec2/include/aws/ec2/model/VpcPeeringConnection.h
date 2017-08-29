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
#include <aws/ec2/model/VpcPeeringConnectionVpcInfo.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ec2/model/VpcPeeringConnectionStateReason.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a VPC peering connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/VpcPeeringConnection">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API VpcPeeringConnection
  {
  public:
    VpcPeeringConnection();
    VpcPeeringConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    VpcPeeringConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Information about the accepter VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline const VpcPeeringConnectionVpcInfo& GetAccepterVpcInfo() const{ return m_accepterVpcInfo; }

    /**
     * <p>Information about the accepter VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline void SetAccepterVpcInfo(const VpcPeeringConnectionVpcInfo& value) { m_accepterVpcInfoHasBeenSet = true; m_accepterVpcInfo = value; }

    /**
     * <p>Information about the accepter VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline void SetAccepterVpcInfo(VpcPeeringConnectionVpcInfo&& value) { m_accepterVpcInfoHasBeenSet = true; m_accepterVpcInfo = std::move(value); }

    /**
     * <p>Information about the accepter VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline VpcPeeringConnection& WithAccepterVpcInfo(const VpcPeeringConnectionVpcInfo& value) { SetAccepterVpcInfo(value); return *this;}

    /**
     * <p>Information about the accepter VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline VpcPeeringConnection& WithAccepterVpcInfo(VpcPeeringConnectionVpcInfo&& value) { SetAccepterVpcInfo(std::move(value)); return *this;}


    /**
     * <p>The time that an unaccepted VPC peering connection will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const{ return m_expirationTime; }

    /**
     * <p>The time that an unaccepted VPC peering connection will expire.</p>
     */
    inline void SetExpirationTime(const Aws::Utils::DateTime& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = value; }

    /**
     * <p>The time that an unaccepted VPC peering connection will expire.</p>
     */
    inline void SetExpirationTime(Aws::Utils::DateTime&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::move(value); }

    /**
     * <p>The time that an unaccepted VPC peering connection will expire.</p>
     */
    inline VpcPeeringConnection& WithExpirationTime(const Aws::Utils::DateTime& value) { SetExpirationTime(value); return *this;}

    /**
     * <p>The time that an unaccepted VPC peering connection will expire.</p>
     */
    inline VpcPeeringConnection& WithExpirationTime(Aws::Utils::DateTime&& value) { SetExpirationTime(std::move(value)); return *this;}


    /**
     * <p>Information about the requester VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline const VpcPeeringConnectionVpcInfo& GetRequesterVpcInfo() const{ return m_requesterVpcInfo; }

    /**
     * <p>Information about the requester VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline void SetRequesterVpcInfo(const VpcPeeringConnectionVpcInfo& value) { m_requesterVpcInfoHasBeenSet = true; m_requesterVpcInfo = value; }

    /**
     * <p>Information about the requester VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline void SetRequesterVpcInfo(VpcPeeringConnectionVpcInfo&& value) { m_requesterVpcInfoHasBeenSet = true; m_requesterVpcInfo = std::move(value); }

    /**
     * <p>Information about the requester VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline VpcPeeringConnection& WithRequesterVpcInfo(const VpcPeeringConnectionVpcInfo& value) { SetRequesterVpcInfo(value); return *this;}

    /**
     * <p>Information about the requester VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline VpcPeeringConnection& WithRequesterVpcInfo(VpcPeeringConnectionVpcInfo&& value) { SetRequesterVpcInfo(std::move(value)); return *this;}


    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline const VpcPeeringConnectionStateReason& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline void SetStatus(const VpcPeeringConnectionStateReason& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline void SetStatus(VpcPeeringConnectionStateReason&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline VpcPeeringConnection& WithStatus(const VpcPeeringConnectionStateReason& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline VpcPeeringConnection& WithStatus(VpcPeeringConnectionStateReason&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline VpcPeeringConnection& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline VpcPeeringConnection& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline VpcPeeringConnection& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline VpcPeeringConnection& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const{ return m_vpcPeeringConnectionId; }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const Aws::String& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = value; }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(Aws::String&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::move(value); }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline void SetVpcPeeringConnectionId(const char* value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId.assign(value); }

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline VpcPeeringConnection& WithVpcPeeringConnectionId(const Aws::String& value) { SetVpcPeeringConnectionId(value); return *this;}

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline VpcPeeringConnection& WithVpcPeeringConnectionId(Aws::String&& value) { SetVpcPeeringConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline VpcPeeringConnection& WithVpcPeeringConnectionId(const char* value) { SetVpcPeeringConnectionId(value); return *this;}

  private:

    VpcPeeringConnectionVpcInfo m_accepterVpcInfo;
    bool m_accepterVpcInfoHasBeenSet;

    Aws::Utils::DateTime m_expirationTime;
    bool m_expirationTimeHasBeenSet;

    VpcPeeringConnectionVpcInfo m_requesterVpcInfo;
    bool m_requesterVpcInfoHasBeenSet;

    VpcPeeringConnectionStateReason m_status;
    bool m_statusHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
