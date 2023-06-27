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
    AWS_APPFABRIC_API AppAuthorization();
    AWS_APPFABRIC_API AppAuthorization(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API AppAuthorization& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the app authorization.</p>
     */
    inline const Aws::String& GetAppAuthorizationArn() const{ return m_appAuthorizationArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app authorization.</p>
     */
    inline bool AppAuthorizationArnHasBeenSet() const { return m_appAuthorizationArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app authorization.</p>
     */
    inline void SetAppAuthorizationArn(const Aws::String& value) { m_appAuthorizationArnHasBeenSet = true; m_appAuthorizationArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app authorization.</p>
     */
    inline void SetAppAuthorizationArn(Aws::String&& value) { m_appAuthorizationArnHasBeenSet = true; m_appAuthorizationArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the app authorization.</p>
     */
    inline void SetAppAuthorizationArn(const char* value) { m_appAuthorizationArnHasBeenSet = true; m_appAuthorizationArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the app authorization.</p>
     */
    inline AppAuthorization& WithAppAuthorizationArn(const Aws::String& value) { SetAppAuthorizationArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app authorization.</p>
     */
    inline AppAuthorization& WithAppAuthorizationArn(Aws::String&& value) { SetAppAuthorizationArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app authorization.</p>
     */
    inline AppAuthorization& WithAppAuthorizationArn(const char* value) { SetAppAuthorizationArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the app
     * authorization.</p>
     */
    inline const Aws::String& GetAppBundleArn() const{ return m_appBundleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the app
     * authorization.</p>
     */
    inline bool AppBundleArnHasBeenSet() const { return m_appBundleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the app
     * authorization.</p>
     */
    inline void SetAppBundleArn(const Aws::String& value) { m_appBundleArnHasBeenSet = true; m_appBundleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the app
     * authorization.</p>
     */
    inline void SetAppBundleArn(Aws::String&& value) { m_appBundleArnHasBeenSet = true; m_appBundleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the app
     * authorization.</p>
     */
    inline void SetAppBundleArn(const char* value) { m_appBundleArnHasBeenSet = true; m_appBundleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the app
     * authorization.</p>
     */
    inline AppAuthorization& WithAppBundleArn(const Aws::String& value) { SetAppBundleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the app
     * authorization.</p>
     */
    inline AppAuthorization& WithAppBundleArn(Aws::String&& value) { SetAppBundleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the app
     * authorization.</p>
     */
    inline AppAuthorization& WithAppBundleArn(const char* value) { SetAppBundleArn(value); return *this;}


    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApp() const{ return m_app; }

    /**
     * <p>The name of the application.</p>
     */
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApp(const Aws::String& value) { m_appHasBeenSet = true; m_app = value; }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApp(Aws::String&& value) { m_appHasBeenSet = true; m_app = std::move(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline void SetApp(const char* value) { m_appHasBeenSet = true; m_app.assign(value); }

    /**
     * <p>The name of the application.</p>
     */
    inline AppAuthorization& WithApp(const Aws::String& value) { SetApp(value); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline AppAuthorization& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}

    /**
     * <p>The name of the application.</p>
     */
    inline AppAuthorization& WithApp(const char* value) { SetApp(value); return *this;}


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
    inline AppAuthorization& WithTenant(const Tenant& value) { SetTenant(value); return *this;}

    /**
     * <p>Contains information about an application tenant, such as the application
     * display name and identifier.</p>
     */
    inline AppAuthorization& WithTenant(Tenant&& value) { SetTenant(std::move(value)); return *this;}


    /**
     * <p>The authorization type.</p>
     */
    inline const AuthType& GetAuthType() const{ return m_authType; }

    /**
     * <p>The authorization type.</p>
     */
    inline bool AuthTypeHasBeenSet() const { return m_authTypeHasBeenSet; }

    /**
     * <p>The authorization type.</p>
     */
    inline void SetAuthType(const AuthType& value) { m_authTypeHasBeenSet = true; m_authType = value; }

    /**
     * <p>The authorization type.</p>
     */
    inline void SetAuthType(AuthType&& value) { m_authTypeHasBeenSet = true; m_authType = std::move(value); }

    /**
     * <p>The authorization type.</p>
     */
    inline AppAuthorization& WithAuthType(const AuthType& value) { SetAuthType(value); return *this;}

    /**
     * <p>The authorization type.</p>
     */
    inline AppAuthorization& WithAuthType(AuthType&& value) { SetAuthType(std::move(value)); return *this;}


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
    inline const AppAuthorizationStatus& GetStatus() const{ return m_status; }

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
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

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
    inline void SetStatus(const AppAuthorizationStatus& value) { m_statusHasBeenSet = true; m_status = value; }

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
    inline void SetStatus(AppAuthorizationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

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
    inline AppAuthorization& WithStatus(const AppAuthorizationStatus& value) { SetStatus(value); return *this;}

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
    inline AppAuthorization& WithStatus(AppAuthorizationStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the app authorization was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The timestamp of when the app authorization was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The timestamp of when the app authorization was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The timestamp of when the app authorization was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The timestamp of when the app authorization was created.</p>
     */
    inline AppAuthorization& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the app authorization was created.</p>
     */
    inline AppAuthorization& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The timestamp of when the app authorization was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The timestamp of when the app authorization was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The timestamp of when the app authorization was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The timestamp of when the app authorization was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The timestamp of when the app authorization was last updated.</p>
     */
    inline AppAuthorization& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The timestamp of when the app authorization was last updated.</p>
     */
    inline AppAuthorization& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The user persona of the app authorization.</p> <p>This field should always be
     * <code>admin</code>.</p>
     */
    inline const Persona& GetPersona() const{ return m_persona; }

    /**
     * <p>The user persona of the app authorization.</p> <p>This field should always be
     * <code>admin</code>.</p>
     */
    inline bool PersonaHasBeenSet() const { return m_personaHasBeenSet; }

    /**
     * <p>The user persona of the app authorization.</p> <p>This field should always be
     * <code>admin</code>.</p>
     */
    inline void SetPersona(const Persona& value) { m_personaHasBeenSet = true; m_persona = value; }

    /**
     * <p>The user persona of the app authorization.</p> <p>This field should always be
     * <code>admin</code>.</p>
     */
    inline void SetPersona(Persona&& value) { m_personaHasBeenSet = true; m_persona = std::move(value); }

    /**
     * <p>The user persona of the app authorization.</p> <p>This field should always be
     * <code>admin</code>.</p>
     */
    inline AppAuthorization& WithPersona(const Persona& value) { SetPersona(value); return *this;}

    /**
     * <p>The user persona of the app authorization.</p> <p>This field should always be
     * <code>admin</code>.</p>
     */
    inline AppAuthorization& WithPersona(Persona&& value) { SetPersona(std::move(value)); return *this;}


    /**
     * <p>The application URL for the OAuth flow.</p>
     */
    inline const Aws::String& GetAuthUrl() const{ return m_authUrl; }

    /**
     * <p>The application URL for the OAuth flow.</p>
     */
    inline bool AuthUrlHasBeenSet() const { return m_authUrlHasBeenSet; }

    /**
     * <p>The application URL for the OAuth flow.</p>
     */
    inline void SetAuthUrl(const Aws::String& value) { m_authUrlHasBeenSet = true; m_authUrl = value; }

    /**
     * <p>The application URL for the OAuth flow.</p>
     */
    inline void SetAuthUrl(Aws::String&& value) { m_authUrlHasBeenSet = true; m_authUrl = std::move(value); }

    /**
     * <p>The application URL for the OAuth flow.</p>
     */
    inline void SetAuthUrl(const char* value) { m_authUrlHasBeenSet = true; m_authUrl.assign(value); }

    /**
     * <p>The application URL for the OAuth flow.</p>
     */
    inline AppAuthorization& WithAuthUrl(const Aws::String& value) { SetAuthUrl(value); return *this;}

    /**
     * <p>The application URL for the OAuth flow.</p>
     */
    inline AppAuthorization& WithAuthUrl(Aws::String&& value) { SetAuthUrl(std::move(value)); return *this;}

    /**
     * <p>The application URL for the OAuth flow.</p>
     */
    inline AppAuthorization& WithAuthUrl(const char* value) { SetAuthUrl(value); return *this;}

  private:

    Aws::String m_appAuthorizationArn;
    bool m_appAuthorizationArnHasBeenSet = false;

    Aws::String m_appBundleArn;
    bool m_appBundleArnHasBeenSet = false;

    Aws::String m_app;
    bool m_appHasBeenSet = false;

    Tenant m_tenant;
    bool m_tenantHasBeenSet = false;

    AuthType m_authType;
    bool m_authTypeHasBeenSet = false;

    AppAuthorizationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Persona m_persona;
    bool m_personaHasBeenSet = false;

    Aws::String m_authUrl;
    bool m_authUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
