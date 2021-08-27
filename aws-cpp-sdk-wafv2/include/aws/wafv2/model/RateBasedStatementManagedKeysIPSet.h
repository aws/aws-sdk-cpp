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
   *  <p>This is the latest version of <b>AWS WAF</b>, named AWS WAFV2,
   * released in November, 2019. For information, including how to migrate your AWS
   * WAF resources from the prior release, see the <a
   * href="https://docs.aws.amazon.com/waf/latest/developerguide/waf-chapter.html">AWS
   * WAF Developer Guide</a>. </p>  <p>The set of IP addresses that are
   * currently blocked for a rate-based statement.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/RateBasedStatementManagedKeysIPSet">AWS
   * API Reference</a></p>
   */
  class AWS_WAFV2_API RateBasedStatementManagedKeysIPSet
  {
  public:
    RateBasedStatementManagedKeysIPSet();
    RateBasedStatementManagedKeysIPSet(Aws::Utils::Json::JsonView jsonValue);
    RateBasedStatementManagedKeysIPSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const IPAddressVersion& GetIPAddressVersion() const{ return m_iPAddressVersion; }

    
    inline bool IPAddressVersionHasBeenSet() const { return m_iPAddressVersionHasBeenSet; }

    
    inline void SetIPAddressVersion(const IPAddressVersion& value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = value; }

    
    inline void SetIPAddressVersion(IPAddressVersion&& value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = std::move(value); }

    
    inline RateBasedStatementManagedKeysIPSet& WithIPAddressVersion(const IPAddressVersion& value) { SetIPAddressVersion(value); return *this;}

    
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
    bool m_iPAddressVersionHasBeenSet;

    Aws::Vector<Aws::String> m_addresses;
    bool m_addressesHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
