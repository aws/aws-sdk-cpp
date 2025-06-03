/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/model/RoutingRuleMatchBasePaths.h>
#include <aws/apigatewayv2/model/RoutingRuleMatchHeaders.h>
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
   * <p>Represents a routing rule condition.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/RoutingRuleCondition">AWS
   * API Reference</a></p>
   */
  class RoutingRuleCondition
  {
  public:
    AWS_APIGATEWAYV2_API RoutingRuleCondition() = default;
    AWS_APIGATEWAYV2_API RoutingRuleCondition(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API RoutingRuleCondition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The base path to be matched.</p>
     */
    inline const RoutingRuleMatchBasePaths& GetMatchBasePaths() const { return m_matchBasePaths; }
    inline bool MatchBasePathsHasBeenSet() const { return m_matchBasePathsHasBeenSet; }
    template<typename MatchBasePathsT = RoutingRuleMatchBasePaths>
    void SetMatchBasePaths(MatchBasePathsT&& value) { m_matchBasePathsHasBeenSet = true; m_matchBasePaths = std::forward<MatchBasePathsT>(value); }
    template<typename MatchBasePathsT = RoutingRuleMatchBasePaths>
    RoutingRuleCondition& WithMatchBasePaths(MatchBasePathsT&& value) { SetMatchBasePaths(std::forward<MatchBasePathsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The headers to be matched.</p>
     */
    inline const RoutingRuleMatchHeaders& GetMatchHeaders() const { return m_matchHeaders; }
    inline bool MatchHeadersHasBeenSet() const { return m_matchHeadersHasBeenSet; }
    template<typename MatchHeadersT = RoutingRuleMatchHeaders>
    void SetMatchHeaders(MatchHeadersT&& value) { m_matchHeadersHasBeenSet = true; m_matchHeaders = std::forward<MatchHeadersT>(value); }
    template<typename MatchHeadersT = RoutingRuleMatchHeaders>
    RoutingRuleCondition& WithMatchHeaders(MatchHeadersT&& value) { SetMatchHeaders(std::forward<MatchHeadersT>(value)); return *this;}
    ///@}
  private:

    RoutingRuleMatchBasePaths m_matchBasePaths;
    bool m_matchBasePathsHasBeenSet = false;

    RoutingRuleMatchHeaders m_matchHeaders;
    bool m_matchHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
