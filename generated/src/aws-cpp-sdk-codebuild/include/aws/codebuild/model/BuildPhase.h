/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/BuildPhaseType.h>
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
   * <p>Information about a stage for a build.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BuildPhase">AWS
   * API Reference</a></p>
   */
  class BuildPhase
  {
  public:
    AWS_CODEBUILD_API BuildPhase();
    AWS_CODEBUILD_API BuildPhase(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildPhase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the build phase. Valid values include:</p> <dl> <dt>BUILD</dt>
     * <dd> <p>Core build activities typically occur in this build phase.</p> </dd>
     * <dt>COMPLETED</dt> <dd> <p>The build has been completed.</p> </dd>
     * <dt>DOWNLOAD_SOURCE</dt> <dd> <p>Source code is being downloaded in this build
     * phase.</p> </dd> <dt>FINALIZING</dt> <dd> <p>The build process is completing in
     * this build phase.</p> </dd> <dt>INSTALL</dt> <dd> <p>Installation activities
     * typically occur in this build phase.</p> </dd> <dt>POST_BUILD</dt> <dd>
     * <p>Post-build activities typically occur in this build phase.</p> </dd>
     * <dt>PRE_BUILD</dt> <dd> <p>Pre-build activities typically occur in this build
     * phase.</p> </dd> <dt>PROVISIONING</dt> <dd> <p>The build environment is being
     * set up.</p> </dd> <dt>QUEUED</dt> <dd> <p>The build has been submitted and is
     * queued behind other submitted builds.</p> </dd> <dt>SUBMITTED</dt> <dd> <p>The
     * build has been submitted.</p> </dd> <dt>UPLOAD_ARTIFACTS</dt> <dd> <p>Build
     * output artifacts are being uploaded to the output location.</p> </dd> </dl>
     */
    inline const BuildPhaseType& GetPhaseType() const{ return m_phaseType; }
    inline bool PhaseTypeHasBeenSet() const { return m_phaseTypeHasBeenSet; }
    inline void SetPhaseType(const BuildPhaseType& value) { m_phaseTypeHasBeenSet = true; m_phaseType = value; }
    inline void SetPhaseType(BuildPhaseType&& value) { m_phaseTypeHasBeenSet = true; m_phaseType = std::move(value); }
    inline BuildPhase& WithPhaseType(const BuildPhaseType& value) { SetPhaseType(value); return *this;}
    inline BuildPhase& WithPhaseType(BuildPhaseType&& value) { SetPhaseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the build phase. Valid values include:</p> <dl>
     * <dt>FAILED</dt> <dd> <p>The build phase failed.</p> </dd> <dt>FAULT</dt> <dd>
     * <p>The build phase faulted.</p> </dd> <dt>IN_PROGRESS</dt> <dd> <p>The build
     * phase is still in progress.</p> </dd> <dt>STOPPED</dt> <dd> <p>The build phase
     * stopped.</p> </dd> <dt>SUCCEEDED</dt> <dd> <p>The build phase succeeded.</p>
     * </dd> <dt>TIMED_OUT</dt> <dd> <p>The build phase timed out.</p> </dd> </dl>
     */
    inline const StatusType& GetPhaseStatus() const{ return m_phaseStatus; }
    inline bool PhaseStatusHasBeenSet() const { return m_phaseStatusHasBeenSet; }
    inline void SetPhaseStatus(const StatusType& value) { m_phaseStatusHasBeenSet = true; m_phaseStatus = value; }
    inline void SetPhaseStatus(StatusType&& value) { m_phaseStatusHasBeenSet = true; m_phaseStatus = std::move(value); }
    inline BuildPhase& WithPhaseStatus(const StatusType& value) { SetPhaseStatus(value); return *this;}
    inline BuildPhase& WithPhaseStatus(StatusType&& value) { SetPhaseStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the build phase started, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline BuildPhase& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline BuildPhase& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the build phase ended, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline BuildPhase& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline BuildPhase& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in seconds, between the starting and ending times of the build's
     * phase.</p>
     */
    inline long long GetDurationInSeconds() const{ return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(long long value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline BuildPhase& WithDurationInSeconds(long long value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about a build phase, especially to help troubleshoot a
     * failed build.</p>
     */
    inline const Aws::Vector<PhaseContext>& GetContexts() const{ return m_contexts; }
    inline bool ContextsHasBeenSet() const { return m_contextsHasBeenSet; }
    inline void SetContexts(const Aws::Vector<PhaseContext>& value) { m_contextsHasBeenSet = true; m_contexts = value; }
    inline void SetContexts(Aws::Vector<PhaseContext>&& value) { m_contextsHasBeenSet = true; m_contexts = std::move(value); }
    inline BuildPhase& WithContexts(const Aws::Vector<PhaseContext>& value) { SetContexts(value); return *this;}
    inline BuildPhase& WithContexts(Aws::Vector<PhaseContext>&& value) { SetContexts(std::move(value)); return *this;}
    inline BuildPhase& AddContexts(const PhaseContext& value) { m_contextsHasBeenSet = true; m_contexts.push_back(value); return *this; }
    inline BuildPhase& AddContexts(PhaseContext&& value) { m_contextsHasBeenSet = true; m_contexts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    BuildPhaseType m_phaseType;
    bool m_phaseTypeHasBeenSet = false;

    StatusType m_phaseStatus;
    bool m_phaseStatusHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;

    long long m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet = false;

    Aws::Vector<PhaseContext> m_contexts;
    bool m_contextsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
