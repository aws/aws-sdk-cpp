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
#include <aws/ecs/model/TaskDefinitionPlacementConstraintType.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing a constraint on task placement in the task definition.
   * For more information, see <a
   * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html">Task
   * Placement Constraints</a> in the <i>Amazon EC2 Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskDefinitionPlacementConstraint">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API TaskDefinitionPlacementConstraint
  {
  public:
    TaskDefinitionPlacementConstraint();
    TaskDefinitionPlacementConstraint(const Aws::Utils::Json::JsonValue& jsonValue);
    TaskDefinitionPlacementConstraint& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The type of constraint. The <code>DistinctInstance</code> constraint ensures
     * that each task in a particular group is running on a different container
     * instance. The <code>MemberOf</code> constraint restricts selection to be from a
     * group of valid candidates.</p>
     */
    inline const TaskDefinitionPlacementConstraintType& GetType() const{ return m_type; }

    /**
     * <p>The type of constraint. The <code>DistinctInstance</code> constraint ensures
     * that each task in a particular group is running on a different container
     * instance. The <code>MemberOf</code> constraint restricts selection to be from a
     * group of valid candidates.</p>
     */
    inline void SetType(const TaskDefinitionPlacementConstraintType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of constraint. The <code>DistinctInstance</code> constraint ensures
     * that each task in a particular group is running on a different container
     * instance. The <code>MemberOf</code> constraint restricts selection to be from a
     * group of valid candidates.</p>
     */
    inline void SetType(TaskDefinitionPlacementConstraintType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of constraint. The <code>DistinctInstance</code> constraint ensures
     * that each task in a particular group is running on a different container
     * instance. The <code>MemberOf</code> constraint restricts selection to be from a
     * group of valid candidates.</p>
     */
    inline TaskDefinitionPlacementConstraint& WithType(const TaskDefinitionPlacementConstraintType& value) { SetType(value); return *this;}

    /**
     * <p>The type of constraint. The <code>DistinctInstance</code> constraint ensures
     * that each task in a particular group is running on a different container
     * instance. The <code>MemberOf</code> constraint restricts selection to be from a
     * group of valid candidates.</p>
     */
    inline TaskDefinitionPlacementConstraint& WithType(TaskDefinitionPlacementConstraintType&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinitionPlacementConstraint& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinitionPlacementConstraint& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon EC2 Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinitionPlacementConstraint& WithExpression(const char* value) { SetExpression(value); return *this;}

  private:
    TaskDefinitionPlacementConstraintType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_expression;
    bool m_expressionHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
