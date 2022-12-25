/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/model/ResolverDnssecConfig.h>
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
  class UpdateResolverDnssecConfigResult
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateResolverDnssecConfigResult();
    AWS_ROUTE53RESOLVER_API UpdateResolverDnssecConfigResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ROUTE53RESOLVER_API UpdateResolverDnssecConfigResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A complex type that contains settings for the specified DNSSEC
     * configuration.</p>
     */
    inline const ResolverDnssecConfig& GetResolverDNSSECConfig() const{ return m_resolverDNSSECConfig; }

    /**
     * <p>A complex type that contains settings for the specified DNSSEC
     * configuration.</p>
     */
    inline void SetResolverDNSSECConfig(const ResolverDnssecConfig& value) { m_resolverDNSSECConfig = value; }

    /**
     * <p>A complex type that contains settings for the specified DNSSEC
     * configuration.</p>
     */
    inline void SetResolverDNSSECConfig(ResolverDnssecConfig&& value) { m_resolverDNSSECConfig = std::move(value); }

    /**
     * <p>A complex type that contains settings for the specified DNSSEC
     * configuration.</p>
     */
    inline UpdateResolverDnssecConfigResult& WithResolverDNSSECConfig(const ResolverDnssecConfig& value) { SetResolverDNSSECConfig(value); return *this;}

    /**
     * <p>A complex type that contains settings for the specified DNSSEC
     * configuration.</p>
     */
    inline UpdateResolverDnssecConfigResult& WithResolverDNSSECConfig(ResolverDnssecConfig&& value) { SetResolverDNSSECConfig(std::move(value)); return *this;}

  private:

    ResolverDnssecConfig m_resolverDNSSECConfig;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
