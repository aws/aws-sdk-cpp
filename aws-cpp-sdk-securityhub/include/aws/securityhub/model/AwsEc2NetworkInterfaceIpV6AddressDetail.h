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
   * <p>Provides information about an IPV6 address that is associated with the
   * network interface.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsEc2NetworkInterfaceIpV6AddressDetail">AWS
   * API Reference</a></p>
   */
  class AwsEc2NetworkInterfaceIpV6AddressDetail
  {
  public:
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceIpV6AddressDetail();
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceIpV6AddressDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsEc2NetworkInterfaceIpV6AddressDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IPV6 address.</p>
     */
    inline const Aws::String& GetIpV6Address() const{ return m_ipV6Address; }

    /**
     * <p>The IPV6 address.</p>
     */
    inline bool IpV6AddressHasBeenSet() const { return m_ipV6AddressHasBeenSet; }

    /**
     * <p>The IPV6 address.</p>
     */
    inline void SetIpV6Address(const Aws::String& value) { m_ipV6AddressHasBeenSet = true; m_ipV6Address = value; }

    /**
     * <p>The IPV6 address.</p>
     */
    inline void SetIpV6Address(Aws::String&& value) { m_ipV6AddressHasBeenSet = true; m_ipV6Address = std::move(value); }

    /**
     * <p>The IPV6 address.</p>
     */
    inline void SetIpV6Address(const char* value) { m_ipV6AddressHasBeenSet = true; m_ipV6Address.assign(value); }

    /**
     * <p>The IPV6 address.</p>
     */
    inline AwsEc2NetworkInterfaceIpV6AddressDetail& WithIpV6Address(const Aws::String& value) { SetIpV6Address(value); return *this;}

    /**
     * <p>The IPV6 address.</p>
     */
    inline AwsEc2NetworkInterfaceIpV6AddressDetail& WithIpV6Address(Aws::String&& value) { SetIpV6Address(std::move(value)); return *this;}

    /**
     * <p>The IPV6 address.</p>
     */
    inline AwsEc2NetworkInterfaceIpV6AddressDetail& WithIpV6Address(const char* value) { SetIpV6Address(value); return *this;}

  private:

    Aws::String m_ipV6Address;
    bool m_ipV6AddressHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
