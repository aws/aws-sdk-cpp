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
   * <p>[EC2-VPC only] Describes an IPv6 range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipv6Range">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API Ipv6Range
  {
  public:
    Ipv6Range();
    Ipv6Range(const Aws::Utils::Xml::XmlNode& xmlNode);
    Ipv6Range& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;

    /**
     * <p>The IPv6 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv6 address, use the /128 prefix.</p>
     */
    inline const Aws::String& GetCidrIpv6() const{ return m_cidrIpv6; }

    /**
     * <p>The IPv6 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv6 address, use the /128 prefix.</p>
     */
    inline void SetCidrIpv6(const Aws::String& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = value; }

    /**
     * <p>The IPv6 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv6 address, use the /128 prefix.</p>
     */
    inline void SetCidrIpv6(Aws::String&& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = value; }

    /**
     * <p>The IPv6 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv6 address, use the /128 prefix.</p>
     */
    inline void SetCidrIpv6(const char* value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6.assign(value); }

    /**
     * <p>The IPv6 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv6 address, use the /128 prefix.</p>
     */
    inline Ipv6Range& WithCidrIpv6(const Aws::String& value) { SetCidrIpv6(value); return *this;}

    /**
     * <p>The IPv6 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv6 address, use the /128 prefix.</p>
     */
    inline Ipv6Range& WithCidrIpv6(Aws::String&& value) { SetCidrIpv6(value); return *this;}

    /**
     * <p>The IPv6 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv6 address, use the /128 prefix.</p>
     */
    inline Ipv6Range& WithCidrIpv6(const char* value) { SetCidrIpv6(value); return *this;}

  private:
    Aws::String m_cidrIpv6;
    bool m_cidrIpv6HasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
