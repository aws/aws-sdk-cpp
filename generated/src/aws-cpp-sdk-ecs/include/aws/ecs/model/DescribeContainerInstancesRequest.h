/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeContainerInstancesRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DescribeContainerInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeContainerInstances"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instances to describe. If you do not specify a cluster, the
     * default cluster is assumed. This parameter is required if the container instance
     * or container instances you are describing were launched in any cluster other
     * than the default cluster.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    DescribeContainerInstancesRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of up to 100 container instance IDs or full Amazon Resource Name (ARN)
     * entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetContainerInstances() const { return m_containerInstances; }
    inline bool ContainerInstancesHasBeenSet() const { return m_containerInstancesHasBeenSet; }
    template<typename ContainerInstancesT = Aws::Vector<Aws::String>>
    void SetContainerInstances(ContainerInstancesT&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances = std::forward<ContainerInstancesT>(value); }
    template<typename ContainerInstancesT = Aws::Vector<Aws::String>>
    DescribeContainerInstancesRequest& WithContainerInstances(ContainerInstancesT&& value) { SetContainerInstances(std::forward<ContainerInstancesT>(value)); return *this;}
    template<typename ContainerInstancesT = Aws::String>
    DescribeContainerInstancesRequest& AddContainerInstances(ContainerInstancesT&& value) { m_containerInstancesHasBeenSet = true; m_containerInstances.emplace_back(std::forward<ContainerInstancesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies whether you want to see the resource tags for the container
     * instance. If <code>TAGS</code> is specified, the tags are included in the
     * response. If <code>CONTAINER_INSTANCE_HEALTH</code> is specified, the container
     * instance health is included in the response. If this field is omitted, tags and
     * container instance health status aren't included in the response.</p>
     */
    inline const Aws::Vector<ContainerInstanceField>& GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    template<typename IncludeT = Aws::Vector<ContainerInstanceField>>
    void SetInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include = std::forward<IncludeT>(value); }
    template<typename IncludeT = Aws::Vector<ContainerInstanceField>>
    DescribeContainerInstancesRequest& WithInclude(IncludeT&& value) { SetInclude(std::forward<IncludeT>(value)); return *this;}
    inline DescribeContainerInstancesRequest& AddInclude(ContainerInstanceField value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<Aws::String> m_containerInstances;
    bool m_containerInstancesHasBeenSet = false;

    Aws::Vector<ContainerInstanceField> m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
