/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>Represents a MatchBasePaths condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/RoutingRuleMatchBasePaths">AWS
   * API Reference</a></p>
   */
  class RoutingRuleMatchBasePaths
  {
  public:
    AWS_APIGATEWAYV2_API RoutingRuleMatchBasePaths() = default;
    AWS_APIGATEWAYV2_API RoutingRuleMatchBasePaths(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API RoutingRuleMatchBasePaths& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The string of the case sensitive base path to be matched.
     */
    inline const Aws::Vector<Aws::String>& GetAnyOf() const { return m_anyOf; }
    inline bool AnyOfHasBeenSet() const { return m_anyOfHasBeenSet; }
    template<typename AnyOfT = Aws::Vector<Aws::String>>
    void SetAnyOf(AnyOfT&& value) { m_anyOfHasBeenSet = true; m_anyOf = std::forward<AnyOfT>(value); }
    template<typename AnyOfT = Aws::Vector<Aws::String>>
    RoutingRuleMatchBasePaths& WithAnyOf(AnyOfT&& value) { SetAnyOf(std::forward<AnyOfT>(value)); return *this;}
    template<typename AnyOfT = Aws::String>
    RoutingRuleMatchBasePaths& AddAnyOf(AnyOfT&& value) { m_anyOfHasBeenSet = true; m_anyOf.emplace_back(std::forward<AnyOfT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_anyOf;
    bool m_anyOfHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
