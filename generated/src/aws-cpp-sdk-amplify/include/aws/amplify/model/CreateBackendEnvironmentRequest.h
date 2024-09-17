/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amplify/Amplify_EXPORTS.h>
#include <aws/amplify/AmplifyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Amplify
{
namespace Model
{

  /**
   * <p>The request structure for the backend environment create request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amplify-2017-07-25/CreateBackendEnvironmentRequest">AWS
   * API Reference</a></p>
   */
  class CreateBackendEnvironmentRequest : public AmplifyRequest
  {
  public:
    AWS_AMPLIFY_API CreateBackendEnvironmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBackendEnvironment"; }

    AWS_AMPLIFY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique ID for an Amplify app. </p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }
    inline CreateBackendEnvironmentRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}
    inline CreateBackendEnvironmentRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}
    inline CreateBackendEnvironmentRequest& WithAppId(const char* value) { SetAppId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name for the backend environment. </p>
     */
    inline const Aws::String& GetEnvironmentName() const{ return m_environmentName; }
    inline bool EnvironmentNameHasBeenSet() const { return m_environmentNameHasBeenSet; }
    inline void SetEnvironmentName(const Aws::String& value) { m_environmentNameHasBeenSet = true; m_environmentName = value; }
    inline void SetEnvironmentName(Aws::String&& value) { m_environmentNameHasBeenSet = true; m_environmentName = std::move(value); }
    inline void SetEnvironmentName(const char* value) { m_environmentNameHasBeenSet = true; m_environmentName.assign(value); }
    inline CreateBackendEnvironmentRequest& WithEnvironmentName(const Aws::String& value) { SetEnvironmentName(value); return *this;}
    inline CreateBackendEnvironmentRequest& WithEnvironmentName(Aws::String&& value) { SetEnvironmentName(std::move(value)); return *this;}
    inline CreateBackendEnvironmentRequest& WithEnvironmentName(const char* value) { SetEnvironmentName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The AWS CloudFormation stack name of a backend environment. </p>
     */
    inline const Aws::String& GetStackName() const{ return m_stackName; }
    inline bool StackNameHasBeenSet() const { return m_stackNameHasBeenSet; }
    inline void SetStackName(const Aws::String& value) { m_stackNameHasBeenSet = true; m_stackName = value; }
    inline void SetStackName(Aws::String&& value) { m_stackNameHasBeenSet = true; m_stackName = std::move(value); }
    inline void SetStackName(const char* value) { m_stackNameHasBeenSet = true; m_stackName.assign(value); }
    inline CreateBackendEnvironmentRequest& WithStackName(const Aws::String& value) { SetStackName(value); return *this;}
    inline CreateBackendEnvironmentRequest& WithStackName(Aws::String&& value) { SetStackName(std::move(value)); return *this;}
    inline CreateBackendEnvironmentRequest& WithStackName(const char* value) { SetStackName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of deployment artifacts. </p>
     */
    inline const Aws::String& GetDeploymentArtifacts() const{ return m_deploymentArtifacts; }
    inline bool DeploymentArtifactsHasBeenSet() const { return m_deploymentArtifactsHasBeenSet; }
    inline void SetDeploymentArtifacts(const Aws::String& value) { m_deploymentArtifactsHasBeenSet = true; m_deploymentArtifacts = value; }
    inline void SetDeploymentArtifacts(Aws::String&& value) { m_deploymentArtifactsHasBeenSet = true; m_deploymentArtifacts = std::move(value); }
    inline void SetDeploymentArtifacts(const char* value) { m_deploymentArtifactsHasBeenSet = true; m_deploymentArtifacts.assign(value); }
    inline CreateBackendEnvironmentRequest& WithDeploymentArtifacts(const Aws::String& value) { SetDeploymentArtifacts(value); return *this;}
    inline CreateBackendEnvironmentRequest& WithDeploymentArtifacts(Aws::String&& value) { SetDeploymentArtifacts(std::move(value)); return *this;}
    inline CreateBackendEnvironmentRequest& WithDeploymentArtifacts(const char* value) { SetDeploymentArtifacts(value); return *this;}
    ///@}
  private:

    Aws::String m_appId;
    bool m_appIdHasBeenSet = false;

    Aws::String m_environmentName;
    bool m_environmentNameHasBeenSet = false;

    Aws::String m_stackName;
    bool m_stackNameHasBeenSet = false;

    Aws::String m_deploymentArtifacts;
    bool m_deploymentArtifactsHasBeenSet = false;
  };

} // namespace Model
} // namespace Amplify
} // namespace Aws
