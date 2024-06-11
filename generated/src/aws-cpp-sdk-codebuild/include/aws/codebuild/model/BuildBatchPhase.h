/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/model/BuildBatchPhaseType.h>
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
   * <p>Contains information about a stage for a batch build.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/BuildBatchPhase">AWS
   * API Reference</a></p>
   */
  class BuildBatchPhase
  {
  public:
    AWS_CODEBUILD_API BuildBatchPhase();
    AWS_CODEBUILD_API BuildBatchPhase(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API BuildBatchPhase& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEBUILD_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the batch build phase. Valid values include:</p> <dl>
     * <dt>COMBINE_ARTIFACTS</dt> <dd> <p>Build output artifacts are being combined and
     * uploaded to the output location.</p> </dd> <dt>DOWNLOAD_BATCHSPEC</dt> <dd>
     * <p>The batch build specification is being downloaded.</p> </dd> <dt>FAILED</dt>
     * <dd> <p>One or more of the builds failed.</p> </dd> <dt>IN_PROGRESS</dt> <dd>
     * <p>The batch build is in progress.</p> </dd> <dt>STOPPED</dt> <dd> <p>The batch
     * build was stopped.</p> </dd> <dt>SUBMITTED</dt> <dd> <p>The btach build has been
     * submitted.</p> </dd> <dt>SUCCEEDED</dt> <dd> <p>The batch build succeeded.</p>
     * </dd> </dl>
     */
    inline const BuildBatchPhaseType& GetPhaseType() const{ return m_phaseType; }
    inline bool PhaseTypeHasBeenSet() const { return m_phaseTypeHasBeenSet; }
    inline void SetPhaseType(const BuildBatchPhaseType& value) { m_phaseTypeHasBeenSet = true; m_phaseType = value; }
    inline void SetPhaseType(BuildBatchPhaseType&& value) { m_phaseTypeHasBeenSet = true; m_phaseType = std::move(value); }
    inline BuildBatchPhase& WithPhaseType(const BuildBatchPhaseType& value) { SetPhaseType(value); return *this;}
    inline BuildBatchPhase& WithPhaseType(BuildBatchPhaseType&& value) { SetPhaseType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the batch build phase. Valid values include:</p> <dl>
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
    inline BuildBatchPhase& WithPhaseStatus(const StatusType& value) { SetPhaseStatus(value); return *this;}
    inline BuildBatchPhase& WithPhaseStatus(StatusType&& value) { SetPhaseStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the batch build phase started, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline BuildBatchPhase& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline BuildBatchPhase& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the batch build phase ended, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }
    inline BuildBatchPhase& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}
    inline BuildBatchPhase& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>How long, in seconds, between the starting and ending times of the batch
     * build's phase.</p>
     */
    inline long long GetDurationInSeconds() const{ return m_durationInSeconds; }
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }
    inline void SetDurationInSeconds(long long value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }
    inline BuildBatchPhase& WithDurationInSeconds(long long value) { SetDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Additional information about the batch build phase. Especially to help
     * troubleshoot a failed batch build.</p>
     */
    inline const Aws::Vector<PhaseContext>& GetContexts() const{ return m_contexts; }
    inline bool ContextsHasBeenSet() const { return m_contextsHasBeenSet; }
    inline void SetContexts(const Aws::Vector<PhaseContext>& value) { m_contextsHasBeenSet = true; m_contexts = value; }
    inline void SetContexts(Aws::Vector<PhaseContext>&& value) { m_contextsHasBeenSet = true; m_contexts = std::move(value); }
    inline BuildBatchPhase& WithContexts(const Aws::Vector<PhaseContext>& value) { SetContexts(value); return *this;}
    inline BuildBatchPhase& WithContexts(Aws::Vector<PhaseContext>&& value) { SetContexts(std::move(value)); return *this;}
    inline BuildBatchPhase& AddContexts(const PhaseContext& value) { m_contextsHasBeenSet = true; m_contexts.push_back(value); return *this; }
    inline BuildBatchPhase& AddContexts(PhaseContext&& value) { m_contextsHasBeenSet = true; m_contexts.push_back(std::move(value)); return *this; }
    ///@}
  private:

    BuildBatchPhaseType m_phaseType;
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
