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
    AWS_APPSTREAM_API DirectoryConfig();
    AWS_APPSTREAM_API DirectoryConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API DirectoryConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline const Aws::String& GetDirectoryName() const{ return m_directoryName; }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline void SetDirectoryName(const Aws::String& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline void SetDirectoryName(Aws::String&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::move(value); }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline void SetDirectoryName(const char* value) { m_directoryNameHasBeenSet = true; m_directoryName.assign(value); }

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline DirectoryConfig& WithDirectoryName(const Aws::String& value) { SetDirectoryName(value); return *this;}

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline DirectoryConfig& WithDirectoryName(Aws::String&& value) { SetDirectoryName(std::move(value)); return *this;}

    /**
     * <p>The fully qualified name of the directory (for example,
     * corp.example.com).</p>
     */
    inline DirectoryConfig& WithDirectoryName(const char* value) { SetDirectoryName(value); return *this;}


    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitDistinguishedNames() const{ return m_organizationalUnitDistinguishedNames; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline bool OrganizationalUnitDistinguishedNamesHasBeenSet() const { return m_organizationalUnitDistinguishedNamesHasBeenSet; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline void SetOrganizationalUnitDistinguishedNames(const Aws::Vector<Aws::String>& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames = value; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline void SetOrganizationalUnitDistinguishedNames(Aws::Vector<Aws::String>&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames = std::move(value); }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline DirectoryConfig& WithOrganizationalUnitDistinguishedNames(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitDistinguishedNames(value); return *this;}

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline DirectoryConfig& WithOrganizationalUnitDistinguishedNames(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitDistinguishedNames(std::move(value)); return *this;}

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline DirectoryConfig& AddOrganizationalUnitDistinguishedNames(const Aws::String& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(value); return *this; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline DirectoryConfig& AddOrganizationalUnitDistinguishedNames(Aws::String&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline DirectoryConfig& AddOrganizationalUnitDistinguishedNames(const char* value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(value); return *this; }


    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline const ServiceAccountCredentials& GetServiceAccountCredentials() const{ return m_serviceAccountCredentials; }

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline bool ServiceAccountCredentialsHasBeenSet() const { return m_serviceAccountCredentialsHasBeenSet; }

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline void SetServiceAccountCredentials(const ServiceAccountCredentials& value) { m_serviceAccountCredentialsHasBeenSet = true; m_serviceAccountCredentials = value; }

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline void SetServiceAccountCredentials(ServiceAccountCredentials&& value) { m_serviceAccountCredentialsHasBeenSet = true; m_serviceAccountCredentials = std::move(value); }

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline DirectoryConfig& WithServiceAccountCredentials(const ServiceAccountCredentials& value) { SetServiceAccountCredentials(value); return *this;}

    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline DirectoryConfig& WithServiceAccountCredentials(ServiceAccountCredentials&& value) { SetServiceAccountCredentials(std::move(value)); return *this;}


    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline DirectoryConfig& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The time the directory configuration was created.</p>
     */
    inline DirectoryConfig& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


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
    inline const CertificateBasedAuthProperties& GetCertificateBasedAuthProperties() const{ return m_certificateBasedAuthProperties; }

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
    inline bool CertificateBasedAuthPropertiesHasBeenSet() const { return m_certificateBasedAuthPropertiesHasBeenSet; }

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
    inline void SetCertificateBasedAuthProperties(const CertificateBasedAuthProperties& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = value; }

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
    inline void SetCertificateBasedAuthProperties(CertificateBasedAuthProperties&& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = std::move(value); }

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
    inline DirectoryConfig& WithCertificateBasedAuthProperties(const CertificateBasedAuthProperties& value) { SetCertificateBasedAuthProperties(value); return *this;}

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
    inline DirectoryConfig& WithCertificateBasedAuthProperties(CertificateBasedAuthProperties&& value) { SetCertificateBasedAuthProperties(std::move(value)); return *this;}

  private:

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitDistinguishedNames;
    bool m_organizationalUnitDistinguishedNamesHasBeenSet = false;

    ServiceAccountCredentials m_serviceAccountCredentials;
    bool m_serviceAccountCredentialsHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    CertificateBasedAuthProperties m_certificateBasedAuthProperties;
    bool m_certificateBasedAuthPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
