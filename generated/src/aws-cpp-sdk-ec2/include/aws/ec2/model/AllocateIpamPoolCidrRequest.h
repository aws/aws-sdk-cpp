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
    AWS_EC2_API AllocateIpamPoolCidrRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AllocateIpamPoolCidr"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>A check for whether you have the required permissions for the action without
     * actually making the request and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline AllocateIpamPoolCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM pool from which you would like to allocate a CIDR.</p>
     */
    inline const Aws::String& GetIpamPoolId() const { return m_ipamPoolId; }
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
    template<typename IpamPoolIdT = Aws::String>
    void SetIpamPoolId(IpamPoolIdT&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::forward<IpamPoolIdT>(value); }
    template<typename IpamPoolIdT = Aws::String>
    AllocateIpamPoolCidrRequest& WithIpamPoolId(IpamPoolIdT&& value) { SetIpamPoolId(std::forward<IpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR you would like to allocate from the IPAM pool. Note the
     * following:</p> <ul> <li> <p>If there is no DefaultNetmaskLength allocation rule
     * set on the pool, you must specify either the NetmaskLength or the CIDR.</p>
     * </li> <li> <p>If the DefaultNetmaskLength allocation rule is set on the pool,
     * you can specify either the NetmaskLength or the CIDR and the
     * DefaultNetmaskLength allocation rule will be ignored.</p> </li> </ul>
     * <p>Possible values: Any available IPv4 or IPv6 CIDR.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    AllocateIpamPoolCidrRequest& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}

    ///@{
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
    inline int GetNetmaskLength() const { return m_netmaskLength; }
    inline bool NetmaskLengthHasBeenSet() const { return m_netmaskLengthHasBeenSet; }
    inline void SetNetmaskLength(int value) { m_netmaskLengthHasBeenSet = true; m_netmaskLength = value; }
    inline AllocateIpamPoolCidrRequest& WithNetmaskLength(int value) { SetNetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    AllocateIpamPoolCidrRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the allocation.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    AllocateIpamPoolCidrRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A preview of the next available CIDR in a pool.</p>
     */
    inline bool GetPreviewNextCidr() const { return m_previewNextCidr; }
    inline bool PreviewNextCidrHasBeenSet() const { return m_previewNextCidrHasBeenSet; }
    inline void SetPreviewNextCidr(bool value) { m_previewNextCidrHasBeenSet = true; m_previewNextCidr = value; }
    inline AllocateIpamPoolCidrRequest& WithPreviewNextCidr(bool value) { SetPreviewNextCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Include a particular CIDR range that can be returned by the pool. Allowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAllowedCidrs() const { return m_allowedCidrs; }
    inline bool AllowedCidrsHasBeenSet() const { return m_allowedCidrsHasBeenSet; }
    template<typename AllowedCidrsT = Aws::Vector<Aws::String>>
    void SetAllowedCidrs(AllowedCidrsT&& value) { m_allowedCidrsHasBeenSet = true; m_allowedCidrs = std::forward<AllowedCidrsT>(value); }
    template<typename AllowedCidrsT = Aws::Vector<Aws::String>>
    AllocateIpamPoolCidrRequest& WithAllowedCidrs(AllowedCidrsT&& value) { SetAllowedCidrs(std::forward<AllowedCidrsT>(value)); return *this;}
    template<typename AllowedCidrsT = Aws::String>
    AllocateIpamPoolCidrRequest& AddAllowedCidrs(AllowedCidrsT&& value) { m_allowedCidrsHasBeenSet = true; m_allowedCidrs.emplace_back(std::forward<AllowedCidrsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Exclude a particular CIDR range from being returned by the pool. Disallowed
     * CIDRs are only allowed if using netmask length for allocation.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDisallowedCidrs() const { return m_disallowedCidrs; }
    inline bool DisallowedCidrsHasBeenSet() const { return m_disallowedCidrsHasBeenSet; }
    template<typename DisallowedCidrsT = Aws::Vector<Aws::String>>
    void SetDisallowedCidrs(DisallowedCidrsT&& value) { m_disallowedCidrsHasBeenSet = true; m_disallowedCidrs = std::forward<DisallowedCidrsT>(value); }
    template<typename DisallowedCidrsT = Aws::Vector<Aws::String>>
    AllocateIpamPoolCidrRequest& WithDisallowedCidrs(DisallowedCidrsT&& value) { SetDisallowedCidrs(std::forward<DisallowedCidrsT>(value)); return *this;}
    template<typename DisallowedCidrsT = Aws::String>
    AllocateIpamPoolCidrRequest& AddDisallowedCidrs(DisallowedCidrsT&& value) { m_disallowedCidrsHasBeenSet = true; m_disallowedCidrs.emplace_back(std::forward<DisallowedCidrsT>(value)); return *this; }
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    int m_netmaskLength{0};
    bool m_netmaskLengthHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_previewNextCidr{false};
    bool m_previewNextCidrHasBeenSet = false;

    Aws::Vector<Aws::String> m_allowedCidrs;
    bool m_allowedCidrsHasBeenSet = false;

    Aws::Vector<Aws::String> m_disallowedCidrs;
    bool m_disallowedCidrsHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
