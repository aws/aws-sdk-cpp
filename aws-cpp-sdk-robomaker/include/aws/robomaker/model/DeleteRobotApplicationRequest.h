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
  class AWS_ROBOMAKER_API DeleteRobotApplicationRequest : public RoboMakerRequest
  {
  public:
    DeleteRobotApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteRobotApplication"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the the robot application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The Amazon Resource Name (ARN) of the the robot application.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the the robot application.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the the robot application.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the the robot application.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the the robot application.</p>
     */
    inline DeleteRobotApplicationRequest& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the the robot application.</p>
     */
    inline DeleteRobotApplicationRequest& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the the robot application.</p>
     */
    inline DeleteRobotApplicationRequest& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The version of the robot application to delete.</p>
     */
    inline const Aws::String& GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p>The version of the robot application to delete.</p>
     */
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }

    /**
     * <p>The version of the robot application to delete.</p>
     */
    inline void SetApplicationVersion(const Aws::String& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }

    /**
     * <p>The version of the robot application to delete.</p>
     */
    inline void SetApplicationVersion(Aws::String&& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = std::move(value); }

    /**
     * <p>The version of the robot application to delete.</p>
     */
    inline void SetApplicationVersion(const char* value) { m_applicationVersionHasBeenSet = true; m_applicationVersion.assign(value); }

    /**
     * <p>The version of the robot application to delete.</p>
     */
    inline DeleteRobotApplicationRequest& WithApplicationVersion(const Aws::String& value) { SetApplicationVersion(value); return *this;}

    /**
     * <p>The version of the robot application to delete.</p>
     */
    inline DeleteRobotApplicationRequest& WithApplicationVersion(Aws::String&& value) { SetApplicationVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the robot application to delete.</p>
     */
    inline DeleteRobotApplicationRequest& WithApplicationVersion(const char* value) { SetApplicationVersion(value); return *this;}

  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet;

    Aws::String m_applicationVersion;
    bool m_applicationVersionHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
