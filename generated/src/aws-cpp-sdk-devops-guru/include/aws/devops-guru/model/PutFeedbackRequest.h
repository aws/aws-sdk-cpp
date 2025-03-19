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
    AWS_DEVOPSGURU_API PutFeedbackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutFeedback"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The feedback from customers is about the recommendations in this insight.
     * </p>
     */
    inline const InsightFeedback& GetInsightFeedback() const { return m_insightFeedback; }
    inline bool InsightFeedbackHasBeenSet() const { return m_insightFeedbackHasBeenSet; }
    template<typename InsightFeedbackT = InsightFeedback>
    void SetInsightFeedback(InsightFeedbackT&& value) { m_insightFeedbackHasBeenSet = true; m_insightFeedback = std::forward<InsightFeedbackT>(value); }
    template<typename InsightFeedbackT = InsightFeedback>
    PutFeedbackRequest& WithInsightFeedback(InsightFeedbackT&& value) { SetInsightFeedback(std::forward<InsightFeedbackT>(value)); return *this;}
    ///@}
  private:

    InsightFeedback m_insightFeedback;
    bool m_insightFeedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
