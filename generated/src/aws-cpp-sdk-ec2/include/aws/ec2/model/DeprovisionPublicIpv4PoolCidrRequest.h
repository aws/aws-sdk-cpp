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
  class DeprovisionPublicIpv4PoolCidrRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeprovisionPublicIpv4PoolCidrRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeprovisionPublicIpv4PoolCidr"; }

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
    inline DeprovisionPublicIpv4PoolCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the pool that you want to deprovision the CIDR from.</p>
     */
    inline const Aws::String& GetPoolId() const{ return m_poolId; }

    /**
     * <p>The ID of the pool that you want to deprovision the CIDR from.</p>
     */
    inline bool PoolIdHasBeenSet() const { return m_poolIdHasBeenSet; }

    /**
     * <p>The ID of the pool that you want to deprovision the CIDR from.</p>
     */
    inline void SetPoolId(const Aws::String& value) { m_poolIdHasBeenSet = true; m_poolId = value; }

    /**
     * <p>The ID of the pool that you want to deprovision the CIDR from.</p>
     */
    inline void SetPoolId(Aws::String&& value) { m_poolIdHasBeenSet = true; m_poolId = std::move(value); }

    /**
     * <p>The ID of the pool that you want to deprovision the CIDR from.</p>
     */
    inline void SetPoolId(const char* value) { m_poolIdHasBeenSet = true; m_poolId.assign(value); }

    /**
     * <p>The ID of the pool that you want to deprovision the CIDR from.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrRequest& WithPoolId(const Aws::String& value) { SetPoolId(value); return *this;}

    /**
     * <p>The ID of the pool that you want to deprovision the CIDR from.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrRequest& WithPoolId(Aws::String&& value) { SetPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pool that you want to deprovision the CIDR from.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrRequest& WithPoolId(const char* value) { SetPoolId(value); return *this;}


    /**
     * <p>The CIDR you want to deprovision from the pool.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The CIDR you want to deprovision from the pool.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The CIDR you want to deprovision from the pool.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The CIDR you want to deprovision from the pool.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The CIDR you want to deprovision from the pool.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The CIDR you want to deprovision from the pool.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The CIDR you want to deprovision from the pool.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR you want to deprovision from the pool.</p>
     */
    inline DeprovisionPublicIpv4PoolCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_poolId;
    bool m_poolIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
