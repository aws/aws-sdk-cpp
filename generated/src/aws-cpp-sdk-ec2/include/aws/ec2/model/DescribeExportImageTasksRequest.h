﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class DescribeExportImageTasksRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeExportImageTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeExportImageTasks"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeExportImageTasksRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filter tasks using the <code>task-state</code> filter and one of the
     * following values: <code>active</code>, <code>completed</code>,
     * <code>deleting</code>, or <code>deleted</code>.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeExportImageTasksRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeExportImageTasksRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeExportImageTasksRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeExportImageTasksRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IDs of the export image tasks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetExportImageTaskIds() const{ return m_exportImageTaskIds; }
    inline bool ExportImageTaskIdsHasBeenSet() const { return m_exportImageTaskIdsHasBeenSet; }
    inline void SetExportImageTaskIds(const Aws::Vector<Aws::String>& value) { m_exportImageTaskIdsHasBeenSet = true; m_exportImageTaskIds = value; }
    inline void SetExportImageTaskIds(Aws::Vector<Aws::String>&& value) { m_exportImageTaskIdsHasBeenSet = true; m_exportImageTaskIds = std::move(value); }
    inline DescribeExportImageTasksRequest& WithExportImageTaskIds(const Aws::Vector<Aws::String>& value) { SetExportImageTaskIds(value); return *this;}
    inline DescribeExportImageTasksRequest& WithExportImageTaskIds(Aws::Vector<Aws::String>&& value) { SetExportImageTaskIds(std::move(value)); return *this;}
    inline DescribeExportImageTasksRequest& AddExportImageTaskIds(const Aws::String& value) { m_exportImageTaskIdsHasBeenSet = true; m_exportImageTaskIds.push_back(value); return *this; }
    inline DescribeExportImageTasksRequest& AddExportImageTaskIds(Aws::String&& value) { m_exportImageTaskIdsHasBeenSet = true; m_exportImageTaskIds.push_back(std::move(value)); return *this; }
    inline DescribeExportImageTasksRequest& AddExportImageTaskIds(const char* value) { m_exportImageTaskIdsHasBeenSet = true; m_exportImageTaskIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeExportImageTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeExportImageTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeExportImageTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeExportImageTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::Vector<Aws::String> m_exportImageTaskIds;
    bool m_exportImageTaskIdsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
