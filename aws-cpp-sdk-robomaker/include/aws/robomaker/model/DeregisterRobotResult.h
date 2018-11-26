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
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace RoboMaker
{
namespace Model
{
  class AWS_ROBOMAKER_API DeregisterRobotResult
  {
  public:
    DeregisterRobotResult();
    DeregisterRobotResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeregisterRobotResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline const Aws::String& GetFleet() const{ return m_fleet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(const Aws::String& value) { m_fleet = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(Aws::String&& value) { m_fleet = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline void SetFleet(const char* value) { m_fleet.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DeregisterRobotResult& WithFleet(const Aws::String& value) { SetFleet(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DeregisterRobotResult& WithFleet(Aws::String&& value) { SetFleet(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the fleet.</p>
     */
    inline DeregisterRobotResult& WithFleet(const char* value) { SetFleet(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline const Aws::String& GetRobot() const{ return m_robot; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetRobot(const Aws::String& value) { m_robot = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetRobot(Aws::String&& value) { m_robot = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline void SetRobot(const char* value) { m_robot.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline DeregisterRobotResult& WithRobot(const Aws::String& value) { SetRobot(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline DeregisterRobotResult& WithRobot(Aws::String&& value) { SetRobot(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot.</p>
     */
    inline DeregisterRobotResult& WithRobot(const char* value) { SetRobot(value); return *this;}

  private:

    Aws::String m_fleet;

    Aws::String m_robot;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
