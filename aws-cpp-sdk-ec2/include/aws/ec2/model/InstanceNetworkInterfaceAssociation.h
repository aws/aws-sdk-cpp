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
   * <p>Describes association information for an Elastic IP address
   * (IPv4).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceNetworkInterfaceAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceNetworkInterfaceAssociation
  {
  public:
    InstanceNetworkInterfaceAssociation();
    InstanceNetworkInterfaceAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceNetworkInterfaceAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline const Aws::String& GetIpOwnerId() const{ return m_ipOwnerId; }

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline void SetIpOwnerId(const Aws::String& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = value; }

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline void SetIpOwnerId(Aws::String&& value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId = std::move(value); }

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline void SetIpOwnerId(const char* value) { m_ipOwnerIdHasBeenSet = true; m_ipOwnerId.assign(value); }

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithIpOwnerId(const Aws::String& value) { SetIpOwnerId(value); return *this;}

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithIpOwnerId(Aws::String&& value) { SetIpOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the owner of the Elastic IP address.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithIpOwnerId(const char* value) { SetIpOwnerId(value); return *this;}


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
    inline InstanceNetworkInterfaceAssociation& WithPublicDnsName(const Aws::String& value) { SetPublicDnsName(value); return *this;}

    /**
     * <p>The public DNS name.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicDnsName(Aws::String&& value) { SetPublicDnsName(std::move(value)); return *this;}

    /**
     * <p>The public DNS name.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicDnsName(const char* value) { SetPublicDnsName(value); return *this;}


    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline const Aws::String& GetPublicIp() const{ return m_publicIp; }

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline void SetPublicIp(const Aws::String& value) { m_publicIpHasBeenSet = true; m_publicIp = value; }

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline void SetPublicIp(Aws::String&& value) { m_publicIpHasBeenSet = true; m_publicIp = std::move(value); }

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline void SetPublicIp(const char* value) { m_publicIpHasBeenSet = true; m_publicIp.assign(value); }

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicIp(const Aws::String& value) { SetPublicIp(value); return *this;}

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicIp(Aws::String&& value) { SetPublicIp(std::move(value)); return *this;}

    /**
     * <p>The public IP address or Elastic IP address bound to the network
     * interface.</p>
     */
    inline InstanceNetworkInterfaceAssociation& WithPublicIp(const char* value) { SetPublicIp(value); return *this;}

  private:

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
