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
  class AWS_MTURK_API ReviewReport
  {
  public:
    ReviewReport();
    ReviewReport(Aws::Utils::Json::JsonView jsonValue);
    ReviewReport& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_reviewResultsHasBeenSet;

    Aws::Vector<ReviewActionDetail> m_reviewActions;
    bool m_reviewActionsHasBeenSet;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
