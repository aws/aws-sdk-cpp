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
#include <aws/ssm/model/InstanceInformationFilter.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeInstanceInformationRequest : public SSMRequest
  {
  public:
    DescribeInstanceInformationRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * instances.</p>
     */
    inline const Aws::Vector<InstanceInformationFilter>& GetInstanceInformationFilterList() const{ return m_instanceInformationFilterList; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * instances.</p>
     */
    inline void SetInstanceInformationFilterList(const Aws::Vector<InstanceInformationFilter>& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList = value; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * instances.</p>
     */
    inline void SetInstanceInformationFilterList(Aws::Vector<InstanceInformationFilter>&& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList = value; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * instances.</p>
     */
    inline DescribeInstanceInformationRequest& WithInstanceInformationFilterList(const Aws::Vector<InstanceInformationFilter>& value) { SetInstanceInformationFilterList(value); return *this;}

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * instances.</p>
     */
    inline DescribeInstanceInformationRequest& WithInstanceInformationFilterList(Aws::Vector<InstanceInformationFilter>&& value) { SetInstanceInformationFilterList(value); return *this;}

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * instances.</p>
     */
    inline DescribeInstanceInformationRequest& AddInstanceInformationFilterList(const InstanceInformationFilter& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList.push_back(value); return *this; }

    /**
     * <p>One or more filters. Use a filter to return a more specific list of
     * instances.</p>
     */
    inline DescribeInstanceInformationRequest& AddInstanceInformationFilterList(InstanceInformationFilter&& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList.push_back(value); return *this; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of results.
     * </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of results.
     * </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of results.
     * </p>
     */
    inline DescribeInstanceInformationRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

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
    inline DescribeInstanceInformationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeInstanceInformationRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeInstanceInformationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<InstanceInformationFilter> m_instanceInformationFilterList;
    bool m_instanceInformationFilterListHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
