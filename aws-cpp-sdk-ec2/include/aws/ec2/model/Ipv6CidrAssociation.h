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
   * <p>Describes an IPv6 CIDR block association.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipv6CidrAssociation">AWS
   * API Reference</a></p>
   */
  class Ipv6CidrAssociation
  {
  public:
    AWS_EC2_API Ipv6CidrAssociation();
    AWS_EC2_API Ipv6CidrAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ipv6CidrAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetIpv6Cidr() const{ return m_ipv6Cidr; }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline bool Ipv6CidrHasBeenSet() const { return m_ipv6CidrHasBeenSet; }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline void SetIpv6Cidr(const Aws::String& value) { m_ipv6CidrHasBeenSet = true; m_ipv6Cidr = value; }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline void SetIpv6Cidr(Aws::String&& value) { m_ipv6CidrHasBeenSet = true; m_ipv6Cidr = std::move(value); }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline void SetIpv6Cidr(const char* value) { m_ipv6CidrHasBeenSet = true; m_ipv6Cidr.assign(value); }

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline Ipv6CidrAssociation& WithIpv6Cidr(const Aws::String& value) { SetIpv6Cidr(value); return *this;}

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline Ipv6CidrAssociation& WithIpv6Cidr(Aws::String&& value) { SetIpv6Cidr(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR block.</p>
     */
    inline Ipv6CidrAssociation& WithIpv6Cidr(const char* value) { SetIpv6Cidr(value); return *this;}


    /**
     * <p>The resource that's associated with the IPv6 CIDR block.</p>
     */
    inline const Aws::String& GetAssociatedResource() const{ return m_associatedResource; }

    /**
     * <p>The resource that's associated with the IPv6 CIDR block.</p>
     */
    inline bool AssociatedResourceHasBeenSet() const { return m_associatedResourceHasBeenSet; }

    /**
     * <p>The resource that's associated with the IPv6 CIDR block.</p>
     */
    inline void SetAssociatedResource(const Aws::String& value) { m_associatedResourceHasBeenSet = true; m_associatedResource = value; }

    /**
     * <p>The resource that's associated with the IPv6 CIDR block.</p>
     */
    inline void SetAssociatedResource(Aws::String&& value) { m_associatedResourceHasBeenSet = true; m_associatedResource = std::move(value); }

    /**
     * <p>The resource that's associated with the IPv6 CIDR block.</p>
     */
    inline void SetAssociatedResource(const char* value) { m_associatedResourceHasBeenSet = true; m_associatedResource.assign(value); }

    /**
     * <p>The resource that's associated with the IPv6 CIDR block.</p>
     */
    inline Ipv6CidrAssociation& WithAssociatedResource(const Aws::String& value) { SetAssociatedResource(value); return *this;}

    /**
     * <p>The resource that's associated with the IPv6 CIDR block.</p>
     */
    inline Ipv6CidrAssociation& WithAssociatedResource(Aws::String&& value) { SetAssociatedResource(std::move(value)); return *this;}

    /**
     * <p>The resource that's associated with the IPv6 CIDR block.</p>
     */
    inline Ipv6CidrAssociation& WithAssociatedResource(const char* value) { SetAssociatedResource(value); return *this;}

  private:

    Aws::String m_ipv6Cidr;
    bool m_ipv6CidrHasBeenSet = false;

    Aws::String m_associatedResource;
    bool m_associatedResourceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
