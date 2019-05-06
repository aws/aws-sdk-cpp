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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ClusterField.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API DescribeClustersRequest : public ECSRequest
  {
  public:
    DescribeClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusters"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A list of up to 100 cluster names or full cluster Amazon Resource Name (ARN)
     * entries. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusters() const{ return m_clusters; }

    /**
     * <p>A list of up to 100 cluster names or full cluster Amazon Resource Name (ARN)
     * entries. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline bool ClustersHasBeenSet() const { return m_clustersHasBeenSet; }

    /**
     * <p>A list of up to 100 cluster names or full cluster Amazon Resource Name (ARN)
     * entries. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetClusters(const Aws::Vector<Aws::String>& value) { m_clustersHasBeenSet = true; m_clusters = value; }

    /**
     * <p>A list of up to 100 cluster names or full cluster Amazon Resource Name (ARN)
     * entries. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetClusters(Aws::Vector<Aws::String>&& value) { m_clustersHasBeenSet = true; m_clusters = std::move(value); }

    /**
     * <p>A list of up to 100 cluster names or full cluster Amazon Resource Name (ARN)
     * entries. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline DescribeClustersRequest& WithClusters(const Aws::Vector<Aws::String>& value) { SetClusters(value); return *this;}

    /**
     * <p>A list of up to 100 cluster names or full cluster Amazon Resource Name (ARN)
     * entries. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline DescribeClustersRequest& WithClusters(Aws::Vector<Aws::String>&& value) { SetClusters(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 cluster names or full cluster Amazon Resource Name (ARN)
     * entries. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline DescribeClustersRequest& AddClusters(const Aws::String& value) { m_clustersHasBeenSet = true; m_clusters.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 cluster names or full cluster Amazon Resource Name (ARN)
     * entries. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline DescribeClustersRequest& AddClusters(Aws::String&& value) { m_clustersHasBeenSet = true; m_clusters.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 cluster names or full cluster Amazon Resource Name (ARN)
     * entries. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline DescribeClustersRequest& AddClusters(const char* value) { m_clustersHasBeenSet = true; m_clusters.push_back(value); return *this; }


    /**
     * <p>Additional information about your clusters to be separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>runningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline const Aws::Vector<ClusterField>& GetInclude() const{ return m_include; }

    /**
     * <p>Additional information about your clusters to be separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>runningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>Additional information about your clusters to be separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>runningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline void SetInclude(const Aws::Vector<ClusterField>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>Additional information about your clusters to be separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>runningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline void SetInclude(Aws::Vector<ClusterField>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>Additional information about your clusters to be separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>runningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline DescribeClustersRequest& WithInclude(const Aws::Vector<ClusterField>& value) { SetInclude(value); return *this;}

    /**
     * <p>Additional information about your clusters to be separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>runningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline DescribeClustersRequest& WithInclude(Aws::Vector<ClusterField>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>Additional information about your clusters to be separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>runningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline DescribeClustersRequest& AddInclude(const ClusterField& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p>Additional information about your clusters to be separated by launch type,
     * including:</p> <ul> <li> <p>runningEC2TasksCount</p> </li> <li>
     * <p>runningFargateTasksCount</p> </li> <li> <p>pendingEC2TasksCount</p> </li>
     * <li> <p>pendingFargateTasksCount</p> </li> <li> <p>activeEC2ServiceCount</p>
     * </li> <li> <p>activeFargateServiceCount</p> </li> <li>
     * <p>drainingEC2ServiceCount</p> </li> <li> <p>drainingFargateServiceCount</p>
     * </li> </ul>
     */
    inline DescribeClustersRequest& AddInclude(ClusterField&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<Aws::String> m_clusters;
    bool m_clustersHasBeenSet;

    Aws::Vector<ClusterField> m_include;
    bool m_includeHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
