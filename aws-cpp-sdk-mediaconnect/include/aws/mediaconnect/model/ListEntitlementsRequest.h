/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/mediaconnect/MediaConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaConnect
{
namespace Model
{

  /**
   */
  class AWS_MEDIACONNECT_API ListEntitlementsRequest : public MediaConnectRequest
  {
  public:
    ListEntitlementsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEntitlements"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * The maximum number of results to return per API request. For example, you submit
     * a ListEntitlements request with MaxResults set at 5. Although 20 items match
     * your request, the service returns no more than the first 5 items. (The service
     * also returns a NextToken value that you can use to fetch the next batch of
     * results.) The service might return fewer results than the MaxResults value. If
     * MaxResults is not included in the request, the service defaults to pagination
     * with a maximum of 20 results per page.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * The maximum number of results to return per API request. For example, you submit
     * a ListEntitlements request with MaxResults set at 5. Although 20 items match
     * your request, the service returns no more than the first 5 items. (The service
     * also returns a NextToken value that you can use to fetch the next batch of
     * results.) The service might return fewer results than the MaxResults value. If
     * MaxResults is not included in the request, the service defaults to pagination
     * with a maximum of 20 results per page.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * The maximum number of results to return per API request. For example, you submit
     * a ListEntitlements request with MaxResults set at 5. Although 20 items match
     * your request, the service returns no more than the first 5 items. (The service
     * also returns a NextToken value that you can use to fetch the next batch of
     * results.) The service might return fewer results than the MaxResults value. If
     * MaxResults is not included in the request, the service defaults to pagination
     * with a maximum of 20 results per page.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * The maximum number of results to return per API request. For example, you submit
     * a ListEntitlements request with MaxResults set at 5. Although 20 items match
     * your request, the service returns no more than the first 5 items. (The service
     * also returns a NextToken value that you can use to fetch the next batch of
     * results.) The service might return fewer results than the MaxResults value. If
     * MaxResults is not included in the request, the service defaults to pagination
     * with a maximum of 20 results per page.
     */
    inline ListEntitlementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline ListEntitlementsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline ListEntitlementsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * The token that identifies which batch of results that you want to see. For
     * example, you submit a ListEntitlements request with MaxResults set at 5. The
     * service returns the first batch of results (up to 5) and a NextToken value. To
     * see the next batch of results, you can submit the ListEntitlements request a
     * second time and specify the NextToken value.
     */
    inline ListEntitlementsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
