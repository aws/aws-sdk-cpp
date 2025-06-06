﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/model/MarketplaceModelEndpoint.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateMarketplaceModelEndpointResult
  {
  public:
    AWS_BEDROCK_API UpdateMarketplaceModelEndpointResult() = default;
    AWS_BEDROCK_API UpdateMarketplaceModelEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API UpdateMarketplaceModelEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the updated endpoint.</p>
     */
    inline const MarketplaceModelEndpoint& GetMarketplaceModelEndpoint() const { return m_marketplaceModelEndpoint; }
    template<typename MarketplaceModelEndpointT = MarketplaceModelEndpoint>
    void SetMarketplaceModelEndpoint(MarketplaceModelEndpointT&& value) { m_marketplaceModelEndpointHasBeenSet = true; m_marketplaceModelEndpoint = std::forward<MarketplaceModelEndpointT>(value); }
    template<typename MarketplaceModelEndpointT = MarketplaceModelEndpoint>
    UpdateMarketplaceModelEndpointResult& WithMarketplaceModelEndpoint(MarketplaceModelEndpointT&& value) { SetMarketplaceModelEndpoint(std::forward<MarketplaceModelEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateMarketplaceModelEndpointResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    MarketplaceModelEndpoint m_marketplaceModelEndpoint;
    bool m_marketplaceModelEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
