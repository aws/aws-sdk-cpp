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
   * <p>Information about the IPv4 delegated prefixes assigned to a network
   * interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/Ipv4PrefixSpecificationResponse">AWS
   * API Reference</a></p>
   */
  class Ipv4PrefixSpecificationResponse
  {
  public:
    AWS_EC2_API Ipv4PrefixSpecificationResponse() = default;
    AWS_EC2_API Ipv4PrefixSpecificationResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API Ipv4PrefixSpecificationResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The IPv4 delegated prefixes assigned to the network interface.</p>
     */
    inline const Aws::String& GetIpv4Prefix() const { return m_ipv4Prefix; }
    inline bool Ipv4PrefixHasBeenSet() const { return m_ipv4PrefixHasBeenSet; }
    template<typename Ipv4PrefixT = Aws::String>
    void SetIpv4Prefix(Ipv4PrefixT&& value) { m_ipv4PrefixHasBeenSet = true; m_ipv4Prefix = std::forward<Ipv4PrefixT>(value); }
    template<typename Ipv4PrefixT = Aws::String>
    Ipv4PrefixSpecificationResponse& WithIpv4Prefix(Ipv4PrefixT&& value) { SetIpv4Prefix(std::forward<Ipv4PrefixT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipv4Prefix;
    bool m_ipv4PrefixHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
