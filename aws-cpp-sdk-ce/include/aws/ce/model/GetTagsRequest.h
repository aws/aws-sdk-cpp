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
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/DateInterval.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class AWS_COSTEXPLORER_API GetTagsRequest : public CostExplorerRequest
  {
  public:
    GetTagsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetTags"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The value that you want to search for.</p>
     */
    inline const Aws::String& GetSearchString() const{ return m_searchString; }

    /**
     * <p>The value that you want to search for.</p>
     */
    inline bool SearchStringHasBeenSet() const { return m_searchStringHasBeenSet; }

    /**
     * <p>The value that you want to search for.</p>
     */
    inline void SetSearchString(const Aws::String& value) { m_searchStringHasBeenSet = true; m_searchString = value; }

    /**
     * <p>The value that you want to search for.</p>
     */
    inline void SetSearchString(Aws::String&& value) { m_searchStringHasBeenSet = true; m_searchString = std::move(value); }

    /**
     * <p>The value that you want to search for.</p>
     */
    inline void SetSearchString(const char* value) { m_searchStringHasBeenSet = true; m_searchString.assign(value); }

    /**
     * <p>The value that you want to search for.</p>
     */
    inline GetTagsRequest& WithSearchString(const Aws::String& value) { SetSearchString(value); return *this;}

    /**
     * <p>The value that you want to search for.</p>
     */
    inline GetTagsRequest& WithSearchString(Aws::String&& value) { SetSearchString(std::move(value)); return *this;}

    /**
     * <p>The value that you want to search for.</p>
     */
    inline GetTagsRequest& WithSearchString(const char* value) { SetSearchString(value); return *this;}


    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline GetTagsRequest& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The start and end dates for retrieving the dimension values. The start date
     * is inclusive, but the end date is exclusive. For example, if <code>start</code>
     * is <code>2017-01-01</code> and <code>end</code> is <code>2017-05-01</code>, then
     * the cost and usage data is retrieved from <code>2017-01-01</code> up to and
     * including <code>2017-04-30</code> but not including <code>2017-05-01</code>.</p>
     */
    inline GetTagsRequest& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline const Aws::String& GetTagKey() const{ return m_tagKey; }

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline bool TagKeyHasBeenSet() const { return m_tagKeyHasBeenSet; }

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline void SetTagKey(const Aws::String& value) { m_tagKeyHasBeenSet = true; m_tagKey = value; }

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline void SetTagKey(Aws::String&& value) { m_tagKeyHasBeenSet = true; m_tagKey = std::move(value); }

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline void SetTagKey(const char* value) { m_tagKeyHasBeenSet = true; m_tagKey.assign(value); }

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline GetTagsRequest& WithTagKey(const Aws::String& value) { SetTagKey(value); return *this;}

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline GetTagsRequest& WithTagKey(Aws::String&& value) { SetTagKey(std::move(value)); return *this;}

    /**
     * <p>The key of the tag that you want to return values for.</p>
     */
    inline GetTagsRequest& WithTagKey(const char* value) { SetTagKey(value); return *this;}


    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline const Aws::String& GetNextPageToken() const{ return m_nextPageToken; }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline bool NextPageTokenHasBeenSet() const { return m_nextPageTokenHasBeenSet; }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(const Aws::String& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = value; }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(Aws::String&& value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken = std::move(value); }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline void SetNextPageToken(const char* value) { m_nextPageTokenHasBeenSet = true; m_nextPageToken.assign(value); }

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetTagsRequest& WithNextPageToken(const Aws::String& value) { SetNextPageToken(value); return *this;}

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetTagsRequest& WithNextPageToken(Aws::String&& value) { SetNextPageToken(std::move(value)); return *this;}

    /**
     * <p>The token to retrieve the next set of results. AWS provides the token when
     * the response from a previous call has more results than the maximum page
     * size.</p>
     */
    inline GetTagsRequest& WithNextPageToken(const char* value) { SetNextPageToken(value); return *this;}

  private:

    Aws::String m_searchString;
    bool m_searchStringHasBeenSet;

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet;

    Aws::String m_tagKey;
    bool m_tagKeyHasBeenSet;

    Aws::String m_nextPageToken;
    bool m_nextPageTokenHasBeenSet;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
