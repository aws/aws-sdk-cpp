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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/OpsWorksRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace OpsWorks
{
namespace Model
{

  /**
   */
  class AWS_OPSWORKS_API DescribeDeploymentsRequest : public OpsWorksRequest
  {
  public:
    DescribeDeploymentsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDeployments"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The stack ID. If you include this parameter, the command returns a
     * description of the commands associated with the specified stack.</p>
     */
    inline const Aws::String& GetStackId() const{ return m_stackId; }

    /**
     * <p>The stack ID. If you include this parameter, the command returns a
     * description of the commands associated with the specified stack.</p>
     */
    inline bool StackIdHasBeenSet() const { return m_stackIdHasBeenSet; }

    /**
     * <p>The stack ID. If you include this parameter, the command returns a
     * description of the commands associated with the specified stack.</p>
     */
    inline void SetStackId(const Aws::String& value) { m_stackIdHasBeenSet = true; m_stackId = value; }

    /**
     * <p>The stack ID. If you include this parameter, the command returns a
     * description of the commands associated with the specified stack.</p>
     */
    inline void SetStackId(Aws::String&& value) { m_stackIdHasBeenSet = true; m_stackId = std::move(value); }

    /**
     * <p>The stack ID. If you include this parameter, the command returns a
     * description of the commands associated with the specified stack.</p>
     */
    inline void SetStackId(const char* value) { m_stackIdHasBeenSet = true; m_stackId.assign(value); }

    /**
     * <p>The stack ID. If you include this parameter, the command returns a
     * description of the commands associated with the specified stack.</p>
     */
    inline DescribeDeploymentsRequest& WithStackId(const Aws::String& value) { SetStackId(value); return *this;}

    /**
     * <p>The stack ID. If you include this parameter, the command returns a
     * description of the commands associated with the specified stack.</p>
     */
    inline DescribeDeploymentsRequest& WithStackId(Aws::String&& value) { SetStackId(std::move(value)); return *this;}

    /**
     * <p>The stack ID. If you include this parameter, the command returns a
     * description of the commands associated with the specified stack.</p>
     */
    inline DescribeDeploymentsRequest& WithStackId(const char* value) { SetStackId(value); return *this;}


    /**
     * <p>The app ID. If you include this parameter, the command returns a description
     * of the commands associated with the specified app.</p>
     */
    inline const Aws::String& GetAppId() const{ return m_appId; }

    /**
     * <p>The app ID. If you include this parameter, the command returns a description
     * of the commands associated with the specified app.</p>
     */
    inline bool AppIdHasBeenSet() const { return m_appIdHasBeenSet; }

    /**
     * <p>The app ID. If you include this parameter, the command returns a description
     * of the commands associated with the specified app.</p>
     */
    inline void SetAppId(const Aws::String& value) { m_appIdHasBeenSet = true; m_appId = value; }

    /**
     * <p>The app ID. If you include this parameter, the command returns a description
     * of the commands associated with the specified app.</p>
     */
    inline void SetAppId(Aws::String&& value) { m_appIdHasBeenSet = true; m_appId = std::move(value); }

    /**
     * <p>The app ID. If you include this parameter, the command returns a description
     * of the commands associated with the specified app.</p>
     */
    inline void SetAppId(const char* value) { m_appIdHasBeenSet = true; m_appId.assign(value); }

    /**
     * <p>The app ID. If you include this parameter, the command returns a description
     * of the commands associated with the specified app.</p>
     */
    inline DescribeDeploymentsRequest& WithAppId(const Aws::String& value) { SetAppId(value); return *this;}

    /**
     * <p>The app ID. If you include this parameter, the command returns a description
     * of the commands associated with the specified app.</p>
     */
    inline DescribeDeploymentsRequest& WithAppId(Aws::String&& value) { SetAppId(std::move(value)); return *this;}

    /**
     * <p>The app ID. If you include this parameter, the command returns a description
     * of the commands associated with the specified app.</p>
     */
    inline DescribeDeploymentsRequest& WithAppId(const char* value) { SetAppId(value); return *this;}


    /**
     * <p>An array of deployment IDs to be described. If you include this parameter,
     * the command returns a description of the specified deployments. Otherwise, it
     * returns a description of every deployment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeploymentIds() const{ return m_deploymentIds; }

    /**
     * <p>An array of deployment IDs to be described. If you include this parameter,
     * the command returns a description of the specified deployments. Otherwise, it
     * returns a description of every deployment.</p>
     */
    inline bool DeploymentIdsHasBeenSet() const { return m_deploymentIdsHasBeenSet; }

    /**
     * <p>An array of deployment IDs to be described. If you include this parameter,
     * the command returns a description of the specified deployments. Otherwise, it
     * returns a description of every deployment.</p>
     */
    inline void SetDeploymentIds(const Aws::Vector<Aws::String>& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds = value; }

    /**
     * <p>An array of deployment IDs to be described. If you include this parameter,
     * the command returns a description of the specified deployments. Otherwise, it
     * returns a description of every deployment.</p>
     */
    inline void SetDeploymentIds(Aws::Vector<Aws::String>&& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds = std::move(value); }

    /**
     * <p>An array of deployment IDs to be described. If you include this parameter,
     * the command returns a description of the specified deployments. Otherwise, it
     * returns a description of every deployment.</p>
     */
    inline DescribeDeploymentsRequest& WithDeploymentIds(const Aws::Vector<Aws::String>& value) { SetDeploymentIds(value); return *this;}

    /**
     * <p>An array of deployment IDs to be described. If you include this parameter,
     * the command returns a description of the specified deployments. Otherwise, it
     * returns a description of every deployment.</p>
     */
    inline DescribeDeploymentsRequest& WithDeploymentIds(Aws::Vector<Aws::String>&& value) { SetDeploymentIds(std::move(value)); return *this;}

    /**
     * <p>An array of deployment IDs to be described. If you include this parameter,
     * the command returns a description of the specified deployments. Otherwise, it
     * returns a description of every deployment.</p>
     */
    inline DescribeDeploymentsRequest& AddDeploymentIds(const Aws::String& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds.push_back(value); return *this; }

    /**
     * <p>An array of deployment IDs to be described. If you include this parameter,
     * the command returns a description of the specified deployments. Otherwise, it
     * returns a description of every deployment.</p>
     */
    inline DescribeDeploymentsRequest& AddDeploymentIds(Aws::String&& value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of deployment IDs to be described. If you include this parameter,
     * the command returns a description of the specified deployments. Otherwise, it
     * returns a description of every deployment.</p>
     */
    inline DescribeDeploymentsRequest& AddDeploymentIds(const char* value) { m_deploymentIdsHasBeenSet = true; m_deploymentIds.push_back(value); return *this; }

  private:

    Aws::String m_stackId;
    bool m_stackIdHasBeenSet;

    Aws::String m_appId;
    bool m_appIdHasBeenSet;

    Aws::Vector<Aws::String> m_deploymentIds;
    bool m_deploymentIdsHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
