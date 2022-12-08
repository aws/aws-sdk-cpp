/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>A range of IPv6 addresses.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2SecurityGroupIpv6Range">AWS
   * API Reference</a></p>
   */
  class AwsEc2SecurityGroupIpv6Range
  {
  public:
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpv6Range();
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpv6Range(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2SecurityGroupIpv6Range& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IPv6 CIDR range. You can specify either a CIDR range or a source security
     * group, but not both. To specify a single IPv6 address, use the /128 prefix
     * length.</p>
     */
    inline const Aws::String& GetCidrIpv6() const{ return m_cidrIpv6; }

    /**
     * <p>The IPv6 CIDR range. You can specify either a CIDR range or a source security
     * group, but not both. To specify a single IPv6 address, use the /128 prefix
     * length.</p>
     */
    inline bool CidrIpv6HasBeenSet() const { return m_cidrIpv6HasBeenSet; }

    /**
     * <p>The IPv6 CIDR range. You can specify either a CIDR range or a source security
     * group, but not both. To specify a single IPv6 address, use the /128 prefix
     * length.</p>
     */
    inline void SetCidrIpv6(const Aws::String& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = value; }

    /**
     * <p>The IPv6 CIDR range. You can specify either a CIDR range or a source security
     * group, but not both. To specify a single IPv6 address, use the /128 prefix
     * length.</p>
     */
    inline void SetCidrIpv6(Aws::String&& value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6 = std::move(value); }

    /**
     * <p>The IPv6 CIDR range. You can specify either a CIDR range or a source security
     * group, but not both. To specify a single IPv6 address, use the /128 prefix
     * length.</p>
     */
    inline void SetCidrIpv6(const char* value) { m_cidrIpv6HasBeenSet = true; m_cidrIpv6.assign(value); }

    /**
     * <p>The IPv6 CIDR range. You can specify either a CIDR range or a source security
     * group, but not both. To specify a single IPv6 address, use the /128 prefix
     * length.</p>
     */
    inline AwsEc2SecurityGroupIpv6Range& WithCidrIpv6(const Aws::String& value) { SetCidrIpv6(value); return *this;}

    /**
     * <p>The IPv6 CIDR range. You can specify either a CIDR range or a source security
     * group, but not both. To specify a single IPv6 address, use the /128 prefix
     * length.</p>
     */
    inline AwsEc2SecurityGroupIpv6Range& WithCidrIpv6(Aws::String&& value) { SetCidrIpv6(std::move(value)); return *this;}

    /**
     * <p>The IPv6 CIDR range. You can specify either a CIDR range or a source security
     * group, but not both. To specify a single IPv6 address, use the /128 prefix
     * length.</p>
     */
    inline AwsEc2SecurityGroupIpv6Range& WithCidrIpv6(const char* value) { SetCidrIpv6(value); return *this;}

  private:

    Aws::String m_cidrIpv6;
    bool m_cidrIpv6HasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
