/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalyticsv2/KinesisAnalyticsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace KinesisAnalyticsV2
{
namespace Model
{

  /**
   * <p>Describes the updated maintenance configuration for the
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationMaintenanceConfigurationUpdate">AWS
   * API Reference</a></p>
   */
  class ApplicationMaintenanceConfigurationUpdate
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationMaintenanceConfigurationUpdate() = default;
    AWS_KINESISANALYTICSV2_API ApplicationMaintenanceConfigurationUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationMaintenanceConfigurationUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The updated start time for the maintenance window.</p>
     */
    inline const Aws::String& GetApplicationMaintenanceWindowStartTimeUpdate() const { return m_applicationMaintenanceWindowStartTimeUpdate; }
    inline bool ApplicationMaintenanceWindowStartTimeUpdateHasBeenSet() const { return m_applicationMaintenanceWindowStartTimeUpdateHasBeenSet; }
    template<typename ApplicationMaintenanceWindowStartTimeUpdateT = Aws::String>
    void SetApplicationMaintenanceWindowStartTimeUpdate(ApplicationMaintenanceWindowStartTimeUpdateT&& value) { m_applicationMaintenanceWindowStartTimeUpdateHasBeenSet = true; m_applicationMaintenanceWindowStartTimeUpdate = std::forward<ApplicationMaintenanceWindowStartTimeUpdateT>(value); }
    template<typename ApplicationMaintenanceWindowStartTimeUpdateT = Aws::String>
    ApplicationMaintenanceConfigurationUpdate& WithApplicationMaintenanceWindowStartTimeUpdate(ApplicationMaintenanceWindowStartTimeUpdateT&& value) { SetApplicationMaintenanceWindowStartTimeUpdate(std::forward<ApplicationMaintenanceWindowStartTimeUpdateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationMaintenanceWindowStartTimeUpdate;
    bool m_applicationMaintenanceWindowStartTimeUpdateHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
