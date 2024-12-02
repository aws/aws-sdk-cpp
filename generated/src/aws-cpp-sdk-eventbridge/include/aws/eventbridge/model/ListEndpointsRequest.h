/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eventbridge/EventBridge_EXPORTS.h>
#include <aws/eventbridge/EventBridgeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EventBridge
{
namespace Model
{

  /**
   */
  class ListEndpointsRequest : public EventBridgeRequest
  {
  public:
    AWS_EVENTBRIDGE_API ListEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEndpoints"; }

    AWS_EVENTBRIDGE_API Aws::String SerializePayload() const override;

    AWS_EVENTBRIDGE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A value that will return a subset of the endpoints associated with this
     * account. For example, <code>"NamePrefix": "ABC"</code> will return all endpoints
     * with "ABC" in the name.</p>
     */
    inline const Aws::String& GetNamePrefix() const{ return m_namePrefix; }
    inline bool NamePrefixHasBeenSet() const { return m_namePrefixHasBeenSet; }
    inline void SetNamePrefix(const Aws::String& value) { m_namePrefixHasBeenSet = true; m_namePrefix = value; }
    inline void SetNamePrefix(Aws::String&& value) { m_namePrefixHasBeenSet = true; m_namePrefix = std::move(value); }
    inline void SetNamePrefix(const char* value) { m_namePrefixHasBeenSet = true; m_namePrefix.assign(value); }
    inline ListEndpointsRequest& WithNamePrefix(const Aws::String& value) { SetNamePrefix(value); return *this;}
    inline ListEndpointsRequest& WithNamePrefix(Aws::String&& value) { SetNamePrefix(std::move(value)); return *this;}
    inline ListEndpointsRequest& WithNamePrefix(const char* value) { SetNamePrefix(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The primary Region of the endpoints associated with this account. For example
     * <code>"HomeRegion": "us-east-1"</code>.</p>
     */
    inline const Aws::String& GetHomeRegion() const{ return m_homeRegion; }
    inline bool HomeRegionHasBeenSet() const { return m_homeRegionHasBeenSet; }
    inline void SetHomeRegion(const Aws::String& value) { m_homeRegionHasBeenSet = true; m_homeRegion = value; }
    inline void SetHomeRegion(Aws::String&& value) { m_homeRegionHasBeenSet = true; m_homeRegion = std::move(value); }
    inline void SetHomeRegion(const char* value) { m_homeRegionHasBeenSet = true; m_homeRegion.assign(value); }
    inline ListEndpointsRequest& WithHomeRegion(const Aws::String& value) { SetHomeRegion(value); return *this;}
    inline ListEndpointsRequest& WithHomeRegion(Aws::String&& value) { SetHomeRegion(std::move(value)); return *this;}
    inline ListEndpointsRequest& WithHomeRegion(const char* value) { SetHomeRegion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned by a previous call, which you can use to retrieve the next
     * set of results.</p> <p>The value of <code>nextToken</code> is a unique
     * pagination token for each page. To retrieve the next page of results, make the
     * call again using the returned token. Keep all other arguments unchanged.</p> <p>
     * Using an expired pagination token results in an <code>HTTP 400
     * InvalidToken</code> error.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results returned by the call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_namePrefix;
    bool m_namePrefixHasBeenSet = false;

    Aws::String m_homeRegion;
    bool m_homeRegionHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EventBridge
} // namespace Aws
