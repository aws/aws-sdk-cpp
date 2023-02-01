/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-reviewer/CodeGuruReviewer_EXPORTS.h>
#include <aws/codeguru-reviewer/CodeGuruReviewerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruReviewer
{
namespace Model
{

  /**
   */
  class DescribeRecommendationFeedbackRequest : public CodeGuruReviewerRequest
  {
  public:
    AWS_CODEGURUREVIEWER_API DescribeRecommendationFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRecommendationFeedback"; }

    AWS_CODEGURUREVIEWER_API Aws::String SerializePayload() const override;

    AWS_CODEGURUREVIEWER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline DescribeRecommendationFeedbackRequest& WithCodeReviewArn(const Aws::String& value) { SetCodeReviewArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithCodeReviewArn(Aws::String&& value) { SetCodeReviewArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the <a
     * href="https://docs.aws.amazon.com/codeguru/latest/reviewer-api/API_CodeReview.html">CodeReview</a>
     * object. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithCodeReviewArn(const char* value) { SetCodeReviewArn(value); return *this;}


    /**
     * <p>The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback.</p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback.</p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback.</p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback.</p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback.</p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback.</p>
     */
    inline DescribeRecommendationFeedbackRequest& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback.</p>
     */
    inline DescribeRecommendationFeedbackRequest& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback.</p>
     */
    inline DescribeRecommendationFeedbackRequest& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p>Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request.</p> <p> The
     * <code>UserId</code> is an IAM principal that can be specified as an Amazon Web
     * Services account ID or an Amazon Resource Name (ARN). For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p>Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request.</p> <p> The
     * <code>UserId</code> is an IAM principal that can be specified as an Amazon Web
     * Services account ID or an Amazon Resource Name (ARN). For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p>Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request.</p> <p> The
     * <code>UserId</code> is an IAM principal that can be specified as an Amazon Web
     * Services account ID or an Amazon Resource Name (ARN). For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p>Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request.</p> <p> The
     * <code>UserId</code> is an IAM principal that can be specified as an Amazon Web
     * Services account ID or an Amazon Resource Name (ARN). For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p>Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request.</p> <p> The
     * <code>UserId</code> is an IAM principal that can be specified as an Amazon Web
     * Services account ID or an Amazon Resource Name (ARN). For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p>Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request.</p> <p> The
     * <code>UserId</code> is an IAM principal that can be specified as an Amazon Web
     * Services account ID or an Amazon Resource Name (ARN). For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline DescribeRecommendationFeedbackRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p>Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request.</p> <p> The
     * <code>UserId</code> is an IAM principal that can be specified as an Amazon Web
     * Services account ID or an Amazon Resource Name (ARN). For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline DescribeRecommendationFeedbackRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p>Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request.</p> <p> The
     * <code>UserId</code> is an IAM principal that can be specified as an Amazon Web
     * Services account ID or an Amazon Resource Name (ARN). For more information, see
     * <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#Principal_specifying">
     * Specifying a Principal</a> in the <i>Amazon Web Services Identity and Access
     * Management User Guide</i>.</p>
     */
    inline DescribeRecommendationFeedbackRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_codeReviewArn;
    bool m_codeReviewArnHasBeenSet = false;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet = false;

    Aws::String m_userId;
    bool m_userIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
