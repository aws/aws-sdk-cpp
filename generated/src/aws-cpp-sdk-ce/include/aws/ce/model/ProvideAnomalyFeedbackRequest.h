/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/CostExplorerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ce/model/AnomalyFeedbackType.h>
#include <utility>

namespace Aws
{
namespace CostExplorer
{
namespace Model
{

  /**
   */
  class ProvideAnomalyFeedbackRequest : public CostExplorerRequest
  {
  public:
    AWS_COSTEXPLORER_API ProvideAnomalyFeedbackRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvideAnomalyFeedback"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A cost anomaly ID. </p>
     */
    inline const Aws::String& GetAnomalyId() const{ return m_anomalyId; }

    /**
     * <p>A cost anomaly ID. </p>
     */
    inline bool AnomalyIdHasBeenSet() const { return m_anomalyIdHasBeenSet; }

    /**
     * <p>A cost anomaly ID. </p>
     */
    inline void SetAnomalyId(const Aws::String& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = value; }

    /**
     * <p>A cost anomaly ID. </p>
     */
    inline void SetAnomalyId(Aws::String&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::move(value); }

    /**
     * <p>A cost anomaly ID. </p>
     */
    inline void SetAnomalyId(const char* value) { m_anomalyIdHasBeenSet = true; m_anomalyId.assign(value); }

    /**
     * <p>A cost anomaly ID. </p>
     */
    inline ProvideAnomalyFeedbackRequest& WithAnomalyId(const Aws::String& value) { SetAnomalyId(value); return *this;}

    /**
     * <p>A cost anomaly ID. </p>
     */
    inline ProvideAnomalyFeedbackRequest& WithAnomalyId(Aws::String&& value) { SetAnomalyId(std::move(value)); return *this;}

    /**
     * <p>A cost anomaly ID. </p>
     */
    inline ProvideAnomalyFeedbackRequest& WithAnomalyId(const char* value) { SetAnomalyId(value); return *this;}


    /**
     * <p>Describes whether the cost anomaly was a planned activity or you considered
     * it an anomaly. </p>
     */
    inline const AnomalyFeedbackType& GetFeedback() const{ return m_feedback; }

    /**
     * <p>Describes whether the cost anomaly was a planned activity or you considered
     * it an anomaly. </p>
     */
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }

    /**
     * <p>Describes whether the cost anomaly was a planned activity or you considered
     * it an anomaly. </p>
     */
    inline void SetFeedback(const AnomalyFeedbackType& value) { m_feedbackHasBeenSet = true; m_feedback = value; }

    /**
     * <p>Describes whether the cost anomaly was a planned activity or you considered
     * it an anomaly. </p>
     */
    inline void SetFeedback(AnomalyFeedbackType&& value) { m_feedbackHasBeenSet = true; m_feedback = std::move(value); }

    /**
     * <p>Describes whether the cost anomaly was a planned activity or you considered
     * it an anomaly. </p>
     */
    inline ProvideAnomalyFeedbackRequest& WithFeedback(const AnomalyFeedbackType& value) { SetFeedback(value); return *this;}

    /**
     * <p>Describes whether the cost anomaly was a planned activity or you considered
     * it an anomaly. </p>
     */
    inline ProvideAnomalyFeedbackRequest& WithFeedback(AnomalyFeedbackType&& value) { SetFeedback(std::move(value)); return *this;}

  private:

    Aws::String m_anomalyId;
    bool m_anomalyIdHasBeenSet = false;

    AnomalyFeedbackType m_feedback;
    bool m_feedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
