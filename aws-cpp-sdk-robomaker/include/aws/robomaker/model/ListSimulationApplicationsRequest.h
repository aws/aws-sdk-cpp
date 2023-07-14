﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/robomaker/RoboMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/robomaker/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RoboMaker
{
namespace Model
{

  /**
   */
  class AWS_ROBOMAKER_API ListSimulationApplicationsRequest : public RoboMakerRequest
  {
  public:
    ListSimulationApplicationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSimulationApplications"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The version qualifier of the simulation application.</p>
     */
    inline const Aws::String& GetVersionQualifier() const{ return m_versionQualifier; }

    /**
     * <p>The version qualifier of the simulation application.</p>
     */
    inline bool VersionQualifierHasBeenSet() const { return m_versionQualifierHasBeenSet; }

    /**
     * <p>The version qualifier of the simulation application.</p>
     */
    inline void SetVersionQualifier(const Aws::String& value) { m_versionQualifierHasBeenSet = true; m_versionQualifier = value; }

    /**
     * <p>The version qualifier of the simulation application.</p>
     */
    inline void SetVersionQualifier(Aws::String&& value) { m_versionQualifierHasBeenSet = true; m_versionQualifier = std::move(value); }

    /**
     * <p>The version qualifier of the simulation application.</p>
     */
    inline void SetVersionQualifier(const char* value) { m_versionQualifierHasBeenSet = true; m_versionQualifier.assign(value); }

    /**
     * <p>The version qualifier of the simulation application.</p>
     */
    inline ListSimulationApplicationsRequest& WithVersionQualifier(const Aws::String& value) { SetVersionQualifier(value); return *this;}

    /**
     * <p>The version qualifier of the simulation application.</p>
     */
    inline ListSimulationApplicationsRequest& WithVersionQualifier(Aws::String&& value) { SetVersionQualifier(std::move(value)); return *this;}

    /**
     * <p>The version qualifier of the simulation application.</p>
     */
    inline ListSimulationApplicationsRequest& WithVersionQualifier(const char* value) { SetVersionQualifier(value); return *this;}


    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationApplicationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationApplicationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous paginated request did not return all of the remaining
     * results, the response object's <code>nextToken</code> parameter value is set to
     * a token. To retrieve the next set of results, call
     * <code>ListSimulationApplications</code> again and assign that token to the
     * request object's <code>nextToken</code> parameter. If there are no remaining
     * results, the previous response object's NextToken parameter is set to null. </p>
     */
    inline ListSimulationApplicationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>When this parameter is used, <code>ListSimulationApplications</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListSimulationApplications</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>ListSimulationApplications</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>When this parameter is used, <code>ListSimulationApplications</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListSimulationApplications</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>ListSimulationApplications</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>When this parameter is used, <code>ListSimulationApplications</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListSimulationApplications</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>ListSimulationApplications</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>When this parameter is used, <code>ListSimulationApplications</code> only
     * returns <code>maxResults</code> results in a single page along with a
     * <code>nextToken</code> response element. The remaining results of the initial
     * request can be seen by sending another <code>ListSimulationApplications</code>
     * request with the returned <code>nextToken</code> value. This value can be
     * between 1 and 100. If this parameter is not used, then
     * <code>ListSimulationApplications</code> returns up to 100 results and a
     * <code>nextToken</code> value if applicable. </p>
     */
    inline ListSimulationApplicationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Optional list of filters to limit results.</p> <p>The filter name
     * <code>name</code> is supported. When filtering, you must use the complete value
     * of the filtered item. You can use up to three filters.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Optional list of filters to limit results.</p> <p>The filter name
     * <code>name</code> is supported. When filtering, you must use the complete value
     * of the filtered item. You can use up to three filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Optional list of filters to limit results.</p> <p>The filter name
     * <code>name</code> is supported. When filtering, you must use the complete value
     * of the filtered item. You can use up to three filters.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Optional list of filters to limit results.</p> <p>The filter name
     * <code>name</code> is supported. When filtering, you must use the complete value
     * of the filtered item. You can use up to three filters.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Optional list of filters to limit results.</p> <p>The filter name
     * <code>name</code> is supported. When filtering, you must use the complete value
     * of the filtered item. You can use up to three filters.</p>
     */
    inline ListSimulationApplicationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Optional list of filters to limit results.</p> <p>The filter name
     * <code>name</code> is supported. When filtering, you must use the complete value
     * of the filtered item. You can use up to three filters.</p>
     */
    inline ListSimulationApplicationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Optional list of filters to limit results.</p> <p>The filter name
     * <code>name</code> is supported. When filtering, you must use the complete value
     * of the filtered item. You can use up to three filters.</p>
     */
    inline ListSimulationApplicationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Optional list of filters to limit results.</p> <p>The filter name
     * <code>name</code> is supported. When filtering, you must use the complete value
     * of the filtered item. You can use up to three filters.</p>
     */
    inline ListSimulationApplicationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_versionQualifier;
    bool m_versionQualifierHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
