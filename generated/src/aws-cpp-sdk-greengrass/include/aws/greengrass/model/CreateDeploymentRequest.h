/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class CreateDeploymentRequest : public GreengrassRequest
  {
  public:
    AWS_GREENGRASS_API CreateDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDeployment"; }

    AWS_GREENGRASS_API Aws::String SerializePayload() const override;

    AWS_GREENGRASS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * A client token used to correlate requests and responses.
     */
    inline const Aws::String& GetAmznClientToken() const{ return m_amznClientToken; }
    inline bool AmznClientTokenHasBeenSet() const { return m_amznClientTokenHasBeenSet; }
    inline void SetAmznClientToken(const Aws::String& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = value; }
    inline void SetAmznClientToken(Aws::String&& value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken = std::move(value); }
    inline void SetAmznClientToken(const char* value) { m_amznClientTokenHasBeenSet = true; m_amznClientToken.assign(value); }
    inline CreateDeploymentRequest& WithAmznClientToken(const Aws::String& value) { SetAmznClientToken(value); return *this;}
    inline CreateDeploymentRequest& WithAmznClientToken(Aws::String&& value) { SetAmznClientToken(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithAmznClientToken(const char* value) { SetAmznClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the deployment if you wish to redeploy a previous deployment.
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline CreateDeploymentRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline CreateDeploymentRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of deployment. When used for ''CreateDeployment'', only
     * ''NewDeployment'' and ''Redeployment'' are valid.
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }
    inline CreateDeploymentRequest& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}
    inline CreateDeploymentRequest& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the Greengrass group.
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }
    inline CreateDeploymentRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}
    inline CreateDeploymentRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * The ID of the group version to be deployed.
     */
    inline const Aws::String& GetGroupVersionId() const{ return m_groupVersionId; }
    inline bool GroupVersionIdHasBeenSet() const { return m_groupVersionIdHasBeenSet; }
    inline void SetGroupVersionId(const Aws::String& value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId = value; }
    inline void SetGroupVersionId(Aws::String&& value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId = std::move(value); }
    inline void SetGroupVersionId(const char* value) { m_groupVersionIdHasBeenSet = true; m_groupVersionId.assign(value); }
    inline CreateDeploymentRequest& WithGroupVersionId(const Aws::String& value) { SetGroupVersionId(value); return *this;}
    inline CreateDeploymentRequest& WithGroupVersionId(Aws::String&& value) { SetGroupVersionId(std::move(value)); return *this;}
    inline CreateDeploymentRequest& WithGroupVersionId(const char* value) { SetGroupVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_amznClientToken;
    bool m_amznClientTokenHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    DeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_groupVersionId;
    bool m_groupVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
