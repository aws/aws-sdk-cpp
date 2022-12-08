/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/omics/model/ListVariantImportJobsFilter.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class ListVariantImportJobsRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API ListVariantImportJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVariantImportJobs"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A filter to apply to the list.</p>
     */
    inline const ListVariantImportJobsFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>A filter to apply to the list.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>A filter to apply to the list.</p>
     */
    inline void SetFilter(const ListVariantImportJobsFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A filter to apply to the list.</p>
     */
    inline void SetFilter(ListVariantImportJobsFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>A filter to apply to the list.</p>
     */
    inline ListVariantImportJobsRequest& WithFilter(const ListVariantImportJobsFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>A filter to apply to the list.</p>
     */
    inline ListVariantImportJobsRequest& WithFilter(ListVariantImportJobsFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>A list of job IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetIds() const{ return m_ids; }

    /**
     * <p>A list of job IDs.</p>
     */
    inline bool IdsHasBeenSet() const { return m_idsHasBeenSet; }

    /**
     * <p>A list of job IDs.</p>
     */
    inline void SetIds(const Aws::Vector<Aws::String>& value) { m_idsHasBeenSet = true; m_ids = value; }

    /**
     * <p>A list of job IDs.</p>
     */
    inline void SetIds(Aws::Vector<Aws::String>&& value) { m_idsHasBeenSet = true; m_ids = std::move(value); }

    /**
     * <p>A list of job IDs.</p>
     */
    inline ListVariantImportJobsRequest& WithIds(const Aws::Vector<Aws::String>& value) { SetIds(value); return *this;}

    /**
     * <p>A list of job IDs.</p>
     */
    inline ListVariantImportJobsRequest& WithIds(Aws::Vector<Aws::String>&& value) { SetIds(std::move(value)); return *this;}

    /**
     * <p>A list of job IDs.</p>
     */
    inline ListVariantImportJobsRequest& AddIds(const Aws::String& value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }

    /**
     * <p>A list of job IDs.</p>
     */
    inline ListVariantImportJobsRequest& AddIds(Aws::String&& value) { m_idsHasBeenSet = true; m_ids.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of job IDs.</p>
     */
    inline ListVariantImportJobsRequest& AddIds(const char* value) { m_idsHasBeenSet = true; m_ids.push_back(value); return *this; }


    /**
     * <p>The maximum number of import jobs to return in one page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of import jobs to return in one page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of import jobs to return in one page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of import jobs to return in one page of results.</p>
     */
    inline ListVariantImportJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListVariantImportJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListVariantImportJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Specify the pagination token from a previous request to retrieve the next
     * page of results.</p>
     */
    inline ListVariantImportJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    ListVariantImportJobsFilter m_filter;
    bool m_filterHasBeenSet = false;

    Aws::Vector<Aws::String> m_ids;
    bool m_idsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
