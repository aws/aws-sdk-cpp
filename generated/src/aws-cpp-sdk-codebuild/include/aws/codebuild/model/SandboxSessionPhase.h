/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/StatusType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/PhaseContext.h>
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
   * <p>Contains information about the sandbox phase.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/SandboxSessionPhase">AWS
   * API Reference</a></p>
   */
  class SandboxSessionPhase
  {
  public:
    AWS_CODEBUILD_API SandboxSessionPhase() = default;
    AWS_CODEBUILD_API SandboxSessionPhase(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API SandboxSessionPhase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the sandbox phase.</p>
     */
    inline const Aws::String& GetPhaseType() const { return m_phaseType; }
    inline bool PhaseTypeHasBeenSet() const { return m_phaseTypeHasBeenSet; }
    template<typename PhaseTypeT = Aws::String>
    void SetPhaseType(PhaseTypeT&& value) { m_phaseTypeHasBeenSet = true; m_phaseType = std::forward<PhaseTypeT>(value); }
    template<typename PhaseTypeT = Aws::String>
    SandboxSessionPhase& WithPhaseType(PhaseTypeT&& value) { SetPhaseType(std::forward<PhaseTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the sandbox phase. Valid values include:</p> <dl>
     * <dt>FAILED</dt> <dd> <p>The sandbox phase failed.</p> </dd> <dt>FAULT</dt> <dd>
     * <p>The sandbox phase faulted.</p> </dd> <dt>IN_PROGRESS</dt> <dd> <p>The sandbox
     * phase is still in progress.</p> </dd> <dt>STOPPED</dt> <dd> <p>The sandbox phase
     * stopped.</p> </dd> <dt>SUCCEEDED</dt> <dd> <p>The sandbox phase succeeded.</p>
     * </dd> <dt>TIMED_OUT</dt> <dd> <p>The sandbox phase timed out.</p> </dd> </dl>
     */
    inline StatusType GetPhaseStatus() const { return m_phaseStatus; }
    inline bool PhaseStatusHasBeenSet() const { return m_phaseStatusHasBeenSet; }
    inline void SetPhaseStatus(StatusType value) { m_phaseStatusHasBeenSet = true; m_phaseStatus = value; }
    inline SandboxSessionPhase& WithPhaseStatus(StatusType value) { SetPhaseStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the sandbox phase started, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    SandboxSessionPhase& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the sandbox phase ended, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    SandboxSessionPhase& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in seconds, between the starting and ending times of the sandbox's
     * phase.</p>
     */
    inline long long GetDurationInSeconds() const { return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(long long value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline SandboxSessionPhase& WithDurationInSeconds(long long value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An array of <code>PhaseContext</code> objects. </p>
     */
    inline const Aws::Vector<PhaseContext>& GetContexts() const { return m_contexts; }
    inline bool ContextsHasBeenSet() const { return m_contextsHasBeenSet; }
    template<typename ContextsT = Aws::Vector<PhaseContext>>
    void SetContexts(ContextsT&& value) { m_contextsHasBeenSet = true; m_contexts = std::forward<ContextsT>(value); }
    template<typename ContextsT = Aws::Vector<PhaseContext>>
    SandboxSessionPhase& WithContexts(ContextsT&& value) { SetContexts(std::forward<ContextsT>(value)); return *this;}
    template<typename ContextsT = PhaseContext>
    SandboxSessionPhase& AddContexts(ContextsT&& value) { m_contextsHasBeenSet = true; m_contexts.emplace_back(std::forward<ContextsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_phaseType;
    bool m_phaseTypeHasBeenSet = false;

    StatusType m_phaseStatus{StatusType::NOT_SET};
    bool m_phaseStatusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;

    long long m_durationInSeconds{0};
    bool m_durationInSecondsHasBeenSet = false;

    Aws::Vector<PhaseContext> m_contexts;
    bool m_contextsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
