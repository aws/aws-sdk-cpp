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
    AWS_APPFABRIC_API UpdateAppAuthorizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAppAuthorization"; }

    AWS_APPFABRIC_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app bundle to use for the request.</p>
     */
    inline const Aws::String& GetAppBundleIdentifier() const { return m_appBundleIdentifier; }
    inline bool AppBundleIdentifierHasBeenSet() const { return m_appBundleIdentifierHasBeenSet; }
    template<typename AppBundleIdentifierT = Aws::String>
    void SetAppBundleIdentifier(AppBundleIdentifierT&& value) { m_appBundleIdentifierHasBeenSet = true; m_appBundleIdentifier = std::forward<AppBundleIdentifierT>(value); }
    template<typename AppBundleIdentifierT = Aws::String>
    UpdateAppAuthorizationRequest& WithAppBundleIdentifier(AppBundleIdentifierT&& value) { SetAppBundleIdentifier(std::forward<AppBundleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or Universal Unique Identifier (UUID) of the
     * app authorization to use for the request.</p>
     */
    inline const Aws::String& GetAppAuthorizationIdentifier() const { return m_appAuthorizationIdentifier; }
    inline bool AppAuthorizationIdentifierHasBeenSet() const { return m_appAuthorizationIdentifierHasBeenSet; }
    template<typename AppAuthorizationIdentifierT = Aws::String>
    void SetAppAuthorizationIdentifier(AppAuthorizationIdentifierT&& value) { m_appAuthorizationIdentifierHasBeenSet = true; m_appAuthorizationIdentifier = std::forward<AppAuthorizationIdentifierT>(value); }
    template<typename AppAuthorizationIdentifierT = Aws::String>
    UpdateAppAuthorizationRequest& WithAppAuthorizationIdentifier(AppAuthorizationIdentifierT&& value) { SetAppAuthorizationIdentifier(std::forward<AppAuthorizationIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains credentials for the application, such as an API key or OAuth2 client
     * ID and secret.</p> <p>Specify credentials that match the authorization type of
     * the app authorization to update. For example, if the authorization type of the
     * app authorization is OAuth2 (<code>oauth2</code>), then you should provide only
     * the OAuth2 credentials.</p>
     */
    inline const Credential& GetCredential() const { return m_credential; }
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }
    template<typename CredentialT = Credential>
    void SetCredential(CredentialT&& value) { m_credentialHasBeenSet = true; m_credential = std::forward<CredentialT>(value); }
    template<typename CredentialT = Credential>
    UpdateAppAuthorizationRequest& WithCredential(CredentialT&& value) { SetCredential(std::forward<CredentialT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about an application tenant, such as the application
     * display name and identifier.</p>
     */
    inline const Tenant& GetTenant() const { return m_tenant; }
    inline bool TenantHasBeenSet() const { return m_tenantHasBeenSet; }
    template<typename TenantT = Tenant>
    void SetTenant(TenantT&& value) { m_tenantHasBeenSet = true; m_tenant = std::forward<TenantT>(value); }
    template<typename TenantT = Tenant>
    UpdateAppAuthorizationRequest& WithTenant(TenantT&& value) { SetTenant(std::forward<TenantT>(value)); return *this;}
    ///@}
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
