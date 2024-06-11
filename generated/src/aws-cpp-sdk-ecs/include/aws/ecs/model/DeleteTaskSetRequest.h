﻿/**
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
  class DeleteTaskSetRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DeleteTaskSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTaskSet"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set found in to delete.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }
    inline DeleteTaskSetRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}
    inline DeleteTaskSetRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}
    inline DeleteTaskSetRequest& WithCluster(const char* value) { SetCluster(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that hosts
     * the task set to delete.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }
    inline DeleteTaskSetRequest& WithService(const Aws::String& value) { SetService(value); return *this;}
    inline DeleteTaskSetRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}
    inline DeleteTaskSetRequest& WithService(const char* value) { SetService(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The task set ID or full Amazon Resource Name (ARN) of the task set to
     * delete.</p>
     */
    inline const Aws::String& GetTaskSet() const{ return m_taskSet; }
    inline bool TaskSetHasBeenSet() const { return m_taskSetHasBeenSet; }
    inline void SetTaskSet(const Aws::String& value) { m_taskSetHasBeenSet = true; m_taskSet = value; }
    inline void SetTaskSet(Aws::String&& value) { m_taskSetHasBeenSet = true; m_taskSet = std::move(value); }
    inline void SetTaskSet(const char* value) { m_taskSetHasBeenSet = true; m_taskSet.assign(value); }
    inline DeleteTaskSetRequest& WithTaskSet(const Aws::String& value) { SetTaskSet(value); return *this;}
    inline DeleteTaskSetRequest& WithTaskSet(Aws::String&& value) { SetTaskSet(std::move(value)); return *this;}
    inline DeleteTaskSetRequest& WithTaskSet(const char* value) { SetTaskSet(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If <code>true</code>, you can delete a task set even if it hasn't been scaled
     * down to zero.</p>
     */
    inline bool GetForce() const{ return m_force; }
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }
    inline DeleteTaskSetRequest& WithForce(bool value) { SetForce(value); return *this;}
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_taskSet;
    bool m_taskSetHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
