/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/MaintenanceSchedule.h>
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
namespace MainframeModernization
{
namespace Model
{

  /**
   * <p>The scheduled maintenance for a runtime engine.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/m2-2021-04-28/PendingMaintenance">AWS
   * API Reference</a></p>
   */
  class PendingMaintenance
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API PendingMaintenance();
    AWS_MAINFRAMEMODERNIZATION_API PendingMaintenance(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API PendingMaintenance& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MAINFRAMEMODERNIZATION_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The specific runtime engine that the maintenance schedule applies to.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The specific runtime engine that the maintenance schedule applies to.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The specific runtime engine that the maintenance schedule applies to.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The specific runtime engine that the maintenance schedule applies to.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The specific runtime engine that the maintenance schedule applies to.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The specific runtime engine that the maintenance schedule applies to.</p>
     */
    inline PendingMaintenance& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The specific runtime engine that the maintenance schedule applies to.</p>
     */
    inline PendingMaintenance& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The specific runtime engine that the maintenance schedule applies to.</p>
     */
    inline PendingMaintenance& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The maintenance schedule for the runtime engine version.</p>
     */
    inline const MaintenanceSchedule& GetSchedule() const{ return m_schedule; }

    /**
     * <p>The maintenance schedule for the runtime engine version.</p>
     */
    inline bool ScheduleHasBeenSet() const { return m_scheduleHasBeenSet; }

    /**
     * <p>The maintenance schedule for the runtime engine version.</p>
     */
    inline void SetSchedule(const MaintenanceSchedule& value) { m_scheduleHasBeenSet = true; m_schedule = value; }

    /**
     * <p>The maintenance schedule for the runtime engine version.</p>
     */
    inline void SetSchedule(MaintenanceSchedule&& value) { m_scheduleHasBeenSet = true; m_schedule = std::move(value); }

    /**
     * <p>The maintenance schedule for the runtime engine version.</p>
     */
    inline PendingMaintenance& WithSchedule(const MaintenanceSchedule& value) { SetSchedule(value); return *this;}

    /**
     * <p>The maintenance schedule for the runtime engine version.</p>
     */
    inline PendingMaintenance& WithSchedule(MaintenanceSchedule&& value) { SetSchedule(std::move(value)); return *this;}

  private:

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    MaintenanceSchedule m_schedule;
    bool m_scheduleHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
