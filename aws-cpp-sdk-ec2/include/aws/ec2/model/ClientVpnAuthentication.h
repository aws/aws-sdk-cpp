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
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ClientVpnAuthenticationType.h>
#include <aws/ec2/model/DirectoryServiceAuthentication.h>
#include <aws/ec2/model/CertificateAuthentication.h>
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
   * <p>Describes the authentication methods used by a Client VPN endpoint. Client
   * VPN supports Active Directory and mutual authentication. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/authentication-authrization.html#client-authentication">Authentication</a>
   * in the <i>AWS Client VPN Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnAuthentication">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ClientVpnAuthentication
  {
  public:
    ClientVpnAuthentication();
    ClientVpnAuthentication(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClientVpnAuthentication& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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

  private:

    ClientVpnAuthenticationType m_type;
    bool m_typeHasBeenSet;

    DirectoryServiceAuthentication m_activeDirectory;
    bool m_activeDirectoryHasBeenSet;

    CertificateAuthentication m_mutualAuthentication;
    bool m_mutualAuthenticationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
