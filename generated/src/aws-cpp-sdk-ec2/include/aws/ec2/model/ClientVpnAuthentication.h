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
    AWS_EC2_API ClientVpnAuthentication() = default;
    AWS_EC2_API ClientVpnAuthentication(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ClientVpnAuthentication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The authentication type used.</p>
     */
    inline ClientVpnAuthenticationType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(ClientVpnAuthenticationType value) { m_typeHasBeenSet = true; m_type = value; }
    inline ClientVpnAuthentication& WithType(ClientVpnAuthenticationType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the Active Directory, if applicable.</p>
     */
    inline const DirectoryServiceAuthentication& GetActiveDirectory() const { return m_activeDirectory; }
    inline bool ActiveDirectoryHasBeenSet() const { return m_activeDirectoryHasBeenSet; }
    template<typename ActiveDirectoryT = DirectoryServiceAuthentication>
    void SetActiveDirectory(ActiveDirectoryT&& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = std::forward<ActiveDirectoryT>(value); }
    template<typename ActiveDirectoryT = DirectoryServiceAuthentication>
    ClientVpnAuthentication& WithActiveDirectory(ActiveDirectoryT&& value) { SetActiveDirectory(std::forward<ActiveDirectoryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the authentication certificates, if applicable.</p>
     */
    inline const CertificateAuthentication& GetMutualAuthentication() const { return m_mutualAuthentication; }
    inline bool MutualAuthenticationHasBeenSet() const { return m_mutualAuthenticationHasBeenSet; }
    template<typename MutualAuthenticationT = CertificateAuthentication>
    void SetMutualAuthentication(MutualAuthenticationT&& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = std::forward<MutualAuthenticationT>(value); }
    template<typename MutualAuthenticationT = CertificateAuthentication>
    ClientVpnAuthentication& WithMutualAuthentication(MutualAuthenticationT&& value) { SetMutualAuthentication(std::forward<MutualAuthenticationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the IAM SAML identity provider, if applicable.</p>
     */
    inline const FederatedAuthentication& GetFederatedAuthentication() const { return m_federatedAuthentication; }
    inline bool FederatedAuthenticationHasBeenSet() const { return m_federatedAuthenticationHasBeenSet; }
    template<typename FederatedAuthenticationT = FederatedAuthentication>
    void SetFederatedAuthentication(FederatedAuthenticationT&& value) { m_federatedAuthenticationHasBeenSet = true; m_federatedAuthentication = std::forward<FederatedAuthenticationT>(value); }
    template<typename FederatedAuthenticationT = FederatedAuthentication>
    ClientVpnAuthentication& WithFederatedAuthentication(FederatedAuthenticationT&& value) { SetFederatedAuthentication(std::forward<FederatedAuthenticationT>(value)); return *this;}
    ///@}
  private:

    ClientVpnAuthenticationType m_type{ClientVpnAuthenticationType::NOT_SET};
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
