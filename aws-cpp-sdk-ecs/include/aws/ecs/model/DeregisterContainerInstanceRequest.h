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
  class AWS_ECS_API DeregisterContainerInstanceRequest : public ECSRequest
  {
  public:
    DeregisterContainerInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeregisterContainerInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


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
     * deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by
     * the Region of the container instance, the AWS account ID of the container
     * instance owner, the <code>container-instance</code> namespace, and then the
     * container instance ID. For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline const Aws::String& GetContainerInstance() const{ return m_containerInstance; }

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by
     * the Region of the container instance, the AWS account ID of the container
     * instance owner, the <code>container-instance</code> namespace, and then the
     * container instance ID. For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline bool ContainerInstanceHasBeenSet() const { return m_containerInstanceHasBeenSet; }

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by
     * the Region of the container instance, the AWS account ID of the container
     * instance owner, the <code>container-instance</code> namespace, and then the
     * container instance ID. For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline void SetContainerInstance(const Aws::String& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = value; }

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by
     * the Region of the container instance, the AWS account ID of the container
     * instance owner, the <code>container-instance</code> namespace, and then the
     * container instance ID. For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline void SetContainerInstance(Aws::String&& value) { m_containerInstanceHasBeenSet = true; m_containerInstance = std::move(value); }

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by
     * the Region of the container instance, the AWS account ID of the container
     * instance owner, the <code>container-instance</code> namespace, and then the
     * container instance ID. For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline void SetContainerInstance(const char* value) { m_containerInstanceHasBeenSet = true; m_containerInstance.assign(value); }

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by
     * the Region of the container instance, the AWS account ID of the container
     * instance owner, the <code>container-instance</code> namespace, and then the
     * container instance ID. For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline DeregisterContainerInstanceRequest& WithContainerInstance(const Aws::String& value) { SetContainerInstance(value); return *this;}

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by
     * the Region of the container instance, the AWS account ID of the container
     * instance owner, the <code>container-instance</code> namespace, and then the
     * container instance ID. For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline DeregisterContainerInstanceRequest& WithContainerInstance(Aws::String&& value) { SetContainerInstance(std::move(value)); return *this;}

    /**
     * <p>The container instance ID or full ARN of the container instance to
     * deregister. The ARN contains the <code>arn:aws:ecs</code> namespace, followed by
     * the Region of the container instance, the AWS account ID of the container
     * instance owner, the <code>container-instance</code> namespace, and then the
     * container instance ID. For example,
     * <code>arn:aws:ecs:region:aws_account_id:container-instance/container_instance_ID</code>.</p>
     */
    inline DeregisterContainerInstanceRequest& WithContainerInstance(const char* value) { SetContainerInstance(value); return *this;}


    /**
     * <p>Forces the deregistration of the container instance. If you have tasks
     * running on the container instance when you deregister it with the
     * <code>force</code> option, these tasks remain running until you terminate the
     * instance or the tasks stop through some other means, but they are orphaned (no
     * longer monitored or accounted for by Amazon ECS). If an orphaned task on your
     * container instance is part of an Amazon ECS service, then the service scheduler
     * starts another copy of that task, on a different container instance if possible.
     * </p> <p>Any containers in orphaned service tasks that are registered with a
     * Classic Load Balancer or an Application Load Balancer target group are
     * deregistered. They begin connection draining according to the settings on the
     * load balancer or target group.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>Forces the deregistration of the container instance. If you have tasks
     * running on the container instance when you deregister it with the
     * <code>force</code> option, these tasks remain running until you terminate the
     * instance or the tasks stop through some other means, but they are orphaned (no
     * longer monitored or accounted for by Amazon ECS). If an orphaned task on your
     * container instance is part of an Amazon ECS service, then the service scheduler
     * starts another copy of that task, on a different container instance if possible.
     * </p> <p>Any containers in orphaned service tasks that are registered with a
     * Classic Load Balancer or an Application Load Balancer target group are
     * deregistered. They begin connection draining according to the settings on the
     * load balancer or target group.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>Forces the deregistration of the container instance. If you have tasks
     * running on the container instance when you deregister it with the
     * <code>force</code> option, these tasks remain running until you terminate the
     * instance or the tasks stop through some other means, but they are orphaned (no
     * longer monitored or accounted for by Amazon ECS). If an orphaned task on your
     * container instance is part of an Amazon ECS service, then the service scheduler
     * starts another copy of that task, on a different container instance if possible.
     * </p> <p>Any containers in orphaned service tasks that are registered with a
     * Classic Load Balancer or an Application Load Balancer target group are
     * deregistered. They begin connection draining according to the settings on the
     * load balancer or target group.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>Forces the deregistration of the container instance. If you have tasks
     * running on the container instance when you deregister it with the
     * <code>force</code> option, these tasks remain running until you terminate the
     * instance or the tasks stop through some other means, but they are orphaned (no
     * longer monitored or accounted for by Amazon ECS). If an orphaned task on your
     * container instance is part of an Amazon ECS service, then the service scheduler
     * starts another copy of that task, on a different container instance if possible.
     * </p> <p>Any containers in orphaned service tasks that are registered with a
     * Classic Load Balancer or an Application Load Balancer target group are
     * deregistered. They begin connection draining according to the settings on the
     * load balancer or target group.</p>
     */
    inline DeregisterContainerInstanceRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::String m_containerInstance;
    bool m_containerInstanceHasBeenSet;

    bool m_force;
    bool m_forceHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
