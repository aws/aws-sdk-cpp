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
   * <p>Information about the IPv4 delegated prefixes assigned to a network
   * interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipv4PrefixSpecificationResponse">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API Ipv4PrefixSpecificationResponse
  {
  public:
    Ipv4PrefixSpecificationResponse();
    Ipv4PrefixSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    Ipv4PrefixSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One or more IPv4 delegated prefixes assigned to the network interface.</p>
     */
    inline const Aws::String& GetIpv4Prefix() const{ return m_ipv4Prefix; }

    /**
     * <p>One or more IPv4 delegated prefixes assigned to the network interface.</p>
     */
    inline bool Ipv4PrefixHasBeenSet() const { return m_ipv4PrefixHasBeenSet; }

    /**
     * <p>One or more IPv4 delegated prefixes assigned to the network interface.</p>
     */
    inline void SetIpv4Prefix(const Aws::String& value) { m_ipv4PrefixHasBeenSet = true; m_ipv4Prefix = value; }

    /**
     * <p>One or more IPv4 delegated prefixes assigned to the network interface.</p>
     */
    inline void SetIpv4Prefix(Aws::String&& value) { m_ipv4PrefixHasBeenSet = true; m_ipv4Prefix = std::move(value); }

    /**
     * <p>One or more IPv4 delegated prefixes assigned to the network interface.</p>
     */
    inline void SetIpv4Prefix(const char* value) { m_ipv4PrefixHasBeenSet = true; m_ipv4Prefix.assign(value); }

    /**
     * <p>One or more IPv4 delegated prefixes assigned to the network interface.</p>
     */
    inline Ipv4PrefixSpecificationResponse& WithIpv4Prefix(const Aws::String& value) { SetIpv4Prefix(value); return *this;}

    /**
     * <p>One or more IPv4 delegated prefixes assigned to the network interface.</p>
     */
    inline Ipv4PrefixSpecificationResponse& WithIpv4Prefix(Aws::String&& value) { SetIpv4Prefix(std::move(value)); return *this;}

    /**
     * <p>One or more IPv4 delegated prefixes assigned to the network interface.</p>
     */
    inline Ipv4PrefixSpecificationResponse& WithIpv4Prefix(const char* value) { SetIpv4Prefix(value); return *this;}

  private:

    Aws::String m_ipv4Prefix;
    bool m_ipv4PrefixHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
