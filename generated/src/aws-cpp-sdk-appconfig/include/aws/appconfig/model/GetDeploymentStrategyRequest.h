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
    AWS_APPCONFIG_API GetDeploymentStrategyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDeploymentStrategy"; }

    AWS_APPCONFIG_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the deployment strategy to get.</p>
     */
    inline const Aws::String& GetDeploymentStrategyId() const { return m_deploymentStrategyId; }
    inline bool DeploymentStrategyIdHasBeenSet() const { return m_deploymentStrategyIdHasBeenSet; }
    template<typename DeploymentStrategyIdT = Aws::String>
    void SetDeploymentStrategyId(DeploymentStrategyIdT&& value) { m_deploymentStrategyIdHasBeenSet = true; m_deploymentStrategyId = std::forward<DeploymentStrategyIdT>(value); }
    template<typename DeploymentStrategyIdT = Aws::String>
    GetDeploymentStrategyRequest& WithDeploymentStrategyId(DeploymentStrategyIdT&& value) { SetDeploymentStrategyId(std::forward<DeploymentStrategyIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_deploymentStrategyId;
    bool m_deploymentStrategyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppConfig
} // namespace Aws
