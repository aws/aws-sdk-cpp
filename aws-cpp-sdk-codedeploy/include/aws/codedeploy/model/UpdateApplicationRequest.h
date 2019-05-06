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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of an UpdateApplication operation.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/UpdateApplicationInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API UpdateApplicationRequest : public CodeDeployRequest
  {
  public:
    UpdateApplicationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApplication"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The current name of the application you want to change.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

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
    inline UpdateApplicationRequest& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

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
    inline bool NewApplicationNameHasBeenSet() const { return m_newApplicationNameHasBeenSet; }

    /**
     * <p>The new name to give the application.</p>
     */
    inline void SetNewApplicationName(const Aws::String& value) { m_newApplicationNameHasBeenSet = true; m_newApplicationName = value; }

    /**
     * <p>The new name to give the application.</p>
     */
    inline void SetNewApplicationName(Aws::String&& value) { m_newApplicationNameHasBeenSet = true; m_newApplicationName = std::move(value); }

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
    inline UpdateApplicationRequest& WithNewApplicationName(Aws::String&& value) { SetNewApplicationName(std::move(value)); return *this;}

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
