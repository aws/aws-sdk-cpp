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
   * <p>The details of the maintenance configuration for the
   * application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalyticsv2-2018-05-23/ApplicationMaintenanceConfigurationDescription">AWS
   * API Reference</a></p>
   */
  class ApplicationMaintenanceConfigurationDescription
  {
  public:
    AWS_KINESISANALYTICSV2_API ApplicationMaintenanceConfigurationDescription() = default;
    AWS_KINESISANALYTICSV2_API ApplicationMaintenanceConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationMaintenanceConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time for the maintenance window.</p>
     */
    inline const Aws::String& GetApplicationMaintenanceWindowStartTime() const { return m_applicationMaintenanceWindowStartTime; }
    inline bool ApplicationMaintenanceWindowStartTimeHasBeenSet() const { return m_applicationMaintenanceWindowStartTimeHasBeenSet; }
    template<typename ApplicationMaintenanceWindowStartTimeT = Aws::String>
    void SetApplicationMaintenanceWindowStartTime(ApplicationMaintenanceWindowStartTimeT&& value) { m_applicationMaintenanceWindowStartTimeHasBeenSet = true; m_applicationMaintenanceWindowStartTime = std::forward<ApplicationMaintenanceWindowStartTimeT>(value); }
    template<typename ApplicationMaintenanceWindowStartTimeT = Aws::String>
    ApplicationMaintenanceConfigurationDescription& WithApplicationMaintenanceWindowStartTime(ApplicationMaintenanceWindowStartTimeT&& value) { SetApplicationMaintenanceWindowStartTime(std::forward<ApplicationMaintenanceWindowStartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time for the maintenance window.</p>
     */
    inline const Aws::String& GetApplicationMaintenanceWindowEndTime() const { return m_applicationMaintenanceWindowEndTime; }
    inline bool ApplicationMaintenanceWindowEndTimeHasBeenSet() const { return m_applicationMaintenanceWindowEndTimeHasBeenSet; }
    template<typename ApplicationMaintenanceWindowEndTimeT = Aws::String>
    void SetApplicationMaintenanceWindowEndTime(ApplicationMaintenanceWindowEndTimeT&& value) { m_applicationMaintenanceWindowEndTimeHasBeenSet = true; m_applicationMaintenanceWindowEndTime = std::forward<ApplicationMaintenanceWindowEndTimeT>(value); }
    template<typename ApplicationMaintenanceWindowEndTimeT = Aws::String>
    ApplicationMaintenanceConfigurationDescription& WithApplicationMaintenanceWindowEndTime(ApplicationMaintenanceWindowEndTimeT&& value) { SetApplicationMaintenanceWindowEndTime(std::forward<ApplicationMaintenanceWindowEndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_applicationMaintenanceWindowStartTime;
    bool m_applicationMaintenanceWindowStartTimeHasBeenSet = false;

    Aws::String m_applicationMaintenanceWindowEndTime;
    bool m_applicationMaintenanceWindowEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
