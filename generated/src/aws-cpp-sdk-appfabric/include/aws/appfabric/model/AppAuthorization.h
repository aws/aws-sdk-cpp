/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/Tenant.h>
#include <aws/appfabric/model/AuthType.h>
#include <aws/appfabric/model/AppAuthorizationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/appfabric/model/Persona.h>
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
namespace AppFabric
{
namespace Model
{

  /**
   * <p>Contains information about an app authorization.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/AppAuthorization">AWS
   * API Reference</a></p>
   */
  class AppAuthorization
  {
  public:
    AWS_APPFABRIC_API AppAuthorization() = default;
    AWS_APPFABRIC_API AppAuthorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API AppAuthorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the app authorization.</p>
     */
    inline const Aws::String& GetAppAuthorizationArn() const { return m_appAuthorizationArn; }
    inline bool AppAuthorizationArnHasBeenSet() const { return m_appAuthorizationArnHasBeenSet; }
    template<typename AppAuthorizationArnT = Aws::String>
    void SetAppAuthorizationArn(AppAuthorizationArnT&& value) { m_appAuthorizationArnHasBeenSet = true; m_appAuthorizationArn = std::forward<AppAuthorizationArnT>(value); }
    template<typename AppAuthorizationArnT = Aws::String>
    AppAuthorization& WithAppAuthorizationArn(AppAuthorizationArnT&& value) { SetAppAuthorizationArn(std::forward<AppAuthorizationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the app
     * authorization.</p>
     */
    inline const Aws::String& GetAppBundleArn() const { return m_appBundleArn; }
    inline bool AppBundleArnHasBeenSet() const { return m_appBundleArnHasBeenSet; }
    template<typename AppBundleArnT = Aws::String>
    void SetAppBundleArn(AppBundleArnT&& value) { m_appBundleArnHasBeenSet = true; m_appBundleArn = std::forward<AppBundleArnT>(value); }
    template<typename AppBundleArnT = Aws::String>
    AppAuthorization& WithAppBundleArn(AppBundleArnT&& value) { SetAppBundleArn(std::forward<AppBundleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApp() const { return m_app; }
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }
    template<typename AppT = Aws::String>
    void SetApp(AppT&& value) { m_appHasBeenSet = true; m_app = std::forward<AppT>(value); }
    template<typename AppT = Aws::String>
    AppAuthorization& WithApp(AppT&& value) { SetApp(std::forward<AppT>(value)); return *this;}
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
    AppAuthorization& WithTenant(TenantT&& value) { SetTenant(std::forward<TenantT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization type.</p>
     */
    inline AuthType GetAuthType() const { return m_authType; }
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }
    inline void SetAuthType(AuthType value) { m_authTypeHasBeenSet = true; m_authType = value; }
    inline AppAuthorization& WithAuthType(AuthType value) { SetAuthType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the app authorization.</p> <p>The following states are
     * possible:</p> <ul> <li> <p> <code>PendingConnect</code>: The initial state of
     * the app authorization. The app authorization is created but not yet
     * connected.</p> </li> <li> <p> <code>Connected</code>: The app authorization is
     * connected to the application, and is ready to be used.</p> </li> <li> <p>
     * <code>ConnectionValidationFailed</code>: The app authorization received a
     * validation exception when trying to connect to the application. If the app
     * authorization is in this state, you should verify the configured credentials and
     * try to connect the app authorization again.</p> </li> <li> <p>
     * <code>TokenAutoRotationFailed</code>: AppFabric failed to refresh the access
     * token. If the app authorization is in this state, you should try to reconnect
     * the app authorization.</p> </li> </ul>
     */
    inline AppAuthorizationStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AppAuthorizationStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline AppAuthorization& WithStatus(AppAuthorizationStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the app authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    AppAuthorization& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of when the app authorization was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    AppAuthorization& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user persona of the app authorization.</p> <p>This field should always be
     * <code>admin</code>.</p>
     */
    inline Persona GetPersona() const { return m_persona; }
    inline bool PersonaHasBeenSet() const { return m_personaHasBeenSet; }
    inline void SetPersona(Persona value) { m_personaHasBeenSet = true; m_persona = value; }
    inline AppAuthorization& WithPersona(Persona value) { SetPersona(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The application URL for the OAuth flow.</p>
     */
    inline const Aws::String& GetAuthUrl() const { return m_authUrl; }
    inline bool AuthUrlHasBeenSet() const { return m_authUrlHasBeenSet; }
    template<typename AuthUrlT = Aws::String>
    void SetAuthUrl(AuthUrlT&& value) { m_authUrlHasBeenSet = true; m_authUrl = std::forward<AuthUrlT>(value); }
    template<typename AuthUrlT = Aws::String>
    AppAuthorization& WithAuthUrl(AuthUrlT&& value) { SetAuthUrl(std::forward<AuthUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_appAuthorizationArn;
    bool m_appAuthorizationArnHasBeenSet = false;

    Aws::String m_appBundleArn;
    bool m_appBundleArnHasBeenSet = false;

    Aws::String m_app;
    bool m_appHasBeenSet = false;

    Tenant m_tenant;
    bool m_tenantHasBeenSet = false;

    AuthType m_authType{AuthType::NOT_SET};
    bool m_authTypeHasBeenSet = false;

    AppAuthorizationStatus m_status{AppAuthorizationStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Persona m_persona{Persona::NOT_SET};
    bool m_personaHasBeenSet = false;

    Aws::String m_authUrl;
    bool m_authUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
