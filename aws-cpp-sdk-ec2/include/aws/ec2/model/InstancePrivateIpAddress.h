/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceNetworkInterfaceAssociation.h>
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
   * <p>Describes a private IPv4 address.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstancePrivateIpAddress">AWS
   * API Reference</a></p>
   */
  class InstancePrivateIpAddress
  {
  public:
    AWS_EC2_API InstancePrivateIpAddress();
    AWS_EC2_API InstancePrivateIpAddress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstancePrivateIpAddress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline const InstanceNetworkInterfaceAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }

    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline void SetAssociation(const InstanceNetworkInterfaceAssociation& value) { m_associationHasBeenSet = true; m_association = value; }

    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline void SetAssociation(InstanceNetworkInterfaceAssociation&& value) { m_associationHasBeenSet = true; m_association = std::move(value); }

    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline InstancePrivateIpAddress& WithAssociation(const InstanceNetworkInterfaceAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline InstancePrivateIpAddress& WithAssociation(InstanceNetworkInterfaceAssociation&& value) { SetAssociation(std::move(value)); return *this;}


    /**
     * <p>Indicates whether this IPv4 address is the primary private IP address of the
     * network interface.</p>
     */
    inline bool GetPrimary() const{ return m_primary; }

    /**
     * <p>Indicates whether this IPv4 address is the primary private IP address of the
     * network interface.</p>
     */
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }

    /**
     * <p>Indicates whether this IPv4 address is the primary private IP address of the
     * network interface.</p>
     */
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }

    /**
     * <p>Indicates whether this IPv4 address is the primary private IP address of the
     * network interface.</p>
     */
    inline InstancePrivateIpAddress& WithPrimary(bool value) { SetPrimary(value); return *this;}


    /**
     * <p>The private IPv4 DNS name.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The private IPv4 DNS name.</p>
     */
    inline bool PrivateDnsNameHasBeenSet() const { return m_privateDnsNameHasBeenSet; }

    /**
     * <p>The private IPv4 DNS name.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The private IPv4 DNS name.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = std::move(value); }

    /**
     * <p>The private IPv4 DNS name.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>The private IPv4 DNS name.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private IPv4 DNS name.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 DNS name.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}


    /**
     * <p>The private IPv4 address of the network interface.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IPv4 address of the network interface.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The private IPv4 address of the network interface.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IPv4 address of the network interface.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IPv4 address of the network interface.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IPv4 address of the network interface.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IPv4 address of the network interface.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 address of the network interface.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

  private:

    InstanceNetworkInterfaceAssociation m_association;
    bool m_associationHasBeenSet = false;

    bool m_primary;
    bool m_primaryHasBeenSet = false;

    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
