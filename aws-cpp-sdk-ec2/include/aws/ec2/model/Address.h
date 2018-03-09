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
#include <aws/ec2/model/DomainType.h>
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
   * <p>Describes an Elastic IP address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Address">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API Address
  {
  public:
    Address();
    Address(const Aws::Utils::Xml::XmlNode& xmlNode);
    Address& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the instance that the address is associated with (if any).</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance that the address is associated with (if any).</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance that the address is associated with (if any).</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance that the address is associated with (if any).</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance that the address is associated with (if any).</p>
     */
    inline Address& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance that the address is associated with (if any).</p>
     */
    inline Address& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance that the address is associated with (if any).</p>
     */
    inline Address& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The Elastic IP address.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The Elastic IP address.</p>
     */
    inline Address& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline Address& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The Elastic IP address.</p>
     */
    inline Address& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}


    /**
     * <p>The ID representing the allocation of the address for use with EC2-VPC.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>The ID representing the allocation of the address for use with EC2-VPC.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>The ID representing the allocation of the address for use with EC2-VPC.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>The ID representing the allocation of the address for use with EC2-VPC.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>The ID representing the allocation of the address for use with EC2-VPC.</p>
     */
    inline Address& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>The ID representing the allocation of the address for use with EC2-VPC.</p>
     */
    inline Address& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>The ID representing the allocation of the address for use with EC2-VPC.</p>
     */
    inline Address& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>The ID representing the association of the address with an instance in a
     * VPC.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The ID representing the association of the address with an instance in a
     * VPC.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The ID representing the association of the address with an instance in a
     * VPC.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The ID representing the association of the address with an instance in a
     * VPC.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The ID representing the association of the address with an instance in a
     * VPC.</p>
     */
    inline Address& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The ID representing the association of the address with an instance in a
     * VPC.</p>
     */
    inline Address& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The ID representing the association of the address with an instance in a
     * VPC.</p>
     */
    inline Address& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>Indicates whether this Elastic IP address is for use with instances in
     * EC2-Classic (<code>standard</code>) or instances in a VPC
     * (<code>vpc</code>).</p>
     */
    inline const DomainType& GetDomain() const{ return m_domain; }

    /**
     * <p>Indicates whether this Elastic IP address is for use with instances in
     * EC2-Classic (<code>standard</code>) or instances in a VPC
     * (<code>vpc</code>).</p>
     */
    inline void SetDomain(const DomainType& value) { m_domainHasBeenSet = true; m_domain = value; }

    /**
     * <p>Indicates whether this Elastic IP address is for use with instances in
     * EC2-Classic (<code>standard</code>) or instances in a VPC
     * (<code>vpc</code>).</p>
     */
    inline void SetDomain(DomainType&& value) { m_domainHasBeenSet = true; m_domain = std::move(value); }

    /**
     * <p>Indicates whether this Elastic IP address is for use with instances in
     * EC2-Classic (<code>standard</code>) or instances in a VPC
     * (<code>vpc</code>).</p>
     */
    inline Address& WithDomain(const DomainType& value) { SetDomain(value); return *this;}

    /**
     * <p>Indicates whether this Elastic IP address is for use with instances in
     * EC2-Classic (<code>standard</code>) or instances in a VPC
     * (<code>vpc</code>).</p>
     */
    inline Address& WithDomain(DomainType&& value) { SetDomain(std::move(value)); return *this;}


    /**
     * <p>The ID of the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceId() const{ return m_networkInterfaceId; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const Aws::String& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = value; }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(Aws::String&& value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId = std::move(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline void SetNetworkInterfaceId(const char* value) { m_networkInterfaceIdHasBeenSet = true; m_networkInterfaceId.assign(value); }

    /**
     * <p>The ID of the network interface.</p>
     */
    inline Address& WithNetworkInterfaceId(const Aws::String& value) { SetNetworkInterfaceId(value); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline Address& WithNetworkInterfaceId(Aws::String&& value) { SetNetworkInterfaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the network interface.</p>
     */
    inline Address& WithNetworkInterfaceId(const char* value) { SetNetworkInterfaceId(value); return *this;}


    /**
     * <p>The ID of the AWS account that owns the network interface.</p>
     */
    inline const Aws::String& GetNetworkInterfaceOwnerId() const{ return m_networkInterfaceOwnerId; }

    /**
     * <p>The ID of the AWS account that owns the network interface.</p>
     */
    inline void SetNetworkInterfaceOwnerId(const Aws::String& value) { m_networkInterfaceOwnerIdHasBeenSet = true; m_networkInterfaceOwnerId = value; }

    /**
     * <p>The ID of the AWS account that owns the network interface.</p>
     */
    inline void SetNetworkInterfaceOwnerId(Aws::String&& value) { m_networkInterfaceOwnerIdHasBeenSet = true; m_networkInterfaceOwnerId = std::move(value); }

    /**
     * <p>The ID of the AWS account that owns the network interface.</p>
     */
    inline void SetNetworkInterfaceOwnerId(const char* value) { m_networkInterfaceOwnerIdHasBeenSet = true; m_networkInterfaceOwnerId.assign(value); }

    /**
     * <p>The ID of the AWS account that owns the network interface.</p>
     */
    inline Address& WithNetworkInterfaceOwnerId(const Aws::String& value) { SetNetworkInterfaceOwnerId(value); return *this;}

    /**
     * <p>The ID of the AWS account that owns the network interface.</p>
     */
    inline Address& WithNetworkInterfaceOwnerId(Aws::String&& value) { SetNetworkInterfaceOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the AWS account that owns the network interface.</p>
     */
    inline Address& WithNetworkInterfaceOwnerId(const char* value) { SetNetworkInterfaceOwnerId(value); return *this;}


    /**
     * <p>The private IP address associated with the Elastic IP address.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IP address associated with the Elastic IP address.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IP address associated with the Elastic IP address.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IP address associated with the Elastic IP address.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IP address associated with the Elastic IP address.</p>
     */
    inline Address& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP address associated with the Elastic IP address.</p>
     */
    inline Address& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IP address associated with the Elastic IP address.</p>
     */
    inline Address& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}


    /**
     * <p>Any tags assigned to the Elastic IP address.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>Any tags assigned to the Elastic IP address.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Any tags assigned to the Elastic IP address.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Any tags assigned to the Elastic IP address.</p>
     */
    inline Address& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>Any tags assigned to the Elastic IP address.</p>
     */
    inline Address& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Any tags assigned to the Elastic IP address.</p>
     */
    inline Address& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>Any tags assigned to the Elastic IP address.</p>
     */
    inline Address& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    DomainType m_domain;
    bool m_domainHasBeenSet;

    Aws::String m_networkInterfaceId;
    bool m_networkInterfaceIdHasBeenSet;

    Aws::String m_networkInterfaceOwnerId;
    bool m_networkInterfaceOwnerIdHasBeenSet;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
