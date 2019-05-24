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
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/CodeDeployRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p> Represents the input of a BatchGetDeployments operation. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BatchGetDeploymentsInput">AWS
   * API Reference</a></p>
   */
  class AWS_CODEDEPLOY_API BatchGetDeploymentsRequest : public CodeDeployRequest
  {
  public:
    BatchGetDeploymentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchGetDeployments"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> A list of deployment IDs, separated by spaces. The maximum number of
     * deployment IDs you can specify is 25.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentIds() const{ return m_deploymentIds; }

    /**
     * <p> A list of deployment IDs, separated by spaces. The maximum number of
     * deployment IDs you can specify is 25.</p>
     */
    inline bool DeploymentIdsHasBeenSet() const { return m_deploymentIdsHasBeenSet; }

    /**
     * <p> A list of deployment IDs, separated by spaces. The maximum number of
     * deployment IDs you can specify is 25.</p>
     */
    inline void SetDeploymentIds(const Aws::Vector<Aws::String>& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds = value; }

    /**
     * <p> A list of deployment IDs, separated by spaces. The maximum number of
     * deployment IDs you can specify is 25.</p>
     */
    inline void SetDeploymentIds(Aws::Vector<Aws::String>&& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds = std::move(value); }

    /**
     * <p> A list of deployment IDs, separated by spaces. The maximum number of
     * deployment IDs you can specify is 25.</p>
     */
    inline BatchGetDeploymentsRequest& WithDeploymentIds(const Aws::Vector<Aws::String>& value) { SetDeploymentIds(value); return *this;}

    /**
     * <p> A list of deployment IDs, separated by spaces. The maximum number of
     * deployment IDs you can specify is 25.</p>
     */
    inline BatchGetDeploymentsRequest& WithDeploymentIds(Aws::Vector<Aws::String>&& value) { SetDeploymentIds(std::move(value)); return *this;}

    /**
     * <p> A list of deployment IDs, separated by spaces. The maximum number of
     * deployment IDs you can specify is 25.</p>
     */
    inline BatchGetDeploymentsRequest& AddDeploymentIds(const Aws::String& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds.push_back(value); return *this; }

    /**
     * <p> A list of deployment IDs, separated by spaces. The maximum number of
     * deployment IDs you can specify is 25.</p>
     */
    inline BatchGetDeploymentsRequest& AddDeploymentIds(Aws::String&& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds.push_back(std::move(value)); return *this; }

    /**
     * <p> A list of deployment IDs, separated by spaces. The maximum number of
     * deployment IDs you can specify is 25.</p>
     */
    inline BatchGetDeploymentsRequest& AddDeploymentIds(const char* value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_deploymentIds;
    bool m_deploymentIdsHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
