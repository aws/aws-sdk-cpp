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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/SimulationJobStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/FailureBehavior.h>
#include <aws/robomaker/model/SimulationJobErrorCode.h>
#include <aws/robomaker/model/OutputLocation.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/robomaker/model/VPCConfigResponse.h>
#include <aws/robomaker/model/RobotApplicationConfig.h>
#include <aws/robomaker/model/SimulationApplicationConfig.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Information about a simulation job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/SimulationJob">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API SimulationJob
  {
  public:
    SimulationJob();
    SimulationJob(Aws::Utils::Json::JsonView jsonValue);
    SimulationJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline SimulationJob& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline SimulationJob& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the simulation job.</p>
     */
    inline SimulationJob& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the simulation job.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the simulation job.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the simulation job.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the simulation job.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the simulation job.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the simulation job.</p>
     */
    inline SimulationJob& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the simulation job.</p>
     */
    inline SimulationJob& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the simulation job.</p>
     */
    inline SimulationJob& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Status of the simulation job.</p>
     */
    inline const SimulationJobStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Status of the simulation job.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Status of the simulation job.</p>
     */
    inline void SetStatus(const SimulationJobStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Status of the simulation job.</p>
     */
    inline void SetStatus(SimulationJobStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Status of the simulation job.</p>
     */
    inline SimulationJob& WithStatus(const SimulationJobStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Status of the simulation job.</p>
     */
    inline SimulationJob& WithStatus(SimulationJobStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetLastStartedAt() const{ return m_lastStartedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline bool LastStartedAtHasBeenSet() const { return m_lastStartedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline void SetLastStartedAt(const Aws::Utils::DateTime& value) { m_lastStartedAtHasBeenSet = true; m_lastStartedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline void SetLastStartedAt(Aws::Utils::DateTime&& value) { m_lastStartedAtHasBeenSet = true; m_lastStartedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline SimulationJob& WithLastStartedAt(const Aws::Utils::DateTime& value) { SetLastStartedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * started.</p>
     */
    inline SimulationJob& WithLastStartedAt(Aws::Utils::DateTime&& value) { SetLastStartedAt(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedAt() const{ return m_lastUpdatedAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline bool LastUpdatedAtHasBeenSet() const { return m_lastUpdatedAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(const Aws::Utils::DateTime& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline void SetLastUpdatedAt(Aws::Utils::DateTime&& value) { m_lastUpdatedAtHasBeenSet = true; m_lastUpdatedAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline SimulationJob& WithLastUpdatedAt(const Aws::Utils::DateTime& value) { SetLastUpdatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the simulation job was last
     * updated.</p>
     */
    inline SimulationJob& WithLastUpdatedAt(Aws::Utils::DateTime&& value) { SetLastUpdatedAt(std::move(value)); return *this;}


    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Restart the simulation job in the same host instance.</p> </dd> <dt>Fail</dt>
     * <dd> <p>Stop the simulation job and terminate the instance.</p> </dd> </dl>
     */
    inline const FailureBehavior& GetFailureBehavior() const{ return m_failureBehavior; }

    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Restart the simulation job in the same host instance.</p> </dd> <dt>Fail</dt>
     * <dd> <p>Stop the simulation job and terminate the instance.</p> </dd> </dl>
     */
    inline bool FailureBehaviorHasBeenSet() const { return m_failureBehaviorHasBeenSet; }

    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Restart the simulation job in the same host instance.</p> </dd> <dt>Fail</dt>
     * <dd> <p>Stop the simulation job and terminate the instance.</p> </dd> </dl>
     */
    inline void SetFailureBehavior(const FailureBehavior& value) { m_failureBehaviorHasBeenSet = true; m_failureBehavior = value; }

    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Restart the simulation job in the same host instance.</p> </dd> <dt>Fail</dt>
     * <dd> <p>Stop the simulation job and terminate the instance.</p> </dd> </dl>
     */
    inline void SetFailureBehavior(FailureBehavior&& value) { m_failureBehaviorHasBeenSet = true; m_failureBehavior = std::move(value); }

    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Restart the simulation job in the same host instance.</p> </dd> <dt>Fail</dt>
     * <dd> <p>Stop the simulation job and terminate the instance.</p> </dd> </dl>
     */
    inline SimulationJob& WithFailureBehavior(const FailureBehavior& value) { SetFailureBehavior(value); return *this;}

    /**
     * <p>The failure behavior the simulation job.</p> <dl> <dt>Continue</dt> <dd>
     * <p>Restart the simulation job in the same host instance.</p> </dd> <dt>Fail</dt>
     * <dd> <p>Stop the simulation job and terminate the instance.</p> </dd> </dl>
     */
    inline SimulationJob& WithFailureBehavior(FailureBehavior&& value) { SetFailureBehavior(std::move(value)); return *this;}


    /**
     * <p>The failure code of the simulation job if it failed.</p>
     */
    inline const SimulationJobErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The failure code of the simulation job if it failed.</p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>The failure code of the simulation job if it failed.</p>
     */
    inline void SetFailureCode(const SimulationJobErrorCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The failure code of the simulation job if it failed.</p>
     */
    inline void SetFailureCode(SimulationJobErrorCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>The failure code of the simulation job if it failed.</p>
     */
    inline SimulationJob& WithFailureCode(const SimulationJobErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The failure code of the simulation job if it failed.</p>
     */
    inline SimulationJob& WithFailureCode(SimulationJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}


    /**
     * <p>The reason why the simulation job failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The reason why the simulation job failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The reason why the simulation job failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The reason why the simulation job failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The reason why the simulation job failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>The reason why the simulation job failed.</p>
     */
    inline SimulationJob& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The reason why the simulation job failed.</p>
     */
    inline SimulationJob& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>The reason why the simulation job failed.</p>
     */
    inline SimulationJob& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>A unique identifier for this <code>SimulationJob</code> request.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }

    /**
     * <p>A unique identifier for this <code>SimulationJob</code> request.</p>
     */
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }

    /**
     * <p>A unique identifier for this <code>SimulationJob</code> request.</p>
     */
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }

    /**
     * <p>A unique identifier for this <code>SimulationJob</code> request.</p>
     */
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }

    /**
     * <p>A unique identifier for this <code>SimulationJob</code> request.</p>
     */
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }

    /**
     * <p>A unique identifier for this <code>SimulationJob</code> request.</p>
     */
    inline SimulationJob& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}

    /**
     * <p>A unique identifier for this <code>SimulationJob</code> request.</p>
     */
    inline SimulationJob& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for this <code>SimulationJob</code> request.</p>
     */
    inline SimulationJob& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}


    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline const OutputLocation& GetOutputLocation() const{ return m_outputLocation; }

    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline bool OutputLocationHasBeenSet() const { return m_outputLocationHasBeenSet; }

    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline void SetOutputLocation(const OutputLocation& value) { m_outputLocationHasBeenSet = true; m_outputLocation = value; }

    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline void SetOutputLocation(OutputLocation&& value) { m_outputLocationHasBeenSet = true; m_outputLocation = std::move(value); }

    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline SimulationJob& WithOutputLocation(const OutputLocation& value) { SetOutputLocation(value); return *this;}

    /**
     * <p>Location for output files generated by the simulation job.</p>
     */
    inline SimulationJob& WithOutputLocation(OutputLocation&& value) { SetOutputLocation(std::move(value)); return *this;}


    /**
     * <p>The maximum simulation job duration in seconds. The value must be 8 days
     * (691,200 seconds) or less.</p>
     */
    inline long long GetMaxJobDurationInSeconds() const{ return m_maxJobDurationInSeconds; }

    /**
     * <p>The maximum simulation job duration in seconds. The value must be 8 days
     * (691,200 seconds) or less.</p>
     */
    inline bool MaxJobDurationInSecondsHasBeenSet() const { return m_maxJobDurationInSecondsHasBeenSet; }

    /**
     * <p>The maximum simulation job duration in seconds. The value must be 8 days
     * (691,200 seconds) or less.</p>
     */
    inline void SetMaxJobDurationInSeconds(long long value) { m_maxJobDurationInSecondsHasBeenSet = true; m_maxJobDurationInSeconds = value; }

    /**
     * <p>The maximum simulation job duration in seconds. The value must be 8 days
     * (691,200 seconds) or less.</p>
     */
    inline SimulationJob& WithMaxJobDurationInSeconds(long long value) { SetMaxJobDurationInSeconds(value); return *this;}


    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline long long GetSimulationTimeMillis() const{ return m_simulationTimeMillis; }

    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline bool SimulationTimeMillisHasBeenSet() const { return m_simulationTimeMillisHasBeenSet; }

    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline void SetSimulationTimeMillis(long long value) { m_simulationTimeMillisHasBeenSet = true; m_simulationTimeMillis = value; }

    /**
     * <p>The simulation job execution duration in milliseconds.</p>
     */
    inline SimulationJob& WithSimulationTimeMillis(long long value) { SetSimulationTimeMillis(value); return *this;}


    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf. This is how credentials
     * are passed in to your simulation job. </p>
     */
    inline const Aws::String& GetIamRole() const{ return m_iamRole; }

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf. This is how credentials
     * are passed in to your simulation job. </p>
     */
    inline bool IamRoleHasBeenSet() const { return m_iamRoleHasBeenSet; }

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf. This is how credentials
     * are passed in to your simulation job. </p>
     */
    inline void SetIamRole(const Aws::String& value) { m_iamRoleHasBeenSet = true; m_iamRole = value; }

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf. This is how credentials
     * are passed in to your simulation job. </p>
     */
    inline void SetIamRole(Aws::String&& value) { m_iamRoleHasBeenSet = true; m_iamRole = std::move(value); }

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf. This is how credentials
     * are passed in to your simulation job. </p>
     */
    inline void SetIamRole(const char* value) { m_iamRoleHasBeenSet = true; m_iamRole.assign(value); }

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf. This is how credentials
     * are passed in to your simulation job. </p>
     */
    inline SimulationJob& WithIamRole(const Aws::String& value) { SetIamRole(value); return *this;}

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf. This is how credentials
     * are passed in to your simulation job. </p>
     */
    inline SimulationJob& WithIamRole(Aws::String&& value) { SetIamRole(std::move(value)); return *this;}

    /**
     * <p>The IAM role that allows the simulation instance to call the AWS APIs that
     * are specified in its associated policies on your behalf. This is how credentials
     * are passed in to your simulation job. </p>
     */
    inline SimulationJob& WithIamRole(const char* value) { SetIamRole(value); return *this;}


    /**
     * <p>A list of robot applications.</p>
     */
    inline const Aws::Vector<RobotApplicationConfig>& GetRobotApplications() const{ return m_robotApplications; }

    /**
     * <p>A list of robot applications.</p>
     */
    inline bool RobotApplicationsHasBeenSet() const { return m_robotApplicationsHasBeenSet; }

    /**
     * <p>A list of robot applications.</p>
     */
    inline void SetRobotApplications(const Aws::Vector<RobotApplicationConfig>& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications = value; }

    /**
     * <p>A list of robot applications.</p>
     */
    inline void SetRobotApplications(Aws::Vector<RobotApplicationConfig>&& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications = std::move(value); }

    /**
     * <p>A list of robot applications.</p>
     */
    inline SimulationJob& WithRobotApplications(const Aws::Vector<RobotApplicationConfig>& value) { SetRobotApplications(value); return *this;}

    /**
     * <p>A list of robot applications.</p>
     */
    inline SimulationJob& WithRobotApplications(Aws::Vector<RobotApplicationConfig>&& value) { SetRobotApplications(std::move(value)); return *this;}

    /**
     * <p>A list of robot applications.</p>
     */
    inline SimulationJob& AddRobotApplications(const RobotApplicationConfig& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications.push_back(value); return *this; }

    /**
     * <p>A list of robot applications.</p>
     */
    inline SimulationJob& AddRobotApplications(RobotApplicationConfig&& value) { m_robotApplicationsHasBeenSet = true; m_robotApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of simulation applications.</p>
     */
    inline const Aws::Vector<SimulationApplicationConfig>& GetSimulationApplications() const{ return m_simulationApplications; }

    /**
     * <p>A list of simulation applications.</p>
     */
    inline bool SimulationApplicationsHasBeenSet() const { return m_simulationApplicationsHasBeenSet; }

    /**
     * <p>A list of simulation applications.</p>
     */
    inline void SetSimulationApplications(const Aws::Vector<SimulationApplicationConfig>& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications = value; }

    /**
     * <p>A list of simulation applications.</p>
     */
    inline void SetSimulationApplications(Aws::Vector<SimulationApplicationConfig>&& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications = std::move(value); }

    /**
     * <p>A list of simulation applications.</p>
     */
    inline SimulationJob& WithSimulationApplications(const Aws::Vector<SimulationApplicationConfig>& value) { SetSimulationApplications(value); return *this;}

    /**
     * <p>A list of simulation applications.</p>
     */
    inline SimulationJob& WithSimulationApplications(Aws::Vector<SimulationApplicationConfig>&& value) { SetSimulationApplications(std::move(value)); return *this;}

    /**
     * <p>A list of simulation applications.</p>
     */
    inline SimulationJob& AddSimulationApplications(const SimulationApplicationConfig& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications.push_back(value); return *this; }

    /**
     * <p>A list of simulation applications.</p>
     */
    inline SimulationJob& AddSimulationApplications(SimulationApplicationConfig&& value) { m_simulationApplicationsHasBeenSet = true; m_simulationApplications.push_back(std::move(value)); return *this; }


    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline SimulationJob& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline SimulationJob& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline SimulationJob& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline SimulationJob& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline SimulationJob& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline SimulationJob& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline SimulationJob& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline SimulationJob& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map that contains tag keys and tag values that are attached to the
     * simulation job.</p>
     */
    inline SimulationJob& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }


    /**
     * <p>VPC configuration information.</p>
     */
    inline const VPCConfigResponse& GetVpcConfig() const{ return m_vpcConfig; }

    /**
     * <p>VPC configuration information.</p>
     */
    inline bool VpcConfigHasBeenSet() const { return m_vpcConfigHasBeenSet; }

    /**
     * <p>VPC configuration information.</p>
     */
    inline void SetVpcConfig(const VPCConfigResponse& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = value; }

    /**
     * <p>VPC configuration information.</p>
     */
    inline void SetVpcConfig(VPCConfigResponse&& value) { m_vpcConfigHasBeenSet = true; m_vpcConfig = std::move(value); }

    /**
     * <p>VPC configuration information.</p>
     */
    inline SimulationJob& WithVpcConfig(const VPCConfigResponse& value) { SetVpcConfig(value); return *this;}

    /**
     * <p>VPC configuration information.</p>
     */
    inline SimulationJob& WithVpcConfig(VPCConfigResponse&& value) { SetVpcConfig(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    SimulationJobStatus m_status;
    bool m_statusHasBeenSet;

    Aws::Utils::DateTime m_lastStartedAt;
    bool m_lastStartedAtHasBeenSet;

    Aws::Utils::DateTime m_lastUpdatedAt;
    bool m_lastUpdatedAtHasBeenSet;

    FailureBehavior m_failureBehavior;
    bool m_failureBehaviorHasBeenSet;

    SimulationJobErrorCode m_failureCode;
    bool m_failureCodeHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet;

    OutputLocation m_outputLocation;
    bool m_outputLocationHasBeenSet;

    long long m_maxJobDurationInSeconds;
    bool m_maxJobDurationInSecondsHasBeenSet;

    long long m_simulationTimeMillis;
    bool m_simulationTimeMillisHasBeenSet;

    Aws::String m_iamRole;
    bool m_iamRoleHasBeenSet;

    Aws::Vector<RobotApplicationConfig> m_robotApplications;
    bool m_robotApplicationsHasBeenSet;

    Aws::Vector<SimulationApplicationConfig> m_simulationApplications;
    bool m_simulationApplicationsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet;

    VPCConfigResponse m_vpcConfig;
    bool m_vpcConfigHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
