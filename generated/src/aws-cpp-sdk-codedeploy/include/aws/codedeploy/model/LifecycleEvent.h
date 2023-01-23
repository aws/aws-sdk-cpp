/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codedeploy/model/Diagnostics.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codedeploy/model/LifecycleEventStatus.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about a deployment lifecycle event.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/LifecycleEvent">AWS
   * API Reference</a></p>
   */
  class LifecycleEvent
  {
  public:
    AWS_CODEDEPLOY_API LifecycleEvent();
    AWS_CODEDEPLOY_API LifecycleEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API LifecycleEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The deployment lifecycle event name, such as <code>ApplicationStop</code>,
     * <code>BeforeInstall</code>, <code>AfterInstall</code>,
     * <code>ApplicationStart</code>, or <code>ValidateService</code>.</p>
     */
    inline const Aws::String& GetLifecycleEventName() const{ return m_lifecycleEventName; }

    /**
     * <p>The deployment lifecycle event name, such as <code>ApplicationStop</code>,
     * <code>BeforeInstall</code>, <code>AfterInstall</code>,
     * <code>ApplicationStart</code>, or <code>ValidateService</code>.</p>
     */
    inline bool LifecycleEventNameHasBeenSet() const { return m_lifecycleEventNameHasBeenSet; }

    /**
     * <p>The deployment lifecycle event name, such as <code>ApplicationStop</code>,
     * <code>BeforeInstall</code>, <code>AfterInstall</code>,
     * <code>ApplicationStart</code>, or <code>ValidateService</code>.</p>
     */
    inline void SetLifecycleEventName(const Aws::String& value) { m_lifecycleEventNameHasBeenSet = true; m_lifecycleEventName = value; }

    /**
     * <p>The deployment lifecycle event name, such as <code>ApplicationStop</code>,
     * <code>BeforeInstall</code>, <code>AfterInstall</code>,
     * <code>ApplicationStart</code>, or <code>ValidateService</code>.</p>
     */
    inline void SetLifecycleEventName(Aws::String&& value) { m_lifecycleEventNameHasBeenSet = true; m_lifecycleEventName = std::move(value); }

    /**
     * <p>The deployment lifecycle event name, such as <code>ApplicationStop</code>,
     * <code>BeforeInstall</code>, <code>AfterInstall</code>,
     * <code>ApplicationStart</code>, or <code>ValidateService</code>.</p>
     */
    inline void SetLifecycleEventName(const char* value) { m_lifecycleEventNameHasBeenSet = true; m_lifecycleEventName.assign(value); }

    /**
     * <p>The deployment lifecycle event name, such as <code>ApplicationStop</code>,
     * <code>BeforeInstall</code>, <code>AfterInstall</code>,
     * <code>ApplicationStart</code>, or <code>ValidateService</code>.</p>
     */
    inline LifecycleEvent& WithLifecycleEventName(const Aws::String& value) { SetLifecycleEventName(value); return *this;}

    /**
     * <p>The deployment lifecycle event name, such as <code>ApplicationStop</code>,
     * <code>BeforeInstall</code>, <code>AfterInstall</code>,
     * <code>ApplicationStart</code>, or <code>ValidateService</code>.</p>
     */
    inline LifecycleEvent& WithLifecycleEventName(Aws::String&& value) { SetLifecycleEventName(std::move(value)); return *this;}

    /**
     * <p>The deployment lifecycle event name, such as <code>ApplicationStop</code>,
     * <code>BeforeInstall</code>, <code>AfterInstall</code>,
     * <code>ApplicationStart</code>, or <code>ValidateService</code>.</p>
     */
    inline LifecycleEvent& WithLifecycleEventName(const char* value) { SetLifecycleEventName(value); return *this;}


    /**
     * <p>Diagnostic information about the deployment lifecycle event.</p>
     */
    inline const Diagnostics& GetDiagnostics() const{ return m_diagnostics; }

    /**
     * <p>Diagnostic information about the deployment lifecycle event.</p>
     */
    inline bool DiagnosticsHasBeenSet() const { return m_diagnosticsHasBeenSet; }

    /**
     * <p>Diagnostic information about the deployment lifecycle event.</p>
     */
    inline void SetDiagnostics(const Diagnostics& value) { m_diagnosticsHasBeenSet = true; m_diagnostics = value; }

    /**
     * <p>Diagnostic information about the deployment lifecycle event.</p>
     */
    inline void SetDiagnostics(Diagnostics&& value) { m_diagnosticsHasBeenSet = true; m_diagnostics = std::move(value); }

    /**
     * <p>Diagnostic information about the deployment lifecycle event.</p>
     */
    inline LifecycleEvent& WithDiagnostics(const Diagnostics& value) { SetDiagnostics(value); return *this;}

    /**
     * <p>Diagnostic information about the deployment lifecycle event.</p>
     */
    inline LifecycleEvent& WithDiagnostics(Diagnostics&& value) { SetDiagnostics(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the deployment lifecycle event started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>A timestamp that indicates when the deployment lifecycle event started.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the deployment lifecycle event started.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>A timestamp that indicates when the deployment lifecycle event started.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the deployment lifecycle event started.</p>
     */
    inline LifecycleEvent& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the deployment lifecycle event started.</p>
     */
    inline LifecycleEvent& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates when the deployment lifecycle event ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>A timestamp that indicates when the deployment lifecycle event ended.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates when the deployment lifecycle event ended.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>A timestamp that indicates when the deployment lifecycle event ended.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>A timestamp that indicates when the deployment lifecycle event ended.</p>
     */
    inline LifecycleEvent& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>A timestamp that indicates when the deployment lifecycle event ended.</p>
     */
    inline LifecycleEvent& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>The deployment lifecycle event status:</p> <ul> <li> <p>Pending: The
     * deployment lifecycle event is pending.</p> </li> <li> <p>InProgress: The
     * deployment lifecycle event is in progress.</p> </li> <li> <p>Succeeded: The
     * deployment lifecycle event ran successfully.</p> </li> <li> <p>Failed: The
     * deployment lifecycle event has failed.</p> </li> <li> <p>Skipped: The deployment
     * lifecycle event has been skipped.</p> </li> <li> <p>Unknown: The deployment
     * lifecycle event is unknown.</p> </li> </ul>
     */
    inline const LifecycleEventStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The deployment lifecycle event status:</p> <ul> <li> <p>Pending: The
     * deployment lifecycle event is pending.</p> </li> <li> <p>InProgress: The
     * deployment lifecycle event is in progress.</p> </li> <li> <p>Succeeded: The
     * deployment lifecycle event ran successfully.</p> </li> <li> <p>Failed: The
     * deployment lifecycle event has failed.</p> </li> <li> <p>Skipped: The deployment
     * lifecycle event has been skipped.</p> </li> <li> <p>Unknown: The deployment
     * lifecycle event is unknown.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The deployment lifecycle event status:</p> <ul> <li> <p>Pending: The
     * deployment lifecycle event is pending.</p> </li> <li> <p>InProgress: The
     * deployment lifecycle event is in progress.</p> </li> <li> <p>Succeeded: The
     * deployment lifecycle event ran successfully.</p> </li> <li> <p>Failed: The
     * deployment lifecycle event has failed.</p> </li> <li> <p>Skipped: The deployment
     * lifecycle event has been skipped.</p> </li> <li> <p>Unknown: The deployment
     * lifecycle event is unknown.</p> </li> </ul>
     */
    inline void SetStatus(const LifecycleEventStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The deployment lifecycle event status:</p> <ul> <li> <p>Pending: The
     * deployment lifecycle event is pending.</p> </li> <li> <p>InProgress: The
     * deployment lifecycle event is in progress.</p> </li> <li> <p>Succeeded: The
     * deployment lifecycle event ran successfully.</p> </li> <li> <p>Failed: The
     * deployment lifecycle event has failed.</p> </li> <li> <p>Skipped: The deployment
     * lifecycle event has been skipped.</p> </li> <li> <p>Unknown: The deployment
     * lifecycle event is unknown.</p> </li> </ul>
     */
    inline void SetStatus(LifecycleEventStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The deployment lifecycle event status:</p> <ul> <li> <p>Pending: The
     * deployment lifecycle event is pending.</p> </li> <li> <p>InProgress: The
     * deployment lifecycle event is in progress.</p> </li> <li> <p>Succeeded: The
     * deployment lifecycle event ran successfully.</p> </li> <li> <p>Failed: The
     * deployment lifecycle event has failed.</p> </li> <li> <p>Skipped: The deployment
     * lifecycle event has been skipped.</p> </li> <li> <p>Unknown: The deployment
     * lifecycle event is unknown.</p> </li> </ul>
     */
    inline LifecycleEvent& WithStatus(const LifecycleEventStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The deployment lifecycle event status:</p> <ul> <li> <p>Pending: The
     * deployment lifecycle event is pending.</p> </li> <li> <p>InProgress: The
     * deployment lifecycle event is in progress.</p> </li> <li> <p>Succeeded: The
     * deployment lifecycle event ran successfully.</p> </li> <li> <p>Failed: The
     * deployment lifecycle event has failed.</p> </li> <li> <p>Skipped: The deployment
     * lifecycle event has been skipped.</p> </li> <li> <p>Unknown: The deployment
     * lifecycle event is unknown.</p> </li> </ul>
     */
    inline LifecycleEvent& WithStatus(LifecycleEventStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_lifecycleEventName;
    bool m_lifecycleEventNameHasBeenSet = false;

    Diagnostics m_diagnostics;
    bool m_diagnosticsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    LifecycleEventStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
