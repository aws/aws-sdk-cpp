/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/IngestionJobSortBy.h>
#include <aws/bedrock-agent/model/IngestionJobFilter.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class ListIngestionJobsRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API ListIngestionJobsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIngestionJobs"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the data source for which to return ingestion
     * jobs.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The unique identifier of the data source for which to return ingestion
     * jobs.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the data source for which to return ingestion
     * jobs.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The unique identifier of the data source for which to return ingestion
     * jobs.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The unique identifier of the data source for which to return ingestion
     * jobs.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The unique identifier of the data source for which to return ingestion
     * jobs.</p>
     */
    inline ListIngestionJobsRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The unique identifier of the data source for which to return ingestion
     * jobs.</p>
     */
    inline ListIngestionJobsRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the data source for which to return ingestion
     * jobs.</p>
     */
    inline ListIngestionJobsRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>Contains a definition of a filter for which to filter the results.</p>
     */
    inline const Aws::Vector<IngestionJobFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Contains a definition of a filter for which to filter the results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Contains a definition of a filter for which to filter the results.</p>
     */
    inline void SetFilters(const Aws::Vector<IngestionJobFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Contains a definition of a filter for which to filter the results.</p>
     */
    inline void SetFilters(Aws::Vector<IngestionJobFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Contains a definition of a filter for which to filter the results.</p>
     */
    inline ListIngestionJobsRequest& WithFilters(const Aws::Vector<IngestionJobFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Contains a definition of a filter for which to filter the results.</p>
     */
    inline ListIngestionJobsRequest& WithFilters(Aws::Vector<IngestionJobFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Contains a definition of a filter for which to filter the results.</p>
     */
    inline ListIngestionJobsRequest& AddFilters(const IngestionJobFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Contains a definition of a filter for which to filter the results.</p>
     */
    inline ListIngestionJobsRequest& AddFilters(IngestionJobFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The unique identifier of the knowledge base for which to return ingestion
     * jobs.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base for which to return ingestion
     * jobs.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the knowledge base for which to return ingestion
     * jobs.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base for which to return ingestion
     * jobs.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base for which to return ingestion
     * jobs.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base for which to return ingestion
     * jobs.</p>
     */
    inline ListIngestionJobsRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base for which to return ingestion
     * jobs.</p>
     */
    inline ListIngestionJobsRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base for which to return ingestion
     * jobs.</p>
     */
    inline ListIngestionJobsRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline ListIngestionJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline ListIngestionJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline ListIngestionJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline ListIngestionJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Contains details about how to sort the results.</p>
     */
    inline const IngestionJobSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Contains details about how to sort the results.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Contains details about how to sort the results.</p>
     */
    inline void SetSortBy(const IngestionJobSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Contains details about how to sort the results.</p>
     */
    inline void SetSortBy(IngestionJobSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Contains details about how to sort the results.</p>
     */
    inline ListIngestionJobsRequest& WithSortBy(const IngestionJobSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Contains details about how to sort the results.</p>
     */
    inline ListIngestionJobsRequest& WithSortBy(IngestionJobSortBy&& value) { SetSortBy(std::move(value)); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::Vector<IngestionJobFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    IngestionJobSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
