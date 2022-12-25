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
  class GetDeploymentStrategyRequest : public AppConfigRequest
  {
  public:
    AWS_APPCONFIG_API GetDeploymentStrategyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeploymentStrategy"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the deployment strategy to get.</p>
     */
    inline const Aws::String& GetDeploymentStrategyId() const{ return m_deploymentStrategyId; }

    /**
     * <p>The ID of the deployment strategy to get.</p>
     */
    inline bool DeploymentStrategyIdHasBeenSet() const { return m_deploymentStrategyIdHasBeenSet; }

    /**
     * <p>The ID of the deployment strategy to get.</p>
     */
    inline void SetDeploymentStrategyId(const Aws::String& value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId = value; }

    /**
     * <p>The ID of the deployment strategy to get.</p>
     */
    inline void SetDeploymentStrategyId(Aws::String&& value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId = std::move(value); }

    /**
     * <p>The ID of the deployment strategy to get.</p>
     */
    inline void SetDeploymentStrategyId(const char* value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId.assign(value); }

    /**
     * <p>The ID of the deployment strategy to get.</p>
     */
    inline GetDeploymentStrategyRequest& WithDeploymentStrategyId(const Aws::String& value) { SetDeploymentStrategyId(value); return *this;}

    /**
     * <p>The ID of the deployment strategy to get.</p>
     */
    inline GetDeploymentStrategyRequest& WithDeploymentStrategyId(Aws::String&& value) { SetDeploymentStrategyId(std::move(value)); return *this;}

    /**
     * <p>The ID of the deployment strategy to get.</p>
     */
    inline GetDeploymentStrategyRequest& WithDeploymentStrategyId(const char* value) { SetDeploymentStrategyId(value); return *this;}

  private:

    Aws::String m_deploymentStrategyId;
    bool m_deploymentStrategyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
