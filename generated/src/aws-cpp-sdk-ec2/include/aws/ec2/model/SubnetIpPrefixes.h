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
    AWS_EC2_API SubnetIpPrefixes();
    AWS_EC2_API SubnetIpPrefixes(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API SubnetIpPrefixes& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }
    inline SubnetIpPrefixes& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}
    inline SubnetIpPrefixes& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}
    inline SubnetIpPrefixes& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Array of SubnetIpPrefixes objects.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIpPrefixes() const{ return m_ipPrefixes; }
    inline bool IpPrefixesHasBeenSet() const { return m_ipPrefixesHasBeenSet; }
    inline void SetIpPrefixes(const Aws::Vector<Aws::String>& value) { m_ipPrefixesHasBeenSet = true; m_ipPrefixes = value; }
    inline void SetIpPrefixes(Aws::Vector<Aws::String>&& value) { m_ipPrefixesHasBeenSet = true; m_ipPrefixes = std::move(value); }
    inline SubnetIpPrefixes& WithIpPrefixes(const Aws::Vector<Aws::String>& value) { SetIpPrefixes(value); return *this;}
    inline SubnetIpPrefixes& WithIpPrefixes(Aws::Vector<Aws::String>&& value) { SetIpPrefixes(std::move(value)); return *this;}
    inline SubnetIpPrefixes& AddIpPrefixes(const Aws::String& value) { m_ipPrefixesHasBeenSet = true; m_ipPrefixes.push_back(value); return *this; }
    inline SubnetIpPrefixes& AddIpPrefixes(Aws::String&& value) { m_ipPrefixesHasBeenSet = true; m_ipPrefixes.push_back(std::move(value)); return *this; }
    inline SubnetIpPrefixes& AddIpPrefixes(const char* value) { m_ipPrefixesHasBeenSet = true; m_ipPrefixes.push_back(value); return *this; }
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
