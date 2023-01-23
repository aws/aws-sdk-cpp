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
    AWS_KINESISANALYTICSV2_API ApplicationMaintenanceConfigurationDescription();
    AWS_KINESISANALYTICSV2_API ApplicationMaintenanceConfigurationDescription(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API ApplicationMaintenanceConfigurationDescription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_KINESISANALYTICSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start time for the maintenance window.</p>
     */
    inline const Aws::String& GetApplicationMaintenanceWindowStartTime() const{ return m_applicationMaintenanceWindowStartTime; }

    /**
     * <p>The start time for the maintenance window.</p>
     */
    inline bool ApplicationMaintenanceWindowStartTimeHasBeenSet() const { return m_applicationMaintenanceWindowStartTimeHasBeenSet; }

    /**
     * <p>The start time for the maintenance window.</p>
     */
    inline void SetApplicationMaintenanceWindowStartTime(const Aws::String& value) { m_applicationMaintenanceWindowStartTimeHasBeenSet = true; m_applicationMaintenanceWindowStartTime = value; }

    /**
     * <p>The start time for the maintenance window.</p>
     */
    inline void SetApplicationMaintenanceWindowStartTime(Aws::String&& value) { m_applicationMaintenanceWindowStartTimeHasBeenSet = true; m_applicationMaintenanceWindowStartTime = std::move(value); }

    /**
     * <p>The start time for the maintenance window.</p>
     */
    inline void SetApplicationMaintenanceWindowStartTime(const char* value) { m_applicationMaintenanceWindowStartTimeHasBeenSet = true; m_applicationMaintenanceWindowStartTime.assign(value); }

    /**
     * <p>The start time for the maintenance window.</p>
     */
    inline ApplicationMaintenanceConfigurationDescription& WithApplicationMaintenanceWindowStartTime(const Aws::String& value) { SetApplicationMaintenanceWindowStartTime(value); return *this;}

    /**
     * <p>The start time for the maintenance window.</p>
     */
    inline ApplicationMaintenanceConfigurationDescription& WithApplicationMaintenanceWindowStartTime(Aws::String&& value) { SetApplicationMaintenanceWindowStartTime(std::move(value)); return *this;}

    /**
     * <p>The start time for the maintenance window.</p>
     */
    inline ApplicationMaintenanceConfigurationDescription& WithApplicationMaintenanceWindowStartTime(const char* value) { SetApplicationMaintenanceWindowStartTime(value); return *this;}


    /**
     * <p>The end time for the maintenance window.</p>
     */
    inline const Aws::String& GetApplicationMaintenanceWindowEndTime() const{ return m_applicationMaintenanceWindowEndTime; }

    /**
     * <p>The end time for the maintenance window.</p>
     */
    inline bool ApplicationMaintenanceWindowEndTimeHasBeenSet() const { return m_applicationMaintenanceWindowEndTimeHasBeenSet; }

    /**
     * <p>The end time for the maintenance window.</p>
     */
    inline void SetApplicationMaintenanceWindowEndTime(const Aws::String& value) { m_applicationMaintenanceWindowEndTimeHasBeenSet = true; m_applicationMaintenanceWindowEndTime = value; }

    /**
     * <p>The end time for the maintenance window.</p>
     */
    inline void SetApplicationMaintenanceWindowEndTime(Aws::String&& value) { m_applicationMaintenanceWindowEndTimeHasBeenSet = true; m_applicationMaintenanceWindowEndTime = std::move(value); }

    /**
     * <p>The end time for the maintenance window.</p>
     */
    inline void SetApplicationMaintenanceWindowEndTime(const char* value) { m_applicationMaintenanceWindowEndTimeHasBeenSet = true; m_applicationMaintenanceWindowEndTime.assign(value); }

    /**
     * <p>The end time for the maintenance window.</p>
     */
    inline ApplicationMaintenanceConfigurationDescription& WithApplicationMaintenanceWindowEndTime(const Aws::String& value) { SetApplicationMaintenanceWindowEndTime(value); return *this;}

    /**
     * <p>The end time for the maintenance window.</p>
     */
    inline ApplicationMaintenanceConfigurationDescription& WithApplicationMaintenanceWindowEndTime(Aws::String&& value) { SetApplicationMaintenanceWindowEndTime(std::move(value)); return *this;}

    /**
     * <p>The end time for the maintenance window.</p>
     */
    inline ApplicationMaintenanceConfigurationDescription& WithApplicationMaintenanceWindowEndTime(const char* value) { SetApplicationMaintenanceWindowEndTime(value); return *this;}

  private:

    Aws::String m_applicationMaintenanceWindowStartTime;
    bool m_applicationMaintenanceWindowStartTimeHasBeenSet = false;

    Aws::String m_applicationMaintenanceWindowEndTime;
    bool m_applicationMaintenanceWindowEndTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace KinesisAnalyticsV2
} // namespace Aws
