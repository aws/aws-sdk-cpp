/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/IpAddressUpdate.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class AssociateResolverEndpointIpAddressRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API AssociateResolverEndpointIpAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResolverEndpointIpAddress"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the Resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const{ return m_resolverEndpointId; }

    /**
     * <p>The ID of the Resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline void SetResolverEndpointId(const Aws::String& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = value; }

    /**
     * <p>The ID of the Resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline void SetResolverEndpointId(Aws::String&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::move(value); }

    /**
     * <p>The ID of the Resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline void SetResolverEndpointId(const char* value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId.assign(value); }

    /**
     * <p>The ID of the Resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline AssociateResolverEndpointIpAddressRequest& WithResolverEndpointId(const Aws::String& value) { SetResolverEndpointId(value); return *this;}

    /**
     * <p>The ID of the Resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline AssociateResolverEndpointIpAddressRequest& WithResolverEndpointId(Aws::String&& value) { SetResolverEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline AssociateResolverEndpointIpAddressRequest& WithResolverEndpointId(const char* value) { SetResolverEndpointId(value); return *this;}


    /**
     * <p>Either the IPv4 address that you want to add to a Resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline const IpAddressUpdate& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>Either the IPv4 address that you want to add to a Resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>Either the IPv4 address that you want to add to a Resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline void SetIpAddress(const IpAddressUpdate& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>Either the IPv4 address that you want to add to a Resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline void SetIpAddress(IpAddressUpdate&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>Either the IPv4 address that you want to add to a Resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline AssociateResolverEndpointIpAddressRequest& WithIpAddress(const IpAddressUpdate& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Either the IPv4 address that you want to add to a Resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline AssociateResolverEndpointIpAddressRequest& WithIpAddress(IpAddressUpdate&& value) { SetIpAddress(std::move(value)); return *this;}

  private:

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet = false;

    IpAddressUpdate m_ipAddress;
    bool m_ipAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
