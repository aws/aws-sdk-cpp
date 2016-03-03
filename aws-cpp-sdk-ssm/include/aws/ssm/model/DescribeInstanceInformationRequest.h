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
     * One or more filters. Use a filter to return a more specific list of instances.
     */
    inline const Aws::Vector<InstanceInformationFilter>& GetInstanceInformationFilterList() const{ return m_instanceInformationFilterList; }

    /**
     * One or more filters. Use a filter to return a more specific list of instances.
     */
    inline void SetInstanceInformationFilterList(const Aws::Vector<InstanceInformationFilter>& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList = value; }

    /**
     * One or more filters. Use a filter to return a more specific list of instances.
     */
    inline void SetInstanceInformationFilterList(Aws::Vector<InstanceInformationFilter>&& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList = value; }

    /**
     * One or more filters. Use a filter to return a more specific list of instances.
     */
    inline DescribeInstanceInformationRequest& WithInstanceInformationFilterList(const Aws::Vector<InstanceInformationFilter>& value) { SetInstanceInformationFilterList(value); return *this;}

    /**
     * One or more filters. Use a filter to return a more specific list of instances.
     */
    inline DescribeInstanceInformationRequest& WithInstanceInformationFilterList(Aws::Vector<InstanceInformationFilter>&& value) { SetInstanceInformationFilterList(value); return *this;}

    /**
     * One or more filters. Use a filter to return a more specific list of instances.
     */
    inline DescribeInstanceInformationRequest& AddInstanceInformationFilterList(const InstanceInformationFilter& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList.push_back(value); return *this; }

    /**
     * One or more filters. Use a filter to return a more specific list of instances.
     */
    inline DescribeInstanceInformationRequest& AddInstanceInformationFilterList(InstanceInformationFilter&& value) { m_instanceInformationFilterListHasBeenSet = true; m_instanceInformationFilterList.push_back(value); return *this; }

    /**
     * The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of results.
     */
    inline long GetMaxResults() const{ return m_maxResults; }

    /**
     * The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of results.
     */
    inline void SetMaxResults(long value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * The maximum number of items to return for this call. The call also returns a
     * token that you can specify in a subsequent call to get the next set of results.
     */
    inline DescribeInstanceInformationRequest& WithMaxResults(long value) { SetMaxResults(value); return *this;}

    /**
     * The token for the next set of items to return. (You received this token from a
     * previous call.)
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * The token for the next set of items to return. (You received this token from a
     * previous call.)
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The token for the next set of items to return. (You received this token from a
     * previous call.)
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * The token for the next set of items to return. (You received this token from a
     * previous call.)
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * The token for the next set of items to return. (You received this token from a
     * previous call.)
     */
    inline DescribeInstanceInformationRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of items to return. (You received this token from a
     * previous call.)
     */
    inline DescribeInstanceInformationRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * The token for the next set of items to return. (You received this token from a
     * previous call.)
     */
    inline DescribeInstanceInformationRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<InstanceInformationFilter> m_instanceInformationFilterList;
    bool m_instanceInformationFilterListHasBeenSet;
    long m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
