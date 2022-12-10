/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/IPAddressVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace WAFV2
{
namespace Model
{

  /**
   * <p>The set of IP addresses that are currently blocked for a
   * <a>RateBasedStatement</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateBasedStatementManagedKeysIPSet">AWS
   * API Reference</a></p>
   */
  class RateBasedStatementManagedKeysIPSet
  {
  public:
    AWS_WAFV2_API RateBasedStatementManagedKeysIPSet();
    AWS_WAFV2_API RateBasedStatementManagedKeysIPSet(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API RateBasedStatementManagedKeysIPSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WAFV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline const IPAddressVersion& GetIPAddressVersion() const{ return m_iPAddressVersion; }

    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline bool IPAddressVersionHasBeenSet() const { return m_iPAddressVersionHasBeenSet; }

    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline void SetIPAddressVersion(const IPAddressVersion& value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = value; }

    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline void SetIPAddressVersion(IPAddressVersion&& value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = std::move(value); }

    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline RateBasedStatementManagedKeysIPSet& WithIPAddressVersion(const IPAddressVersion& value) { SetIPAddressVersion(value); return *this;}

    /**
     * <p>The version of the IP addresses, either <code>IPV4</code> or
     * <code>IPV6</code>. </p>
     */
    inline RateBasedStatementManagedKeysIPSet& WithIPAddressVersion(IPAddressVersion&& value) { SetIPAddressVersion(std::move(value)); return *this;}


    /**
     * <p>The IP addresses that are currently blocked.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddresses() const{ return m_addresses; }

    /**
     * <p>The IP addresses that are currently blocked.</p>
     */
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }

    /**
     * <p>The IP addresses that are currently blocked.</p>
     */
    inline void SetAddresses(const Aws::Vector<Aws::String>& value) { m_addressesHasBeenSet = true; m_addresses = value; }

    /**
     * <p>The IP addresses that are currently blocked.</p>
     */
    inline void SetAddresses(Aws::Vector<Aws::String>&& value) { m_addressesHasBeenSet = true; m_addresses = std::move(value); }

    /**
     * <p>The IP addresses that are currently blocked.</p>
     */
    inline RateBasedStatementManagedKeysIPSet& WithAddresses(const Aws::Vector<Aws::String>& value) { SetAddresses(value); return *this;}

    /**
     * <p>The IP addresses that are currently blocked.</p>
     */
    inline RateBasedStatementManagedKeysIPSet& WithAddresses(Aws::Vector<Aws::String>&& value) { SetAddresses(std::move(value)); return *this;}

    /**
     * <p>The IP addresses that are currently blocked.</p>
     */
    inline RateBasedStatementManagedKeysIPSet& AddAddresses(const Aws::String& value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }

    /**
     * <p>The IP addresses that are currently blocked.</p>
     */
    inline RateBasedStatementManagedKeysIPSet& AddAddresses(Aws::String&& value) { m_addressesHasBeenSet = true; m_addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>The IP addresses that are currently blocked.</p>
     */
    inline RateBasedStatementManagedKeysIPSet& AddAddresses(const char* value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }

  private:

    IPAddressVersion m_iPAddressVersion;
    bool m_iPAddressVersionHasBeenSet = false;

    Aws::Vector<Aws::String> m_addresses;
    bool m_addressesHasBeenSet = false;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
