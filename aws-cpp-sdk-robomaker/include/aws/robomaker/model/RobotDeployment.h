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
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/RobotStatus.h>
#include <aws/robomaker/model/ProgressDetail.h>
#include <aws/robomaker/model/DeploymentJobErrorCode.h>
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
   * <p>Information about a robot deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RobotDeployment">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API RobotDeployment
  {
  public:
    RobotDeployment();
    RobotDeployment(Aws::Utils::Json::JsonView jsonValue);
    RobotDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The robot deployment Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The robot deployment Amazon Resource Name (ARN).</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The robot deployment Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The robot deployment Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The robot deployment Amazon Resource Name (ARN).</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The robot deployment Amazon Resource Name (ARN).</p>
     */
    inline RobotDeployment& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The robot deployment Amazon Resource Name (ARN).</p>
     */
    inline RobotDeployment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The robot deployment Amazon Resource Name (ARN).</p>
     */
    inline RobotDeployment& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the deployment was
     * started.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentStartTime() const{ return m_deploymentStartTime; }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment was
     * started.</p>
     */
    inline bool DeploymentStartTimeHasBeenSet() const { return m_deploymentStartTimeHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment was
     * started.</p>
     */
    inline void SetDeploymentStartTime(const Aws::Utils::DateTime& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment was
     * started.</p>
     */
    inline void SetDeploymentStartTime(Aws::Utils::DateTime&& value) { m_deploymentStartTimeHasBeenSet = true; m_deploymentStartTime = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment was
     * started.</p>
     */
    inline RobotDeployment& WithDeploymentStartTime(const Aws::Utils::DateTime& value) { SetDeploymentStartTime(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment was
     * started.</p>
     */
    inline RobotDeployment& WithDeploymentStartTime(Aws::Utils::DateTime&& value) { SetDeploymentStartTime(std::move(value)); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the deployment finished.</p>
     */
    inline const Aws::Utils::DateTime& GetDeploymentFinishTime() const{ return m_deploymentFinishTime; }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment finished.</p>
     */
    inline bool DeploymentFinishTimeHasBeenSet() const { return m_deploymentFinishTimeHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment finished.</p>
     */
    inline void SetDeploymentFinishTime(const Aws::Utils::DateTime& value) { m_deploymentFinishTimeHasBeenSet = true; m_deploymentFinishTime = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment finished.</p>
     */
    inline void SetDeploymentFinishTime(Aws::Utils::DateTime&& value) { m_deploymentFinishTimeHasBeenSet = true; m_deploymentFinishTime = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment finished.</p>
     */
    inline RobotDeployment& WithDeploymentFinishTime(const Aws::Utils::DateTime& value) { SetDeploymentFinishTime(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the deployment finished.</p>
     */
    inline RobotDeployment& WithDeploymentFinishTime(Aws::Utils::DateTime&& value) { SetDeploymentFinishTime(std::move(value)); return *this;}


    /**
     * <p>The status of the robot deployment.</p>
     */
    inline const RobotStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the robot deployment.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the robot deployment.</p>
     */
    inline void SetStatus(const RobotStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the robot deployment.</p>
     */
    inline void SetStatus(RobotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the robot deployment.</p>
     */
    inline RobotDeployment& WithStatus(const RobotStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the robot deployment.</p>
     */
    inline RobotDeployment& WithStatus(RobotStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>Information about how the deployment is progressing.</p>
     */
    inline const ProgressDetail& GetProgressDetail() const{ return m_progressDetail; }

    /**
     * <p>Information about how the deployment is progressing.</p>
     */
    inline bool ProgressDetailHasBeenSet() const { return m_progressDetailHasBeenSet; }

    /**
     * <p>Information about how the deployment is progressing.</p>
     */
    inline void SetProgressDetail(const ProgressDetail& value) { m_progressDetailHasBeenSet = true; m_progressDetail = value; }

    /**
     * <p>Information about how the deployment is progressing.</p>
     */
    inline void SetProgressDetail(ProgressDetail&& value) { m_progressDetailHasBeenSet = true; m_progressDetail = std::move(value); }

    /**
     * <p>Information about how the deployment is progressing.</p>
     */
    inline RobotDeployment& WithProgressDetail(const ProgressDetail& value) { SetProgressDetail(value); return *this;}

    /**
     * <p>Information about how the deployment is progressing.</p>
     */
    inline RobotDeployment& WithProgressDetail(ProgressDetail&& value) { SetProgressDetail(std::move(value)); return *this;}


    /**
     * <p>A short description of the reason why the robot deployment failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>A short description of the reason why the robot deployment failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>A short description of the reason why the robot deployment failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>A short description of the reason why the robot deployment failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>A short description of the reason why the robot deployment failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>A short description of the reason why the robot deployment failed.</p>
     */
    inline RobotDeployment& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>A short description of the reason why the robot deployment failed.</p>
     */
    inline RobotDeployment& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>A short description of the reason why the robot deployment failed.</p>
     */
    inline RobotDeployment& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The robot deployment failure code.</p>
     */
    inline const DeploymentJobErrorCode& GetFailureCode() const{ return m_failureCode; }

    /**
     * <p>The robot deployment failure code.</p>
     */
    inline bool FailureCodeHasBeenSet() const { return m_failureCodeHasBeenSet; }

    /**
     * <p>The robot deployment failure code.</p>
     */
    inline void SetFailureCode(const DeploymentJobErrorCode& value) { m_failureCodeHasBeenSet = true; m_failureCode = value; }

    /**
     * <p>The robot deployment failure code.</p>
     */
    inline void SetFailureCode(DeploymentJobErrorCode&& value) { m_failureCodeHasBeenSet = true; m_failureCode = std::move(value); }

    /**
     * <p>The robot deployment failure code.</p>
     */
    inline RobotDeployment& WithFailureCode(const DeploymentJobErrorCode& value) { SetFailureCode(value); return *this;}

    /**
     * <p>The robot deployment failure code.</p>
     */
    inline RobotDeployment& WithFailureCode(DeploymentJobErrorCode&& value) { SetFailureCode(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::Utils::DateTime m_deploymentStartTime;
    bool m_deploymentStartTimeHasBeenSet;

    Aws::Utils::DateTime m_deploymentFinishTime;
    bool m_deploymentFinishTimeHasBeenSet;

    RobotStatus m_status;
    bool m_statusHasBeenSet;

    ProgressDetail m_progressDetail;
    bool m_progressDetailHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;

    DeploymentJobErrorCode m_failureCode;
    bool m_failureCodeHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
