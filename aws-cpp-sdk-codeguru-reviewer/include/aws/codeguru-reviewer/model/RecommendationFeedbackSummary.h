/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p> Information about recommendation feedback summaries. </p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codeguru-reviewer-2019-09-19/RecommendationFeedbackSummary">AWS
   * API Reference</a></p>
   */
  class AWS_CODEGURUREVIEWER_API RecommendationFeedbackSummary
  {
  public:
    RecommendationFeedbackSummary();
    RecommendationFeedbackSummary(Aws::Utils::Json::JsonView jsonValue);
    RecommendationFeedbackSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline RecommendationFeedbackSummary& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline RecommendationFeedbackSummary& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p> The recommendation ID that can be used to track the provided
     * recommendations. Later on it can be used to collect the feedback. </p>
     */
    inline RecommendationFeedbackSummary& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p> List for storing reactions. Reactions are utf-8 text code for emojis. </p>
     */
    inline const Aws::Vector<Reaction>& GetReactions() const{ return m_reactions; }

    /**
     * <p> List for storing reactions. Reactions are utf-8 text code for emojis. </p>
     */
    inline bool ReactionsHasBeenSet() const { return m_reactionsHasBeenSet; }

    /**
     * <p> List for storing reactions. Reactions are utf-8 text code for emojis. </p>
     */
    inline void SetReactions(const Aws::Vector<Reaction>& value) { m_reactionsHasBeenSet = true; m_reactions = value; }

    /**
     * <p> List for storing reactions. Reactions are utf-8 text code for emojis. </p>
     */
    inline void SetReactions(Aws::Vector<Reaction>&& value) { m_reactionsHasBeenSet = true; m_reactions = std::move(value); }

    /**
     * <p> List for storing reactions. Reactions are utf-8 text code for emojis. </p>
     */
    inline RecommendationFeedbackSummary& WithReactions(const Aws::Vector<Reaction>& value) { SetReactions(value); return *this;}

    /**
     * <p> List for storing reactions. Reactions are utf-8 text code for emojis. </p>
     */
    inline RecommendationFeedbackSummary& WithReactions(Aws::Vector<Reaction>&& value) { SetReactions(std::move(value)); return *this;}

    /**
     * <p> List for storing reactions. Reactions are utf-8 text code for emojis. </p>
     */
    inline RecommendationFeedbackSummary& AddReactions(const Reaction& value) { m_reactionsHasBeenSet = true; m_reactions.push_back(value); return *this; }

    /**
     * <p> List for storing reactions. Reactions are utf-8 text code for emojis. </p>
     */
    inline RecommendationFeedbackSummary& AddReactions(Reaction&& value) { m_reactionsHasBeenSet = true; m_reactions.push_back(std::move(value)); return *this; }


    /**
     * <p> The identifier for the user that gave the feedback. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p> The identifier for the user that gave the feedback. </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p> The identifier for the user that gave the feedback. </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p> The identifier for the user that gave the feedback. </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p> The identifier for the user that gave the feedback. </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p> The identifier for the user that gave the feedback. </p>
     */
    inline RecommendationFeedbackSummary& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p> The identifier for the user that gave the feedback. </p>
     */
    inline RecommendationFeedbackSummary& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p> The identifier for the user that gave the feedback. </p>
     */
    inline RecommendationFeedbackSummary& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet;

    Aws::Vector<Reaction> m_reactions;
    bool m_reactionsHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
