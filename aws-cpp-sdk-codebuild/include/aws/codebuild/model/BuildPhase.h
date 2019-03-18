/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_CODEBUILD_API BuildPhase
  {
  public:
    BuildPhase();
    BuildPhase(Aws::Utils::Json::JsonView jsonValue);
    BuildPhase& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the build phase. Valid values include:</p> <ul> <li> <p>
     * <code>BUILD</code>: Core build activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>COMPLETED</code>: The build has been
     * completed.</p> </li> <li> <p> <code>DOWNLOAD_SOURCE</code>: Source code is being
     * downloaded in this build phase.</p> </li> <li> <p> <code>FINALIZING</code>: The
     * build process is completing in this build phase.</p> </li> <li> <p>
     * <code>INSTALL</code>: Installation activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>POST_BUILD</code>: Post-build activities
     * typically occur in this build phase.</p> </li> <li> <p> <code>PRE_BUILD</code>:
     * Pre-build activities typically occur in this build phase.</p> </li> <li> <p>
     * <code>PROVISIONING</code>: The build environment is being set up.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>SUBMITTED</code>: The build has been
     * submitted.</p> </li> <li> <p> <code>UPLOAD_ARTIFACTS</code>: Build output
     * artifacts are being uploaded to the output location.</p> </li> </ul>
     */
    inline const BuildPhaseType& GetPhaseType() const{ return m_phaseType; }

    /**
     * <p>The name of the build phase. Valid values include:</p> <ul> <li> <p>
     * <code>BUILD</code>: Core build activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>COMPLETED</code>: The build has been
     * completed.</p> </li> <li> <p> <code>DOWNLOAD_SOURCE</code>: Source code is being
     * downloaded in this build phase.</p> </li> <li> <p> <code>FINALIZING</code>: The
     * build process is completing in this build phase.</p> </li> <li> <p>
     * <code>INSTALL</code>: Installation activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>POST_BUILD</code>: Post-build activities
     * typically occur in this build phase.</p> </li> <li> <p> <code>PRE_BUILD</code>:
     * Pre-build activities typically occur in this build phase.</p> </li> <li> <p>
     * <code>PROVISIONING</code>: The build environment is being set up.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>SUBMITTED</code>: The build has been
     * submitted.</p> </li> <li> <p> <code>UPLOAD_ARTIFACTS</code>: Build output
     * artifacts are being uploaded to the output location.</p> </li> </ul>
     */
    inline bool PhaseTypeHasBeenSet() const { return m_phaseTypeHasBeenSet; }

    /**
     * <p>The name of the build phase. Valid values include:</p> <ul> <li> <p>
     * <code>BUILD</code>: Core build activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>COMPLETED</code>: The build has been
     * completed.</p> </li> <li> <p> <code>DOWNLOAD_SOURCE</code>: Source code is being
     * downloaded in this build phase.</p> </li> <li> <p> <code>FINALIZING</code>: The
     * build process is completing in this build phase.</p> </li> <li> <p>
     * <code>INSTALL</code>: Installation activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>POST_BUILD</code>: Post-build activities
     * typically occur in this build phase.</p> </li> <li> <p> <code>PRE_BUILD</code>:
     * Pre-build activities typically occur in this build phase.</p> </li> <li> <p>
     * <code>PROVISIONING</code>: The build environment is being set up.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>SUBMITTED</code>: The build has been
     * submitted.</p> </li> <li> <p> <code>UPLOAD_ARTIFACTS</code>: Build output
     * artifacts are being uploaded to the output location.</p> </li> </ul>
     */
    inline void SetPhaseType(const BuildPhaseType& value) { m_phaseTypeHasBeenSet = true; m_phaseType = value; }

    /**
     * <p>The name of the build phase. Valid values include:</p> <ul> <li> <p>
     * <code>BUILD</code>: Core build activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>COMPLETED</code>: The build has been
     * completed.</p> </li> <li> <p> <code>DOWNLOAD_SOURCE</code>: Source code is being
     * downloaded in this build phase.</p> </li> <li> <p> <code>FINALIZING</code>: The
     * build process is completing in this build phase.</p> </li> <li> <p>
     * <code>INSTALL</code>: Installation activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>POST_BUILD</code>: Post-build activities
     * typically occur in this build phase.</p> </li> <li> <p> <code>PRE_BUILD</code>:
     * Pre-build activities typically occur in this build phase.</p> </li> <li> <p>
     * <code>PROVISIONING</code>: The build environment is being set up.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>SUBMITTED</code>: The build has been
     * submitted.</p> </li> <li> <p> <code>UPLOAD_ARTIFACTS</code>: Build output
     * artifacts are being uploaded to the output location.</p> </li> </ul>
     */
    inline void SetPhaseType(BuildPhaseType&& value) { m_phaseTypeHasBeenSet = true; m_phaseType = std::move(value); }

    /**
     * <p>The name of the build phase. Valid values include:</p> <ul> <li> <p>
     * <code>BUILD</code>: Core build activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>COMPLETED</code>: The build has been
     * completed.</p> </li> <li> <p> <code>DOWNLOAD_SOURCE</code>: Source code is being
     * downloaded in this build phase.</p> </li> <li> <p> <code>FINALIZING</code>: The
     * build process is completing in this build phase.</p> </li> <li> <p>
     * <code>INSTALL</code>: Installation activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>POST_BUILD</code>: Post-build activities
     * typically occur in this build phase.</p> </li> <li> <p> <code>PRE_BUILD</code>:
     * Pre-build activities typically occur in this build phase.</p> </li> <li> <p>
     * <code>PROVISIONING</code>: The build environment is being set up.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>SUBMITTED</code>: The build has been
     * submitted.</p> </li> <li> <p> <code>UPLOAD_ARTIFACTS</code>: Build output
     * artifacts are being uploaded to the output location.</p> </li> </ul>
     */
    inline BuildPhase& WithPhaseType(const BuildPhaseType& value) { SetPhaseType(value); return *this;}

    /**
     * <p>The name of the build phase. Valid values include:</p> <ul> <li> <p>
     * <code>BUILD</code>: Core build activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>COMPLETED</code>: The build has been
     * completed.</p> </li> <li> <p> <code>DOWNLOAD_SOURCE</code>: Source code is being
     * downloaded in this build phase.</p> </li> <li> <p> <code>FINALIZING</code>: The
     * build process is completing in this build phase.</p> </li> <li> <p>
     * <code>INSTALL</code>: Installation activities typically occur in this build
     * phase.</p> </li> <li> <p> <code>POST_BUILD</code>: Post-build activities
     * typically occur in this build phase.</p> </li> <li> <p> <code>PRE_BUILD</code>:
     * Pre-build activities typically occur in this build phase.</p> </li> <li> <p>
     * <code>PROVISIONING</code>: The build environment is being set up.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>SUBMITTED</code>: The build has been
     * submitted.</p> </li> <li> <p> <code>UPLOAD_ARTIFACTS</code>: Build output
     * artifacts are being uploaded to the output location.</p> </li> </ul>
     */
    inline BuildPhase& WithPhaseType(BuildPhaseType&& value) { SetPhaseType(std::move(value)); return *this;}


    /**
     * <p>The current status of the build phase. Valid values include:</p> <ul> <li>
     * <p> <code>FAILED</code>: The build phase failed.</p> </li> <li> <p>
     * <code>FAULT</code>: The build phase faulted.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The build phase is still in progress.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>STOPPED</code>: The build phase
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build phase
     * succeeded.</p> </li> <li> <p> <code>TIMED_OUT</code>: The build phase timed
     * out.</p> </li> </ul>
     */
    inline const StatusType& GetPhaseStatus() const{ return m_phaseStatus; }

    /**
     * <p>The current status of the build phase. Valid values include:</p> <ul> <li>
     * <p> <code>FAILED</code>: The build phase failed.</p> </li> <li> <p>
     * <code>FAULT</code>: The build phase faulted.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The build phase is still in progress.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>STOPPED</code>: The build phase
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build phase
     * succeeded.</p> </li> <li> <p> <code>TIMED_OUT</code>: The build phase timed
     * out.</p> </li> </ul>
     */
    inline bool PhaseStatusHasBeenSet() const { return m_phaseStatusHasBeenSet; }

    /**
     * <p>The current status of the build phase. Valid values include:</p> <ul> <li>
     * <p> <code>FAILED</code>: The build phase failed.</p> </li> <li> <p>
     * <code>FAULT</code>: The build phase faulted.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The build phase is still in progress.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>STOPPED</code>: The build phase
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build phase
     * succeeded.</p> </li> <li> <p> <code>TIMED_OUT</code>: The build phase timed
     * out.</p> </li> </ul>
     */
    inline void SetPhaseStatus(const StatusType& value) { m_phaseStatusHasBeenSet = true; m_phaseStatus = value; }

    /**
     * <p>The current status of the build phase. Valid values include:</p> <ul> <li>
     * <p> <code>FAILED</code>: The build phase failed.</p> </li> <li> <p>
     * <code>FAULT</code>: The build phase faulted.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The build phase is still in progress.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>STOPPED</code>: The build phase
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build phase
     * succeeded.</p> </li> <li> <p> <code>TIMED_OUT</code>: The build phase timed
     * out.</p> </li> </ul>
     */
    inline void SetPhaseStatus(StatusType&& value) { m_phaseStatusHasBeenSet = true; m_phaseStatus = std::move(value); }

    /**
     * <p>The current status of the build phase. Valid values include:</p> <ul> <li>
     * <p> <code>FAILED</code>: The build phase failed.</p> </li> <li> <p>
     * <code>FAULT</code>: The build phase faulted.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The build phase is still in progress.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>STOPPED</code>: The build phase
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build phase
     * succeeded.</p> </li> <li> <p> <code>TIMED_OUT</code>: The build phase timed
     * out.</p> </li> </ul>
     */
    inline BuildPhase& WithPhaseStatus(const StatusType& value) { SetPhaseStatus(value); return *this;}

    /**
     * <p>The current status of the build phase. Valid values include:</p> <ul> <li>
     * <p> <code>FAILED</code>: The build phase failed.</p> </li> <li> <p>
     * <code>FAULT</code>: The build phase faulted.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code>: The build phase is still in progress.</p> </li> <li>
     * <p> <code>QUEUED</code>: The build has been submitted and is queued behind other
     * submitted builds.</p> </li> <li> <p> <code>STOPPED</code>: The build phase
     * stopped.</p> </li> <li> <p> <code>SUCCEEDED</code>: The build phase
     * succeeded.</p> </li> <li> <p> <code>TIMED_OUT</code>: The build phase timed
     * out.</p> </li> </ul>
     */
    inline BuildPhase& WithPhaseStatus(StatusType&& value) { SetPhaseStatus(std::move(value)); return *this;}


    /**
     * <p>When the build phase started, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>When the build phase started, expressed in Unix time format.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>When the build phase started, expressed in Unix time format.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>When the build phase started, expressed in Unix time format.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>When the build phase started, expressed in Unix time format.</p>
     */
    inline BuildPhase& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>When the build phase started, expressed in Unix time format.</p>
     */
    inline BuildPhase& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>When the build phase ended, expressed in Unix time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>When the build phase ended, expressed in Unix time format.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>When the build phase ended, expressed in Unix time format.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>When the build phase ended, expressed in Unix time format.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>When the build phase ended, expressed in Unix time format.</p>
     */
    inline BuildPhase& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>When the build phase ended, expressed in Unix time format.</p>
     */
    inline BuildPhase& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}


    /**
     * <p>How long, in seconds, between the starting and ending times of the build's
     * phase.</p>
     */
    inline long long GetDurationInSeconds() const{ return m_durationInSeconds; }

    /**
     * <p>How long, in seconds, between the starting and ending times of the build's
     * phase.</p>
     */
    inline bool DurationInSecondsHasBeenSet() const { return m_durationInSecondsHasBeenSet; }

    /**
     * <p>How long, in seconds, between the starting and ending times of the build's
     * phase.</p>
     */
    inline void SetDurationInSeconds(long long value) { m_durationInSecondsHasBeenSet = true; m_durationInSeconds = value; }

    /**
     * <p>How long, in seconds, between the starting and ending times of the build's
     * phase.</p>
     */
    inline BuildPhase& WithDurationInSeconds(long long value) { SetDurationInSeconds(value); return *this;}


    /**
     * <p>Additional information about a build phase, especially to help troubleshoot a
     * failed build.</p>
     */
    inline const Aws::Vector<PhaseContext>& GetContexts() const{ return m_contexts; }

    /**
     * <p>Additional information about a build phase, especially to help troubleshoot a
     * failed build.</p>
     */
    inline bool ContextsHasBeenSet() const { return m_contextsHasBeenSet; }

    /**
     * <p>Additional information about a build phase, especially to help troubleshoot a
     * failed build.</p>
     */
    inline void SetContexts(const Aws::Vector<PhaseContext>& value) { m_contextsHasBeenSet = true; m_contexts = value; }

    /**
     * <p>Additional information about a build phase, especially to help troubleshoot a
     * failed build.</p>
     */
    inline void SetContexts(Aws::Vector<PhaseContext>&& value) { m_contextsHasBeenSet = true; m_contexts = std::move(value); }

    /**
     * <p>Additional information about a build phase, especially to help troubleshoot a
     * failed build.</p>
     */
    inline BuildPhase& WithContexts(const Aws::Vector<PhaseContext>& value) { SetContexts(value); return *this;}

    /**
     * <p>Additional information about a build phase, especially to help troubleshoot a
     * failed build.</p>
     */
    inline BuildPhase& WithContexts(Aws::Vector<PhaseContext>&& value) { SetContexts(std::move(value)); return *this;}

    /**
     * <p>Additional information about a build phase, especially to help troubleshoot a
     * failed build.</p>
     */
    inline BuildPhase& AddContexts(const PhaseContext& value) { m_contextsHasBeenSet = true; m_contexts.push_back(value); return *this; }

    /**
     * <p>Additional information about a build phase, especially to help troubleshoot a
     * failed build.</p>
     */
    inline BuildPhase& AddContexts(PhaseContext&& value) { m_contextsHasBeenSet = true; m_contexts.push_back(std::move(value)); return *this; }

  private:

    BuildPhaseType m_phaseType;
    bool m_phaseTypeHasBeenSet;

    StatusType m_phaseStatus;
    bool m_phaseStatusHasBeenSet;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet;

    long long m_durationInSeconds;
    bool m_durationInSecondsHasBeenSet;

    Aws::Vector<PhaseContext> m_contexts;
    bool m_contextsHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
