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


    
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    
    inline ListIngestionJobsRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    
    inline ListIngestionJobsRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    
    inline ListIngestionJobsRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    
    inline ListIngestionJobsRequest& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    
    inline ListIngestionJobsRequest& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    
    inline ListIngestionJobsRequest& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    
    inline const Aws::Vector<IngestionJobFilter>& GetFilters() const{ return m_filters; }

    
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    
    inline void SetFilters(const Aws::Vector<IngestionJobFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    
    inline void SetFilters(Aws::Vector<IngestionJobFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    
    inline ListIngestionJobsRequest& WithFilters(const Aws::Vector<IngestionJobFilter>& value) { SetFilters(value); return *this;}

    
    inline ListIngestionJobsRequest& WithFilters(Aws::Vector<IngestionJobFilter>&& value) { SetFilters(std::move(value)); return *this;}

    
    inline ListIngestionJobsRequest& AddFilters(const IngestionJobFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    
    inline ListIngestionJobsRequest& AddFilters(IngestionJobFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    
    inline const IngestionJobSortBy& GetSortBy() const{ return m_sortBy; }

    
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    
    inline void SetSortBy(const IngestionJobSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    
    inline void SetSortBy(IngestionJobSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    
    inline ListIngestionJobsRequest& WithSortBy(const IngestionJobSortBy& value) { SetSortBy(value); return *this;}

    
    inline ListIngestionJobsRequest& WithSortBy(IngestionJobSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    
    inline int GetMaxResults() const{ return m_maxResults; }

    
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    
    inline ListIngestionJobsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListIngestionJobsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListIngestionJobsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListIngestionJobsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::Vector<IngestionJobFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    IngestionJobSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
