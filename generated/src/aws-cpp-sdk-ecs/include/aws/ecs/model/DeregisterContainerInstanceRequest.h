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
  class DeregisterContainerInstanceRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DeregisterContainerInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterContainerInstance"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to deregister. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to deregister. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to deregister. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to deregister. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to deregister. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to deregister. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DeregisterContainerInstanceRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to deregister. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DeregisterContainerInstanceRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the container instance to deregister. If you do not specify a cluster, the
     * default cluster is assumed.</p>
     */
    inline DeregisterContainerInstanceRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. For more information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline const Aws::String& GetContainerInstance() const{ return m_containerInstance; }

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. For more information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline bool ContainerInstanceHasBeenSet() const { return m_containerInstanceHasBeenSet; }

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. For more information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline void SetContainerInstance(const Aws::String& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = value; }

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. For more information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline void SetContainerInstance(Aws::String&& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = std::move(value); }

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. For more information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline void SetContainerInstance(const char* value) { m_containerInstanceHasBeenSet = true; m_containerInstance.assign(value); }

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. For more information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline DeregisterContainerInstanceRequest& WithContainerInstance(const Aws::String& value) { SetContainerInstance(value); return *this;}

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. For more information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline DeregisterContainerInstanceRequest& WithContainerInstance(Aws::String&& value) { SetContainerInstance(std::move(value)); return *this;}

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. For more information about the ARN format, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-account-settings.html#ecs-resource-ids">Amazon
     * Resource Name (ARN)</a> in the <i>Amazon ECS Developer Guide</i>.</p>
     */
    inline DeregisterContainerInstanceRequest& WithContainerInstance(const char* value) { SetContainerInstance(value); return *this;}


    /**
     * <p>Forces the container instance to be deregistered. If you have tasks running
     * on the container instance when you deregister it with the <code>force</code>
     * option, these tasks remain running until you terminate the instance or the tasks
     * stop through some other means, but they're orphaned (no longer monitored or
     * accounted for by Amazon ECS). If an orphaned task on your container instance is
     * part of an Amazon ECS service, then the service scheduler starts another copy of
     * that task, on a different container instance if possible. </p> <p>Any containers
     * in orphaned service tasks that are registered with a Classic Load Balancer or an
     * Application Load Balancer target group are deregistered. They begin connection
     * draining according to the settings on the load balancer or target group.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Forces the container instance to be deregistered. If you have tasks running
     * on the container instance when you deregister it with the <code>force</code>
     * option, these tasks remain running until you terminate the instance or the tasks
     * stop through some other means, but they're orphaned (no longer monitored or
     * accounted for by Amazon ECS). If an orphaned task on your container instance is
     * part of an Amazon ECS service, then the service scheduler starts another copy of
     * that task, on a different container instance if possible. </p> <p>Any containers
     * in orphaned service tasks that are registered with a Classic Load Balancer or an
     * Application Load Balancer target group are deregistered. They begin connection
     * draining according to the settings on the load balancer or target group.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Forces the container instance to be deregistered. If you have tasks running
     * on the container instance when you deregister it with the <code>force</code>
     * option, these tasks remain running until you terminate the instance or the tasks
     * stop through some other means, but they're orphaned (no longer monitored or
     * accounted for by Amazon ECS). If an orphaned task on your container instance is
     * part of an Amazon ECS service, then the service scheduler starts another copy of
     * that task, on a different container instance if possible. </p> <p>Any containers
     * in orphaned service tasks that are registered with a Classic Load Balancer or an
     * Application Load Balancer target group are deregistered. They begin connection
     * draining according to the settings on the load balancer or target group.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Forces the container instance to be deregistered. If you have tasks running
     * on the container instance when you deregister it with the <code>force</code>
     * option, these tasks remain running until you terminate the instance or the tasks
     * stop through some other means, but they're orphaned (no longer monitored or
     * accounted for by Amazon ECS). If an orphaned task on your container instance is
     * part of an Amazon ECS service, then the service scheduler starts another copy of
     * that task, on a different container instance if possible. </p> <p>Any containers
     * in orphaned service tasks that are registered with a Classic Load Balancer or an
     * Application Load Balancer target group are deregistered. They begin connection
     * draining according to the settings on the load balancer or target group.</p>
     */
    inline DeregisterContainerInstanceRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_containerInstance;
    bool m_containerInstanceHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
