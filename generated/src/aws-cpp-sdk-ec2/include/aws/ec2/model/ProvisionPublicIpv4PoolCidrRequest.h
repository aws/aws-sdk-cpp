/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ProvisionPublicIpv4PoolCidrRequest : public EC2Request
  {
  public:
    AWS_EC2_API ProvisionPublicIpv4PoolCidrRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionPublicIpv4PoolCidr"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
    inline ProvisionPublicIpv4PoolCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the IPAM pool you would like to use to allocate this CIDR.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }

    /**
     * <p>The ID of the IPAM pool you would like to use to allocate this CIDR.</p>
     */
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM pool you would like to use to allocate this CIDR.</p>
     */
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }

    /**
     * <p>The ID of the IPAM pool you would like to use to allocate this CIDR.</p>
     */
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }

    /**
     * <p>The ID of the IPAM pool you would like to use to allocate this CIDR.</p>
     */
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }

    /**
     * <p>The ID of the IPAM pool you would like to use to allocate this CIDR.</p>
     */
    inline ProvisionPublicIpv4PoolCidrRequest& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}

    /**
     * <p>The ID of the IPAM pool you would like to use to allocate this CIDR.</p>
     */
    inline ProvisionPublicIpv4PoolCidrRequest& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM pool you would like to use to allocate this CIDR.</p>
     */
    inline ProvisionPublicIpv4PoolCidrRequest& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}


    /**
     * <p>The ID of the public IPv4 pool you would like to use for this CIDR.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The ID of the public IPv4 pool you would like to use for this CIDR.</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The ID of the public IPv4 pool you would like to use for this CIDR.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The ID of the public IPv4 pool you would like to use for this CIDR.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The ID of the public IPv4 pool you would like to use for this CIDR.</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The ID of the public IPv4 pool you would like to use for this CIDR.</p>
     */
    inline ProvisionPublicIpv4PoolCidrRequest& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the public IPv4 pool you would like to use for this CIDR.</p>
     */
    inline ProvisionPublicIpv4PoolCidrRequest& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the public IPv4 pool you would like to use for this CIDR.</p>
     */
    inline ProvisionPublicIpv4PoolCidrRequest& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The netmask length of the CIDR you would like to allocate to the public IPv4
     * pool.</p>
     */
    inline int GetNetmaskLength() const{ return m_netmaskLength; }

    /**
     * <p>The netmask length of the CIDR you would like to allocate to the public IPv4
     * pool.</p>
     */
    inline bool NetmaskLengthHasBeenSet() const { return m_netmaskLengthHasBeenSet; }

    /**
     * <p>The netmask length of the CIDR you would like to allocate to the public IPv4
     * pool.</p>
     */
    inline void SetNetmaskLength(int value) { m_netmaskLengthHasBeenSet = true; m_netmaskLength = value; }

    /**
     * <p>The netmask length of the CIDR you would like to allocate to the public IPv4
     * pool.</p>
     */
    inline ProvisionPublicIpv4PoolCidrRequest& WithNetmaskLength(int value) { SetNetmaskLength(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    int m_netmaskLength;
    bool m_netmaskLengthHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
