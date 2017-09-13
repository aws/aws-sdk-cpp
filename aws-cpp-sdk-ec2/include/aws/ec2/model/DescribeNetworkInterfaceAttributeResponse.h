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
  class AWS_EC2_API DescribeNetworkInterfaceAttributeResponse
  {
  public:
    DescribeNetworkInterfaceAttributeResponse();
    DescribeNetworkInterfaceAttributeResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeNetworkInterfaceAttributeResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The attachment (if any) of the network interface.</p>
     */
    inline const NetworkInterfaceAttachment& GetAttachment() const{ return m_attachment; }

    /**
     * <p>The attachment (if any) of the network interface.</p>
     */
    inline void SetAttachment(const NetworkInterfaceAttachment& value) { m_attachment = value; }

    /**
     * <p>The attachment (if any) of the network interface.</p>
     */
    inline void SetAttachment(NetworkInterfaceAttachment&& value) { m_attachment = std::move(value); }

    /**
     * <p>The attachment (if any) of the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithAttachment(const NetworkInterfaceAttachment& value) { SetAttachment(value); return *this;}

    /**
     * <p>The attachment (if any) of the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithAttachment(NetworkInterfaceAttachment&& value) { SetAttachment(std::move(value)); return *this;}


    /**
     * <p>The description of the network interface.</p>
     */
    inline const AttributeValue& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the network interface.</p>
     */
    inline void SetDescription(const AttributeValue& value) { m_description = value; }

    /**
     * <p>The description of the network interface.</p>
     */
    inline void SetDescription(AttributeValue&& value) { m_description = std::move(value); }

    /**
     * <p>The description of the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithDescription(const AttributeValue& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithDescription(AttributeValue&& value) { SetDescription(std::move(value)); return *this;}


    /**
     * <p>The security groups associated with the network interface.</p>
     */
    inline const Aws::Vector<GroupIdentifier>& GetGroups() const{ return m_groups; }

    /**
     * <p>The security groups associated with the network interface.</p>
     */
    inline void SetGroups(const Aws::Vector<GroupIdentifier>& value) { m_groups = value; }

    /**
     * <p>The security groups associated with the network interface.</p>
     */
    inline void SetGroups(Aws::Vector<GroupIdentifier>&& value) { m_groups = std::move(value); }

    /**
     * <p>The security groups associated with the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithGroups(const Aws::Vector<GroupIdentifier>& value) { SetGroups(value); return *this;}

    /**
     * <p>The security groups associated with the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithGroups(Aws::Vector<GroupIdentifier>&& value) { SetGroups(std::move(value)); return *this;}

    /**
     * <p>The security groups associated with the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& AddGroups(const GroupIdentifier& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>The security groups associated with the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& AddGroups(GroupIdentifier&& value) { m_groups.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline const AttributeBooleanValue& GetSourceDestCheck() const{ return m_sourceDestCheck; }

    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline void SetSourceDestCheck(const AttributeBooleanValue& value) { m_sourceDestCheck = value; }

    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline void SetSourceDestCheck(AttributeBooleanValue&& value) { m_sourceDestCheck = std::move(value); }

    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithSourceDestCheck(const AttributeBooleanValue& value) { SetSourceDestCheck(value); return *this;}

    /**
     * <p>Indicates whether source/destination checking is enabled.</p>
     */
    inline DescribeNetworkInterfaceAttributeResponse& WithSourceDestCheck(AttributeBooleanValue&& value) { SetSourceDestCheck(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeNetworkInterfaceAttributeResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeNetworkInterfaceAttributeResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    NetworkInterfaceAttachment m_attachment;

    AttributeValue m_description;

    Aws::Vector<GroupIdentifier> m_groups;

    Aws::String m_networkInterfaceId;

    AttributeBooleanValue m_sourceDestCheck;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
