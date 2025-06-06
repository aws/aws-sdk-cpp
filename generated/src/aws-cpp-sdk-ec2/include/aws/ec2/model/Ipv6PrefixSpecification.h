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
   * <p>Describes the IPv6 prefix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipv6PrefixSpecification">AWS
   * API Reference</a></p>
   */
  class Ipv6PrefixSpecification
  {
  public:
    AWS_EC2_API Ipv6PrefixSpecification() = default;
    AWS_EC2_API Ipv6PrefixSpecification(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ipv6PrefixSpecification& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPv6 prefix.</p>
     */
    inline const Aws::String& GetIpv6Prefix() const { return m_ipv6Prefix; }
    inline bool Ipv6PrefixHasBeenSet() const { return m_ipv6PrefixHasBeenSet; }
    template<typename Ipv6PrefixT = Aws::String>
    void SetIpv6Prefix(Ipv6PrefixT&& value) { m_ipv6PrefixHasBeenSet = true; m_ipv6Prefix = std::forward<Ipv6PrefixT>(value); }
    template<typename Ipv6PrefixT = Aws::String>
    Ipv6PrefixSpecification& WithIpv6Prefix(Ipv6PrefixT&& value) { SetIpv6Prefix(std::forward<Ipv6PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipv6Prefix;
    bool m_ipv6PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
