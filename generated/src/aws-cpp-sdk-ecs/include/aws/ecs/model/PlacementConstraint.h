﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * placement constraints</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p>  <p>If you're using the Fargate launch type, task placement
   * constraints aren't supported.</p> <p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/PlacementConstraint">AWS
   * API Reference</a></p>
   */
  class PlacementConstraint
  {
  public:
    AWS_ECS_API PlacementConstraint() = default;
    AWS_ECS_API PlacementConstraint(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API PlacementConstraint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of constraint. Use <code>distinctInstance</code> to ensure that each
     * task in a particular group is running on a different container instance. Use
     * <code>memberOf</code> to restrict the selection to a group of valid
     * candidates.</p>
     */
    inline PlacementConstraintType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(PlacementConstraintType value) { m_typeHasBeenSet = true; m_type = value; }
    inline PlacementConstraint& WithType(PlacementConstraintType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A cluster query language expression to apply to the constraint. The
     * expression can have a maximum length of 2000 characters. You can't specify an
     * expression if the constraint type is <code>distinctInstance</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/cluster-query-language.html">Cluster
     * query language</a> in the <i>Amazon Elastic Container Service Developer
     * Guide</i>.</p>
     */
    inline const Aws::String& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Aws::String>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Aws::String>
    PlacementConstraint& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}
  private:

    PlacementConstraintType m_type{PlacementConstraintType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
