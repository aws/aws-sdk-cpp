﻿/**
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


    ///@{
    /**
     * <p>The IPv4 local address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV4() const{ return m_ipAddressV4; }
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }
    inline void SetIpAddressV4(const Aws::String& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = value; }
    inline void SetIpAddressV4(Aws::String&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::move(value); }
    inline void SetIpAddressV4(const char* value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4.assign(value); }
    inline LocalIpDetails& WithIpAddressV4(const Aws::String& value) { SetIpAddressV4(value); return *this;}
    inline LocalIpDetails& WithIpAddressV4(Aws::String&& value) { SetIpAddressV4(std::move(value)); return *this;}
    inline LocalIpDetails& WithIpAddressV4(const char* value) { SetIpAddressV4(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 local address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV6() const{ return m_ipAddressV6; }
    inline bool IpAddressV6HasBeenSet() const { return m_ipAddressV6HasBeenSet; }
    inline void SetIpAddressV6(const Aws::String& value) { m_ipAddressV6HasBeenSet = true; m_ipAddressV6 = value; }
    inline void SetIpAddressV6(Aws::String&& value) { m_ipAddressV6HasBeenSet = true; m_ipAddressV6 = std::move(value); }
    inline void SetIpAddressV6(const char* value) { m_ipAddressV6HasBeenSet = true; m_ipAddressV6.assign(value); }
    inline LocalIpDetails& WithIpAddressV6(const Aws::String& value) { SetIpAddressV6(value); return *this;}
    inline LocalIpDetails& WithIpAddressV6(Aws::String&& value) { SetIpAddressV6(std::move(value)); return *this;}
    inline LocalIpDetails& WithIpAddressV6(const char* value) { SetIpAddressV6(value); return *this;}
    ///@}
  private:

    Aws::String m_ipAddressV4;
    bool m_ipAddressV4HasBeenSet = false;

    Aws::String m_ipAddressV6;
    bool m_ipAddressV6HasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
