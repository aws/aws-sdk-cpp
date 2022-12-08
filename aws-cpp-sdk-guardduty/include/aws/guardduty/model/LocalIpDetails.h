/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the local IP address of the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/LocalIpDetails">AWS
   * API Reference</a></p>
   */
  class LocalIpDetails
  {
  public:
    AWS_GUARDDUTY_API LocalIpDetails();
    AWS_GUARDDUTY_API LocalIpDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API LocalIpDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The IPv4 local address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV4() const{ return m_ipAddressV4; }

    /**
     * <p>The IPv4 local address of the connection.</p>
     */
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }

    /**
     * <p>The IPv4 local address of the connection.</p>
     */
    inline void SetIpAddressV4(const Aws::String& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = value; }

    /**
     * <p>The IPv4 local address of the connection.</p>
     */
    inline void SetIpAddressV4(Aws::String&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::move(value); }

    /**
     * <p>The IPv4 local address of the connection.</p>
     */
    inline void SetIpAddressV4(const char* value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4.assign(value); }

    /**
     * <p>The IPv4 local address of the connection.</p>
     */
    inline LocalIpDetails& WithIpAddressV4(const Aws::String& value) { SetIpAddressV4(value); return *this;}

    /**
     * <p>The IPv4 local address of the connection.</p>
     */
    inline LocalIpDetails& WithIpAddressV4(Aws::String&& value) { SetIpAddressV4(std::move(value)); return *this;}

    /**
     * <p>The IPv4 local address of the connection.</p>
     */
    inline LocalIpDetails& WithIpAddressV4(const char* value) { SetIpAddressV4(value); return *this;}

  private:

    Aws::String m_ipAddressV4;
    bool m_ipAddressV4HasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
