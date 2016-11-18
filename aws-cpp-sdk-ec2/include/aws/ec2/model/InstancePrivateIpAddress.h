﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/InstanceNetworkInterfaceAssociation.h>

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
   * <p>Describes a private IP address.</p>
   */
  class AWS_EC2_API InstancePrivateIpAddress
  {
  public:
    InstancePrivateIpAddress();
    InstancePrivateIpAddress(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstancePrivateIpAddress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The private IP address of the network interface.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IP address of the network interface.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IP address of the network interface.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IP address of the network interface.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IP address of the network interface.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP address of the network interface.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IP address of the network interface.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline const Aws::String& GetPrivateDnsName() const{ return m_privateDnsName; }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(const Aws::String& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(Aws::String&& value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName = value; }

    /**
     * <p>The private DNS name.</p>
     */
    inline void SetPrivateDnsName(const char* value) { m_privateDnsNameHasBeenSet = true; m_privateDnsName.assign(value); }

    /**
     * <p>The private DNS name.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateDnsName(const Aws::String& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateDnsName(Aws::String&& value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>The private DNS name.</p>
     */
    inline InstancePrivateIpAddress& WithPrivateDnsName(const char* value) { SetPrivateDnsName(value); return *this;}

    /**
     * <p>Indicates whether this IP address is the primary private IP address of the
     * network interface.</p>
     */
    inline bool GetPrimary() const{ return m_primary; }

    /**
     * <p>Indicates whether this IP address is the primary private IP address of the
     * network interface.</p>
     */
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }

    /**
     * <p>Indicates whether this IP address is the primary private IP address of the
     * network interface.</p>
     */
    inline InstancePrivateIpAddress& WithPrimary(bool value) { SetPrimary(value); return *this;}

    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline const InstanceNetworkInterfaceAssociation& GetAssociation() const{ return m_association; }

    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline void SetAssociation(const InstanceNetworkInterfaceAssociation& value) { m_associationHasBeenSet = true; m_association = value; }

    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline void SetAssociation(InstanceNetworkInterfaceAssociation&& value) { m_associationHasBeenSet = true; m_association = value; }

    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline InstancePrivateIpAddress& WithAssociation(const InstanceNetworkInterfaceAssociation& value) { SetAssociation(value); return *this;}

    /**
     * <p>The association information for an Elastic IP address for the network
     * interface.</p>
     */
    inline InstancePrivateIpAddress& WithAssociation(InstanceNetworkInterfaceAssociation&& value) { SetAssociation(value); return *this;}

  private:
    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet;
    Aws::String m_privateDnsName;
    bool m_privateDnsNameHasBeenSet;
    bool m_primary;
    bool m_primaryHasBeenSet;
    InstanceNetworkInterfaceAssociation m_association;
    bool m_associationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
