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
  class DeleteIpamRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeleteIpamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIpam"; }

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
    inline DeleteIpamRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline DeleteIpamRequest& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline DeleteIpamRequest& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM to delete.</p>
     */
    inline DeleteIpamRequest& WithIpamId(const char* value) { SetIpamId(value); return *this;}


    /**
     * <p>Enables you to quickly delete an IPAM, private scopes, pools in private
     * scopes, and any allocations in the pools in private scopes. You cannot delete
     * the IPAM with this option if there is a pool in your public scope. If you use
     * this option, IPAM does the following:</p> <ul> <li> <p>Deallocates any CIDRs
     * allocated to VPC resources (such as VPCs) in pools in private scopes.</p> 
     * <p>No VPC resources are deleted as a result of enabling this option. The CIDR
     * associated with the resource will no longer be allocated from an IPAM pool, but
     * the CIDR itself will remain unchanged.</p>  </li> <li> <p>Deprovisions
     * all IPv4 CIDRs provisioned to IPAM pools in private scopes.</p> </li> <li>
     * <p>Deletes all IPAM pools in private scopes.</p> </li> <li> <p>Deletes all
     * non-default private scopes in the IPAM.</p> </li> <li> <p>Deletes the default
     * public and private scopes and the IPAM.</p> </li> </ul>
     */
    inline bool GetCascade() const{ return m_cascade; }

    /**
     * <p>Enables you to quickly delete an IPAM, private scopes, pools in private
     * scopes, and any allocations in the pools in private scopes. You cannot delete
     * the IPAM with this option if there is a pool in your public scope. If you use
     * this option, IPAM does the following:</p> <ul> <li> <p>Deallocates any CIDRs
     * allocated to VPC resources (such as VPCs) in pools in private scopes.</p> 
     * <p>No VPC resources are deleted as a result of enabling this option. The CIDR
     * associated with the resource will no longer be allocated from an IPAM pool, but
     * the CIDR itself will remain unchanged.</p>  </li> <li> <p>Deprovisions
     * all IPv4 CIDRs provisioned to IPAM pools in private scopes.</p> </li> <li>
     * <p>Deletes all IPAM pools in private scopes.</p> </li> <li> <p>Deletes all
     * non-default private scopes in the IPAM.</p> </li> <li> <p>Deletes the default
     * public and private scopes and the IPAM.</p> </li> </ul>
     */
    inline bool CascadeHasBeenSet() const { return m_cascadeHasBeenSet; }

    /**
     * <p>Enables you to quickly delete an IPAM, private scopes, pools in private
     * scopes, and any allocations in the pools in private scopes. You cannot delete
     * the IPAM with this option if there is a pool in your public scope. If you use
     * this option, IPAM does the following:</p> <ul> <li> <p>Deallocates any CIDRs
     * allocated to VPC resources (such as VPCs) in pools in private scopes.</p> 
     * <p>No VPC resources are deleted as a result of enabling this option. The CIDR
     * associated with the resource will no longer be allocated from an IPAM pool, but
     * the CIDR itself will remain unchanged.</p>  </li> <li> <p>Deprovisions
     * all IPv4 CIDRs provisioned to IPAM pools in private scopes.</p> </li> <li>
     * <p>Deletes all IPAM pools in private scopes.</p> </li> <li> <p>Deletes all
     * non-default private scopes in the IPAM.</p> </li> <li> <p>Deletes the default
     * public and private scopes and the IPAM.</p> </li> </ul>
     */
    inline void SetCascade(bool value) { m_cascadeHasBeenSet = true; m_cascade = value; }

    /**
     * <p>Enables you to quickly delete an IPAM, private scopes, pools in private
     * scopes, and any allocations in the pools in private scopes. You cannot delete
     * the IPAM with this option if there is a pool in your public scope. If you use
     * this option, IPAM does the following:</p> <ul> <li> <p>Deallocates any CIDRs
     * allocated to VPC resources (such as VPCs) in pools in private scopes.</p> 
     * <p>No VPC resources are deleted as a result of enabling this option. The CIDR
     * associated with the resource will no longer be allocated from an IPAM pool, but
     * the CIDR itself will remain unchanged.</p>  </li> <li> <p>Deprovisions
     * all IPv4 CIDRs provisioned to IPAM pools in private scopes.</p> </li> <li>
     * <p>Deletes all IPAM pools in private scopes.</p> </li> <li> <p>Deletes all
     * non-default private scopes in the IPAM.</p> </li> <li> <p>Deletes the default
     * public and private scopes and the IPAM.</p> </li> </ul>
     */
    inline DeleteIpamRequest& WithCascade(bool value) { SetCascade(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    bool m_cascade;
    bool m_cascadeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
