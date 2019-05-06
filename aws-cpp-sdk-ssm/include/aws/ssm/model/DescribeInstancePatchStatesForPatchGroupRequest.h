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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/InstancePatchStateFilter.h>
#include <utility>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeInstancePatchStatesForPatchGroupRequest : public SSMRequest
  {
  public:
    DescribeInstancePatchStatesForPatchGroupRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstancePatchStatesForPatchGroup"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the patch group for which the patch state information should be
     * retrieved.</p>
     */
    inline const Aws::String& GetPatchGroup() const{ return m_patchGroup; }

    /**
     * <p>The name of the patch group for which the patch state information should be
     * retrieved.</p>
     */
    inline bool PatchGroupHasBeenSet() const { return m_patchGroupHasBeenSet; }

    /**
     * <p>The name of the patch group for which the patch state information should be
     * retrieved.</p>
     */
    inline void SetPatchGroup(const Aws::String& value) { m_patchGroupHasBeenSet = true; m_patchGroup = value; }

    /**
     * <p>The name of the patch group for which the patch state information should be
     * retrieved.</p>
     */
    inline void SetPatchGroup(Aws::String&& value) { m_patchGroupHasBeenSet = true; m_patchGroup = std::move(value); }

    /**
     * <p>The name of the patch group for which the patch state information should be
     * retrieved.</p>
     */
    inline void SetPatchGroup(const char* value) { m_patchGroupHasBeenSet = true; m_patchGroup.assign(value); }

    /**
     * <p>The name of the patch group for which the patch state information should be
     * retrieved.</p>
     */
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithPatchGroup(const Aws::String& value) { SetPatchGroup(value); return *this;}

    /**
     * <p>The name of the patch group for which the patch state information should be
     * retrieved.</p>
     */
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithPatchGroup(Aws::String&& value) { SetPatchGroup(std::move(value)); return *this;}

    /**
     * <p>The name of the patch group for which the patch state information should be
     * retrieved.</p>
     */
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithPatchGroup(const char* value) { SetPatchGroup(value); return *this;}


    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string between
     * 1 and 200 characters)</p> <p> Values (array containing a single string)</p> <p>
     * Type (string "Equal", "NotEqual", "LessThan", "GreaterThan")</p>
     */
    inline const Aws::Vector<InstancePatchStateFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string between
     * 1 and 200 characters)</p> <p> Values (array containing a single string)</p> <p>
     * Type (string "Equal", "NotEqual", "LessThan", "GreaterThan")</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string between
     * 1 and 200 characters)</p> <p> Values (array containing a single string)</p> <p>
     * Type (string "Equal", "NotEqual", "LessThan", "GreaterThan")</p>
     */
    inline void SetFilters(const Aws::Vector<InstancePatchStateFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string between
     * 1 and 200 characters)</p> <p> Values (array containing a single string)</p> <p>
     * Type (string "Equal", "NotEqual", "LessThan", "GreaterThan")</p>
     */
    inline void SetFilters(Aws::Vector<InstancePatchStateFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string between
     * 1 and 200 characters)</p> <p> Values (array containing a single string)</p> <p>
     * Type (string "Equal", "NotEqual", "LessThan", "GreaterThan")</p>
     */
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithFilters(const Aws::Vector<InstancePatchStateFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string between
     * 1 and 200 characters)</p> <p> Values (array containing a single string)</p> <p>
     * Type (string "Equal", "NotEqual", "LessThan", "GreaterThan")</p>
     */
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithFilters(Aws::Vector<InstancePatchStateFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string between
     * 1 and 200 characters)</p> <p> Values (array containing a single string)</p> <p>
     * Type (string "Equal", "NotEqual", "LessThan", "GreaterThan")</p>
     */
    inline DescribeInstancePatchStatesForPatchGroupRequest& AddFilters(const InstancePatchStateFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string between
     * 1 and 200 characters)</p> <p> Values (array containing a single string)</p> <p>
     * Type (string "Equal", "NotEqual", "LessThan", "GreaterThan")</p>
     */
    inline DescribeInstancePatchStatesForPatchGroupRequest& AddFilters(InstancePatchStateFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline DescribeInstancePatchStatesForPatchGroupRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_patchGroup;
    bool m_patchGroupHasBeenSet;

    Aws::Vector<InstancePatchStateFilter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
