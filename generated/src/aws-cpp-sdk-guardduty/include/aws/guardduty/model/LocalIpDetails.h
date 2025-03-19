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
    AWS_GUARDDUTY_API LocalIpDetails() = default;
    AWS_GUARDDUTY_API LocalIpDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API LocalIpDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The IPv4 local address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV4() const { return m_ipAddressV4; }
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }
    template<typename IpAddressV4T = Aws::String>
    void SetIpAddressV4(IpAddressV4T&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::forward<IpAddressV4T>(value); }
    template<typename IpAddressV4T = Aws::String>
    LocalIpDetails& WithIpAddressV4(IpAddressV4T&& value) { SetIpAddressV4(std::forward<IpAddressV4T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPv6 local address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV6() const { return m_ipAddressV6; }
    inline bool IpAddressV6HasBeenSet() const { return m_ipAddressV6HasBeenSet; }
    template<typename IpAddressV6T = Aws::String>
    void SetIpAddressV6(IpAddressV6T&& value) { m_ipAddressV6HasBeenSet = true; m_ipAddressV6 = std::forward<IpAddressV6T>(value); }
    template<typename IpAddressV6T = Aws::String>
    LocalIpDetails& WithIpAddressV6(IpAddressV6T&& value) { SetIpAddressV6(std::forward<IpAddressV6T>(value)); return *this;}
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
