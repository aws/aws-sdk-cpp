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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ContainerInstanceField.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeContainerInstances"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed. This parameter is required if the container instance
     * or container instances you are describing were launched in any cluster other
     * than the default cluster.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed. This parameter is required if the container instance
     * or container instances you are describing were launched in any cluster other
     * than the default cluster.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed. This parameter is required if the container instance
     * or container instances you are describing were launched in any cluster other
     * than the default cluster.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed. This parameter is required if the container instance
     * or container instances you are describing were launched in any cluster other
     * than the default cluster.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed. This parameter is required if the container instance
     * or container instances you are describing were launched in any cluster other
     * than the default cluster.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed. This parameter is required if the container instance
     * or container instances you are describing were launched in any cluster other
     * than the default cluster.</p>
     */
    inline DescribeContainerInstancesRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed. This parameter is required if the container instance
     * or container instances you are describing were launched in any cluster other
     * than the default cluster.</p>
     */
    inline DescribeContainerInstancesRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed. This parameter is required if the container instance
     * or container instances you are describing were launched in any cluster other
     * than the default cluster.</p>
     */
    inline DescribeContainerInstancesRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>A list of up to 100 container instance IDs or full Amazon Resource Name (ARN)
     * entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerInstances() const{ return m_containerInstances; }

    /**
     * <p>A list of up to 100 container instance IDs or full Amazon Resource Name (ARN)
     * entries.</p>
     */
    inline bool ContainerInstancesHasBeenSet() const { return m_containerInstancesHasBeenSet; }

    /**
     * <p>A list of up to 100 container instance IDs or full Amazon Resource Name (ARN)
     * entries.</p>
     */
    inline void SetContainerInstances(const Aws::Vector<Aws::String>& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = value; }

    /**
     * <p>A list of up to 100 container instance IDs or full Amazon Resource Name (ARN)
     * entries.</p>
     */
    inline void SetContainerInstances(Aws::Vector<Aws::String>&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = std::move(value); }

    /**
     * <p>A list of up to 100 container instance IDs or full Amazon Resource Name (ARN)
     * entries.</p>
     */
    inline DescribeContainerInstancesRequest& WithContainerInstances(const Aws::Vector<Aws::String>& value) { SetContainerInstances(value); return *this;}

    /**
     * <p>A list of up to 100 container instance IDs or full Amazon Resource Name (ARN)
     * entries.</p>
     */
    inline DescribeContainerInstancesRequest& WithContainerInstances(Aws::Vector<Aws::String>&& value) { SetContainerInstances(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 container instance IDs or full Amazon Resource Name (ARN)
     * entries.</p>
     */
    inline DescribeContainerInstancesRequest& AddContainerInstances(const Aws::String& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 container instance IDs or full Amazon Resource Name (ARN)
     * entries.</p>
     */
    inline DescribeContainerInstancesRequest& AddContainerInstances(Aws::String&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 container instance IDs or full Amazon Resource Name (ARN)
     * entries.</p>
     */
    inline DescribeContainerInstancesRequest& AddContainerInstances(const char* value) { m_containerInstancesHasBeenSet = true; m_containerInstances.push_back(value); return *this; }


    /**
     * <p>Specifies whether you want to see the resource tags for the container
     * instance. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags are not included in the response.</p>
     */
    inline const Aws::Vector<ContainerInstanceField>& GetInclude() const{ return m_include; }

    /**
     * <p>Specifies whether you want to see the resource tags for the container
     * instance. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags are not included in the response.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>Specifies whether you want to see the resource tags for the container
     * instance. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags are not included in the response.</p>
     */
    inline void SetInclude(const Aws::Vector<ContainerInstanceField>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>Specifies whether you want to see the resource tags for the container
     * instance. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags are not included in the response.</p>
     */
    inline void SetInclude(Aws::Vector<ContainerInstanceField>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>Specifies whether you want to see the resource tags for the container
     * instance. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags are not included in the response.</p>
     */
    inline DescribeContainerInstancesRequest& WithInclude(const Aws::Vector<ContainerInstanceField>& value) { SetInclude(value); return *this;}

    /**
     * <p>Specifies whether you want to see the resource tags for the container
     * instance. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags are not included in the response.</p>
     */
    inline DescribeContainerInstancesRequest& WithInclude(Aws::Vector<ContainerInstanceField>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>Specifies whether you want to see the resource tags for the container
     * instance. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags are not included in the response.</p>
     */
    inline DescribeContainerInstancesRequest& AddInclude(const ContainerInstanceField& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p>Specifies whether you want to see the resource tags for the container
     * instance. If <code>TAGS</code> is specified, the tags are included in the
     * response. If this field is omitted, tags are not included in the response.</p>
     */
    inline DescribeContainerInstancesRequest& AddInclude(ContainerInstanceField&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::Vector<Aws::String> m_containerInstances;
    bool m_containerInstancesHasBeenSet;

    Aws::Vector<ContainerInstanceField> m_include;
    bool m_includeHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
