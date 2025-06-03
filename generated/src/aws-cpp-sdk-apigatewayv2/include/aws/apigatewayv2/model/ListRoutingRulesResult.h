/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/RoutingRule.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{
  class ListRoutingRulesResult
  {
  public:
    AWS_APIGATEWAYV2_API ListRoutingRulesResult() = default;
    AWS_APIGATEWAYV2_API ListRoutingRulesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API ListRoutingRulesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRoutingRulesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The routing rules.<p>
     */
    inline const Aws::Vector<RoutingRule>& GetRoutingRules() const { return m_routingRules; }
    template<typename RoutingRulesT = Aws::Vector<RoutingRule>>
    void SetRoutingRules(RoutingRulesT&& value) { m_routingRulesHasBeenSet = true; m_routingRules = std::forward<RoutingRulesT>(value); }
    template<typename RoutingRulesT = Aws::Vector<RoutingRule>>
    ListRoutingRulesResult& WithRoutingRules(RoutingRulesT&& value) { SetRoutingRules(std::forward<RoutingRulesT>(value)); return *this;}
    template<typename RoutingRulesT = RoutingRule>
    ListRoutingRulesResult& AddRoutingRules(RoutingRulesT&& value) { m_routingRulesHasBeenSet = true; m_routingRules.emplace_back(std::forward<RoutingRulesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListRoutingRulesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<RoutingRule> m_routingRules;
    bool m_routingRulesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
