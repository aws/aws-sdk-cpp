/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Prefixes of the subnet IP.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/SubnetIpPrefixes">AWS
   * API Reference</a></p>
   */
  class SubnetIpPrefixes
  {
  public:
    AWS_EC2_API SubnetIpPrefixes() = default;
    AWS_EC2_API SubnetIpPrefixes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SubnetIpPrefixes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const { return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    template<typename SubnetIdT = Aws::String>
    void SetSubnetId(SubnetIdT&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::forward<SubnetIdT>(value); }
    template<typename SubnetIdT = Aws::String>
    SubnetIpPrefixes& WithSubnetId(SubnetIdT&& value) { SetSubnetId(std::forward<SubnetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of SubnetIpPrefixes objects.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpPrefixes() const { return m_ipPrefixes; }
    inline bool IpPrefixesHasBeenSet() const { return m_ipPrefixesHasBeenSet; }
    template<typename IpPrefixesT = Aws::Vector<Aws::String>>
    void SetIpPrefixes(IpPrefixesT&& value) { m_ipPrefixesHasBeenSet = true; m_ipPrefixes = std::forward<IpPrefixesT>(value); }
    template<typename IpPrefixesT = Aws::Vector<Aws::String>>
    SubnetIpPrefixes& WithIpPrefixes(IpPrefixesT&& value) { SetIpPrefixes(std::forward<IpPrefixesT>(value)); return *this;}
    template<typename IpPrefixesT = Aws::String>
    SubnetIpPrefixes& AddIpPrefixes(IpPrefixesT&& value) { m_ipPrefixesHasBeenSet = true; m_ipPrefixes.emplace_back(std::forward<IpPrefixesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_ipPrefixes;
    bool m_ipPrefixesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
