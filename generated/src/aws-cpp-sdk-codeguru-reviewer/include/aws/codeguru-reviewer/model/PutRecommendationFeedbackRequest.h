/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/codeguru-reviewer/model/Reaction.h>
#include <utility>

namespace Aws
{
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   */
  class PutRecommendationFeedbackRequest : public CodeGuruReviewerRequest
  {
  public:
    AWS_CODEGURUREVIEWER_API PutRecommendationFeedbackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutRecommendationFeedback"; }

    AWS_CODEGURUREVIEWER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline const Aws::String& GetCodeReviewArn() const { return m_codeReviewArn; }
    inline bool CodeReviewArnHasBeenSet() const { return m_codeReviewArnHasBeenSet; }
    template<typename CodeReviewArnT = Aws::String>
    void SetCodeReviewArn(CodeReviewArnT&& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = std::forward<CodeReviewArnT>(value); }
    template<typename CodeReviewArnT = Aws::String>
    PutRecommendationFeedbackRequest& WithCodeReviewArn(CodeReviewArnT&& value) { SetCodeReviewArn(std::forward<CodeReviewArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    PutRecommendationFeedbackRequest& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. If you
     * send an empty list it clears all your feedback.</p>
     */
    inline const Aws::Vector<Reaction>& GetReactions() const { return m_reactions; }
    inline bool ReactionsHasBeenSet() const { return m_reactionsHasBeenSet; }
    template<typename ReactionsT = Aws::Vector<Reaction>>
    void SetReactions(ReactionsT&& value) { m_reactionsHasBeenSet = true; m_reactions = std::forward<ReactionsT>(value); }
    template<typename ReactionsT = Aws::Vector<Reaction>>
    PutRecommendationFeedbackRequest& WithReactions(ReactionsT&& value) { SetReactions(std::forward<ReactionsT>(value)); return *this;}
    inline PutRecommendationFeedbackRequest& AddReactions(Reaction value) { m_reactionsHasBeenSet = true; m_reactions.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_codeReviewArn;
    bool m_codeReviewArnHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::Vector<Reaction> m_reactions;
    bool m_reactionsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
