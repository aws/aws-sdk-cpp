/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API DescribeContainerInstancesRequest : public ECSRequest
  {
  public:
    DescribeContainerInstancesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DescribeContainerInstancesRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DescribeContainerInstancesRequest& WithCluster(Aws::String&& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DescribeContainerInstancesRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerInstances() const{ return m_containerInstances; }

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline void SetContainerInstances(const Aws::Vector<Aws::String>& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = value; }

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline void SetContainerInstances(Aws::Vector<Aws::String>&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = value; }

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline DescribeContainerInstancesRequest& WithContainerInstances(const Aws::Vector<Aws::String>& value) { SetContainerInstances(value); return *this;}

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline DescribeContainerInstancesRequest& WithContainerInstances(Aws::Vector<Aws::String>&& value) { SetContainerInstances(value); return *this;}

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline DescribeContainerInstancesRequest& AddContainerInstances(const Aws::String& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(value); return *this; }

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline DescribeContainerInstancesRequest& AddContainerInstances(Aws::String&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(value); return *this; }

    /**
     * <p>A space-separated list of container instance IDs or full Amazon Resource Name
     * (ARN) entries.</p>
     */
    inline DescribeContainerInstancesRequest& AddContainerInstances(const char* value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(value); return *this; }

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::Vector<Aws::String> m_containerInstances;
    bool m_containerInstancesHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
