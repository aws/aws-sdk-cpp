/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/TaskOverride.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/Container.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{
  /*
    $shape.documentation
  */
  class AWS_ECS_API Task
  {
  public:
    Task();
    Task(const Aws::Utils::Json::JsonValue& jsonValue);
    Task& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /*
     <p>The Amazon Resource Name (ARN) of the task.</p>
    */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }
    /*
     <p>The Amazon Resource Name (ARN) of the task.</p>
    */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the task.</p>
    */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the task.</p>
    */
    inline Task&  WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the task.</p>
    */
    inline Task& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the of the cluster that hosts the task.</p>
    */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    /*
     <p>The Amazon Resource Name (ARN) of the of the cluster that hosts the task.</p>
    */
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the of the cluster that hosts the task.</p>
    */
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the of the cluster that hosts the task.</p>
    */
    inline Task&  WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the of the cluster that hosts the task.</p>
    */
    inline Task& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the of the task definition that creates the task.</p>
    */
    inline const Aws::String& GetTaskDefinitionArn() const{ return m_taskDefinitionArn; }
    /*
     <p>The Amazon Resource Name (ARN) of the of the task definition that creates the task.</p>
    */
    inline void SetTaskDefinitionArn(const Aws::String& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the of the task definition that creates the task.</p>
    */
    inline void SetTaskDefinitionArn(const char* value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the of the task definition that creates the task.</p>
    */
    inline Task&  WithTaskDefinitionArn(const Aws::String& value) { SetTaskDefinitionArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the of the task definition that creates the task.</p>
    */
    inline Task& WithTaskDefinitionArn(const char* value) { SetTaskDefinitionArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the container instances that host the task.</p>
    */
    inline const Aws::String& GetContainerInstanceArn() const{ return m_containerInstanceArn; }
    /*
     <p>The Amazon Resource Name (ARN) of the container instances that host the task.</p>
    */
    inline void SetContainerInstanceArn(const Aws::String& value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn = value; }

    /*
     <p>The Amazon Resource Name (ARN) of the container instances that host the task.</p>
    */
    inline void SetContainerInstanceArn(const char* value) { m_containerInstanceArnHasBeenSet = true; m_containerInstanceArn.assign(value); }

    /*
     <p>The Amazon Resource Name (ARN) of the container instances that host the task.</p>
    */
    inline Task&  WithContainerInstanceArn(const Aws::String& value) { SetContainerInstanceArn(value); return *this;}

    /*
     <p>The Amazon Resource Name (ARN) of the container instances that host the task.</p>
    */
    inline Task& WithContainerInstanceArn(const char* value) { SetContainerInstanceArn(value); return *this;}

    /*
     <p>One or more container overrides.</p>
    */
    inline const TaskOverride& GetOverrides() const{ return m_overrides; }
    /*
     <p>One or more container overrides.</p>
    */
    inline void SetOverrides(const TaskOverride& value) { m_overridesHasBeenSet = true; m_overrides = value; }

    /*
     <p>One or more container overrides.</p>
    */
    inline Task&  WithOverrides(const TaskOverride& value) { SetOverrides(value); return *this;}

    /*
     <p>The last known status of the task.</p>
    */
    inline const Aws::String& GetLastStatus() const{ return m_lastStatus; }
    /*
     <p>The last known status of the task.</p>
    */
    inline void SetLastStatus(const Aws::String& value) { m_lastStatusHasBeenSet = true; m_lastStatus = value; }

    /*
     <p>The last known status of the task.</p>
    */
    inline void SetLastStatus(const char* value) { m_lastStatusHasBeenSet = true; m_lastStatus.assign(value); }

    /*
     <p>The last known status of the task.</p>
    */
    inline Task&  WithLastStatus(const Aws::String& value) { SetLastStatus(value); return *this;}

    /*
     <p>The last known status of the task.</p>
    */
    inline Task& WithLastStatus(const char* value) { SetLastStatus(value); return *this;}

    /*
     <p>The desired status of the task.</p>
    */
    inline const Aws::String& GetDesiredStatus() const{ return m_desiredStatus; }
    /*
     <p>The desired status of the task.</p>
    */
    inline void SetDesiredStatus(const Aws::String& value) { m_desiredStatusHasBeenSet = true; m_desiredStatus = value; }

    /*
     <p>The desired status of the task.</p>
    */
    inline void SetDesiredStatus(const char* value) { m_desiredStatusHasBeenSet = true; m_desiredStatus.assign(value); }

    /*
     <p>The desired status of the task.</p>
    */
    inline Task&  WithDesiredStatus(const Aws::String& value) { SetDesiredStatus(value); return *this;}

    /*
     <p>The desired status of the task.</p>
    */
    inline Task& WithDesiredStatus(const char* value) { SetDesiredStatus(value); return *this;}

    /*
     <p>The containers associated with the task.</p>
    */
    inline const Aws::Vector<Container>& GetContainers() const{ return m_containers; }
    /*
     <p>The containers associated with the task.</p>
    */
    inline void SetContainers(const Aws::Vector<Container>& value) { m_containersHasBeenSet = true; m_containers = value; }

    /*
     <p>The containers associated with the task.</p>
    */
    inline Task&  WithContainers(const Aws::Vector<Container>& value) { SetContainers(value); return *this;}

    /*
     <p>The containers associated with the task.</p>
    */
    inline Task& AddContainers(const Container& value) { m_containersHasBeenSet = true; m_containers.push_back(value); return *this; }

    /*
     <p>The tag specified when a task is started. If the task is started by an Amazon ECS service, then the <code>startedBy</code> parameter contains the deployment ID of the service that starts it.</p>
    */
    inline const Aws::String& GetStartedBy() const{ return m_startedBy; }
    /*
     <p>The tag specified when a task is started. If the task is started by an Amazon ECS service, then the <code>startedBy</code> parameter contains the deployment ID of the service that starts it.</p>
    */
    inline void SetStartedBy(const Aws::String& value) { m_startedByHasBeenSet = true; m_startedBy = value; }

    /*
     <p>The tag specified when a task is started. If the task is started by an Amazon ECS service, then the <code>startedBy</code> parameter contains the deployment ID of the service that starts it.</p>
    */
    inline void SetStartedBy(const char* value) { m_startedByHasBeenSet = true; m_startedBy.assign(value); }

    /*
     <p>The tag specified when a task is started. If the task is started by an Amazon ECS service, then the <code>startedBy</code> parameter contains the deployment ID of the service that starts it.</p>
    */
    inline Task&  WithStartedBy(const Aws::String& value) { SetStartedBy(value); return *this;}

    /*
     <p>The tag specified when a task is started. If the task is started by an Amazon ECS service, then the <code>startedBy</code> parameter contains the deployment ID of the service that starts it.</p>
    */
    inline Task& WithStartedBy(const char* value) { SetStartedBy(value); return *this;}

  private:
    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet;
    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet;
    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet;
    Aws::String m_containerInstanceArn;
    bool m_containerInstanceArnHasBeenSet;
    TaskOverride m_overrides;
    bool m_overridesHasBeenSet;
    Aws::String m_lastStatus;
    bool m_lastStatusHasBeenSet;
    Aws::String m_desiredStatus;
    bool m_desiredStatusHasBeenSet;
    Aws::Vector<Container> m_containers;
    bool m_containersHasBeenSet;
    Aws::String m_startedBy;
    bool m_startedByHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
