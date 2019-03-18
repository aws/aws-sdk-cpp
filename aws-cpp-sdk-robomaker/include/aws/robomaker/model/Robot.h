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
#include <aws/robomaker/model/RobotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/robomaker/model/Architecture.h>
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
   * <p>Information about a robot.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/Robot">AWS API
   * Reference</a></p>
   */
  class AWS_ROBOMAKER_API Robot
  {
  public:
    Robot();
    Robot(Aws::Utils::Json::JsonView jsonValue);
    Robot& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline Robot& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline Robot& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline Robot& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The name of the robot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the robot.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the robot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the robot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the robot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the robot.</p>
     */
    inline Robot& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the robot.</p>
     */
    inline Robot& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the robot.</p>
     */
    inline Robot& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleetArn() const{ return m_fleetArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline bool FleetArnHasBeenSet() const { return m_fleetArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(const Aws::String& value) { m_fleetArnHasBeenSet = true; m_fleetArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(Aws::String&& value) { m_fleetArnHasBeenSet = true; m_fleetArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleetArn(const char* value) { m_fleetArnHasBeenSet = true; m_fleetArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline Robot& WithFleetArn(const Aws::String& value) { SetFleetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline Robot& WithFleetArn(Aws::String&& value) { SetFleetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline Robot& WithFleetArn(const char* value) { SetFleetArn(value); return *this;}


    /**
     * <p>The status of the robot.</p>
     */
    inline const RobotStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the robot.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the robot.</p>
     */
    inline void SetStatus(const RobotStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the robot.</p>
     */
    inline void SetStatus(RobotStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the robot.</p>
     */
    inline Robot& WithStatus(const RobotStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the robot.</p>
     */
    inline Robot& WithStatus(RobotStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The Greengrass group associated with the robot.</p>
     */
    inline const Aws::String& GetGreenGrassGroupId() const{ return m_greenGrassGroupId; }

    /**
     * <p>The Greengrass group associated with the robot.</p>
     */
    inline bool GreenGrassGroupIdHasBeenSet() const { return m_greenGrassGroupIdHasBeenSet; }

    /**
     * <p>The Greengrass group associated with the robot.</p>
     */
    inline void SetGreenGrassGroupId(const Aws::String& value) { m_greenGrassGroupIdHasBeenSet = true; m_greenGrassGroupId = value; }

    /**
     * <p>The Greengrass group associated with the robot.</p>
     */
    inline void SetGreenGrassGroupId(Aws::String&& value) { m_greenGrassGroupIdHasBeenSet = true; m_greenGrassGroupId = std::move(value); }

    /**
     * <p>The Greengrass group associated with the robot.</p>
     */
    inline void SetGreenGrassGroupId(const char* value) { m_greenGrassGroupIdHasBeenSet = true; m_greenGrassGroupId.assign(value); }

    /**
     * <p>The Greengrass group associated with the robot.</p>
     */
    inline Robot& WithGreenGrassGroupId(const Aws::String& value) { SetGreenGrassGroupId(value); return *this;}

    /**
     * <p>The Greengrass group associated with the robot.</p>
     */
    inline Robot& WithGreenGrassGroupId(Aws::String&& value) { SetGreenGrassGroupId(std::move(value)); return *this;}

    /**
     * <p>The Greengrass group associated with the robot.</p>
     */
    inline Robot& WithGreenGrassGroupId(const char* value) { SetGreenGrassGroupId(value); return *this;}


    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline Robot& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time, in milliseconds since the epoch, when the robot was created.</p>
     */
    inline Robot& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The architecture of the robot.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The architecture of the robot.</p>
     */
    inline bool ArchitectureHasBeenSet() const { return m_architectureHasBeenSet; }

    /**
     * <p>The architecture of the robot.</p>
     */
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The architecture of the robot.</p>
     */
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The architecture of the robot.</p>
     */
    inline Robot& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The architecture of the robot.</p>
     */
    inline Robot& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline const Aws::String& GetLastDeploymentJob() const{ return m_lastDeploymentJob; }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline bool LastDeploymentJobHasBeenSet() const { return m_lastDeploymentJobHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline void SetLastDeploymentJob(const Aws::String& value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline void SetLastDeploymentJob(Aws::String&& value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline void SetLastDeploymentJob(const char* value) { m_lastDeploymentJobHasBeenSet = true; m_lastDeploymentJob.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline Robot& WithLastDeploymentJob(const Aws::String& value) { SetLastDeploymentJob(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline Robot& WithLastDeploymentJob(Aws::String&& value) { SetLastDeploymentJob(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the last deployment job.</p>
     */
    inline Robot& WithLastDeploymentJob(const char* value) { SetLastDeploymentJob(value); return *this;}


    /**
     * <p>The time of the last deployment.</p>
     */
    inline const Aws::Utils::DateTime& GetLastDeploymentTime() const{ return m_lastDeploymentTime; }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline bool LastDeploymentTimeHasBeenSet() const { return m_lastDeploymentTimeHasBeenSet; }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline void SetLastDeploymentTime(const Aws::Utils::DateTime& value) { m_lastDeploymentTimeHasBeenSet = true; m_lastDeploymentTime = value; }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline void SetLastDeploymentTime(Aws::Utils::DateTime&& value) { m_lastDeploymentTimeHasBeenSet = true; m_lastDeploymentTime = std::move(value); }

    /**
     * <p>The time of the last deployment.</p>
     */
    inline Robot& WithLastDeploymentTime(const Aws::Utils::DateTime& value) { SetLastDeploymentTime(value); return *this;}

    /**
     * <p>The time of the last deployment.</p>
     */
    inline Robot& WithLastDeploymentTime(Aws::Utils::DateTime&& value) { SetLastDeploymentTime(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet;

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_fleetArn;
    bool m_fleetArnHasBeenSet;

    RobotStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_greenGrassGroupId;
    bool m_greenGrassGroupIdHasBeenSet;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet;

    Architecture m_architecture;
    bool m_architectureHasBeenSet;

    Aws::String m_lastDeploymentJob;
    bool m_lastDeploymentJobHasBeenSet;

    Aws::Utils::DateTime m_lastDeploymentTime;
    bool m_lastDeploymentTimeHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
