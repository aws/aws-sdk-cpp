/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/MarketplaceModelEndpointSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListMarketplaceModelEndpointsResult
  {
  public:
    AWS_BEDROCK_API ListMarketplaceModelEndpointsResult() = default;
    AWS_BEDROCK_API ListMarketplaceModelEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListMarketplaceModelEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of endpoint summaries.</p>
     */
    inline const Aws::Vector<MarketplaceModelEndpointSummary>& GetMarketplaceModelEndpoints() const { return m_marketplaceModelEndpoints; }
    template<typename MarketplaceModelEndpointsT = Aws::Vector<MarketplaceModelEndpointSummary>>
    void SetMarketplaceModelEndpoints(MarketplaceModelEndpointsT&& value) { m_marketplaceModelEndpointsHasBeenSet = true; m_marketplaceModelEndpoints = std::forward<MarketplaceModelEndpointsT>(value); }
    template<typename MarketplaceModelEndpointsT = Aws::Vector<MarketplaceModelEndpointSummary>>
    ListMarketplaceModelEndpointsResult& WithMarketplaceModelEndpoints(MarketplaceModelEndpointsT&& value) { SetMarketplaceModelEndpoints(std::forward<MarketplaceModelEndpointsT>(value)); return *this;}
    template<typename MarketplaceModelEndpointsT = MarketplaceModelEndpointSummary>
    ListMarketplaceModelEndpointsResult& AddMarketplaceModelEndpoints(MarketplaceModelEndpointsT&& value) { m_marketplaceModelEndpointsHasBeenSet = true; m_marketplaceModelEndpoints.emplace_back(std::forward<MarketplaceModelEndpointsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use this token to get the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMarketplaceModelEndpointsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListMarketplaceModelEndpointsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<MarketplaceModelEndpointSummary> m_marketplaceModelEndpoints;
    bool m_marketplaceModelEndpointsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
