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
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>A range of IPv4 addresses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2SecurityGroupIpRange">AWS
   * API Reference</a></p>
   */
  class AWS_SECURITYHUB_API AwsEc2SecurityGroupIpRange
  {
  public:
    AwsEc2SecurityGroupIpRange();
    AwsEc2SecurityGroupIpRange(Aws::Utils::Json::JsonView jsonValue);
    AwsEc2SecurityGroupIpRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IPv4 CIDR range. You can either specify either a CIDR range or a source
     * security group, but not both. To specify a single IPv4 address, use the /32
     * prefix length.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>The IPv4 CIDR range. You can either specify either a CIDR range or a source
     * security group, but not both. To specify a single IPv4 address, use the /32
     * prefix length.</p>
     */
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }

    /**
     * <p>The IPv4 CIDR range. You can either specify either a CIDR range or a source
     * security group, but not both. To specify a single IPv4 address, use the /32
     * prefix length.</p>
     */
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>The IPv4 CIDR range. You can either specify either a CIDR range or a source
     * security group, but not both. To specify a single IPv4 address, use the /32
     * prefix length.</p>
     */
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }

    /**
     * <p>The IPv4 CIDR range. You can either specify either a CIDR range or a source
     * security group, but not both. To specify a single IPv4 address, use the /32
     * prefix length.</p>
     */
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }

    /**
     * <p>The IPv4 CIDR range. You can either specify either a CIDR range or a source
     * security group, but not both. To specify a single IPv4 address, use the /32
     * prefix length.</p>
     */
    inline AwsEc2SecurityGroupIpRange& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}

    /**
     * <p>The IPv4 CIDR range. You can either specify either a CIDR range or a source
     * security group, but not both. To specify a single IPv4 address, use the /32
     * prefix length.</p>
     */
    inline AwsEc2SecurityGroupIpRange& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}

    /**
     * <p>The IPv4 CIDR range. You can either specify either a CIDR range or a source
     * security group, but not both. To specify a single IPv4 address, use the /32
     * prefix length.</p>
     */
    inline AwsEc2SecurityGroupIpRange& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}

  private:

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
