/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/AsnAuthorizationContext.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class ProvisionIpamByoasnRequest : public EC2Request
  {
  public:
    AWS_EC2_API ProvisionIpamByoasnRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionIpamByoasn"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ProvisionIpamByoasnRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An IPAM ID.</p>
     */
    inline const Aws::String& GetIpamId() const { return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    template<typename IpamIdT = Aws::String>
    void SetIpamId(IpamIdT&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::forward<IpamIdT>(value); }
    template<typename IpamIdT = Aws::String>
    ProvisionIpamByoasnRequest& WithIpamId(IpamIdT&& value) { SetIpamId(std::forward<IpamIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline const Aws::String& GetAsn() const { return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    template<typename AsnT = Aws::String>
    void SetAsn(AsnT&& value) { m_asnHasBeenSet = true; m_asn = std::forward<AsnT>(value); }
    template<typename AsnT = Aws::String>
    ProvisionIpamByoasnRequest& WithAsn(AsnT&& value) { SetAsn(std::forward<AsnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ASN authorization context.</p>
     */
    inline const AsnAuthorizationContext& GetAsnAuthorizationContext() const { return m_asnAuthorizationContext; }
    inline bool AsnAuthorizationContextHasBeenSet() const { return m_asnAuthorizationContextHasBeenSet; }
    template<typename AsnAuthorizationContextT = AsnAuthorizationContext>
    void SetAsnAuthorizationContext(AsnAuthorizationContextT&& value) { m_asnAuthorizationContextHasBeenSet = true; m_asnAuthorizationContext = std::forward<AsnAuthorizationContextT>(value); }
    template<typename AsnAuthorizationContextT = AsnAuthorizationContext>
    ProvisionIpamByoasnRequest& WithAsnAuthorizationContext(AsnAuthorizationContextT&& value) { SetAsnAuthorizationContext(std::forward<AsnAuthorizationContextT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::String m_asn;
    bool m_asnHasBeenSet = false;

    AsnAuthorizationContext m_asnAuthorizationContext;
    bool m_asnAuthorizationContextHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
