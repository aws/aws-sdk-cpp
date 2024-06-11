﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appstream/model/ServiceAccountCredentials.h>
#include <aws/appstream/model/CertificateBasedAuthProperties.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class UpdateDirectoryConfigRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API UpdateDirectoryConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDirectoryConfig"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the Directory Config object.</p>
     */
    inline const Aws::String& GetDirectoryName() const{ return m_directoryName; }
    inline bool DirectoryNameHasBeenSet() const { return m_directoryNameHasBeenSet; }
    inline void SetDirectoryName(const Aws::String& value) { m_directoryNameHasBeenSet = true; m_directoryName = value; }
    inline void SetDirectoryName(Aws::String&& value) { m_directoryNameHasBeenSet = true; m_directoryName = std::move(value); }
    inline void SetDirectoryName(const char* value) { m_directoryNameHasBeenSet = true; m_directoryName.assign(value); }
    inline UpdateDirectoryConfigRequest& WithDirectoryName(const Aws::String& value) { SetDirectoryName(value); return *this;}
    inline UpdateDirectoryConfigRequest& WithDirectoryName(Aws::String&& value) { SetDirectoryName(std::move(value)); return *this;}
    inline UpdateDirectoryConfigRequest& WithDirectoryName(const char* value) { SetDirectoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The distinguished names of the organizational units for computer
     * accounts.</p>
     */
    inline const Aws::Vector<Aws::String>& GetOrganizationalUnitDistinguishedNames() const{ return m_organizationalUnitDistinguishedNames; }
    inline bool OrganizationalUnitDistinguishedNamesHasBeenSet() const { return m_organizationalUnitDistinguishedNamesHasBeenSet; }
    inline void SetOrganizationalUnitDistinguishedNames(const Aws::Vector<Aws::String>& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames = value; }
    inline void SetOrganizationalUnitDistinguishedNames(Aws::Vector<Aws::String>&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames = std::move(value); }
    inline UpdateDirectoryConfigRequest& WithOrganizationalUnitDistinguishedNames(const Aws::Vector<Aws::String>& value) { SetOrganizationalUnitDistinguishedNames(value); return *this;}
    inline UpdateDirectoryConfigRequest& WithOrganizationalUnitDistinguishedNames(Aws::Vector<Aws::String>&& value) { SetOrganizationalUnitDistinguishedNames(std::move(value)); return *this;}
    inline UpdateDirectoryConfigRequest& AddOrganizationalUnitDistinguishedNames(const Aws::String& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(value); return *this; }
    inline UpdateDirectoryConfigRequest& AddOrganizationalUnitDistinguishedNames(Aws::String&& value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(std::move(value)); return *this; }
    inline UpdateDirectoryConfigRequest& AddOrganizationalUnitDistinguishedNames(const char* value) { m_organizationalUnitDistinguishedNamesHasBeenSet = true; m_organizationalUnitDistinguishedNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The credentials for the service account used by the fleet or image builder to
     * connect to the directory.</p>
     */
    inline const ServiceAccountCredentials& GetServiceAccountCredentials() const{ return m_serviceAccountCredentials; }
    inline bool ServiceAccountCredentialsHasBeenSet() const { return m_serviceAccountCredentialsHasBeenSet; }
    inline void SetServiceAccountCredentials(const ServiceAccountCredentials& value) { m_serviceAccountCredentialsHasBeenSet = true; m_serviceAccountCredentials = value; }
    inline void SetServiceAccountCredentials(ServiceAccountCredentials&& value) { m_serviceAccountCredentialsHasBeenSet = true; m_serviceAccountCredentials = std::move(value); }
    inline UpdateDirectoryConfigRequest& WithServiceAccountCredentials(const ServiceAccountCredentials& value) { SetServiceAccountCredentials(value); return *this;}
    inline UpdateDirectoryConfigRequest& WithServiceAccountCredentials(ServiceAccountCredentials&& value) { SetServiceAccountCredentials(std::move(value)); return *this;}
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
    inline const CertificateBasedAuthProperties& GetCertificateBasedAuthProperties() const{ return m_certificateBasedAuthProperties; }
    inline bool CertificateBasedAuthPropertiesHasBeenSet() const { return m_certificateBasedAuthPropertiesHasBeenSet; }
    inline void SetCertificateBasedAuthProperties(const CertificateBasedAuthProperties& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = value; }
    inline void SetCertificateBasedAuthProperties(CertificateBasedAuthProperties&& value) { m_certificateBasedAuthPropertiesHasBeenSet = true; m_certificateBasedAuthProperties = std::move(value); }
    inline UpdateDirectoryConfigRequest& WithCertificateBasedAuthProperties(const CertificateBasedAuthProperties& value) { SetCertificateBasedAuthProperties(value); return *this;}
    inline UpdateDirectoryConfigRequest& WithCertificateBasedAuthProperties(CertificateBasedAuthProperties&& value) { SetCertificateBasedAuthProperties(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryName;
    bool m_directoryNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_organizationalUnitDistinguishedNames;
    bool m_organizationalUnitDistinguishedNamesHasBeenSet = false;

    ServiceAccountCredentials m_serviceAccountCredentials;
    bool m_serviceAccountCredentialsHasBeenSet = false;

    CertificateBasedAuthProperties m_certificateBasedAuthProperties;
    bool m_certificateBasedAuthPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
