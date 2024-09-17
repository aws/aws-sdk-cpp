/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/launch-wizard/LaunchWizardRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LaunchWizard
{
namespace Model
{

  /**
   */
  class GetWorkloadDeploymentPatternRequest : public LaunchWizardRequest
  {
  public:
    AWS_LAUNCHWIZARD_API GetWorkloadDeploymentPatternRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetWorkloadDeploymentPattern"; }

    AWS_LAUNCHWIZARD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the deployment pattern.</p>
     */
    inline const Aws::String& GetDeploymentPatternName() const{ return m_deploymentPatternName; }
    inline bool DeploymentPatternNameHasBeenSet() const { return m_deploymentPatternNameHasBeenSet; }
    inline void SetDeploymentPatternName(const Aws::String& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = value; }
    inline void SetDeploymentPatternName(Aws::String&& value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName = std::move(value); }
    inline void SetDeploymentPatternName(const char* value) { m_deploymentPatternNameHasBeenSet = true; m_deploymentPatternName.assign(value); }
    inline GetWorkloadDeploymentPatternRequest& WithDeploymentPatternName(const Aws::String& value) { SetDeploymentPatternName(value); return *this;}
    inline GetWorkloadDeploymentPatternRequest& WithDeploymentPatternName(Aws::String&& value) { SetDeploymentPatternName(std::move(value)); return *this;}
    inline GetWorkloadDeploymentPatternRequest& WithDeploymentPatternName(const char* value) { SetDeploymentPatternName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the workload.</p>
     */
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }
    inline GetWorkloadDeploymentPatternRequest& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}
    inline GetWorkloadDeploymentPatternRequest& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}
    inline GetWorkloadDeploymentPatternRequest& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}
    ///@}
  private:

    Aws::String m_deploymentPatternName;
    bool m_deploymentPatternNameHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
