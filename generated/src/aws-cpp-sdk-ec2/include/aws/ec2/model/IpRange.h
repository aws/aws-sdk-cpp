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
    AWS_EC2_API IpRange();
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
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline IpRange& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline IpRange& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline IpRange& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv4 address range. You can either specify a CIDR block or a source
     * security group, not both. To specify a single IPv4 address, use the /32 prefix
     * length.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }
    inline IpRange& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}
    inline IpRange& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}
    inline IpRange& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}
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
