/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Describes a secondary private IPv4 address for a network
   * interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/PrivateIpAddressSpecification">AWS
   * API Reference</a></p>
   */
  class PrivateIpAddressSpecification
  {
  public:
    AWS_EC2_API PrivateIpAddressSpecification();
    AWS_EC2_API PrivateIpAddressSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API PrivateIpAddressSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Indicates whether the private IPv4 address is the primary private IPv4
     * address. Only one IPv4 address can be designated as primary.</p>
     */
    inline bool GetPrimary() const{ return m_primary; }

    /**
     * <p>Indicates whether the private IPv4 address is the primary private IPv4
     * address. Only one IPv4 address can be designated as primary.</p>
     */
    inline bool PrimaryHasBeenSet() const { return m_primaryHasBeenSet; }

    /**
     * <p>Indicates whether the private IPv4 address is the primary private IPv4
     * address. Only one IPv4 address can be designated as primary.</p>
     */
    inline void SetPrimary(bool value) { m_primaryHasBeenSet = true; m_primary = value; }

    /**
     * <p>Indicates whether the private IPv4 address is the primary private IPv4
     * address. Only one IPv4 address can be designated as primary.</p>
     */
    inline PrivateIpAddressSpecification& WithPrimary(bool value) { SetPrimary(value); return *this;}


    /**
     * <p>The private IPv4 address.</p>
     */
    inline const Aws::String& GetPrivateIpAddress() const{ return m_privateIpAddress; }

    /**
     * <p>The private IPv4 address.</p>
     */
    inline bool PrivateIpAddressHasBeenSet() const { return m_privateIpAddressHasBeenSet; }

    /**
     * <p>The private IPv4 address.</p>
     */
    inline void SetPrivateIpAddress(const Aws::String& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = value; }

    /**
     * <p>The private IPv4 address.</p>
     */
    inline void SetPrivateIpAddress(Aws::String&& value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress = std::move(value); }

    /**
     * <p>The private IPv4 address.</p>
     */
    inline void SetPrivateIpAddress(const char* value) { m_privateIpAddressHasBeenSet = true; m_privateIpAddress.assign(value); }

    /**
     * <p>The private IPv4 address.</p>
     */
    inline PrivateIpAddressSpecification& WithPrivateIpAddress(const Aws::String& value) { SetPrivateIpAddress(value); return *this;}

    /**
     * <p>The private IPv4 address.</p>
     */
    inline PrivateIpAddressSpecification& WithPrivateIpAddress(Aws::String&& value) { SetPrivateIpAddress(std::move(value)); return *this;}

    /**
     * <p>The private IPv4 address.</p>
     */
    inline PrivateIpAddressSpecification& WithPrivateIpAddress(const char* value) { SetPrivateIpAddress(value); return *this;}

  private:

    bool m_primary;
    bool m_primaryHasBeenSet = false;

    Aws::String m_privateIpAddress;
    bool m_privateIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
