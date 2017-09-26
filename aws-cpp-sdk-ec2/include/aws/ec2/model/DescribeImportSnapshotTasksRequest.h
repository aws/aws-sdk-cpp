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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeImportSnapshotTasks.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeImportSnapshotTasksRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeImportSnapshotTasksRequest : public EC2Request
  {
  public:
    DescribeImportSnapshotTasksRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImportSnapshotTasks"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeImportSnapshotTasksRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>One or more filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>One or more filters.</p>
     */
    inline DescribeImportSnapshotTasksRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p>
     */
    inline DescribeImportSnapshotTasksRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>One or more filters.</p>
     */
    inline DescribeImportSnapshotTasksRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p>
     */
    inline DescribeImportSnapshotTasksRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of import snapshot task IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImportTaskIds() const{ return m_importTaskIds; }

    /**
     * <p>A list of import snapshot task IDs.</p>
     */
    inline void SetImportTaskIds(const Aws::Vector<Aws::String>& value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds = value; }

    /**
     * <p>A list of import snapshot task IDs.</p>
     */
    inline void SetImportTaskIds(Aws::Vector<Aws::String>&& value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds = std::move(value); }

    /**
     * <p>A list of import snapshot task IDs.</p>
     */
    inline DescribeImportSnapshotTasksRequest& WithImportTaskIds(const Aws::Vector<Aws::String>& value) { SetImportTaskIds(value); return *this;}

    /**
     * <p>A list of import snapshot task IDs.</p>
     */
    inline DescribeImportSnapshotTasksRequest& WithImportTaskIds(Aws::Vector<Aws::String>&& value) { SetImportTaskIds(std::move(value)); return *this;}

    /**
     * <p>A list of import snapshot task IDs.</p>
     */
    inline DescribeImportSnapshotTasksRequest& AddImportTaskIds(const Aws::String& value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds.push_back(value); return *this; }

    /**
     * <p>A list of import snapshot task IDs.</p>
     */
    inline DescribeImportSnapshotTasksRequest& AddImportTaskIds(Aws::String&& value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of import snapshot task IDs.</p>
     */
    inline DescribeImportSnapshotTasksRequest& AddImportTaskIds(const char* value) { m_importTaskIdsHasBeenSet = true; m_importTaskIds.push_back(value); return *this; }


    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. To retrieve the
     * remaining results, make another call with the returned <code>NextToken</code>
     * value.</p>
     */
    inline DescribeImportSnapshotTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token that indicates the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the next page of results.</p>
     */
    inline DescribeImportSnapshotTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the next page of results.</p>
     */
    inline DescribeImportSnapshotTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the next page of results.</p>
     */
    inline DescribeImportSnapshotTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    Aws::Vector<Aws::String> m_importTaskIds;
    bool m_importTaskIdsHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
