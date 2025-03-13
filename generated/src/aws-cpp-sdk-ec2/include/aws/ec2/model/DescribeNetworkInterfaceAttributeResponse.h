/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/NetworkInterfaceAttachment.h>
#include <aws/ec2/model/AttributeValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AttributeBooleanValue.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/GroupIdentifier.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeNetworkInterfaceAttribute.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeNetworkInterfaceAttributeResult">AWS
   * API Reference</a></p>
   */
  class DescribeNetworkInterfaceAttributeResponse
  {
  public:
    AWS_EC2_API DescribeNetworkInterfaceAttributeResponse() = default;
    AWS_EC2_API DescribeNetworkInterfaceAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeNetworkInterfaceAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The attachment (if any) of the network interface.</p>
     */
    inline const NetworkInterfaceAttachment& GetAttachment() const { return m_attachment; }
    template<typename AttachmentT = NetworkInterfaceAttachment>
    void SetAttachment(AttachmentT&& value) { m_attachmentHasBeenSet = true; m_attachment = std::forward<AttachmentT>(value); }
    template<typename AttachmentT = NetworkInterfaceAttachment>
    DescribeNetworkInterfaceAttributeResponse& WithAttachment(AttachmentT&& value) { SetAttachment(std::forward<AttachmentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the network interface.</p>
     */
    inline const AttributeValue& GetDescription() const { return m_description; }
    template<typename DescriptionT = AttributeValue>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = AttributeValue>
    DescribeNetworkInterfaceAttributeResponse& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the network interface.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const { return m_groups; }
    template<typename GroupsT = Aws::Vector<GroupIdentifier>>
    void SetGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups = std::forward<GroupsT>(value); }
    template<typename GroupsT = Aws::Vector<GroupIdentifier>>
    DescribeNetworkInterfaceAttributeResponse& WithGroups(GroupsT&& value) { SetGroups(std::forward<GroupsT>(value)); return *this;}
    template<typename GroupsT = GroupIdentifier>
    DescribeNetworkInterfaceAttributeResponse& AddGroups(GroupsT&& value) { m_groupsHasBeenSet = true; m_groups.emplace_back(std::forward<GroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
    template<typename NetworkInterfaceIdT = Aws::String>
    void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value); }
    template<typename NetworkInterfaceIdT = Aws::String>
    DescribeNetworkInterfaceAttributeResponse& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) { SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline const AttributeBooleanValue& GetSourceDestCheck() const { return m_sourceDestCheck; }
    template<typename SourceDestCheckT = AttributeBooleanValue>
    void SetSourceDestCheck(SourceDestCheckT&& value) { m_sourceDestCheckHasBeenSet = true; m_sourceDestCheck = std::forward<SourceDestCheckT>(value); }
    template<typename SourceDestCheckT = AttributeBooleanValue>
    DescribeNetworkInterfaceAttributeResponse& WithSourceDestCheck(SourceDestCheckT&& value) { SetSourceDestCheck(std::forward<SourceDestCheckT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to assign a public IPv4 address to a network interface.
     * This option can be enabled for any network interface but will only apply to the
     * primary network interface (eth0).</p>
     */
    inline bool GetAssociatePublicIpAddress() const { return m_associatePublicIpAddress; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddressHasBeenSet = true; m_associatePublicIpAddress = value; }
    inline DescribeNetworkInterfaceAttributeResponse& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeNetworkInterfaceAttributeResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    NetworkInterfaceAttachment m_attachment;
    bool m_attachmentHasBeenSet = false;

    AttributeValue m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<GroupIdentifier> m_groups;
    bool m_groupsHasBeenSet = false;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet = false;

    AttributeBooleanValue m_sourceDestCheck;
    bool m_sourceDestCheckHasBeenSet = false;

    bool m_associatePublicIpAddress{false};
    bool m_associatePublicIpAddressHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
