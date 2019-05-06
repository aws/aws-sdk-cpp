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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/ssm/model/SessionState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/SessionFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeSessionsRequest : public SSMRequest
  {
  public:
    DescribeSessionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSessions"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The session status to retrieve a list of sessions for. For example,
     * "Active".</p>
     */
    inline const SessionState& GetState() const{ return m_state; }

    /**
     * <p>The session status to retrieve a list of sessions for. For example,
     * "Active".</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The session status to retrieve a list of sessions for. For example,
     * "Active".</p>
     */
    inline void SetState(const SessionState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The session status to retrieve a list of sessions for. For example,
     * "Active".</p>
     */
    inline void SetState(SessionState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The session status to retrieve a list of sessions for. For example,
     * "Active".</p>
     */
    inline DescribeSessionsRequest& WithState(const SessionState& value) { SetState(value); return *this;}

    /**
     * <p>The session status to retrieve a list of sessions for. For example,
     * "Active".</p>
     */
    inline DescribeSessionsRequest& WithState(SessionState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline DescribeSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeSessionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeSessionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeSessionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>One or more filters to limit the type of sessions returned by the
     * request.</p>
     */
    inline const Aws::Vector<SessionFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters to limit the type of sessions returned by the
     * request.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>One or more filters to limit the type of sessions returned by the
     * request.</p>
     */
    inline void SetFilters(const Aws::Vector<SessionFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters to limit the type of sessions returned by the
     * request.</p>
     */
    inline void SetFilters(Aws::Vector<SessionFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters to limit the type of sessions returned by the
     * request.</p>
     */
    inline DescribeSessionsRequest& WithFilters(const Aws::Vector<SessionFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters to limit the type of sessions returned by the
     * request.</p>
     */
    inline DescribeSessionsRequest& WithFilters(Aws::Vector<SessionFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters to limit the type of sessions returned by the
     * request.</p>
     */
    inline DescribeSessionsRequest& AddFilters(const SessionFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters to limit the type of sessions returned by the
     * request.</p>
     */
    inline DescribeSessionsRequest& AddFilters(SessionFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    SessionState m_state;
    bool m_stateHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<SessionFilter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
