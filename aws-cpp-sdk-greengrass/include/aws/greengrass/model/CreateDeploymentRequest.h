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
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateDeploymentRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateDeploymentRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}

    /**
     * A client token used to correlate requests and responses.
     */
    inline CreateDeploymentRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}


    /**
     * The ID of the deployment if you wish to redeploy a previous deployment.
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * The ID of the deployment if you wish to redeploy a previous deployment.
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * The ID of the deployment if you wish to redeploy a previous deployment.
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * The ID of the deployment if you wish to redeploy a previous deployment.
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * The ID of the deployment if you wish to redeploy a previous deployment.
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * The ID of the deployment if you wish to redeploy a previous deployment.
     */
    inline CreateDeploymentRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * The ID of the deployment if you wish to redeploy a previous deployment.
     */
    inline CreateDeploymentRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * The ID of the deployment if you wish to redeploy a previous deployment.
     */
    inline CreateDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * The type of deployment. When used for ''CreateDeployment'', only
     * ''NewDeployment'' and ''Redeployment'' are valid.
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * The type of deployment. When used for ''CreateDeployment'', only
     * ''NewDeployment'' and ''Redeployment'' are valid.
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * The type of deployment. When used for ''CreateDeployment'', only
     * ''NewDeployment'' and ''Redeployment'' are valid.
     */
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * The type of deployment. When used for ''CreateDeployment'', only
     * ''NewDeployment'' and ''Redeployment'' are valid.
     */
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * The type of deployment. When used for ''CreateDeployment'', only
     * ''NewDeployment'' and ''Redeployment'' are valid.
     */
    inline CreateDeploymentRequest& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * The type of deployment. When used for ''CreateDeployment'', only
     * ''NewDeployment'' and ''Redeployment'' are valid.
     */
    inline CreateDeploymentRequest& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * The ID of the Greengrass group.
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * The ID of the Greengrass group.
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * The ID of the Greengrass group.
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * The ID of the Greengrass group.
     */
    inline CreateDeploymentRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * The ID of the Greengrass group.
     */
    inline CreateDeploymentRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * The ID of the Greengrass group.
     */
    inline CreateDeploymentRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * The ID of the group version to be deployed.
     */
    inline const Aws::String& GetGroupVersionId() const{ return m_groupVersionId; }

    /**
     * The ID of the group version to be deployed.
     */
    inline bool GroupVersionIdHasBeenSet() const { return m_groupVersionIdHasBeenSet; }

    /**
     * The ID of the group version to be deployed.
     */
    inline void SetGroupVersionId(const Aws::String& value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId = value; }

    /**
     * The ID of the group version to be deployed.
     */
    inline void SetGroupVersionId(Aws::String&& value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId = std::move(value); }

    /**
     * The ID of the group version to be deployed.
     */
    inline void SetGroupVersionId(const char* value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId.assign(value); }

    /**
     * The ID of the group version to be deployed.
     */
    inline CreateDeploymentRequest& WithGroupVersionId(const Aws::String& value) { SetGroupVersionId(value); return *this;}

    /**
     * The ID of the group version to be deployed.
     */
    inline CreateDeploymentRequest& WithGroupVersionId(Aws::String&& value) { SetGroupVersionId(std::move(value)); return *this;}

    /**
     * The ID of the group version to be deployed.
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
