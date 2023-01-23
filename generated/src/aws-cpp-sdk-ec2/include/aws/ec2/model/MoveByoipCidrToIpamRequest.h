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
  class MoveByoipCidrToIpamRequest : public EC2Request
  {
  public:
    AWS_EC2_API MoveByoipCidrToIpamRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "MoveByoipCidrToIpam"; }

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
    inline MoveByoipCidrToIpamRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The BYOIP CIDR.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The BYOIP CIDR.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The BYOIP CIDR.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The BYOIP CIDR.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The BYOIP CIDR.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The BYOIP CIDR.</p>
     */
    inline MoveByoipCidrToIpamRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The BYOIP CIDR.</p>
     */
    inline MoveByoipCidrToIpamRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The BYOIP CIDR.</p>
     */
    inline MoveByoipCidrToIpamRequest& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The IPAM pool ID.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }

    /**
     * <p>The IPAM pool ID.</p>
     */
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }

    /**
     * <p>The IPAM pool ID.</p>
     */
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }

    /**
     * <p>The IPAM pool ID.</p>
     */
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }

    /**
     * <p>The IPAM pool ID.</p>
     */
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }

    /**
     * <p>The IPAM pool ID.</p>
     */
    inline MoveByoipCidrToIpamRequest& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}

    /**
     * <p>The IPAM pool ID.</p>
     */
    inline MoveByoipCidrToIpamRequest& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}

    /**
     * <p>The IPAM pool ID.</p>
     */
    inline MoveByoipCidrToIpamRequest& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM pool.</p>
     */
    inline const Aws::String& GetIpamPoolOwner() const{ return m_ipamPoolOwner; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM pool.</p>
     */
    inline bool IpamPoolOwnerHasBeenSet() const { return m_ipamPoolOwnerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM pool.</p>
     */
    inline void SetIpamPoolOwner(const Aws::String& value) { m_ipamPoolOwnerHasBeenSet = true; m_ipamPoolOwner = value; }

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM pool.</p>
     */
    inline void SetIpamPoolOwner(Aws::String&& value) { m_ipamPoolOwnerHasBeenSet = true; m_ipamPoolOwner = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM pool.</p>
     */
    inline void SetIpamPoolOwner(const char* value) { m_ipamPoolOwnerHasBeenSet = true; m_ipamPoolOwner.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM pool.</p>
     */
    inline MoveByoipCidrToIpamRequest& WithIpamPoolOwner(const Aws::String& value) { SetIpamPoolOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM pool.</p>
     */
    inline MoveByoipCidrToIpamRequest& WithIpamPoolOwner(Aws::String&& value) { SetIpamPoolOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the owner of the IPAM pool.</p>
     */
    inline MoveByoipCidrToIpamRequest& WithIpamPoolOwner(const char* value) { SetIpamPoolOwner(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_ipamPoolOwner;
    bool m_ipamPoolOwnerHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
