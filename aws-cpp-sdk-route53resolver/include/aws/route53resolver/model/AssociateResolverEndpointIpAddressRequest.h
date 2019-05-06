/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ROUTE53RESOLVER_API AssociateResolverEndpointIpAddressRequest : public Route53ResolverRequest
  {
  public:
    AssociateResolverEndpointIpAddressRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateResolverEndpointIpAddress"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline const Aws::String& GetResolverEndpointId() const{ return m_resolverEndpointId; }

    /**
     * <p>The ID of the resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline bool ResolverEndpointIdHasBeenSet() const { return m_resolverEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline void SetResolverEndpointId(const Aws::String& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = value; }

    /**
     * <p>The ID of the resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline void SetResolverEndpointId(Aws::String&& value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId = std::move(value); }

    /**
     * <p>The ID of the resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline void SetResolverEndpointId(const char* value) { m_resolverEndpointIdHasBeenSet = true; m_resolverEndpointId.assign(value); }

    /**
     * <p>The ID of the resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline AssociateResolverEndpointIpAddressRequest& WithResolverEndpointId(const Aws::String& value) { SetResolverEndpointId(value); return *this;}

    /**
     * <p>The ID of the resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline AssociateResolverEndpointIpAddressRequest& WithResolverEndpointId(Aws::String&& value) { SetResolverEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the resolver endpoint that you want to associate IP addresses
     * with.</p>
     */
    inline AssociateResolverEndpointIpAddressRequest& WithResolverEndpointId(const char* value) { SetResolverEndpointId(value); return *this;}


    /**
     * <p>Either the IPv4 address that you want to add to a resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline const IpAddressUpdate& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>Either the IPv4 address that you want to add to a resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>Either the IPv4 address that you want to add to a resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline void SetIpAddress(const IpAddressUpdate& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>Either the IPv4 address that you want to add to a resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline void SetIpAddress(IpAddressUpdate&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>Either the IPv4 address that you want to add to a resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline AssociateResolverEndpointIpAddressRequest& WithIpAddress(const IpAddressUpdate& value) { SetIpAddress(value); return *this;}

    /**
     * <p>Either the IPv4 address that you want to add to a resolver endpoint or a
     * subnet ID. If you specify a subnet ID, Resolver chooses an IP address for you
     * from the available IPs in the specified subnet.</p>
     */
    inline AssociateResolverEndpointIpAddressRequest& WithIpAddress(IpAddressUpdate&& value) { SetIpAddress(std::move(value)); return *this;}

  private:

    Aws::String m_resolverEndpointId;
    bool m_resolverEndpointIdHasBeenSet;

    IpAddressUpdate m_ipAddress;
    bool m_ipAddressHasBeenSet;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
