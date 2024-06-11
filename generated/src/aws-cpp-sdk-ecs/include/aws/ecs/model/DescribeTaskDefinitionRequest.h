/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeTaskDefinitionRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DescribeTaskDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTaskDefinition"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The <code>family</code> for the latest <code>ACTIVE</code> revision,
     * <code>family</code> and <code>revision</code> (<code>family:revision</code>) for
     * a specific revision in the family, or full Amazon Resource Name (ARN) of the
     * task definition to describe.</p>
     */
    inline const Aws::String& GetTaskDefinition() const{ return m_taskDefinition; }
    inline bool TaskDefinitionHasBeenSet() const { return m_taskDefinitionHasBeenSet; }
    inline void SetTaskDefinition(const Aws::String& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = value; }
    inline void SetTaskDefinition(Aws::String&& value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition = std::move(value); }
    inline void SetTaskDefinition(const char* value) { m_taskDefinitionHasBeenSet = true; m_taskDefinition.assign(value); }
    inline DescribeTaskDefinitionRequest& WithTaskDefinition(const Aws::String& value) { SetTaskDefinition(value); return *this;}
    inline DescribeTaskDefinitionRequest& WithTaskDefinition(Aws::String&& value) { SetTaskDefinition(std::move(value)); return *this;}
    inline DescribeTaskDefinitionRequest& WithTaskDefinition(const char* value) { SetTaskDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Determines whether to see the resource tags for the task definition. If
     * <code>TAGS</code> is specified, the tags are included in the response. If this
     * field is omitted, tags aren't included in the response.</p>
     */
    inline const Aws::Vector<TaskDefinitionField>& GetInclude() const{ return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    inline void SetInclude(const Aws::Vector<TaskDefinitionField>& value) { m_includeHasBeenSet = true; m_include = value; }
    inline void SetInclude(Aws::Vector<TaskDefinitionField>&& value) { m_includeHasBeenSet = true; m_include = std::move(value); }
    inline DescribeTaskDefinitionRequest& WithInclude(const Aws::Vector<TaskDefinitionField>& value) { SetInclude(value); return *this;}
    inline DescribeTaskDefinitionRequest& WithInclude(Aws::Vector<TaskDefinitionField>&& value) { SetInclude(std::move(value)); return *this;}
    inline DescribeTaskDefinitionRequest& AddInclude(const TaskDefinitionField& value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    inline DescribeTaskDefinitionRequest& AddInclude(TaskDefinitionField&& value) { m_includeHasBeenSet = true; m_include.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_taskDefinition;
    bool m_taskDefinitionHasBeenSet = false;

    Aws::Vector<TaskDefinitionField> m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
