﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamCidrAuthorizationContext.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API ProvisionIpamPoolCidrRequest : public EC2Request
  {
  public:
    ProvisionIpamPoolCidrRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionIpamPoolCidr"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ProvisionIpamPoolCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the IPAM pool to which you want to assign a CIDR.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }

    /**
     * <p>The ID of the IPAM pool to which you want to assign a CIDR.</p>
     */
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM pool to which you want to assign a CIDR.</p>
     */
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }

    /**
     * <p>The ID of the IPAM pool to which you want to assign a CIDR.</p>
     */
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }

    /**
     * <p>The ID of the IPAM pool to which you want to assign a CIDR.</p>
     */
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }

    /**
     * <p>The ID of the IPAM pool to which you want to assign a CIDR.</p>
     */
    inline ProvisionIpamPoolCidrRequest& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}

    /**
     * <p>The ID of the IPAM pool to which you want to assign a CIDR.</p>
     */
    inline ProvisionIpamPoolCidrRequest& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM pool to which you want to assign a CIDR.</p>
     */
    inline ProvisionIpamPoolCidrRequest& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}


    /**
     * <p>The CIDR you want to assign to the IPAM pool.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The CIDR you want to assign to the IPAM pool.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The CIDR you want to assign to the IPAM pool.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The CIDR you want to assign to the IPAM pool.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The CIDR you want to assign to the IPAM pool.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The CIDR you want to assign to the IPAM pool.</p>
     */
    inline ProvisionIpamPoolCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The CIDR you want to assign to the IPAM pool.</p>
     */
    inline ProvisionIpamPoolCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR you want to assign to the IPAM pool.</p>
     */
    inline ProvisionIpamPoolCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>A signed document that proves that you are authorized to bring a specified IP
     * address range to Amazon using BYOIP. This option applies to public pools
     * only.</p>
     */
    inline const IpamCidrAuthorizationContext& GetCidrAuthorizationContext() const{ return m_cidrAuthorizationContext; }

    /**
     * <p>A signed document that proves that you are authorized to bring a specified IP
     * address range to Amazon using BYOIP. This option applies to public pools
     * only.</p>
     */
    inline bool CidrAuthorizationContextHasBeenSet() const { return m_cidrAuthorizationContextHasBeenSet; }

    /**
     * <p>A signed document that proves that you are authorized to bring a specified IP
     * address range to Amazon using BYOIP. This option applies to public pools
     * only.</p>
     */
    inline void SetCidrAuthorizationContext(const IpamCidrAuthorizationContext& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = value; }

    /**
     * <p>A signed document that proves that you are authorized to bring a specified IP
     * address range to Amazon using BYOIP. This option applies to public pools
     * only.</p>
     */
    inline void SetCidrAuthorizationContext(IpamCidrAuthorizationContext&& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = std::move(value); }

    /**
     * <p>A signed document that proves that you are authorized to bring a specified IP
     * address range to Amazon using BYOIP. This option applies to public pools
     * only.</p>
     */
    inline ProvisionIpamPoolCidrRequest& WithCidrAuthorizationContext(const IpamCidrAuthorizationContext& value) { SetCidrAuthorizationContext(value); return *this;}

    /**
     * <p>A signed document that proves that you are authorized to bring a specified IP
     * address range to Amazon using BYOIP. This option applies to public pools
     * only.</p>
     */
    inline ProvisionIpamPoolCidrRequest& WithCidrAuthorizationContext(IpamCidrAuthorizationContext&& value) { SetCidrAuthorizationContext(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet;

    IpamCidrAuthorizationContext m_cidrAuthorizationContext;
    bool m_cidrAuthorizationContextHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
