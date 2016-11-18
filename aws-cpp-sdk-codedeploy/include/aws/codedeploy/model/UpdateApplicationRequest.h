/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of an update application operation.</p>
   */
  class AWS_CODEDEPLOY_API UpdateApplicationRequest : public CodeDeployRequest
  {
  public:
    UpdateApplicationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline UpdateApplicationRequest& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline UpdateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline UpdateApplicationRequest& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}

    /**
     * <p>The new name to give the application.</p>
     */
    inline const Aws::String& GetNewApplicationName() const{ return m_newApplicationName; }

    /**
     * <p>The new name to give the application.</p>
     */
    inline void SetNewApplicationName(const Aws::String& value) { m_newApplicationNameHasBeenSet = true; m_newApplicationName = value; }

    /**
     * <p>The new name to give the application.</p>
     */
    inline void SetNewApplicationName(Aws::String&& value) { m_newApplicationNameHasBeenSet = true; m_newApplicationName = value; }

    /**
     * <p>The new name to give the application.</p>
     */
    inline void SetNewApplicationName(const char* value) { m_newApplicationNameHasBeenSet = true; m_newApplicationName.assign(value); }

    /**
     * <p>The new name to give the application.</p>
     */
    inline UpdateApplicationRequest& WithNewApplicationName(const Aws::String& value) { SetNewApplicationName(value); return *this;}

    /**
     * <p>The new name to give the application.</p>
     */
    inline UpdateApplicationRequest& WithNewApplicationName(Aws::String&& value) { SetNewApplicationName(value); return *this;}

    /**
     * <p>The new name to give the application.</p>
     */
    inline UpdateApplicationRequest& WithNewApplicationName(const char* value) { SetNewApplicationName(value); return *this;}

  private:
    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;
    Aws::String m_newApplicationName;
    bool m_newApplicationNameHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
