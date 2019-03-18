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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codedeploy/model/ComputePlatform.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about an application.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/ApplicationInfo">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API ApplicationInfo
  {
  public:
    ApplicationInfo();
    ApplicationInfo(Aws::Utils::Json::JsonView jsonValue);
    ApplicationInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }

    /**
     * <p>The application ID.</p>
     */
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }

    /**
     * <p>The application ID.</p>
     */
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }

    /**
     * <p>The application ID.</p>
     */
    inline ApplicationInfo& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline ApplicationInfo& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline ApplicationInfo& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The application name.</p>
     */
    inline const Aws::String& GetApplicationName() const{ return m_applicationName; }

    /**
     * <p>The application name.</p>
     */
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const Aws::String& value) { m_applicationNameHasBeenSet = true; m_applicationName = value; }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(Aws::String&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::move(value); }

    /**
     * <p>The application name.</p>
     */
    inline void SetApplicationName(const char* value) { m_applicationNameHasBeenSet = true; m_applicationName.assign(value); }

    /**
     * <p>The application name.</p>
     */
    inline ApplicationInfo& WithApplicationName(const Aws::String& value) { SetApplicationName(value); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline ApplicationInfo& WithApplicationName(Aws::String&& value) { SetApplicationName(std::move(value)); return *this;}

    /**
     * <p>The application name.</p>
     */
    inline ApplicationInfo& WithApplicationName(const char* value) { SetApplicationName(value); return *this;}


    /**
     * <p>The time at which the application was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p>The time at which the application was created.</p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p>The time at which the application was created.</p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p>The time at which the application was created.</p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p>The time at which the application was created.</p>
     */
    inline ApplicationInfo& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p>The time at which the application was created.</p>
     */
    inline ApplicationInfo& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p>True if the user has authenticated with GitHub for the specified application.
     * Otherwise, false.</p>
     */
    inline bool GetLinkedToGitHub() const{ return m_linkedToGitHub; }

    /**
     * <p>True if the user has authenticated with GitHub for the specified application.
     * Otherwise, false.</p>
     */
    inline bool LinkedToGitHubHasBeenSet() const { return m_linkedToGitHubHasBeenSet; }

    /**
     * <p>True if the user has authenticated with GitHub for the specified application.
     * Otherwise, false.</p>
     */
    inline void SetLinkedToGitHub(bool value) { m_linkedToGitHubHasBeenSet = true; m_linkedToGitHub = value; }

    /**
     * <p>True if the user has authenticated with GitHub for the specified application.
     * Otherwise, false.</p>
     */
    inline ApplicationInfo& WithLinkedToGitHub(bool value) { SetLinkedToGitHub(value); return *this;}


    /**
     * <p>The name for a connection to a GitHub account.</p>
     */
    inline const Aws::String& GetGitHubAccountName() const{ return m_gitHubAccountName; }

    /**
     * <p>The name for a connection to a GitHub account.</p>
     */
    inline bool GitHubAccountNameHasBeenSet() const { return m_gitHubAccountNameHasBeenSet; }

    /**
     * <p>The name for a connection to a GitHub account.</p>
     */
    inline void SetGitHubAccountName(const Aws::String& value) { m_gitHubAccountNameHasBeenSet = true; m_gitHubAccountName = value; }

    /**
     * <p>The name for a connection to a GitHub account.</p>
     */
    inline void SetGitHubAccountName(Aws::String&& value) { m_gitHubAccountNameHasBeenSet = true; m_gitHubAccountName = std::move(value); }

    /**
     * <p>The name for a connection to a GitHub account.</p>
     */
    inline void SetGitHubAccountName(const char* value) { m_gitHubAccountNameHasBeenSet = true; m_gitHubAccountName.assign(value); }

    /**
     * <p>The name for a connection to a GitHub account.</p>
     */
    inline ApplicationInfo& WithGitHubAccountName(const Aws::String& value) { SetGitHubAccountName(value); return *this;}

    /**
     * <p>The name for a connection to a GitHub account.</p>
     */
    inline ApplicationInfo& WithGitHubAccountName(Aws::String&& value) { SetGitHubAccountName(std::move(value)); return *this;}

    /**
     * <p>The name for a connection to a GitHub account.</p>
     */
    inline ApplicationInfo& WithGitHubAccountName(const char* value) { SetGitHubAccountName(value); return *this;}


    /**
     * <p>The destination platform type for deployment of the application
     * (<code>Lambda</code> or <code>Server</code>).</p>
     */
    inline const ComputePlatform& GetComputePlatform() const{ return m_computePlatform; }

    /**
     * <p>The destination platform type for deployment of the application
     * (<code>Lambda</code> or <code>Server</code>).</p>
     */
    inline bool ComputePlatformHasBeenSet() const { return m_computePlatformHasBeenSet; }

    /**
     * <p>The destination platform type for deployment of the application
     * (<code>Lambda</code> or <code>Server</code>).</p>
     */
    inline void SetComputePlatform(const ComputePlatform& value) { m_computePlatformHasBeenSet = true; m_computePlatform = value; }

    /**
     * <p>The destination platform type for deployment of the application
     * (<code>Lambda</code> or <code>Server</code>).</p>
     */
    inline void SetComputePlatform(ComputePlatform&& value) { m_computePlatformHasBeenSet = true; m_computePlatform = std::move(value); }

    /**
     * <p>The destination platform type for deployment of the application
     * (<code>Lambda</code> or <code>Server</code>).</p>
     */
    inline ApplicationInfo& WithComputePlatform(const ComputePlatform& value) { SetComputePlatform(value); return *this;}

    /**
     * <p>The destination platform type for deployment of the application
     * (<code>Lambda</code> or <code>Server</code>).</p>
     */
    inline ApplicationInfo& WithComputePlatform(ComputePlatform&& value) { SetComputePlatform(std::move(value)); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet;

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet;

    bool m_linkedToGitHub;
    bool m_linkedToGitHubHasBeenSet;

    Aws::String m_gitHubAccountName;
    bool m_gitHubAccountNameHasBeenSet;

    ComputePlatform m_computePlatform;
    bool m_computePlatformHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
