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
#include <aws/robomaker/model/Architecture.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class AWS_ROBOMAKER_API CreateRobotRequest : public RoboMakerRequest
  {
  public:
    CreateRobotRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRobot"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name for the robot.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name for the robot.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name for the robot.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name for the robot.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name for the robot.</p>
     */
    inline CreateRobotRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name for the robot.</p>
     */
    inline CreateRobotRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name for the robot.</p>
     */
    inline CreateRobotRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The target architecture of the robot.</p>
     */
    inline const Architecture& GetArchitecture() const{ return m_architecture; }

    /**
     * <p>The target architecture of the robot.</p>
     */
    inline void SetArchitecture(const Architecture& value) { m_architectureHasBeenSet = true; m_architecture = value; }

    /**
     * <p>The target architecture of the robot.</p>
     */
    inline void SetArchitecture(Architecture&& value) { m_architectureHasBeenSet = true; m_architecture = std::move(value); }

    /**
     * <p>The target architecture of the robot.</p>
     */
    inline CreateRobotRequest& WithArchitecture(const Architecture& value) { SetArchitecture(value); return *this;}

    /**
     * <p>The target architecture of the robot.</p>
     */
    inline CreateRobotRequest& WithArchitecture(Architecture&& value) { SetArchitecture(std::move(value)); return *this;}


    /**
     * <p>The Greengrass group id.</p>
     */
    inline const Aws::String& GetGreengrassGroupId() const{ return m_greengrassGroupId; }

    /**
     * <p>The Greengrass group id.</p>
     */
    inline void SetGreengrassGroupId(const Aws::String& value) { m_greengrassGroupIdHasBeenSet = true; m_greengrassGroupId = value; }

    /**
     * <p>The Greengrass group id.</p>
     */
    inline void SetGreengrassGroupId(Aws::String&& value) { m_greengrassGroupIdHasBeenSet = true; m_greengrassGroupId = std::move(value); }

    /**
     * <p>The Greengrass group id.</p>
     */
    inline void SetGreengrassGroupId(const char* value) { m_greengrassGroupIdHasBeenSet = true; m_greengrassGroupId.assign(value); }

    /**
     * <p>The Greengrass group id.</p>
     */
    inline CreateRobotRequest& WithGreengrassGroupId(const Aws::String& value) { SetGreengrassGroupId(value); return *this;}

    /**
     * <p>The Greengrass group id.</p>
     */
    inline CreateRobotRequest& WithGreengrassGroupId(Aws::String&& value) { SetGreengrassGroupId(std::move(value)); return *this;}

    /**
     * <p>The Greengrass group id.</p>
     */
    inline CreateRobotRequest& WithGreengrassGroupId(const char* value) { SetGreengrassGroupId(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Architecture m_architecture;
    bool m_architectureHasBeenSet;

    Aws::String m_greengrassGroupId;
    bool m_greengrassGroupIdHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
