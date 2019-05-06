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
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class AWS_ROBOMAKER_API DeleteRobotRequest : public RoboMakerRequest
  {
  public:
    DeleteRobotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRobot"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline const Aws::String& GetRobot() const{ return m_robot; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline bool RobotHasBeenSet() const { return m_robotHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetRobot(const Aws::String& value) { m_robotHasBeenSet = true; m_robot = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetRobot(Aws::String&& value) { m_robotHasBeenSet = true; m_robot = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetRobot(const char* value) { m_robotHasBeenSet = true; m_robot.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline DeleteRobotRequest& WithRobot(const Aws::String& value) { SetRobot(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline DeleteRobotRequest& WithRobot(Aws::String&& value) { SetRobot(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline DeleteRobotRequest& WithRobot(const char* value) { SetRobot(value); return *this;}

  private:

    Aws::String m_robot;
    bool m_robotHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
