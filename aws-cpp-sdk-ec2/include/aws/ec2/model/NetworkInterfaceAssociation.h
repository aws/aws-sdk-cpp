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
   * <p>Describes association information for an Elastic IP address (IPv4
   * only).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/NetworkInterfaceAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API NetworkInterfaceAssociation
  {
  public:
    NetworkInterfaceAssociation();
    NetworkInterfaceAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    NetworkInterfaceAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The allocation ID.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>The allocation ID.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>The allocation ID.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>The allocation ID.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>The allocation ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>The allocation ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>The allocation ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>The association ID.</p>
     */
    inline const Aws::String& GetAssociationId() const{ return m_associationId; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const Aws::String& value) { m_associationIdHasBeenSet = true; m_associationId = value; }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(Aws::String&& value) { m_associationIdHasBeenSet = true; m_associationId = std::move(value); }

    /**
     * <p>The association ID.</p>
     */
    inline void SetAssociationId(const char* value) { m_associationIdHasBeenSet = true; m_associationId.assign(value); }

    /**
     * <p>The association ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAssociationId(const Aws::String& value) { SetAssociationId(value); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAssociationId(Aws::String&& value) { SetAssociationId(std::move(value)); return *this;}

    /**
     * <p>The association ID.</p>
     */
    inline NetworkInterfaceAssociation& WithAssociationId(const char* value) { SetAssociationId(value); return *this;}


    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline const Aws::String& GetIpOwnerId() const{ return m_ipOwnerId; }

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline void SetIpOwnerId(const Aws::String& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = value; }

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline void SetIpOwnerId(Aws::String&& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = std::move(value); }

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline void SetIpOwnerId(const char* value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId.assign(value); }

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline NetworkInterfaceAssociation& WithIpOwnerId(const Aws::String& value) { SetIpOwnerId(value); return *this;}

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline NetworkInterfaceAssociation& WithIpOwnerId(Aws::String&& value) { SetIpOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Elastic IP address owner.</p>
     */
    inline NetworkInterfaceAssociation& WithIpOwnerId(const char* value) { SetIpOwnerId(value); return *this;}


    /**
     * <p>The public DNS name.</p>
     */
    inline const Aws::String& GetPublicDnsName() const{ return m_publicDnsName; }

    /**
     * <p>The public DNS name.</p>
     */
    inline void SetPublicDnsName(const Aws::String& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = value; }

    /**
     * <p>The public DNS name.</p>
     */
    inline void SetPublicDnsName(Aws::String&& value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName = std::move(value); }

    /**
     * <p>The public DNS name.</p>
     */
    inline void SetPublicDnsName(const char* value) { m_publicDnsNameHasBeenSet = true; m_publicDnsName.assign(value); }

    /**
     * <p>The public DNS name.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}

    /**
     * <p>The public DNS name.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}

    /**
     * <p>The public DNS name.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}


    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The address of the Elastic IP address bound to the network interface.</p>
     */
    inline NetworkInterfaceAssociation& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}

  private:

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet;

    Aws::String m_associationId;
    bool m_associationIdHasBeenSet;

    Aws::String m_ipOwnerId;
    bool m_ipOwnerIdHasBeenSet;

    Aws::String m_publicDnsName;
    bool m_publicDnsNameHasBeenSet;

    Aws::String m_publicIp;
    bool m_publicIpHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
