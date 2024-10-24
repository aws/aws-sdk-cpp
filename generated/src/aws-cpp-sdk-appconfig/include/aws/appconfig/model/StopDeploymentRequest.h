/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
#include <aws/appconfig/AppConfigRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppConfig
{
namespace Model
{

  /**
   */
  class StopDeploymentRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API StopDeploymentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopDeployment"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;

    AWS_APPCONFIG_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The application ID.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline StopDeploymentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline StopDeploymentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline StopDeploymentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment ID.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }
    inline StopDeploymentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}
    inline StopDeploymentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}
    inline StopDeploymentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline int GetDeploymentNumber() const{ return m_deploymentNumber; }
    inline bool DeploymentNumberHasBeenSet() const { return m_deploymentNumberHasBeenSet; }
    inline void SetDeploymentNumber(int value) { m_deploymentNumberHasBeenSet = true; m_deploymentNumber = value; }
    inline StopDeploymentRequest& WithDeploymentNumber(int value) { SetDeploymentNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean that enables AppConfig to rollback a <code>COMPLETED</code>
     * deployment to the previous configuration version. This action moves the
     * deployment to a status of <code>REVERTED</code>.</p>
     */
    inline bool GetAllowRevert() const{ return m_allowRevert; }
    inline bool AllowRevertHasBeenSet() const { return m_allowRevertHasBeenSet; }
    inline void SetAllowRevert(bool value) { m_allowRevertHasBeenSet = true; m_allowRevert = value; }
    inline StopDeploymentRequest& WithAllowRevert(bool value) { SetAllowRevert(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    int m_deploymentNumber;
    bool m_deploymentNumberHasBeenSet = false;

    bool m_allowRevert;
    bool m_allowRevertHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
