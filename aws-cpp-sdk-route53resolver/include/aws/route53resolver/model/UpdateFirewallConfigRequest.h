/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53resolver/Route53Resolver_EXPORTS.h>
#include <aws/route53resolver/Route53ResolverRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/route53resolver/model/FirewallFailOpenStatus.h>
#include <utility>

namespace Aws
{
namespace Route53Resolver
{
namespace Model
{

  /**
   */
  class UpdateFirewallConfigRequest : public Route53ResolverRequest
  {
  public:
    AWS_ROUTE53RESOLVER_API UpdateFirewallConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateFirewallConfig"; }

    AWS_ROUTE53RESOLVER_API Aws::String SerializePayload() const override;

    AWS_ROUTE53RESOLVER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the VPC that the configuration is for.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The ID of the VPC that the configuration is for.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>The ID of the VPC that the configuration is for.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The ID of the VPC that the configuration is for.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>The ID of the VPC that the configuration is for.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The ID of the VPC that the configuration is for.</p>
     */
    inline UpdateFirewallConfigRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The ID of the VPC that the configuration is for.</p>
     */
    inline UpdateFirewallConfigRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the VPC that the configuration is for.</p>
     */
    inline UpdateFirewallConfigRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>Determines how Route 53 Resolver handles queries during failures, for example
     * when all traffic that is sent to DNS Firewall fails to receive a reply. </p>
     * <ul> <li> <p>By default, fail open is disabled, which means the failure mode is
     * closed. This approach favors security over availability. DNS Firewall blocks
     * queries that it is unable to evaluate properly. </p> </li> <li> <p>If you enable
     * this option, the failure mode is open. This approach favors availability over
     * security. DNS Firewall allows queries to proceed if it is unable to properly
     * evaluate them. </p> </li> </ul> <p>This behavior is only enforced for VPCs that
     * have at least one DNS Firewall rule group association. </p>
     */
    inline const FirewallFailOpenStatus& GetFirewallFailOpen() const{ return m_firewallFailOpen; }

    /**
     * <p>Determines how Route 53 Resolver handles queries during failures, for example
     * when all traffic that is sent to DNS Firewall fails to receive a reply. </p>
     * <ul> <li> <p>By default, fail open is disabled, which means the failure mode is
     * closed. This approach favors security over availability. DNS Firewall blocks
     * queries that it is unable to evaluate properly. </p> </li> <li> <p>If you enable
     * this option, the failure mode is open. This approach favors availability over
     * security. DNS Firewall allows queries to proceed if it is unable to properly
     * evaluate them. </p> </li> </ul> <p>This behavior is only enforced for VPCs that
     * have at least one DNS Firewall rule group association. </p>
     */
    inline bool FirewallFailOpenHasBeenSet() const { return m_firewallFailOpenHasBeenSet; }

    /**
     * <p>Determines how Route 53 Resolver handles queries during failures, for example
     * when all traffic that is sent to DNS Firewall fails to receive a reply. </p>
     * <ul> <li> <p>By default, fail open is disabled, which means the failure mode is
     * closed. This approach favors security over availability. DNS Firewall blocks
     * queries that it is unable to evaluate properly. </p> </li> <li> <p>If you enable
     * this option, the failure mode is open. This approach favors availability over
     * security. DNS Firewall allows queries to proceed if it is unable to properly
     * evaluate them. </p> </li> </ul> <p>This behavior is only enforced for VPCs that
     * have at least one DNS Firewall rule group association. </p>
     */
    inline void SetFirewallFailOpen(const FirewallFailOpenStatus& value) { m_firewallFailOpenHasBeenSet = true; m_firewallFailOpen = value; }

    /**
     * <p>Determines how Route 53 Resolver handles queries during failures, for example
     * when all traffic that is sent to DNS Firewall fails to receive a reply. </p>
     * <ul> <li> <p>By default, fail open is disabled, which means the failure mode is
     * closed. This approach favors security over availability. DNS Firewall blocks
     * queries that it is unable to evaluate properly. </p> </li> <li> <p>If you enable
     * this option, the failure mode is open. This approach favors availability over
     * security. DNS Firewall allows queries to proceed if it is unable to properly
     * evaluate them. </p> </li> </ul> <p>This behavior is only enforced for VPCs that
     * have at least one DNS Firewall rule group association. </p>
     */
    inline void SetFirewallFailOpen(FirewallFailOpenStatus&& value) { m_firewallFailOpenHasBeenSet = true; m_firewallFailOpen = std::move(value); }

    /**
     * <p>Determines how Route 53 Resolver handles queries during failures, for example
     * when all traffic that is sent to DNS Firewall fails to receive a reply. </p>
     * <ul> <li> <p>By default, fail open is disabled, which means the failure mode is
     * closed. This approach favors security over availability. DNS Firewall blocks
     * queries that it is unable to evaluate properly. </p> </li> <li> <p>If you enable
     * this option, the failure mode is open. This approach favors availability over
     * security. DNS Firewall allows queries to proceed if it is unable to properly
     * evaluate them. </p> </li> </ul> <p>This behavior is only enforced for VPCs that
     * have at least one DNS Firewall rule group association. </p>
     */
    inline UpdateFirewallConfigRequest& WithFirewallFailOpen(const FirewallFailOpenStatus& value) { SetFirewallFailOpen(value); return *this;}

    /**
     * <p>Determines how Route 53 Resolver handles queries during failures, for example
     * when all traffic that is sent to DNS Firewall fails to receive a reply. </p>
     * <ul> <li> <p>By default, fail open is disabled, which means the failure mode is
     * closed. This approach favors security over availability. DNS Firewall blocks
     * queries that it is unable to evaluate properly. </p> </li> <li> <p>If you enable
     * this option, the failure mode is open. This approach favors availability over
     * security. DNS Firewall allows queries to proceed if it is unable to properly
     * evaluate them. </p> </li> </ul> <p>This behavior is only enforced for VPCs that
     * have at least one DNS Firewall rule group association. </p>
     */
    inline UpdateFirewallConfigRequest& WithFirewallFailOpen(FirewallFailOpenStatus&& value) { SetFirewallFailOpen(std::move(value)); return *this;}

  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    FirewallFailOpenStatus m_firewallFailOpen;
    bool m_firewallFailOpenHasBeenSet = false;
  };

} // namespace Model
} // namespace Route53Resolver
} // namespace Aws
