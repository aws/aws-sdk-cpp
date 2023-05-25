/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AllocateIpamPoolCidrRequest : public EC2Request
  {
  public:
    AWS_EC2_API AllocateIpamPoolCidrRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocateIpamPoolCidr"; }

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
    inline AllocateIpamPoolCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The ID of the IPAM pool from which you would like to allocate a CIDR.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }

    /**
     * <p>The ID of the IPAM pool from which you would like to allocate a CIDR.</p>
     */
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }

    /**
     * <p>The ID of the IPAM pool from which you would like to allocate a CIDR.</p>
     */
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }

    /**
     * <p>The ID of the IPAM pool from which you would like to allocate a CIDR.</p>
     */
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }

    /**
     * <p>The ID of the IPAM pool from which you would like to allocate a CIDR.</p>
     */
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }

    /**
     * <p>The ID of the IPAM pool from which you would like to allocate a CIDR.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}

    /**
     * <p>The ID of the IPAM pool from which you would like to allocate a CIDR.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}

    /**
     * <p>The ID of the IPAM pool from which you would like to allocate a CIDR.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}


    /**
     * <p>The CIDR you would like to allocate from the IPAM pool. Note the
     * following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength allocation rule
     * set on the pool, you must specify either the NetmaskLength or the CIDR.</p>
     * </li> <li> <p>If the DefaultNetmaskLength allocation rule is set on the pool,
     * you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible values: Any available IPv4 or IPv6 CIDR.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The CIDR you would like to allocate from the IPAM pool. Note the
     * following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength allocation rule
     * set on the pool, you must specify either the NetmaskLength or the CIDR.</p>
     * </li> <li> <p>If the DefaultNetmaskLength allocation rule is set on the pool,
     * you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible values: Any available IPv4 or IPv6 CIDR.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The CIDR you would like to allocate from the IPAM pool. Note the
     * following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength allocation rule
     * set on the pool, you must specify either the NetmaskLength or the CIDR.</p>
     * </li> <li> <p>If the DefaultNetmaskLength allocation rule is set on the pool,
     * you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible values: Any available IPv4 or IPv6 CIDR.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The CIDR you would like to allocate from the IPAM pool. Note the
     * following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength allocation rule
     * set on the pool, you must specify either the NetmaskLength or the CIDR.</p>
     * </li> <li> <p>If the DefaultNetmaskLength allocation rule is set on the pool,
     * you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible values: Any available IPv4 or IPv6 CIDR.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The CIDR you would like to allocate from the IPAM pool. Note the
     * following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength allocation rule
     * set on the pool, you must specify either the NetmaskLength or the CIDR.</p>
     * </li> <li> <p>If the DefaultNetmaskLength allocation rule is set on the pool,
     * you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible values: Any available IPv4 or IPv6 CIDR.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The CIDR you would like to allocate from the IPAM pool. Note the
     * following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength allocation rule
     * set on the pool, you must specify either the NetmaskLength or the CIDR.</p>
     * </li> <li> <p>If the DefaultNetmaskLength allocation rule is set on the pool,
     * you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible values: Any available IPv4 or IPv6 CIDR.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The CIDR you would like to allocate from the IPAM pool. Note the
     * following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength allocation rule
     * set on the pool, you must specify either the NetmaskLength or the CIDR.</p>
     * </li> <li> <p>If the DefaultNetmaskLength allocation rule is set on the pool,
     * you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible values: Any available IPv4 or IPv6 CIDR.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR you would like to allocate from the IPAM pool. Note the
     * following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength allocation rule
     * set on the pool, you must specify either the NetmaskLength or the CIDR.</p>
     * </li> <li> <p>If the DefaultNetmaskLength allocation rule is set on the pool,
     * you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible values: Any available IPv4 or IPv6 CIDR.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The netmask length of the CIDR you would like to allocate from the IPAM pool.
     * Note the following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength
     * allocation rule set on the pool, you must specify either the NetmaskLength or
     * the CIDR.</p> </li> <li> <p>If the DefaultNetmaskLength allocation rule is set
     * on the pool, you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible netmask lengths for IPv4 addresses are 0 - 32. Possible netmask
     * lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline int GetNetmaskLength() const{ return m_netmaskLength; }

    /**
     * <p>The netmask length of the CIDR you would like to allocate from the IPAM pool.
     * Note the following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength
     * allocation rule set on the pool, you must specify either the NetmaskLength or
     * the CIDR.</p> </li> <li> <p>If the DefaultNetmaskLength allocation rule is set
     * on the pool, you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible netmask lengths for IPv4 addresses are 0 - 32. Possible netmask
     * lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline bool NetmaskLengthHasBeenSet() const { return m_netmaskLengthHasBeenSet; }

    /**
     * <p>The netmask length of the CIDR you would like to allocate from the IPAM pool.
     * Note the following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength
     * allocation rule set on the pool, you must specify either the NetmaskLength or
     * the CIDR.</p> </li> <li> <p>If the DefaultNetmaskLength allocation rule is set
     * on the pool, you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible netmask lengths for IPv4 addresses are 0 - 32. Possible netmask
     * lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline void SetNetmaskLength(int value) { m_netmaskLengthHasBeenSet = true; m_netmaskLength = value; }

    /**
     * <p>The netmask length of the CIDR you would like to allocate from the IPAM pool.
     * Note the following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength
     * allocation rule set on the pool, you must specify either the NetmaskLength or
     * the CIDR.</p> </li> <li> <p>If the DefaultNetmaskLength allocation rule is set
     * on the pool, you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible netmask lengths for IPv4 addresses are 0 - 32. Possible netmask
     * lengths for IPv6 addresses are 0 - 128.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithNetmaskLength(int value) { SetNetmaskLength(value); return *this;}


    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * Idempotency</a>.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>A description for the allocation.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description for the allocation.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description for the allocation.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description for the allocation.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description for the allocation.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description for the allocation.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description for the allocation.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description for the allocation.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A preview of the next available CIDR in a pool.</p>
     */
    inline bool GetPreviewNextCidr() const{ return m_previewNextCidr; }

    /**
     * <p>A preview of the next available CIDR in a pool.</p>
     */
    inline bool PreviewNextCidrHasBeenSet() const { return m_previewNextCidrHasBeenSet; }

    /**
     * <p>A preview of the next available CIDR in a pool.</p>
     */
    inline void SetPreviewNextCidr(bool value) { m_previewNextCidrHasBeenSet = true; m_previewNextCidr = value; }

    /**
     * <p>A preview of the next available CIDR in a pool.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithPreviewNextCidr(bool value) { SetPreviewNextCidr(value); return *this;}


    /**
     * <p>Exclude a particular CIDR range from being returned by the pool. Disallowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisallowedCidrs() const{ return m_disallowedCidrs; }

    /**
     * <p>Exclude a particular CIDR range from being returned by the pool. Disallowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline bool DisallowedCidrsHasBeenSet() const { return m_disallowedCidrsHasBeenSet; }

    /**
     * <p>Exclude a particular CIDR range from being returned by the pool. Disallowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline void SetDisallowedCidrs(const Aws::Vector<Aws::String>& value) { m_disallowedCidrsHasBeenSet = true; m_disallowedCidrs = value; }

    /**
     * <p>Exclude a particular CIDR range from being returned by the pool. Disallowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline void SetDisallowedCidrs(Aws::Vector<Aws::String>&& value) { m_disallowedCidrsHasBeenSet = true; m_disallowedCidrs = std::move(value); }

    /**
     * <p>Exclude a particular CIDR range from being returned by the pool. Disallowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithDisallowedCidrs(const Aws::Vector<Aws::String>& value) { SetDisallowedCidrs(value); return *this;}

    /**
     * <p>Exclude a particular CIDR range from being returned by the pool. Disallowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline AllocateIpamPoolCidrRequest& WithDisallowedCidrs(Aws::Vector<Aws::String>&& value) { SetDisallowedCidrs(std::move(value)); return *this;}

    /**
     * <p>Exclude a particular CIDR range from being returned by the pool. Disallowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline AllocateIpamPoolCidrRequest& AddDisallowedCidrs(const Aws::String& value) { m_disallowedCidrsHasBeenSet = true; m_disallowedCidrs.push_back(value); return *this; }

    /**
     * <p>Exclude a particular CIDR range from being returned by the pool. Disallowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline AllocateIpamPoolCidrRequest& AddDisallowedCidrs(Aws::String&& value) { m_disallowedCidrsHasBeenSet = true; m_disallowedCidrs.push_back(std::move(value)); return *this; }

    /**
     * <p>Exclude a particular CIDR range from being returned by the pool. Disallowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline AllocateIpamPoolCidrRequest& AddDisallowedCidrs(const char* value) { m_disallowedCidrsHasBeenSet = true; m_disallowedCidrs.push_back(value); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    int m_netmaskLength;
    bool m_netmaskLengthHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_previewNextCidr;
    bool m_previewNextCidrHasBeenSet = false;

    Aws::Vector<Aws::String> m_disallowedCidrs;
    bool m_disallowedCidrsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
