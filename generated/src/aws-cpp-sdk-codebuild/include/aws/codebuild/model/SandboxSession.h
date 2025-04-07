/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/LogsLocation.h>
#include <aws/codebuild/model/NetworkInterface.h>
#include <aws/codebuild/model/SandboxSessionPhase.h>
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
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Contains information about the sandbox session.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/SandboxSession">AWS
   * API Reference</a></p>
   */
  class SandboxSession
  {
  public:
    AWS_CODEBUILD_API SandboxSession() = default;
    AWS_CODEBUILD_API SandboxSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API SandboxSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the sandbox session.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    SandboxSession& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the sandbox session.</p>
     */
    inline const Aws::String& GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    template<typename StatusT = Aws::String>
    void SetStatus(StatusT&& value) { m_statusHasBeenSet = true; m_status = std::forward<StatusT>(value); }
    template<typename StatusT = Aws::String>
    SandboxSession& WithStatus(StatusT&& value) { SetStatus(std::forward<StatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the sandbox session started, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    SandboxSession& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the sandbox session ended, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    SandboxSession& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current phase for the sandbox.</p>
     */
    inline const Aws::String& GetCurrentPhase() const { return m_currentPhase; }
    inline bool CurrentPhaseHasBeenSet() const { return m_currentPhaseHasBeenSet; }
    template<typename CurrentPhaseT = Aws::String>
    void SetCurrentPhase(CurrentPhaseT&& value) { m_currentPhaseHasBeenSet = true; m_currentPhase = std::forward<CurrentPhaseT>(value); }
    template<typename CurrentPhaseT = Aws::String>
    SandboxSession& WithCurrentPhase(CurrentPhaseT&& value) { SetCurrentPhase(std::forward<CurrentPhaseT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>SandboxSessionPhase</code> objects. </p>
     */
    inline const Aws::Vector<SandboxSessionPhase>& GetPhases() const { return m_phases; }
    inline bool PhasesHasBeenSet() const { return m_phasesHasBeenSet; }
    template<typename PhasesT = Aws::Vector<SandboxSessionPhase>>
    void SetPhases(PhasesT&& value) { m_phasesHasBeenSet = true; m_phases = std::forward<PhasesT>(value); }
    template<typename PhasesT = Aws::Vector<SandboxSessionPhase>>
    SandboxSession& WithPhases(PhasesT&& value) { SetPhases(std::forward<PhasesT>(value)); return *this;}
    template<typename PhasesT = SandboxSessionPhase>
    SandboxSession& AddPhases(PhasesT&& value) { m_phasesHasBeenSet = true; m_phases.emplace_back(std::forward<PhasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An identifier for the version of this sandbox's source code.</p>
     */
    inline const Aws::String& GetResolvedSourceVersion() const { return m_resolvedSourceVersion; }
    inline bool ResolvedSourceVersionHasBeenSet() const { return m_resolvedSourceVersionHasBeenSet; }
    template<typename ResolvedSourceVersionT = Aws::String>
    void SetResolvedSourceVersion(ResolvedSourceVersionT&& value) { m_resolvedSourceVersionHasBeenSet = true; m_resolvedSourceVersion = std::forward<ResolvedSourceVersionT>(value); }
    template<typename ResolvedSourceVersionT = Aws::String>
    SandboxSession& WithResolvedSourceVersion(ResolvedSourceVersionT&& value) { SetResolvedSourceVersion(std::forward<ResolvedSourceVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const LogsLocation& GetLogs() const { return m_logs; }
    inline bool LogsHasBeenSet() const { return m_logsHasBeenSet; }
    template<typename LogsT = LogsLocation>
    void SetLogs(LogsT&& value) { m_logsHasBeenSet = true; m_logs = std::forward<LogsT>(value); }
    template<typename LogsT = LogsLocation>
    SandboxSession& WithLogs(LogsT&& value) { SetLogs(std::forward<LogsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const NetworkInterface& GetNetworkInterface() const { return m_networkInterface; }
    inline bool NetworkInterfaceHasBeenSet() const { return m_networkInterfaceHasBeenSet; }
    template<typename NetworkInterfaceT = NetworkInterface>
    void SetNetworkInterface(NetworkInterfaceT&& value) { m_networkInterfaceHasBeenSet = true; m_networkInterface = std::forward<NetworkInterfaceT>(value); }
    template<typename NetworkInterfaceT = NetworkInterface>
    SandboxSession& WithNetworkInterface(NetworkInterfaceT&& value) { SetNetworkInterface(std::forward<NetworkInterfaceT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    Aws::String m_currentPhase;
    bool m_currentPhaseHasBeenSet = false;

    Aws::Vector<SandboxSessionPhase> m_phases;
    bool m_phasesHasBeenSet = false;

    Aws::String m_resolvedSourceVersion;
    bool m_resolvedSourceVersionHasBeenSet = false;

    LogsLocation m_logs;
    bool m_logsHasBeenSet = false;

    NetworkInterface m_networkInterface;
    bool m_networkInterfaceHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
