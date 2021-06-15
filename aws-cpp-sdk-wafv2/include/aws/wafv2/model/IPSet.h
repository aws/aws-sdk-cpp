/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wafv2/model/IPAddressVersion.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Contains one or more IP addresses or blocks of IP addresses specified in
   * Classless Inter-Domain Routing (CIDR) notation. AWS WAF supports all IPv4 and
   * IPv6 CIDR ranges except for /0. For information about CIDR notation, see the
   * Wikipedia entry <a
   * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
   * Inter-Domain Routing</a>. </p> <p>AWS WAF assigns an ARN to each
   * <code>IPSet</code> that you create. To use an IP set in a rule, you provide the
   * ARN to the <a>Rule</a> statement <a>IPSetReferenceStatement</a>. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wafv2-2019-07-29/IPSet">AWS API
   * Reference</a></p>
   */
  class AWS_WAFV2_API IPSet
  {
  public:
    IPSet();
    IPSet(Aws::Utils::Json::JsonView jsonValue);
    IPSet& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline IPSet& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline IPSet& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the IP set. You cannot change the name of an <code>IPSet</code>
     * after you create it.</p>
     */
    inline IPSet& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline IPSet& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline IPSet& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the set. This ID is returned in the responses to
     * create and list commands. You provide it to operations like update and
     * delete.</p>
     */
    inline IPSet& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline IPSet& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline IPSet& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the entity.</p>
     */
    inline IPSet& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline IPSet& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline IPSet& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the IP set that helps with identification. </p>
     */
    inline IPSet& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specify IPV4 or IPV6. </p>
     */
    inline const IPAddressVersion& GetIPAddressVersion() const{ return m_iPAddressVersion; }

    /**
     * <p>Specify IPV4 or IPV6. </p>
     */
    inline bool IPAddressVersionHasBeenSet() const { return m_iPAddressVersionHasBeenSet; }

    /**
     * <p>Specify IPV4 or IPV6. </p>
     */
    inline void SetIPAddressVersion(const IPAddressVersion& value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = value; }

    /**
     * <p>Specify IPV4 or IPV6. </p>
     */
    inline void SetIPAddressVersion(IPAddressVersion&& value) { m_iPAddressVersionHasBeenSet = true; m_iPAddressVersion = std::move(value); }

    /**
     * <p>Specify IPV4 or IPV6. </p>
     */
    inline IPSet& WithIPAddressVersion(const IPAddressVersion& value) { SetIPAddressVersion(value); return *this;}

    /**
     * <p>Specify IPV4 or IPV6. </p>
     */
    inline IPSet& WithIPAddressVersion(IPAddressVersion&& value) { SetIPAddressVersion(std::move(value)); return *this;}


    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddresses() const{ return m_addresses; }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline bool AddressesHasBeenSet() const { return m_addressesHasBeenSet; }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetAddresses(const Aws::Vector<Aws::String>& value) { m_addressesHasBeenSet = true; m_addresses = value; }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline void SetAddresses(Aws::Vector<Aws::String>&& value) { m_addressesHasBeenSet = true; m_addresses = std::move(value); }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline IPSet& WithAddresses(const Aws::Vector<Aws::String>& value) { SetAddresses(value); return *this;}

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline IPSet& WithAddresses(Aws::Vector<Aws::String>&& value) { SetAddresses(std::move(value)); return *this;}

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline IPSet& AddAddresses(const Aws::String& value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline IPSet& AddAddresses(Aws::String&& value) { m_addressesHasBeenSet = true; m_addresses.push_back(std::move(value)); return *this; }

    /**
     * <p>Contains an array of strings that specify one or more IP addresses or blocks
     * of IP addresses in Classless Inter-Domain Routing (CIDR) notation. AWS WAF
     * supports all IPv4 and IPv6 CIDR ranges except for /0. </p> <p>Examples: </p>
     * <ul> <li> <p>To configure AWS WAF to allow, block, or count requests that
     * originated from the IP address 192.0.2.44, specify
     * <code>192.0.2.44/32</code>.</p> </li> <li> <p>To configure AWS WAF to allow,
     * block, or count requests that originated from IP addresses from 192.0.2.0 to
     * 192.0.2.255, specify <code>192.0.2.0/24</code>.</p> </li> <li> <p>To configure
     * AWS WAF to allow, block, or count requests that originated from the IP address
     * 1111:0000:0000:0000:0000:0000:0000:0111, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0111/128</code>.</p> </li> <li> <p>To
     * configure AWS WAF to allow, block, or count requests that originated from IP
     * addresses 1111:0000:0000:0000:0000:0000:0000:0000 to
     * 1111:0000:0000:0000:ffff:ffff:ffff:ffff, specify
     * <code>1111:0000:0000:0000:0000:0000:0000:0000/64</code>.</p> </li> </ul> <p>For
     * more information about CIDR notation, see the Wikipedia entry <a
     * href="https://en.wikipedia.org/wiki/Classless_Inter-Domain_Routing">Classless
     * Inter-Domain Routing</a>.</p>
     */
    inline IPSet& AddAddresses(const char* value) { m_addressesHasBeenSet = true; m_addresses.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    IPAddressVersion m_iPAddressVersion;
    bool m_iPAddressVersionHasBeenSet;

    Aws::Vector<Aws::String> m_addresses;
    bool m_addressesHasBeenSet;
  };

} // namespace Model
} // namespace WAFV2
} // namespace Aws
