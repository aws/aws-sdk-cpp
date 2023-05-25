/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kinesisanalyticsv2/model/ApplicationMaintenanceConfigurationUpdate.h>
#include <utility>

namespace Aws
{
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   */
  class UpdateApplicationMaintenanceConfigurationRequest : public KinesisAnalyticsV2Request
  {
  public:
    AWS_KINESISANALYTICSV2_API UpdateApplicationMaintenanceConfigurationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplicationMaintenanceConfiguration"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the application for which you want to update the maintenance
     * configuration.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The name of the application for which you want to update the maintenance
     * configuration.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The name of the application for which you want to update the maintenance
     * configuration.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The name of the application for which you want to update the maintenance
     * configuration.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The name of the application for which you want to update the maintenance
     * configuration.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The name of the application for which you want to update the maintenance
     * configuration.</p>
     */
    inline UpdateApplicationMaintenanceConfigurationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The name of the application for which you want to update the maintenance
     * configuration.</p>
     */
    inline UpdateApplicationMaintenanceConfigurationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The name of the application for which you want to update the maintenance
     * configuration.</p>
     */
    inline UpdateApplicationMaintenanceConfigurationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>Describes the application maintenance configuration update.</p>
     */
    inline const ApplicationMaintenanceConfigurationUpdate& GetApplicationMaintenanceConfigurationUpdate() const{ return m_applicationMaintenanceConfigurationUpdate; }

    /**
     * <p>Describes the application maintenance configuration update.</p>
     */
    inline bool ApplicationMaintenanceConfigurationUpdateHasBeenSet() const { return m_applicationMaintenanceConfigurationUpdateHasBeenSet; }

    /**
     * <p>Describes the application maintenance configuration update.</p>
     */
    inline void SetApplicationMaintenanceConfigurationUpdate(const ApplicationMaintenanceConfigurationUpdate& value) { m_applicationMaintenanceConfigurationUpdateHasBeenSet = true; m_applicationMaintenanceConfigurationUpdate = value; }

    /**
     * <p>Describes the application maintenance configuration update.</p>
     */
    inline void SetApplicationMaintenanceConfigurationUpdate(ApplicationMaintenanceConfigurationUpdate&& value) { m_applicationMaintenanceConfigurationUpdateHasBeenSet = true; m_applicationMaintenanceConfigurationUpdate = std::move(value); }

    /**
     * <p>Describes the application maintenance configuration update.</p>
     */
    inline UpdateApplicationMaintenanceConfigurationRequest& WithApplicationMaintenanceConfigurationUpdate(const ApplicationMaintenanceConfigurationUpdate& value) { SetApplicationMaintenanceConfigurationUpdate(value); return *this;}

    /**
     * <p>Describes the application maintenance configuration update.</p>
     */
    inline UpdateApplicationMaintenanceConfigurationRequest& WithApplicationMaintenanceConfigurationUpdate(ApplicationMaintenanceConfigurationUpdate&& value) { SetApplicationMaintenanceConfigurationUpdate(std::move(value)); return *this;}

  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    ApplicationMaintenanceConfigurationUpdate m_applicationMaintenanceConfigurationUpdate;
    bool m_applicationMaintenanceConfigurationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
