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
    AWS_BEDROCK_API ListMarketplaceModelEndpointsResult();
    AWS_BEDROCK_API ListMarketplaceModelEndpointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListMarketplaceModelEndpointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An array of endpoint summaries.</p>
     */
    inline const Aws::Vector<MarketplaceModelEndpointSummary>& GetMarketplaceModelEndpoints() const{ return m_marketplaceModelEndpoints; }
    inline void SetMarketplaceModelEndpoints(const Aws::Vector<MarketplaceModelEndpointSummary>& value) { m_marketplaceModelEndpoints = value; }
    inline void SetMarketplaceModelEndpoints(Aws::Vector<MarketplaceModelEndpointSummary>&& value) { m_marketplaceModelEndpoints = std::move(value); }
    inline ListMarketplaceModelEndpointsResult& WithMarketplaceModelEndpoints(const Aws::Vector<MarketplaceModelEndpointSummary>& value) { SetMarketplaceModelEndpoints(value); return *this;}
    inline ListMarketplaceModelEndpointsResult& WithMarketplaceModelEndpoints(Aws::Vector<MarketplaceModelEndpointSummary>&& value) { SetMarketplaceModelEndpoints(std::move(value)); return *this;}
    inline ListMarketplaceModelEndpointsResult& AddMarketplaceModelEndpoints(const MarketplaceModelEndpointSummary& value) { m_marketplaceModelEndpoints.push_back(value); return *this; }
    inline ListMarketplaceModelEndpointsResult& AddMarketplaceModelEndpoints(MarketplaceModelEndpointSummary&& value) { m_marketplaceModelEndpoints.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. Use this token to get the next set of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListMarketplaceModelEndpointsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMarketplaceModelEndpointsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMarketplaceModelEndpointsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListMarketplaceModelEndpointsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListMarketplaceModelEndpointsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListMarketplaceModelEndpointsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<MarketplaceModelEndpointSummary> m_marketplaceModelEndpoints;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
