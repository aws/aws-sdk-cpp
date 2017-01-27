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
#include <aws/codebuild/model/EnvironmentType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ComputeType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codebuild/model/EnvironmentVariable.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CodeBuild
{
namespace Model
{

  /**
   * <p>Information about the build environment of the build project.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codebuild-2016-10-06/ProjectEnvironment">AWS
   * API Reference</a></p>
   */
  class AWS_CODEBUILD_API ProjectEnvironment
  {
  public:
    ProjectEnvironment();
    ProjectEnvironment(const Aws::Utils::Json::JsonValue& jsonValue);
    ProjectEnvironment& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline const EnvironmentType& GetType() const{ return m_type; }

    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline void SetType(const EnvironmentType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline void SetType(EnvironmentType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline ProjectEnvironment& WithType(const EnvironmentType& value) { SetType(value); return *this;}

    /**
     * <p>The type of build environment to use for related builds.</p>
     */
    inline ProjectEnvironment& WithType(EnvironmentType&& value) { SetType(value); return *this;}

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline const Aws::String& GetImage() const{ return m_image; }

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline void SetImage(const Aws::String& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline void SetImage(Aws::String&& value) { m_imageHasBeenSet = true; m_image = value; }

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline void SetImage(const char* value) { m_imageHasBeenSet = true; m_image.assign(value); }

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline ProjectEnvironment& WithImage(const Aws::String& value) { SetImage(value); return *this;}

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline ProjectEnvironment& WithImage(Aws::String&& value) { SetImage(value); return *this;}

    /**
     * <p>The ID of the Docker image to use for this build project.</p>
     */
    inline ProjectEnvironment& WithImage(const char* value) { SetImage(value); return *this;}

    /**
     * <p>Information about the compute resources the build project will use. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline const ComputeType& GetComputeType() const{ return m_computeType; }

    /**
     * <p>Information about the compute resources the build project will use. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline void SetComputeType(const ComputeType& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>Information about the compute resources the build project will use. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline void SetComputeType(ComputeType&& value) { m_computeTypeHasBeenSet = true; m_computeType = value; }

    /**
     * <p>Information about the compute resources the build project will use. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline ProjectEnvironment& WithComputeType(const ComputeType& value) { SetComputeType(value); return *this;}

    /**
     * <p>Information about the compute resources the build project will use. Available
     * values include:</p> <ul> <li> <p> <code>BUILD_GENERAL1_SMALL</code>: Use up to 3
     * GB memory and 2 vCPUs for builds.</p> </li> <li> <p>
     * <code>BUILD_GENERAL1_MEDIUM</code>: Use up to 7 GB memory and 4 vCPUs for
     * builds.</p> </li> <li> <p> <code>BUILD_GENERAL1_LARGE</code>: Use up to 15 GB
     * memory and 8 vCPUs for builds.</p> </li> </ul>
     */
    inline ProjectEnvironment& WithComputeType(ComputeType&& value) { SetComputeType(value); return *this;}

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline const Aws::Vector<EnvironmentVariable>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline void SetEnvironmentVariables(const Aws::Vector<EnvironmentVariable>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline void SetEnvironmentVariables(Aws::Vector<EnvironmentVariable>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline ProjectEnvironment& WithEnvironmentVariables(const Aws::Vector<EnvironmentVariable>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline ProjectEnvironment& WithEnvironmentVariables(Aws::Vector<EnvironmentVariable>&& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline ProjectEnvironment& AddEnvironmentVariables(const EnvironmentVariable& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.push_back(value); return *this; }

    /**
     * <p>A set of environment variables to make available to builds for this build
     * project.</p>
     */
    inline ProjectEnvironment& AddEnvironmentVariables(EnvironmentVariable&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.push_back(value); return *this; }

  private:
    EnvironmentType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_image;
    bool m_imageHasBeenSet;
    ComputeType m_computeType;
    bool m_computeTypeHasBeenSet;
    Aws::Vector<EnvironmentVariable> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
