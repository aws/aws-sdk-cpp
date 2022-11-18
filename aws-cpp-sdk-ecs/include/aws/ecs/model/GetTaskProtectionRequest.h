﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class AWS_ECS_API GetTaskProtectionRequest : public ECSRequest
  {
  public:
    GetTaskProtectionRequest();

    /**
     * Virtual Copy Constructor idiom;
     * Override in an inherited class to have overridden functions (such as GetRequestSpecificHeaders) be called by the SDK.
     * (If you are creating a child of this: don't forget to keep the original return type or (better) just use the 'override' keyword)
    */
    virtual Aws::UniquePtr<GetTaskProtectionRequest> Clone() const
    {
      return Aws::MakeUnique<GetTaskProtectionRequest>(GetServiceRequestName(), *this);
    }

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTaskProtection"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline GetTaskProtectionRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline GetTaskProtectionRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline GetTaskProtectionRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTasks() const{ return m_tasks; }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline bool TasksHasBeenSet() const { return m_tasksHasBeenSet; }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline void SetTasks(const Aws::Vector<Aws::String>& value) { m_tasksHasBeenSet = true; m_tasks = value; }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline void SetTasks(Aws::Vector<Aws::String>&& value) { m_tasksHasBeenSet = true; m_tasks = std::move(value); }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline GetTaskProtectionRequest& WithTasks(const Aws::Vector<Aws::String>& value) { SetTasks(value); return *this;}

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline GetTaskProtectionRequest& WithTasks(Aws::Vector<Aws::String>&& value) { SetTasks(std::move(value)); return *this;}

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline GetTaskProtectionRequest& AddTasks(const Aws::String& value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline GetTaskProtectionRequest& AddTasks(Aws::String&& value) { m_tasksHasBeenSet = true; m_tasks.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of up to 100 task IDs or full ARN entries.</p>
     */
    inline GetTaskProtectionRequest& AddTasks(const char* value) { m_tasksHasBeenSet = true; m_tasks.push_back(value); return *this; }

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<Aws::String> m_tasks;
    bool m_tasksHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
