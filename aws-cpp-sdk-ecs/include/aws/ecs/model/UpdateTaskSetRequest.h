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
  class AWS_ECS_API UpdateTaskSetRequest : public ECSRequest
  {
  public:
    UpdateTaskSetRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateTaskSet"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in.</p>
     */
    inline const Aws::String& GetCluster() const{ return m_cluster; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in.</p>
     */
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in.</p>
     */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in.</p>
     */
    inline void SetCluster(Aws::String&& value) { m_clusterHasBeenSet = true; m_cluster = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in.</p>
     */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in.</p>
     */
    inline UpdateTaskSetRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in.</p>
     */
    inline UpdateTaskSetRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task set exists in.</p>
     */
    inline UpdateTaskSetRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set exists in.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set exists in.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set exists in.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set exists in.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set exists in.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set exists in.</p>
     */
    inline UpdateTaskSetRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set exists in.</p>
     */
    inline UpdateTaskSetRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task set exists in.</p>
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


    
    inline const Scale& GetScale() const{ return m_scale; }

    
    inline bool ScaleHasBeenSet() const { return m_scaleHasBeenSet; }

    
    inline void SetScale(const Scale& value) { m_scaleHasBeenSet = true; m_scale = value; }

    
    inline void SetScale(Scale&& value) { m_scaleHasBeenSet = true; m_scale = std::move(value); }

    
    inline UpdateTaskSetRequest& WithScale(const Scale& value) { SetScale(value); return *this;}

    
    inline UpdateTaskSetRequest& WithScale(Scale&& value) { SetScale(std::move(value)); return *this;}

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::String m_service;
    bool m_serviceHasBeenSet;

    Aws::String m_taskSet;
    bool m_taskSetHasBeenSet;

    Scale m_scale;
    bool m_scaleHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
