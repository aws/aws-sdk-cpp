/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/RoutingRuleMatchHeaderValue.h>
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
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents a MatchHeaders condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/RoutingRuleMatchHeaders">AWS
   * API Reference</a></p>
   */
  class RoutingRuleMatchHeaders
  {
  public:
    AWS_APIGATEWAYV2_API RoutingRuleMatchHeaders() = default;
    AWS_APIGATEWAYV2_API RoutingRuleMatchHeaders(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API RoutingRuleMatchHeaders& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The header name and header value glob to be matched. The matchHeaders
     * condition is matched if any of the header name and header value globs are
     * matched.</p>
     */
    inline const Aws::Vector<RoutingRuleMatchHeaderValue>& GetAnyOf() const { return m_anyOf; }
    inline bool AnyOfHasBeenSet() const { return m_anyOfHasBeenSet; }
    template<typename AnyOfT = Aws::Vector<RoutingRuleMatchHeaderValue>>
    void SetAnyOf(AnyOfT&& value) { m_anyOfHasBeenSet = true; m_anyOf = std::forward<AnyOfT>(value); }
    template<typename AnyOfT = Aws::Vector<RoutingRuleMatchHeaderValue>>
    RoutingRuleMatchHeaders& WithAnyOf(AnyOfT&& value) { SetAnyOf(std::forward<AnyOfT>(value)); return *this;}
    template<typename AnyOfT = RoutingRuleMatchHeaderValue>
    RoutingRuleMatchHeaders& AddAnyOf(AnyOfT&& value) { m_anyOfHasBeenSet = true; m_anyOf.emplace_back(std::forward<AnyOfT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RoutingRuleMatchHeaderValue> m_anyOf;
    bool m_anyOfHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
