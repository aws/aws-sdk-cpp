﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/IpamCidrAuthorizationContext.h>
#include <aws/ec2/model/VerificationMethod.h>
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
  class ProvisionIpamPoolCidrRequest : public EC2Request
  {
  public:
    AWS_EC2_API ProvisionIpamPoolCidrRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionIpamPoolCidr"; }

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
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline ProvisionIpamPoolCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the IPAM pool to which you want to assign a CIDR.</p>
     */
    inline const Aws::String& GetIpamPoolId() const{ return m_ipamPoolId; }
    inline bool IpamPoolIdHasBeenSet() const { return m_ipamPoolIdHasBeenSet; }
    inline void SetIpamPoolId(const Aws::String& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = value; }
    inline void SetIpamPoolId(Aws::String&& value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId = std::move(value); }
    inline void SetIpamPoolId(const char* value) { m_ipamPoolIdHasBeenSet = true; m_ipamPoolId.assign(value); }
    inline ProvisionIpamPoolCidrRequest& WithIpamPoolId(const Aws::String& value) { SetIpamPoolId(value); return *this;}
    inline ProvisionIpamPoolCidrRequest& WithIpamPoolId(Aws::String&& value) { SetIpamPoolId(std::move(value)); return *this;}
    inline ProvisionIpamPoolCidrRequest& WithIpamPoolId(const char* value) { SetIpamPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR you want to assign to the IPAM pool. Either "NetmaskLength" or
     * "Cidr" is required. This value will be null if you specify "NetmaskLength" and
     * will be filled in during the provisioning process.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }
    inline ProvisionIpamPoolCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}
    inline ProvisionIpamPoolCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}
    inline ProvisionIpamPoolCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A signed document that proves that you are authorized to bring a specified IP
     * address range to Amazon using BYOIP. This option only applies to IPv4 and IPv6
     * pools in the public scope.</p>
     */
    inline const IpamCidrAuthorizationContext& GetCidrAuthorizationContext() const{ return m_cidrAuthorizationContext; }
    inline bool CidrAuthorizationContextHasBeenSet() const { return m_cidrAuthorizationContextHasBeenSet; }
    inline void SetCidrAuthorizationContext(const IpamCidrAuthorizationContext& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = value; }
    inline void SetCidrAuthorizationContext(IpamCidrAuthorizationContext&& value) { m_cidrAuthorizationContextHasBeenSet = true; m_cidrAuthorizationContext = std::move(value); }
    inline ProvisionIpamPoolCidrRequest& WithCidrAuthorizationContext(const IpamCidrAuthorizationContext& value) { SetCidrAuthorizationContext(value); return *this;}
    inline ProvisionIpamPoolCidrRequest& WithCidrAuthorizationContext(IpamCidrAuthorizationContext&& value) { SetCidrAuthorizationContext(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The netmask length of the CIDR you'd like to provision to a pool. Can be used
     * for provisioning Amazon-provided IPv6 CIDRs to top-level pools and for
     * provisioning CIDRs to pools with source pools. Cannot be used to provision BYOIP
     * CIDRs to top-level pools. Either "NetmaskLength" or "Cidr" is required.</p>
     */
    inline int GetNetmaskLength() const{ return m_netmaskLength; }
    inline bool NetmaskLengthHasBeenSet() const { return m_netmaskLengthHasBeenSet; }
    inline void SetNetmaskLength(int value) { m_netmaskLengthHasBeenSet = true; m_netmaskLength = value; }
    inline ProvisionIpamPoolCidrRequest& WithNetmaskLength(int value) { SetNetmaskLength(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. For more information, see <a
     * href="https://docs.aws.amazon.com/ec2/latest/devguide/ec2-api-idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ProvisionIpamPoolCidrRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ProvisionIpamPoolCidrRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ProvisionIpamPoolCidrRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method for verifying control of a public IP address range. Defaults to
     * <code>remarks-x509</code> if not specified. This option only applies to IPv4 and
     * IPv6 pools in the public scope.</p>
     */
    inline const VerificationMethod& GetVerificationMethod() const{ return m_verificationMethod; }
    inline bool VerificationMethodHasBeenSet() const { return m_verificationMethodHasBeenSet; }
    inline void SetVerificationMethod(const VerificationMethod& value) { m_verificationMethodHasBeenSet = true; m_verificationMethod = value; }
    inline void SetVerificationMethod(VerificationMethod&& value) { m_verificationMethodHasBeenSet = true; m_verificationMethod = std::move(value); }
    inline ProvisionIpamPoolCidrRequest& WithVerificationMethod(const VerificationMethod& value) { SetVerificationMethod(value); return *this;}
    inline ProvisionIpamPoolCidrRequest& WithVerificationMethod(VerificationMethod&& value) { SetVerificationMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Verification token ID. This option only applies to IPv4 and IPv6 pools in the
     * public scope.</p>
     */
    inline const Aws::String& GetIpamExternalResourceVerificationTokenId() const{ return m_ipamExternalResourceVerificationTokenId; }
    inline bool IpamExternalResourceVerificationTokenIdHasBeenSet() const { return m_ipamExternalResourceVerificationTokenIdHasBeenSet; }
    inline void SetIpamExternalResourceVerificationTokenId(const Aws::String& value) { m_ipamExternalResourceVerificationTokenIdHasBeenSet = true; m_ipamExternalResourceVerificationTokenId = value; }
    inline void SetIpamExternalResourceVerificationTokenId(Aws::String&& value) { m_ipamExternalResourceVerificationTokenIdHasBeenSet = true; m_ipamExternalResourceVerificationTokenId = std::move(value); }
    inline void SetIpamExternalResourceVerificationTokenId(const char* value) { m_ipamExternalResourceVerificationTokenIdHasBeenSet = true; m_ipamExternalResourceVerificationTokenId.assign(value); }
    inline ProvisionIpamPoolCidrRequest& WithIpamExternalResourceVerificationTokenId(const Aws::String& value) { SetIpamExternalResourceVerificationTokenId(value); return *this;}
    inline ProvisionIpamPoolCidrRequest& WithIpamExternalResourceVerificationTokenId(Aws::String&& value) { SetIpamExternalResourceVerificationTokenId(std::move(value)); return *this;}
    inline ProvisionIpamPoolCidrRequest& WithIpamExternalResourceVerificationTokenId(const char* value) { SetIpamExternalResourceVerificationTokenId(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamPoolId;
    bool m_ipamPoolIdHasBeenSet = false;

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    IpamCidrAuthorizationContext m_cidrAuthorizationContext;
    bool m_cidrAuthorizationContextHasBeenSet = false;

    int m_netmaskLength;
    bool m_netmaskLengthHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    VerificationMethod m_verificationMethod;
    bool m_verificationMethodHasBeenSet = false;

    Aws::String m_ipamExternalResourceVerificationTokenId;
    bool m_ipamExternalResourceVerificationTokenIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
