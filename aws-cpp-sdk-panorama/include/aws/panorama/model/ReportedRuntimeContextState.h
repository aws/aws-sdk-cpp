/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/panorama/Panorama_EXPORTS.h>
#include <aws/panorama/model/DesiredState.h>
#include <aws/panorama/model/DeviceReportedStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace Panorama
{
namespace Model
{

  /**
   * <p>An application instance's state.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/panorama-2019-07-24/ReportedRuntimeContextState">AWS
   * API Reference</a></p>
   */
  class ReportedRuntimeContextState
  {
  public:
    AWS_PANORAMA_API ReportedRuntimeContextState();
    AWS_PANORAMA_API ReportedRuntimeContextState(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API ReportedRuntimeContextState& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PANORAMA_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application's desired state.</p>
     */
    inline const DesiredState& GetDesiredState() const{ return m_desiredState; }

    /**
     * <p>The application's desired state.</p>
     */
    inline bool DesiredStateHasBeenSet() const { return m_desiredStateHasBeenSet; }

    /**
     * <p>The application's desired state.</p>
     */
    inline void SetDesiredState(const DesiredState& value) { m_desiredStateHasBeenSet = true; m_desiredState = value; }

    /**
     * <p>The application's desired state.</p>
     */
    inline void SetDesiredState(DesiredState&& value) { m_desiredStateHasBeenSet = true; m_desiredState = std::move(value); }

    /**
     * <p>The application's desired state.</p>
     */
    inline ReportedRuntimeContextState& WithDesiredState(const DesiredState& value) { SetDesiredState(value); return *this;}

    /**
     * <p>The application's desired state.</p>
     */
    inline ReportedRuntimeContextState& WithDesiredState(DesiredState&& value) { SetDesiredState(std::move(value)); return *this;}


    /**
     * <p>The application's reported status.</p>
     */
    inline const DeviceReportedStatus& GetDeviceReportedStatus() const{ return m_deviceReportedStatus; }

    /**
     * <p>The application's reported status.</p>
     */
    inline bool DeviceReportedStatusHasBeenSet() const { return m_deviceReportedStatusHasBeenSet; }

    /**
     * <p>The application's reported status.</p>
     */
    inline void SetDeviceReportedStatus(const DeviceReportedStatus& value) { m_deviceReportedStatusHasBeenSet = true; m_deviceReportedStatus = value; }

    /**
     * <p>The application's reported status.</p>
     */
    inline void SetDeviceReportedStatus(DeviceReportedStatus&& value) { m_deviceReportedStatusHasBeenSet = true; m_deviceReportedStatus = std::move(value); }

    /**
     * <p>The application's reported status.</p>
     */
    inline ReportedRuntimeContextState& WithDeviceReportedStatus(const DeviceReportedStatus& value) { SetDeviceReportedStatus(value); return *this;}

    /**
     * <p>The application's reported status.</p>
     */
    inline ReportedRuntimeContextState& WithDeviceReportedStatus(DeviceReportedStatus&& value) { SetDeviceReportedStatus(std::move(value)); return *this;}


    /**
     * <p>When the device reported the application's state.</p>
     */
    inline const Aws::Utils::DateTime& GetDeviceReportedTime() const{ return m_deviceReportedTime; }

    /**
     * <p>When the device reported the application's state.</p>
     */
    inline bool DeviceReportedTimeHasBeenSet() const { return m_deviceReportedTimeHasBeenSet; }

    /**
     * <p>When the device reported the application's state.</p>
     */
    inline void SetDeviceReportedTime(const Aws::Utils::DateTime& value) { m_deviceReportedTimeHasBeenSet = true; m_deviceReportedTime = value; }

    /**
     * <p>When the device reported the application's state.</p>
     */
    inline void SetDeviceReportedTime(Aws::Utils::DateTime&& value) { m_deviceReportedTimeHasBeenSet = true; m_deviceReportedTime = std::move(value); }

    /**
     * <p>When the device reported the application's state.</p>
     */
    inline ReportedRuntimeContextState& WithDeviceReportedTime(const Aws::Utils::DateTime& value) { SetDeviceReportedTime(value); return *this;}

    /**
     * <p>When the device reported the application's state.</p>
     */
    inline ReportedRuntimeContextState& WithDeviceReportedTime(Aws::Utils::DateTime&& value) { SetDeviceReportedTime(std::move(value)); return *this;}


    /**
     * <p>The device's name.</p>
     */
    inline const Aws::String& GetRuntimeContextName() const{ return m_runtimeContextName; }

    /**
     * <p>The device's name.</p>
     */
    inline bool RuntimeContextNameHasBeenSet() const { return m_runtimeContextNameHasBeenSet; }

    /**
     * <p>The device's name.</p>
     */
    inline void SetRuntimeContextName(const Aws::String& value) { m_runtimeContextNameHasBeenSet = true; m_runtimeContextName = value; }

    /**
     * <p>The device's name.</p>
     */
    inline void SetRuntimeContextName(Aws::String&& value) { m_runtimeContextNameHasBeenSet = true; m_runtimeContextName = std::move(value); }

    /**
     * <p>The device's name.</p>
     */
    inline void SetRuntimeContextName(const char* value) { m_runtimeContextNameHasBeenSet = true; m_runtimeContextName.assign(value); }

    /**
     * <p>The device's name.</p>
     */
    inline ReportedRuntimeContextState& WithRuntimeContextName(const Aws::String& value) { SetRuntimeContextName(value); return *this;}

    /**
     * <p>The device's name.</p>
     */
    inline ReportedRuntimeContextState& WithRuntimeContextName(Aws::String&& value) { SetRuntimeContextName(std::move(value)); return *this;}

    /**
     * <p>The device's name.</p>
     */
    inline ReportedRuntimeContextState& WithRuntimeContextName(const char* value) { SetRuntimeContextName(value); return *this;}

  private:

    DesiredState m_desiredState;
    bool m_desiredStateHasBeenSet = false;

    DeviceReportedStatus m_deviceReportedStatus;
    bool m_deviceReportedStatusHasBeenSet = false;

    Aws::Utils::DateTime m_deviceReportedTime;
    bool m_deviceReportedTimeHasBeenSet = false;

    Aws::String m_runtimeContextName;
    bool m_runtimeContextNameHasBeenSet = false;
  };

} // namespace Model
} // namespace Panorama
} // namespace Aws
