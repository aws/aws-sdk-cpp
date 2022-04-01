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
  class AWS_ECS_API ExecuteCommandRequest : public ECSRequest
  {
  public:
    ExecuteCommandRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteCommand"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The Amazon Resource Name (ARN) or short name of the cluster the task is
     * running in. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The Amazon Resource Name (ARN) or short name of the cluster the task is
     * running in. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or short name of the cluster the task is
     * running in. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or short name of the cluster the task is
     * running in. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or short name of the cluster the task is
     * running in. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or short name of the cluster the task is
     * running in. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline ExecuteCommandRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or short name of the cluster the task is
     * running in. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline ExecuteCommandRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or short name of the cluster the task is
     * running in. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline ExecuteCommandRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The name of the container to execute the command on. A container name only
     * needs to be specified for tasks containing multiple containers.</p>
     */
    inline const Aws::String& GetContainer() const{ return m_container; }

    /**
     * <p>The name of the container to execute the command on. A container name only
     * needs to be specified for tasks containing multiple containers.</p>
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * <p>The name of the container to execute the command on. A container name only
     * needs to be specified for tasks containing multiple containers.</p>
     */
    inline void SetContainer(const Aws::String& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * <p>The name of the container to execute the command on. A container name only
     * needs to be specified for tasks containing multiple containers.</p>
     */
    inline void SetContainer(Aws::String&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * <p>The name of the container to execute the command on. A container name only
     * needs to be specified for tasks containing multiple containers.</p>
     */
    inline void SetContainer(const char* value) { m_containerHasBeenSet = true; m_container.assign(value); }

    /**
     * <p>The name of the container to execute the command on. A container name only
     * needs to be specified for tasks containing multiple containers.</p>
     */
    inline ExecuteCommandRequest& WithContainer(const Aws::String& value) { SetContainer(value); return *this;}

    /**
     * <p>The name of the container to execute the command on. A container name only
     * needs to be specified for tasks containing multiple containers.</p>
     */
    inline ExecuteCommandRequest& WithContainer(Aws::String&& value) { SetContainer(std::move(value)); return *this;}

    /**
     * <p>The name of the container to execute the command on. A container name only
     * needs to be specified for tasks containing multiple containers.</p>
     */
    inline ExecuteCommandRequest& WithContainer(const char* value) { SetContainer(value); return *this;}


    /**
     * <p>The command to run on the container.</p>
     */
    inline const Aws::String& GetCommand() const{ return m_command; }

    /**
     * <p>The command to run on the container.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>The command to run on the container.</p>
     */
    inline void SetCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>The command to run on the container.</p>
     */
    inline void SetCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>The command to run on the container.</p>
     */
    inline void SetCommand(const char* value) { m_commandHasBeenSet = true; m_command.assign(value); }

    /**
     * <p>The command to run on the container.</p>
     */
    inline ExecuteCommandRequest& WithCommand(const Aws::String& value) { SetCommand(value); return *this;}

    /**
     * <p>The command to run on the container.</p>
     */
    inline ExecuteCommandRequest& WithCommand(Aws::String&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>The command to run on the container.</p>
     */
    inline ExecuteCommandRequest& WithCommand(const char* value) { SetCommand(value); return *this;}


    /**
     * <p>Use this flag to run your command in interactive mode.</p>
     */
    inline bool GetInteractive() const{ return m_interactive; }

    /**
     * <p>Use this flag to run your command in interactive mode.</p>
     */
    inline bool InteractiveHasBeenSet() const { return m_interactiveHasBeenSet; }

    /**
     * <p>Use this flag to run your command in interactive mode.</p>
     */
    inline void SetInteractive(bool value) { m_interactiveHasBeenSet = true; m_interactive = value; }

    /**
     * <p>Use this flag to run your command in interactive mode.</p>
     */
    inline ExecuteCommandRequest& WithInteractive(bool value) { SetInteractive(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) or ID of the task the container is part
     * of.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the task the container is part
     * of.</p>
     */
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the task the container is part
     * of.</p>
     */
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the task the container is part
     * of.</p>
     */
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the task the container is part
     * of.</p>
     */
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the task the container is part
     * of.</p>
     */
    inline ExecuteCommandRequest& WithTask(const Aws::String& value) { SetTask(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the task the container is part
     * of.</p>
     */
    inline ExecuteCommandRequest& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) or ID of the task the container is part
     * of.</p>
     */
    inline ExecuteCommandRequest& WithTask(const char* value) { SetTask(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::String m_container;
    bool m_containerHasBeenSet;

    Aws::String m_command;
    bool m_commandHasBeenSet;

    bool m_interactive;
    bool m_interactiveHasBeenSet;

    Aws::String m_task;
    bool m_taskHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
