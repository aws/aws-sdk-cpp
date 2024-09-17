/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ApiGatewayV2
{
namespace Model
{

  /**
   */
  class GetRouteResponsesRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API GetRouteResponsesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetRouteResponses"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;

    AWS_APIGATEWAYV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline GetRouteResponsesRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline GetRouteResponsesRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline GetRouteResponsesRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of elements to be returned for this resource.</p>
     */
    inline const Aws::String& GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(const Aws::String& value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline void SetMaxResults(Aws::String&& value) { m_maxResultsHasBeenSet = true; m_maxResults = std::move(value); }
    inline void SetMaxResults(const char* value) { m_maxResultsHasBeenSet = true; m_maxResults.assign(value); }
    inline GetRouteResponsesRequest& WithMaxResults(const Aws::String& value) { SetMaxResults(value); return *this;}
    inline GetRouteResponsesRequest& WithMaxResults(Aws::String&& value) { SetMaxResults(std::move(value)); return *this;}
    inline GetRouteResponsesRequest& WithMaxResults(const char* value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The next page of elements from this collection. Not valid for the last
     * element of the collection.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetRouteResponsesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetRouteResponsesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetRouteResponsesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route ID.</p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }
    inline bool RouteIdHasBeenSet() const { return m_routeIdHasBeenSet; }
    inline void SetRouteId(const Aws::String& value) { m_routeIdHasBeenSet = true; m_routeId = value; }
    inline void SetRouteId(Aws::String&& value) { m_routeIdHasBeenSet = true; m_routeId = std::move(value); }
    inline void SetRouteId(const char* value) { m_routeIdHasBeenSet = true; m_routeId.assign(value); }
    inline GetRouteResponsesRequest& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}
    inline GetRouteResponsesRequest& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}
    inline GetRouteResponsesRequest& WithRouteId(const char* value) { SetRouteId(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_routeId;
    bool m_routeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
