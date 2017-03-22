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
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ProjectArtifacts.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/EnvironmentVariable.h>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class AWS_CODEBUILD_API StartBuildRequest : public CodeBuildRequest
  {
  public:
    StartBuildRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the build project to start running a build.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the build project to start running a build.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the build project to start running a build.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the build project to start running a build.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the build project to start running a build.</p>
     */
    inline StartBuildRequest& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the build project to start running a build.</p>
     */
    inline StartBuildRequest& WithProjectName(Aws::String&& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the build project to start running a build.</p>
     */
    inline StartBuildRequest& WithProjectName(const char* value) { SetProjectName(value); return *this;}

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version will be used. If specified, must be one of:</p>
     * <ul> <li> <p>For AWS CodeCommit or GitHub: the commit ID to use.</p> </li> <li>
     * <p>For Amazon Simple Storage Service (Amazon S3): the version ID of the object
     * representing the build input ZIP file to use.</p> </li> </ul>
     */
    inline const Aws::String& GetSourceVersion() const{ return m_sourceVersion; }

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version will be used. If specified, must be one of:</p>
     * <ul> <li> <p>For AWS CodeCommit or GitHub: the commit ID to use.</p> </li> <li>
     * <p>For Amazon Simple Storage Service (Amazon S3): the version ID of the object
     * representing the build input ZIP file to use.</p> </li> </ul>
     */
    inline void SetSourceVersion(const Aws::String& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version will be used. If specified, must be one of:</p>
     * <ul> <li> <p>For AWS CodeCommit or GitHub: the commit ID to use.</p> </li> <li>
     * <p>For Amazon Simple Storage Service (Amazon S3): the version ID of the object
     * representing the build input ZIP file to use.</p> </li> </ul>
     */
    inline void SetSourceVersion(Aws::String&& value) { m_sourceVersionHasBeenSet = true; m_sourceVersion = value; }

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version will be used. If specified, must be one of:</p>
     * <ul> <li> <p>For AWS CodeCommit or GitHub: the commit ID to use.</p> </li> <li>
     * <p>For Amazon Simple Storage Service (Amazon S3): the version ID of the object
     * representing the build input ZIP file to use.</p> </li> </ul>
     */
    inline void SetSourceVersion(const char* value) { m_sourceVersionHasBeenSet = true; m_sourceVersion.assign(value); }

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version will be used. If specified, must be one of:</p>
     * <ul> <li> <p>For AWS CodeCommit or GitHub: the commit ID to use.</p> </li> <li>
     * <p>For Amazon Simple Storage Service (Amazon S3): the version ID of the object
     * representing the build input ZIP file to use.</p> </li> </ul>
     */
    inline StartBuildRequest& WithSourceVersion(const Aws::String& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version will be used. If specified, must be one of:</p>
     * <ul> <li> <p>For AWS CodeCommit or GitHub: the commit ID to use.</p> </li> <li>
     * <p>For Amazon Simple Storage Service (Amazon S3): the version ID of the object
     * representing the build input ZIP file to use.</p> </li> </ul>
     */
    inline StartBuildRequest& WithSourceVersion(Aws::String&& value) { SetSourceVersion(value); return *this;}

    /**
     * <p>A version of the build input to be built, for this build only. If not
     * specified, the latest version will be used. If specified, must be one of:</p>
     * <ul> <li> <p>For AWS CodeCommit or GitHub: the commit ID to use.</p> </li> <li>
     * <p>For Amazon Simple Storage Service (Amazon S3): the version ID of the object
     * representing the build input ZIP file to use.</p> </li> </ul>
     */
    inline StartBuildRequest& WithSourceVersion(const char* value) { SetSourceVersion(value); return *this;}

    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline const ProjectArtifacts& GetArtifactsOverride() const{ return m_artifactsOverride; }

    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline void SetArtifactsOverride(const ProjectArtifacts& value) { m_artifactsOverrideHasBeenSet = true; m_artifactsOverride = value; }

    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline void SetArtifactsOverride(ProjectArtifacts&& value) { m_artifactsOverrideHasBeenSet = true; m_artifactsOverride = value; }

    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline StartBuildRequest& WithArtifactsOverride(const ProjectArtifacts& value) { SetArtifactsOverride(value); return *this;}

    /**
     * <p>Build output artifact settings that override, for this build only, the latest
     * ones already defined in the build project.</p>
     */
    inline StartBuildRequest& WithArtifactsOverride(ProjectArtifacts&& value) { SetArtifactsOverride(value); return *this;}

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariablesOverride() const{ return m_environmentVariablesOverride; }

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline void SetEnvironmentVariablesOverride(const Aws::Vector<EnvironmentVariable>& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride = value; }

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline void SetEnvironmentVariablesOverride(Aws::Vector<EnvironmentVariable>&& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride = value; }

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline StartBuildRequest& WithEnvironmentVariablesOverride(const Aws::Vector<EnvironmentVariable>& value) { SetEnvironmentVariablesOverride(value); return *this;}

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline StartBuildRequest& WithEnvironmentVariablesOverride(Aws::Vector<EnvironmentVariable>&& value) { SetEnvironmentVariablesOverride(value); return *this;}

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline StartBuildRequest& AddEnvironmentVariablesOverride(const EnvironmentVariable& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride.push_back(value); return *this; }

    /**
     * <p>A set of environment variables that overrides, for this build only, the
     * latest ones already defined in the build project.</p>
     */
    inline StartBuildRequest& AddEnvironmentVariablesOverride(EnvironmentVariable&& value) { m_environmentVariablesOverrideHasBeenSet = true; m_environmentVariablesOverride.push_back(value); return *this; }

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline const Aws::String& GetBuildspecOverride() const{ return m_buildspecOverride; }

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline void SetBuildspecOverride(const Aws::String& value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride = value; }

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline void SetBuildspecOverride(Aws::String&& value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride = value; }

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline void SetBuildspecOverride(const char* value) { m_buildspecOverrideHasBeenSet = true; m_buildspecOverride.assign(value); }

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline StartBuildRequest& WithBuildspecOverride(const Aws::String& value) { SetBuildspecOverride(value); return *this;}

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline StartBuildRequest& WithBuildspecOverride(Aws::String&& value) { SetBuildspecOverride(value); return *this;}

    /**
     * <p>A build spec declaration that overrides, for this build only, the latest one
     * already defined in the build project.</p>
     */
    inline StartBuildRequest& WithBuildspecOverride(const char* value) { SetBuildspecOverride(value); return *this;}

    /**
     * <p>The number of build timeout minutes, from 5 to 480 (8 hours), that overrides,
     * for this build only, the latest setting already defined in the build
     * project.</p>
     */
    inline int GetTimeoutInMinutesOverride() const{ return m_timeoutInMinutesOverride; }

    /**
     * <p>The number of build timeout minutes, from 5 to 480 (8 hours), that overrides,
     * for this build only, the latest setting already defined in the build
     * project.</p>
     */
    inline void SetTimeoutInMinutesOverride(int value) { m_timeoutInMinutesOverrideHasBeenSet = true; m_timeoutInMinutesOverride = value; }

    /**
     * <p>The number of build timeout minutes, from 5 to 480 (8 hours), that overrides,
     * for this build only, the latest setting already defined in the build
     * project.</p>
     */
    inline StartBuildRequest& WithTimeoutInMinutesOverride(int value) { SetTimeoutInMinutesOverride(value); return *this;}

  private:
    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;
    Aws::String m_sourceVersion;
    bool m_sourceVersionHasBeenSet;
    ProjectArtifacts m_artifactsOverride;
    bool m_artifactsOverrideHasBeenSet;
    Aws::Vector<EnvironmentVariable> m_environmentVariablesOverride;
    bool m_environmentVariablesOverrideHasBeenSet;
    Aws::String m_buildspecOverride;
    bool m_buildspecOverrideHasBeenSet;
    int m_timeoutInMinutesOverride;
    bool m_timeoutInMinutesOverrideHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
