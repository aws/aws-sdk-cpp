/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ClientVpnAuthenticationType.h>
#include <aws/ec2/model/DirectoryServiceAuthenticationRequest.h>
#include <aws/ec2/model/CertificateAuthenticationRequest.h>
#include <aws/ec2/model/FederatedAuthenticationRequest.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the authentication method to be used by a Client VPN endpoint. For
   * more information, see <a
   * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/authentication-authrization.html#client-authentication">Authentication</a>
   * in the <i>Client VPN Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnAuthenticationRequest">AWS
   * API Reference</a></p>
   */
  class ClientVpnAuthenticationRequest
  {
  public:
    AWS_EC2_API ClientVpnAuthenticationRequest();
    AWS_EC2_API ClientVpnAuthenticationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnAuthenticationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of client authentication to be used.</p>
     */
    inline const ClientVpnAuthenticationType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const ClientVpnAuthenticationType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(ClientVpnAuthenticationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline ClientVpnAuthenticationRequest& WithType(const ClientVpnAuthenticationType& value) { SetType(value); return *this;}
    inline ClientVpnAuthenticationRequest& WithType(ClientVpnAuthenticationType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Active Directory to be used, if applicable. You must
     * provide this information if <b>Type</b> is
     * <code>directory-service-authentication</code>.</p>
     */
    inline const DirectoryServiceAuthenticationRequest& GetActiveDirectory() const{ return m_activeDirectory; }
    inline bool ActiveDirectoryHasBeenSet() const { return m_activeDirectoryHasBeenSet; }
    inline void SetActiveDirectory(const DirectoryServiceAuthenticationRequest& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = value; }
    inline void SetActiveDirectory(DirectoryServiceAuthenticationRequest&& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = std::move(value); }
    inline ClientVpnAuthenticationRequest& WithActiveDirectory(const DirectoryServiceAuthenticationRequest& value) { SetActiveDirectory(value); return *this;}
    inline ClientVpnAuthenticationRequest& WithActiveDirectory(DirectoryServiceAuthenticationRequest&& value) { SetActiveDirectory(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the authentication certificates to be used, if applicable.
     * You must provide this information if <b>Type</b> is
     * <code>certificate-authentication</code>.</p>
     */
    inline const CertificateAuthenticationRequest& GetMutualAuthentication() const{ return m_mutualAuthentication; }
    inline bool MutualAuthenticationHasBeenSet() const { return m_mutualAuthenticationHasBeenSet; }
    inline void SetMutualAuthentication(const CertificateAuthenticationRequest& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = value; }
    inline void SetMutualAuthentication(CertificateAuthenticationRequest&& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = std::move(value); }
    inline ClientVpnAuthenticationRequest& WithMutualAuthentication(const CertificateAuthenticationRequest& value) { SetMutualAuthentication(value); return *this;}
    inline ClientVpnAuthenticationRequest& WithMutualAuthentication(CertificateAuthenticationRequest&& value) { SetMutualAuthentication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IAM SAML identity provider to be used, if applicable.
     * You must provide this information if <b>Type</b> is
     * <code>federated-authentication</code>.</p>
     */
    inline const FederatedAuthenticationRequest& GetFederatedAuthentication() const{ return m_federatedAuthentication; }
    inline bool FederatedAuthenticationHasBeenSet() const { return m_federatedAuthenticationHasBeenSet; }
    inline void SetFederatedAuthentication(const FederatedAuthenticationRequest& value) { m_federatedAuthenticationHasBeenSet = true; m_federatedAuthentication = value; }
    inline void SetFederatedAuthentication(FederatedAuthenticationRequest&& value) { m_federatedAuthenticationHasBeenSet = true; m_federatedAuthentication = std::move(value); }
    inline ClientVpnAuthenticationRequest& WithFederatedAuthentication(const FederatedAuthenticationRequest& value) { SetFederatedAuthentication(value); return *this;}
    inline ClientVpnAuthenticationRequest& WithFederatedAuthentication(FederatedAuthenticationRequest&& value) { SetFederatedAuthentication(std::move(value)); return *this;}
    ///@}
  private:

    ClientVpnAuthenticationType m_type;
    bool m_typeHasBeenSet = false;

    DirectoryServiceAuthenticationRequest m_activeDirectory;
    bool m_activeDirectoryHasBeenSet = false;

    CertificateAuthenticationRequest m_mutualAuthentication;
    bool m_mutualAuthenticationHasBeenSet = false;

    FederatedAuthenticationRequest m_federatedAuthentication;
    bool m_federatedAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
