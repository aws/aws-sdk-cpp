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
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/SSMRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/ParametersFilter.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeParametersRequest : public SSMRequest
  {
  public:
    DescribeParametersRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline const Aws::Vector<ParametersFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline void SetFilters(const Aws::Vector<ParametersFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline void SetFilters(Aws::Vector<ParametersFilter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline DescribeParametersRequest& WithFilters(const Aws::Vector<ParametersFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline DescribeParametersRequest& WithFilters(Aws::Vector<ParametersFilter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline DescribeParametersRequest& AddFilters(const ParametersFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * results.</p>
     */
    inline DescribeParametersRequest& AddFilters(ParametersFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

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
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of
     * results.</p>
     */
    inline DescribeParametersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeParametersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeParametersRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeParametersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<ParametersFilter> m_filters;
    bool m_filtersHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
