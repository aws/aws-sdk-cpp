/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class VpcPeeringConnection
  {
  public:
    AWS_EC2_API VpcPeeringConnection() = default;
    AWS_EC2_API VpcPeeringConnection(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API VpcPeeringConnection& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Information about the accepter VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline const VpcPeeringConnectionVpcInfo& GetAccepterVpcInfo() const { return m_accepterVpcInfo; }
    inline bool AccepterVpcInfoHasBeenSet() const { return m_accepterVpcInfoHasBeenSet; }
    template<typename AccepterVpcInfoT = VpcPeeringConnectionVpcInfo>
    void SetAccepterVpcInfo(AccepterVpcInfoT&& value) { m_accepterVpcInfoHasBeenSet = true; m_accepterVpcInfo = std::forward<AccepterVpcInfoT>(value); }
    template<typename AccepterVpcInfoT = VpcPeeringConnectionVpcInfo>
    VpcPeeringConnection& WithAccepterVpcInfo(AccepterVpcInfoT&& value) { SetAccepterVpcInfo(std::forward<AccepterVpcInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that an unaccepted VPC peering connection will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    void SetExpirationTime(ExpirationTimeT&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::forward<ExpirationTimeT>(value); }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    VpcPeeringConnection& WithExpirationTime(ExpirationTimeT&& value) { SetExpirationTime(std::forward<ExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the requester VPC. CIDR block information is only returned
     * when describing an active VPC peering connection.</p>
     */
    inline const VpcPeeringConnectionVpcInfo& GetRequesterVpcInfo() const { return m_requesterVpcInfo; }
    inline bool RequesterVpcInfoHasBeenSet() const { return m_requesterVpcInfoHasBeenSet; }
    template<typename RequesterVpcInfoT = VpcPeeringConnectionVpcInfo>
    void SetRequesterVpcInfo(RequesterVpcInfoT&& value) { m_requesterVpcInfoHasBeenSet = true; m_requesterVpcInfo = std::forward<RequesterVpcInfoT>(value); }
    template<typename RequesterVpcInfoT = VpcPeeringConnectionVpcInfo>
    VpcPeeringConnection& WithRequesterVpcInfo(RequesterVpcInfoT&& value) { SetRequesterVpcInfo(std::forward<RequesterVpcInfoT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the VPC peering connection.</p>
     */
    inline const VpcPeeringConnectionStateReason& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = VpcPeeringConnectionStateReason>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = VpcPeeringConnectionStateReason>
    VpcPeeringConnection& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Any tags assigned to the resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    VpcPeeringConnection& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    VpcPeeringConnection& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the VPC peering connection.</p>
     */
    inline const Aws::String& GetVpcPeeringConnectionId() const { return m_vpcPeeringConnectionId; }
    inline bool VpcPeeringConnectionIdHasBeenSet() const { return m_vpcPeeringConnectionIdHasBeenSet; }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    void SetVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { m_vpcPeeringConnectionIdHasBeenSet = true; m_vpcPeeringConnectionId = std::forward<VpcPeeringConnectionIdT>(value); }
    template<typename VpcPeeringConnectionIdT = Aws::String>
    VpcPeeringConnection& WithVpcPeeringConnectionId(VpcPeeringConnectionIdT&& value) { SetVpcPeeringConnectionId(std::forward<VpcPeeringConnectionIdT>(value)); return *this;}
    ///@}
  private:

    VpcPeeringConnectionVpcInfo m_accepterVpcInfo;
    bool m_accepterVpcInfoHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime{};
    bool m_expirationTimeHasBeenSet = false;

    VpcPeeringConnectionVpcInfo m_requesterVpcInfo;
    bool m_requesterVpcInfoHasBeenSet = false;

    VpcPeeringConnectionStateReason m_status;
    bool m_statusHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_vpcPeeringConnectionId;
    bool m_vpcPeeringConnectionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
