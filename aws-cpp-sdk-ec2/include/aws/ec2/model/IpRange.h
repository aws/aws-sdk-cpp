/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Describes an IPv4 range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/IpRange">AWS API
   * Reference</a></p>
   */
  class AWS_EC2_API IpRange
  {
  public:
    IpRange();
    IpRange(const Aws::Utils::Xml::XmlNode& xmlNode);
    IpRange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The IPv4 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv4 address, use the /32 prefix
     * length.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>The IPv4 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv4 address, use the /32 prefix
     * length.</p>
     */
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>The IPv4 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv4 address, use the /32 prefix
     * length.</p>
     */
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }

    /**
     * <p>The IPv4 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv4 address, use the /32 prefix
     * length.</p>
     */
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }

    /**
     * <p>The IPv4 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv4 address, use the /32 prefix
     * length.</p>
     */
    inline IpRange& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}

    /**
     * <p>The IPv4 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv4 address, use the /32 prefix
     * length.</p>
     */
    inline IpRange& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}

    /**
     * <p>The IPv4 CIDR range. You can either specify a CIDR range or a source security
     * group, not both. To specify a single IPv4 address, use the /32 prefix
     * length.</p>
     */
    inline IpRange& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}


    /**
     * <p>A description for the security group rule that references this IPv4 address
     * range.</p> <p>Constraints: Up to 255 characters in length. Allowed characters
     * are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the security group rule that references this IPv4 address
     * range.</p> <p>Constraints: Up to 255 characters in length. Allowed characters
     * are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the security group rule that references this IPv4 address
     * range.</p> <p>Constraints: Up to 255 characters in length. Allowed characters
     * are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the security group rule that references this IPv4 address
     * range.</p> <p>Constraints: Up to 255 characters in length. Allowed characters
     * are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the security group rule that references this IPv4 address
     * range.</p> <p>Constraints: Up to 255 characters in length. Allowed characters
     * are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline IpRange& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the security group rule that references this IPv4 address
     * range.</p> <p>Constraints: Up to 255 characters in length. Allowed characters
     * are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline IpRange& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the security group rule that references this IPv4 address
     * range.</p> <p>Constraints: Up to 255 characters in length. Allowed characters
     * are a-z, A-Z, 0-9, spaces, and ._-:/()#,@[]+=;{}!$*</p>
     */
    inline IpRange& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
