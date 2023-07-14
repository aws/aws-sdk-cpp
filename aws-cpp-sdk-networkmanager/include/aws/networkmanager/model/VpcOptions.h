/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>

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
namespace NetworkManager
{
namespace Model
{

  /**
   * <p>Describes the VPC options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/networkmanager-2019-07-05/VpcOptions">AWS
   * API Reference</a></p>
   */
  class AWS_NETWORKMANAGER_API VpcOptions
  {
  public:
    VpcOptions();
    VpcOptions(Aws::Utils::Json::JsonView jsonValue);
    VpcOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline bool GetIpv6Support() const{ return m_ipv6Support; }

    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline bool Ipv6SupportHasBeenSet() const { return m_ipv6SupportHasBeenSet; }

    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline void SetIpv6Support(bool value) { m_ipv6SupportHasBeenSet = true; m_ipv6Support = value; }

    /**
     * <p>Indicates whether IPv6 is supported.</p>
     */
    inline VpcOptions& WithIpv6Support(bool value) { SetIpv6Support(value); return *this;}

  private:

    bool m_ipv6Support;
    bool m_ipv6SupportHasBeenSet;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
