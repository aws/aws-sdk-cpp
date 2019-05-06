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
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/discovery/ApplicationDiscoveryServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/discovery/model/ImportTaskFilter.h>
#include <utility>

namespace Aws
{
namespace ApplicationDiscoveryService
{
namespace Model
{

  /**
   */
  class AWS_APPLICATIONDISCOVERYSERVICE_API DescribeImportTasksRequest : public ApplicationDiscoveryServiceRequest
  {
  public:
    DescribeImportTasksRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeImportTasks"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>An array of name-value pairs that you provide to filter the results for the
     * <code>DescribeImportTask</code> request to a specific subset of results.
     * Currently, wildcard values aren't supported for filters.</p>
     */
    inline const Aws::Vector<ImportTaskFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of name-value pairs that you provide to filter the results for the
     * <code>DescribeImportTask</code> request to a specific subset of results.
     * Currently, wildcard values aren't supported for filters.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of name-value pairs that you provide to filter the results for the
     * <code>DescribeImportTask</code> request to a specific subset of results.
     * Currently, wildcard values aren't supported for filters.</p>
     */
    inline void SetFilters(const Aws::Vector<ImportTaskFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of name-value pairs that you provide to filter the results for the
     * <code>DescribeImportTask</code> request to a specific subset of results.
     * Currently, wildcard values aren't supported for filters.</p>
     */
    inline void SetFilters(Aws::Vector<ImportTaskFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of name-value pairs that you provide to filter the results for the
     * <code>DescribeImportTask</code> request to a specific subset of results.
     * Currently, wildcard values aren't supported for filters.</p>
     */
    inline DescribeImportTasksRequest& WithFilters(const Aws::Vector<ImportTaskFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of name-value pairs that you provide to filter the results for the
     * <code>DescribeImportTask</code> request to a specific subset of results.
     * Currently, wildcard values aren't supported for filters.</p>
     */
    inline DescribeImportTasksRequest& WithFilters(Aws::Vector<ImportTaskFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of name-value pairs that you provide to filter the results for the
     * <code>DescribeImportTask</code> request to a specific subset of results.
     * Currently, wildcard values aren't supported for filters.</p>
     */
    inline DescribeImportTasksRequest& AddFilters(const ImportTaskFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of name-value pairs that you provide to filter the results for the
     * <code>DescribeImportTask</code> request to a specific subset of results.
     * Currently, wildcard values aren't supported for filters.</p>
     */
    inline DescribeImportTasksRequest& AddFilters(ImportTaskFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results that you want this request to return, up to
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results that you want this request to return, up to
     * 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results that you want this request to return, up to
     * 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results that you want this request to return, up to
     * 100.</p>
     */
    inline DescribeImportTasksRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token to request a specific page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to request a specific page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to request a specific page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to request a specific page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to request a specific page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to request a specific page of results.</p>
     */
    inline DescribeImportTasksRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to request a specific page of results.</p>
     */
    inline DescribeImportTasksRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to request a specific page of results.</p>
     */
    inline DescribeImportTasksRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImportTaskFilter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
