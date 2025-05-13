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
#include <aws/appfabric/model/AuthType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/appfabric/model/Tag.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace AppFabric
{
namespace Model
{

  /**
   */
  class CreateAppAuthorizationRequest : public AppFabricRequest
  {
  public:
    AWS_APPFABRIC_API CreateAppAuthorizationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAppAuthorization"; }

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
    CreateAppAuthorizationRequest& WithAppBundleIdentifier(AppBundleIdentifierT&& value) { SetAppBundleIdentifier(std::forward<AppBundleIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p> <p>Valid values are:</p> <ul> <li> <p>
     * <code>SLACK</code> </p> </li> <li> <p> <code>ASANA</code> </p> </li> <li> <p>
     * <code>JIRA</code> </p> </li> <li> <p> <code>M365</code> </p> </li> <li> <p>
     * <code>M365AUDITLOGS</code> </p> </li> <li> <p> <code>ZOOM</code> </p> </li> <li>
     * <p> <code>ZENDESK</code> </p> </li> <li> <p> <code>OKTA</code> </p> </li> <li>
     * <p> <code>GOOGLE</code> </p> </li> <li> <p> <code>DROPBOX</code> </p> </li> <li>
     * <p> <code>SMARTSHEET</code> </p> </li> <li> <p> <code>CISCO</code> </p> </li>
     * </ul>
     */
    inline const Aws::String& GetApp() const { return m_app; }
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }
    template<typename AppT = Aws::String>
    void SetApp(AppT&& value) { m_appHasBeenSet = true; m_app = std::forward<AppT>(value); }
    template<typename AppT = Aws::String>
    CreateAppAuthorizationRequest& WithApp(AppT&& value) { SetApp(std::forward<AppT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains credentials for the application, such as an API key or OAuth2 client
     * ID and secret.</p> <p>Specify credentials that match the authorization type for
     * your request. For example, if the authorization type for your request is OAuth2
     * (<code>oauth2</code>), then you should provide only the OAuth2 credentials.</p>
     */
    inline const Credential& GetCredential() const { return m_credential; }
    inline bool CredentialHasBeenSet() const { return m_credentialHasBeenSet; }
    template<typename CredentialT = Credential>
    void SetCredential(CredentialT&& value) { m_credentialHasBeenSet = true; m_credential = std::forward<CredentialT>(value); }
    template<typename CredentialT = Credential>
    CreateAppAuthorizationRequest& WithCredential(CredentialT&& value) { SetCredential(std::forward<CredentialT>(value)); return *this;}
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
    CreateAppAuthorizationRequest& WithTenant(TenantT&& value) { SetTenant(std::forward<TenantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization type for the app authorization.</p>
     */
    inline AuthType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(AuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline CreateAppAuthorizationRequest& WithAuthType(AuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. This lets you safely retry the request without
     * accidentally performing the same operation a second time. Passing the same value
     * to a later call to an operation requires that you also pass the same value for
     * all other parameters. We recommend that you use a <a
     * href="https://wikipedia.org/wiki/Universally_unique_identifier">UUID type of
     * value</a>.</p> <p>If you don't provide this value, then Amazon Web Services
     * generates a random one for you.</p> <p>If you retry the operation with the same
     * <code>ClientToken</code>, but with different parameters, the retry fails with an
     * <code>IdempotentParameterMismatch</code> error.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateAppAuthorizationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of the key-value pairs of the tag or tags to assign to the
     * resource.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateAppAuthorizationRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateAppAuthorizationRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_appBundleIdentifier;
    bool m_appBundleIdentifierHasBeenSet = false;

    Aws::String m_app;
    bool m_appHasBeenSet = false;

    Credential m_credential;
    bool m_credentialHasBeenSet = false;

    Tenant m_tenant;
    bool m_tenantHasBeenSet = false;

    AuthType m_authType{AuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
