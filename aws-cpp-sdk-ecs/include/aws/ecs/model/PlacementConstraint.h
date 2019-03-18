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
#include <aws/ecs/model/PlacementConstraintType.h>
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
   * <p>An object representing a constraint on task placement. For more information,
   * see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-placement-constraints.html">Task
   * Placement Constraints</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PlacementConstraint">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API PlacementConstraint
  {
  public:
    PlacementConstraint();
    PlacementConstraint(Aws::Utils::Json::JsonView jsonValue);
    PlacementConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to ensure that each
     * task in a particular group is running on a different container instance. Use
     * <code>memberOf</code> to restrict the selection to a group of valid candidates.
     * The value <code>distinctInstance</code> is not supported in task
     * definitions.</p>
     */
    inline const PlacementConstraintType& GetType() const{ return m_type; }

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to ensure that each
     * task in a particular group is running on a different container instance. Use
     * <code>memberOf</code> to restrict the selection to a group of valid candidates.
     * The value <code>distinctInstance</code> is not supported in task
     * definitions.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to ensure that each
     * task in a particular group is running on a different container instance. Use
     * <code>memberOf</code> to restrict the selection to a group of valid candidates.
     * The value <code>distinctInstance</code> is not supported in task
     * definitions.</p>
     */
    inline void SetType(const PlacementConstraintType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to ensure that each
     * task in a particular group is running on a different container instance. Use
     * <code>memberOf</code> to restrict the selection to a group of valid candidates.
     * The value <code>distinctInstance</code> is not supported in task
     * definitions.</p>
     */
    inline void SetType(PlacementConstraintType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to ensure that each
     * task in a particular group is running on a different container instance. Use
     * <code>memberOf</code> to restrict the selection to a group of valid candidates.
     * The value <code>distinctInstance</code> is not supported in task
     * definitions.</p>
     */
    inline PlacementConstraint& WithType(const PlacementConstraintType& value) { SetType(value); return *this;}

    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to ensure that each
     * task in a particular group is running on a different container instance. Use
     * <code>memberOf</code> to restrict the selection to a group of valid candidates.
     * The value <code>distinctInstance</code> is not supported in task
     * definitions.</p>
     */
    inline PlacementConstraint& WithType(PlacementConstraintType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is <code>distinctInstance</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetExpression() const{ return m_expression; }

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is <code>distinctInstance</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is <code>distinctInstance</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetExpression(const Aws::String& value) { m_expressionHasBeenSet = true; m_expression = value; }

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is <code>distinctInstance</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetExpression(Aws::String&& value) { m_expressionHasBeenSet = true; m_expression = std::move(value); }

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is <code>distinctInstance</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline void SetExpression(const char* value) { m_expressionHasBeenSet = true; m_expression.assign(value); }

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is <code>distinctInstance</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline PlacementConstraint& WithExpression(const Aws::String& value) { SetExpression(value); return *this;}

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is <code>distinctInstance</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline PlacementConstraint& WithExpression(Aws::String&& value) { SetExpression(std::move(value)); return *this;}

    /**
     * <p>A cluster query language expression to apply to the constraint. You cannot
     * specify an expression if the constraint type is <code>distinctInstance</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * Query Language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline PlacementConstraint& WithExpression(const char* value) { SetExpression(value); return *this;}

  private:

    PlacementConstraintType m_type;
    bool m_typeHasBeenSet;

    Aws::String m_expression;
    bool m_expressionHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
