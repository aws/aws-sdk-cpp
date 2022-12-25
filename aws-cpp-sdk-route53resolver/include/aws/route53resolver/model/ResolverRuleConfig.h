/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/route53resolver/model/TargetAddress.h>
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
namespace Route53Resolver
{
namespace Model
{

  /**
   * <p>In an <a
   * href="https://docs.aws.amazon.com/Route53/latest/APIReference/API_route53resolver_UpdateResolverRule.html">UpdateResolverRule</a>
   * request, information about the changes that you want to make.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/route53resolver-2018-04-01/ResolverRuleConfig">AWS
   * API Reference</a></p>
   */
  class ResolverRuleConfig
  {
  public:
    AWS_ROUTE53RESOLVER_API ResolverRuleConfig();
    AWS_ROUTE53RESOLVER_API ResolverRuleConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API ResolverRuleConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROUTE53RESOLVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The new name for the Resolver rule. The name that you specify appears in the
     * Resolver dashboard in the Route 53 console. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The new name for the Resolver rule. The name that you specify appears in the
     * Resolver dashboard in the Route 53 console. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The new name for the Resolver rule. The name that you specify appears in the
     * Resolver dashboard in the Route 53 console. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The new name for the Resolver rule. The name that you specify appears in the
     * Resolver dashboard in the Route 53 console. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The new name for the Resolver rule. The name that you specify appears in the
     * Resolver dashboard in the Route 53 console. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The new name for the Resolver rule. The name that you specify appears in the
     * Resolver dashboard in the Route 53 console. </p>
     */
    inline ResolverRuleConfig& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The new name for the Resolver rule. The name that you specify appears in the
     * Resolver dashboard in the Route 53 console. </p>
     */
    inline ResolverRuleConfig& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The new name for the Resolver rule. The name that you specify appears in the
     * Resolver dashboard in the Route 53 console. </p>
     */
    inline ResolverRuleConfig& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>For DNS queries that originate in your VPC, the new IP addresses that you
     * want to route outbound DNS queries to.</p>
     */
    inline const Aws::Vector<TargetAddress>& GetTargetIps() const{ return m_targetIps; }

    /**
     * <p>For DNS queries that originate in your VPC, the new IP addresses that you
     * want to route outbound DNS queries to.</p>
     */
    inline bool TargetIpsHasBeenSet() const { return m_targetIpsHasBeenSet; }

    /**
     * <p>For DNS queries that originate in your VPC, the new IP addresses that you
     * want to route outbound DNS queries to.</p>
     */
    inline void SetTargetIps(const Aws::Vector<TargetAddress>& value) { m_targetIpsHasBeenSet = true; m_targetIps = value; }

    /**
     * <p>For DNS queries that originate in your VPC, the new IP addresses that you
     * want to route outbound DNS queries to.</p>
     */
    inline void SetTargetIps(Aws::Vector<TargetAddress>&& value) { m_targetIpsHasBeenSet = true; m_targetIps = std::move(value); }

    /**
     * <p>For DNS queries that originate in your VPC, the new IP addresses that you
     * want to route outbound DNS queries to.</p>
     */
    inline ResolverRuleConfig& WithTargetIps(const Aws::Vector<TargetAddress>& value) { SetTargetIps(value); return *this;}

    /**
     * <p>For DNS queries that originate in your VPC, the new IP addresses that you
     * want to route outbound DNS queries to.</p>
     */
    inline ResolverRuleConfig& WithTargetIps(Aws::Vector<TargetAddress>&& value) { SetTargetIps(std::move(value)); return *this;}

    /**
     * <p>For DNS queries that originate in your VPC, the new IP addresses that you
     * want to route outbound DNS queries to.</p>
     */
    inline ResolverRuleConfig& AddTargetIps(const TargetAddress& value) { m_targetIpsHasBeenSet = true; m_targetIps.push_back(value); return *this; }

    /**
     * <p>For DNS queries that originate in your VPC, the new IP addresses that you
     * want to route outbound DNS queries to.</p>
     */
    inline ResolverRuleConfig& AddTargetIps(TargetAddress&& value) { m_targetIpsHasBeenSet = true; m_targetIps.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the new outbound Resolver endpoint that you want to use to route
     * DNS queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const{ return m_resolverEndpointId; }

    /**
     * <p>The ID of the new outbound Resolver endpoint that you want to use to route
     * DNS queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the new outbound Resolver endpoint that you want to use to route
     * DNS queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline void SetResolverEndpointId(const Aws::String& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = value; }

    /**
     * <p>The ID of the new outbound Resolver endpoint that you want to use to route
     * DNS queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline void SetResolverEndpointId(Aws::String&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::move(value); }

    /**
     * <p>The ID of the new outbound Resolver endpoint that you want to use to route
     * DNS queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline void SetResolverEndpointId(const char* value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId.assign(value); }

    /**
     * <p>The ID of the new outbound Resolver endpoint that you want to use to route
     * DNS queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline ResolverRuleConfig& WithResolverEndpointId(const Aws::String& value) { SetResolverEndpointId(value); return *this;}

    /**
     * <p>The ID of the new outbound Resolver endpoint that you want to use to route
     * DNS queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline ResolverRuleConfig& WithResolverEndpointId(Aws::String&& value) { SetResolverEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the new outbound Resolver endpoint that you want to use to route
     * DNS queries to the IP addresses that you specify in <code>TargetIps</code>.</p>
     */
    inline ResolverRuleConfig& WithResolverEndpointId(const char* value) { SetResolverEndpointId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<TargetAddress> m_targetIps;
    bool m_targetIpsHasBeenSet = false;

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
