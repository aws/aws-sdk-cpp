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
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API UpdateContainerAgentRequest : public ECSRequest
  {
  public:
    UpdateContainerAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContainerAgent"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * container instance is running on. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * container instance is running on. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * container instance is running on. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * container instance is running on. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * container instance is running on. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * container instance is running on. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline UpdateContainerAgentRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * container instance is running on. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline UpdateContainerAgentRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that your
     * container instance is running on. If you do not specify a cluster, the default
     * cluster is assumed.</p>
     */
    inline UpdateContainerAgentRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The container instance ID or full ARN entries for the container instance on
     * which you would like to update the Amazon ECS container agent.</p>
     */
    inline const Aws::String& GetContainerInstance() const{ return m_containerInstance; }

    /**
     * <p>The container instance ID or full ARN entries for the container instance on
     * which you would like to update the Amazon ECS container agent.</p>
     */
    inline bool ContainerInstanceHasBeenSet() const { return m_containerInstanceHasBeenSet; }

    /**
     * <p>The container instance ID or full ARN entries for the container instance on
     * which you would like to update the Amazon ECS container agent.</p>
     */
    inline void SetContainerInstance(const Aws::String& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = value; }

    /**
     * <p>The container instance ID or full ARN entries for the container instance on
     * which you would like to update the Amazon ECS container agent.</p>
     */
    inline void SetContainerInstance(Aws::String&& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = std::move(value); }

    /**
     * <p>The container instance ID or full ARN entries for the container instance on
     * which you would like to update the Amazon ECS container agent.</p>
     */
    inline void SetContainerInstance(const char* value) { m_containerInstanceHasBeenSet = true; m_containerInstance.assign(value); }

    /**
     * <p>The container instance ID or full ARN entries for the container instance on
     * which you would like to update the Amazon ECS container agent.</p>
     */
    inline UpdateContainerAgentRequest& WithContainerInstance(const Aws::String& value) { SetContainerInstance(value); return *this;}

    /**
     * <p>The container instance ID or full ARN entries for the container instance on
     * which you would like to update the Amazon ECS container agent.</p>
     */
    inline UpdateContainerAgentRequest& WithContainerInstance(Aws::String&& value) { SetContainerInstance(std::move(value)); return *this;}

    /**
     * <p>The container instance ID or full ARN entries for the container instance on
     * which you would like to update the Amazon ECS container agent.</p>
     */
    inline UpdateContainerAgentRequest& WithContainerInstance(const char* value) { SetContainerInstance(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::String m_containerInstance;
    bool m_containerInstanceHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
