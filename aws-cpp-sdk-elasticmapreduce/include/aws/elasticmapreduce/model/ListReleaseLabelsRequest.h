/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/elasticmapreduce/model/ReleaseLabelFilter.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class ListReleaseLabelsRequest : public EMRRequest
  {
  public:
    AWS_EMR_API ListReleaseLabelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListReleaseLabels"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Filters the results of the request. <code>Prefix</code> specifies the prefix
     * of release labels to return. <code>Application</code> specifies the application
     * (with/without version) of release labels to return.</p>
     */
    inline const ReleaseLabelFilter& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters the results of the request. <code>Prefix</code> specifies the prefix
     * of release labels to return. <code>Application</code> specifies the application
     * (with/without version) of release labels to return.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters the results of the request. <code>Prefix</code> specifies the prefix
     * of release labels to return. <code>Application</code> specifies the application
     * (with/without version) of release labels to return.</p>
     */
    inline void SetFilters(const ReleaseLabelFilter& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters the results of the request. <code>Prefix</code> specifies the prefix
     * of release labels to return. <code>Application</code> specifies the application
     * (with/without version) of release labels to return.</p>
     */
    inline void SetFilters(ReleaseLabelFilter&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters the results of the request. <code>Prefix</code> specifies the prefix
     * of release labels to return. <code>Application</code> specifies the application
     * (with/without version) of release labels to return.</p>
     */
    inline ListReleaseLabelsRequest& WithFilters(const ReleaseLabelFilter& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters the results of the request. <code>Prefix</code> specifies the prefix
     * of release labels to return. <code>Application</code> specifies the application
     * (with/without version) of release labels to return.</p>
     */
    inline ListReleaseLabelsRequest& WithFilters(ReleaseLabelFilter&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p>Specifies the next page of results. If <code>NextToken</code> is not
     * specified, which is usually the case for the first request of ListReleaseLabels,
     * the first page of results are determined by other filtering parameters or by the
     * latest version. The <code>ListReleaseLabels</code> request fails if the identity
     * (Amazon Web Services account ID) and all filtering parameters are different from
     * the original request, or if the <code>NextToken</code> is expired or tampered
     * with.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specifies the next page of results. If <code>NextToken</code> is not
     * specified, which is usually the case for the first request of ListReleaseLabels,
     * the first page of results are determined by other filtering parameters or by the
     * latest version. The <code>ListReleaseLabels</code> request fails if the identity
     * (Amazon Web Services account ID) and all filtering parameters are different from
     * the original request, or if the <code>NextToken</code> is expired or tampered
     * with.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specifies the next page of results. If <code>NextToken</code> is not
     * specified, which is usually the case for the first request of ListReleaseLabels,
     * the first page of results are determined by other filtering parameters or by the
     * latest version. The <code>ListReleaseLabels</code> request fails if the identity
     * (Amazon Web Services account ID) and all filtering parameters are different from
     * the original request, or if the <code>NextToken</code> is expired or tampered
     * with.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specifies the next page of results. If <code>NextToken</code> is not
     * specified, which is usually the case for the first request of ListReleaseLabels,
     * the first page of results are determined by other filtering parameters or by the
     * latest version. The <code>ListReleaseLabels</code> request fails if the identity
     * (Amazon Web Services account ID) and all filtering parameters are different from
     * the original request, or if the <code>NextToken</code> is expired or tampered
     * with.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specifies the next page of results. If <code>NextToken</code> is not
     * specified, which is usually the case for the first request of ListReleaseLabels,
     * the first page of results are determined by other filtering parameters or by the
     * latest version. The <code>ListReleaseLabels</code> request fails if the identity
     * (Amazon Web Services account ID) and all filtering parameters are different from
     * the original request, or if the <code>NextToken</code> is expired or tampered
     * with.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specifies the next page of results. If <code>NextToken</code> is not
     * specified, which is usually the case for the first request of ListReleaseLabels,
     * the first page of results are determined by other filtering parameters or by the
     * latest version. The <code>ListReleaseLabels</code> request fails if the identity
     * (Amazon Web Services account ID) and all filtering parameters are different from
     * the original request, or if the <code>NextToken</code> is expired or tampered
     * with.</p>
     */
    inline ListReleaseLabelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specifies the next page of results. If <code>NextToken</code> is not
     * specified, which is usually the case for the first request of ListReleaseLabels,
     * the first page of results are determined by other filtering parameters or by the
     * latest version. The <code>ListReleaseLabels</code> request fails if the identity
     * (Amazon Web Services account ID) and all filtering parameters are different from
     * the original request, or if the <code>NextToken</code> is expired or tampered
     * with.</p>
     */
    inline ListReleaseLabelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specifies the next page of results. If <code>NextToken</code> is not
     * specified, which is usually the case for the first request of ListReleaseLabels,
     * the first page of results are determined by other filtering parameters or by the
     * latest version. The <code>ListReleaseLabels</code> request fails if the identity
     * (Amazon Web Services account ID) and all filtering parameters are different from
     * the original request, or if the <code>NextToken</code> is expired or tampered
     * with.</p>
     */
    inline ListReleaseLabelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Defines the maximum number of release labels to return in a single response.
     * The default is <code>100</code>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Defines the maximum number of release labels to return in a single response.
     * The default is <code>100</code>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Defines the maximum number of release labels to return in a single response.
     * The default is <code>100</code>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Defines the maximum number of release labels to return in a single response.
     * The default is <code>100</code>.</p>
     */
    inline ListReleaseLabelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ReleaseLabelFilter m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
