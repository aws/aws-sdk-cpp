/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API SubmitTaskStateChangeRequest : public ECSRequest
  {
  public:
    SubmitTaskStateChangeRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline SubmitTaskStateChangeRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline SubmitTaskStateChangeRequest& WithCluster(Aws::String&& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the task.</p>
     */
    inline SubmitTaskStateChangeRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task in the state
     * change request.</p>
     */
    inline const Aws::String& GetTask() const{ return m_task; }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task in the state
     * change request.</p>
     */
    inline void SetTask(const Aws::String& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task in the state
     * change request.</p>
     */
    inline void SetTask(Aws::String&& value) { m_taskHasBeenSet = true; m_task = value; }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task in the state
     * change request.</p>
     */
    inline void SetTask(const char* value) { m_taskHasBeenSet = true; m_task.assign(value); }

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task in the state
     * change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithTask(const Aws::String& value) { SetTask(value); return *this;}

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task in the state
     * change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithTask(Aws::String&& value) { SetTask(value); return *this;}

    /**
     * <p>The task ID or full Amazon Resource Name (ARN) of the task in the state
     * change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithTask(const char* value) { SetTask(value); return *this;}

    /**
     * <p>The status of the state change request.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the state change request.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the state change request.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the state change request.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithStatus(Aws::String&& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithStatus(const char* value) { SetStatus(value); return *this;}

    /**
     * <p>The reason for the state change request.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the state change request.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the state change request.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the state change request.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithReason(Aws::String&& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the state change request.</p>
     */
    inline SubmitTaskStateChangeRequest& WithReason(const char* value) { SetReason(value); return *this;}

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::String m_task;
    bool m_taskHasBeenSet;
    Aws::String m_status;
    bool m_statusHasBeenSet;
    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
