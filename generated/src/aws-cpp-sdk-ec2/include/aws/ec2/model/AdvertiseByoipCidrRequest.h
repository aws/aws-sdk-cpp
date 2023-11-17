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
  class AdvertiseByoipCidrRequest : public EC2Request
  {
  public:
    AWS_EC2_API AdvertiseByoipCidrRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AdvertiseByoipCidr"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline AdvertiseByoipCidrRequest& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline AdvertiseByoipCidrRequest& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The address range, in CIDR notation. This must be the exact range that you
     * provisioned. You can't advertise only a portion of the provisioned range.</p>
     */
    inline AdvertiseByoipCidrRequest& WithCidr(const char* value) { SetCidr(value); return *this;}


    /**
     * <p>The public 2-byte or 4-byte ASN that you want to advertise.</p>
     */
    inline const Aws::String& GetAsn() const{ return m_asn; }

    /**
     * <p>The public 2-byte or 4-byte ASN that you want to advertise.</p>
     */
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }

    /**
     * <p>The public 2-byte or 4-byte ASN that you want to advertise.</p>
     */
    inline void SetAsn(const Aws::String& value) { m_asnHasBeenSet = true; m_asn = value; }

    /**
     * <p>The public 2-byte or 4-byte ASN that you want to advertise.</p>
     */
    inline void SetAsn(Aws::String&& value) { m_asnHasBeenSet = true; m_asn = std::move(value); }

    /**
     * <p>The public 2-byte or 4-byte ASN that you want to advertise.</p>
     */
    inline void SetAsn(const char* value) { m_asnHasBeenSet = true; m_asn.assign(value); }

    /**
     * <p>The public 2-byte or 4-byte ASN that you want to advertise.</p>
     */
    inline AdvertiseByoipCidrRequest& WithAsn(const Aws::String& value) { SetAsn(value); return *this;}

    /**
     * <p>The public 2-byte or 4-byte ASN that you want to advertise.</p>
     */
    inline AdvertiseByoipCidrRequest& WithAsn(Aws::String&& value) { SetAsn(std::move(value)); return *this;}

    /**
     * <p>The public 2-byte or 4-byte ASN that you want to advertise.</p>
     */
    inline AdvertiseByoipCidrRequest& WithAsn(const char* value) { SetAsn(value); return *this;}


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
    inline AdvertiseByoipCidrRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet = false;

    Aws::String m_asn;
    bool m_asnHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
