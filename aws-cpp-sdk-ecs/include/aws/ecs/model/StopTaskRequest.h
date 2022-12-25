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
  class StopTaskRequest : public ECSRequest
  {
  public:
    AWS_ECS_API StopTaskRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopTask"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task to stop. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task to stop. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task to stop. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task to stop. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task to stop. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task to stop. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline StopTaskRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task to stop. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline StopTaskRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task to stop. If you do not specify a cluster, the default cluster is
     * assumed.</p>
     */
    inline StopTaskRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task to stop.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task to stop.</p>
     */
    inline bool TaskHasBeenSet() const { return m_taskHasBeenSet; }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task to stop.</p>
     */
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task to stop.</p>
     */
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = std::move(value); }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task to stop.</p>
     */
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task to stop.</p>
     */
    inline StopTaskRequest& WithTask(const Aws::String& value) { SetTask(value); return *this;}

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task to stop.</p>
     */
    inline StopTaskRequest& WithTask(Aws::String&& value) { SetTask(std::move(value)); return *this;}

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task to stop.</p>
     */
    inline StopTaskRequest& WithTask(const char* value) { SetTask(value); return *this;}


    /**
     * <p>An optional message specified when a task is stopped. For example, if you're
     * using a custom scheduler, you can use this parameter to specify the reason for
     * stopping the task here, and the message appears in subsequent
     * <a>DescribeTasks</a> API operations on this task. Up to 255 characters are
     * allowed in this message.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>An optional message specified when a task is stopped. For example, if you're
     * using a custom scheduler, you can use this parameter to specify the reason for
     * stopping the task here, and the message appears in subsequent
     * <a>DescribeTasks</a> API operations on this task. Up to 255 characters are
     * allowed in this message.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>An optional message specified when a task is stopped. For example, if you're
     * using a custom scheduler, you can use this parameter to specify the reason for
     * stopping the task here, and the message appears in subsequent
     * <a>DescribeTasks</a> API operations on this task. Up to 255 characters are
     * allowed in this message.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>An optional message specified when a task is stopped. For example, if you're
     * using a custom scheduler, you can use this parameter to specify the reason for
     * stopping the task here, and the message appears in subsequent
     * <a>DescribeTasks</a> API operations on this task. Up to 255 characters are
     * allowed in this message.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>An optional message specified when a task is stopped. For example, if you're
     * using a custom scheduler, you can use this parameter to specify the reason for
     * stopping the task here, and the message appears in subsequent
     * <a>DescribeTasks</a> API operations on this task. Up to 255 characters are
     * allowed in this message.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>An optional message specified when a task is stopped. For example, if you're
     * using a custom scheduler, you can use this parameter to specify the reason for
     * stopping the task here, and the message appears in subsequent
     * <a>DescribeTasks</a> API operations on this task. Up to 255 characters are
     * allowed in this message.</p>
     */
    inline StopTaskRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>An optional message specified when a task is stopped. For example, if you're
     * using a custom scheduler, you can use this parameter to specify the reason for
     * stopping the task here, and the message appears in subsequent
     * <a>DescribeTasks</a> API operations on this task. Up to 255 characters are
     * allowed in this message.</p>
     */
    inline StopTaskRequest& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>An optional message specified when a task is stopped. For example, if you're
     * using a custom scheduler, you can use this parameter to specify the reason for
     * stopping the task here, and the message appears in subsequent
     * <a>DescribeTasks</a> API operations on this task. Up to 255 characters are
     * allowed in this message.</p>
     */
    inline StopTaskRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_task;
    bool m_taskHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
