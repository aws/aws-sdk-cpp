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
    AWS_CODEGURUREVIEWER_API RecommendationFeedback() = default;
    AWS_CODEGURUREVIEWER_API RecommendationFeedback(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API RecommendationFeedback& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEGURUREVIEWER_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    RecommendationFeedback& WithCodeReviewArn(CodeReviewArnT&& value) { SetCodeReviewArn(std::forward<CodeReviewArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recommendation ID that can be used to track the provided recommendations.
     * Later on it can be used to collect the feedback.</p>
     */
    inline const Aws::String& GetRecommendationId() const { return m_recommendationId; }
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }
    template<typename RecommendationIdT = Aws::String>
    void SetRecommendationId(RecommendationIdT&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::forward<RecommendationIdT>(value); }
    template<typename RecommendationIdT = Aws::String>
    RecommendationFeedback& WithRecommendationId(RecommendationIdT&& value) { SetRecommendationId(std::forward<RecommendationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List for storing reactions. Reactions are utf-8 text code for emojis. You can
     * send an empty list to clear off all your feedback.</p>
     */
    inline const Aws::Vector<Reaction>& GetReactions() const { return m_reactions; }
    inline bool ReactionsHasBeenSet() const { return m_reactionsHasBeenSet; }
    template<typename ReactionsT = Aws::Vector<Reaction>>
    void SetReactions(ReactionsT&& value) { m_reactionsHasBeenSet = true; m_reactions = std::forward<ReactionsT>(value); }
    template<typename ReactionsT = Aws::Vector<Reaction>>
    RecommendationFeedback& WithReactions(ReactionsT&& value) { SetReactions(std::forward<ReactionsT>(value)); return *this;}
    inline RecommendationFeedback& AddReactions(Reaction value) { m_reactionsHasBeenSet = true; m_reactions.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the user that made the API call.</p> <p> The <code>UserId</code> is
     * an IAM principal that can be specified as an Amazon Web Services account ID or
     * an Amazon Resource Name (ARN). For more information, see <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline const Aws::String& GetUserId() const { return m_userId; }
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
    template<typename UserIdT = Aws::String>
    void SetUserId(UserIdT&& value) { m_userIdHasBeenSet = true; m_userId = std::forward<UserIdT>(value); }
    template<typename UserIdT = Aws::String>
    RecommendationFeedback& WithUserId(UserIdT&& value) { SetUserId(std::forward<UserIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the feedback was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTimeStamp() const { return m_createdTimeStamp; }
    inline bool CreatedTimeStampHasBeenSet() const { return m_createdTimeStampHasBeenSet; }
    template<typename CreatedTimeStampT = Aws::Utils::DateTime>
    void SetCreatedTimeStamp(CreatedTimeStampT&& value) { m_createdTimeStampHasBeenSet = true; m_createdTimeStamp = std::forward<CreatedTimeStampT>(value); }
    template<typename CreatedTimeStampT = Aws::Utils::DateTime>
    RecommendationFeedback& WithCreatedTimeStamp(CreatedTimeStampT&& value) { SetCreatedTimeStamp(std::forward<CreatedTimeStampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the feedback was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTimeStamp() const { return m_lastUpdatedTimeStamp; }
    inline bool LastUpdatedTimeStampHasBeenSet() const { return m_lastUpdatedTimeStampHasBeenSet; }
    template<typename LastUpdatedTimeStampT = Aws::Utils::DateTime>
    void SetLastUpdatedTimeStamp(LastUpdatedTimeStampT&& value) { m_lastUpdatedTimeStampHasBeenSet = true; m_lastUpdatedTimeStamp = std::forward<LastUpdatedTimeStampT>(value); }
    template<typename LastUpdatedTimeStampT = Aws::Utils::DateTime>
    RecommendationFeedback& WithLastUpdatedTimeStamp(LastUpdatedTimeStampT&& value) { SetLastUpdatedTimeStamp(std::forward<LastUpdatedTimeStampT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_codeReviewArn;
    bool m_codeReviewArnHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::Vector<Reaction> m_reactions;
    bool m_reactionsHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;

    Aws::Utils::DateTime m_createdTimeStamp{};
    bool m_createdTimeStampHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTimeStamp{};
    bool m_lastUpdatedTimeStampHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
