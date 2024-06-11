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
  class ExecuteCommandRequest : public ECSRequest
  {
  public:
    AWS_ECS_API ExecuteCommandRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteCommand"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or short name of the cluster the task is
     * running in. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline ExecuteCommandRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline ExecuteCommandRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline ExecuteCommandRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the container to execute the command on. A container name only
     * needs to be specified for tasks containing multiple containers.</p>
     */
    inline const Aws::String& GetContainer() const{ return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    inline void SetContainer(const Aws::String& value) { m_containerHasBeenSet = true; m_container = value; }
    inline void SetContainer(Aws::String&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }
    inline void SetContainer(const char* value) { m_containerHasBeenSet = true; m_container.assign(value); }
    inline ExecuteCommandRequest& WithContainer(const Aws::String& value) { SetContainer(value); return *this;}
    inline ExecuteCommandRequest& WithContainer(Aws::String&& value) { SetContainer(std::move(value)); return *this;}
    inline ExecuteCommandRequest& WithContainer(const char* value) { SetContainer(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command to run on the container.</p>
     */
    inline const Aws::String& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline void SetCommand(const char* value) { m_commandHasBeenSet = true; m_command.assign(value); }
    inline ExecuteCommandRequest& WithCommand(const Aws::String& value) { SetCommand(value); return *this;}
    inline ExecuteCommandRequest& WithCommand(Aws::String&& value) { SetCommand(std::move(value)); return *this;}
    inline ExecuteCommandRequest& WithCommand(const char* value) { SetCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Use this flag to run your command in interactive mode.</p>
     */
    inline bool GetInteractive() const{ return m_interactive; }
    inline bool InteractiveHasBeenSet() const { return m_interactiveHasBeenSet; }
    inline void SetInteractive(bool value) { m_interactiveHasBeenSet = true; m_interactive = value; }
    inline ExecuteCommandRequest& WithInteractive(bool value) { SetInteractive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) or ID of the task the container is part
     * of.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }
    inline ExecuteCommandRequest& WithTask(const Aws::String& value) { SetTask(value); return *this;}
    inline ExecuteCommandRequest& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}
    inline ExecuteCommandRequest& WithTask(const char* value) { SetTask(value); return *this;}
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_container;
    bool m_containerHasBeenSet = false;

    Aws::String m_command;
    bool m_commandHasBeenSet = false;

    bool m_interactive;
    bool m_interactiveHasBeenSet = false;

    Aws::String m_task;
    bool m_taskHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
