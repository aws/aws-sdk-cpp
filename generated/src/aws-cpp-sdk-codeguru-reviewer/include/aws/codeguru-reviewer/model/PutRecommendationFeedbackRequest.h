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
    AWS_CODEGURUREVIEWER_API PutRecommendationFeedbackRequest();

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
    inline const Aws::String& GetCodeReviewArn() const{ return m_codeReviewArn; }
    inline bool CodeReviewArnHasBeenSet() const { return m_codeReviewArnHasBeenSet; }
    inline void SetCodeReviewArn(const Aws::String& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = value; }
    inline void SetCodeReviewArn(Aws::String&& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = std::move(value); }
    inline void SetCodeReviewArn(const char* value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn.assign(value); }
    inline PutRecommendationFeedbackRequest& WithCodeReviewArn(const Aws::String& value) { SetCodeReviewArn(value); return *this;}
    inline PutRecommendationFeedbackRequest& WithCodeReviewArn(Aws::String&& value) { SetCodeReviewArn(std::move(value)); return *this;}
    inline PutRecommendationFeedbackRequest& WithCodeReviewArn(const char* value) { SetCodeReviewArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }
    inline PutRecommendationFeedbackRequest& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}
    inline PutRecommendationFeedbackRequest& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}
    inline PutRecommendationFeedbackRequest& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. If you
     * send an empty list it clears all your feedback.</p>
     */
    inline const Aws::Vector<Reaction>& GetReactions() const{ return m_reactions; }
    inline bool ReactionsHasBeenSet() const { return m_reactionsHasBeenSet; }
    inline void SetReactions(const Aws::Vector<Reaction>& value) { m_reactionsHasBeenSet = true; m_reactions = value; }
    inline void SetReactions(Aws::Vector<Reaction>&& value) { m_reactionsHasBeenSet = true; m_reactions = std::move(value); }
    inline PutRecommendationFeedbackRequest& WithReactions(const Aws::Vector<Reaction>& value) { SetReactions(value); return *this;}
    inline PutRecommendationFeedbackRequest& WithReactions(Aws::Vector<Reaction>&& value) { SetReactions(std::move(value)); return *this;}
    inline PutRecommendationFeedbackRequest& AddReactions(const Reaction& value) { m_reactionsHasBeenSet = true; m_reactions.push_back(value); return *this; }
    inline PutRecommendationFeedbackRequest& AddReactions(Reaction&& value) { m_reactionsHasBeenSet = true; m_reactions.push_back(std::move(value)); return *this; }
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
