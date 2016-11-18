﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

  /**
   */
  class AWS_ECS_API DescribeTaskDefinitionRequest : public ECSRequest
  {
  public:
    DescribeTaskDefinitionRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The <code>family</code> for the latest <code>ACTIVE</code> revision,
     * <code>family</code> and <code>revision</code> (<code>family:revision</code>) for
     * a specific revision in the family, or full Amazon Resource Name (ARN) of the
     * task definition to describe.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }

    /**
     * <p>The <code>family</code> for the latest <code>ACTIVE</code> revision,
     * <code>family</code> and <code>revision</code> (<code>family:revision</code>) for
     * a specific revision in the family, or full Amazon Resource Name (ARN) of the
     * task definition to describe.</p>
     */
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The <code>family</code> for the latest <code>ACTIVE</code> revision,
     * <code>family</code> and <code>revision</code> (<code>family:revision</code>) for
     * a specific revision in the family, or full Amazon Resource Name (ARN) of the
     * task definition to describe.</p>
     */
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }

    /**
     * <p>The <code>family</code> for the latest <code>ACTIVE</code> revision,
     * <code>family</code> and <code>revision</code> (<code>family:revision</code>) for
     * a specific revision in the family, or full Amazon Resource Name (ARN) of the
     * task definition to describe.</p>
     */
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }

    /**
     * <p>The <code>family</code> for the latest <code>ACTIVE</code> revision,
     * <code>family</code> and <code>revision</code> (<code>family:revision</code>) for
     * a specific revision in the family, or full Amazon Resource Name (ARN) of the
     * task definition to describe.</p>
     */
    inline DescribeTaskDefinitionRequest& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The <code>family</code> for the latest <code>ACTIVE</code> revision,
     * <code>family</code> and <code>revision</code> (<code>family:revision</code>) for
     * a specific revision in the family, or full Amazon Resource Name (ARN) of the
     * task definition to describe.</p>
     */
    inline DescribeTaskDefinitionRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(value); return *this;}

    /**
     * <p>The <code>family</code> for the latest <code>ACTIVE</code> revision,
     * <code>family</code> and <code>revision</code> (<code>family:revision</code>) for
     * a specific revision in the family, or full Amazon Resource Name (ARN) of the
     * task definition to describe.</p>
     */
    inline DescribeTaskDefinitionRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}

  private:
    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
