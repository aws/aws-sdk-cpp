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
  class DeprovisionIpamPoolCidrRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeprovisionIpamPoolCidrRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeprovisionIpamPoolCidr"; }

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
    inline DeprovisionIpamPoolCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pool that has the CIDR you want to deprovision.</p>
     */
    inline const Aws::String& GetIpamPoolId() const { return m_ipamPoolId; }
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
    template<typename IpamPoolIdT = Aws::String>
    void SetIpamPoolId(IpamPoolIdT&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::forward<IpamPoolIdT>(value); }
    template<typename IpamPoolIdT = Aws::String>
    DeprovisionIpamPoolCidrRequest& WithIpamPoolId(IpamPoolIdT&& value) { SetIpamPoolId(std::forward<IpamPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR which you want to deprovision from the pool.</p>
     */
    inline const Aws::String& GetCidr() const { return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    template<typename CidrT = Aws::String>
    void SetCidr(CidrT&& value) { m_cidrHasBeenSet = true; m_cidr = std::forward<CidrT>(value); }
    template<typename CidrT = Aws::String>
    DeprovisionIpamPoolCidrRequest& WithCidr(CidrT&& value) { SetCidr(std::forward<CidrT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
