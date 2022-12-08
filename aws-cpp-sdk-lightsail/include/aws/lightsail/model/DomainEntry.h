/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes a domain recordset entry.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/DomainEntry">AWS
   * API Reference</a></p>
   */
  class DomainEntry
  {
  public:
    AWS_LIGHTSAIL_API DomainEntry();
    AWS_LIGHTSAIL_API DomainEntry(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API DomainEntry& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LIGHTSAIL_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline DomainEntry& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline DomainEntry& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the domain recordset entry.</p>
     */
    inline DomainEntry& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The name of the domain.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the domain.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainEntry& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainEntry& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain.</p>
     */
    inline DomainEntry& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The target IP address (e.g., <code>192.0.2.0</code>), or AWS name server
     * (e.g., <code>ns-111.awsdns-22.com.</code>).</p> <p>For Lightsail load balancers,
     * the value looks like
     * <code>ab1234c56789c6b86aba6fb203d443bc-123456789.us-east-2.elb.amazonaws.com</code>.
     * For Lightsail distributions, the value looks like
     * <code>exampled1182ne.cloudfront.net</code>. For Lightsail container services,
     * the value looks like
     * <code>container-service-1.example23scljs.us-west-2.cs.amazonlightsail.com</code>.
     * Be sure to also set <code>isAlias</code> to <code>true</code> when setting up an
     * A record for a Lightsail load balancer, distribution, or container service.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The target IP address (e.g., <code>192.0.2.0</code>), or AWS name server
     * (e.g., <code>ns-111.awsdns-22.com.</code>).</p> <p>For Lightsail load balancers,
     * the value looks like
     * <code>ab1234c56789c6b86aba6fb203d443bc-123456789.us-east-2.elb.amazonaws.com</code>.
     * For Lightsail distributions, the value looks like
     * <code>exampled1182ne.cloudfront.net</code>. For Lightsail container services,
     * the value looks like
     * <code>container-service-1.example23scljs.us-west-2.cs.amazonlightsail.com</code>.
     * Be sure to also set <code>isAlias</code> to <code>true</code> when setting up an
     * A record for a Lightsail load balancer, distribution, or container service.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target IP address (e.g., <code>192.0.2.0</code>), or AWS name server
     * (e.g., <code>ns-111.awsdns-22.com.</code>).</p> <p>For Lightsail load balancers,
     * the value looks like
     * <code>ab1234c56789c6b86aba6fb203d443bc-123456789.us-east-2.elb.amazonaws.com</code>.
     * For Lightsail distributions, the value looks like
     * <code>exampled1182ne.cloudfront.net</code>. For Lightsail container services,
     * the value looks like
     * <code>container-service-1.example23scljs.us-west-2.cs.amazonlightsail.com</code>.
     * Be sure to also set <code>isAlias</code> to <code>true</code> when setting up an
     * A record for a Lightsail load balancer, distribution, or container service.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target IP address (e.g., <code>192.0.2.0</code>), or AWS name server
     * (e.g., <code>ns-111.awsdns-22.com.</code>).</p> <p>For Lightsail load balancers,
     * the value looks like
     * <code>ab1234c56789c6b86aba6fb203d443bc-123456789.us-east-2.elb.amazonaws.com</code>.
     * For Lightsail distributions, the value looks like
     * <code>exampled1182ne.cloudfront.net</code>. For Lightsail container services,
     * the value looks like
     * <code>container-service-1.example23scljs.us-west-2.cs.amazonlightsail.com</code>.
     * Be sure to also set <code>isAlias</code> to <code>true</code> when setting up an
     * A record for a Lightsail load balancer, distribution, or container service.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target IP address (e.g., <code>192.0.2.0</code>), or AWS name server
     * (e.g., <code>ns-111.awsdns-22.com.</code>).</p> <p>For Lightsail load balancers,
     * the value looks like
     * <code>ab1234c56789c6b86aba6fb203d443bc-123456789.us-east-2.elb.amazonaws.com</code>.
     * For Lightsail distributions, the value looks like
     * <code>exampled1182ne.cloudfront.net</code>. For Lightsail container services,
     * the value looks like
     * <code>container-service-1.example23scljs.us-west-2.cs.amazonlightsail.com</code>.
     * Be sure to also set <code>isAlias</code> to <code>true</code> when setting up an
     * A record for a Lightsail load balancer, distribution, or container service.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The target IP address (e.g., <code>192.0.2.0</code>), or AWS name server
     * (e.g., <code>ns-111.awsdns-22.com.</code>).</p> <p>For Lightsail load balancers,
     * the value looks like
     * <code>ab1234c56789c6b86aba6fb203d443bc-123456789.us-east-2.elb.amazonaws.com</code>.
     * For Lightsail distributions, the value looks like
     * <code>exampled1182ne.cloudfront.net</code>. For Lightsail container services,
     * the value looks like
     * <code>container-service-1.example23scljs.us-west-2.cs.amazonlightsail.com</code>.
     * Be sure to also set <code>isAlias</code> to <code>true</code> when setting up an
     * A record for a Lightsail load balancer, distribution, or container service.</p>
     */
    inline DomainEntry& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The target IP address (e.g., <code>192.0.2.0</code>), or AWS name server
     * (e.g., <code>ns-111.awsdns-22.com.</code>).</p> <p>For Lightsail load balancers,
     * the value looks like
     * <code>ab1234c56789c6b86aba6fb203d443bc-123456789.us-east-2.elb.amazonaws.com</code>.
     * For Lightsail distributions, the value looks like
     * <code>exampled1182ne.cloudfront.net</code>. For Lightsail container services,
     * the value looks like
     * <code>container-service-1.example23scljs.us-west-2.cs.amazonlightsail.com</code>.
     * Be sure to also set <code>isAlias</code> to <code>true</code> when setting up an
     * A record for a Lightsail load balancer, distribution, or container service.</p>
     */
    inline DomainEntry& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The target IP address (e.g., <code>192.0.2.0</code>), or AWS name server
     * (e.g., <code>ns-111.awsdns-22.com.</code>).</p> <p>For Lightsail load balancers,
     * the value looks like
     * <code>ab1234c56789c6b86aba6fb203d443bc-123456789.us-east-2.elb.amazonaws.com</code>.
     * For Lightsail distributions, the value looks like
     * <code>exampled1182ne.cloudfront.net</code>. For Lightsail container services,
     * the value looks like
     * <code>container-service-1.example23scljs.us-west-2.cs.amazonlightsail.com</code>.
     * Be sure to also set <code>isAlias</code> to <code>true</code> when setting up an
     * A record for a Lightsail load balancer, distribution, or container service.</p>
     */
    inline DomainEntry& WithTarget(const char* value) { SetTarget(value); return *this;}


    /**
     * <p>When <code>true</code>, specifies whether the domain entry is an alias used
     * by the Lightsail load balancer. You can include an alias (A type) record in your
     * request, which points to a load balancer DNS name and routes traffic to your
     * load balancer.</p>
     */
    inline bool GetIsAlias() const{ return m_isAlias; }

    /**
     * <p>When <code>true</code>, specifies whether the domain entry is an alias used
     * by the Lightsail load balancer. You can include an alias (A type) record in your
     * request, which points to a load balancer DNS name and routes traffic to your
     * load balancer.</p>
     */
    inline bool IsAliasHasBeenSet() const { return m_isAliasHasBeenSet; }

    /**
     * <p>When <code>true</code>, specifies whether the domain entry is an alias used
     * by the Lightsail load balancer. You can include an alias (A type) record in your
     * request, which points to a load balancer DNS name and routes traffic to your
     * load balancer.</p>
     */
    inline void SetIsAlias(bool value) { m_isAliasHasBeenSet = true; m_isAlias = value; }

    /**
     * <p>When <code>true</code>, specifies whether the domain entry is an alias used
     * by the Lightsail load balancer. You can include an alias (A type) record in your
     * request, which points to a load balancer DNS name and routes traffic to your
     * load balancer.</p>
     */
    inline DomainEntry& WithIsAlias(bool value) { SetIsAlias(value); return *this;}


    /**
     * <p>The type of domain entry, such as address for IPv4 (A), address for IPv6
     * (AAAA), canonical name (CNAME), mail exchanger (MX), name server (NS), start of
     * authority (SOA), service locator (SRV), or text (TXT).</p> <p>The following
     * domain entry types can be used:</p> <ul> <li> <p> <code>A</code> </p> </li> <li>
     * <p> <code>AAAA</code> </p> </li> <li> <p> <code>CNAME</code> </p> </li> <li> <p>
     * <code>MX</code> </p> </li> <li> <p> <code>NS</code> </p> </li> <li> <p>
     * <code>SOA</code> </p> </li> <li> <p> <code>SRV</code> </p> </li> <li> <p>
     * <code>TXT</code> </p> </li> </ul>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of domain entry, such as address for IPv4 (A), address for IPv6
     * (AAAA), canonical name (CNAME), mail exchanger (MX), name server (NS), start of
     * authority (SOA), service locator (SRV), or text (TXT).</p> <p>The following
     * domain entry types can be used:</p> <ul> <li> <p> <code>A</code> </p> </li> <li>
     * <p> <code>AAAA</code> </p> </li> <li> <p> <code>CNAME</code> </p> </li> <li> <p>
     * <code>MX</code> </p> </li> <li> <p> <code>NS</code> </p> </li> <li> <p>
     * <code>SOA</code> </p> </li> <li> <p> <code>SRV</code> </p> </li> <li> <p>
     * <code>TXT</code> </p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of domain entry, such as address for IPv4 (A), address for IPv6
     * (AAAA), canonical name (CNAME), mail exchanger (MX), name server (NS), start of
     * authority (SOA), service locator (SRV), or text (TXT).</p> <p>The following
     * domain entry types can be used:</p> <ul> <li> <p> <code>A</code> </p> </li> <li>
     * <p> <code>AAAA</code> </p> </li> <li> <p> <code>CNAME</code> </p> </li> <li> <p>
     * <code>MX</code> </p> </li> <li> <p> <code>NS</code> </p> </li> <li> <p>
     * <code>SOA</code> </p> </li> <li> <p> <code>SRV</code> </p> </li> <li> <p>
     * <code>TXT</code> </p> </li> </ul>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of domain entry, such as address for IPv4 (A), address for IPv6
     * (AAAA), canonical name (CNAME), mail exchanger (MX), name server (NS), start of
     * authority (SOA), service locator (SRV), or text (TXT).</p> <p>The following
     * domain entry types can be used:</p> <ul> <li> <p> <code>A</code> </p> </li> <li>
     * <p> <code>AAAA</code> </p> </li> <li> <p> <code>CNAME</code> </p> </li> <li> <p>
     * <code>MX</code> </p> </li> <li> <p> <code>NS</code> </p> </li> <li> <p>
     * <code>SOA</code> </p> </li> <li> <p> <code>SRV</code> </p> </li> <li> <p>
     * <code>TXT</code> </p> </li> </ul>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of domain entry, such as address for IPv4 (A), address for IPv6
     * (AAAA), canonical name (CNAME), mail exchanger (MX), name server (NS), start of
     * authority (SOA), service locator (SRV), or text (TXT).</p> <p>The following
     * domain entry types can be used:</p> <ul> <li> <p> <code>A</code> </p> </li> <li>
     * <p> <code>AAAA</code> </p> </li> <li> <p> <code>CNAME</code> </p> </li> <li> <p>
     * <code>MX</code> </p> </li> <li> <p> <code>NS</code> </p> </li> <li> <p>
     * <code>SOA</code> </p> </li> <li> <p> <code>SRV</code> </p> </li> <li> <p>
     * <code>TXT</code> </p> </li> </ul>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of domain entry, such as address for IPv4 (A), address for IPv6
     * (AAAA), canonical name (CNAME), mail exchanger (MX), name server (NS), start of
     * authority (SOA), service locator (SRV), or text (TXT).</p> <p>The following
     * domain entry types can be used:</p> <ul> <li> <p> <code>A</code> </p> </li> <li>
     * <p> <code>AAAA</code> </p> </li> <li> <p> <code>CNAME</code> </p> </li> <li> <p>
     * <code>MX</code> </p> </li> <li> <p> <code>NS</code> </p> </li> <li> <p>
     * <code>SOA</code> </p> </li> <li> <p> <code>SRV</code> </p> </li> <li> <p>
     * <code>TXT</code> </p> </li> </ul>
     */
    inline DomainEntry& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of domain entry, such as address for IPv4 (A), address for IPv6
     * (AAAA), canonical name (CNAME), mail exchanger (MX), name server (NS), start of
     * authority (SOA), service locator (SRV), or text (TXT).</p> <p>The following
     * domain entry types can be used:</p> <ul> <li> <p> <code>A</code> </p> </li> <li>
     * <p> <code>AAAA</code> </p> </li> <li> <p> <code>CNAME</code> </p> </li> <li> <p>
     * <code>MX</code> </p> </li> <li> <p> <code>NS</code> </p> </li> <li> <p>
     * <code>SOA</code> </p> </li> <li> <p> <code>SRV</code> </p> </li> <li> <p>
     * <code>TXT</code> </p> </li> </ul>
     */
    inline DomainEntry& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of domain entry, such as address for IPv4 (A), address for IPv6
     * (AAAA), canonical name (CNAME), mail exchanger (MX), name server (NS), start of
     * authority (SOA), service locator (SRV), or text (TXT).</p> <p>The following
     * domain entry types can be used:</p> <ul> <li> <p> <code>A</code> </p> </li> <li>
     * <p> <code>AAAA</code> </p> </li> <li> <p> <code>CNAME</code> </p> </li> <li> <p>
     * <code>MX</code> </p> </li> <li> <p> <code>NS</code> </p> </li> <li> <p>
     * <code>SOA</code> </p> </li> <li> <p> <code>SRV</code> </p> </li> <li> <p>
     * <code>TXT</code> </p> </li> </ul>
     */
    inline DomainEntry& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;

    bool m_isAlias;
    bool m_isAliasHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
