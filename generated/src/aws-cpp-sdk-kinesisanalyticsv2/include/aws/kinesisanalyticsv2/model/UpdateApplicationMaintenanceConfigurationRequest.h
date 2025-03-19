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
    AWS_KINESISANALYTICSV2_API UpdateApplicationMaintenanceConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplicationMaintenanceConfiguration"; }

    AWS_KINESISANALYTICSV2_API Aws::String SerializePayload() const override;

    AWS_KINESISANALYTICSV2_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the application for which you want to update the maintenance
     * configuration.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    UpdateApplicationMaintenanceConfigurationRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the application maintenance configuration update.</p>
     */
    inline const ApplicationMaintenanceConfigurationUpdate& GetApplicationMaintenanceConfigurationUpdate() const { return m_applicationMaintenanceConfigurationUpdate; }
    inline bool ApplicationMaintenanceConfigurationUpdateHasBeenSet() const { return m_applicationMaintenanceConfigurationUpdateHasBeenSet; }
    template<typename ApplicationMaintenanceConfigurationUpdateT = ApplicationMaintenanceConfigurationUpdate>
    void SetApplicationMaintenanceConfigurationUpdate(ApplicationMaintenanceConfigurationUpdateT&& value) { m_applicationMaintenanceConfigurationUpdateHasBeenSet = true; m_applicationMaintenanceConfigurationUpdate = std::forward<ApplicationMaintenanceConfigurationUpdateT>(value); }
    template<typename ApplicationMaintenanceConfigurationUpdateT = ApplicationMaintenanceConfigurationUpdate>
    UpdateApplicationMaintenanceConfigurationRequest& WithApplicationMaintenanceConfigurationUpdate(ApplicationMaintenanceConfigurationUpdateT&& value) { SetApplicationMaintenanceConfigurationUpdate(std::forward<ApplicationMaintenanceConfigurationUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    ApplicationMaintenanceConfigurationUpdate m_applicationMaintenanceConfigurationUpdate;
    bool m_applicationMaintenanceConfigurationUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
