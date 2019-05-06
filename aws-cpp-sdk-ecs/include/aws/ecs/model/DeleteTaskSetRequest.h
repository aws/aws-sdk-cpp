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
  class AWS_ECS_API DeleteTaskSetRequest : public ECSRequest
  {
  public:
    DeleteTaskSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteTaskSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in to delete.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in to delete.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in to delete.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in to delete.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in to delete.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in to delete.</p>
     */
    inline DeleteTaskSetRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in to delete.</p>
     */
    inline DeleteTaskSetRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in to delete.</p>
     */
    inline DeleteTaskSetRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that hosts
     * the task set to delete.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that hosts
     * the task set to delete.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that hosts
     * the task set to delete.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that hosts
     * the task set to delete.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that hosts
     * the task set to delete.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that hosts
     * the task set to delete.</p>
     */
    inline DeleteTaskSetRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that hosts
     * the task set to delete.</p>
     */
    inline DeleteTaskSetRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that hosts
     * the task set to delete.</p>
     */
    inline DeleteTaskSetRequest& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The task set ID or full Amazon Resource Name (ARN) of the task set to
     * delete.</p>
     */
    inline const Aws::String& GetTaskSet() const{ return m_taskSet; }

    /**
     * <p>The task set ID or full Amazon Resource Name (ARN) of the task set to
     * delete.</p>
     */
    inline bool TaskSetHasBeenSet() const { return m_taskSetHasBeenSet; }

    /**
     * <p>The task set ID or full Amazon Resource Name (ARN) of the task set to
     * delete.</p>
     */
    inline void SetTaskSet(const Aws::String& value) { m_taskSetHasBeenSet = true; m_taskSet = value; }

    /**
     * <p>The task set ID or full Amazon Resource Name (ARN) of the task set to
     * delete.</p>
     */
    inline void SetTaskSet(Aws::String&& value) { m_taskSetHasBeenSet = true; m_taskSet = std::move(value); }

    /**
     * <p>The task set ID or full Amazon Resource Name (ARN) of the task set to
     * delete.</p>
     */
    inline void SetTaskSet(const char* value) { m_taskSetHasBeenSet = true; m_taskSet.assign(value); }

    /**
     * <p>The task set ID or full Amazon Resource Name (ARN) of the task set to
     * delete.</p>
     */
    inline DeleteTaskSetRequest& WithTaskSet(const Aws::String& value) { SetTaskSet(value); return *this;}

    /**
     * <p>The task set ID or full Amazon Resource Name (ARN) of the task set to
     * delete.</p>
     */
    inline DeleteTaskSetRequest& WithTaskSet(Aws::String&& value) { SetTaskSet(std::move(value)); return *this;}

    /**
     * <p>The task set ID or full Amazon Resource Name (ARN) of the task set to
     * delete.</p>
     */
    inline DeleteTaskSetRequest& WithTaskSet(const char* value) { SetTaskSet(value); return *this;}


    /**
     * <p>If <code>true</code>, this allows you to delete a task set even if it hasn't
     * been scaled down to zero.</p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>If <code>true</code>, this allows you to delete a task set even if it hasn't
     * been scaled down to zero.</p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>If <code>true</code>, this allows you to delete a task set even if it hasn't
     * been scaled down to zero.</p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>If <code>true</code>, this allows you to delete a task set even if it hasn't
     * been scaled down to zero.</p>
     */
    inline DeleteTaskSetRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::String m_service;
    bool m_serviceHasBeenSet;

    Aws::String m_taskSet;
    bool m_taskSetHasBeenSet;

    bool m_force;
    bool m_forceHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
