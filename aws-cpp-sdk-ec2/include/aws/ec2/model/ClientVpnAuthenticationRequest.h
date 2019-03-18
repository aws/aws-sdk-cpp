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
#include <aws/ec2/model/DirectoryServiceAuthenticationRequest.h>
#include <aws/ec2/model/CertificateAuthenticationRequest.h>
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
   * <p>Describes the authentication method to be used by a Client VPN endpoint.
   * Client VPN supports Active Directory and mutual authentication. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/vpn/latest/clientvpn-admin/authentication-authrization.html#client-authentication">Authentication</a>
   * in the <i>AWS Client VPN Administrator Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ClientVpnAuthenticationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ClientVpnAuthenticationRequest
  {
  public:
    ClientVpnAuthenticationRequest();
    ClientVpnAuthenticationRequest(const Aws::Utils::Xml::XmlNode& xmlNode);
    ClientVpnAuthenticationRequest& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of client authentication to be used. Specify
     * <code>certificate-authentication</code> to use certificate-based authentication,
     * or <code>directory-service-authentication</code> to use Active Directory
     * authentication.</p>
     */
    inline const ClientVpnAuthenticationType& GetType() const{ return m_type; }

    /**
     * <p>The type of client authentication to be used. Specify
     * <code>certificate-authentication</code> to use certificate-based authentication,
     * or <code>directory-service-authentication</code> to use Active Directory
     * authentication.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of client authentication to be used. Specify
     * <code>certificate-authentication</code> to use certificate-based authentication,
     * or <code>directory-service-authentication</code> to use Active Directory
     * authentication.</p>
     */
    inline void SetType(const ClientVpnAuthenticationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of client authentication to be used. Specify
     * <code>certificate-authentication</code> to use certificate-based authentication,
     * or <code>directory-service-authentication</code> to use Active Directory
     * authentication.</p>
     */
    inline void SetType(ClientVpnAuthenticationType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of client authentication to be used. Specify
     * <code>certificate-authentication</code> to use certificate-based authentication,
     * or <code>directory-service-authentication</code> to use Active Directory
     * authentication.</p>
     */
    inline ClientVpnAuthenticationRequest& WithType(const ClientVpnAuthenticationType& value) { SetType(value); return *this;}

    /**
     * <p>The type of client authentication to be used. Specify
     * <code>certificate-authentication</code> to use certificate-based authentication,
     * or <code>directory-service-authentication</code> to use Active Directory
     * authentication.</p>
     */
    inline ClientVpnAuthenticationRequest& WithType(ClientVpnAuthenticationType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Information about the Active Directory to be used, if applicable. You must
     * provide this information if <b>Type</b> is
     * <code>directory-service-authentication</code>.</p>
     */
    inline const DirectoryServiceAuthenticationRequest& GetActiveDirectory() const{ return m_activeDirectory; }

    /**
     * <p>Information about the Active Directory to be used, if applicable. You must
     * provide this information if <b>Type</b> is
     * <code>directory-service-authentication</code>.</p>
     */
    inline bool ActiveDirectoryHasBeenSet() const { return m_activeDirectoryHasBeenSet; }

    /**
     * <p>Information about the Active Directory to be used, if applicable. You must
     * provide this information if <b>Type</b> is
     * <code>directory-service-authentication</code>.</p>
     */
    inline void SetActiveDirectory(const DirectoryServiceAuthenticationRequest& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = value; }

    /**
     * <p>Information about the Active Directory to be used, if applicable. You must
     * provide this information if <b>Type</b> is
     * <code>directory-service-authentication</code>.</p>
     */
    inline void SetActiveDirectory(DirectoryServiceAuthenticationRequest&& value) { m_activeDirectoryHasBeenSet = true; m_activeDirectory = std::move(value); }

    /**
     * <p>Information about the Active Directory to be used, if applicable. You must
     * provide this information if <b>Type</b> is
     * <code>directory-service-authentication</code>.</p>
     */
    inline ClientVpnAuthenticationRequest& WithActiveDirectory(const DirectoryServiceAuthenticationRequest& value) { SetActiveDirectory(value); return *this;}

    /**
     * <p>Information about the Active Directory to be used, if applicable. You must
     * provide this information if <b>Type</b> is
     * <code>directory-service-authentication</code>.</p>
     */
    inline ClientVpnAuthenticationRequest& WithActiveDirectory(DirectoryServiceAuthenticationRequest&& value) { SetActiveDirectory(std::move(value)); return *this;}


    /**
     * <p>Information about the authentication certificates to be used, if applicable.
     * You must provide this information if <b>Type</b> is
     * <code>certificate-authentication</code>.</p>
     */
    inline const CertificateAuthenticationRequest& GetMutualAuthentication() const{ return m_mutualAuthentication; }

    /**
     * <p>Information about the authentication certificates to be used, if applicable.
     * You must provide this information if <b>Type</b> is
     * <code>certificate-authentication</code>.</p>
     */
    inline bool MutualAuthenticationHasBeenSet() const { return m_mutualAuthenticationHasBeenSet; }

    /**
     * <p>Information about the authentication certificates to be used, if applicable.
     * You must provide this information if <b>Type</b> is
     * <code>certificate-authentication</code>.</p>
     */
    inline void SetMutualAuthentication(const CertificateAuthenticationRequest& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = value; }

    /**
     * <p>Information about the authentication certificates to be used, if applicable.
     * You must provide this information if <b>Type</b> is
     * <code>certificate-authentication</code>.</p>
     */
    inline void SetMutualAuthentication(CertificateAuthenticationRequest&& value) { m_mutualAuthenticationHasBeenSet = true; m_mutualAuthentication = std::move(value); }

    /**
     * <p>Information about the authentication certificates to be used, if applicable.
     * You must provide this information if <b>Type</b> is
     * <code>certificate-authentication</code>.</p>
     */
    inline ClientVpnAuthenticationRequest& WithMutualAuthentication(const CertificateAuthenticationRequest& value) { SetMutualAuthentication(value); return *this;}

    /**
     * <p>Information about the authentication certificates to be used, if applicable.
     * You must provide this information if <b>Type</b> is
     * <code>certificate-authentication</code>.</p>
     */
    inline ClientVpnAuthenticationRequest& WithMutualAuthentication(CertificateAuthenticationRequest&& value) { SetMutualAuthentication(std::move(value)); return *this;}

  private:

    ClientVpnAuthenticationType m_type;
    bool m_typeHasBeenSet;

    DirectoryServiceAuthenticationRequest m_activeDirectory;
    bool m_activeDirectoryHasBeenSet;

    CertificateAuthenticationRequest m_mutualAuthentication;
    bool m_mutualAuthenticationHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
