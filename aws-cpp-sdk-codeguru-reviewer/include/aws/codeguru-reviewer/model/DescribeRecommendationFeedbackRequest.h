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
  class AWS_CODEGURUREVIEWER_API DescribeRecommendationFeedbackRequest : public CodeGuruReviewerRequest
  {
  public:
    DescribeRecommendationFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeRecommendationFeedback"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline const Aws::String& GetCodeReviewArn() const{ return m_codeReviewArn; }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline bool CodeReviewArnHasBeenSet() const { return m_codeReviewArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline void SetCodeReviewArn(const Aws::String& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline void SetCodeReviewArn(Aws::String&& value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline void SetCodeReviewArn(const char* value) { m_codeReviewArnHasBeenSet = true; m_codeReviewArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithCodeReviewArn(const Aws::String& value) { SetCodeReviewArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithCodeReviewArn(Aws::String&& value) { SetCodeReviewArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) that identifies the code review. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithCodeReviewArn(const char* value) { SetCodeReviewArn(value); return *this;}


    /**
     * <p> The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback. </p>
     */
    inline const Aws::String& GetRecommendationId() const{ return m_recommendationId; }

    /**
     * <p> The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback. </p>
     */
    inline bool RecommendationIdHasBeenSet() const { return m_recommendationIdHasBeenSet; }

    /**
     * <p> The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback. </p>
     */
    inline void SetRecommendationId(const Aws::String& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = value; }

    /**
     * <p> The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback. </p>
     */
    inline void SetRecommendationId(Aws::String&& value) { m_recommendationIdHasBeenSet = true; m_recommendationId = std::move(value); }

    /**
     * <p> The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback. </p>
     */
    inline void SetRecommendationId(const char* value) { m_recommendationIdHasBeenSet = true; m_recommendationId.assign(value); }

    /**
     * <p> The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithRecommendationId(const Aws::String& value) { SetRecommendationId(value); return *this;}

    /**
     * <p> The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithRecommendationId(Aws::String&& value) { SetRecommendationId(std::move(value)); return *this;}

    /**
     * <p> The recommendation ID that can be used to track the provided recommendations
     * and then to collect the feedback. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithRecommendationId(const char* value) { SetRecommendationId(value); return *this;}


    /**
     * <p> Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request. </p>
     */
    inline const Aws::String& GetUserId() const{ return m_userId; }

    /**
     * <p> Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request. </p>
     */
    inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }

    /**
     * <p> Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request. </p>
     */
    inline void SetUserId(const Aws::String& value) { m_userIdHasBeenSet = true; m_userId = value; }

    /**
     * <p> Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request. </p>
     */
    inline void SetUserId(Aws::String&& value) { m_userIdHasBeenSet = true; m_userId = std::move(value); }

    /**
     * <p> Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request. </p>
     */
    inline void SetUserId(const char* value) { m_userIdHasBeenSet = true; m_userId.assign(value); }

    /**
     * <p> Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithUserId(const Aws::String& value) { SetUserId(value); return *this;}

    /**
     * <p> Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithUserId(Aws::String&& value) { SetUserId(std::move(value)); return *this;}

    /**
     * <p> Optional parameter to describe the feedback for a given user. If this is not
     * supplied, it defaults to the user making the request. </p>
     */
    inline DescribeRecommendationFeedbackRequest& WithUserId(const char* value) { SetUserId(value); return *this;}

  private:

    Aws::String m_codeReviewArn;
    bool m_codeReviewArnHasBeenSet;

    Aws::String m_recommendationId;
    bool m_recommendationIdHasBeenSet;

    Aws::String m_userId;
    bool m_userIdHasBeenSet;
  };

} // namespace Model
} // namespace CodeGuruReviewer
} // namespace Aws
