/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/network-firewall/NetworkFirewall_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/network-firewall/model/IPAddressType.h>
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
namespace NetworkFirewall
{
namespace Model
{

  /**
   * <p>The ID for a subnet that you want to associate with the firewall. This is
   * used with <a>CreateFirewall</a> and <a>AssociateSubnets</a>. Network Firewall
   * creates an instance of the associated firewall in each subnet that you specify,
   * to filter traffic in the subnet's Availability Zone.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/network-firewall-2020-11-12/SubnetMapping">AWS
   * API Reference</a></p>
   */
  class SubnetMapping
  {
  public:
    AWS_NETWORKFIREWALL_API SubnetMapping();
    AWS_NETWORKFIREWALL_API SubnetMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API SubnetMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NETWORKFIREWALL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the subnet. </p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The unique identifier for the subnet. </p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The unique identifier for the subnet. </p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The unique identifier for the subnet. </p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The unique identifier for the subnet. </p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The unique identifier for the subnet. </p>
     */
    inline SubnetMapping& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The unique identifier for the subnet. </p>
     */
    inline SubnetMapping& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the subnet. </p>
     */
    inline SubnetMapping& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>The subnet's IP address type. You can't change the IP address type after you
     * create the subnet.</p>
     */
    inline const IPAddressType& GetIPAddressType() const{ return m_iPAddressType; }

    /**
     * <p>The subnet's IP address type. You can't change the IP address type after you
     * create the subnet.</p>
     */
    inline bool IPAddressTypeHasBeenSet() const { return m_iPAddressTypeHasBeenSet; }

    /**
     * <p>The subnet's IP address type. You can't change the IP address type after you
     * create the subnet.</p>
     */
    inline void SetIPAddressType(const IPAddressType& value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = value; }

    /**
     * <p>The subnet's IP address type. You can't change the IP address type after you
     * create the subnet.</p>
     */
    inline void SetIPAddressType(IPAddressType&& value) { m_iPAddressTypeHasBeenSet = true; m_iPAddressType = std::move(value); }

    /**
     * <p>The subnet's IP address type. You can't change the IP address type after you
     * create the subnet.</p>
     */
    inline SubnetMapping& WithIPAddressType(const IPAddressType& value) { SetIPAddressType(value); return *this;}

    /**
     * <p>The subnet's IP address type. You can't change the IP address type after you
     * create the subnet.</p>
     */
    inline SubnetMapping& WithIPAddressType(IPAddressType&& value) { SetIPAddressType(std::move(value)); return *this;}

  private:

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    IPAddressType m_iPAddressType;
    bool m_iPAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkFirewall
} // namespace Aws
