/**
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
  class CreateMarketplaceModelEndpointResult
  {
  public:
    AWS_BEDROCK_API CreateMarketplaceModelEndpointResult();
    AWS_BEDROCK_API CreateMarketplaceModelEndpointResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API CreateMarketplaceModelEndpointResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Details about the created endpoint.</p>
     */
    inline const MarketplaceModelEndpoint& GetMarketplaceModelEndpoint() const{ return m_marketplaceModelEndpoint; }
    inline void SetMarketplaceModelEndpoint(const MarketplaceModelEndpoint& value) { m_marketplaceModelEndpoint = value; }
    inline void SetMarketplaceModelEndpoint(MarketplaceModelEndpoint&& value) { m_marketplaceModelEndpoint = std::move(value); }
    inline CreateMarketplaceModelEndpointResult& WithMarketplaceModelEndpoint(const MarketplaceModelEndpoint& value) { SetMarketplaceModelEndpoint(value); return *this;}
    inline CreateMarketplaceModelEndpointResult& WithMarketplaceModelEndpoint(MarketplaceModelEndpoint&& value) { SetMarketplaceModelEndpoint(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateMarketplaceModelEndpointResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateMarketplaceModelEndpointResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateMarketplaceModelEndpointResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    MarketplaceModelEndpoint m_marketplaceModelEndpoint;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
