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
   * <p>Describes the backend environment associated with a <code>Branch</code> of a
   * Gen 1 Amplify app. Amplify Gen 1 applications are created using Amplify Studio
   * or the Amplify command line interface (CLI).</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/BackendEnvironment">AWS
   * API Reference</a></p>
   */
  class BackendEnvironment
  {
  public:
    AWS_AMPLIFY_API BackendEnvironment() = default;
    AWS_AMPLIFY_API BackendEnvironment(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API BackendEnvironment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AMPLIFY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline const Aws::String& GetBackendEnvironmentArn() const { return m_backendEnvironmentArn; }
    inline bool BackendEnvironmentArnHasBeenSet() const { return m_backendEnvironmentArnHasBeenSet; }
    template<typename BackendEnvironmentArnT = Aws::String>
    void SetBackendEnvironmentArn(BackendEnvironmentArnT&& value) { m_backendEnvironmentArnHasBeenSet = true; m_backendEnvironmentArn = std::forward<BackendEnvironmentArnT>(value); }
    template<typename BackendEnvironmentArnT = Aws::String>
    BackendEnvironment& WithBackendEnvironmentArn(BackendEnvironmentArnT&& value) { SetBackendEnvironmentArn(std::forward<BackendEnvironmentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for a backend environment that is part of an Amplify app. </p>
     */
    inline const Aws::String& GetEnvironmentName() const { return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    template<typename EnvironmentNameT = Aws::String>
    void SetEnvironmentName(EnvironmentNameT&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::forward<EnvironmentNameT>(value); }
    template<typename EnvironmentNameT = Aws::String>
    BackendEnvironment& WithEnvironmentName(EnvironmentNameT&& value) { SetEnvironmentName(std::forward<EnvironmentNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS CloudFormation stack name of a backend environment. </p>
     */
    inline const Aws::String& GetStackName() const { return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    template<typename StackNameT = Aws::String>
    void SetStackName(StackNameT&& value) { m_stackNameHasBeenSet = true; m_stackName = std::forward<StackNameT>(value); }
    template<typename StackNameT = Aws::String>
    BackendEnvironment& WithStackName(StackNameT&& value) { SetStackName(std::forward<StackNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of deployment artifacts. </p>
     */
    inline const Aws::String& GetDeploymentArtifacts() const { return m_deploymentArtifacts; }
    inline bool DeploymentArtifactsHasBeenSet() const { return m_deploymentArtifactsHasBeenSet; }
    template<typename DeploymentArtifactsT = Aws::String>
    void SetDeploymentArtifacts(DeploymentArtifactsT&& value) { m_deploymentArtifactsHasBeenSet = true; m_deploymentArtifacts = std::forward<DeploymentArtifactsT>(value); }
    template<typename DeploymentArtifactsT = Aws::String>
    BackendEnvironment& WithDeploymentArtifacts(DeploymentArtifactsT&& value) { SetDeploymentArtifacts(std::forward<DeploymentArtifactsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline const Aws::Utils::DateTime& GetCreateTime() const { return m_createTime; }
    inline bool CreateTimeHasBeenSet() const { return m_createTimeHasBeenSet; }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    void SetCreateTime(CreateTimeT&& value) { m_createTimeHasBeenSet = true; m_createTime = std::forward<CreateTimeT>(value); }
    template<typename CreateTimeT = Aws::Utils::DateTime>
    BackendEnvironment& WithCreateTime(CreateTimeT&& value) { SetCreateTime(std::forward<CreateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last updated date and time for a backend environment that is part of an
     * Amplify app. </p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    inline bool UpdateTimeHasBeenSet() const { return m_updateTimeHasBeenSet; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    BackendEnvironment& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_backendEnvironmentArn;
    bool m_backendEnvironmentArnHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_deploymentArtifacts;
    bool m_deploymentArtifactsHasBeenSet = false;

    Aws::Utils::DateTime m_createTime{};
    bool m_createTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
