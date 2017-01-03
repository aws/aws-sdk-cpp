﻿/*
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ssm/model/PatchOrchestratorFilter.h>

namespace Aws
{
namespace SSM
{
namespace Model
{

  /**
   */
  class AWS_SSM_API DescribeInstancePatchesRequest : public SSMRequest
  {
  public:
    DescribeInstancePatchesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>The ID of the instance whose patch state information should be retrieved.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance whose patch state information should be retrieved.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance whose patch state information should be retrieved.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance whose patch state information should be retrieved.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance whose patch state information should be retrieved.</p>
     */
    inline DescribeInstancePatchesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance whose patch state information should be retrieved.</p>
     */
    inline DescribeInstancePatchesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance whose patch state information should be retrieved.</p>
     */
    inline DescribeInstancePatchesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string, 1 ≤
     * length ≤ 128)</p> <p>Values (array of strings 1 ≤ length ≤ 256)</p>
     */
    inline const Aws::Vector<PatchOrchestratorFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string, 1 ≤
     * length ≤ 128)</p> <p>Values (array of strings 1 ≤ length ≤ 256)</p>
     */
    inline void SetFilters(const Aws::Vector<PatchOrchestratorFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string, 1 ≤
     * length ≤ 128)</p> <p>Values (array of strings 1 ≤ length ≤ 256)</p>
     */
    inline void SetFilters(Aws::Vector<PatchOrchestratorFilter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string, 1 ≤
     * length ≤ 128)</p> <p>Values (array of strings 1 ≤ length ≤ 256)</p>
     */
    inline DescribeInstancePatchesRequest& WithFilters(const Aws::Vector<PatchOrchestratorFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string, 1 ≤
     * length ≤ 128)</p> <p>Values (array of strings 1 ≤ length ≤ 256)</p>
     */
    inline DescribeInstancePatchesRequest& WithFilters(Aws::Vector<PatchOrchestratorFilter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string, 1 ≤
     * length ≤ 128)</p> <p>Values (array of strings 1 ≤ length ≤ 256)</p>
     */
    inline DescribeInstancePatchesRequest& AddFilters(const PatchOrchestratorFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Each entry in the array is a structure containing:</p> <p>Key (string, 1 ≤
     * length ≤ 128)</p> <p>Values (array of strings 1 ≤ length ≤ 256)</p>
     */
    inline DescribeInstancePatchesRequest& AddFilters(PatchOrchestratorFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

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
    inline DescribeInstancePatchesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeInstancePatchesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of items to return. (You received this token from
     * a previous call.)</p>
     */
    inline DescribeInstancePatchesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of patches to return (per page).</p>
     */
    inline DescribeInstancePatchesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:
    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;
    Aws::Vector<PatchOrchestratorFilter> m_filters;
    bool m_filtersHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
