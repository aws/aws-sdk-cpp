/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/Scale.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class UpdateTaskSetRequest : public ECSRequest
  {
  public:
    AWS_ECS_API UpdateTaskSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTaskSet"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set is found in.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set is found in.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set is found in.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set is found in.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set is found in.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set is found in.</p>
     */
    inline UpdateTaskSetRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set is found in.</p>
     */
    inline UpdateTaskSetRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set is found in.</p>
     */
    inline UpdateTaskSetRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set is found in.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set is found in.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set is found in.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set is found in.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set is found in.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set is found in.</p>
     */
    inline UpdateTaskSetRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set is found in.</p>
     */
    inline UpdateTaskSetRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set is found in.</p>
     */
    inline UpdateTaskSetRequest& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the task set to
     * update.</p>
     */
    inline const Aws::String& GetTaskSet() const{ return m_taskSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the task set to
     * update.</p>
     */
    inline bool TaskSetHasBeenSet() const { return m_taskSetHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the task set to
     * update.</p>
     */
    inline void SetTaskSet(const Aws::String& value) { m_taskSetHasBeenSet = true; m_taskSet = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the task set to
     * update.</p>
     */
    inline void SetTaskSet(Aws::String&& value) { m_taskSetHasBeenSet = true; m_taskSet = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the task set to
     * update.</p>
     */
    inline void SetTaskSet(const char* value) { m_taskSetHasBeenSet = true; m_taskSet.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the task set to
     * update.</p>
     */
    inline UpdateTaskSetRequest& WithTaskSet(const Aws::String& value) { SetTaskSet(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the task set to
     * update.</p>
     */
    inline UpdateTaskSetRequest& WithTaskSet(Aws::String&& value) { SetTaskSet(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the task set to
     * update.</p>
     */
    inline UpdateTaskSetRequest& WithTaskSet(const char* value) { SetTaskSet(value); return *this;}


    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline const Scale& GetScale() const{ return m_scale; }

    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }

    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline void SetScale(const Scale& value) { m_scaleHasBeenSet = true; m_scale = value; }

    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline void SetScale(Scale&& value) { m_scaleHasBeenSet = true; m_scale = std::move(value); }

    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline UpdateTaskSetRequest& WithScale(const Scale& value) { SetScale(value); return *this;}

    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline UpdateTaskSetRequest& WithScale(Scale&& value) { SetScale(std::move(value)); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::String m_service;
    bool m_serviceHasBeenSet = false;

    Aws::String m_taskSet;
    bool m_taskSetHasBeenSet = false;

    Scale m_scale;
    bool m_scaleHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
