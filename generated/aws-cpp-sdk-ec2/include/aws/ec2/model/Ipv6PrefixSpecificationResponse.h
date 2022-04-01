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
   * <p>Information about the IPv6 delegated prefixes assigned to a network
   * interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipv6PrefixSpecificationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API Ipv6PrefixSpecificationResponse
  {
  public:
    Ipv6PrefixSpecificationResponse();
    Ipv6PrefixSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    Ipv6PrefixSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more IPv6 delegated prefixes assigned to the network interface.</p>
     */
    inline const Aws::String& GetIpv6Prefix() const{ return m_ipv6Prefix; }

    /**
     * <p>One or more IPv6 delegated prefixes assigned to the network interface.</p>
     */
    inline bool Ipv6PrefixHasBeenSet() const { return m_ipv6PrefixHasBeenSet; }

    /**
     * <p>One or more IPv6 delegated prefixes assigned to the network interface.</p>
     */
    inline void SetIpv6Prefix(const Aws::String& value) { m_ipv6PrefixHasBeenSet = true; m_ipv6Prefix = value; }

    /**
     * <p>One or more IPv6 delegated prefixes assigned to the network interface.</p>
     */
    inline void SetIpv6Prefix(Aws::String&& value) { m_ipv6PrefixHasBeenSet = true; m_ipv6Prefix = std::move(value); }

    /**
     * <p>One or more IPv6 delegated prefixes assigned to the network interface.</p>
     */
    inline void SetIpv6Prefix(const char* value) { m_ipv6PrefixHasBeenSet = true; m_ipv6Prefix.assign(value); }

    /**
     * <p>One or more IPv6 delegated prefixes assigned to the network interface.</p>
     */
    inline Ipv6PrefixSpecificationResponse& WithIpv6Prefix(const Aws::String& value) { SetIpv6Prefix(value); return *this;}

    /**
     * <p>One or more IPv6 delegated prefixes assigned to the network interface.</p>
     */
    inline Ipv6PrefixSpecificationResponse& WithIpv6Prefix(Aws::String&& value) { SetIpv6Prefix(std::move(value)); return *this;}

    /**
     * <p>One or more IPv6 delegated prefixes assigned to the network interface.</p>
     */
    inline Ipv6PrefixSpecificationResponse& WithIpv6Prefix(const char* value) { SetIpv6Prefix(value); return *this;}

  private:

    Aws::String m_ipv6Prefix;
    bool m_ipv6PrefixHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
