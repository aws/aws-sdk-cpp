﻿/**
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
  class DeprovisionIpamByoasnRequest : public EC2Request
  {
  public:
    AWS_EC2_API DeprovisionIpamByoasnRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeprovisionIpamByoasn"; }

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
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DeprovisionIpamByoasnRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IPAM ID.</p>
     */
    inline const Aws::String& GetIpamId() const{ return m_ipamId; }
    inline bool IpamIdHasBeenSet() const { return m_ipamIdHasBeenSet; }
    inline void SetIpamId(const Aws::String& value) { m_ipamIdHasBeenSet = true; m_ipamId = value; }
    inline void SetIpamId(Aws::String&& value) { m_ipamIdHasBeenSet = true; m_ipamId = std::move(value); }
    inline void SetIpamId(const char* value) { m_ipamIdHasBeenSet = true; m_ipamId.assign(value); }
    inline DeprovisionIpamByoasnRequest& WithIpamId(const Aws::String& value) { SetIpamId(value); return *this;}
    inline DeprovisionIpamByoasnRequest& WithIpamId(Aws::String&& value) { SetIpamId(std::move(value)); return *this;}
    inline DeprovisionIpamByoasnRequest& WithIpamId(const char* value) { SetIpamId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An ASN.</p>
     */
    inline const Aws::String& GetAsn() const{ return m_asn; }
    inline bool AsnHasBeenSet() const { return m_asnHasBeenSet; }
    inline void SetAsn(const Aws::String& value) { m_asnHasBeenSet = true; m_asn = value; }
    inline void SetAsn(Aws::String&& value) { m_asnHasBeenSet = true; m_asn = std::move(value); }
    inline void SetAsn(const char* value) { m_asnHasBeenSet = true; m_asn.assign(value); }
    inline DeprovisionIpamByoasnRequest& WithAsn(const Aws::String& value) { SetAsn(value); return *this;}
    inline DeprovisionIpamByoasnRequest& WithAsn(Aws::String&& value) { SetAsn(std::move(value)); return *this;}
    inline DeprovisionIpamByoasnRequest& WithAsn(const char* value) { SetAsn(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::String m_ipamId;
    bool m_ipamIdHasBeenSet = false;

    Aws::String m_asn;
    bool m_asnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
