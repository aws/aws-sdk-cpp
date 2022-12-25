/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/ReviewResultDetail.h>
#include <aws/mturk-requester/model/ReviewActionDetail.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> Contains both ReviewResult and ReviewAction elements for a particular HIT.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/ReviewReport">AWS
   * API Reference</a></p>
   */
  class ReviewReport
  {
  public:
    AWS_MTURK_API ReviewReport();
    AWS_MTURK_API ReviewReport(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API ReviewReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A list of ReviewResults objects for each action specified in the Review
     * Policy. </p>
     */
    inline const Aws::Vector<ReviewResultDetail>& GetReviewResults() const{ return m_reviewResults; }

    /**
     * <p> A list of ReviewResults objects for each action specified in the Review
     * Policy. </p>
     */
    inline bool ReviewResultsHasBeenSet() const { return m_reviewResultsHasBeenSet; }

    /**
     * <p> A list of ReviewResults objects for each action specified in the Review
     * Policy. </p>
     */
    inline void SetReviewResults(const Aws::Vector<ReviewResultDetail>& value) { m_reviewResultsHasBeenSet = true; m_reviewResults = value; }

    /**
     * <p> A list of ReviewResults objects for each action specified in the Review
     * Policy. </p>
     */
    inline void SetReviewResults(Aws::Vector<ReviewResultDetail>&& value) { m_reviewResultsHasBeenSet = true; m_reviewResults = std::move(value); }

    /**
     * <p> A list of ReviewResults objects for each action specified in the Review
     * Policy. </p>
     */
    inline ReviewReport& WithReviewResults(const Aws::Vector<ReviewResultDetail>& value) { SetReviewResults(value); return *this;}

    /**
     * <p> A list of ReviewResults objects for each action specified in the Review
     * Policy. </p>
     */
    inline ReviewReport& WithReviewResults(Aws::Vector<ReviewResultDetail>&& value) { SetReviewResults(std::move(value)); return *this;}

    /**
     * <p> A list of ReviewResults objects for each action specified in the Review
     * Policy. </p>
     */
    inline ReviewReport& AddReviewResults(const ReviewResultDetail& value) { m_reviewResultsHasBeenSet = true; m_reviewResults.push_back(value); return *this; }

    /**
     * <p> A list of ReviewResults objects for each action specified in the Review
     * Policy. </p>
     */
    inline ReviewReport& AddReviewResults(ReviewResultDetail&& value) { m_reviewResultsHasBeenSet = true; m_reviewResults.push_back(std::move(value)); return *this; }


    /**
     * <p> A list of ReviewAction objects for each action specified in the Review
     * Policy. </p>
     */
    inline const Aws::Vector<ReviewActionDetail>& GetReviewActions() const{ return m_reviewActions; }

    /**
     * <p> A list of ReviewAction objects for each action specified in the Review
     * Policy. </p>
     */
    inline bool ReviewActionsHasBeenSet() const { return m_reviewActionsHasBeenSet; }

    /**
     * <p> A list of ReviewAction objects for each action specified in the Review
     * Policy. </p>
     */
    inline void SetReviewActions(const Aws::Vector<ReviewActionDetail>& value) { m_reviewActionsHasBeenSet = true; m_reviewActions = value; }

    /**
     * <p> A list of ReviewAction objects for each action specified in the Review
     * Policy. </p>
     */
    inline void SetReviewActions(Aws::Vector<ReviewActionDetail>&& value) { m_reviewActionsHasBeenSet = true; m_reviewActions = std::move(value); }

    /**
     * <p> A list of ReviewAction objects for each action specified in the Review
     * Policy. </p>
     */
    inline ReviewReport& WithReviewActions(const Aws::Vector<ReviewActionDetail>& value) { SetReviewActions(value); return *this;}

    /**
     * <p> A list of ReviewAction objects for each action specified in the Review
     * Policy. </p>
     */
    inline ReviewReport& WithReviewActions(Aws::Vector<ReviewActionDetail>&& value) { SetReviewActions(std::move(value)); return *this;}

    /**
     * <p> A list of ReviewAction objects for each action specified in the Review
     * Policy. </p>
     */
    inline ReviewReport& AddReviewActions(const ReviewActionDetail& value) { m_reviewActionsHasBeenSet = true; m_reviewActions.push_back(value); return *this; }

    /**
     * <p> A list of ReviewAction objects for each action specified in the Review
     * Policy. </p>
     */
    inline ReviewReport& AddReviewActions(ReviewActionDetail&& value) { m_reviewActionsHasBeenSet = true; m_reviewActions.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ReviewResultDetail> m_reviewResults;
    bool m_reviewResultsHasBeenSet = false;

    Aws::Vector<ReviewActionDetail> m_reviewActions;
    bool m_reviewActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
