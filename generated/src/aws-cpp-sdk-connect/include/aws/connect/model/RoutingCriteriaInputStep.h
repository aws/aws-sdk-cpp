/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RoutingCriteriaInputStepExpiry.h>
#include <aws/connect/model/Expression.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Step defines the list of agents to be routed or route based on the agent
   * requirements such as ProficiencyLevel, Name, or Value.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/RoutingCriteriaInputStep">AWS
   * API Reference</a></p>
   */
  class RoutingCriteriaInputStep
  {
  public:
    AWS_CONNECT_API RoutingCriteriaInputStep() = default;
    AWS_CONNECT_API RoutingCriteriaInputStep(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API RoutingCriteriaInputStep& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object to specify the expiration of a routing step.</p>
     */
    inline const RoutingCriteriaInputStepExpiry& GetExpiry() const { return m_expiry; }
    inline bool ExpiryHasBeenSet() const { return m_expiryHasBeenSet; }
    template<typename ExpiryT = RoutingCriteriaInputStepExpiry>
    void SetExpiry(ExpiryT&& value) { m_expiryHasBeenSet = true; m_expiry = std::forward<ExpiryT>(value); }
    template<typename ExpiryT = RoutingCriteriaInputStepExpiry>
    RoutingCriteriaInputStep& WithExpiry(ExpiryT&& value) { SetExpiry(std::forward<ExpiryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tagged union to specify expression for a routing step.</p>
     */
    inline const Expression& GetExpression() const { return m_expression; }
    inline bool ExpressionHasBeenSet() const { return m_expressionHasBeenSet; }
    template<typename ExpressionT = Expression>
    void SetExpression(ExpressionT&& value) { m_expressionHasBeenSet = true; m_expression = std::forward<ExpressionT>(value); }
    template<typename ExpressionT = Expression>
    RoutingCriteriaInputStep& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}
  private:

    RoutingCriteriaInputStepExpiry m_expiry;
    bool m_expiryHasBeenSet = false;

    Expression m_expression;
    bool m_expressionHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
