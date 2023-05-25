/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codecatalyst/CodeCatalyst_EXPORTS.h>
#include <aws/codecatalyst/CodeCatalystRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codecatalyst/model/ProjectListFilter.h>
#include <utility>

namespace Aws
{
namespace CodeCatalyst
{
namespace Model
{

  /**
   */
  class ListProjectsRequest : public CodeCatalystRequest
  {
  public:
    AWS_CODECATALYST_API ListProjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProjects"; }

    AWS_CODECATALYST_API Aws::String SerializePayload() const override;


    /**
     * <p>The name of the space.</p>
     */
    inline const Aws::String& GetSpaceName() const{ return m_spaceName; }

    /**
     * <p>The name of the space.</p>
     */
    inline bool SpaceNameHasBeenSet() const { return m_spaceNameHasBeenSet; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const Aws::String& value) { m_spaceNameHasBeenSet = true; m_spaceName = value; }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(Aws::String&& value) { m_spaceNameHasBeenSet = true; m_spaceName = std::move(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline void SetSpaceName(const char* value) { m_spaceNameHasBeenSet = true; m_spaceName.assign(value); }

    /**
     * <p>The name of the space.</p>
     */
    inline ListProjectsRequest& WithSpaceName(const Aws::String& value) { SetSpaceName(value); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline ListProjectsRequest& WithSpaceName(Aws::String&& value) { SetSpaceName(std::move(value)); return *this;}

    /**
     * <p>The name of the space.</p>
     */
    inline ListProjectsRequest& WithSpaceName(const char* value) { SetSpaceName(value); return *this;}


    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListProjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListProjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token returned from a call to this API to indicate the next batch of
     * results to return, if any.</p>
     */
    inline ListProjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to show in a single call to this API. If the
     * number of results is larger than the number you specified, the response will
     * include a <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to show in a single call to this API. If the
     * number of results is larger than the number you specified, the response will
     * include a <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to show in a single call to this API. If the
     * number of results is larger than the number you specified, the response will
     * include a <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to show in a single call to this API. If the
     * number of results is larger than the number you specified, the response will
     * include a <code>NextToken</code> element, which you can use to obtain additional
     * results.</p>
     */
    inline ListProjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Information about filters to apply to narrow the results returned in the
     * list.</p>
     */
    inline const Aws::Vector<ProjectListFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Information about filters to apply to narrow the results returned in the
     * list.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Information about filters to apply to narrow the results returned in the
     * list.</p>
     */
    inline void SetFilters(const Aws::Vector<ProjectListFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Information about filters to apply to narrow the results returned in the
     * list.</p>
     */
    inline void SetFilters(Aws::Vector<ProjectListFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Information about filters to apply to narrow the results returned in the
     * list.</p>
     */
    inline ListProjectsRequest& WithFilters(const Aws::Vector<ProjectListFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Information about filters to apply to narrow the results returned in the
     * list.</p>
     */
    inline ListProjectsRequest& WithFilters(Aws::Vector<ProjectListFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Information about filters to apply to narrow the results returned in the
     * list.</p>
     */
    inline ListProjectsRequest& AddFilters(const ProjectListFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Information about filters to apply to narrow the results returned in the
     * list.</p>
     */
    inline ListProjectsRequest& AddFilters(ProjectListFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_spaceName;
    bool m_spaceNameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::Vector<ProjectListFilter> m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeCatalyst
} // namespace Aws
