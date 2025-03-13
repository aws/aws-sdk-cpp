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
    AWS_COSTEXPLORER_API ProvideAnomalyFeedbackRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ProvideAnomalyFeedback"; }

    AWS_COSTEXPLORER_API Aws::String SerializePayload() const override;

    AWS_COSTEXPLORER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A cost anomaly ID. </p>
     */
    inline const Aws::String& GetAnomalyId() const { return m_anomalyId; }
    inline bool AnomalyIdHasBeenSet() const { return m_anomalyIdHasBeenSet; }
    template<typename AnomalyIdT = Aws::String>
    void SetAnomalyId(AnomalyIdT&& value) { m_anomalyIdHasBeenSet = true; m_anomalyId = std::forward<AnomalyIdT>(value); }
    template<typename AnomalyIdT = Aws::String>
    ProvideAnomalyFeedbackRequest& WithAnomalyId(AnomalyIdT&& value) { SetAnomalyId(std::forward<AnomalyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes whether the cost anomaly was a planned activity or you considered
     * it an anomaly. </p>
     */
    inline AnomalyFeedbackType GetFeedback() const { return m_feedback; }
    inline bool FeedbackHasBeenSet() const { return m_feedbackHasBeenSet; }
    inline void SetFeedback(AnomalyFeedbackType value) { m_feedbackHasBeenSet = true; m_feedback = value; }
    inline ProvideAnomalyFeedbackRequest& WithFeedback(AnomalyFeedbackType value) { SetFeedback(value); return *this;}
    ///@}
  private:

    Aws::String m_anomalyId;
    bool m_anomalyIdHasBeenSet = false;

    AnomalyFeedbackType m_feedback{AnomalyFeedbackType::NOT_SET};
    bool m_feedbackHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
