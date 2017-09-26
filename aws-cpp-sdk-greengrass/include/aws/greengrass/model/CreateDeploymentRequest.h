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
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/greengrass/GreengrassRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/DeploymentType.h>
#include <utility>

namespace Aws
{
namespace Greengrass
{
namespace Model
{

  /**
   */
  class AWS_GREENGRASS_API CreateDeploymentRequest : public GreengrassRequest
  {
  public:
    CreateDeploymentRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * The client token used to request idempotent operations.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateDeploymentRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateDeploymentRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * The client token used to request idempotent operations.
     */
    inline CreateDeploymentRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * Id of the deployment if you wish to redeploy a previous deployment.
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * Id of the deployment if you wish to redeploy a previous deployment.
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * Id of the deployment if you wish to redeploy a previous deployment.
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * Id of the deployment if you wish to redeploy a previous deployment.
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * Id of the deployment if you wish to redeploy a previous deployment.
     */
    inline CreateDeploymentRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * Id of the deployment if you wish to redeploy a previous deployment.
     */
    inline CreateDeploymentRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * Id of the deployment if you wish to redeploy a previous deployment.
     */
    inline CreateDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * Type of deployment. When used in CreateDeployment, only NewDeployment and
     * Redeployment are valid. 
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * Type of deployment. When used in CreateDeployment, only NewDeployment and
     * Redeployment are valid. 
     */
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * Type of deployment. When used in CreateDeployment, only NewDeployment and
     * Redeployment are valid. 
     */
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * Type of deployment. When used in CreateDeployment, only NewDeployment and
     * Redeployment are valid. 
     */
    inline CreateDeploymentRequest& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * Type of deployment. When used in CreateDeployment, only NewDeployment and
     * Redeployment are valid. 
     */
    inline CreateDeploymentRequest& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline CreateDeploymentRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline CreateDeploymentRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The unique Id of the AWS Greengrass Group
     */
    inline CreateDeploymentRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * Group Version you wish to deploy.
     */
    inline const Aws::String& GetGroupVersionId() const{ return m_groupVersionId; }

    /**
     * Group Version you wish to deploy.
     */
    inline void SetGroupVersionId(const Aws::String& value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId = value; }

    /**
     * Group Version you wish to deploy.
     */
    inline void SetGroupVersionId(Aws::String&& value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId = std::move(value); }

    /**
     * Group Version you wish to deploy.
     */
    inline void SetGroupVersionId(const char* value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId.assign(value); }

    /**
     * Group Version you wish to deploy.
     */
    inline CreateDeploymentRequest& WithGroupVersionId(const Aws::String& value) { SetGroupVersionId(value); return *this;}

    /**
     * Group Version you wish to deploy.
     */
    inline CreateDeploymentRequest& WithGroupVersionId(Aws::String&& value) { SetGroupVersionId(std::move(value)); return *this;}

    /**
     * Group Version you wish to deploy.
     */
    inline CreateDeploymentRequest& WithGroupVersionId(const char* value) { SetGroupVersionId(value); return *this;}

  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    DeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet;

    Aws::String m_groupVersionId;
    bool m_groupVersionIdHasBeenSet;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
