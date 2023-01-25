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
  class DisassociateIpamResourceDiscoveryRequest : public EC2Request
  {
  public:
    AWS_EC2_API DisassociateIpamResourceDiscoveryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateIpamResourceDiscovery"; }

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
    inline DisassociateIpamResourceDiscoveryRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>A resource discovery association ID.</p>
     */
    inline const Aws::String& GetIpamResourceDiscoveryAssociationId() const{ return m_ipamResourceDiscoveryAssociationId; }

    /**
     * <p>A resource discovery association ID.</p>
     */
    inline bool IpamResourceDiscoveryAssociationIdHasBeenSet() const { return m_ipamResourceDiscoveryAssociationIdHasBeenSet; }

    /**
     * <p>A resource discovery association ID.</p>
     */
    inline void SetIpamResourceDiscoveryAssociationId(const Aws::String& value) { m_ipamResourceDiscoveryAssociationIdHasBeenSet = true; m_ipamResourceDiscoveryAssociationId = value; }

    /**
     * <p>A resource discovery association ID.</p>
     */
    inline void SetIpamResourceDiscoveryAssociationId(Aws::String&& value) { m_ipamResourceDiscoveryAssociationIdHasBeenSet = true; m_ipamResourceDiscoveryAssociationId = std::move(value); }

    /**
     * <p>A resource discovery association ID.</p>
     */
    inline void SetIpamResourceDiscoveryAssociationId(const char* value) { m_ipamResourceDiscoveryAssociationIdHasBeenSet = true; m_ipamResourceDiscoveryAssociationId.assign(value); }

    /**
     * <p>A resource discovery association ID.</p>
     */
    inline DisassociateIpamResourceDiscoveryRequest& WithIpamResourceDiscoveryAssociationId(const Aws::String& value) { SetIpamResourceDiscoveryAssociationId(value); return *this;}

    /**
     * <p>A resource discovery association ID.</p>
     */
    inline DisassociateIpamResourceDiscoveryRequest& WithIpamResourceDiscoveryAssociationId(Aws::String&& value) { SetIpamResourceDiscoveryAssociationId(std::move(value)); return *this;}

    /**
     * <p>A resource discovery association ID.</p>
     */
    inline DisassociateIpamResourceDiscoveryRequest& WithIpamResourceDiscoveryAssociationId(const char* value) { SetIpamResourceDiscoveryAssociationId(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamResourceDiscoveryAssociationId;
    bool m_ipamResourceDiscoveryAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
