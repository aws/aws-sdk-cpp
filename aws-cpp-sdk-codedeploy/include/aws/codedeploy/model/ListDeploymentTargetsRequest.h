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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/codedeploy/model/TargetFilterName.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CodeDeploy
{
namespace Model
{

  /**
   */
  class AWS_CODEDEPLOY_API ListDeploymentTargetsRequest : public CodeDeployRequest
  {
  public:
    ListDeploymentTargetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListDeploymentTargets"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline ListDeploymentTargetsRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline ListDeploymentTargetsRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p> The unique ID of a deployment. </p>
     */
    inline ListDeploymentTargetsRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p> A token identifier returned from the previous
     * <code>ListDeploymentTargets</code> call. It can be used to return the next set
     * of deployment targets in the list. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token identifier returned from the previous
     * <code>ListDeploymentTargets</code> call. It can be used to return the next set
     * of deployment targets in the list. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> A token identifier returned from the previous
     * <code>ListDeploymentTargets</code> call. It can be used to return the next set
     * of deployment targets in the list. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> A token identifier returned from the previous
     * <code>ListDeploymentTargets</code> call. It can be used to return the next set
     * of deployment targets in the list. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> A token identifier returned from the previous
     * <code>ListDeploymentTargets</code> call. It can be used to return the next set
     * of deployment targets in the list. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> A token identifier returned from the previous
     * <code>ListDeploymentTargets</code> call. It can be used to return the next set
     * of deployment targets in the list. </p>
     */
    inline ListDeploymentTargetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token identifier returned from the previous
     * <code>ListDeploymentTargets</code> call. It can be used to return the next set
     * of deployment targets in the list. </p>
     */
    inline ListDeploymentTargetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token identifier returned from the previous
     * <code>ListDeploymentTargets</code> call. It can be used to return the next set
     * of deployment targets in the list. </p>
     */
    inline ListDeploymentTargetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> A key used to filter the returned targets. </p>
     */
    inline const Aws::Map<TargetFilterName, Aws::Vector<Aws::String>>& GetTargetFilters() const{ return m_targetFilters; }

    /**
     * <p> A key used to filter the returned targets. </p>
     */
    inline bool TargetFiltersHasBeenSet() const { return m_targetFiltersHasBeenSet; }

    /**
     * <p> A key used to filter the returned targets. </p>
     */
    inline void SetTargetFilters(const Aws::Map<TargetFilterName, Aws::Vector<Aws::String>>& value) { m_targetFiltersHasBeenSet = true; m_targetFilters = value; }

    /**
     * <p> A key used to filter the returned targets. </p>
     */
    inline void SetTargetFilters(Aws::Map<TargetFilterName, Aws::Vector<Aws::String>>&& value) { m_targetFiltersHasBeenSet = true; m_targetFilters = std::move(value); }

    /**
     * <p> A key used to filter the returned targets. </p>
     */
    inline ListDeploymentTargetsRequest& WithTargetFilters(const Aws::Map<TargetFilterName, Aws::Vector<Aws::String>>& value) { SetTargetFilters(value); return *this;}

    /**
     * <p> A key used to filter the returned targets. </p>
     */
    inline ListDeploymentTargetsRequest& WithTargetFilters(Aws::Map<TargetFilterName, Aws::Vector<Aws::String>>&& value) { SetTargetFilters(std::move(value)); return *this;}

    /**
     * <p> A key used to filter the returned targets. </p>
     */
    inline ListDeploymentTargetsRequest& AddTargetFilters(const TargetFilterName& key, const Aws::Vector<Aws::String>& value) { m_targetFiltersHasBeenSet = true; m_targetFilters.emplace(key, value); return *this; }

    /**
     * <p> A key used to filter the returned targets. </p>
     */
    inline ListDeploymentTargetsRequest& AddTargetFilters(TargetFilterName&& key, const Aws::Vector<Aws::String>& value) { m_targetFiltersHasBeenSet = true; m_targetFilters.emplace(std::move(key), value); return *this; }

    /**
     * <p> A key used to filter the returned targets. </p>
     */
    inline ListDeploymentTargetsRequest& AddTargetFilters(const TargetFilterName& key, Aws::Vector<Aws::String>&& value) { m_targetFiltersHasBeenSet = true; m_targetFilters.emplace(key, std::move(value)); return *this; }

    /**
     * <p> A key used to filter the returned targets. </p>
     */
    inline ListDeploymentTargetsRequest& AddTargetFilters(TargetFilterName&& key, Aws::Vector<Aws::String>&& value) { m_targetFiltersHasBeenSet = true; m_targetFilters.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Map<TargetFilterName, Aws::Vector<Aws::String>> m_targetFilters;
    bool m_targetFiltersHasBeenSet;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
