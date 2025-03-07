﻿/**
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
   * <p>Describes an IPv6 address range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipv6Range">AWS API
   * Reference</a></p>
   */
  class Ipv6Range
  {
  public:
    AWS_EC2_API Ipv6Range();
    AWS_EC2_API Ipv6Range(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ipv6Range& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A description for the security group rule that references this IPv6 address
     * range.</p> <p>Constraints: Up to 255 characters in length. Allowed characters
     * are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Ipv6Range& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Ipv6Range& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Ipv6Range& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 address range. You can either specify a CIDR block or a source
     * security group, not both. To specify a single IPv6 address, use the /128 prefix
     * length.</p>  <p> Amazon Web Services <a
     * href="https://en.wikipedia.org/wiki/Canonicalization">canonicalizes</a> IPv4 and
     * IPv6 CIDRs. For example, if you specify 100.68.0.18/18 for the CIDR block,
     * Amazon Web Services canonicalizes the CIDR block to 100.68.0.0/18. Any
     * subsequent DescribeSecurityGroups and DescribeSecurityGroupRules calls will
     * return the canonicalized form of the CIDR block. Additionally, if you attempt to
     * add another rule with the non-canonical form of the CIDR (such as
     * 100.68.0.18/18) and there is already a rule for the canonicalized form of the
     * CIDR block (such as 100.68.0.0/18), the API throws an duplicate rule error.</p>
     * 
     */
    inline const Aws::String& GetCidrIpv6() const{ return m_cidrIpv6; }
    inline bool CidrIpv6HasBeenSet() const { return m_cidrIpv6HasBeenSet; }
    inline void SetCidrIpv6(const Aws::String& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = value; }
    inline void SetCidrIpv6(Aws::String&& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = std::move(value); }
    inline void SetCidrIpv6(const char* value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6.assign(value); }
    inline Ipv6Range& WithCidrIpv6(const Aws::String& value) { SetCidrIpv6(value); return *this;}
    inline Ipv6Range& WithCidrIpv6(Aws::String&& value) { SetCidrIpv6(std::move(value)); return *this;}
    inline Ipv6Range& WithCidrIpv6(const char* value) { SetCidrIpv6(value); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_cidrIpv6;
    bool m_cidrIpv6HasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
