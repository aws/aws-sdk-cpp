/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/appfabric/AppFabricRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/Credential.h>
#include <aws/appfabric/model/Tenant.h>
#include <utility>

namespace Aws
{
namespace AppFabric
{
namespace Model
{

  /**
   */
  class UpdateAppAuthorizationRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API UpdateAppAuthorizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppAuthorization"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const{ return m_appBundleIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const Aws::String& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(Aws::String&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline void SetAppBundleIdentifier(const char* value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline UpdateAppAuthorizationRequest& WithAppBundleIdentifier(const Aws::String& value) { SetAppBundleIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline UpdateAppAuthorizationRequest& WithAppBundleIdentifier(Aws::String&& value) { SetAppBundleIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline UpdateAppAuthorizationRequest& WithAppBundleIdentifier(const char* value) { SetAppBundleIdentifier(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline const Aws::String& GetAppAuthorizationIdentifier() const{ return m_appAuthorizationIdentifier; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline bool AppAuthorizationIdentifierHasBeenSet() const { return m_appAuthorizationIdentifierHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline void SetAppAuthorizationIdentifier(const Aws::String& value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline void SetAppAuthorizationIdentifier(Aws::String&& value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline void SetAppAuthorizationIdentifier(const char* value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline UpdateAppAuthorizationRequest& WithAppAuthorizationIdentifier(const Aws::String& value) { SetAppAuthorizationIdentifier(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline UpdateAppAuthorizationRequest& WithAppAuthorizationIdentifier(Aws::String&& value) { SetAppAuthorizationIdentifier(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline UpdateAppAuthorizationRequest& WithAppAuthorizationIdentifier(const char* value) { SetAppAuthorizationIdentifier(value); return *this;}


    /**
     * <p>Contains credentials for the application, such as an API key or OAuth2 client
     * ID and secret.</p> <p>Specify credentials that match the authorization type of
     * the app authorization to update. For example, if the authorization type of the
     * app authorization is OAuth2 (<code>oauth2</code>), then you should provide only
     * the OAuth2 credentials.</p>
     */
    inline const Credential& GetCredential() const{ return m_credential; }

    /**
     * <p>Contains credentials for the application, such as an API key or OAuth2 client
     * ID and secret.</p> <p>Specify credentials that match the authorization type of
     * the app authorization to update. For example, if the authorization type of the
     * app authorization is OAuth2 (<code>oauth2</code>), then you should provide only
     * the OAuth2 credentials.</p>
     */
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }

    /**
     * <p>Contains credentials for the application, such as an API key or OAuth2 client
     * ID and secret.</p> <p>Specify credentials that match the authorization type of
     * the app authorization to update. For example, if the authorization type of the
     * app authorization is OAuth2 (<code>oauth2</code>), then you should provide only
     * the OAuth2 credentials.</p>
     */
    inline void SetCredential(const Credential& value) { m_credentialHasBeenSet = true; m_credential = value; }

    /**
     * <p>Contains credentials for the application, such as an API key or OAuth2 client
     * ID and secret.</p> <p>Specify credentials that match the authorization type of
     * the app authorization to update. For example, if the authorization type of the
     * app authorization is OAuth2 (<code>oauth2</code>), then you should provide only
     * the OAuth2 credentials.</p>
     */
    inline void SetCredential(Credential&& value) { m_credentialHasBeenSet = true; m_credential = std::move(value); }

    /**
     * <p>Contains credentials for the application, such as an API key or OAuth2 client
     * ID and secret.</p> <p>Specify credentials that match the authorization type of
     * the app authorization to update. For example, if the authorization type of the
     * app authorization is OAuth2 (<code>oauth2</code>), then you should provide only
     * the OAuth2 credentials.</p>
     */
    inline UpdateAppAuthorizationRequest& WithCredential(const Credential& value) { SetCredential(value); return *this;}

    /**
     * <p>Contains credentials for the application, such as an API key or OAuth2 client
     * ID and secret.</p> <p>Specify credentials that match the authorization type of
     * the app authorization to update. For example, if the authorization type of the
     * app authorization is OAuth2 (<code>oauth2</code>), then you should provide only
     * the OAuth2 credentials.</p>
     */
    inline UpdateAppAuthorizationRequest& WithCredential(Credential&& value) { SetCredential(std::move(value)); return *this;}


    /**
     * <p>Contains information about an application tenant, such as the application
     * display name and identifier.</p>
     */
    inline const Tenant& GetTenant() const{ return m_tenant; }

    /**
     * <p>Contains information about an application tenant, such as the application
     * display name and identifier.</p>
     */
    inline bool TenantHasBeenSet() const { return m_tenantHasBeenSet; }

    /**
     * <p>Contains information about an application tenant, such as the application
     * display name and identifier.</p>
     */
    inline void SetTenant(const Tenant& value) { m_tenantHasBeenSet = true; m_tenant = value; }

    /**
     * <p>Contains information about an application tenant, such as the application
     * display name and identifier.</p>
     */
    inline void SetTenant(Tenant&& value) { m_tenantHasBeenSet = true; m_tenant = std::move(value); }

    /**
     * <p>Contains information about an application tenant, such as the application
     * display name and identifier.</p>
     */
    inline UpdateAppAuthorizationRequest& WithTenant(const Tenant& value) { SetTenant(value); return *this;}

    /**
     * <p>Contains information about an application tenant, such as the application
     * display name and identifier.</p>
     */
    inline UpdateAppAuthorizationRequest& WithTenant(Tenant&& value) { SetTenant(std::move(value)); return *this;}

  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::String m_appAuthorizationIdentifier;
    bool m_appAuthorizationIdentifierHasBeenSet = false;

    Credential m_credential;
    bool m_credentialHasBeenSet = false;

    Tenant m_tenant;
    bool m_tenantHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
