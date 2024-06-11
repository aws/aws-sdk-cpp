/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appfabric/AppFabric_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appfabric/model/Tenant.h>
#include <aws/appfabric/model/AppAuthorizationStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>Contains a summary of an app authorization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appfabric-2023-05-19/AppAuthorizationSummary">AWS
   * API Reference</a></p>
   */
  class AppAuthorizationSummary
  {
  public:
    AWS_APPFABRIC_API AppAuthorizationSummary();
    AWS_APPFABRIC_API AppAuthorizationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API AppAuthorizationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPFABRIC_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the app authorization.</p>
     */
    inline const Aws::String& GetAppAuthorizationArn() const{ return m_appAuthorizationArn; }
    inline bool AppAuthorizationArnHasBeenSet() const { return m_appAuthorizationArnHasBeenSet; }
    inline void SetAppAuthorizationArn(const Aws::String& value) { m_appAuthorizationArnHasBeenSet = true; m_appAuthorizationArn = value; }
    inline void SetAppAuthorizationArn(Aws::String&& value) { m_appAuthorizationArnHasBeenSet = true; m_appAuthorizationArn = std::move(value); }
    inline void SetAppAuthorizationArn(const char* value) { m_appAuthorizationArnHasBeenSet = true; m_appAuthorizationArn.assign(value); }
    inline AppAuthorizationSummary& WithAppAuthorizationArn(const Aws::String& value) { SetAppAuthorizationArn(value); return *this;}
    inline AppAuthorizationSummary& WithAppAuthorizationArn(Aws::String&& value) { SetAppAuthorizationArn(std::move(value)); return *this;}
    inline AppAuthorizationSummary& WithAppAuthorizationArn(const char* value) { SetAppAuthorizationArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the app bundle for the app
     * authorization.</p>
     */
    inline const Aws::String& GetAppBundleArn() const{ return m_appBundleArn; }
    inline bool AppBundleArnHasBeenSet() const { return m_appBundleArnHasBeenSet; }
    inline void SetAppBundleArn(const Aws::String& value) { m_appBundleArnHasBeenSet = true; m_appBundleArn = value; }
    inline void SetAppBundleArn(Aws::String&& value) { m_appBundleArnHasBeenSet = true; m_appBundleArn = std::move(value); }
    inline void SetAppBundleArn(const char* value) { m_appBundleArnHasBeenSet = true; m_appBundleArn.assign(value); }
    inline AppAuthorizationSummary& WithAppBundleArn(const Aws::String& value) { SetAppBundleArn(value); return *this;}
    inline AppAuthorizationSummary& WithAppBundleArn(Aws::String&& value) { SetAppBundleArn(std::move(value)); return *this;}
    inline AppAuthorizationSummary& WithAppBundleArn(const char* value) { SetAppBundleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the application.</p>
     */
    inline const Aws::String& GetApp() const{ return m_app; }
    inline bool AppHasBeenSet() const { return m_appHasBeenSet; }
    inline void SetApp(const Aws::String& value) { m_appHasBeenSet = true; m_app = value; }
    inline void SetApp(Aws::String&& value) { m_appHasBeenSet = true; m_app = std::move(value); }
    inline void SetApp(const char* value) { m_appHasBeenSet = true; m_app.assign(value); }
    inline AppAuthorizationSummary& WithApp(const Aws::String& value) { SetApp(value); return *this;}
    inline AppAuthorizationSummary& WithApp(Aws::String&& value) { SetApp(std::move(value)); return *this;}
    inline AppAuthorizationSummary& WithApp(const char* value) { SetApp(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about an application tenant, such as the application
     * display name and identifier.</p>
     */
    inline const Tenant& GetTenant() const{ return m_tenant; }
    inline bool TenantHasBeenSet() const { return m_tenantHasBeenSet; }
    inline void SetTenant(const Tenant& value) { m_tenantHasBeenSet = true; m_tenant = value; }
    inline void SetTenant(Tenant&& value) { m_tenantHasBeenSet = true; m_tenant = std::move(value); }
    inline AppAuthorizationSummary& WithTenant(const Tenant& value) { SetTenant(value); return *this;}
    inline AppAuthorizationSummary& WithTenant(Tenant&& value) { SetTenant(std::move(value)); return *this;}
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
    inline const AppAuthorizationStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AppAuthorizationStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AppAuthorizationStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline AppAuthorizationSummary& WithStatus(const AppAuthorizationStatus& value) { SetStatus(value); return *this;}
    inline AppAuthorizationSummary& WithStatus(AppAuthorizationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp for when the app authorization was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline AppAuthorizationSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline AppAuthorizationSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
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

    AppAuthorizationStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace AppFabric
} // namespace Aws
