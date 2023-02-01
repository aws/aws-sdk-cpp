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
    inline StopDeploymentRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline StopDeploymentRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}

    /**
     * <p>The application ID.</p>
     */
    inline StopDeploymentRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}


    /**
     * <p>The environment ID.</p>
     */
    inline const Aws::String& GetEnvironmentId() const{ return m_environmentId; }

    /**
     * <p>The environment ID.</p>
     */
    inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }

    /**
     * <p>The environment ID.</p>
     */
    inline void SetEnvironmentId(const Aws::String& value) { m_environmentIdHasBeenSet = true; m_environmentId = value; }

    /**
     * <p>The environment ID.</p>
     */
    inline void SetEnvironmentId(Aws::String&& value) { m_environmentIdHasBeenSet = true; m_environmentId = std::move(value); }

    /**
     * <p>The environment ID.</p>
     */
    inline void SetEnvironmentId(const char* value) { m_environmentIdHasBeenSet = true; m_environmentId.assign(value); }

    /**
     * <p>The environment ID.</p>
     */
    inline StopDeploymentRequest& WithEnvironmentId(const Aws::String& value) { SetEnvironmentId(value); return *this;}

    /**
     * <p>The environment ID.</p>
     */
    inline StopDeploymentRequest& WithEnvironmentId(Aws::String&& value) { SetEnvironmentId(std::move(value)); return *this;}

    /**
     * <p>The environment ID.</p>
     */
    inline StopDeploymentRequest& WithEnvironmentId(const char* value) { SetEnvironmentId(value); return *this;}


    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline int GetDeploymentNumber() const{ return m_deploymentNumber; }

    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline bool DeploymentNumberHasBeenSet() const { return m_deploymentNumberHasBeenSet; }

    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline void SetDeploymentNumber(int value) { m_deploymentNumberHasBeenSet = true; m_deploymentNumber = value; }

    /**
     * <p>The sequence number of the deployment.</p>
     */
    inline StopDeploymentRequest& WithDeploymentNumber(int value) { SetDeploymentNumber(value); return *this;}

  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_environmentId;
    bool m_environmentIdHasBeenSet = false;

    int m_deploymentNumber;
    bool m_deploymentNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
