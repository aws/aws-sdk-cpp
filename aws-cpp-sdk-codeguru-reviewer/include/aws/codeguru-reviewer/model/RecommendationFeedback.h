/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/codeguru-reviewer/model/Reaction.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   * <p>Information about the recommendation feedback.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/RecommendationFeedback">AWS
   * API Reference</a></p>
   */
  class RecommendationFeedback
  {
  public:
    AWS_CODEGURUREVIEWER_API RecommendationFeedback();
    AWS_CODEGURUREVIEWER_API RecommendationFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API RecommendationFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline const Aws::String& GetCodeReviewArn() const{ return m_codeReviewArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline bool CodeReviewArnHasBeenSet() const { return m_codeReviewArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline void SetCodeReviewArn(const Aws::String& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline void SetCodeReviewArn(Aws::String&& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline void SetCodeReviewArn(const char* value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline RecommendationFeedback& WithCodeReviewArn(const Aws::String& value) { SetCodeReviewArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline RecommendationFeedback& WithCodeReviewArn(Aws::String&& value) { SetCodeReviewArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline RecommendationFeedback& WithCodeReviewArn(const char* value) { SetCodeReviewArn(value); return *this;}


    /**
     * <p>The recommendation ID that can be used to track the provided recommendations.
     * Later on it can be used to collect the feedback.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations.
     * Later on it can be used to collect the feedback.</p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations.
     * Later on it can be used to collect the feedback.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations.
     * Later on it can be used to collect the feedback.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations.
     * Later on it can be used to collect the feedback.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations.
     * Later on it can be used to collect the feedback.</p>
     */
    inline RecommendationFeedback& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations.
     * Later on it can be used to collect the feedback.</p>
     */
    inline RecommendationFeedback& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations.
     * Later on it can be used to collect the feedback.</p>
     */
    inline RecommendationFeedback& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. You can
     * send an empty list to clear off all your feedback.</p>
     */
    inline const Aws::Vector<Reaction>& GetReactions() const{ return m_reactions; }

    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. You can
     * send an empty list to clear off all your feedback.</p>
     */
    inline bool ReactionsHasBeenSet() const { return m_reactionsHasBeenSet; }

    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. You can
     * send an empty list to clear off all your feedback.</p>
     */
    inline void SetReactions(const Aws::Vector<Reaction>& value) { m_reactionsHasBeenSet = true; m_reactions = value; }

    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. You can
     * send an empty list to clear off all your feedback.</p>
     */
    inline void SetReactions(Aws::Vector<Reaction>&& value) { m_reactionsHasBeenSet = true; m_reactions = std::move(value); }

    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. You can
     * send an empty list to clear off all your feedback.</p>
     */
    inline RecommendationFeedback& WithReactions(const Aws::Vector<Reaction>& value) { SetReactions(value); return *this;}

    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. You can
     * send an empty list to clear off all your feedback.</p>
     */
    inline RecommendationFeedback& WithReactions(Aws::Vector<Reaction>&& value) { SetReactions(std::move(value)); return *this;}

    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. You can
     * send an empty list to clear off all your feedback.</p>
     */
    inline RecommendationFeedback& AddReactions(const Reaction& value) { m_reactionsHasBeenSet = true; m_reactions.push_back(value); return *this; }

    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. You can
     * send an empty list to clear off all your feedback.</p>
     */
    inline RecommendationFeedback& AddReactions(Reaction&& value) { m_reactionsHasBeenSet = true; m_reactions.push_back(std::move(value)); return *this; }


    /**
     * <p>The ID of the user that made the API call.</p> <p> The <code>UserId</code> is
     * an IAM principal that can be specified as an Amazon Web Services account ID or
     * an Amazon Resource Name (ARN). For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>The ID of the user that made the API call.</p> <p> The <code>UserId</code> is
     * an IAM principal that can be specified as an Amazon Web Services account ID or
     * an Amazon Resource Name (ARN). For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>The ID of the user that made the API call.</p> <p> The <code>UserId</code> is
     * an IAM principal that can be specified as an Amazon Web Services account ID or
     * an Amazon Resource Name (ARN). For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>The ID of the user that made the API call.</p> <p> The <code>UserId</code> is
     * an IAM principal that can be specified as an Amazon Web Services account ID or
     * an Amazon Resource Name (ARN). For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>The ID of the user that made the API call.</p> <p> The <code>UserId</code> is
     * an IAM principal that can be specified as an Amazon Web Services account ID or
     * an Amazon Resource Name (ARN). For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>The ID of the user that made the API call.</p> <p> The <code>UserId</code> is
     * an IAM principal that can be specified as an Amazon Web Services account ID or
     * an Amazon Resource Name (ARN). For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline RecommendationFeedback& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>The ID of the user that made the API call.</p> <p> The <code>UserId</code> is
     * an IAM principal that can be specified as an Amazon Web Services account ID or
     * an Amazon Resource Name (ARN). For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline RecommendationFeedback& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>The ID of the user that made the API call.</p> <p> The <code>UserId</code> is
     * an IAM principal that can be specified as an Amazon Web Services account ID or
     * an Amazon Resource Name (ARN). For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline RecommendationFeedback& WithUserId(const char* value) { SetUserId(value); return *this;}


    /**
     * <p>The time at which the feedback was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimeStamp() const{ return m_createdTimeStamp; }

    /**
     * <p>The time at which the feedback was created.</p>
     */
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }

    /**
     * <p>The time at which the feedback was created.</p>
     */
    inline void SetCreatedTimeStamp(const Aws::Utils::DateTime& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = value; }

    /**
     * <p>The time at which the feedback was created.</p>
     */
    inline void SetCreatedTimeStamp(Aws::Utils::DateTime&& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = std::move(value); }

    /**
     * <p>The time at which the feedback was created.</p>
     */
    inline RecommendationFeedback& WithCreatedTimeStamp(const Aws::Utils::DateTime& value) { SetCreatedTimeStamp(value); return *this;}

    /**
     * <p>The time at which the feedback was created.</p>
     */
    inline RecommendationFeedback& WithCreatedTimeStamp(Aws::Utils::DateTime&& value) { SetCreatedTimeStamp(std::move(value)); return *this;}


    /**
     * <p>The time at which the feedback was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimeStamp() const{ return m_lastUpdatedTimeStamp; }

    /**
     * <p>The time at which the feedback was last updated.</p>
     */
    inline bool LastUpdatedTimeStampHasBeenSet() const { return m_lastUpdatedTimeStampHasBeenSet; }

    /**
     * <p>The time at which the feedback was last updated.</p>
     */
    inline void SetLastUpdatedTimeStamp(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = value; }

    /**
     * <p>The time at which the feedback was last updated.</p>
     */
    inline void SetLastUpdatedTimeStamp(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = std::move(value); }

    /**
     * <p>The time at which the feedback was last updated.</p>
     */
    inline RecommendationFeedback& WithLastUpdatedTimeStamp(const Aws::Utils::DateTime& value) { SetLastUpdatedTimeStamp(value); return *this;}

    /**
     * <p>The time at which the feedback was last updated.</p>
     */
    inline RecommendationFeedback& WithLastUpdatedTimeStamp(Aws::Utils::DateTime&& value) { SetLastUpdatedTimeStamp(std::move(value)); return *this;}

  private:

    Aws::String m_codeReviewArn;
    bool m_codeReviewArnHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::Vector<Reaction> m_reactions;
    bool m_reactionsHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimeStamp;
    bool m_createdTimeStampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimeStamp;
    bool m_lastUpdatedTimeStampHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
