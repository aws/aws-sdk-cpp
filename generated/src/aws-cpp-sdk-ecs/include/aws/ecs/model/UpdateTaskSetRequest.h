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
    AWS_ECS_API UpdateTaskSetRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTaskSet"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set is found in.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    UpdateTaskSetRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set is found in.</p>
     */
    inline const Aws::String& GetService() const { return m_service; }
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }
    template<typename ServiceT = Aws::String>
    void SetService(ServiceT&& value) { m_serviceHasBeenSet = true; m_service = std::forward<ServiceT>(value); }
    template<typename ServiceT = Aws::String>
    UpdateTaskSetRequest& WithService(ServiceT&& value) { SetService(std::forward<ServiceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the task set to
     * update.</p>
     */
    inline const Aws::String& GetTaskSet() const { return m_taskSet; }
    inline bool TaskSetHasBeenSet() const { return m_taskSetHasBeenSet; }
    template<typename TaskSetT = Aws::String>
    void SetTaskSet(TaskSetT&& value) { m_taskSetHasBeenSet = true; m_taskSet = std::forward<TaskSetT>(value); }
    template<typename TaskSetT = Aws::String>
    UpdateTaskSetRequest& WithTaskSet(TaskSetT&& value) { SetTaskSet(std::forward<TaskSetT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A floating-point percentage of the desired number of tasks to place and keep
     * running in the task set.</p>
     */
    inline const Scale& GetScale() const { return m_scale; }
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }
    template<typename ScaleT = Scale>
    void SetScale(ScaleT&& value) { m_scaleHasBeenSet = true; m_scale = std::forward<ScaleT>(value); }
    template<typename ScaleT = Scale>
    UpdateTaskSetRequest& WithScale(ScaleT&& value) { SetScale(std::forward<ScaleT>(value)); return *this;}
    ///@}
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
