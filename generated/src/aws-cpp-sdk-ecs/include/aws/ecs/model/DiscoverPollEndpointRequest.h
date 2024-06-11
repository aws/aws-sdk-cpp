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
  class DiscoverPollEndpointRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DiscoverPollEndpointRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DiscoverPollEndpoint"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The container instance ID or full ARN of the container instance. For more
     * information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetContainerInstance() const{ return m_containerInstance; }
    inline bool ContainerInstanceHasBeenSet() const { return m_containerInstanceHasBeenSet; }
    inline void SetContainerInstance(const Aws::String& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = value; }
    inline void SetContainerInstance(Aws::String&& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = std::move(value); }
    inline void SetContainerInstance(const char* value) { m_containerInstanceHasBeenSet = true; m_containerInstance.assign(value); }
    inline DiscoverPollEndpointRequest& WithContainerInstance(const Aws::String& value) { SetContainerInstance(value); return *this;}
    inline DiscoverPollEndpointRequest& WithContainerInstance(Aws::String&& value) { SetContainerInstance(std::move(value)); return *this;}
    inline DiscoverPollEndpointRequest& WithContainerInstance(const char* value) { SetContainerInstance(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that the
     * container instance belongs to.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline DiscoverPollEndpointRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline DiscoverPollEndpointRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline DiscoverPollEndpointRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}
  private:

    Aws::String m_containerInstance;
    bool m_containerInstanceHasBeenSet = false;

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
