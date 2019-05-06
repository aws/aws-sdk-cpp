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
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/mediastore-data/MediaStoreDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace MediaStoreData
{
namespace Model
{

  /**
   */
  class AWS_MEDIASTOREDATA_API ListItemsRequest : public MediaStoreDataRequest
  {
  public:
    ListItemsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListItems"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The path in the container from which to retrieve items. Format: &lt;folder
     * name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The path in the container from which to retrieve items. Format: &lt;folder
     * name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The path in the container from which to retrieve items. Format: &lt;folder
     * name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The path in the container from which to retrieve items. Format: &lt;folder
     * name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The path in the container from which to retrieve items. Format: &lt;folder
     * name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The path in the container from which to retrieve items. Format: &lt;folder
     * name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline ListItemsRequest& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The path in the container from which to retrieve items. Format: &lt;folder
     * name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline ListItemsRequest& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The path in the container from which to retrieve items. Format: &lt;folder
     * name&gt;/&lt;folder name&gt;/&lt;file name&gt;</p>
     */
    inline ListItemsRequest& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>The maximum number of results to return per API request. For example, you
     * submit a <code>ListItems</code> request with <code>MaxResults</code> set at 500.
     * Although 2,000 items match your request, the service returns no more than the
     * first 500 items. (The service also returns a <code>NextToken</code> value that
     * you can use to fetch the next batch of results.) The service might return fewer
     * results than the <code>MaxResults</code> value.</p> <p>If
     * <code>MaxResults</code> is not included in the request, the service defaults to
     * pagination with a maximum of 1,000 results per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per API request. For example, you
     * submit a <code>ListItems</code> request with <code>MaxResults</code> set at 500.
     * Although 2,000 items match your request, the service returns no more than the
     * first 500 items. (The service also returns a <code>NextToken</code> value that
     * you can use to fetch the next batch of results.) The service might return fewer
     * results than the <code>MaxResults</code> value.</p> <p>If
     * <code>MaxResults</code> is not included in the request, the service defaults to
     * pagination with a maximum of 1,000 results per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per API request. For example, you
     * submit a <code>ListItems</code> request with <code>MaxResults</code> set at 500.
     * Although 2,000 items match your request, the service returns no more than the
     * first 500 items. (The service also returns a <code>NextToken</code> value that
     * you can use to fetch the next batch of results.) The service might return fewer
     * results than the <code>MaxResults</code> value.</p> <p>If
     * <code>MaxResults</code> is not included in the request, the service defaults to
     * pagination with a maximum of 1,000 results per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per API request. For example, you
     * submit a <code>ListItems</code> request with <code>MaxResults</code> set at 500.
     * Although 2,000 items match your request, the service returns no more than the
     * first 500 items. (The service also returns a <code>NextToken</code> value that
     * you can use to fetch the next batch of results.) The service might return fewer
     * results than the <code>MaxResults</code> value.</p> <p>If
     * <code>MaxResults</code> is not included in the request, the service defaults to
     * pagination with a maximum of 1,000 results per page.</p>
     */
    inline ListItemsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token that identifies which batch of results that you want to see. For
     * example, you submit a <code>ListItems</code> request with
     * <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value. To see the next batch of
     * results, you can submit the <code>ListItems</code> request a second time and
     * specify the <code>NextToken</code> value.</p> <p>Tokens expire after 15
     * minutes.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token that identifies which batch of results that you want to see. For
     * example, you submit a <code>ListItems</code> request with
     * <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value. To see the next batch of
     * results, you can submit the <code>ListItems</code> request a second time and
     * specify the <code>NextToken</code> value.</p> <p>Tokens expire after 15
     * minutes.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token that identifies which batch of results that you want to see. For
     * example, you submit a <code>ListItems</code> request with
     * <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value. To see the next batch of
     * results, you can submit the <code>ListItems</code> request a second time and
     * specify the <code>NextToken</code> value.</p> <p>Tokens expire after 15
     * minutes.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token that identifies which batch of results that you want to see. For
     * example, you submit a <code>ListItems</code> request with
     * <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value. To see the next batch of
     * results, you can submit the <code>ListItems</code> request a second time and
     * specify the <code>NextToken</code> value.</p> <p>Tokens expire after 15
     * minutes.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token that identifies which batch of results that you want to see. For
     * example, you submit a <code>ListItems</code> request with
     * <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value. To see the next batch of
     * results, you can submit the <code>ListItems</code> request a second time and
     * specify the <code>NextToken</code> value.</p> <p>Tokens expire after 15
     * minutes.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token that identifies which batch of results that you want to see. For
     * example, you submit a <code>ListItems</code> request with
     * <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value. To see the next batch of
     * results, you can submit the <code>ListItems</code> request a second time and
     * specify the <code>NextToken</code> value.</p> <p>Tokens expire after 15
     * minutes.</p>
     */
    inline ListItemsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token that identifies which batch of results that you want to see. For
     * example, you submit a <code>ListItems</code> request with
     * <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value. To see the next batch of
     * results, you can submit the <code>ListItems</code> request a second time and
     * specify the <code>NextToken</code> value.</p> <p>Tokens expire after 15
     * minutes.</p>
     */
    inline ListItemsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token that identifies which batch of results that you want to see. For
     * example, you submit a <code>ListItems</code> request with
     * <code>MaxResults</code> set at 500. The service returns the first batch of
     * results (up to 500) and a <code>NextToken</code> value. To see the next batch of
     * results, you can submit the <code>ListItems</code> request a second time and
     * specify the <code>NextToken</code> value.</p> <p>Tokens expire after 15
     * minutes.</p>
     */
    inline ListItemsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_path;
    bool m_pathHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace MediaStoreData
} // namespace Aws
