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
  class DeleteIpamPoolRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteIpamPoolRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIpamPool"; }

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
    inline DeleteIpamPoolRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the pool to delete.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }

    /**
     * <p>The ID of the pool to delete.</p>
     */
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }

    /**
     * <p>The ID of the pool to delete.</p>
     */
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }

    /**
     * <p>The ID of the pool to delete.</p>
     */
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }

    /**
     * <p>The ID of the pool to delete.</p>
     */
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }

    /**
     * <p>The ID of the pool to delete.</p>
     */
    inline DeleteIpamPoolRequest& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}

    /**
     * <p>The ID of the pool to delete.</p>
     */
    inline DeleteIpamPoolRequest& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the pool to delete.</p>
     */
    inline DeleteIpamPoolRequest& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}


    /**
     * <p>Enables you to quickly delete an IPAM pool and all resources within that
     * pool, including provisioned CIDRs, allocations, and other pools.</p> 
     * <p>You can only use this option to delete pools in the private scope or pools in
     * the public scope with a source resource. A source resource is a resource used to
     * provision CIDRs to a resource planning pool.</p> 
     */
    inline bool GetCascade() const{ return m_cascade; }

    /**
     * <p>Enables you to quickly delete an IPAM pool and all resources within that
     * pool, including provisioned CIDRs, allocations, and other pools.</p> 
     * <p>You can only use this option to delete pools in the private scope or pools in
     * the public scope with a source resource. A source resource is a resource used to
     * provision CIDRs to a resource planning pool.</p> 
     */
    inline bool CascadeHasBeenSet() const { return m_cascadeHasBeenSet; }

    /**
     * <p>Enables you to quickly delete an IPAM pool and all resources within that
     * pool, including provisioned CIDRs, allocations, and other pools.</p> 
     * <p>You can only use this option to delete pools in the private scope or pools in
     * the public scope with a source resource. A source resource is a resource used to
     * provision CIDRs to a resource planning pool.</p> 
     */
    inline void SetCascade(bool value) { m_cascadeHasBeenSet = true; m_cascade = value; }

    /**
     * <p>Enables you to quickly delete an IPAM pool and all resources within that
     * pool, including provisioned CIDRs, allocations, and other pools.</p> 
     * <p>You can only use this option to delete pools in the private scope or pools in
     * the public scope with a source resource. A source resource is a resource used to
     * provision CIDRs to a resource planning pool.</p> 
     */
    inline DeleteIpamPoolRequest& WithCascade(bool value) { SetCascade(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    bool m_cascade;
    bool m_cascadeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
