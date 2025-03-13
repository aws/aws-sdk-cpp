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
   * <p>Information about an IPv6 prefix.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceIpv6Prefix">AWS
   * API Reference</a></p>
   */
  class InstanceIpv6Prefix
  {
  public:
    AWS_EC2_API InstanceIpv6Prefix() = default;
    AWS_EC2_API InstanceIpv6Prefix(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceIpv6Prefix& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>One or more IPv6 prefixes assigned to the network interface.</p>
     */
    inline const Aws::String& GetIpv6Prefix() const { return m_ipv6Prefix; }
    inline bool Ipv6PrefixHasBeenSet() const { return m_ipv6PrefixHasBeenSet; }
    template<typename Ipv6PrefixT = Aws::String>
    void SetIpv6Prefix(Ipv6PrefixT&& value) { m_ipv6PrefixHasBeenSet = true; m_ipv6Prefix = std::forward<Ipv6PrefixT>(value); }
    template<typename Ipv6PrefixT = Aws::String>
    InstanceIpv6Prefix& WithIpv6Prefix(Ipv6PrefixT&& value) { SetIpv6Prefix(std::forward<Ipv6PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipv6Prefix;
    bool m_ipv6PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
