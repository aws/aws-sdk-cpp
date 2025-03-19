/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/Expiry.h>
#include <aws/connect/model/Expression.h>
#include <aws/connect/model/RoutingCriteriaStepStatus.h>
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
   * <p>Step signifies the criteria to be used for routing to an agent</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Step">AWS API
   * Reference</a></p>
   */
  class Step
  {
  public:
    AWS_CONNECT_API Step() = default;
    AWS_CONNECT_API Step(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Step& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An object to specify the expiration of a routing step.</p>
     */
    inline const Expiry& GetExpiry() const { return m_expiry; }
    inline bool ExpiryHasBeenSet() const { return m_expiryHasBeenSet; }
    template<typename ExpiryT = Expiry>
    void SetExpiry(ExpiryT&& value) { m_expiryHasBeenSet = true; m_expiry = std::forward<ExpiryT>(value); }
    template<typename ExpiryT = Expiry>
    Step& WithExpiry(ExpiryT&& value) { SetExpiry(std::forward<ExpiryT>(value)); return *this;}
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
    Step& WithExpression(ExpressionT&& value) { SetExpression(std::forward<ExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents status of the Routing step.</p>
     */
    inline RoutingCriteriaStepStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(RoutingCriteriaStepStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Step& WithStatus(RoutingCriteriaStepStatus value) { SetStatus(value); return *this;}
    ///@}
  private:

    Expiry m_expiry;
    bool m_expiryHasBeenSet = false;

    Expression m_expression;
    bool m_expressionHasBeenSet = false;

    RoutingCriteriaStepStatus m_status{RoutingCriteriaStepStatus::NOT_SET};
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
