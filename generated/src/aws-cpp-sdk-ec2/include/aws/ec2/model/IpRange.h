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
   * <p>Describes an IPv4 address range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpRange">AWS API
   * Reference</a></p>
   */
  class IpRange
  {
  public:
    AWS_EC2_API IpRange() = default;
    AWS_EC2_API IpRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API IpRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A description for the security group rule that references this IPv4 address
     * range.</p> <p>Constraints: Up to 255 characters in length. Allowed characters
     * are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=&amp;;{}!$*</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    IpRange& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range. You can either specify a CIDR block or a source
     * security group, not both. To specify a single IPv4 address, use the /32 prefix
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
    inline const Aws::String& GetCidrIp() const { return m_cidrIp; }
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }
    template<typename CidrIpT = Aws::String>
    void SetCidrIp(CidrIpT&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::forward<CidrIpT>(value); }
    template<typename CidrIpT = Aws::String>
    IpRange& WithCidrIp(CidrIpT&& value) { SetCidrIp(std::forward<CidrIpT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
