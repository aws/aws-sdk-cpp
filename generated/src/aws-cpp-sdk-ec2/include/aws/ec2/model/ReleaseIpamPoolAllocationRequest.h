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
  class ReleaseIpamPoolAllocationRequest : public EC2Request
  {
  public:
    AWS_EC2_API ReleaseIpamPoolAllocationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ReleaseIpamPoolAllocation"; }

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
    inline ReleaseIpamPoolAllocationRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the IPAM pool which contains the allocation you want to
     * release.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }

    /**
     * <p>The ID of the IPAM pool which contains the allocation you want to
     * release.</p>
     */
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM pool which contains the allocation you want to
     * release.</p>
     */
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }

    /**
     * <p>The ID of the IPAM pool which contains the allocation you want to
     * release.</p>
     */
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }

    /**
     * <p>The ID of the IPAM pool which contains the allocation you want to
     * release.</p>
     */
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }

    /**
     * <p>The ID of the IPAM pool which contains the allocation you want to
     * release.</p>
     */
    inline ReleaseIpamPoolAllocationRequest& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}

    /**
     * <p>The ID of the IPAM pool which contains the allocation you want to
     * release.</p>
     */
    inline ReleaseIpamPoolAllocationRequest& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM pool which contains the allocation you want to
     * release.</p>
     */
    inline ReleaseIpamPoolAllocationRequest& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}


    /**
     * <p>The CIDR of the allocation you want to release.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The CIDR of the allocation you want to release.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The CIDR of the allocation you want to release.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The CIDR of the allocation you want to release.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The CIDR of the allocation you want to release.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The CIDR of the allocation you want to release.</p>
     */
    inline ReleaseIpamPoolAllocationRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The CIDR of the allocation you want to release.</p>
     */
    inline ReleaseIpamPoolAllocationRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR of the allocation you want to release.</p>
     */
    inline ReleaseIpamPoolAllocationRequest& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The ID of the allocation.</p>
     */
    inline const Aws::String& GetIpamPoolAllocationId() const{ return m_ipamPoolAllocationId; }

    /**
     * <p>The ID of the allocation.</p>
     */
    inline bool IpamPoolAllocationIdHasBeenSet() const { return m_ipamPoolAllocationIdHasBeenSet; }

    /**
     * <p>The ID of the allocation.</p>
     */
    inline void SetIpamPoolAllocationId(const Aws::String& value) { m_ipamPoolAllocationIdHasBeenSet = true; m_ipamPoolAllocationId = value; }

    /**
     * <p>The ID of the allocation.</p>
     */
    inline void SetIpamPoolAllocationId(Aws::String&& value) { m_ipamPoolAllocationIdHasBeenSet = true; m_ipamPoolAllocationId = std::move(value); }

    /**
     * <p>The ID of the allocation.</p>
     */
    inline void SetIpamPoolAllocationId(const char* value) { m_ipamPoolAllocationIdHasBeenSet = true; m_ipamPoolAllocationId.assign(value); }

    /**
     * <p>The ID of the allocation.</p>
     */
    inline ReleaseIpamPoolAllocationRequest& WithIpamPoolAllocationId(const Aws::String& value) { SetIpamPoolAllocationId(value); return *this;}

    /**
     * <p>The ID of the allocation.</p>
     */
    inline ReleaseIpamPoolAllocationRequest& WithIpamPoolAllocationId(Aws::String&& value) { SetIpamPoolAllocationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the allocation.</p>
     */
    inline ReleaseIpamPoolAllocationRequest& WithIpamPoolAllocationId(const char* value) { SetIpamPoolAllocationId(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_ipamPoolAllocationId;
    bool m_ipamPoolAllocationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
