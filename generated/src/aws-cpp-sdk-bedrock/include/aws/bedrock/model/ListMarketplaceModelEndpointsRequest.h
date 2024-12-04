/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/bedrock/BedrockRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Bedrock
{
namespace Model
{

  /**
   */
  class ListMarketplaceModelEndpointsRequest : public BedrockRequest
  {
  public:
    AWS_BEDROCK_API ListMarketplaceModelEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMarketplaceModelEndpoints"; }

    AWS_BEDROCK_API Aws::String SerializePayload() const override;

    AWS_BEDROCK_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The maximum number of results to return in a single call. If more results are
     * available, the operation returns a <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMarketplaceModelEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results. You receive this token from a previous
     * <code>ListMarketplaceModelEndpoints</code> call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListMarketplaceModelEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListMarketplaceModelEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListMarketplaceModelEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, only endpoints for the given model source identifier are
     * returned.</p>
     */
    inline const Aws::String& GetModelSourceEquals() const{ return m_modelSourceEquals; }
    inline bool ModelSourceEqualsHasBeenSet() const { return m_modelSourceEqualsHasBeenSet; }
    inline void SetModelSourceEquals(const Aws::String& value) { m_modelSourceEqualsHasBeenSet = true; m_modelSourceEquals = value; }
    inline void SetModelSourceEquals(Aws::String&& value) { m_modelSourceEqualsHasBeenSet = true; m_modelSourceEquals = std::move(value); }
    inline void SetModelSourceEquals(const char* value) { m_modelSourceEqualsHasBeenSet = true; m_modelSourceEquals.assign(value); }
    inline ListMarketplaceModelEndpointsRequest& WithModelSourceEquals(const Aws::String& value) { SetModelSourceEquals(value); return *this;}
    inline ListMarketplaceModelEndpointsRequest& WithModelSourceEquals(Aws::String&& value) { SetModelSourceEquals(std::move(value)); return *this;}
    inline ListMarketplaceModelEndpointsRequest& WithModelSourceEquals(const char* value) { SetModelSourceEquals(value); return *this;}
    ///@}
  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_modelSourceEquals;
    bool m_modelSourceEqualsHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
