/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ClientVpnAuthenticationType.h>
#include <aws/ec2/model/DirectoryServiceAuthentication.h>
#include <aws/ec2/model/CertificateAuthentication.h>
#include <aws/ec2/model/FederatedAuthentication.h>
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
   * <p>Describes the authentication methods used by a Client VPN endpoint. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/client-authentication.html">Authentication</a>
   * in the <i>Client VPN Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnAuthentication">AWS
   * API Reference</a></p>
   */
  class ClientVpnAuthentication
  {
  public:
    AWS_EC2_API ClientVpnAuthentication();
    AWS_EC2_API ClientVpnAuthentication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnAuthentication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The authentication type used.</p>
     */
    inline const ClientVpnAuthenticationType& GetType() const{ return m_type; }

    /**
     * <p>The authentication type used.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The authentication type used.</p>
     */
    inline void SetType(const ClientVpnAuthenticationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The authentication type used.</p>
     */
    inline void SetType(ClientVpnAuthenticationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The authentication type used.</p>
     */
    inline ClientVpnAuthentication& WithType(const ClientVpnAuthenticationType& value) { SetType(value); return *this;}

    /**
     * <p>The authentication type used.</p>
     */
    inline ClientVpnAuthentication& WithType(ClientVpnAuthenticationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Information about the Active Directory, if applicable.</p>
     */
    inline const DirectoryServiceAuthentication& GetActiveDirectory() const{ return m_activeDirectory; }

    /**
     * <p>Information about the Active Directory, if applicable.</p>
     */
    inline bool ActiveDirectoryHasBeenSet() const { return m_activeDirectoryHasBeenSet; }

    /**
     * <p>Information about the Active Directory, if applicable.</p>
     */
    inline void SetActiveDirectory(const DirectoryServiceAuthentication& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = value; }

    /**
     * <p>Information about the Active Directory, if applicable.</p>
     */
    inline void SetActiveDirectory(DirectoryServiceAuthentication&& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = std::move(value); }

    /**
     * <p>Information about the Active Directory, if applicable.</p>
     */
    inline ClientVpnAuthentication& WithActiveDirectory(const DirectoryServiceAuthentication& value) { SetActiveDirectory(value); return *this;}

    /**
     * <p>Information about the Active Directory, if applicable.</p>
     */
    inline ClientVpnAuthentication& WithActiveDirectory(DirectoryServiceAuthentication&& value) { SetActiveDirectory(std::move(value)); return *this;}


    /**
     * <p>Information about the authentication certificates, if applicable.</p>
     */
    inline const CertificateAuthentication& GetMutualAuthentication() const{ return m_mutualAuthentication; }

    /**
     * <p>Information about the authentication certificates, if applicable.</p>
     */
    inline bool MutualAuthenticationHasBeenSet() const { return m_mutualAuthenticationHasBeenSet; }

    /**
     * <p>Information about the authentication certificates, if applicable.</p>
     */
    inline void SetMutualAuthentication(const CertificateAuthentication& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = value; }

    /**
     * <p>Information about the authentication certificates, if applicable.</p>
     */
    inline void SetMutualAuthentication(CertificateAuthentication&& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = std::move(value); }

    /**
     * <p>Information about the authentication certificates, if applicable.</p>
     */
    inline ClientVpnAuthentication& WithMutualAuthentication(const CertificateAuthentication& value) { SetMutualAuthentication(value); return *this;}

    /**
     * <p>Information about the authentication certificates, if applicable.</p>
     */
    inline ClientVpnAuthentication& WithMutualAuthentication(CertificateAuthentication&& value) { SetMutualAuthentication(std::move(value)); return *this;}


    /**
     * <p>Information about the IAM SAML identity provider, if applicable.</p>
     */
    inline const FederatedAuthentication& GetFederatedAuthentication() const{ return m_federatedAuthentication; }

    /**
     * <p>Information about the IAM SAML identity provider, if applicable.</p>
     */
    inline bool FederatedAuthenticationHasBeenSet() const { return m_federatedAuthenticationHasBeenSet; }

    /**
     * <p>Information about the IAM SAML identity provider, if applicable.</p>
     */
    inline void SetFederatedAuthentication(const FederatedAuthentication& value) { m_federatedAuthenticationHasBeenSet = true; m_federatedAuthentication = value; }

    /**
     * <p>Information about the IAM SAML identity provider, if applicable.</p>
     */
    inline void SetFederatedAuthentication(FederatedAuthentication&& value) { m_federatedAuthenticationHasBeenSet = true; m_federatedAuthentication = std::move(value); }

    /**
     * <p>Information about the IAM SAML identity provider, if applicable.</p>
     */
    inline ClientVpnAuthentication& WithFederatedAuthentication(const FederatedAuthentication& value) { SetFederatedAuthentication(value); return *this;}

    /**
     * <p>Information about the IAM SAML identity provider, if applicable.</p>
     */
    inline ClientVpnAuthentication& WithFederatedAuthentication(FederatedAuthentication&& value) { SetFederatedAuthentication(std::move(value)); return *this;}

  private:

    ClientVpnAuthenticationType m_type;
    bool m_typeHasBeenSet = false;

    DirectoryServiceAuthentication m_activeDirectory;
    bool m_activeDirectoryHasBeenSet = false;

    CertificateAuthentication m_mutualAuthentication;
    bool m_mutualAuthenticationHasBeenSet = false;

    FederatedAuthentication m_federatedAuthentication;
    bool m_federatedAuthenticationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
