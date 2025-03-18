/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kendra/Kendra_EXPORTS.h>
#include <aws/kendra/KendraRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/kendra/model/ClickFeedback.h>
#include <aws/kendra/model/RelevanceFeedback.h>
#include <utility>

namespace Aws
{
namespace kendra
{
namespace Model
{

  /**
   */
  class SubmitFeedbackRequest : public KendraRequest
  {
  public:
    AWS_KENDRA_API SubmitFeedbackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SubmitFeedback"; }

    AWS_KENDRA_API Aws::String SerializePayload() const override;

    AWS_KENDRA_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The identifier of the index that was queried.</p>
     */
    inline const Aws::String& GetIndexId() const { return m_indexId; }
    inline bool IndexIdHasBeenSet() const { return m_indexIdHasBeenSet; }
    template<typename IndexIdT = Aws::String>
    void SetIndexId(IndexIdT&& value) { m_indexIdHasBeenSet = true; m_indexId = std::forward<IndexIdT>(value); }
    template<typename IndexIdT = Aws::String>
    SubmitFeedbackRequest& WithIndexId(IndexIdT&& value) { SetIndexId(std::forward<IndexIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the specific query for which you are submitting feedback.
     * The query ID is returned in the response to the <code>Query</code> API.</p>
     */
    inline const Aws::String& GetQueryId() const { return m_queryId; }
    inline bool QueryIdHasBeenSet() const { return m_queryIdHasBeenSet; }
    template<typename QueryIdT = Aws::String>
    void SetQueryId(QueryIdT&& value) { m_queryIdHasBeenSet = true; m_queryId = std::forward<QueryIdT>(value); }
    template<typename QueryIdT = Aws::String>
    SubmitFeedbackRequest& WithQueryId(QueryIdT&& value) { SetQueryId(std::forward<QueryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tells Amazon Kendra that a particular search result link was chosen by the
     * user. </p>
     */
    inline const Aws::Vector<ClickFeedback>& GetClickFeedbackItems() const { return m_clickFeedbackItems; }
    inline bool ClickFeedbackItemsHasBeenSet() const { return m_clickFeedbackItemsHasBeenSet; }
    template<typename ClickFeedbackItemsT = Aws::Vector<ClickFeedback>>
    void SetClickFeedbackItems(ClickFeedbackItemsT&& value) { m_clickFeedbackItemsHasBeenSet = true; m_clickFeedbackItems = std::forward<ClickFeedbackItemsT>(value); }
    template<typename ClickFeedbackItemsT = Aws::Vector<ClickFeedback>>
    SubmitFeedbackRequest& WithClickFeedbackItems(ClickFeedbackItemsT&& value) { SetClickFeedbackItems(std::forward<ClickFeedbackItemsT>(value)); return *this;}
    template<typename ClickFeedbackItemsT = ClickFeedback>
    SubmitFeedbackRequest& AddClickFeedbackItems(ClickFeedbackItemsT&& value) { m_clickFeedbackItemsHasBeenSet = true; m_clickFeedbackItems.emplace_back(std::forward<ClickFeedbackItemsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides Amazon Kendra with relevant or not relevant feedback for whether a
     * particular item was relevant to the search.</p>
     */
    inline const Aws::Vector<RelevanceFeedback>& GetRelevanceFeedbackItems() const { return m_relevanceFeedbackItems; }
    inline bool RelevanceFeedbackItemsHasBeenSet() const { return m_relevanceFeedbackItemsHasBeenSet; }
    template<typename RelevanceFeedbackItemsT = Aws::Vector<RelevanceFeedback>>
    void SetRelevanceFeedbackItems(RelevanceFeedbackItemsT&& value) { m_relevanceFeedbackItemsHasBeenSet = true; m_relevanceFeedbackItems = std::forward<RelevanceFeedbackItemsT>(value); }
    template<typename RelevanceFeedbackItemsT = Aws::Vector<RelevanceFeedback>>
    SubmitFeedbackRequest& WithRelevanceFeedbackItems(RelevanceFeedbackItemsT&& value) { SetRelevanceFeedbackItems(std::forward<RelevanceFeedbackItemsT>(value)); return *this;}
    template<typename RelevanceFeedbackItemsT = RelevanceFeedback>
    SubmitFeedbackRequest& AddRelevanceFeedbackItems(RelevanceFeedbackItemsT&& value) { m_relevanceFeedbackItemsHasBeenSet = true; m_relevanceFeedbackItems.emplace_back(std::forward<RelevanceFeedbackItemsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_indexId;
    bool m_indexIdHasBeenSet = false;

    Aws::String m_queryId;
    bool m_queryIdHasBeenSet = false;

    Aws::Vector<ClickFeedback> m_clickFeedbackItems;
    bool m_clickFeedbackItemsHasBeenSet = false;

    Aws::Vector<RelevanceFeedback> m_relevanceFeedbackItems;
    bool m_relevanceFeedbackItemsHasBeenSet = false;
  };

} // namespace Model
} // namespace kendra
} // namespace Aws
