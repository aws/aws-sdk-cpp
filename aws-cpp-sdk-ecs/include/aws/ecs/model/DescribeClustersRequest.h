/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
     * <p>Whether to include additional information about your clusters in the
     * response. If this field is omitted, the attachments, statistics, and tags are
     * not included.</p> <p>If <code>ATTACHMENTS</code> is specified, the attachments
     * for the container instances or tasks within the cluster are included.</p> <p>If
     * <code>SETTINGS</code> is specified, the settings for the cluster are
     * included.</p> <p>If <code>STATISTICS</code> is specified, the following
     * additional information, separated by launch type, is included:</p> <ul> <li>
     * <p>runningEC2TasksCount</p> </li> <li> <p>runningFargateTasksCount</p> </li>
     * <li> <p>pendingEC2TasksCount</p> </li> <li> <p>pendingFargateTasksCount</p>
     * </li> <li> <p>activeEC2ServiceCount</p> </li> <li>
     * <p>activeFargateServiceCount</p> </li> <li> <p>drainingEC2ServiceCount</p> </li>
     * <li> <p>drainingFargateServiceCount</p> </li> </ul> <p>If <code>TAGS</code> is
     * specified, the metadata tags associated with the cluster are included.</p>
     */
    inline const Aws::Vector<ClusterField>& GetInclude() const{ return m_include; }

    /**
     * <p>Whether to include additional information about your clusters in the
     * response. If this field is omitted, the attachments, statistics, and tags are
     * not included.</p> <p>If <code>ATTACHMENTS</code> is specified, the attachments
     * for the container instances or tasks within the cluster are included.</p> <p>If
     * <code>SETTINGS</code> is specified, the settings for the cluster are
     * included.</p> <p>If <code>STATISTICS</code> is specified, the following
     * additional information, separated by launch type, is included:</p> <ul> <li>
     * <p>runningEC2TasksCount</p> </li> <li> <p>runningFargateTasksCount</p> </li>
     * <li> <p>pendingEC2TasksCount</p> </li> <li> <p>pendingFargateTasksCount</p>
     * </li> <li> <p>activeEC2ServiceCount</p> </li> <li>
     * <p>activeFargateServiceCount</p> </li> <li> <p>drainingEC2ServiceCount</p> </li>
     * <li> <p>drainingFargateServiceCount</p> </li> </ul> <p>If <code>TAGS</code> is
     * specified, the metadata tags associated with the cluster are included.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>Whether to include additional information about your clusters in the
     * response. If this field is omitted, the attachments, statistics, and tags are
     * not included.</p> <p>If <code>ATTACHMENTS</code> is specified, the attachments
     * for the container instances or tasks within the cluster are included.</p> <p>If
     * <code>SETTINGS</code> is specified, the settings for the cluster are
     * included.</p> <p>If <code>STATISTICS</code> is specified, the following
     * additional information, separated by launch type, is included:</p> <ul> <li>
     * <p>runningEC2TasksCount</p> </li> <li> <p>runningFargateTasksCount</p> </li>
     * <li> <p>pendingEC2TasksCount</p> </li> <li> <p>pendingFargateTasksCount</p>
     * </li> <li> <p>activeEC2ServiceCount</p> </li> <li>
     * <p>activeFargateServiceCount</p> </li> <li> <p>drainingEC2ServiceCount</p> </li>
     * <li> <p>drainingFargateServiceCount</p> </li> </ul> <p>If <code>TAGS</code> is
     * specified, the metadata tags associated with the cluster are included.</p>
     */
    inline void SetInclude(const Aws::Vector<ClusterField>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>Whether to include additional information about your clusters in the
     * response. If this field is omitted, the attachments, statistics, and tags are
     * not included.</p> <p>If <code>ATTACHMENTS</code> is specified, the attachments
     * for the container instances or tasks within the cluster are included.</p> <p>If
     * <code>SETTINGS</code> is specified, the settings for the cluster are
     * included.</p> <p>If <code>STATISTICS</code> is specified, the following
     * additional information, separated by launch type, is included:</p> <ul> <li>
     * <p>runningEC2TasksCount</p> </li> <li> <p>runningFargateTasksCount</p> </li>
     * <li> <p>pendingEC2TasksCount</p> </li> <li> <p>pendingFargateTasksCount</p>
     * </li> <li> <p>activeEC2ServiceCount</p> </li> <li>
     * <p>activeFargateServiceCount</p> </li> <li> <p>drainingEC2ServiceCount</p> </li>
     * <li> <p>drainingFargateServiceCount</p> </li> </ul> <p>If <code>TAGS</code> is
     * specified, the metadata tags associated with the cluster are included.</p>
     */
    inline void SetInclude(Aws::Vector<ClusterField>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>Whether to include additional information about your clusters in the
     * response. If this field is omitted, the attachments, statistics, and tags are
     * not included.</p> <p>If <code>ATTACHMENTS</code> is specified, the attachments
     * for the container instances or tasks within the cluster are included.</p> <p>If
     * <code>SETTINGS</code> is specified, the settings for the cluster are
     * included.</p> <p>If <code>STATISTICS</code> is specified, the following
     * additional information, separated by launch type, is included:</p> <ul> <li>
     * <p>runningEC2TasksCount</p> </li> <li> <p>runningFargateTasksCount</p> </li>
     * <li> <p>pendingEC2TasksCount</p> </li> <li> <p>pendingFargateTasksCount</p>
     * </li> <li> <p>activeEC2ServiceCount</p> </li> <li>
     * <p>activeFargateServiceCount</p> </li> <li> <p>drainingEC2ServiceCount</p> </li>
     * <li> <p>drainingFargateServiceCount</p> </li> </ul> <p>If <code>TAGS</code> is
     * specified, the metadata tags associated with the cluster are included.</p>
     */
    inline DescribeClustersRequest& WithInclude(const Aws::Vector<ClusterField>& value) { SetInclude(value); return *this;}

    /**
     * <p>Whether to include additional information about your clusters in the
     * response. If this field is omitted, the attachments, statistics, and tags are
     * not included.</p> <p>If <code>ATTACHMENTS</code> is specified, the attachments
     * for the container instances or tasks within the cluster are included.</p> <p>If
     * <code>SETTINGS</code> is specified, the settings for the cluster are
     * included.</p> <p>If <code>STATISTICS</code> is specified, the following
     * additional information, separated by launch type, is included:</p> <ul> <li>
     * <p>runningEC2TasksCount</p> </li> <li> <p>runningFargateTasksCount</p> </li>
     * <li> <p>pendingEC2TasksCount</p> </li> <li> <p>pendingFargateTasksCount</p>
     * </li> <li> <p>activeEC2ServiceCount</p> </li> <li>
     * <p>activeFargateServiceCount</p> </li> <li> <p>drainingEC2ServiceCount</p> </li>
     * <li> <p>drainingFargateServiceCount</p> </li> </ul> <p>If <code>TAGS</code> is
     * specified, the metadata tags associated with the cluster are included.</p>
     */
    inline DescribeClustersRequest& WithInclude(Aws::Vector<ClusterField>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>Whether to include additional information about your clusters in the
     * response. If this field is omitted, the attachments, statistics, and tags are
     * not included.</p> <p>If <code>ATTACHMENTS</code> is specified, the attachments
     * for the container instances or tasks within the cluster are included.</p> <p>If
     * <code>SETTINGS</code> is specified, the settings for the cluster are
     * included.</p> <p>If <code>STATISTICS</code> is specified, the following
     * additional information, separated by launch type, is included:</p> <ul> <li>
     * <p>runningEC2TasksCount</p> </li> <li> <p>runningFargateTasksCount</p> </li>
     * <li> <p>pendingEC2TasksCount</p> </li> <li> <p>pendingFargateTasksCount</p>
     * </li> <li> <p>activeEC2ServiceCount</p> </li> <li>
     * <p>activeFargateServiceCount</p> </li> <li> <p>drainingEC2ServiceCount</p> </li>
     * <li> <p>drainingFargateServiceCount</p> </li> </ul> <p>If <code>TAGS</code> is
     * specified, the metadata tags associated with the cluster are included.</p>
     */
    inline DescribeClustersRequest& AddInclude(const ClusterField& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p>Whether to include additional information about your clusters in the
     * response. If this field is omitted, the attachments, statistics, and tags are
     * not included.</p> <p>If <code>ATTACHMENTS</code> is specified, the attachments
     * for the container instances or tasks within the cluster are included.</p> <p>If
     * <code>SETTINGS</code> is specified, the settings for the cluster are
     * included.</p> <p>If <code>STATISTICS</code> is specified, the following
     * additional information, separated by launch type, is included:</p> <ul> <li>
     * <p>runningEC2TasksCount</p> </li> <li> <p>runningFargateTasksCount</p> </li>
     * <li> <p>pendingEC2TasksCount</p> </li> <li> <p>pendingFargateTasksCount</p>
     * </li> <li> <p>activeEC2ServiceCount</p> </li> <li>
     * <p>activeFargateServiceCount</p> </li> <li> <p>drainingEC2ServiceCount</p> </li>
     * <li> <p>drainingFargateServiceCount</p> </li> </ul> <p>If <code>TAGS</code> is
     * specified, the metadata tags associated with the cluster are included.</p>
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
