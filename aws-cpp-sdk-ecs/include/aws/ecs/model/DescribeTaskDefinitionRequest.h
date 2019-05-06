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
#include <aws/ecs/model/TaskDefinitionField.h>
#include <utility>

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

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTaskDefinition"; }

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
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }

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
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }

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
    inline DescribeTaskDefinitionRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}

    /**
     * <p>The <code>family</code> for the latest <code>ACTIVE</code> revision,
     * <code>family</code> and <code>revision</code> (<code>family:revision</code>) for
     * a specific revision in the family, or full Amazon Resource Name (ARN) of the
     * task definition to describe.</p>
     */
    inline DescribeTaskDefinitionRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}


    /**
     * <p>Specifies whether to see the resource tags for the task definition. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline const Aws::Vector<TaskDefinitionField>& GetInclude() const{ return m_include; }

    /**
     * <p>Specifies whether to see the resource tags for the task definition. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }

    /**
     * <p>Specifies whether to see the resource tags for the task definition. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline void SetInclude(const Aws::Vector<TaskDefinitionField>& value) { m_includeHasBeenSet = true; m_include = value; }

    /**
     * <p>Specifies whether to see the resource tags for the task definition. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline void SetInclude(Aws::Vector<TaskDefinitionField>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }

    /**
     * <p>Specifies whether to see the resource tags for the task definition. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline DescribeTaskDefinitionRequest& WithInclude(const Aws::Vector<TaskDefinitionField>& value) { SetInclude(value); return *this;}

    /**
     * <p>Specifies whether to see the resource tags for the task definition. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline DescribeTaskDefinitionRequest& WithInclude(Aws::Vector<TaskDefinitionField>&& value) { SetInclude(std::move(value)); return *this;}

    /**
     * <p>Specifies whether to see the resource tags for the task definition. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline DescribeTaskDefinitionRequest& AddInclude(const TaskDefinitionField& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }

    /**
     * <p>Specifies whether to see the resource tags for the task definition. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags are not included in the response.</p>
     */
    inline DescribeTaskDefinitionRequest& AddInclude(TaskDefinitionField&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet;

    Aws::Vector<TaskDefinitionField> m_include;
    bool m_includeHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
