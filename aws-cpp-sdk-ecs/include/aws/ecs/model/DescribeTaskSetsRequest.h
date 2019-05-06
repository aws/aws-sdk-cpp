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
  class AWS_ECS_API DescribeTaskSetsRequest : public ECSRequest
  {
  public:
    DescribeTaskSetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTaskSets"; }

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
    inline DescribeTaskSetsRequest& WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline DescribeTaskSetsRequest& WithCluster(Aws::String&& value) { SetCluster(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts
     * the service that the task sets exist in.</p>
     */
    inline DescribeTaskSetsRequest& WithCluster(const char* value) { SetCluster(value); return *this;}


    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline const Aws::String& GetService() const{ return m_service; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline bool ServiceHasBeenSet() const { return m_serviceHasBeenSet; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline void SetService(const Aws::String& value) { m_serviceHasBeenSet = true; m_service = value; }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline void SetService(Aws::String&& value) { m_serviceHasBeenSet = true; m_service = std::move(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline void SetService(const char* value) { m_serviceHasBeenSet = true; m_service.assign(value); }

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline DescribeTaskSetsRequest& WithService(const Aws::String& value) { SetService(value); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline DescribeTaskSetsRequest& WithService(Aws::String&& value) { SetService(std::move(value)); return *this;}

    /**
     * <p>The short name or full Amazon Resource Name (ARN) of the service that the
     * task sets exist in.</p>
     */
    inline DescribeTaskSetsRequest& WithService(const char* value) { SetService(value); return *this;}


    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTaskSets() const{ return m_taskSets; }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline bool TaskSetsHasBeenSet() const { return m_taskSetsHasBeenSet; }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline void SetTaskSets(const Aws::Vector<Aws::String>& value) { m_taskSetsHasBeenSet = true; m_taskSets = value; }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline void SetTaskSets(Aws::Vector<Aws::String>&& value) { m_taskSetsHasBeenSet = true; m_taskSets = std::move(value); }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline DescribeTaskSetsRequest& WithTaskSets(const Aws::Vector<Aws::String>& value) { SetTaskSets(value); return *this;}

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline DescribeTaskSetsRequest& WithTaskSets(Aws::Vector<Aws::String>&& value) { SetTaskSets(std::move(value)); return *this;}

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline DescribeTaskSetsRequest& AddTaskSets(const Aws::String& value) { m_taskSetsHasBeenSet = true; m_taskSets.push_back(value); return *this; }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline DescribeTaskSetsRequest& AddTaskSets(Aws::String&& value) { m_taskSetsHasBeenSet = true; m_taskSets.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID or full Amazon Resource Name (ARN) of task sets to describe.</p>
     */
    inline DescribeTaskSetsRequest& AddTaskSets(const char* value) { m_taskSetsHasBeenSet = true; m_taskSets.push_back(value); return *this; }

  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet;

    Aws::String m_service;
    bool m_serviceHasBeenSet;

    Aws::Vector<Aws::String> m_taskSets;
    bool m_taskSetsHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
