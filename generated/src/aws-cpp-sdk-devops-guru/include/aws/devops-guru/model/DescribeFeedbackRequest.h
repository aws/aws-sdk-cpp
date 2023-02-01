/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/DevOpsGuruRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DevOpsGuru
{
namespace Model
{

  /**
   */
  class DescribeFeedbackRequest : public DevOpsGuruRequest
  {
  public:
    AWS_DEVOPSGURU_API DescribeFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFeedback"; }

    AWS_DEVOPSGURU_API Aws::String SerializePayload() const override;


    /**
     * <p> The ID of the insight for which the feedback was provided. </p>
     */
    inline const Aws::String& GetInsightId() const{ return m_insightId; }

    /**
     * <p> The ID of the insight for which the feedback was provided. </p>
     */
    inline bool InsightIdHasBeenSet() const { return m_insightIdHasBeenSet; }

    /**
     * <p> The ID of the insight for which the feedback was provided. </p>
     */
    inline void SetInsightId(const Aws::String& value) { m_insightIdHasBeenSet = true; m_insightId = value; }

    /**
     * <p> The ID of the insight for which the feedback was provided. </p>
     */
    inline void SetInsightId(Aws::String&& value) { m_insightIdHasBeenSet = true; m_insightId = std::move(value); }

    /**
     * <p> The ID of the insight for which the feedback was provided. </p>
     */
    inline void SetInsightId(const char* value) { m_insightIdHasBeenSet = true; m_insightId.assign(value); }

    /**
     * <p> The ID of the insight for which the feedback was provided. </p>
     */
    inline DescribeFeedbackRequest& WithInsightId(const Aws::String& value) { SetInsightId(value); return *this;}

    /**
     * <p> The ID of the insight for which the feedback was provided. </p>
     */
    inline DescribeFeedbackRequest& WithInsightId(Aws::String&& value) { SetInsightId(std::move(value)); return *this;}

    /**
     * <p> The ID of the insight for which the feedback was provided. </p>
     */
    inline DescribeFeedbackRequest& WithInsightId(const char* value) { SetInsightId(value); return *this;}

  private:

    Aws::String m_insightId;
    bool m_insightIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
