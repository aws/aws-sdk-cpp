/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class UpdateContainerAgentRequest : public ECSRequest
  {
  public:
    AWS_ECS_API UpdateContainerAgentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateContainerAgent"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * <p>The container instance ID or full ARN entries for the container instance
     * where you would like to update the Amazon ECS container agent.</p>
     */
    inline const Aws::String& GetContainerInstance() const{ return m_containerInstance; }

    /**
     * <p>The container instance ID or full ARN entries for the container instance
     * where you would like to update the Amazon ECS container agent.</p>
     */
    inline bool ContainerInstanceHasBeenSet() const { return m_containerInstanceHasBeenSet; }

    /**
     * <p>The container instance ID or full ARN entries for the container instance
     * where you would like to update the Amazon ECS container agent.</p>
     */
    inline void SetContainerInstance(const Aws::String& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = value; }

    /**
     * <p>The container instance ID or full ARN entries for the container instance
     * where you would like to update the Amazon ECS container agent.</p>
     */
    inline void SetContainerInstance(Aws::String&& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = std::move(value); }

    /**
     * <p>The container instance ID or full ARN entries for the container instance
     * where you would like to update the Amazon ECS container agent.</p>
     */
    inline void SetContainerInstance(const char* value) { m_containerInstanceHasBeenSet = true; m_containerInstance.assign(value); }

    /**
     * <p>The container instance ID or full ARN entries for the container instance
     * where you would like to update the Amazon ECS container agent.</p>
     */
    inline UpdateContainerAgentRequest& WithContainerInstance(const Aws::String& value) { SetContainerInstance(value); return *this;}

    /**
     * <p>The container instance ID or full ARN entries for the container instance
     * where you would like to update the Amazon ECS container agent.</p>
     */
    inline UpdateContainerAgentRequest& WithContainerInstance(Aws::String&& value) { SetContainerInstance(std::move(value)); return *this;}

    /**
     * <p>The container instance ID or full ARN entries for the container instance
     * where you would like to update the Amazon ECS container agent.</p>
     */
    inline UpdateContainerAgentRequest& WithContainerInstance(const char* value) { SetContainerInstance(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_containerInstance;
    bool m_containerInstanceHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
