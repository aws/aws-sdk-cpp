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
    AWS_EC2_API ProvisionIpamByoasnRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvisionIpamByoasn"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline ProvisionIpamByoasnRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>An IPAM ID.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }

    /**
     * <p>An IPAM ID.</p>
     */
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }

    /**
     * <p>An IPAM ID.</p>
     */
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }

    /**
     * <p>An IPAM ID.</p>
     */
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }

    /**
     * <p>An IPAM ID.</p>
     */
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }

    /**
     * <p>An IPAM ID.</p>
     */
    inline ProvisionIpamByoasnRequest& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}

    /**
     * <p>An IPAM ID.</p>
     */
    inline ProvisionIpamByoasnRequest& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}

    /**
     * <p>An IPAM ID.</p>
     */
    inline ProvisionIpamByoasnRequest& WithIpamId(const char* value) { SetIpamId(value); return *this;}


    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline const Aws::String& GetAsn() const{ return m_asn; }

    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }

    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline void SetAsn(const Aws::String& value) { m_asnHasBeenSet = true; m_asn = value; }

    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline void SetAsn(Aws::String&& value) { m_asnHasBeenSet = true; m_asn = std::move(value); }

    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline void SetAsn(const char* value) { m_asnHasBeenSet = true; m_asn.assign(value); }

    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline ProvisionIpamByoasnRequest& WithAsn(const Aws::String& value) { SetAsn(value); return *this;}

    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline ProvisionIpamByoasnRequest& WithAsn(Aws::String&& value) { SetAsn(std::move(value)); return *this;}

    /**
     * <p>A public 2-byte or 4-byte ASN.</p>
     */
    inline ProvisionIpamByoasnRequest& WithAsn(const char* value) { SetAsn(value); return *this;}


    /**
     * <p>An ASN authorization context.</p>
     */
    inline const AsnAuthorizationContext& GetAsnAuthorizationContext() const{ return m_asnAuthorizationContext; }

    /**
     * <p>An ASN authorization context.</p>
     */
    inline bool AsnAuthorizationContextHasBeenSet() const { return m_asnAuthorizationContextHasBeenSet; }

    /**
     * <p>An ASN authorization context.</p>
     */
    inline void SetAsnAuthorizationContext(const AsnAuthorizationContext& value) { m_asnAuthorizationContextHasBeenSet = true; m_asnAuthorizationContext = value; }

    /**
     * <p>An ASN authorization context.</p>
     */
    inline void SetAsnAuthorizationContext(AsnAuthorizationContext&& value) { m_asnAuthorizationContextHasBeenSet = true; m_asnAuthorizationContext = std::move(value); }

    /**
     * <p>An ASN authorization context.</p>
     */
    inline ProvisionIpamByoasnRequest& WithAsnAuthorizationContext(const AsnAuthorizationContext& value) { SetAsnAuthorizationContext(value); return *this;}

    /**
     * <p>An ASN authorization context.</p>
     */
    inline ProvisionIpamByoasnRequest& WithAsnAuthorizationContext(AsnAuthorizationContext&& value) { SetAsnAuthorizationContext(std::move(value)); return *this;}

  private:

    bool m_dryRun;
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
