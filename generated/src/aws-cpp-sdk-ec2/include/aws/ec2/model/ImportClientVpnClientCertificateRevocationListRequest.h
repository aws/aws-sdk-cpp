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
  class ImportClientVpnClientCertificateRevocationListRequest : public EC2Request
  {
  public:
    AWS_EC2_API ImportClientVpnClientCertificateRevocationListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportClientVpnClientCertificateRevocationList"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Client VPN endpoint to which the client certificate revocation
     * list applies.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }
    inline ImportClientVpnClientCertificateRevocationListRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}
    inline ImportClientVpnClientCertificateRevocationListRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}
    inline ImportClientVpnClientCertificateRevocationListRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The client certificate revocation list file. For more information, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/cvpn-working-certificates.html#cvpn-working-certificates-generate">Generate
     * a Client Certificate Revocation List</a> in the <i>Client VPN Administrator
     * Guide</i>.</p>
     */
    inline const Aws::String& GetCertificateRevocationList() const{ return m_certificateRevocationList; }
    inline bool CertificateRevocationListHasBeenSet() const { return m_certificateRevocationListHasBeenSet; }
    inline void SetCertificateRevocationList(const Aws::String& value) { m_certificateRevocationListHasBeenSet = true; m_certificateRevocationList = value; }
    inline void SetCertificateRevocationList(Aws::String&& value) { m_certificateRevocationListHasBeenSet = true; m_certificateRevocationList = std::move(value); }
    inline void SetCertificateRevocationList(const char* value) { m_certificateRevocationListHasBeenSet = true; m_certificateRevocationList.assign(value); }
    inline ImportClientVpnClientCertificateRevocationListRequest& WithCertificateRevocationList(const Aws::String& value) { SetCertificateRevocationList(value); return *this;}
    inline ImportClientVpnClientCertificateRevocationListRequest& WithCertificateRevocationList(Aws::String&& value) { SetCertificateRevocationList(std::move(value)); return *this;}
    inline ImportClientVpnClientCertificateRevocationListRequest& WithCertificateRevocationList(const char* value) { SetCertificateRevocationList(value); return *this;}
    ///@}

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
    inline ImportClientVpnClientCertificateRevocationListRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet = false;

    Aws::String m_certificateRevocationList;
    bool m_certificateRevocationListHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
