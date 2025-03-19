/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>BatchGetDeploymentGroups</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentGroupsInput">AWS
   * API Reference</a></p>
   */
  class BatchGetDeploymentGroupsRequest : public CodeDeployRequest
  {
  public:
    AWS_CODEDEPLOY_API BatchGetDeploymentGroupsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetDeploymentGroups"; }

    AWS_CODEDEPLOY_API Aws::String SerializePayload() const override;

    AWS_CODEDEPLOY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of an CodeDeploy application associated with the applicable user or
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetApplicationName() const { return m_applicationName; }
    inline bool ApplicationNameHasBeenSet() const { return m_applicationNameHasBeenSet; }
    template<typename ApplicationNameT = Aws::String>
    void SetApplicationName(ApplicationNameT&& value) { m_applicationNameHasBeenSet = true; m_applicationName = std::forward<ApplicationNameT>(value); }
    template<typename ApplicationNameT = Aws::String>
    BatchGetDeploymentGroupsRequest& WithApplicationName(ApplicationNameT&& value) { SetApplicationName(std::forward<ApplicationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The names of the deployment groups.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentGroupNames() const { return m_deploymentGroupNames; }
    inline bool DeploymentGroupNamesHasBeenSet() const { return m_deploymentGroupNamesHasBeenSet; }
    template<typename DeploymentGroupNamesT = Aws::Vector<Aws::String>>
    void SetDeploymentGroupNames(DeploymentGroupNamesT&& value) { m_deploymentGroupNamesHasBeenSet = true; m_deploymentGroupNames = std::forward<DeploymentGroupNamesT>(value); }
    template<typename DeploymentGroupNamesT = Aws::Vector<Aws::String>>
    BatchGetDeploymentGroupsRequest& WithDeploymentGroupNames(DeploymentGroupNamesT&& value) { SetDeploymentGroupNames(std::forward<DeploymentGroupNamesT>(value)); return *this;}
    template<typename DeploymentGroupNamesT = Aws::String>
    BatchGetDeploymentGroupsRequest& AddDeploymentGroupNames(DeploymentGroupNamesT&& value) { m_deploymentGroupNamesHasBeenSet = true; m_deploymentGroupNames.emplace_back(std::forward<DeploymentGroupNamesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_applicationName;
    bool m_applicationNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_deploymentGroupNames;
    bool m_deploymentGroupNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
