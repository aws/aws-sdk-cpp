/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53domains/Route53Domains_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Route53Domains
{
namespace Model
{

  /**
   * <p>Name server includes the following elements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53domains-2014-05-15/Nameserver">AWS
   * API Reference</a></p>
   */
  class Nameserver
  {
  public:
    AWS_ROUTE53DOMAINS_API Nameserver();
    AWS_ROUTE53DOMAINS_API Nameserver(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Nameserver& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53DOMAINS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified host name of the name server.</p> <p>Constraint: Maximum
     * 255 characters</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The fully qualified host name of the name server.</p> <p>Constraint: Maximum
     * 255 characters</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The fully qualified host name of the name server.</p> <p>Constraint: Maximum
     * 255 characters</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The fully qualified host name of the name server.</p> <p>Constraint: Maximum
     * 255 characters</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The fully qualified host name of the name server.</p> <p>Constraint: Maximum
     * 255 characters</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The fully qualified host name of the name server.</p> <p>Constraint: Maximum
     * 255 characters</p>
     */
    inline Nameserver& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The fully qualified host name of the name server.</p> <p>Constraint: Maximum
     * 255 characters</p>
     */
    inline Nameserver& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified host name of the name server.</p> <p>Constraint: Maximum
     * 255 characters</p>
     */
    inline Nameserver& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Glue IP address of a name server entry. Glue IP addresses are required only
     * when the name of the name server is a subdomain of the domain. For example, if
     * your domain is example.com and the name server for the domain is ns.example.com,
     * you need to specify the IP address for ns.example.com.</p> <p>Constraints: The
     * list can contain only one IPv4 and one IPv6 address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetGlueIps() const{ return m_glueIps; }

    /**
     * <p>Glue IP address of a name server entry. Glue IP addresses are required only
     * when the name of the name server is a subdomain of the domain. For example, if
     * your domain is example.com and the name server for the domain is ns.example.com,
     * you need to specify the IP address for ns.example.com.</p> <p>Constraints: The
     * list can contain only one IPv4 and one IPv6 address.</p>
     */
    inline bool GlueIpsHasBeenSet() const { return m_glueIpsHasBeenSet; }

    /**
     * <p>Glue IP address of a name server entry. Glue IP addresses are required only
     * when the name of the name server is a subdomain of the domain. For example, if
     * your domain is example.com and the name server for the domain is ns.example.com,
     * you need to specify the IP address for ns.example.com.</p> <p>Constraints: The
     * list can contain only one IPv4 and one IPv6 address.</p>
     */
    inline void SetGlueIps(const Aws::Vector<Aws::String>& value) { m_glueIpsHasBeenSet = true; m_glueIps = value; }

    /**
     * <p>Glue IP address of a name server entry. Glue IP addresses are required only
     * when the name of the name server is a subdomain of the domain. For example, if
     * your domain is example.com and the name server for the domain is ns.example.com,
     * you need to specify the IP address for ns.example.com.</p> <p>Constraints: The
     * list can contain only one IPv4 and one IPv6 address.</p>
     */
    inline void SetGlueIps(Aws::Vector<Aws::String>&& value) { m_glueIpsHasBeenSet = true; m_glueIps = std::move(value); }

    /**
     * <p>Glue IP address of a name server entry. Glue IP addresses are required only
     * when the name of the name server is a subdomain of the domain. For example, if
     * your domain is example.com and the name server for the domain is ns.example.com,
     * you need to specify the IP address for ns.example.com.</p> <p>Constraints: The
     * list can contain only one IPv4 and one IPv6 address.</p>
     */
    inline Nameserver& WithGlueIps(const Aws::Vector<Aws::String>& value) { SetGlueIps(value); return *this;}

    /**
     * <p>Glue IP address of a name server entry. Glue IP addresses are required only
     * when the name of the name server is a subdomain of the domain. For example, if
     * your domain is example.com and the name server for the domain is ns.example.com,
     * you need to specify the IP address for ns.example.com.</p> <p>Constraints: The
     * list can contain only one IPv4 and one IPv6 address.</p>
     */
    inline Nameserver& WithGlueIps(Aws::Vector<Aws::String>&& value) { SetGlueIps(std::move(value)); return *this;}

    /**
     * <p>Glue IP address of a name server entry. Glue IP addresses are required only
     * when the name of the name server is a subdomain of the domain. For example, if
     * your domain is example.com and the name server for the domain is ns.example.com,
     * you need to specify the IP address for ns.example.com.</p> <p>Constraints: The
     * list can contain only one IPv4 and one IPv6 address.</p>
     */
    inline Nameserver& AddGlueIps(const Aws::String& value) { m_glueIpsHasBeenSet = true; m_glueIps.push_back(value); return *this; }

    /**
     * <p>Glue IP address of a name server entry. Glue IP addresses are required only
     * when the name of the name server is a subdomain of the domain. For example, if
     * your domain is example.com and the name server for the domain is ns.example.com,
     * you need to specify the IP address for ns.example.com.</p> <p>Constraints: The
     * list can contain only one IPv4 and one IPv6 address.</p>
     */
    inline Nameserver& AddGlueIps(Aws::String&& value) { m_glueIpsHasBeenSet = true; m_glueIps.push_back(std::move(value)); return *this; }

    /**
     * <p>Glue IP address of a name server entry. Glue IP addresses are required only
     * when the name of the name server is a subdomain of the domain. For example, if
     * your domain is example.com and the name server for the domain is ns.example.com,
     * you need to specify the IP address for ns.example.com.</p> <p>Constraints: The
     * list can contain only one IPv4 and one IPv6 address.</p>
     */
    inline Nameserver& AddGlueIps(const char* value) { m_glueIpsHasBeenSet = true; m_glueIps.push_back(value); return *this; }

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_glueIps;
    bool m_glueIpsHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Domains
} // namespace Aws
