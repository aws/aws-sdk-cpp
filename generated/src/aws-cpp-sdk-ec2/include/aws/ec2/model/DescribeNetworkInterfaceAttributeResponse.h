﻿/**
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
    AWS_EC2_API DescribeNetworkInterfaceAttributeResponse();
    AWS_EC2_API DescribeNetworkInterfaceAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeNetworkInterfaceAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The attachment (if any) of the network interface.</p>
     */
    inline const NetworkInterfaceAttachment& GetAttachment() const{ return m_attachment; }
    inline void SetAttachment(const NetworkInterfaceAttachment& value) { m_attachment = value; }
    inline void SetAttachment(NetworkInterfaceAttachment&& value) { m_attachment = std::move(value); }
    inline DescribeNetworkInterfaceAttributeResponse& WithAttachment(const NetworkInterfaceAttachment& value) { SetAttachment(value); return *this;}
    inline DescribeNetworkInterfaceAttributeResponse& WithAttachment(NetworkInterfaceAttachment&& value) { SetAttachment(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the network interface.</p>
     */
    inline const AttributeValue& GetDescription() const{ return m_description; }
    inline void SetDescription(const AttributeValue& value) { m_description = value; }
    inline void SetDescription(AttributeValue&& value) { m_description = std::move(value); }
    inline DescribeNetworkInterfaceAttributeResponse& WithDescription(const AttributeValue& value) { SetDescription(value); return *this;}
    inline DescribeNetworkInterfaceAttributeResponse& WithDescription(AttributeValue&& value) { SetDescription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the network interface.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groups = value; }
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groups = std::move(value); }
    inline DescribeNetworkInterfaceAttributeResponse& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}
    inline DescribeNetworkInterfaceAttributeResponse& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}
    inline DescribeNetworkInterfaceAttributeResponse& AddGroups(const GroupIdentifier& value) { m_groups.push_back(value); return *this; }
    inline DescribeNetworkInterfaceAttributeResponse& AddGroups(GroupIdentifier&& value) { m_groups.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceId = value; }
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceId = std::move(value); }
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceId.assign(value); }
    inline DescribeNetworkInterfaceAttributeResponse& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}
    inline DescribeNetworkInterfaceAttributeResponse& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}
    inline DescribeNetworkInterfaceAttributeResponse& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline const AttributeBooleanValue& GetSourceDestCheck() const{ return m_sourceDestCheck; }
    inline void SetSourceDestCheck(const AttributeBooleanValue& value) { m_sourceDestCheck = value; }
    inline void SetSourceDestCheck(AttributeBooleanValue&& value) { m_sourceDestCheck = std::move(value); }
    inline DescribeNetworkInterfaceAttributeResponse& WithSourceDestCheck(const AttributeBooleanValue& value) { SetSourceDestCheck(value); return *this;}
    inline DescribeNetworkInterfaceAttributeResponse& WithSourceDestCheck(AttributeBooleanValue&& value) { SetSourceDestCheck(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether to assign a public IPv4 address to a network interface.
     * This option can be enabled for any network interface but will only apply to the
     * primary network interface (eth0).</p>
     */
    inline bool GetAssociatePublicIpAddress() const{ return m_associatePublicIpAddress; }
    inline void SetAssociatePublicIpAddress(bool value) { m_associatePublicIpAddress = value; }
    inline DescribeNetworkInterfaceAttributeResponse& WithAssociatePublicIpAddress(bool value) { SetAssociatePublicIpAddress(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeNetworkInterfaceAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeNetworkInterfaceAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    NetworkInterfaceAttachment m_attachment;

    AttributeValue m_description;

    Aws::Vector<GroupIdentifier> m_groups;

    Aws::String m_networkInterfaceId;

    AttributeBooleanValue m_sourceDestCheck;

    bool m_associatePublicIpAddress;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
