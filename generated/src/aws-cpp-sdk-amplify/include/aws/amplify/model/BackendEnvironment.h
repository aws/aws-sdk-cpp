/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace Amplify
{
namespace Model
{

  /**
   * <p> Describes the backend environment for an Amplify app. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/BackendEnvironment">AWS
   * API Reference</a></p>
   */
  class BackendEnvironment
  {
  public:
    AWS_AMPLIFY_API BackendEnvironment();
    AWS_AMPLIFY_API BackendEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API BackendEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline const Aws::String& GetBackendEnvironmentArn() const{ return m_backendEnvironmentArn; }

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline bool BackendEnvironmentArnHasBeenSet() const { return m_backendEnvironmentArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline void SetBackendEnvironmentArn(const Aws::String& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline void SetBackendEnvironmentArn(Aws::String&& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline void SetBackendEnvironmentArn(const char* value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline BackendEnvironment& WithBackendEnvironmentArn(const Aws::String& value) { SetBackendEnvironmentArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline BackendEnvironment& WithBackendEnvironmentArn(Aws::String&& value) { SetBackendEnvironmentArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline BackendEnvironment& WithBackendEnvironmentArn(const char* value) { SetBackendEnvironmentArn(value); return *this;}


    /**
     * <p> The name for a backend environment that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }

    /**
     * <p> The name for a backend environment that is part of an Amplify app. </p>
     */
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }

    /**
     * <p> The name for a backend environment that is part of an Amplify app. </p>
     */
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }

    /**
     * <p> The name for a backend environment that is part of an Amplify app. </p>
     */
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }

    /**
     * <p> The name for a backend environment that is part of an Amplify app. </p>
     */
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }

    /**
     * <p> The name for a backend environment that is part of an Amplify app. </p>
     */
    inline BackendEnvironment& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}

    /**
     * <p> The name for a backend environment that is part of an Amplify app. </p>
     */
    inline BackendEnvironment& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}

    /**
     * <p> The name for a backend environment that is part of an Amplify app. </p>
     */
    inline BackendEnvironment& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}


    /**
     * <p> The AWS CloudFormation stack name of a backend environment. </p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }

    /**
     * <p> The AWS CloudFormation stack name of a backend environment. </p>
     */
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }

    /**
     * <p> The AWS CloudFormation stack name of a backend environment. </p>
     */
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }

    /**
     * <p> The AWS CloudFormation stack name of a backend environment. </p>
     */
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }

    /**
     * <p> The AWS CloudFormation stack name of a backend environment. </p>
     */
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }

    /**
     * <p> The AWS CloudFormation stack name of a backend environment. </p>
     */
    inline BackendEnvironment& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}

    /**
     * <p> The AWS CloudFormation stack name of a backend environment. </p>
     */
    inline BackendEnvironment& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}

    /**
     * <p> The AWS CloudFormation stack name of a backend environment. </p>
     */
    inline BackendEnvironment& WithStackName(const char* value) { SetStackName(value); return *this;}


    /**
     * <p> The name of deployment artifacts. </p>
     */
    inline const Aws::String& GetDeploymentArtifacts() const{ return m_deploymentArtifacts; }

    /**
     * <p> The name of deployment artifacts. </p>
     */
    inline bool DeploymentArtifactsHasBeenSet() const { return m_deploymentArtifactsHasBeenSet; }

    /**
     * <p> The name of deployment artifacts. </p>
     */
    inline void SetDeploymentArtifacts(const Aws::String& value) { m_deploymentArtifactsHasBeenSet = true; m_deploymentArtifacts = value; }

    /**
     * <p> The name of deployment artifacts. </p>
     */
    inline void SetDeploymentArtifacts(Aws::String&& value) { m_deploymentArtifactsHasBeenSet = true; m_deploymentArtifacts = std::move(value); }

    /**
     * <p> The name of deployment artifacts. </p>
     */
    inline void SetDeploymentArtifacts(const char* value) { m_deploymentArtifactsHasBeenSet = true; m_deploymentArtifacts.assign(value); }

    /**
     * <p> The name of deployment artifacts. </p>
     */
    inline BackendEnvironment& WithDeploymentArtifacts(const Aws::String& value) { SetDeploymentArtifacts(value); return *this;}

    /**
     * <p> The name of deployment artifacts. </p>
     */
    inline BackendEnvironment& WithDeploymentArtifacts(Aws::String&& value) { SetDeploymentArtifacts(std::move(value)); return *this;}

    /**
     * <p> The name of deployment artifacts. </p>
     */
    inline BackendEnvironment& WithDeploymentArtifacts(const char* value) { SetDeploymentArtifacts(value); return *this;}


    /**
     * <p> The creation date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const{ return m_createTime; }

    /**
     * <p> The creation date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }

    /**
     * <p> The creation date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline void SetCreateTime(const Aws::Utils::DateTime& value) { m_createTimeHasBeenSet = true; m_createTime = value; }

    /**
     * <p> The creation date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline void SetCreateTime(Aws::Utils::DateTime&& value) { m_createTimeHasBeenSet = true; m_createTime = std::move(value); }

    /**
     * <p> The creation date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline BackendEnvironment& WithCreateTime(const Aws::Utils::DateTime& value) { SetCreateTime(value); return *this;}

    /**
     * <p> The creation date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline BackendEnvironment& WithCreateTime(Aws::Utils::DateTime&& value) { SetCreateTime(std::move(value)); return *this;}


    /**
     * <p> The last updated date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const{ return m_updateTime; }

    /**
     * <p> The last updated date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }

    /**
     * <p> The last updated date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline void SetUpdateTime(const Aws::Utils::DateTime& value) { m_updateTimeHasBeenSet = true; m_updateTime = value; }

    /**
     * <p> The last updated date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline void SetUpdateTime(Aws::Utils::DateTime&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::move(value); }

    /**
     * <p> The last updated date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline BackendEnvironment& WithUpdateTime(const Aws::Utils::DateTime& value) { SetUpdateTime(value); return *this;}

    /**
     * <p> The last updated date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline BackendEnvironment& WithUpdateTime(Aws::Utils::DateTime&& value) { SetUpdateTime(std::move(value)); return *this;}

  private:

    Aws::String m_backendEnvironmentArn;
    bool m_backendEnvironmentArnHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_deploymentArtifacts;
    bool m_deploymentArtifactsHasBeenSet = false;

    Aws::Utils::DateTime m_createTime;
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime;
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
