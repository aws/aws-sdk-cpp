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
    AWS_CODEDEPLOY_API LifecycleEvent() = default;
    AWS_CODEDEPLOY_API LifecycleEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API LifecycleEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The deployment lifecycle event name, such as <code>ApplicationStop</code>,
     * <code>BeforeInstall</code>, <code>AfterInstall</code>,
     * <code>ApplicationStart</code>, or <code>ValidateService</code>.</p>
     */
    inline const Aws::String& GetLifecycleEventName() const { return m_lifecycleEventName; }
    inline bool LifecycleEventNameHasBeenSet() const { return m_lifecycleEventNameHasBeenSet; }
    template<typename LifecycleEventNameT = Aws::String>
    void SetLifecycleEventName(LifecycleEventNameT&& value) { m_lifecycleEventNameHasBeenSet = true; m_lifecycleEventName = std::forward<LifecycleEventNameT>(value); }
    template<typename LifecycleEventNameT = Aws::String>
    LifecycleEvent& WithLifecycleEventName(LifecycleEventNameT&& value) { SetLifecycleEventName(std::forward<LifecycleEventNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Diagnostic information about the deployment lifecycle event.</p>
     */
    inline const Diagnostics& GetDiagnostics() const { return m_diagnostics; }
    inline bool DiagnosticsHasBeenSet() const { return m_diagnosticsHasBeenSet; }
    template<typename DiagnosticsT = Diagnostics>
    void SetDiagnostics(DiagnosticsT&& value) { m_diagnosticsHasBeenSet = true; m_diagnostics = std::forward<DiagnosticsT>(value); }
    template<typename DiagnosticsT = Diagnostics>
    LifecycleEvent& WithDiagnostics(DiagnosticsT&& value) { SetDiagnostics(std::forward<DiagnosticsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the deployment lifecycle event started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    LifecycleEvent& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates when the deployment lifecycle event ended.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    LifecycleEvent& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment lifecycle event status:</p> <ul> <li> <p>Pending: The
     * deployment lifecycle event is pending.</p> </li> <li> <p>InProgress: The
     * deployment lifecycle event is in progress.</p> </li> <li> <p>Succeeded: The
     * deployment lifecycle event ran successfully.</p> </li> <li> <p>Failed: The
     * deployment lifecycle event has failed.</p> </li> <li> <p>Skipped: The deployment
     * lifecycle event has been skipped.</p> </li> <li> <p>Unknown: The deployment
     * lifecycle event is unknown.</p> </li> </ul>
     */
    inline LifecycleEventStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(LifecycleEventStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline LifecycleEvent& WithStatus(LifecycleEventStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Aws::String m_lifecycleEventName;
    bool m_lifecycleEventNameHasBeenSet = false;

    Diagnostics m_diagnostics;
    bool m_diagnosticsHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    LifecycleEventStatus m_status{LifecycleEventStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
