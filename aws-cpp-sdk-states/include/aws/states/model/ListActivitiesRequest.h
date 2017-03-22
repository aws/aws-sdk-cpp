/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/states/SFNRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace SFN
{
namespace Model
{

  /**
   */
  class AWS_SFN_API ListActivitiesRequest : public SFNRequest
  {
  public:
    ListActivitiesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of results that will be returned per call.
     * <code>nextToken</code> can be used to obtain further pages of results. The
     * default is 100 and the maximum allowed page size is 1000.</p> <p>This is an
     * upper limit only; the actual number of results returned per call may be fewer
     * than the specified maximum.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results that will be returned per call.
     * <code>nextToken</code> can be used to obtain further pages of results. The
     * default is 100 and the maximum allowed page size is 1000.</p> <p>This is an
     * upper limit only; the actual number of results returned per call may be fewer
     * than the specified maximum.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results that will be returned per call.
     * <code>nextToken</code> can be used to obtain further pages of results. The
     * default is 100 and the maximum allowed page size is 1000.</p> <p>This is an
     * upper limit only; the actual number of results returned per call may be fewer
     * than the specified maximum.</p>
     */
    inline ListActivitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>If a <code>nextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>nextToken</code>. Keep all other arguments
     * unchanged.</p> <p>The configured <code>maxResults</code> determines how many
     * results can be returned in a single call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If a <code>nextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>nextToken</code>. Keep all other arguments
     * unchanged.</p> <p>The configured <code>maxResults</code> determines how many
     * results can be returned in a single call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If a <code>nextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>nextToken</code>. Keep all other arguments
     * unchanged.</p> <p>The configured <code>maxResults</code> determines how many
     * results can be returned in a single call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If a <code>nextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>nextToken</code>. Keep all other arguments
     * unchanged.</p> <p>The configured <code>maxResults</code> determines how many
     * results can be returned in a single call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If a <code>nextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>nextToken</code>. Keep all other arguments
     * unchanged.</p> <p>The configured <code>maxResults</code> determines how many
     * results can be returned in a single call.</p>
     */
    inline ListActivitiesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a <code>nextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>nextToken</code>. Keep all other arguments
     * unchanged.</p> <p>The configured <code>maxResults</code> determines how many
     * results can be returned in a single call.</p>
     */
    inline ListActivitiesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>If a <code>nextToken</code> was returned by a previous call, there are more
     * results available. To retrieve the next page of results, make the call again
     * using the returned token in <code>nextToken</code>. Keep all other arguments
     * unchanged.</p> <p>The configured <code>maxResults</code> determines how many
     * results can be returned in a single call.</p>
     */
    inline ListActivitiesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
