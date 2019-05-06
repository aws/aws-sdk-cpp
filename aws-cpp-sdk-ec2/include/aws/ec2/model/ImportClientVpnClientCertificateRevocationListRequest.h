/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EC2_API ImportClientVpnClientCertificateRevocationListRequest : public EC2Request
  {
  public:
    ImportClientVpnClientCertificateRevocationListRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ImportClientVpnClientCertificateRevocationList"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ID of the Client VPN endpoint to which the client certificate revocation
     * list applies.</p>
     */
    inline const Aws::String& GetClientVpnEndpointId() const{ return m_clientVpnEndpointId; }

    /**
     * <p>The ID of the Client VPN endpoint to which the client certificate revocation
     * list applies.</p>
     */
    inline bool ClientVpnEndpointIdHasBeenSet() const { return m_clientVpnEndpointIdHasBeenSet; }

    /**
     * <p>The ID of the Client VPN endpoint to which the client certificate revocation
     * list applies.</p>
     */
    inline void SetClientVpnEndpointId(const Aws::String& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = value; }

    /**
     * <p>The ID of the Client VPN endpoint to which the client certificate revocation
     * list applies.</p>
     */
    inline void SetClientVpnEndpointId(Aws::String&& value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId = std::move(value); }

    /**
     * <p>The ID of the Client VPN endpoint to which the client certificate revocation
     * list applies.</p>
     */
    inline void SetClientVpnEndpointId(const char* value) { m_clientVpnEndpointIdHasBeenSet = true; m_clientVpnEndpointId.assign(value); }

    /**
     * <p>The ID of the Client VPN endpoint to which the client certificate revocation
     * list applies.</p>
     */
    inline ImportClientVpnClientCertificateRevocationListRequest& WithClientVpnEndpointId(const Aws::String& value) { SetClientVpnEndpointId(value); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint to which the client certificate revocation
     * list applies.</p>
     */
    inline ImportClientVpnClientCertificateRevocationListRequest& WithClientVpnEndpointId(Aws::String&& value) { SetClientVpnEndpointId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Client VPN endpoint to which the client certificate revocation
     * list applies.</p>
     */
    inline ImportClientVpnClientCertificateRevocationListRequest& WithClientVpnEndpointId(const char* value) { SetClientVpnEndpointId(value); return *this;}


    /**
     * <p>The client certificate revocation list file. For more information, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/cvpn-working-certificates.html#cvpn-working-certificates-generate">Generate
     * a Client Certificate Revocation List</a> in the <i>AWS Client VPN Administrator
     * Guide</i>.</p>
     */
    inline const Aws::String& GetCertificateRevocationList() const{ return m_certificateRevocationList; }

    /**
     * <p>The client certificate revocation list file. For more information, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/cvpn-working-certificates.html#cvpn-working-certificates-generate">Generate
     * a Client Certificate Revocation List</a> in the <i>AWS Client VPN Administrator
     * Guide</i>.</p>
     */
    inline bool CertificateRevocationListHasBeenSet() const { return m_certificateRevocationListHasBeenSet; }

    /**
     * <p>The client certificate revocation list file. For more information, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/cvpn-working-certificates.html#cvpn-working-certificates-generate">Generate
     * a Client Certificate Revocation List</a> in the <i>AWS Client VPN Administrator
     * Guide</i>.</p>
     */
    inline void SetCertificateRevocationList(const Aws::String& value) { m_certificateRevocationListHasBeenSet = true; m_certificateRevocationList = value; }

    /**
     * <p>The client certificate revocation list file. For more information, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/cvpn-working-certificates.html#cvpn-working-certificates-generate">Generate
     * a Client Certificate Revocation List</a> in the <i>AWS Client VPN Administrator
     * Guide</i>.</p>
     */
    inline void SetCertificateRevocationList(Aws::String&& value) { m_certificateRevocationListHasBeenSet = true; m_certificateRevocationList = std::move(value); }

    /**
     * <p>The client certificate revocation list file. For more information, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/cvpn-working-certificates.html#cvpn-working-certificates-generate">Generate
     * a Client Certificate Revocation List</a> in the <i>AWS Client VPN Administrator
     * Guide</i>.</p>
     */
    inline void SetCertificateRevocationList(const char* value) { m_certificateRevocationListHasBeenSet = true; m_certificateRevocationList.assign(value); }

    /**
     * <p>The client certificate revocation list file. For more information, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/cvpn-working-certificates.html#cvpn-working-certificates-generate">Generate
     * a Client Certificate Revocation List</a> in the <i>AWS Client VPN Administrator
     * Guide</i>.</p>
     */
    inline ImportClientVpnClientCertificateRevocationListRequest& WithCertificateRevocationList(const Aws::String& value) { SetCertificateRevocationList(value); return *this;}

    /**
     * <p>The client certificate revocation list file. For more information, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/cvpn-working-certificates.html#cvpn-working-certificates-generate">Generate
     * a Client Certificate Revocation List</a> in the <i>AWS Client VPN Administrator
     * Guide</i>.</p>
     */
    inline ImportClientVpnClientCertificateRevocationListRequest& WithCertificateRevocationList(Aws::String&& value) { SetCertificateRevocationList(std::move(value)); return *this;}

    /**
     * <p>The client certificate revocation list file. For more information, see <a
     * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/cvpn-working-certificates.html#cvpn-working-certificates-generate">Generate
     * a Client Certificate Revocation List</a> in the <i>AWS Client VPN Administrator
     * Guide</i>.</p>
     */
    inline ImportClientVpnClientCertificateRevocationListRequest& WithCertificateRevocationList(const char* value) { SetCertificateRevocationList(value); return *this;}


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
    inline ImportClientVpnClientCertificateRevocationListRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_clientVpnEndpointId;
    bool m_clientVpnEndpointIdHasBeenSet;

    Aws::String m_certificateRevocationList;
    bool m_certificateRevocationListHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
