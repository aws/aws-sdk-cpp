/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Describes an IP range.</p>
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
     * <p>The CIDR range. You can either specify a CIDR range or a source security
     * group, not both.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>The CIDR range. You can either specify a CIDR range or a source security
     * group, not both.</p>
     */
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>The CIDR range. You can either specify a CIDR range or a source security
     * group, not both.</p>
     */
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>The CIDR range. You can either specify a CIDR range or a source security
     * group, not both.</p>
     */
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }

    /**
     * <p>The CIDR range. You can either specify a CIDR range or a source security
     * group, not both.</p>
     */
    inline IpRange& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}

    /**
     * <p>The CIDR range. You can either specify a CIDR range or a source security
     * group, not both.</p>
     */
    inline IpRange& WithCidrIp(Aws::String&& value) { SetCidrIp(value); return *this;}

    /**
     * <p>The CIDR range. You can either specify a CIDR range or a source security
     * group, not both.</p>
     */
    inline IpRange& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}

  private:
    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
