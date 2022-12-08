/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing a constraint on task placement in the task definition.
   * For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html">Task
   * placement constraints</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p>  <p>Task placement constraints aren't supported for tasks
   * run on Fargate.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/TaskDefinitionPlacementConstraint">AWS
   * API Reference</a></p>
   */
  class TaskDefinitionPlacementConstraint
  {
  public:
    AWS_ECS_API TaskDefinitionPlacementConstraint();
    AWS_ECS_API TaskDefinitionPlacementConstraint(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API TaskDefinitionPlacementConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of constraint. The <code>MemberOf</code> constraint restricts
     * selection to be from a group of valid candidates.</p>
     */
    inline const TaskDefinitionPlacementConstraintType& GetType() const{ return m_type; }

    /**
     * <p>The type of constraint. The <code>MemberOf</code> constraint restricts
     * selection to be from a group of valid candidates.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of constraint. The <code>MemberOf</code> constraint restricts
     * selection to be from a group of valid candidates.</p>
     */
    inline void SetType(const TaskDefinitionPlacementConstraintType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of constraint. The <code>MemberOf</code> constraint restricts
     * selection to be from a group of valid candidates.</p>
     */
    inline void SetType(TaskDefinitionPlacementConstraintType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of constraint. The <code>MemberOf</code> constraint restricts
     * selection to be from a group of valid candidates.</p>
     */
    inline TaskDefinitionPlacementConstraint& WithType(const TaskDefinitionPlacementConstraintType& value) { SetType(value); return *this;}

    /**
     * <p>The type of constraint. The <code>MemberOf</code> constraint restricts
     * selection to be from a group of valid candidates.</p>
     */
    inline TaskDefinitionPlacementConstraint& WithType(TaskDefinitionPlacementConstraintType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * query language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * query language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * query language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * query language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * query language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * query language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinitionPlacementConstraint& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * query language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinitionPlacementConstraint& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>A cluster query language expression to apply to the constraint. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * query language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline TaskDefinitionPlacementConstraint& WithExpression(const char* value) { SetExpression(value); return *this;}

  private:

    TaskDefinitionPlacementConstraintType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
