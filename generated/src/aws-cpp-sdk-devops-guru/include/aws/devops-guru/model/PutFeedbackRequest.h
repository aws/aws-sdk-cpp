/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/devops-guru/model/InsightFeedback.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class PutFeedbackRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API PutFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFeedback"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    /**
     * <p> The feedback from customers is about the recommendations in this insight.
     * </p>
     */
    inline const InsightFeedback& GetInsightFeedback() const{ return m_insightFeedback; }

    /**
     * <p> The feedback from customers is about the recommendations in this insight.
     * </p>
     */
    inline bool InsightFeedbackHasBeenSet() const { return m_insightFeedbackHasBeenSet; }

    /**
     * <p> The feedback from customers is about the recommendations in this insight.
     * </p>
     */
    inline void SetInsightFeedback(const InsightFeedback& value) { m_insightFeedbackHasBeenSet = true; m_insightFeedback = value; }

    /**
     * <p> The feedback from customers is about the recommendations in this insight.
     * </p>
     */
    inline void SetInsightFeedback(InsightFeedback&& value) { m_insightFeedbackHasBeenSet = true; m_insightFeedback = std::move(value); }

    /**
     * <p> The feedback from customers is about the recommendations in this insight.
     * </p>
     */
    inline PutFeedbackRequest& WithInsightFeedback(const InsightFeedback& value) { SetInsightFeedback(value); return *this;}

    /**
     * <p> The feedback from customers is about the recommendations in this insight.
     * </p>
     */
    inline PutFeedbackRequest& WithInsightFeedback(InsightFeedback&& value) { SetInsightFeedback(std::move(value)); return *this;}

  private:

    InsightFeedback m_insightFeedback;
    bool m_insightFeedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
