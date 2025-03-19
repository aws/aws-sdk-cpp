/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ServiceAccountCredentials.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appstream/model/CertificateBasedAuthProperties.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AppStream
{
namespace Model
{

  /**
   * <p>Describes the configuration information required to join fleets and image
   * builders to Microsoft Active Directory domains.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/DirectoryConfig">AWS
   * API Reference</a></p>
   */
  class DirectoryConfig
  {
  public:
    AWS_APPSTREAM_API DirectoryConfig() = default;
    AWS_APPSTREAM_API DirectoryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API DirectoryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline const Aws::String& GetDirectoryName() const { return m_directoryName; }
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }
    template<typename DirectoryNameT = Aws::String>
    void SetDirectoryName(DirectoryNameT&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::forward<DirectoryNameT>(value); }
    template<typename DirectoryNameT = Aws::String>
    DirectoryConfig& WithDirectoryName(DirectoryNameT&& value) { SetDirectoryName(std::forward<DirectoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitDistinguishedNames() const { return m_organizationalUnitDistinguishedNames; }
    inline bool OrganizationalUnitDistinguishedNamesHasBeenSet() const { return m_organizationalUnitDistinguishedNamesHasBeenSet; }
    template<typename OrganizationalUnitDistinguishedNamesT = Aws::Vector<Aws::String>>
    void SetOrganizationalUnitDistinguishedNames(OrganizationalUnitDistinguishedNamesT&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames = std::forward<OrganizationalUnitDistinguishedNamesT>(value); }
    template<typename OrganizationalUnitDistinguishedNamesT = Aws::Vector<Aws::String>>
    DirectoryConfig& WithOrganizationalUnitDistinguishedNames(OrganizationalUnitDistinguishedNamesT&& value) { SetOrganizationalUnitDistinguishedNames(std::forward<OrganizationalUnitDistinguishedNamesT>(value)); return *this;}
    template<typename OrganizationalUnitDistinguishedNamesT = Aws::String>
    DirectoryConfig& AddOrganizationalUnitDistinguishedNames(OrganizationalUnitDistinguishedNamesT&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.emplace_back(std::forward<OrganizationalUnitDistinguishedNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline const ServiceAccountCredentials& GetServiceAccountCredentials() const { return m_serviceAccountCredentials; }
    inline bool ServiceAccountCredentialsHasBeenSet() const { return m_serviceAccountCredentialsHasBeenSet; }
    template<typename ServiceAccountCredentialsT = ServiceAccountCredentials>
    void SetServiceAccountCredentials(ServiceAccountCredentialsT&& value) { m_serviceAccountCredentialsHasBeenSet = true; m_serviceAccountCredentials = std::forward<ServiceAccountCredentialsT>(value); }
    template<typename ServiceAccountCredentialsT = ServiceAccountCredentials>
    DirectoryConfig& WithServiceAccountCredentials(ServiceAccountCredentialsT&& value) { SetServiceAccountCredentials(std::forward<ServiceAccountCredentialsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const { return m_createdTime; }
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    void SetCreatedTime(CreatedTimeT&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::forward<CreatedTimeT>(value); }
    template<typename CreatedTimeT = Aws::Utils::DateTime>
    DirectoryConfig& WithCreatedTime(CreatedTimeT&& value) { SetCreatedTime(std::forward<CreatedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The certificate-based authentication properties used to authenticate SAML 2.0
     * Identity Provider (IdP) user identities to Active Directory domain-joined
     * streaming instances. Fallback is turned on by default when certificate-based
     * authentication is <b>Enabled</b> . Fallback allows users to log in using their
     * AD domain password if certificate-based authentication is unsuccessful, or to
     * unlock a desktop lock screen. <b>Enabled_no_directory_login_fallback</b> enables
     * certificate-based authentication, but does not allow users to log in using their
     * AD domain password. Users will be disconnected to re-authenticate using
     * certificates.</p>
     */
    inline const CertificateBasedAuthProperties& GetCertificateBasedAuthProperties() const { return m_certificateBasedAuthProperties; }
    inline bool CertificateBasedAuthPropertiesHasBeenSet() const { return m_certificateBasedAuthPropertiesHasBeenSet; }
    template<typename CertificateBasedAuthPropertiesT = CertificateBasedAuthProperties>
    void SetCertificateBasedAuthProperties(CertificateBasedAuthPropertiesT&& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = std::forward<CertificateBasedAuthPropertiesT>(value); }
    template<typename CertificateBasedAuthPropertiesT = CertificateBasedAuthProperties>
    DirectoryConfig& WithCertificateBasedAuthProperties(CertificateBasedAuthPropertiesT&& value) { SetCertificateBasedAuthProperties(std::forward<CertificateBasedAuthPropertiesT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitDistinguishedNames;
    bool m_organizationalUnitDistinguishedNamesHasBeenSet = false;

    ServiceAccountCredentials m_serviceAccountCredentials;
    bool m_serviceAccountCredentialsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime{};
    bool m_createdTimeHasBeenSet = false;

    CertificateBasedAuthProperties m_certificateBasedAuthProperties;
    bool m_certificateBasedAuthPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
