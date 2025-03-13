/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra-ranking/KendraRanking_EXPORTS.h>
#include <aws/kendra-ranking/KendraRankingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra-ranking/model/Document.h>
#include <utility>

namespace Aws
{
namespace KendraRanking
{
namespace Model
{

  /**
   */
  class RescoreRequest : public KendraRankingRequest
  {
  public:
    AWS_KENDRARANKING_API RescoreRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Rescore"; }

    AWS_KENDRARANKING_API Aws::String SerializePayload() const override;

    AWS_KENDRARANKING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the rescore execution plan. A rescore execution plan is an
     * Amazon Kendra Intelligent Ranking resource used for provisioning the
     * <code>Rescore</code> API.</p>
     */
    inline const Aws::String& GetRescoreExecutionPlanId() const { return m_rescoreExecutionPlanId; }
    inline bool RescoreExecutionPlanIdHasBeenSet() const { return m_rescoreExecutionPlanIdHasBeenSet; }
    template<typename RescoreExecutionPlanIdT = Aws::String>
    void SetRescoreExecutionPlanId(RescoreExecutionPlanIdT&& value) { m_rescoreExecutionPlanIdHasBeenSet = true; m_rescoreExecutionPlanId = std::forward<RescoreExecutionPlanIdT>(value); }
    template<typename RescoreExecutionPlanIdT = Aws::String>
    RescoreRequest& WithRescoreExecutionPlanId(RescoreExecutionPlanIdT&& value) { SetRescoreExecutionPlanId(std::forward<RescoreExecutionPlanIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The input query from the search service.</p>
     */
    inline const Aws::String& GetSearchQuery() const { return m_searchQuery; }
    inline bool SearchQueryHasBeenSet() const { return m_searchQueryHasBeenSet; }
    template<typename SearchQueryT = Aws::String>
    void SetSearchQuery(SearchQueryT&& value) { m_searchQueryHasBeenSet = true; m_searchQuery = std::forward<SearchQueryT>(value); }
    template<typename SearchQueryT = Aws::String>
    RescoreRequest& WithSearchQuery(SearchQueryT&& value) { SetSearchQuery(std::forward<SearchQueryT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of documents for Amazon Kendra Intelligent Ranking to rescore or
     * rank on.</p>
     */
    inline const Aws::Vector<Document>& GetDocuments() const { return m_documents; }
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }
    template<typename DocumentsT = Aws::Vector<Document>>
    void SetDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents = std::forward<DocumentsT>(value); }
    template<typename DocumentsT = Aws::Vector<Document>>
    RescoreRequest& WithDocuments(DocumentsT&& value) { SetDocuments(std::forward<DocumentsT>(value)); return *this;}
    template<typename DocumentsT = Document>
    RescoreRequest& AddDocuments(DocumentsT&& value) { m_documentsHasBeenSet = true; m_documents.emplace_back(std::forward<DocumentsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_rescoreExecutionPlanId;
    bool m_rescoreExecutionPlanIdHasBeenSet = false;

    Aws::String m_searchQuery;
    bool m_searchQueryHasBeenSet = false;

    Aws::Vector<Document> m_documents;
    bool m_documentsHasBeenSet = false;
  };

} // namespace Model
} // namespace KendraRanking
} // namespace Aws
