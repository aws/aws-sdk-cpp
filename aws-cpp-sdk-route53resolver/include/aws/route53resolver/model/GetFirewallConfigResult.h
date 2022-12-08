/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/FirewallConfig.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Route53Resolver
{
namespace Model
{
  class GetFirewallConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API GetFirewallConfigResult();
    AWS_ROUTE53RESOLVER_API GetFirewallConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API GetFirewallConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Configuration of the firewall behavior provided by DNS Firewall for a single
     * VPC from AmazonVPC. </p>
     */
    inline const FirewallConfig& GetFirewallConfig() const{ return m_firewallConfig; }

    /**
     * <p>Configuration of the firewall behavior provided by DNS Firewall for a single
     * VPC from AmazonVPC. </p>
     */
    inline void SetFirewallConfig(const FirewallConfig& value) { m_firewallConfig = value; }

    /**
     * <p>Configuration of the firewall behavior provided by DNS Firewall for a single
     * VPC from AmazonVPC. </p>
     */
    inline void SetFirewallConfig(FirewallConfig&& value) { m_firewallConfig = std::move(value); }

    /**
     * <p>Configuration of the firewall behavior provided by DNS Firewall for a single
     * VPC from AmazonVPC. </p>
     */
    inline GetFirewallConfigResult& WithFirewallConfig(const FirewallConfig& value) { SetFirewallConfig(value); return *this;}

    /**
     * <p>Configuration of the firewall behavior provided by DNS Firewall for a single
     * VPC from AmazonVPC. </p>
     */
    inline GetFirewallConfigResult& WithFirewallConfig(FirewallConfig&& value) { SetFirewallConfig(std::move(value)); return *this;}

  private:

    FirewallConfig m_firewallConfig;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
