/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class ListKnowledgeBaseDocumentsRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API ListKnowledgeBaseDocumentsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListKnowledgeBaseDocuments"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base that is connected to the data
     * source.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    ListKnowledgeBaseDocumentsRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data source that contains the documents.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    ListKnowledgeBaseDocumentsRequest& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in the response. If the total number
     * of results is greater than this value, use the token returned in the response in
     * the <code>nextToken</code> field when making another request to return the next
     * batch of results.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListKnowledgeBaseDocumentsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the total number of results is greater than the <code>maxResults</code>
     * value provided in the request, enter the token returned in the
     * <code>nextToken</code> field in the response in this field to return the next
     * batch of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListKnowledgeBaseDocumentsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
