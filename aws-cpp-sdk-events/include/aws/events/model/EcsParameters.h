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
#include <aws/events/CloudWatchEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CloudWatchEvents
{
namespace Model
{

  /**
   * <p>The custom parameters to be used when the target is an Amazon ECS
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/events-2015-10-07/EcsParameters">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDWATCHEVENTS_API EcsParameters
  {
  public:
    EcsParameters();
    EcsParameters(const Aws::Utils::Json::JsonValue& jsonValue);
    EcsParameters& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * cluster. </p>
     */
    inline const Aws::String& GetTaskDefinitionArn() const{ return m_taskDefinitionArn; }

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * cluster. </p>
     */
    inline void SetTaskDefinitionArn(const Aws::String& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = value; }

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * cluster. </p>
     */
    inline void SetTaskDefinitionArn(Aws::String&& value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn = std::move(value); }

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * cluster. </p>
     */
    inline void SetTaskDefinitionArn(const char* value) { m_taskDefinitionArnHasBeenSet = true; m_taskDefinitionArn.assign(value); }

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * cluster. </p>
     */
    inline EcsParameters& WithTaskDefinitionArn(const Aws::String& value) { SetTaskDefinitionArn(value); return *this;}

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * cluster. </p>
     */
    inline EcsParameters& WithTaskDefinitionArn(Aws::String&& value) { SetTaskDefinitionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the task definition to use if the event target is an Amazon ECS
     * cluster. </p>
     */
    inline EcsParameters& WithTaskDefinitionArn(const char* value) { SetTaskDefinitionArn(value); return *this;}


    /**
     * <p>The number of tasks to create based on the <code>TaskDefinition</code>. The
     * default is one.</p>
     */
    inline int GetTaskCount() const{ return m_taskCount; }

    /**
     * <p>The number of tasks to create based on the <code>TaskDefinition</code>. The
     * default is one.</p>
     */
    inline void SetTaskCount(int value) { m_taskCountHasBeenSet = true; m_taskCount = value; }

    /**
     * <p>The number of tasks to create based on the <code>TaskDefinition</code>. The
     * default is one.</p>
     */
    inline EcsParameters& WithTaskCount(int value) { SetTaskCount(value); return *this;}

  private:

    Aws::String m_taskDefinitionArn;
    bool m_taskDefinitionArnHasBeenSet;

    int m_taskCount;
    bool m_taskCountHasBeenSet;
  };

} // namespace Model
} // namespace CloudWatchEvents
} // namespace Aws
