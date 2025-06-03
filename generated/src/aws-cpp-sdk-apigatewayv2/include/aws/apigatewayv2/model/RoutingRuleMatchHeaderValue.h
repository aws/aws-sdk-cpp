/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
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
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents a MatchHeaderValue.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/RoutingRuleMatchHeaderValue">AWS
   * API Reference</a></p>
   */
  class RoutingRuleMatchHeaderValue
  {
  public:
    AWS_APIGATEWAYV2_API RoutingRuleMatchHeaderValue() = default;
    AWS_APIGATEWAYV2_API RoutingRuleMatchHeaderValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API RoutingRuleMatchHeaderValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetHeader() const { return m_header; }
    inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
    template<typename HeaderT = Aws::String>
    void SetHeader(HeaderT&& value) { m_headerHasBeenSet = true; m_header = std::forward<HeaderT>(value); }
    template<typename HeaderT = Aws::String>
    RoutingRuleMatchHeaderValue& WithHeader(HeaderT&& value) { SetHeader(std::forward<HeaderT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetValueGlob() const { return m_valueGlob; }
    inline bool ValueGlobHasBeenSet() const { return m_valueGlobHasBeenSet; }
    template<typename ValueGlobT = Aws::String>
    void SetValueGlob(ValueGlobT&& value) { m_valueGlobHasBeenSet = true; m_valueGlob = std::forward<ValueGlobT>(value); }
    template<typename ValueGlobT = Aws::String>
    RoutingRuleMatchHeaderValue& WithValueGlob(ValueGlobT&& value) { SetValueGlob(std::forward<ValueGlobT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_header;
    bool m_headerHasBeenSet = false;

    Aws::String m_valueGlob;
    bool m_valueGlobHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
