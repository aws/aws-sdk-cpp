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
    AWS_KENDRARANKING_API RescoreRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Rescore"; }

    AWS_KENDRARANKING_API Aws::String SerializePayload() const override;

    AWS_KENDRARANKING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The identifier of the rescore execution plan. A rescore execution plan is an
     * Amazon Kendra Intelligent Ranking resource used for provisioning the
     * <code>Rescore</code> API.</p>
     */
    inline const Aws::String& GetRescoreExecutionPlanId() const{ return m_rescoreExecutionPlanId; }

    /**
     * <p>The identifier of the rescore execution plan. A rescore execution plan is an
     * Amazon Kendra Intelligent Ranking resource used for provisioning the
     * <code>Rescore</code> API.</p>
     */
    inline bool RescoreExecutionPlanIdHasBeenSet() const { return m_rescoreExecutionPlanIdHasBeenSet; }

    /**
     * <p>The identifier of the rescore execution plan. A rescore execution plan is an
     * Amazon Kendra Intelligent Ranking resource used for provisioning the
     * <code>Rescore</code> API.</p>
     */
    inline void SetRescoreExecutionPlanId(const Aws::String& value) { m_rescoreExecutionPlanIdHasBeenSet = true; m_rescoreExecutionPlanId = value; }

    /**
     * <p>The identifier of the rescore execution plan. A rescore execution plan is an
     * Amazon Kendra Intelligent Ranking resource used for provisioning the
     * <code>Rescore</code> API.</p>
     */
    inline void SetRescoreExecutionPlanId(Aws::String&& value) { m_rescoreExecutionPlanIdHasBeenSet = true; m_rescoreExecutionPlanId = std::move(value); }

    /**
     * <p>The identifier of the rescore execution plan. A rescore execution plan is an
     * Amazon Kendra Intelligent Ranking resource used for provisioning the
     * <code>Rescore</code> API.</p>
     */
    inline void SetRescoreExecutionPlanId(const char* value) { m_rescoreExecutionPlanIdHasBeenSet = true; m_rescoreExecutionPlanId.assign(value); }

    /**
     * <p>The identifier of the rescore execution plan. A rescore execution plan is an
     * Amazon Kendra Intelligent Ranking resource used for provisioning the
     * <code>Rescore</code> API.</p>
     */
    inline RescoreRequest& WithRescoreExecutionPlanId(const Aws::String& value) { SetRescoreExecutionPlanId(value); return *this;}

    /**
     * <p>The identifier of the rescore execution plan. A rescore execution plan is an
     * Amazon Kendra Intelligent Ranking resource used for provisioning the
     * <code>Rescore</code> API.</p>
     */
    inline RescoreRequest& WithRescoreExecutionPlanId(Aws::String&& value) { SetRescoreExecutionPlanId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the rescore execution plan. A rescore execution plan is an
     * Amazon Kendra Intelligent Ranking resource used for provisioning the
     * <code>Rescore</code> API.</p>
     */
    inline RescoreRequest& WithRescoreExecutionPlanId(const char* value) { SetRescoreExecutionPlanId(value); return *this;}


    /**
     * <p>The input query from the search service.</p>
     */
    inline const Aws::String& GetSearchQuery() const{ return m_searchQuery; }

    /**
     * <p>The input query from the search service.</p>
     */
    inline bool SearchQueryHasBeenSet() const { return m_searchQueryHasBeenSet; }

    /**
     * <p>The input query from the search service.</p>
     */
    inline void SetSearchQuery(const Aws::String& value) { m_searchQueryHasBeenSet = true; m_searchQuery = value; }

    /**
     * <p>The input query from the search service.</p>
     */
    inline void SetSearchQuery(Aws::String&& value) { m_searchQueryHasBeenSet = true; m_searchQuery = std::move(value); }

    /**
     * <p>The input query from the search service.</p>
     */
    inline void SetSearchQuery(const char* value) { m_searchQueryHasBeenSet = true; m_searchQuery.assign(value); }

    /**
     * <p>The input query from the search service.</p>
     */
    inline RescoreRequest& WithSearchQuery(const Aws::String& value) { SetSearchQuery(value); return *this;}

    /**
     * <p>The input query from the search service.</p>
     */
    inline RescoreRequest& WithSearchQuery(Aws::String&& value) { SetSearchQuery(std::move(value)); return *this;}

    /**
     * <p>The input query from the search service.</p>
     */
    inline RescoreRequest& WithSearchQuery(const char* value) { SetSearchQuery(value); return *this;}


    /**
     * <p>The list of documents for Amazon Kendra Intelligent Ranking to rescore or
     * rank on.</p>
     */
    inline const Aws::Vector<Document>& GetDocuments() const{ return m_documents; }

    /**
     * <p>The list of documents for Amazon Kendra Intelligent Ranking to rescore or
     * rank on.</p>
     */
    inline bool DocumentsHasBeenSet() const { return m_documentsHasBeenSet; }

    /**
     * <p>The list of documents for Amazon Kendra Intelligent Ranking to rescore or
     * rank on.</p>
     */
    inline void SetDocuments(const Aws::Vector<Document>& value) { m_documentsHasBeenSet = true; m_documents = value; }

    /**
     * <p>The list of documents for Amazon Kendra Intelligent Ranking to rescore or
     * rank on.</p>
     */
    inline void SetDocuments(Aws::Vector<Document>&& value) { m_documentsHasBeenSet = true; m_documents = std::move(value); }

    /**
     * <p>The list of documents for Amazon Kendra Intelligent Ranking to rescore or
     * rank on.</p>
     */
    inline RescoreRequest& WithDocuments(const Aws::Vector<Document>& value) { SetDocuments(value); return *this;}

    /**
     * <p>The list of documents for Amazon Kendra Intelligent Ranking to rescore or
     * rank on.</p>
     */
    inline RescoreRequest& WithDocuments(Aws::Vector<Document>&& value) { SetDocuments(std::move(value)); return *this;}

    /**
     * <p>The list of documents for Amazon Kendra Intelligent Ranking to rescore or
     * rank on.</p>
     */
    inline RescoreRequest& AddDocuments(const Document& value) { m_documentsHasBeenSet = true; m_documents.push_back(value); return *this; }

    /**
     * <p>The list of documents for Amazon Kendra Intelligent Ranking to rescore or
     * rank on.</p>
     */
    inline RescoreRequest& AddDocuments(Document&& value) { m_documentsHasBeenSet = true; m_documents.push_back(std::move(value)); return *this; }

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
