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
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /*
  */
  class AWS_ECS_API StopTaskRequest : public ECSRequest
  {
  public:
    StopTaskRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts the task you want to stop. If you do not specify a cluster, the default cluster is assumed..</p>
    */
    inline const Aws::String& GetCluster() const{ return m_cluster; }
    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts the task you want to stop. If you do not specify a cluster, the default cluster is assumed..</p>
    */
    inline void SetCluster(const Aws::String& value) { m_clusterHasBeenSet = true; m_cluster = value; }

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts the task you want to stop. If you do not specify a cluster, the default cluster is assumed..</p>
    */
    inline void SetCluster(const char* value) { m_clusterHasBeenSet = true; m_cluster.assign(value); }

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts the task you want to stop. If you do not specify a cluster, the default cluster is assumed..</p>
    */
    inline StopTaskRequest&  WithCluster(const Aws::String& value) { SetCluster(value); return *this;}

    /*
     <p>The short name or full Amazon Resource Name (ARN) of the cluster that hosts the task you want to stop. If you do not specify a cluster, the default cluster is assumed..</p>
    */
    inline StopTaskRequest& WithCluster(const char* value) { SetCluster(value); return *this;}

    /*
     <p>The task UUIDs or full Amazon Resource Name (ARN) entry of the task you would like to stop.</p>
    */
    inline const Aws::String& GetTask() const{ return m_task; }
    /*
     <p>The task UUIDs or full Amazon Resource Name (ARN) entry of the task you would like to stop.</p>
    */
    inline void SetTask(const Aws::String& value) { m_task = value; }

    /*
     <p>The task UUIDs or full Amazon Resource Name (ARN) entry of the task you would like to stop.</p>
    */
    inline void SetTask(const char* value) { m_task.assign(value); }

    /*
     <p>The task UUIDs or full Amazon Resource Name (ARN) entry of the task you would like to stop.</p>
    */
    inline StopTaskRequest&  WithTask(const Aws::String& value) { SetTask(value); return *this;}

    /*
     <p>The task UUIDs or full Amazon Resource Name (ARN) entry of the task you would like to stop.</p>
    */
    inline StopTaskRequest& WithTask(const char* value) { SetTask(value); return *this;}

  private:
    Aws::String m_cluster;
    bool m_clusterHasBeenSet;
    Aws::String m_task;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
