/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/RoutingRuleActionInvokeApi.h>
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
   * <p>The routing rule action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/RoutingRuleAction">AWS
   * API Reference</a></p>
   */
  class RoutingRuleAction
  {
  public:
    AWS_APIGATEWAYV2_API RoutingRuleAction() = default;
    AWS_APIGATEWAYV2_API RoutingRuleAction(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API RoutingRuleAction& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const RoutingRuleActionInvokeApi& GetInvokeApi() const { return m_invokeApi; }
    inline bool InvokeApiHasBeenSet() const { return m_invokeApiHasBeenSet; }
    template<typename InvokeApiT = RoutingRuleActionInvokeApi>
    void SetInvokeApi(InvokeApiT&& value) { m_invokeApiHasBeenSet = true; m_invokeApi = std::forward<InvokeApiT>(value); }
    template<typename InvokeApiT = RoutingRuleActionInvokeApi>
    RoutingRuleAction& WithInvokeApi(InvokeApiT&& value) { SetInvokeApi(std::forward<InvokeApiT>(value)); return *this;}
    ///@}
  private:

    RoutingRuleActionInvokeApi m_invokeApi;
    bool m_invokeApiHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
