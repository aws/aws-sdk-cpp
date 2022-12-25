/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codebuild/CodeBuild_EXPORTS.h>
#include <aws/codebuild/CodeBuildRequest.h>
#include <aws/codebuild/model/SortOrderType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codebuild/model/ReportFilter.h>
#include <utility>

namespace Aws
{
namespace CodeBuild
{
namespace Model
{

  /**
   */
  class ListReportsRequest : public CodeBuildRequest
  {
  public:
    AWS_CODEBUILD_API ListReportsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReports"; }

    AWS_CODEBUILD_API Aws::String SerializePayload() const override;

    AWS_CODEBUILD_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p> Specifies the sort order for the list of returned reports. Valid values are:
     * </p> <ul> <li> <p> <code>ASCENDING</code>: return reports in chronological order
     * based on their creation date. </p> </li> <li> <p> <code>DESCENDING</code>:
     * return reports in the reverse chronological order based on their creation date.
     * </p> </li> </ul>
     */
    inline const SortOrderType& GetSortOrder() const{ return m_sortOrder; }

    /**
     * <p> Specifies the sort order for the list of returned reports. Valid values are:
     * </p> <ul> <li> <p> <code>ASCENDING</code>: return reports in chronological order
     * based on their creation date. </p> </li> <li> <p> <code>DESCENDING</code>:
     * return reports in the reverse chronological order based on their creation date.
     * </p> </li> </ul>
     */
    inline bool SortOrderHasBeenSet() const { return m_sortOrderHasBeenSet; }

    /**
     * <p> Specifies the sort order for the list of returned reports. Valid values are:
     * </p> <ul> <li> <p> <code>ASCENDING</code>: return reports in chronological order
     * based on their creation date. </p> </li> <li> <p> <code>DESCENDING</code>:
     * return reports in the reverse chronological order based on their creation date.
     * </p> </li> </ul>
     */
    inline void SetSortOrder(const SortOrderType& value) { m_sortOrderHasBeenSet = true; m_sortOrder = value; }

    /**
     * <p> Specifies the sort order for the list of returned reports. Valid values are:
     * </p> <ul> <li> <p> <code>ASCENDING</code>: return reports in chronological order
     * based on their creation date. </p> </li> <li> <p> <code>DESCENDING</code>:
     * return reports in the reverse chronological order based on their creation date.
     * </p> </li> </ul>
     */
    inline void SetSortOrder(SortOrderType&& value) { m_sortOrderHasBeenSet = true; m_sortOrder = std::move(value); }

    /**
     * <p> Specifies the sort order for the list of returned reports. Valid values are:
     * </p> <ul> <li> <p> <code>ASCENDING</code>: return reports in chronological order
     * based on their creation date. </p> </li> <li> <p> <code>DESCENDING</code>:
     * return reports in the reverse chronological order based on their creation date.
     * </p> </li> </ul>
     */
    inline ListReportsRequest& WithSortOrder(const SortOrderType& value) { SetSortOrder(value); return *this;}

    /**
     * <p> Specifies the sort order for the list of returned reports. Valid values are:
     * </p> <ul> <li> <p> <code>ASCENDING</code>: return reports in chronological order
     * based on their creation date. </p> </li> <li> <p> <code>DESCENDING</code>:
     * return reports in the reverse chronological order based on their creation date.
     * </p> </li> </ul>
     */
    inline ListReportsRequest& WithSortOrder(SortOrderType&& value) { SetSortOrder(std::move(value)); return *this;}


    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListReportsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListReportsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> During a previous call, the maximum number of items that can be returned is
     * the value specified in <code>maxResults</code>. If there more items in the list,
     * then a unique string called a <i>nextToken</i> is returned. To get the next
     * batch of items in the list, call this operation again, adding the next token to
     * the call. To get all of the items in the list, keep calling this operation with
     * each subsequent next token that is returned, until no more next tokens are
     * returned. </p>
     */
    inline ListReportsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The maximum number of paginated reports returned per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>Report</code> objects. The default value is 100. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> The maximum number of paginated reports returned per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>Report</code> objects. The default value is 100. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> The maximum number of paginated reports returned per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>Report</code> objects. The default value is 100. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> The maximum number of paginated reports returned per response. Use
     * <code>nextToken</code> to iterate pages in the list of returned
     * <code>Report</code> objects. The default value is 100. </p>
     */
    inline ListReportsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> A <code>ReportFilter</code> object used to filter the returned reports. </p>
     */
    inline const ReportFilter& GetFilter() const{ return m_filter; }

    /**
     * <p> A <code>ReportFilter</code> object used to filter the returned reports. </p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p> A <code>ReportFilter</code> object used to filter the returned reports. </p>
     */
    inline void SetFilter(const ReportFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p> A <code>ReportFilter</code> object used to filter the returned reports. </p>
     */
    inline void SetFilter(ReportFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p> A <code>ReportFilter</code> object used to filter the returned reports. </p>
     */
    inline ListReportsRequest& WithFilter(const ReportFilter& value) { SetFilter(value); return *this;}

    /**
     * <p> A <code>ReportFilter</code> object used to filter the returned reports. </p>
     */
    inline ListReportsRequest& WithFilter(ReportFilter&& value) { SetFilter(std::move(value)); return *this;}

  private:

    SortOrderType m_sortOrder;
    bool m_sortOrderHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    ReportFilter m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeBuild
} // namespace Aws
