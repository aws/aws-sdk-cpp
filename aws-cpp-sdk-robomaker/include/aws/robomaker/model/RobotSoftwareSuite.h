/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/model/RobotSoftwareSuiteType.h>
#include <aws/robomaker/model/RobotSoftwareSuiteVersionType.h>
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
   * <p>Information about a robot software suite (ROS distribution).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/RobotSoftwareSuite">AWS
   * API Reference</a></p>
   */
  class RobotSoftwareSuite
  {
  public:
    AWS_ROBOMAKER_API RobotSoftwareSuite();
    AWS_ROBOMAKER_API RobotSoftwareSuite(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API RobotSoftwareSuite& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ROBOMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the robot software suite (ROS distribution).</p>
     */
    inline const RobotSoftwareSuiteType& GetName() const{ return m_name; }

    /**
     * <p>The name of the robot software suite (ROS distribution).</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the robot software suite (ROS distribution).</p>
     */
    inline void SetName(const RobotSoftwareSuiteType& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the robot software suite (ROS distribution).</p>
     */
    inline void SetName(RobotSoftwareSuiteType&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the robot software suite (ROS distribution).</p>
     */
    inline RobotSoftwareSuite& WithName(const RobotSoftwareSuiteType& value) { SetName(value); return *this;}

    /**
     * <p>The name of the robot software suite (ROS distribution).</p>
     */
    inline RobotSoftwareSuite& WithName(RobotSoftwareSuiteType&& value) { SetName(std::move(value)); return *this;}


    /**
     * <p>The version of the robot software suite (ROS distribution).</p>
     */
    inline const RobotSoftwareSuiteVersionType& GetVersion() const{ return m_version; }

    /**
     * <p>The version of the robot software suite (ROS distribution).</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the robot software suite (ROS distribution).</p>
     */
    inline void SetVersion(const RobotSoftwareSuiteVersionType& value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the robot software suite (ROS distribution).</p>
     */
    inline void SetVersion(RobotSoftwareSuiteVersionType&& value) { m_versionHasBeenSet = true; m_version = std::move(value); }

    /**
     * <p>The version of the robot software suite (ROS distribution).</p>
     */
    inline RobotSoftwareSuite& WithVersion(const RobotSoftwareSuiteVersionType& value) { SetVersion(value); return *this;}

    /**
     * <p>The version of the robot software suite (ROS distribution).</p>
     */
    inline RobotSoftwareSuite& WithVersion(RobotSoftwareSuiteVersionType&& value) { SetVersion(std::move(value)); return *this;}

  private:

    RobotSoftwareSuiteType m_name;
    bool m_nameHasBeenSet = false;

    RobotSoftwareSuiteVersionType m_version;
    bool m_versionHasBeenSet = false;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
